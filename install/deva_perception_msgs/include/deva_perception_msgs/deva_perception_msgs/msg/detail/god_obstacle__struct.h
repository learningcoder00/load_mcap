// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/GodObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__GOD_OBSTACLE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__GOD_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OBJECT_TYPE_UNKNOWN'.
/**
  * object_type
 */
enum
{
  deva_perception_msgs__msg__GodObstacle__OBJECT_TYPE_UNKNOWN = 0
};

/// Constant 'OBJECT_TYPE_BAR'.
enum
{
  deva_perception_msgs__msg__GodObstacle__OBJECT_TYPE_BAR = 1
};

/// Constant 'OBJECT_TYPE_CONE'.
enum
{
  deva_perception_msgs__msg__GodObstacle__OBJECT_TYPE_CONE = 2
};

/// Constant 'OBJECT_TYPE_WATERHORSE'.
enum
{
  deva_perception_msgs__msg__GodObstacle__OBJECT_TYPE_WATERHORSE = 3
};

/// Constant 'OBJECT_TYPE_BOARD'.
enum
{
  deva_perception_msgs__msg__GodObstacle__OBJECT_TYPE_BOARD = 4
};

/// Constant 'OBJECT_TYPE_BUCKET'.
enum
{
  deva_perception_msgs__msg__GodObstacle__OBJECT_TYPE_BUCKET = 5
};

/// Constant 'OBJECT_TYPE_OTHER'.
enum
{
  deva_perception_msgs__msg__GodObstacle__OBJECT_TYPE_OTHER = 6
};

// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.h"

/// Struct defined in msg/GodObstacle in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__GodObstacle
{
  deva_perception_msgs__msg__ObstacleCommon obstacle;
  uint8_t object_type;
} deva_perception_msgs__msg__GodObstacle;

// Struct for a sequence of deva_perception_msgs__msg__GodObstacle.
typedef struct deva_perception_msgs__msg__GodObstacle__Sequence
{
  deva_perception_msgs__msg__GodObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__GodObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__GOD_OBSTACLE__STRUCT_H_
