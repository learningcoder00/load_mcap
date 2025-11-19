// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'route_points'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"
// Member 'rg_intersection_result'
#include "deva_gaode_routing_msgs/msg/detail/rg_intersection_result__struct.h"
// Member 'rg_lane_info_result'
#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__struct.h"
// Member 'rg_red_light_result'
#include "deva_gaode_routing_msgs/msg/detail/rg_red_light_result__struct.h"
// Member 'rg_tips_result'
#include "deva_gaode_routing_msgs/msg/detail/rgv_tips_point_result__struct.h"

/// Struct defined in msg/Route in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__Route
{
  deva_gaode_routing_msgs__msg__Coordinate__Sequence route_points;
  deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence rg_intersection_result;
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence rg_lane_info_result;
  deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence rg_red_light_result;
  deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence rg_tips_result;
} deva_gaode_routing_msgs__msg__Route;

// Struct for a sequence of deva_gaode_routing_msgs__msg__Route.
typedef struct deva_gaode_routing_msgs__msg__Route__Sequence
{
  deva_gaode_routing_msgs__msg__Route * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__Route__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
