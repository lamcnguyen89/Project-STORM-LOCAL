from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    # Get the path to the config file
    config_file = os.path.join(
        get_package_share_directory('robot_bringup'),
        'config',
        'cmd_vel_mux.yaml'
    )
    
    return LaunchDescription([
        Node(
            package='cmd_vel_mux',
            executable='cmd_vel_mux',
            name='cmd_vel_mux',
            output='screen',
            parameters=[config_file],
            remappings=[
                ('cmd_vel_out', '/cmd_vel'),
            ]
        ),
    ])