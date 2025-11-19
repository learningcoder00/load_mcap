// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/BezierCtrPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINT__STRUCT_H_

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
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/BezierCtrPoint in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__BezierCtrPoint
{
  std_msgs__msg__Header header;
  /// size为3，shape为 [3, 3]
  geometry_msgs__msg__Point__Sequence points;
} deva_perception_msgs__msg__BezierCtrPoint;

// Struct for a sequence of deva_perception_msgs__msg__BezierCtrPoint.
typedef struct deva_perception_msgs__msg__BezierCtrPoint__Sequence
{
  deva_perception_msgs__msg__BezierCtrPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__BezierCtrPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINT__STRUCT_H_
