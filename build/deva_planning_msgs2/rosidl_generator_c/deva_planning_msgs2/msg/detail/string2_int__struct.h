// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/String2Int.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__STRING2_INT__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__STRING2_INT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
#include "rosidl_runtime_c/string.h"
// Member 'value'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/String2Int in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__String2Int
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__int32__Sequence value;
} deva_planning_msgs2__msg__String2Int;

// Struct for a sequence of deva_planning_msgs2__msg__String2Int.
typedef struct deva_planning_msgs2__msg__String2Int__Sequence
{
  deva_planning_msgs2__msg__String2Int * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__String2Int__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__STRING2_INT__STRUCT_H_
