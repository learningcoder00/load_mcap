// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/ObstacleCommon.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_COMMON__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_COMMON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obs_name'
#include "rosidl_runtime_c/string.h"
// Member 'points'
// Member 'dims'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'pose'
#include "deva_localization_msgs/msg/detail/pose__struct.h"
// Member 'bounding_box'
#include "deva_common_msgs/msg/detail/bounding_box__struct.h"
// Member 'associated_infos'
#include "deva_perception_msgs/msg/detail/associated_info__struct.h"
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__struct.h"
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__struct.h"

/// Struct defined in msg/ObstacleCommon in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__ObstacleCommon
{
  rosidl_runtime_c__String obs_name;
  geometry_msgs__msg__Point__Sequence points;
  int32_t obs_id;
  geometry_msgs__msg__Point dims;
  deva_localization_msgs__msg__Pose pose;
  float score;
  int32_t track_length;
  double tracking_time;
  deva_common_msgs__msg__BoundingBox bounding_box;
  int32_t miss_length;
  bool is_stable_tracked;
  /// 障碍物是否在车位内
  bool in_parking_slot;
  deva_perception_msgs__msg__AssociatedInfo__Sequence associated_infos;
  deva_perception_msgs__msg__ExtraInfo__Sequence extra_infos;
  /// Only used by MVIZ
  deva_common_msgs__msg__Point2d__Sequence pixel_points;
} deva_perception_msgs__msg__ObstacleCommon;

// Struct for a sequence of deva_perception_msgs__msg__ObstacleCommon.
typedef struct deva_perception_msgs__msg__ObstacleCommon__Sequence
{
  deva_perception_msgs__msg__ObstacleCommon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__ObstacleCommon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_COMMON__STRUCT_H_
