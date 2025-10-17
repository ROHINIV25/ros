// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_interfaces/msg/custom.hpp"


#ifndef ROBOT_INTERFACES__MSG__DETAIL__CUSTOM__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__CUSTOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/custom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Custom_pwm
{
public:
  explicit Init_Custom_pwm(::robot_interfaces::msg::Custom & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::Custom pwm(::robot_interfaces::msg::Custom::_pwm_type arg)
  {
    msg_.pwm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::Custom msg_;
};

class Init_Custom_servo_angle
{
public:
  explicit Init_Custom_servo_angle(::robot_interfaces::msg::Custom & msg)
  : msg_(msg)
  {}
  Init_Custom_pwm servo_angle(::robot_interfaces::msg::Custom::_servo_angle_type arg)
  {
    msg_.servo_angle = std::move(arg);
    return Init_Custom_pwm(msg_);
  }

private:
  ::robot_interfaces::msg::Custom msg_;
};

class Init_Custom_button
{
public:
  Init_Custom_button()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Custom_servo_angle button(::robot_interfaces::msg::Custom::_button_type arg)
  {
    msg_.button = std::move(arg);
    return Init_Custom_servo_angle(msg_);
  }

private:
  ::robot_interfaces::msg::Custom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::Custom>()
{
  return robot_interfaces::msg::builder::Init_Custom_button();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__CUSTOM__BUILDER_HPP_
