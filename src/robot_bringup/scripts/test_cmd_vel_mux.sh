#!/bin/bash

# Test script for cmd_vel_mux functionality
echo "Testing cmd_vel_mux setup..."

# Source the ROS setup
source /opt/ros/humble/setup.bash
source /Project-STORM-LOCAL/install/setup.bash

# Check if cmd_vel_mux package is available
echo "Checking if cmd_vel_mux is available..."
ros2 pkg list | grep cmd_vel_mux

# List available launch files
echo "Available launch files in robot_bringup:"
ros2 launch robot_bringup --show-args

# Test topics
echo "Testing cmd_vel_mux configuration..."
echo "You should see the following topics when cmd_vel_mux is running:"
echo "  /teleop/cmd_vel (input)"
echo "  /nav/cmd_vel (input)"
echo "  /safety/cmd_vel (input)"
echo "  /cmd_vel (output)"

echo "Setup complete! To launch cmd_vel_mux, run:"
echo "ros2 launch robot_bringup cmd_vel_mux.launch.py"
echo "or"
echo "ros2 launch robot_bringup robot_bringup.launch.py"