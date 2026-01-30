#!/usr/bin/env python3
"""
Simple CMD_VEL Multiplexer for ROS 2
This is a simplified version of cmd_vel_mux functionality
"""

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import String
import time


class SimpleCmdVelMux(Node):
    def __init__(self):
        super().__init__('simple_cmd_vel_mux')
        
        # Publishers
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.active_pub = self.create_publisher(String, '/cmd_vel_mux/active', 10)
        
        # Subscribers for different input sources
        self.teleop_sub = self.create_subscription(
            Twist, '/teleop/cmd_vel', self.teleop_callback, 10)
        self.nav_sub = self.create_subscription(
            Twist, '/nav/cmd_vel', self.nav_callback, 10)
        self.safety_sub = self.create_subscription(
            Twist, '/safety/cmd_vel', self.safety_callback, 10)
        
        # State tracking
        self.last_teleop_time = 0.0
        self.last_nav_time = 0.0
        self.last_safety_time = 0.0
        self.current_active = "none"
        
        # Timeouts (in seconds)
        self.teleop_timeout = 0.1
        self.nav_timeout = 0.5
        self.safety_timeout = 0.1
        
        # Timer to publish zero velocity when no input
        self.timer = self.create_timer(0.1, self.timer_callback)
        
        self.get_logger().info('Simple CMD_VEL Mux started')
        self.get_logger().info('Input topics:')
        self.get_logger().info('  /teleop/cmd_vel (priority: 100)')
        self.get_logger().info('  /safety/cmd_vel (priority: 200)')  
        self.get_logger().info('  /nav/cmd_vel (priority: 50)')
        self.get_logger().info('Output topic: /cmd_vel')

    def teleop_callback(self, msg):
        current_time = time.time()
        self.last_teleop_time = current_time
        self.publish_cmd_vel(msg, "teleop")

    def nav_callback(self, msg):
        current_time = time.time()
        self.last_nav_time = current_time
        self.publish_cmd_vel(msg, "navigation")

    def safety_callback(self, msg):
        current_time = time.time()
        self.last_safety_time = current_time
        self.publish_cmd_vel(msg, "safety")

    def publish_cmd_vel(self, msg, source):
        current_time = time.time()
        
        # Priority logic: safety > teleop > navigation
        active_source = self.get_active_source(current_time)
        
        if active_source == source:
            self.cmd_vel_pub.publish(msg)
            if self.current_active != source:
                self.current_active = source
                active_msg = String()
                active_msg.data = source
                self.active_pub.publish(active_msg)
                self.get_logger().info(f'Switched to {source}')

    def get_active_source(self, current_time):
        # Check timeouts and determine active source
        safety_active = (current_time - self.last_safety_time) < self.safety_timeout
        teleop_active = (current_time - self.last_teleop_time) < self.teleop_timeout
        nav_active = (current_time - self.last_nav_time) < self.nav_timeout
        
        if safety_active:
            return "safety"
        elif teleop_active:
            return "teleop"
        elif nav_active:
            return "navigation"
        else:
            return "none"

    def timer_callback(self):
        current_time = time.time()
        active_source = self.get_active_source(current_time)
        
        if active_source == "none" and self.current_active != "none":
            # Publish zero velocity
            zero_twist = Twist()
            self.cmd_vel_pub.publish(zero_twist)
            self.current_active = "none"
            active_msg = String()
            active_msg.data = "none"
            self.active_pub.publish(active_msg)
            self.get_logger().info('No active input - publishing zero velocity')


def main(args=None):
    rclpy.init(args=args)
    node = SimpleCmdVelMux()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()