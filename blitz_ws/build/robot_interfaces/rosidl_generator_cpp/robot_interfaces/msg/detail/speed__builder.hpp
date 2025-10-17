// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/Speed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_interfaces/msg/speed.hpp"


#ifndef ROBOT_INTERFACES__MSG__DETAIL__SPEED__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Speed_vtheta
{
public:
  explicit Init_Speed_vtheta(::robot_interfaces::msg::Speed & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::Speed vtheta(::robot_interfaces::msg::Speed::_vtheta_type arg)
  {
    msg_.vtheta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::Speed msg_;
};

class Init_Speed_vy
{
public:
  explicit Init_Speed_vy(::robot_interfaces::msg::Speed & msg)
  : msg_(msg)
  {}
  Init_Speed_vtheta vy(::robot_interfaces::msg::Speed::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_Speed_vtheta(msg_);
  }

private:
  ::robot_interfaces::msg::Speed msg_;
};

class Init_Speed_vx
{
public:
  Init_Speed_vx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Speed_vy vx(::robot_interfaces::msg::Speed::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_Speed_vy(msg_);
  }

private:
  ::robot_interfaces::msg::Speed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::Speed>()
{
  return robot_interfaces::msg::builder::Init_Speed_vx();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__SPEED__BUILDER_HPP_
