// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/ObstacleEdge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__OBSTACLE_EDGE__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__OBSTACLE_EDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'world_coord_center_point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/ObstacleEdge in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__ObstacleEdge
{
  geometry_msgs__msg__Point world_coord_center_point;
} deva_map_msgs__msg__ObstacleEdge;

// Struct for a sequence of deva_map_msgs__msg__ObstacleEdge.
typedef struct deva_map_msgs__msg__ObstacleEdge__Sequence
{
  deva_map_msgs__msg__ObstacleEdge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__ObstacleEdge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__OBSTACLE_EDGE__STRUCT_H_
