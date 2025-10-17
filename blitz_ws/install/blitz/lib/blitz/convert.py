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
        self.target_theta = 50.0

    def subscriber_callback(self, msg):

        vel_msg = Speed()
        vel_msg.vx = msg.axes[0]
        vel_msg.vy = msg.axes[1]
        if (msg.buttons[0] == 1):
            vel_msg.vtheta = self.target_theta
        else:
            vel_msg.vtheta = 0.0

        self.publisher.publish(vel_msg)
        
def main(args=None):
    rclpy.init(args=args)
    node = Converter()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()