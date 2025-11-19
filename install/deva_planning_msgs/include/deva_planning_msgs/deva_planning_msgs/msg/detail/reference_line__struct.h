// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/ReferenceLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__REFERENCE_LINE__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__REFERENCE_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IS_REVERSE'.
/**
  * 参考线状态，需要时可加4\8
 */
enum
{
  deva_planning_msgs__msg__ReferenceLine__IS_REVERSE = 1l
};

/// Constant 'IS_NOT_CURRENT_ROAD'.
enum
{
  deva_planning_msgs__msg__ReferenceLine__IS_NOT_CURRENT_ROAD = 2l
};

/// Constant 'IS_UNREACHABLE'.
enum
{
  deva_planning_msgs__msg__ReferenceLine__IS_UNREACHABLE = 4l
};

// Include directives for member types
// Member 'reference_line'
// Member 'original_merge_point'
// Member 'merge_point'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'cipv_ids'
// Member 'cutin_cipv_ids'
// Member 'nearest_cipv_ids'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ReferenceLine in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__ReferenceLine
{
  nav_msgs__msg__Path reference_line;
  int32_t line_id;
  nav_msgs__msg__Path original_merge_point;
  nav_msgs__msg__Path merge_point;
  int32_t reference_line_type;
  bool line_is_virtual;
  int32_t left_line_nums;
  int32_t right_line_nums;
  rosidl_runtime_c__String__Sequence cipv_ids;
  rosidl_runtime_c__String__Sequence cutin_cipv_ids;
  rosidl_runtime_c__String__Sequence nearest_cipv_ids;
  double navi_score;
  double effic_score;
  int32_t turn_scenario;
} deva_planning_msgs__msg__ReferenceLine;

// Struct for a sequence of deva_planning_msgs__msg__ReferenceLine.
typedef struct deva_planning_msgs__msg__ReferenceLine__Sequence
{
  deva_planning_msgs__msg__ReferenceLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__ReferenceLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__REFERENCE_LINE__STRUCT_H_
