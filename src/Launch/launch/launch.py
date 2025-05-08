from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.actions import Node
from launch.conditions import IfCondition
import os
from ament_index_python.packages import get_package_share_directory
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

mocap_share_dir = get_package_share_directory('mocap')
node_config = os.path.join(mocap_share_dir, 'config', 'cfg.yaml')
rviz_config = os.path.join(mocap_share_dir, 'config', 'rviz.rviz')


def validate_mode(context, *args, **kwargs):
    # Retrieve the mode value from the launch configuration
    mode_val = LaunchConfiguration('mode').perform(context)
    # Check if the mode is either 'sim' or 'real'
    if mode_val not in ['sim', 'real']:
        # Raise an error to abort the launch
        raise RuntimeError("Invalid mode provided: {}. Please use 'sim' or 'real'.".format(mode_val))
    # If valid, simply return an empty list (no additional actions needed)
    return []

def generate_launch_description():
    # Declare a launch argument 'mode' with default value 'sim'
    mode_arg = DeclareLaunchArgument(
        'mode',
        description='Launch mode: sim or real'
    )

    mode = LaunchConfiguration('mode')

    nodes = [
        # MuJoCo Node (Run only when mode==sim)
        Node(
            package='mujoco_sim',
            executable='mujoco_node',
            name='mujoco_node',
            condition=IfCondition(PythonExpression(["'", mode, "' == 'sim'"])),
        ),

        # Optitrack Node
        Node(
            package='mocap',
            executable='mocap_worker',
            name='optitrack_node',
            parameters=[{'mode': mode}],
        ),


        Node(
            package='mocap',
            executable='motion_capture_tracking_node',
            name='motion_capture_tracking',
            output='screen',
            parameters=[node_config],
            condition=IfCondition(PythonExpression(["'", mode, "' == 'real'"]))
        ),

        # opti_RViz 생략가능함 
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_config],
            condition=IfCondition(PythonExpression(["'", mode, "' == 'real'"]))
        ),

        # IMU Node
        Node(
            package='imu_worker',
            executable='imu_worker',
            name='imu_node',
            parameters=[{'mode': mode}],
            condition=IfCondition(PythonExpression(["'", mode, "' == 'real'"]))
        ),

        # Microstrain Node (launch 포함)
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(
                    get_package_share_directory('microstrain_inertial_driver'),
                    'launch',
                    'microstrain_launch.py'
                )
            ),
            condition=IfCondition(PythonExpression(["'", mode, "' == 'real'"])),
        ),

        # SBUS Worker Node
        Node(
            package='sbus',
            executable='sbus_worker',
            name='sbus_node',   
        ),

        # ARM Changer Node
        Node(
            package='arm_changer',
            executable='arm_changer',
            name='arm_changing_node',
        ),

        # Controller Node
        Node(
            package='controller_geom',
            executable='controller_worker_geom',
            name='controller_node',
        ),

        # Allocator Node
        Node(
            package='allocator',
            executable='allocator_worker',
            name='allocator_node',
        ),

        # Dynamixel Node
        Node(
            package='dynamixel_worker',
            executable='dynamixel_worker',
            name='dynamixel_node',
            parameters=[{'mode': mode}],
        ),

        # Teensy Node
        Node(
            package='teensy_sender',
            executable='teensy_worker',
            name='teensy_node',
            parameters=[{'mode': mode}],
        ),

        # Watchdog Node
        Node(
            package='watchdog_manager',
            executable='watchdog_worker',
            name='watchdog_node',
        ),

        # GUI Node
        Node(
            package='gui',
            executable='gui',
            name='gui_node',
        ),
    ]

    return LaunchDescription([
        mode_arg,
        OpaqueFunction(function=validate_mode),
        *nodes,
    ])