// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/LaneWaypoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__LANE_WAYPOINT__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__LANE_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "deva_localization_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/LaneWaypoint in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__LaneWaypoint
{
  rosidl_runtime_c__String id;
  double s;
  deva_localization_msgs__msg__Pose pose;
} deva_map_msgs__msg__LaneWaypoint;

// Struct for a sequence of deva_map_msgs__msg__LaneWaypoint.
typedef struct deva_map_msgs__msg__LaneWaypoint__Sequence
{
  deva_map_msgs__msg__LaneWaypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__LaneWaypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__LANE_WAYPOINT__STRUCT_H_
