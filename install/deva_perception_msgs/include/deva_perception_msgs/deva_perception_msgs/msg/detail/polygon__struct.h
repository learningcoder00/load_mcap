// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/Polygon.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__POLYGON__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__POLYGON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Polygon in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__Polygon
{
  uint32_t num_points;
  geometry_msgs__msg__Point__Sequence points;
} deva_perception_msgs__msg__Polygon;

// Struct for a sequence of deva_perception_msgs__msg__Polygon.
typedef struct deva_perception_msgs__msg__Polygon__Sequence
{
  deva_perception_msgs__msg__Polygon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__Polygon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__POLYGON__STRUCT_H_
