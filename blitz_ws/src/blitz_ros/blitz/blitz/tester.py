#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from robot_interfaces.msg import Speed
from robot_interfaces.msg import Pwm

class Converter(Node):
    def __init__(self):
        super().__init__("converter")
        self.subscriber = self.create_subscription(Speed, "/Speed", self.calculateMotorVelocities, 10)
        self.publisher = self.create_publisher(Pwm, "/testing", 10)
        self.timer = self.create_timer(0.1, self.my_publisher)

    def calculateMotorVelocities(self, msg): 
        
    
 
        




    def main(args=None):
        rclpy.init(args=args)
        node = Converter()
        rclpy.spin(node)
        node.destroy_node()
        rclpy.shutdown()

    if __name__ == "__main__":
        main()