// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/Counter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_interfaces/msg/counter.hpp"


#ifndef ROBOT_INTERFACES__MSG__DETAIL__COUNTER__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__COUNTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/counter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Counter_d
{
public:
  explicit Init_Counter_d(::robot_interfaces::msg::Counter & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::Counter d(::robot_interfaces::msg::Counter::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::Counter msg_;
};

class Init_Counter_c
{
public:
  explicit Init_Counter_c(::robot_interfaces::msg::Counter & msg)
  : msg_(msg)
  {}
  Init_Counter_d c(::robot_interfaces::msg::Counter::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_Counter_d(msg_);
  }

private:
  ::robot_interfaces::msg::Counter msg_;
};

class Init_Counter_b
{
public:
  explicit Init_Counter_b(::robot_interfaces::msg::Counter & msg)
  : msg_(msg)
  {}
  Init_Counter_c b(::robot_interfaces::msg::Counter::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Counter_c(msg_);
  }

private:
  ::robot_interfaces::msg::Counter msg_;
};

class Init_Counter_a
{
public:
  Init_Counter_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Counter_b a(::robot_interfaces::msg::Counter::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Counter_b(msg_);
  }

private:
  ::robot_interfaces::msg::Counter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::Counter>()
{
  return robot_interfaces::msg::builder::Init_Counter_a();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__COUNTER__BUILDER_HPP_
