# Ubuntu 22.04 + ROS 2 Humble (headless)
FROM ros:humble-ros-base

RUN apt-get update && apt-get install -y \
python3-colcon-common-extensions \
build-essential \
git \
ros-humble-launch-ros \
ros-humble-rclcpp \
ros-humble-std-msgs \
ros-humble-geometry-msgs \
ros-humble-ament-index-python \
ros-humble-launch-testing \
ros-humble-launch-testing-ament-cmake \
&& rm -rf /var/lib/apt/lists/*

# Clone cmd_vel_mux source into workspace
RUN git clone https://github.com/kobuki-base/cmd_vel_mux /Project-STORM-LOCAL/src/cmd_vel_mux

# Build the workspace including cmd_vel_mux (skip tests)
RUN . /opt/ros/humble/setup.sh && cd /Project-STORM-LOCAL && colcon build --cmake-args -DBUILD_TESTING=OFF

WORKDIR /Project-STORM-LOCAL