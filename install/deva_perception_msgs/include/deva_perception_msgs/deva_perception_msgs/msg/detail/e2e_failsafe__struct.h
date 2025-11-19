// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/E2eFailsafe.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_FAILSAFE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_FAILSAFE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/E2eFailsafe in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__E2eFailsafe
{
  std_msgs__msg__Header header;
  uint8_t id;
  uint8_t result;
} deva_perception_msgs__msg__E2eFailsafe;

// Struct for a sequence of deva_perception_msgs__msg__E2eFailsafe.
typedef struct deva_perception_msgs__msg__E2eFailsafe__Sequence
{
  deva_perception_msgs__msg__E2eFailsafe * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__E2eFailsafe__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_FAILSAFE__STRUCT_H_
