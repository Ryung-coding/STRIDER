import os
from ament_index_python.packages import get_package_share_directory
import rclpy
from rclpy.node import Node
from mujoco_interfaces.msg import MotorThrust, MuJoCoMeas

import mujoco
import mujoco.viewer
from rclpy.executors import SingleThreadedExecutor
import threading


class MuJoCoSimulatorNode(Node):
    def __init__(self, executor):
        super().__init__('mujoco_node')
        self.executor = executor

        # Get the package directory and initialize MuJoCo model
        package_share_dir = get_package_share_directory('mujoco_sim')
        scene_file_path = os.path.join(package_share_dir, 'xml', 'scene.xml')
        self.model = mujoco.MjModel.from_xml_path(scene_file_path)
        self.data = mujoco.MjData(self.model)
        self.model.opt.timestep = 0.001  # 1kHz simulation frequency

        # Initialize motor thrust and moments
        self.motor_thrusts = [0.0, 0.0, 0.0, 0.0]
        self.motor_moments = [0.0, 0.0, 0.0, 0.0]

        # Publisher & Subscriber setup
        self.create_subscription(MotorThrust, '/motor_thrust', self.motor_thrust_callback, 1)
        self.mujoco_meas_publisher = self.create_publisher(MuJoCoMeas, '/mujoco_meas', 1)

        # Timer to run the simulation at 1ms intervals
        self.timer = self.create_timer(0.001, self.run_simulation)  # 1ms interval (1kHz)

        # Start MuJoCo viewer in a separate thread
        self.viewer_thread = threading.Thread(target=self.run_viewer, daemon=True)
        self.data_lock = threading.Lock()
        self.viewer_thread.start()

    def motor_thrust_callback(self, msg: MotorThrust):
        self.motor_thrusts = msg.force
        self.motor_moments = msg.moment

    def run_simulation(self):
        # Set control inputs for MuJoCo
        with self.data_lock:
            self.data.ctrl[0:4] = self.motor_thrusts
            self.data.ctrl[4:8] = self.motor_moments

            # Perform one simulation step (1kHz)
            mujoco.mj_step(self.model, self.data)

            # Publish the drone's current state
            self.publish_mujoco_meas()

    def run_viewer(self):
        # Launch MuJoCo viewer in passive mode (20Hz update rate)
        with mujoco.viewer.launch_passive(self.model, self.data) as viewer:
            while viewer.is_running():
                with self.data_lock:
                    viewer.sync()  # Sync the viewer to the current simulation state

        # Viewer has been closed, trigger shutdown
        self.get_logger().info("Viewer closed. Stopping node...")
        self.executor.shutdown()

    def publish_mujoco_meas(self):
        # Extract state information
        q = self.data.qpos[3:6]
        qdot = self.data.qvel[3:6]
        qddot = self.data.qacc[3:6]
        pos = self.data.qpos[:3]
        vel = self.data.qvel[:3]
        acc = self.data.cacc[:3] if len(self.data.cacc) >= 3 else [0.0, 0.0, 0.0]

        # Create and publish the message
        msg = MuJoCoMeas(
            q=[q[0], q[1], q[2]],
            qdot=[qdot[0], qdot[1], qdot[2]],
            qddot=[qddot[0], qddot[1], qddot[2]],
            pos=[pos[0], pos[1], pos[2]],
            vel=[vel[0], vel[1], vel[2]],
            acc=[acc[0], acc[1], acc[2]]
        )
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