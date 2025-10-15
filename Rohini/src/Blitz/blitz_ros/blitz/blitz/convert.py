#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from robot_interfaces.msg import Speed
from sensor_msgs.msg import Joy
import math

class Converter(Node):
    def __init__(self):
        super().__init__("converter")
        self.subscriber = self.create_subscription(Joy, "/joy", self.subscriber_callback, 10)
        self.publisher = self.create_publisher(Speed, "/speed", 10)
        self.vx = 0.0
        self.vy = 0.0
        self.theta = 0.0

    def subscriber_callback(self, msg):

        vel_msg = Speed()
        vel_msg.vx = msg.axes[0]
        vel_msg.vy = msg.axes[1]
        vel_msg.vtheta = msg.axes[2]

        self.publisher.publish(vel_msg)
        
def main(args=None):
    rclpy.init(args=args)
    node = Converter()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()