1. Attach Shell to Ros2 container

2. source /opt/ros/humble/setup.bash

3. source install/setup.bash
echo '✓ Workspace sourced'
echo

echo '3. Checking if robot_bringup package is available...'
ros2 pkg list | grep robot_bringup || echo 'Package not found - need to build first'
echo

echo '4. Checking launch files...'
ls -la /Project-STORM-LOCAL/install/robot_bringup/share/robot_bringup/launch/ 2>/dev/null || echo 'Launch files not installed'
echo

echo '5. Attempting to launch...'
ros2 launch robot_bringup cmd_vel_mux.launch.py