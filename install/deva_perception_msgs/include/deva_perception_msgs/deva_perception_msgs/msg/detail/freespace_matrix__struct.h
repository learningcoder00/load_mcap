// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/FreespaceMatrix.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_MATRIX__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_MATRIX__STRUCT_H_

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
// Member 'freespace_matrix'
#include "deva_perception_msgs/msg/detail/freespace_array__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/FreespaceMatrix in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__FreespaceMatrix
{
  std_msgs__msg__Header header;
  deva_perception_msgs__msg__FreespaceArray__Sequence freespace_matrix;
  /// 定位信息
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Quaternion orientation;
} deva_perception_msgs__msg__FreespaceMatrix;

// Struct for a sequence of deva_perception_msgs__msg__FreespaceMatrix.
typedef struct deva_perception_msgs__msg__FreespaceMatrix__Sequence
{
  deva_perception_msgs__msg__FreespaceMatrix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__FreespaceMatrix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_MATRIX__STRUCT_H_
