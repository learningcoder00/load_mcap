// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/CenterLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CENTER_LINE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CENTER_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lane_equalization'
#include "deva_common_msgs/msg/detail/equation_curve__struct.h"

/// Struct defined in msg/CenterLine in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__CenterLine
{
  int32_t center_line_id;
  int32_t left_lane_id;
  int32_t right_lane_id;
  deva_common_msgs__msg__EquationCurve__Sequence lane_equalization;
  bool is_current_lane;
  bool is_virtual_lane;
} deva_perception_msgs__msg__CenterLine;

// Struct for a sequence of deva_perception_msgs__msg__CenterLine.
typedef struct deva_perception_msgs__msg__CenterLine__Sequence
{
  deva_perception_msgs__msg__CenterLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__CenterLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CENTER_LINE__STRUCT_H_
