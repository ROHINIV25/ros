// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

#include "robot_interfaces/msg/detail/custom__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
const rosidl_type_hash_t *
robot_interfaces__msg__Custom__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0xad, 0x11, 0x73, 0x15, 0x0a, 0xba, 0x92,
      0x4c, 0x1b, 0xa3, 0x34, 0xbc, 0x8c, 0x1a, 0xc8,
      0xca, 0x93, 0xd8, 0xc3, 0x3e, 0x2a, 0x5f, 0x26,
      0x00, 0xd4, 0x4c, 0x1b, 0x5d, 0xad, 0x78, 0x26,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robot_interfaces__msg__Custom__TYPE_NAME[] = "robot_interfaces/msg/Custom";

// Define type names, field names, and default values
static char robot_interfaces__msg__Custom__FIELD_NAME__button[] = "button";
static char robot_interfaces__msg__Custom__FIELD_NAME__servo_angle[] = "servo_angle";
static char robot_interfaces__msg__Custom__FIELD_NAME__pwm[] = "pwm";

static rosidl_runtime_c__type_description__Field robot_interfaces__msg__Custom__FIELDS[] = {
  {
    {robot_interfaces__msg__Custom__FIELD_NAME__button, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__Custom__FIELD_NAME__servo_angle, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__Custom__FIELD_NAME__pwm, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_interfaces__msg__Custom__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_interfaces__msg__Custom__TYPE_NAME, 27, 27},
      {robot_interfaces__msg__Custom__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16 button\n"
  "float32 servo_angle\n"
  "float32 pwm";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_interfaces__msg__Custom__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_interfaces__msg__Custom__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_interfaces__msg__Custom__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_interfaces__msg__Custom__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
