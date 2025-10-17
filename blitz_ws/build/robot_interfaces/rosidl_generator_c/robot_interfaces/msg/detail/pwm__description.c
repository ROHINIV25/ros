// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_interfaces:msg/Pwm.idl
// generated code does not contain a copyright notice

#include "robot_interfaces/msg/detail/pwm__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
const rosidl_type_hash_t *
robot_interfaces__msg__Pwm__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa0, 0xa6, 0xaf, 0x92, 0x8f, 0x03, 0x67, 0xad,
      0x6d, 0x4b, 0x2b, 0x1f, 0x77, 0x6a, 0x59, 0x3f,
      0x3c, 0xb3, 0xd3, 0x4d, 0x65, 0x9a, 0x1c, 0xcd,
      0xeb, 0xe6, 0xaa, 0x6b, 0xfa, 0xaa, 0x32, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robot_interfaces__msg__Pwm__TYPE_NAME[] = "robot_interfaces/msg/Pwm";

// Define type names, field names, and default values
static char robot_interfaces__msg__Pwm__FIELD_NAME__motor1[] = "motor1";
static char robot_interfaces__msg__Pwm__FIELD_NAME__motor2[] = "motor2";
static char robot_interfaces__msg__Pwm__FIELD_NAME__motor3[] = "motor3";
static char robot_interfaces__msg__Pwm__FIELD_NAME__motor4[] = "motor4";

static rosidl_runtime_c__type_description__Field robot_interfaces__msg__Pwm__FIELDS[] = {
  {
    {robot_interfaces__msg__Pwm__FIELD_NAME__motor1, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__Pwm__FIELD_NAME__motor2, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__Pwm__FIELD_NAME__motor3, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__Pwm__FIELD_NAME__motor4, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_interfaces__msg__Pwm__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_interfaces__msg__Pwm__TYPE_NAME, 24, 24},
      {robot_interfaces__msg__Pwm__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 motor1\n"
  "int32 motor2\n"
  "int32 motor3\n"
  "int32 motor4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_interfaces__msg__Pwm__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_interfaces__msg__Pwm__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_interfaces__msg__Pwm__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_interfaces__msg__Pwm__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
