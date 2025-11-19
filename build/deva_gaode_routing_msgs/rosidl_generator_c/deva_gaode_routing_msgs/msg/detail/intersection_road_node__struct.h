// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/IntersectionRoadNode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD_NODE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD_NODE__STRUCT_H_

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
// Member 'enter_intersection_road_ids'
// Member 'out_intersection_roads_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.h"
// Member 'position'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"

/// Struct defined in msg/IntersectionRoadNode in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__IntersectionRoadNode
{
  deva_gaode_routing_msgs__msg__FeatureIDType id;
  deva_gaode_routing_msgs__msg__Coordinate position;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence enter_intersection_road_ids;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence out_intersection_roads_ids;
} deva_gaode_routing_msgs__msg__IntersectionRoadNode;

// Struct for a sequence of deva_gaode_routing_msgs__msg__IntersectionRoadNode.
typedef struct deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence
{
  deva_gaode_routing_msgs__msg__IntersectionRoadNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD_NODE__STRUCT_H_
