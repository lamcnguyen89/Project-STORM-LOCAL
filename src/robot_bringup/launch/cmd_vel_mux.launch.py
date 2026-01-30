from launch import LaunchDescription
from launch_ros.actions import Node
import os


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='robot_bringup',
            executable='simple_cmd_vel_mux.py',
            name='simple_cmd_vel_mux',
            output='screen',
        ),
    ])