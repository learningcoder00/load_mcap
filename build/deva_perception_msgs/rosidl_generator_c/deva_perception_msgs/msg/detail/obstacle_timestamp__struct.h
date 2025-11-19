// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/ObstacleTimestamp.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_TIMESTAMP__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_TIMESTAMP__STRUCT_H_

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
// Member 'radar_timestamps'
// Member 'camera_timestamps'
// Member 'lidar_timestamp'
// Member 'loc_timestamp'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ObstacleTimestamp in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__ObstacleTimestamp
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence radar_timestamps;
  rosidl_runtime_c__String__Sequence camera_timestamps;
  rosidl_runtime_c__String lidar_timestamp;
  rosidl_runtime_c__String loc_timestamp;
} deva_perception_msgs__msg__ObstacleTimestamp;

// Struct for a sequence of deva_perception_msgs__msg__ObstacleTimestamp.
typedef struct deva_perception_msgs__msg__ObstacleTimestamp__Sequence
{
  deva_perception_msgs__msg__ObstacleTimestamp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__ObstacleTimestamp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_TIMESTAMP__STRUCT_H_
