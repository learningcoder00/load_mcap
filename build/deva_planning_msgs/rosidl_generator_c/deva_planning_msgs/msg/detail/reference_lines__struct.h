// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/ReferenceLines.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__REFERENCE_LINES__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__REFERENCE_LINES__STRUCT_H_

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
// Member 'reference_lines'
#include "deva_planning_msgs/msg/detail/reference_line__struct.h"

/// Struct defined in msg/ReferenceLines in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__ReferenceLines
{
  std_msgs__msg__Header header;
  deva_planning_msgs__msg__ReferenceLine__Sequence reference_lines;
  int32_t curr_id;
  int32_t tar_id;
  bool curr_line_virtual;
  int32_t curr_left_nums;
  int32_t curr_right_nums;
} deva_planning_msgs__msg__ReferenceLines;

// Struct for a sequence of deva_planning_msgs__msg__ReferenceLines.
typedef struct deva_planning_msgs__msg__ReferenceLines__Sequence
{
  deva_planning_msgs__msg__ReferenceLines * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__ReferenceLines__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__REFERENCE_LINES__STRUCT_H_
