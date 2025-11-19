// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/AEBObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE_ARRAY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE_ARRAY__STRUCT_H_

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
// Member 'translation'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'aeb_obstacles'
#include "deva_perception_msgs/msg/detail/aeb_obstacle__struct.h"

/// Struct defined in msg/AEBObstacleArray in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__AEBObstacleArray
{
  deva_common_msgs__msg__Header header;
  /// localization
  geometry_msgs__msg__Vector3 translation;
  geometry_msgs__msg__Quaternion orientation;
  deva_perception_msgs__msg__AEBObstacle__Sequence aeb_obstacles;
} deva_perception_msgs__msg__AEBObstacleArray;

// Struct for a sequence of deva_perception_msgs__msg__AEBObstacleArray.
typedef struct deva_perception_msgs__msg__AEBObstacleArray__Sequence
{
  deva_perception_msgs__msg__AEBObstacleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__AEBObstacleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE_ARRAY__STRUCT_H_
