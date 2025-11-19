// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/DynamicObstacleList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE_LIST__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FOV120'.
/**
  * 数据源
 */
enum
{
  deva_perception_msgs__msg__DynamicObstacleList__FOV120 = 0
};

/// Constant 'FOV30'.
enum
{
  deva_perception_msgs__msg__DynamicObstacleList__FOV30 = 1
};

/// Constant 'TRANS'.
enum
{
  deva_perception_msgs__msg__DynamicObstacleList__TRANS = 2
};

/// Constant 'FUSION'.
enum
{
  deva_perception_msgs__msg__DynamicObstacleList__FUSION = 3
};

// Include directives for member types
// Member 'dynamic_obstacles'
#include "deva_perception_msgs/msg/detail/dynamic_obstacle__struct.h"

/// Struct defined in msg/DynamicObstacleList in the package deva_perception_msgs.
/**
  * 动态障碍物序列
 */
typedef struct deva_perception_msgs__msg__DynamicObstacleList
{
  deva_perception_msgs__msg__DynamicObstacle__Sequence dynamic_obstacles;
  uint8_t source;
} deva_perception_msgs__msg__DynamicObstacleList;

// Struct for a sequence of deva_perception_msgs__msg__DynamicObstacleList.
typedef struct deva_perception_msgs__msg__DynamicObstacleList__Sequence
{
  deva_perception_msgs__msg__DynamicObstacleList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__DynamicObstacleList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE_LIST__STRUCT_H_
