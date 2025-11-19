// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/MutableObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__MUTABLE_OBSTACLE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__MUTABLE_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'static_obstacle'
#include "deva_perception_msgs/msg/detail/static_obstacle__struct.h"

/// Struct defined in msg/MutableObstacle in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__MutableObstacle
{
  deva_perception_msgs__msg__StaticObstacle static_obstacle;
  bool is_blocked;
} deva_perception_msgs__msg__MutableObstacle;

// Struct for a sequence of deva_perception_msgs__msg__MutableObstacle.
typedef struct deva_perception_msgs__msg__MutableObstacle__Sequence
{
  deva_perception_msgs__msg__MutableObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__MutableObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__MUTABLE_OBSTACLE__STRUCT_H_
