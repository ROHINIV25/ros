// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robot_interfaces:msg/Counter.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/msg/detail/counter__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robot_interfaces/msg/detail/counter__functions.h"
#include "robot_interfaces/msg/detail/counter__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robot_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_interfaces
cdr_serialize(
  const robot_interfaces::msg::Counter & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: a
  cdr << ros_message.a;

  // Member: b
  cdr << ros_message.b;

  // Member: c
  cdr << ros_message.c;

  // Member: d
  cdr << ros_message.d;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robot_interfaces::msg::Counter & ros_message)
{
  // Member: a
  cdr >> ros_message.a;

  // Member: b
  cdr >> ros_message.b;

  // Member: c
  cdr >> ros_message.c;

  // Member: d
  cdr >> ros_message.d;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_interfaces
get_serialized_size(
  const robot_interfaces::msg::Counter & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: a
  {
    size_t item_size = sizeof(ros_message.a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: b
  {
    size_t item_size = sizeof(ros_message.b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: c
  {
    size_t item_size = sizeof(ros_message.c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: d
  {
    size_t item_size = sizeof(ros_message.d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_interfaces
max_serialized_size_Counter(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: a
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: c
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: d
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robot_interfaces::msg::Counter;
    is_plain =
      (
      offsetof(DataType, d) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_interfaces
cdr_serialize_key(
  const robot_interfaces::msg::Counter & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: a
  cdr << ros_message.a;

  // Member: b
  cdr << ros_message.b;

  // Member: c
  cdr << ros_message.c;

  // Member: d
  cdr << ros_message.d;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_interfaces
get_serialized_size_key(
  const robot_interfaces::msg::Counter & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: a
  {
    size_t item_size = sizeof(ros_message.a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: b
  {
    size_t item_size = sizeof(ros_message.b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: c
  {
    size_t item_size = sizeof(ros_message.c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: d
  {
    size_t item_size = sizeof(ros_message.d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_interfaces
max_serialized_size_key_Counter(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: a
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: c
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: d
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robot_interfaces::msg::Counter;
    is_plain =
      (
      offsetof(DataType, d) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _Counter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robot_interfaces::msg::Counter *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Counter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robot_interfaces::msg::Counter *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Counter__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robot_interfaces::msg::Counter *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Counter__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Counter(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Counter__callbacks = {
  "robot_interfaces::msg",
  "Counter",
  _Counter__cdr_serialize,
  _Counter__cdr_deserialize,
  _Counter__get_serialized_size,
  _Counter__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Counter__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Counter__callbacks,
  get_message_typesupport_handle_function,
  &robot_interfaces__msg__Counter__get_type_hash,
  &robot_interfaces__msg__Counter__get_type_description,
  &robot_interfaces__msg__Counter__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_interfaces::msg::Counter>()
{
  return &robot_interfaces::msg::typesupport_fastrtps_cpp::_Counter__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_interfaces, msg, Counter)() {
  return &robot_interfaces::msg::typesupport_fastrtps_cpp::_Counter__handle;
}

#ifdef __cplusplus
}
#endif
