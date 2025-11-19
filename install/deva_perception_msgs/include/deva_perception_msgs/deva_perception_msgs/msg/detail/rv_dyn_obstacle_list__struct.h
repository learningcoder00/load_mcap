// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RVDynObstacleList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_LIST__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FOV120_3D'.
/**
  * 数据源
 */
enum
{
  deva_perception_msgs__msg__RVDynObstacleList__FOV120_3D = 0
};

/// Constant 'FOV120_2D'.
enum
{
  deva_perception_msgs__msg__RVDynObstacleList__FOV120_2D = 1
};

/// Constant 'FOV30_3D'.
enum
{
  deva_perception_msgs__msg__RVDynObstacleList__FOV30_3D = 2
};

/// Constant 'FOV30_2D'.
enum
{
  deva_perception_msgs__msg__RVDynObstacleList__FOV30_2D = 3
};

// Include directives for member types
// Member 'dynamic_obstacles'
#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle__struct.h"

/// Struct defined in msg/RVDynObstacleList in the package deva_perception_msgs.
/**
  * 动态障碍物序列
 */
typedef struct deva_perception_msgs__msg__RVDynObstacleList
{
  deva_perception_msgs__msg__RVDynObstacle__Sequence dynamic_obstacles;
  uint8_t source;
} deva_perception_msgs__msg__RVDynObstacleList;

// Struct for a sequence of deva_perception_msgs__msg__RVDynObstacleList.
typedef struct deva_perception_msgs__msg__RVDynObstacleList__Sequence
{
  deva_perception_msgs__msg__RVDynObstacleList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RVDynObstacleList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_LIST__STRUCT_H_
