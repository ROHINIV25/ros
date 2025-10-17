// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/Pwm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_interfaces/msg/pwm.hpp"


#ifndef ROBOT_INTERFACES__MSG__DETAIL__PWM__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__PWM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/pwm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Pwm_motor4
{
public:
  explicit Init_Pwm_motor4(::robot_interfaces::msg::Pwm & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::Pwm motor4(::robot_interfaces::msg::Pwm::_motor4_type arg)
  {
    msg_.motor4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::Pwm msg_;
};

class Init_Pwm_motor3
{
public:
  explicit Init_Pwm_motor3(::robot_interfaces::msg::Pwm & msg)
  : msg_(msg)
  {}
  Init_Pwm_motor4 motor3(::robot_interfaces::msg::Pwm::_motor3_type arg)
  {
    msg_.motor3 = std::move(arg);
    return Init_Pwm_motor4(msg_);
  }

private:
  ::robot_interfaces::msg::Pwm msg_;
};

class Init_Pwm_motor2
{
public:
  explicit Init_Pwm_motor2(::robot_interfaces::msg::Pwm & msg)
  : msg_(msg)
  {}
  Init_Pwm_motor3 motor2(::robot_interfaces::msg::Pwm::_motor2_type arg)
  {
    msg_.motor2 = std::move(arg);
    return Init_Pwm_motor3(msg_);
  }

private:
  ::robot_interfaces::msg::Pwm msg_;
};

class Init_Pwm_motor1
{
public:
  Init_Pwm_motor1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pwm_motor2 motor1(::robot_interfaces::msg::Pwm::_motor1_type arg)
  {
    msg_.motor1 = std::move(arg);
    return Init_Pwm_motor2(msg_);
  }

private:
  ::robot_interfaces::msg::Pwm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::Pwm>()
{
  return robot_interfaces::msg::builder::Init_Pwm_motor1();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__PWM__BUILDER_HPP_
