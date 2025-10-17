// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/Counter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_interfaces/msg/counter.h"


#ifndef ROBOT_INTERFACES__MSG__DETAIL__COUNTER__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__COUNTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Counter in the package robot_interfaces.
typedef struct robot_interfaces__msg__Counter
{
  int16_t a;
  int16_t b;
  float c;
  float d;
} robot_interfaces__msg__Counter;

// Struct for a sequence of robot_interfaces__msg__Counter.
typedef struct robot_interfaces__msg__Counter__Sequence
{
  robot_interfaces__msg__Counter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__Counter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__COUNTER__STRUCT_H_
