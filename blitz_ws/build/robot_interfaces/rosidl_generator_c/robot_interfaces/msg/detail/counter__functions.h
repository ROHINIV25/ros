// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robot_interfaces:msg/Counter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_interfaces/msg/counter.h"


#ifndef ROBOT_INTERFACES__MSG__DETAIL__COUNTER__FUNCTIONS_H_
#define ROBOT_INTERFACES__MSG__DETAIL__COUNTER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "robot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robot_interfaces/msg/detail/counter__struct.h"

/// Initialize msg/Counter message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_interfaces__msg__Counter
 * )) before or use
 * robot_interfaces__msg__Counter__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__Counter__init(robot_interfaces__msg__Counter * msg);

/// Finalize msg/Counter message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__Counter__fini(robot_interfaces__msg__Counter * msg);

/// Create msg/Counter message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_interfaces__msg__Counter__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__msg__Counter *
robot_interfaces__msg__Counter__create(void);

/// Destroy msg/Counter message.
/**
 * It calls
 * robot_interfaces__msg__Counter__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__Counter__destroy(robot_interfaces__msg__Counter * msg);

/// Check for msg/Counter message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__Counter__are_equal(const robot_interfaces__msg__Counter * lhs, const robot_interfaces__msg__Counter * rhs);

/// Copy a msg/Counter message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__Counter__copy(
  const robot_interfaces__msg__Counter * input,
  robot_interfaces__msg__Counter * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
const rosidl_type_hash_t *
robot_interfaces__msg__Counter__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
robot_interfaces__msg__Counter__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
const rosidl_runtime_c__type_description__TypeSource *
robot_interfaces__msg__Counter__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_interfaces__msg__Counter__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Counter messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_interfaces__msg__Counter__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__Counter__Sequence__init(robot_interfaces__msg__Counter__Sequence * array, size_t size);

/// Finalize array of msg/Counter messages.
/**
 * It calls
 * robot_interfaces__msg__Counter__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__Counter__Sequence__fini(robot_interfaces__msg__Counter__Sequence * array);

/// Create array of msg/Counter messages.
/**
 * It allocates the memory for the array and calls
 * robot_interfaces__msg__Counter__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__msg__Counter__Sequence *
robot_interfaces__msg__Counter__Sequence__create(size_t size);

/// Destroy array of msg/Counter messages.
/**
 * It calls
 * robot_interfaces__msg__Counter__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__Counter__Sequence__destroy(robot_interfaces__msg__Counter__Sequence * array);

/// Check for msg/Counter message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__Counter__Sequence__are_equal(const robot_interfaces__msg__Counter__Sequence * lhs, const robot_interfaces__msg__Counter__Sequence * rhs);

/// Copy an array of msg/Counter messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__Counter__Sequence__copy(
  const robot_interfaces__msg__Counter__Sequence * input,
  robot_interfaces__msg__Counter__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__COUNTER__FUNCTIONS_H_
