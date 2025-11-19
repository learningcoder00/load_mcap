// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/LaneTrafficInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TRAFFIC_INFO__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TRAFFIC_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LaneTrafficInfo in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__LaneTrafficInfo
{
  bool is_bus;
  uint32_t lane_type;
  uint32_t arrow;
} deva_gaode_routing_msgs__msg__LaneTrafficInfo;

// Struct for a sequence of deva_gaode_routing_msgs__msg__LaneTrafficInfo.
typedef struct deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence
{
  deva_gaode_routing_msgs__msg__LaneTrafficInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TRAFFIC_INFO__STRUCT_H_
