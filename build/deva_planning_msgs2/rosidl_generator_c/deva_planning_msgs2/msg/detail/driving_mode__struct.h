// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/DrivingMode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__DRIVING_MODE__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__DRIVING_MODE__STRUCT_H_

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
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'driving_mode_select'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DrivingMode in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__DrivingMode
{
  deva_common_msgs__msg__Header header;
  /// RVIZ_DRIVING_CANCEL（default）
  /// RVIZ_DRIVING_NOA
  /// RVIZ_DRIVING_ICC
  /// RVIZ_DRIVING_ACC
  rosidl_runtime_c__String driving_mode_select;
} deva_planning_msgs2__msg__DrivingMode;

// Struct for a sequence of deva_planning_msgs2__msg__DrivingMode.
typedef struct deva_planning_msgs2__msg__DrivingMode__Sequence
{
  deva_planning_msgs2__msg__DrivingMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__DrivingMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__DRIVING_MODE__STRUCT_H_
