// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/ReroutingInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__REROUTING_INFO__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__REROUTING_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obstacle_edges'
#include "deva_map_msgs/msg/detail/obstacle_edge__struct.h"

/// Struct defined in msg/ReroutingInfo in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__ReroutingInfo
{
  deva_map_msgs__msg__ObstacleEdge__Sequence obstacle_edges;
} deva_planning_msgs2__msg__ReroutingInfo;

// Struct for a sequence of deva_planning_msgs2__msg__ReroutingInfo.
typedef struct deva_planning_msgs2__msg__ReroutingInfo__Sequence
{
  deva_planning_msgs2__msg__ReroutingInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__ReroutingInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__REROUTING_INFO__STRUCT_H_
