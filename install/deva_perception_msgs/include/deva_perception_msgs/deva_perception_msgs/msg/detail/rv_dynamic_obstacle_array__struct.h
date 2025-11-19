// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RVDynamicObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE_ARRAY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE_ARRAY__STRUCT_H_

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
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'obstacles'
#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle__struct.h"

/// Struct defined in msg/RVDynamicObstacleArray in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__RVDynamicObstacleArray
{
  deva_common_msgs__msg__Header header;
  int32_t cipv_id;
  int32_t num_obstacles;
  deva_perception_msgs__msg__RVDynamicObstacle__Sequence obstacles;
} deva_perception_msgs__msg__RVDynamicObstacleArray;

// Struct for a sequence of deva_perception_msgs__msg__RVDynamicObstacleArray.
typedef struct deva_perception_msgs__msg__RVDynamicObstacleArray__Sequence
{
  deva_perception_msgs__msg__RVDynamicObstacleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RVDynamicObstacleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE_ARRAY__STRUCT_H_
