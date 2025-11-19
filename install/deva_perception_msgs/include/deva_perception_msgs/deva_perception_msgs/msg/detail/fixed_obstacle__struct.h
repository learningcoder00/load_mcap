// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/FixedObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
/**
  * 静态障碍物类型
 */
enum
{
  deva_perception_msgs__msg__FixedObstacle__UNKNOWN = 0
};

/// Constant 'CONE'.
enum
{
  deva_perception_msgs__msg__FixedObstacle__CONE = 1
};

/// Constant 'BAR'.
enum
{
  deva_perception_msgs__msg__FixedObstacle__BAR = 2
};

/// Constant 'BUCKET'.
enum
{
  deva_perception_msgs__msg__FixedObstacle__BUCKET = 3
};

/// Constant 'WATERHORSE'.
enum
{
  deva_perception_msgs__msg__FixedObstacle__WATERHORSE = 4
};

/// Constant 'CONSTRUCTION_SIGN'.
enum
{
  deva_perception_msgs__msg__FixedObstacle__CONSTRUCTION_SIGN = 5
};

/// Constant 'TRIANGLE'.
enum
{
  deva_perception_msgs__msg__FixedObstacle__TRIANGLE = 6
};

/// Constant 'SPEED_BUMP'.
enum
{
  deva_perception_msgs__msg__FixedObstacle__SPEED_BUMP = 7
};

/// Constant 'BRAKE_LEVER'.
enum
{
  deva_perception_msgs__msg__FixedObstacle__BRAKE_LEVER = 8
};

/// Constant 'FENCE'.
enum
{
  deva_perception_msgs__msg__FixedObstacle__FENCE = 9
};

/// Constant 'COVER'.
enum
{
  deva_perception_msgs__msg__FixedObstacle__COVER = 10
};

/// Constant 'FOV120'.
/**
  * 数据源
 */
enum
{
  deva_perception_msgs__msg__FixedObstacle__FOV120 = 0
};

/// Constant 'FOV30'.
enum
{
  deva_perception_msgs__msg__FixedObstacle__FOV30 = 1
};

/// Constant 'TRANS'.
enum
{
  deva_perception_msgs__msg__FixedObstacle__TRANS = 2
};

/// Constant 'FUSION'.
enum
{
  deva_perception_msgs__msg__FixedObstacle__FUSION = 3
};

// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.h"
// Member 'match_indices'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__struct.h"

/// Struct defined in msg/FixedObstacle in the package deva_perception_msgs.
/**
  * 通用障碍物
 */
typedef struct deva_perception_msgs__msg__FixedObstacle
{
  deva_perception_msgs__msg__ObstacleCommon obstacle;
  uint8_t fixed_obstacle_type;
  float det_score;
  uint8_t source;
  /// 索引对
  rosidl_runtime_c__int32__Sequence match_indices;
  /// 补充信息
  deva_perception_msgs__msg__ExtraInfo__Sequence extra_infos;
} deva_perception_msgs__msg__FixedObstacle;

// Struct for a sequence of deva_perception_msgs__msg__FixedObstacle.
typedef struct deva_perception_msgs__msg__FixedObstacle__Sequence
{
  deva_perception_msgs__msg__FixedObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__FixedObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE__STRUCT_H_
