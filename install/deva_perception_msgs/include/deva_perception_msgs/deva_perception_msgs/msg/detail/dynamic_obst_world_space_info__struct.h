// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/DynamicObstWorldSpaceInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBST_WORLD_SPACE_INFO__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBST_WORLD_SPACE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INVALID'.
enum
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__INVALID = 0
};

/// Constant 'UNKNOWN'.
enum
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__UNKNOWN = 1
};

/// Constant 'MOVING'.
enum
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__MOVING = 2
};

/// Constant 'STATIONARY'.
enum
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__STATIONARY = 3
};

/// Constant 'STOPPED'.
enum
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__STOPPED = 4
};

/// Constant 'MOVING_SLOWLY'.
enum
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__MOVING_SLOWLY = 5
};

/// Constant 'ENUM_SIZE'.
enum
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__ENUM_SIZE = 6
};

/// Constant 'LEFT_NEXT_NEXT'.
enum
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__LEFT_NEXT_NEXT = -2
};

/// Constant 'LEFT_NEXT'.
enum
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__LEFT_NEXT = -1
};

/// Constant 'EGOLANE'.
enum
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__EGOLANE = 0
};

/// Constant 'RIGHT_NEXT'.
enum
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__RIGHT_NEXT = 1
};

/// Constant 'RIGHT_NEXT_NEXT'.
enum
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__RIGHT_NEXT_NEXT = 2
};

/// Constant 'LANE_UNKNOWN'.
enum
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__LANE_UNKNOWN = 3
};

// Include directives for member types
// Member 'poly'
// Member 'poly_vcs'
#include "deva_perception_msgs/msg/detail/polygon__struct.h"
// Member 'position'
// Member 'vel'
// Member 'vel_abs_world'
// Member 'acc'
// Member 'acc_abs_world'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'sigma_vel'
// Member 'sigma_position'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DynamicObstWorldSpaceInfo in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__DynamicObstWorldSpaceInfo
{
  float yaw;
  float length;
  float width;
  float height;
  deva_perception_msgs__msg__Polygon poly;
  deva_perception_msgs__msg__Polygon poly_vcs;
  geometry_msgs__msg__Point position;
  float ttc;
  geometry_msgs__msg__Point vel;
  geometry_msgs__msg__Point vel_abs_world;
  geometry_msgs__msg__Point acc;
  geometry_msgs__msg__Point acc_abs_world;
  uint8_t motion_status;
  float yaw_rate;
  rosidl_runtime_c__float__Sequence sigma_vel;
  float sigma_yaw;
  float sigma_width;
  float sigma_height;
  float sigma_length;
  rosidl_runtime_c__float__Sequence sigma_position;
  float sigma_yaw_rate;
  int8_t lane_assignment;
  int8_t cipv;
} deva_perception_msgs__msg__DynamicObstWorldSpaceInfo;

// Struct for a sequence of deva_perception_msgs__msg__DynamicObstWorldSpaceInfo.
typedef struct deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBST_WORLD_SPACE_INFO__STRUCT_H_
