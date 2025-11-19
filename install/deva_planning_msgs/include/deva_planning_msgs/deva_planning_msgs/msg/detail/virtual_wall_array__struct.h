// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/VirtualWallArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__VIRTUAL_WALL_ARRAY__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__VIRTUAL_WALL_ARRAY__STRUCT_H_

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
// Member 'virtual_wall_array'
#include "deva_planning_msgs/msg/detail/virtual_wall__struct.h"

/// Struct defined in msg/VirtualWallArray in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__VirtualWallArray
{
  std_msgs__msg__Header header;
  int32_t num;
  deva_planning_msgs__msg__VirtualWall__Sequence virtual_wall_array;
} deva_planning_msgs__msg__VirtualWallArray;

// Struct for a sequence of deva_planning_msgs__msg__VirtualWallArray.
typedef struct deva_planning_msgs__msg__VirtualWallArray__Sequence
{
  deva_planning_msgs__msg__VirtualWallArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__VirtualWallArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__VIRTUAL_WALL_ARRAY__STRUCT_H_
