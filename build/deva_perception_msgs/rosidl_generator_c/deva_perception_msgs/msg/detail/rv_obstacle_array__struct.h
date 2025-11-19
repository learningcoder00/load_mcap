// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RVObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE_ARRAY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE_ARRAY__STRUCT_H_

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
// Member 'obstacle_array'
#include "deva_perception_msgs/msg/detail/rv_obstacle__struct.h"

/// Struct defined in msg/RVObstacleArray in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__RVObstacleArray
{
  std_msgs__msg__Header header;
  deva_perception_msgs__msg__RVObstacle__Sequence obstacle_array;
} deva_perception_msgs__msg__RVObstacleArray;

// Struct for a sequence of deva_perception_msgs__msg__RVObstacleArray.
typedef struct deva_perception_msgs__msg__RVObstacleArray__Sequence
{
  deva_perception_msgs__msg__RVObstacleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RVObstacleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE_ARRAY__STRUCT_H_
