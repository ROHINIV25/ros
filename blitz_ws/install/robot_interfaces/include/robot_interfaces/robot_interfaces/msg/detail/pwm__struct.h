// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/Pwm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_interfaces/msg/pwm.h"


#ifndef ROBOT_INTERFACES__MSG__DETAIL__PWM__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__PWM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Pwm in the package robot_interfaces.
typedef struct robot_interfaces__msg__Pwm
{
  int32_t motor1;
  int32_t motor2;
  int32_t motor3;
  int32_t motor4;
} robot_interfaces__msg__Pwm;

// Struct for a sequence of robot_interfaces__msg__Pwm.
typedef struct robot_interfaces__msg__Pwm__Sequence
{
  robot_interfaces__msg__Pwm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__Pwm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__PWM__STRUCT_H_
