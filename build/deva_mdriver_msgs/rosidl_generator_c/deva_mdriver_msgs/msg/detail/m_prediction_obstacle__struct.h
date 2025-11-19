// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_mdriver_msgs:msg/MPredictionObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__M_PREDICTION_OBSTACLE__STRUCT_H_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__M_PREDICTION_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_STATIC'.
/**
  * StaticIntent
 */
enum
{
  deva_mdriver_msgs__msg__MPredictionObstacle__NOT_STATIC = 0
};

/// Constant 'WAIT_TO_MOVE'.
enum
{
  deva_mdriver_msgs__msg__MPredictionObstacle__WAIT_TO_MOVE = 1
};

/// Constant 'DEAD_CAR'.
enum
{
  deva_mdriver_msgs__msg__MPredictionObstacle__DEAD_CAR = 2
};

// Include directives for member types
// Member 'perception_obstacle'
#include "deva_perception_msgs/msg/detail/moving_obstacle__struct.h"
// Member 'trajectory'
#include "deva_planning_msgs/msg/detail/trajectory_point__struct.h"
// Member 'decision'
// Member 'cov'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'acc_heading_steering_stats'
#include "deva_mdriver_msgs/msg/detail/acc_heading_steering_stats__struct.h"
// Member 'prediction_debug_info'
#include "deva_mdriver_msgs/msg/detail/debug_info__struct.h"

/// Struct defined in msg/MPredictionObstacle in the package deva_mdriver_msgs.
typedef struct deva_mdriver_msgs__msg__MPredictionObstacle
{
  deva_perception_msgs__msg__MovingObstacle perception_obstacle;
  deva_planning_msgs__msg__TrajectoryPoint__Sequence trajectory;
  rosidl_runtime_c__uint8__Sequence decision;
  int32_t obs_id;
  double score;
  rosidl_runtime_c__double__Sequence cov;
  uint8_t is_static;
  deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence acc_heading_steering_stats;
  deva_mdriver_msgs__msg__DebugInfo__Sequence prediction_debug_info;
} deva_mdriver_msgs__msg__MPredictionObstacle;

// Struct for a sequence of deva_mdriver_msgs__msg__MPredictionObstacle.
typedef struct deva_mdriver_msgs__msg__MPredictionObstacle__Sequence
{
  deva_mdriver_msgs__msg__MPredictionObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_mdriver_msgs__msg__MPredictionObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__M_PREDICTION_OBSTACLE__STRUCT_H_
