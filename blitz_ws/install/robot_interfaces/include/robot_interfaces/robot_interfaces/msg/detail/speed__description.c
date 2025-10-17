// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_interfaces:msg/Speed.idl
// generated code does not contain a copyright notice

#include "robot_interfaces/msg/detail/speed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
const rosidl_type_hash_t *
robot_interfaces__msg__Speed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0x06, 0x1d, 0x6a, 0xa8, 0xa6, 0x3a, 0x37,
      0x54, 0xd8, 0xfa, 0xde, 0x0a, 0x26, 0xdf, 0x7b,
      0x7f, 0xab, 0x3b, 0x40, 0x09, 0x0e, 0xab, 0x80,
      0xc1, 0x9a, 0x25, 0xe6, 0x8c, 0xd2, 0x7f, 0x10,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robot_interfaces__msg__Speed__TYPE_NAME[] = "robot_interfaces/msg/Speed";

// Define type names, field names, and default values
static char robot_interfaces__msg__Speed__FIELD_NAME__vx[] = "vx";
static char robot_interfaces__msg__Speed__FIELD_NAME__vy[] = "vy";
static char robot_interfaces__msg__Speed__FIELD_NAME__vtheta[] = "vtheta";

static rosidl_runtime_c__type_description__Field robot_interfaces__msg__Speed__FIELDS[] = {
  {
    {robot_interfaces__msg__Speed__FIELD_NAME__vx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__Speed__FIELD_NAME__vy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__Speed__FIELD_NAME__vtheta, 6, 6},
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
robot_interfaces__msg__Speed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_interfaces__msg__Speed__TYPE_NAME, 26, 26},
      {robot_interfaces__msg__Speed__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 vx\n"
  "float32 vy\n"
  "float32 vtheta";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_interfaces__msg__Speed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_interfaces__msg__Speed__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_interfaces__msg__Speed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_interfaces__msg__Speed__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
