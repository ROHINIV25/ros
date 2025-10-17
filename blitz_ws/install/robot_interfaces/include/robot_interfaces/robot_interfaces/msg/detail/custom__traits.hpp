// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_interfaces/msg/custom.hpp"


#ifndef ROBOT_INTERFACES__MSG__DETAIL__CUSTOM__TRAITS_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__CUSTOM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/msg/detail/custom__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Custom & msg,
  std::ostream & out)
{
  out << "{";
  // member: button
  {
    out << "button: ";
    rosidl_generator_traits::value_to_yaml(msg.button, out);
    out << ", ";
  }

  // member: servo_angle
  {
    out << "servo_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_angle, out);
    out << ", ";
  }

  // member: pwm
  {
    out << "pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Custom & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button: ";
    rosidl_generator_traits::value_to_yaml(msg.button, out);
    out << "\n";
  }

  // member: servo_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_angle, out);
    out << "\n";
  }

  // member: pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Custom & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interfaces::msg::Custom & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::msg::Custom & msg)
{
  return robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::msg::Custom>()
{
  return "robot_interfaces::msg::Custom";
}

template<>
inline const char * name<robot_interfaces::msg::Custom>()
{
  return "robot_interfaces/msg/Custom";
}

template<>
struct has_fixed_size<robot_interfaces::msg::Custom>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces::msg::Custom>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces::msg::Custom>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__MSG__DETAIL__CUSTOM__TRAITS_HPP_
