// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_interfaces/msg/custom.hpp"


#ifndef ROBOT_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__Custom __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__Custom __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Custom_
{
  using Type = Custom_<ContainerAllocator>;

  explicit Custom_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->button = 0;
      this->servo_angle = 0.0f;
      this->pwm = 0.0f;
    }
  }

  explicit Custom_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->button = 0;
      this->servo_angle = 0.0f;
      this->pwm = 0.0f;
    }
  }

  // field types and members
  using _button_type =
    int16_t;
  _button_type button;
  using _servo_angle_type =
    float;
  _servo_angle_type servo_angle;
  using _pwm_type =
    float;
  _pwm_type pwm;

  // setters for named parameter idiom
  Type & set__button(
    const int16_t & _arg)
  {
    this->button = _arg;
    return *this;
  }
  Type & set__servo_angle(
    const float & _arg)
  {
    this->servo_angle = _arg;
    return *this;
  }
  Type & set__pwm(
    const float & _arg)
  {
    this->pwm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::Custom_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::Custom_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::Custom_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::Custom_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Custom_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Custom_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Custom_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Custom_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::Custom_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::Custom_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__Custom
    std::shared_ptr<robot_interfaces::msg::Custom_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__Custom
    std::shared_ptr<robot_interfaces::msg::Custom_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Custom_ & other) const
  {
    if (this->button != other.button) {
      return false;
    }
    if (this->servo_angle != other.servo_angle) {
      return false;
    }
    if (this->pwm != other.pwm) {
      return false;
    }
    return true;
  }
  bool operator!=(const Custom_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Custom_

// alias to use template instance with default allocator
using Custom =
  robot_interfaces::msg::Custom_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_HPP_
