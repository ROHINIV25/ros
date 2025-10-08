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
        self.publisher = self.create_publisher(Speed, "/Speed", 10)
        self.timer = self.create_timer(0.1, self.my_publisher) 
        self.vx = 0.0
        self.vy = 0.0
        self.theta = 0.0

    def my_publisher(self):
        msg = Speed()
        msg.vx = self.vx
        msg.vy = self.vy
        msg.theta = self.theta
        self.publisher.publish(msg)

    def subscriber_callback(self, msg):
        self.vx = msg.axes[0]
        self.vy = msg.axes[1]
        self.theta = msg.axes[2]

    def scale(self, value, from_low, from_high, to_low, to_high):
        return (value - from_low) * (to_high - to_low) / (from_high - from_low) + to_low

def main(args=None):
    rclpy.init(args=args)
    node = Converter()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()