// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/Entrance.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ENTRANCE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ENTRANCE__STRUCT_H_

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
// Member 'direction'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Entrance in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__Entrance
{
  uint32_t id;
  uint8_t type;
  double confidence;
  geometry_msgs__msg__Point__Sequence points;
  geometry_msgs__msg__Point__Sequence direction;
} deva_perception_msgs__msg__Entrance;

// Struct for a sequence of deva_perception_msgs__msg__Entrance.
typedef struct deva_perception_msgs__msg__Entrance__Sequence
{
  deva_perception_msgs__msg__Entrance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__Entrance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ENTRANCE__STRUCT_H_
