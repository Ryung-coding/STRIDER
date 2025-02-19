import os
from ament_index_python.packages import get_package_share_directory
import rclpy
from rclpy.node import Node
from mujoco_interfaces.msg import MotorThrust, MuJoCoMeas

import mujoco
import mujoco.viewer
import time
import threading
from rclpy.executors import SingleThreadedExecutor

class MuJoCoSimulatorNode(Node):
    def __init__(self, executor):
        super().__init__('mujoco_node')
        self.executor = executor

        # Get the package directory
        package_share_dir = get_package_share_directory('mujoco_sim')
        scene_file_path = os.path.join(package_share_dir, 'xml', 'scene.xml')

        # Initialize MuJoCo model and simulation settings
        self.model = mujoco.MjModel.from_xml_path(scene_file_path)
        self.data = mujoco.MjData(self.model)
        self.model.opt.timestep = 0.001  # 1kHz simulation frequency

        # Initialize motor thrust and moment values
        self.motor_thrusts = [0.0, 0.0, 0.0, 0.0]  # Motor Thrusts [N]
        self.motor_moments = [0.0, 0.0, 0.0, 0.0]  # Motor Moments [N.m]

        # Publisher & Subscriber
        self.create_subscription(MotorThrust, '/motor_thrust', self.motor_thrust_callback, 1)
        self.mujoco_meas_publisher = self.create_publisher(MuJoCoMeas, '/mujoco_meas', 1)

        # Start the MuJoCo viewer in a separate thread
        self.viewer_thread = threading.Thread(target=self.run_viewer)
        self.viewer_thread.start()

        # Start the simulation loop
        self.run_simulation()

    def motor_thrust_callback(self, msg: MotorThrust):
        self.motor_thrusts = msg.force
        self.motor_moments = msg.momont

    def run_simulation(self):
        start_time = time.time()
        while rclpy.ok():
            # Set control inputs for MuJoCo
            self.data.ctrl[0:4] = self.motor_thrusts

            # Perform one simulation step (1kHz)
            mujoco.mj_step(self.model, self.data)

            # Publish the drone's current state
            self.publish_mujoco_meas()

            # Real-time synchronization (1ms)
            elapsed_time = time.time() - start_time
            sleep_time = self.data.time - elapsed_time
            if sleep_time > 0:
                time.sleep(sleep_time)

    def run_viewer(self):
        # Start MuJoCo viewer in passive mode (20Hz update rate)
        with mujoco.viewer.launch_passive(self.model, self.data) as viewer:
            while viewer.is_running():
                time.sleep(0.05)  # 20Hz update rate (1 / 20 = 0.05s)
                viewer.sync()  # Update the viewer to reflect the current simulation state

        # Viewer has been closed, trigger shutdown
        self.get_logger().info("Viewer closed. Stopping node...")
        self.executor.shutdown()

    def publish_mujoco_meas(self):
        # Get body frame rotation angles, angular velocities, and angular accelerations
        q = self.data.qpos[3:6]  # Angles [rad]
        qdot = self.data.qvel[3:6]  # Angular velocities [rad/s]
        qddot = self.data.qacc[3:6]  # Angular accelerations [rad/s^2]

        # Get position, velocity, and acceleration
        pos = self.data.qpos[:3]  # Position [m]
        vel = self.data.qvel[:3]  # Velocity [m/s]

        # Ensure acceleration has the correct dimensions
        acc = self.data.cacc[:3] if len(self.data.cacc) >= 3 else [0.0, 0.0, 0.0]  # Handle insufficient dimensions

        # Create the message to publish
        msg = MuJoCoMeas()
        msg.q = [q[0], q[1], q[2]]
        msg.qdot = [qdot[0], qdot[1], qdot[2]]
        msg.qddot = [qddot[0], qddot[1], qddot[2]]
        msg.pos = [pos[0], pos[1], pos[2]]
        msg.vel = [vel[0], vel[1], vel[2]]
        msg.acc = [acc[0], acc[1], acc[2]]  # Corrected acceleration handling

        # Publish the message
        self.mujoco_meas_publisher.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    executor = SingleThreadedExecutor()
    node = MuJoCoSimulatorNode(executor)

    try:
        executor.add_node(node)
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()