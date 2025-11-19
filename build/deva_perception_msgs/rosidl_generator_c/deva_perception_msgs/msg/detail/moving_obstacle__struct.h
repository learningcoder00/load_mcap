// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/MovingObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__MOVING_OBSTACLE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__MOVING_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAR'.
/**
  * MovingObstacle
 */
enum
{
  deva_perception_msgs__msg__MovingObstacle__CAR = 0
};

/// Constant 'TRUCK'.
enum
{
  deva_perception_msgs__msg__MovingObstacle__TRUCK = 1
};

/// Constant 'CONSTRUCTION_VEHICLE'.
enum
{
  deva_perception_msgs__msg__MovingObstacle__CONSTRUCTION_VEHICLE = 2
};

/// Constant 'BUS'.
enum
{
  deva_perception_msgs__msg__MovingObstacle__BUS = 3
};

/// Constant 'MOTORCYCLE'.
enum
{
  deva_perception_msgs__msg__MovingObstacle__MOTORCYCLE = 4
};

/// Constant 'BICYCLE'.
enum
{
  deva_perception_msgs__msg__MovingObstacle__BICYCLE = 5
};

/// Constant 'TRICYCLE'.
enum
{
  deva_perception_msgs__msg__MovingObstacle__TRICYCLE = 6
};

/// Constant 'CYCLIST'.
enum
{
  deva_perception_msgs__msg__MovingObstacle__CYCLIST = 7
};

/// Constant 'PEDESTRIAN'.
enum
{
  deva_perception_msgs__msg__MovingObstacle__PEDESTRIAN = 8
};

/// Constant 'UNKNOWN'.
enum
{
  deva_perception_msgs__msg__MovingObstacle__UNKNOWN = 9
};

// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.h"
// Member 'det_type'
#include "rosidl_runtime_c/string.h"
// Member 'velocity'
// Member 'velocity_var'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'acceleration'
// Member 'acceleration_var'
#include "geometry_msgs/msg/detail/accel__struct.h"

/// Struct defined in msg/MovingObstacle in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__MovingObstacle
{
  deva_perception_msgs__msg__ObstacleCommon obstacle;
  uint8_t moving_obstacle_type;
  rosidl_runtime_c__String det_type;
  geometry_msgs__msg__Twist velocity;
  geometry_msgs__msg__Accel acceleration;
  geometry_msgs__msg__Twist velocity_var;
  geometry_msgs__msg__Accel acceleration_var;
  bool is_predict;
} deva_perception_msgs__msg__MovingObstacle;

// Struct for a sequence of deva_perception_msgs__msg__MovingObstacle.
typedef struct deva_perception_msgs__msg__MovingObstacle__Sequence
{
  deva_perception_msgs__msg__MovingObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__MovingObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__MOVING_OBSTACLE__STRUCT_H_
