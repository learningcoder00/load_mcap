// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/StaticObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__STATIC_OBSTACLE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__STATIC_OBSTACLE__STRUCT_H_

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
  deva_perception_msgs__msg__StaticObstacle__OBJECT_TYPE_UNKNOWN = 0
};

/// Constant 'OBJECT_TYPE_STOPLINE'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__OBJECT_TYPE_STOPLINE = 1
};

/// Constant 'OBJECT_TYPE_JUNCTION'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__OBJECT_TYPE_JUNCTION = 2
};

/// Constant 'OBJECT_TYPE_LEFTTURN'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__OBJECT_TYPE_LEFTTURN = 3
};

/// Constant 'OBJECT_TYPE_RIGHTTURN'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__OBJECT_TYPE_RIGHTTURN = 4
};

/// Constant 'OBJECT_TYPE_CROSSWALK'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__OBJECT_TYPE_CROSSWALK = 5
};

/// Constant 'OBJECT_TYPE_SPEED_CONTROL'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__OBJECT_TYPE_SPEED_CONTROL = 6
};

/// Constant 'OBJECT_TYPE_CURB'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__OBJECT_TYPE_CURB = 7
};

/// Constant 'OBJECT_TYPE_BARRIER'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__OBJECT_TYPE_BARRIER = 8
};

/// Constant 'OBJECT_TYPE_SIGNAL'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__OBJECT_TYPE_SIGNAL = 9
};

/// Constant 'UNKOWN'.
/**
  * static_obstacle_type
 */
enum
{
  deva_perception_msgs__msg__StaticObstacle__UNKOWN = 0
};

/// Constant 'PILLAR'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__PILLAR = 1
};

/// Constant 'SLOT_LIMITTER'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__SLOT_LIMITTER = 2
};

/// Constant 'SLOT_LOCK'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__SLOT_LOCK = 3
};

/// Constant 'CONE'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__CONE = 4
};

/// Constant 'SPEED_BUMP'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__SPEED_BUMP = 5
};

/// Constant 'SIGNAL'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__SIGNAL = 6
};

/// Constant 'PARKING_WALLEDGE'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__PARKING_WALLEDGE = 7
};

/// Constant 'PARKING_CURB'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__PARKING_CURB = 8
};

/// Constant 'ULTRAOBS'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__ULTRAOBS = 9
};

/// Constant 'FREE'.
/**
  * slot_lock_type
 */
enum
{
  deva_perception_msgs__msg__StaticObstacle__FREE = 0
};

/// Constant 'LOCKED'.
enum
{
  deva_perception_msgs__msg__StaticObstacle__LOCKED = 1
};

// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.h"

/// Struct defined in msg/StaticObstacle in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__StaticObstacle
{
  deva_perception_msgs__msg__ObstacleCommon obstacle;
  uint8_t object_type;
  uint8_t static_obstacle_type;
  uint8_t slot_lock_type;
} deva_perception_msgs__msg__StaticObstacle;

// Struct for a sequence of deva_perception_msgs__msg__StaticObstacle.
typedef struct deva_perception_msgs__msg__StaticObstacle__Sequence
{
  deva_perception_msgs__msg__StaticObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__StaticObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__STATIC_OBSTACLE__STRUCT_H_
