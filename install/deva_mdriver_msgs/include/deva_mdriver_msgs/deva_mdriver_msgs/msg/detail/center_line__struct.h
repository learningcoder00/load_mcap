// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_mdriver_msgs:msg/CenterLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE__STRUCT_H_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pts'
#include "deva_mdriver_msgs/msg/detail/center_line_point__struct.h"
// Member 'pre_ids'
// Member 'suc_ids'
// Member 'traffic_elem_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CenterLine in the package deva_mdriver_msgs.
typedef struct deva_mdriver_msgs__msg__CenterLine
{
  int32_t id;
  deva_mdriver_msgs__msg__CenterLinePoint__Sequence pts;
  rosidl_runtime_c__int32__Sequence pre_ids;
  rosidl_runtime_c__int32__Sequence suc_ids;
  int32_t left_line_attr;
  int32_t right_line_attr;
  float left_line_dist;
  float right_line_dist;
  rosidl_runtime_c__int32__Sequence traffic_elem_ids;
} deva_mdriver_msgs__msg__CenterLine;

// Struct for a sequence of deva_mdriver_msgs__msg__CenterLine.
typedef struct deva_mdriver_msgs__msg__CenterLine__Sequence
{
  deva_mdriver_msgs__msg__CenterLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_mdriver_msgs__msg__CenterLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE__STRUCT_H_
