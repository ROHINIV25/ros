// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_interfaces:msg/Counter.idl
// generated code does not contain a copyright notice

#include "robot_interfaces/msg/detail/counter__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
const rosidl_type_hash_t *
robot_interfaces__msg__Counter__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0x1f, 0x9f, 0xfb, 0x57, 0x40, 0xd4, 0x44,
      0x67, 0x35, 0xa8, 0x72, 0xe7, 0xdd, 0xe0, 0x83,
      0x3b, 0x22, 0x47, 0x83, 0x11, 0x09, 0xda, 0xb5,
      0xb8, 0xf8, 0xc8, 0xe0, 0xb6, 0x24, 0x5d, 0x01,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robot_interfaces__msg__Counter__TYPE_NAME[] = "robot_interfaces/msg/Counter";

// Define type names, field names, and default values
static char robot_interfaces__msg__Counter__FIELD_NAME__a[] = "a";
static char robot_interfaces__msg__Counter__FIELD_NAME__b[] = "b";
static char robot_interfaces__msg__Counter__FIELD_NAME__c[] = "c";
static char robot_interfaces__msg__Counter__FIELD_NAME__d[] = "d";

static rosidl_runtime_c__type_description__Field robot_interfaces__msg__Counter__FIELDS[] = {
  {
    {robot_interfaces__msg__Counter__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__Counter__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__Counter__FIELD_NAME__c, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__Counter__FIELD_NAME__d, 1, 1},
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
robot_interfaces__msg__Counter__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_interfaces__msg__Counter__TYPE_NAME, 28, 28},
      {robot_interfaces__msg__Counter__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16 a\n"
  "int16 b\n"
  "float32 c\n"
  "float32 d";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_interfaces__msg__Counter__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_interfaces__msg__Counter__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_interfaces__msg__Counter__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_interfaces__msg__Counter__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
