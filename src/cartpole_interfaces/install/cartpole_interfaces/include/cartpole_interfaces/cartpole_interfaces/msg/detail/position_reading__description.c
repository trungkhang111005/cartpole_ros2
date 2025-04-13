// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from cartpole_interfaces:msg/PositionReading.idl
// generated code does not contain a copyright notice

#include "cartpole_interfaces/msg/detail/position_reading__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_cartpole_interfaces
const rosidl_type_hash_t *
cartpole_interfaces__msg__PositionReading__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0xa1, 0xc4, 0xfc, 0xe2, 0xdd, 0x5f, 0xa9,
      0xee, 0xec, 0x68, 0x47, 0xe3, 0xc1, 0x2e, 0x0c,
      0x7d, 0x1f, 0xda, 0xa1, 0xcd, 0xf8, 0xe3, 0x12,
      0xd9, 0x31, 0x0c, 0xef, 0x7f, 0x67, 0x01, 0x19,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char cartpole_interfaces__msg__PositionReading__TYPE_NAME[] = "cartpole_interfaces/msg/PositionReading";

// Define type names, field names, and default values
static char cartpole_interfaces__msg__PositionReading__FIELD_NAME__x_cart_m[] = "x_cart_m";

static rosidl_runtime_c__type_description__Field cartpole_interfaces__msg__PositionReading__FIELDS[] = {
  {
    {cartpole_interfaces__msg__PositionReading__FIELD_NAME__x_cart_m, 8, 8},
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
cartpole_interfaces__msg__PositionReading__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {cartpole_interfaces__msg__PositionReading__TYPE_NAME, 39, 39},
      {cartpole_interfaces__msg__PositionReading__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x_cart_m";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
cartpole_interfaces__msg__PositionReading__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {cartpole_interfaces__msg__PositionReading__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 17, 17},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
cartpole_interfaces__msg__PositionReading__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *cartpole_interfaces__msg__PositionReading__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
