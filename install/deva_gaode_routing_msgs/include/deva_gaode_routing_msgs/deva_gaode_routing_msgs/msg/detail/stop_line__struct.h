// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/StopLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__STOP_LINE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__STOP_LINE__STRUCT_H_

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
// Member 'related_lane_ids'
// Member 'related_intersection_road_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.h"
// Member 'location'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"
// Member 'related_node_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__struct.h"

/// Struct defined in msg/StopLine in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__StopLine
{
  deva_gaode_routing_msgs__msg__FeatureIDType id;
  uint8_t type;
  deva_gaode_routing_msgs__msg__Coordinate location;
  /// 关联的NodeID
  deva_gaode_routing_msgs__msg__NodeIDType related_node_id;
  /// 关联的LaneID
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence related_lane_ids;
  /// 关联的IntersectionRoadID
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence related_intersection_road_ids;
} deva_gaode_routing_msgs__msg__StopLine;

// Struct for a sequence of deva_gaode_routing_msgs__msg__StopLine.
typedef struct deva_gaode_routing_msgs__msg__StopLine__Sequence
{
  deva_gaode_routing_msgs__msg__StopLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__StopLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__STOP_LINE__STRUCT_H_
