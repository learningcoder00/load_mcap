// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RVObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAR'.
enum
{
  deva_perception_msgs__msg__RVObstacle__CAR = 0ul
};

/// Constant 'BUS'.
enum
{
  deva_perception_msgs__msg__RVObstacle__BUS = 1ul
};

// Include directives for member types
// Member 'bbox2d'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.h"

/// Struct defined in msg/RVObstacle in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__RVObstacle
{
  /// 障碍物属性
  uint32_t type;
  /// 置信度
  double score;
  /// 距离自车纵向距离
  double distance;
  /// 障碍物2d框.
  deva_common_msgs__msg__BoundingBox2d bbox2d;
} deva_perception_msgs__msg__RVObstacle;

// Struct for a sequence of deva_perception_msgs__msg__RVObstacle.
typedef struct deva_perception_msgs__msg__RVObstacle__Sequence
{
  deva_perception_msgs__msg__RVObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RVObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE__STRUCT_H_
