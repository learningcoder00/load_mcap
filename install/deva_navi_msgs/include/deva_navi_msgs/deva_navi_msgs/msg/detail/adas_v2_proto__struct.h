// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/AdasV2Proto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ADAS_V2_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ADAS_V2_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AdasV2Proto in the package deva_navi_msgs.
typedef struct deva_navi_msgs__msg__AdasV2Proto
{
  int64_t id;
  rosidl_runtime_c__uint8__Sequence data;
} deva_navi_msgs__msg__AdasV2Proto;

// Struct for a sequence of deva_navi_msgs__msg__AdasV2Proto.
typedef struct deva_navi_msgs__msg__AdasV2Proto__Sequence
{
  deva_navi_msgs__msg__AdasV2Proto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__AdasV2Proto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ADAS_V2_PROTO__STRUCT_H_
