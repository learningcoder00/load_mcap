// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/EgoTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
// Member 'left_boundary'
// Member 'right_boundary'
#include "deva_map_msgs/msg/detail/ego_trajectory_point__struct.h"

/// Struct defined in msg/EgoTrajectory in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__EgoTrajectory
{
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence trajectory;
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence left_boundary;
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence right_boundary;
} deva_map_msgs__msg__EgoTrajectory;

// Struct for a sequence of deva_map_msgs__msg__EgoTrajectory.
typedef struct deva_map_msgs__msg__EgoTrajectory__Sequence
{
  deva_map_msgs__msg__EgoTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__EgoTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY__STRUCT_H_
