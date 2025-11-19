// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_ROAD__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_ROAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'coord_list'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.h"
// Member 'intersection_msg'
#include "deva_gaode_routing_msgs/msg/detail/web_intersection__struct.h"

/// Struct defined in msg/WebRoad in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__WebRoad
{
  bool has_traffic_light;
  float distance;
  float time;
  uint32_t road_type;
  uint32_t road_class;
  uint32_t specific_type;
  uint32_t road_direction;
  uint32_t link_direction;
  deva_gaode_routing_msgs__msg__WebPoint__Sequence coord_list;
  uint32_t traffic_status;
  deva_gaode_routing_msgs__msg__WebIntersection__Sequence intersection_msg;
  uint32_t lane_num;
} deva_gaode_routing_msgs__msg__WebRoad;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebRoad.
typedef struct deva_gaode_routing_msgs__msg__WebRoad__Sequence
{
  deva_gaode_routing_msgs__msg__WebRoad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebRoad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_ROAD__STRUCT_H_
