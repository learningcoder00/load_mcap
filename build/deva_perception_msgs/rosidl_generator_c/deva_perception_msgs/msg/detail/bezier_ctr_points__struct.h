// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/BezierCtrPoints.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINTS__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINTS__STRUCT_H_

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
// Member 'bezier_ctr_points'
#include "deva_perception_msgs/msg/detail/bezier_ctr_point__struct.h"

/// Struct defined in msg/BezierCtrPoints in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__BezierCtrPoints
{
  std_msgs__msg__Header header;
  deva_perception_msgs__msg__BezierCtrPoint__Sequence bezier_ctr_points;
} deva_perception_msgs__msg__BezierCtrPoints;

// Struct for a sequence of deva_perception_msgs__msg__BezierCtrPoints.
typedef struct deva_perception_msgs__msg__BezierCtrPoints__Sequence
{
  deva_perception_msgs__msg__BezierCtrPoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__BezierCtrPoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINTS__STRUCT_H_
