// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/TreeTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__TREE_TRAJECTORY__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__TREE_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obs_id'
#include "rosidl_runtime_c/string.h"
// Member 'trajectory_points'
#include "deva_planning_msgs2/msg/detail/trajectory_point__struct.h"
// Member 'traj_score'
#include "deva_planning_msgs2/msg/detail/string2_double__struct.h"

/// Struct defined in msg/TreeTrajectory in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__TreeTrajectory
{
  rosidl_runtime_c__String obs_id;
  double confidence;
  deva_planning_msgs2__msg__TrajectoryPoint__Sequence trajectory_points;
  /// [key: score_type, value：score]
  deva_planning_msgs2__msg__String2Double__Sequence traj_score;
} deva_planning_msgs2__msg__TreeTrajectory;

// Struct for a sequence of deva_planning_msgs2__msg__TreeTrajectory.
typedef struct deva_planning_msgs2__msg__TreeTrajectory__Sequence
{
  deva_planning_msgs2__msg__TreeTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__TreeTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__TREE_TRAJECTORY__STRUCT_H_
