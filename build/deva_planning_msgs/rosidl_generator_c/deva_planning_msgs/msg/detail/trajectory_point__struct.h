// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path_point'
#include "deva_planning_msgs/msg/detail/path_point__struct.h"

/// Struct defined in msg/TrajectoryPoint in the package deva_planning_msgs.
/**
  * path point
 */
typedef struct deva_planning_msgs__msg__TrajectoryPoint
{
  deva_planning_msgs__msg__PathPoint path_point;
  /// linear velocity
  /// in
  double v;
  /// linear acceleration
  double a;
  /// relative time from beginning of the trajectory
  double relative_time;
  /// longitudinal jerk
  double da;
  /// The angle between vehicle front wheel and vehicle longitudinal axis
  double steer;
} deva_planning_msgs__msg__TrajectoryPoint;

// Struct for a sequence of deva_planning_msgs__msg__TrajectoryPoint.
typedef struct deva_planning_msgs__msg__TrajectoryPoint__Sequence
{
  deva_planning_msgs__msg__TrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__TrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
