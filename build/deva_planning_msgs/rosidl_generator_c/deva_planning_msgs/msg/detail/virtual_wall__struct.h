// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/VirtualWall.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__VIRTUAL_WALL__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__VIRTUAL_WALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VirtualWall in the package deva_planning_msgs.
/**
  * This message defines meta information for a obstacle status
  * 区别不同实体
 */
typedef struct deva_planning_msgs__msg__VirtualWall
{
  rosidl_runtime_c__String id;
  double x_center;
  double y_center;
  double z_center;
  double theta;
  double width;
  double height;
  double length;
} deva_planning_msgs__msg__VirtualWall;

// Struct for a sequence of deva_planning_msgs__msg__VirtualWall.
typedef struct deva_planning_msgs__msg__VirtualWall__Sequence
{
  deva_planning_msgs__msg__VirtualWall * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__VirtualWall__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__VIRTUAL_WALL__STRUCT_H_
