// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/EgoTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY_POINT__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EgoTrajectoryPoint in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__EgoTrajectoryPoint
{
  double x;
  double y;
  double z;
} deva_map_msgs__msg__EgoTrajectoryPoint;

// Struct for a sequence of deva_map_msgs__msg__EgoTrajectoryPoint.
typedef struct deva_map_msgs__msg__EgoTrajectoryPoint__Sequence
{
  deva_map_msgs__msg__EgoTrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__EgoTrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY_POINT__STRUCT_H_
