// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/AEBObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE__STRUCT_H_

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
  deva_perception_msgs__msg__AEBObstacle__CAR = 0
};

/// Constant 'TRUCK'.
enum
{
  deva_perception_msgs__msg__AEBObstacle__TRUCK = 1
};

/// Constant 'CONSTRUCTION_VEHICLE'.
enum
{
  deva_perception_msgs__msg__AEBObstacle__CONSTRUCTION_VEHICLE = 2
};

/// Constant 'BUS'.
enum
{
  deva_perception_msgs__msg__AEBObstacle__BUS = 3
};

/// Constant 'MOTORCYCLE'.
enum
{
  deva_perception_msgs__msg__AEBObstacle__MOTORCYCLE = 4
};

/// Constant 'BICYCLE'.
enum
{
  deva_perception_msgs__msg__AEBObstacle__BICYCLE = 5
};

/// Constant 'TRICYCLE'.
enum
{
  deva_perception_msgs__msg__AEBObstacle__TRICYCLE = 6
};

/// Constant 'CYCLIST'.
enum
{
  deva_perception_msgs__msg__AEBObstacle__CYCLIST = 7
};

/// Constant 'PEDESTRIAN'.
enum
{
  deva_perception_msgs__msg__AEBObstacle__PEDESTRIAN = 8
};

/// Constant 'UNKNOWN'.
enum
{
  deva_perception_msgs__msg__AEBObstacle__UNKNOWN = 9
};

// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.h"
// Member 'head_bbox'
// Member 'tail_bbox'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.h"
// Member 'ground_points'
#include "deva_common_msgs/msg/detail/ground_point__struct.h"

/// Struct defined in msg/AEBObstacle in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__AEBObstacle
{
  deva_perception_msgs__msg__ObstacleCommon obstacle;
  uint8_t obstacle_type;
  /// bbox
  deva_common_msgs__msg__BoundingBox2d head_bbox;
  deva_common_msgs__msg__BoundingBox2d tail_bbox;
  /// ground point
  deva_common_msgs__msg__GroundPoint__Sequence ground_points;
  /// 遮挡/截段
  float full_occ_score;
  float head_occ_score;
  float tail_occ_score;
  float full_trunc_score;
  float head_trunc_score;
  float tail_trunc_score;
} deva_perception_msgs__msg__AEBObstacle;

// Struct for a sequence of deva_perception_msgs__msg__AEBObstacle.
typedef struct deva_perception_msgs__msg__AEBObstacle__Sequence
{
  deva_perception_msgs__msg__AEBObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__AEBObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE__STRUCT_H_
