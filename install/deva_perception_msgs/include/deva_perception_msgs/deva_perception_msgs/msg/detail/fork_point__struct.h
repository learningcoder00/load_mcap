// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/ForkPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FORK_POINT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FORK_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NORMAL'.
/**
  * 0x0: 非叉线
 */
enum
{
  deva_perception_msgs__msg__ForkPoint__NORMAL = 0
};

/// Constant 'SPLIT'.
/**
  * 0x1: 分叉线
 */
enum
{
  deva_perception_msgs__msg__ForkPoint__SPLIT = 1
};

/// Constant 'MERGE'.
/**
  * 0x2: 合流线
 */
enum
{
  deva_perception_msgs__msg__ForkPoint__MERGE = 2
};

/// Constant 'SPLIT_DIVERSION'.
enum
{
  deva_perception_msgs__msg__ForkPoint__SPLIT_DIVERSION = 3
};

/// Constant 'MERGE_DIVERSION'.
enum
{
  deva_perception_msgs__msg__ForkPoint__MERGE_DIVERSION = 4
};

// Include directives for member types
// Member 'lane_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'fork_point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/ForkPoint in the package deva_perception_msgs.
/**
  * 分叉线属性，取值如下:
 */
typedef struct deva_perception_msgs__msg__ForkPoint
{
  uint8_t fork_property_type;
  int32_t fork_id;
  rosidl_runtime_c__int16__Sequence lane_ids;
  geometry_msgs__msg__Point fork_point;
} deva_perception_msgs__msg__ForkPoint;

// Struct for a sequence of deva_perception_msgs__msg__ForkPoint.
typedef struct deva_perception_msgs__msg__ForkPoint__Sequence
{
  deva_perception_msgs__msg__ForkPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__ForkPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FORK_POINT__STRUCT_H_
