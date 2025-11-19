// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/IntersectionRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD__STRUCT_H_

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
// Member 'start_node_id'
// Member 'end_node_id'
// Member 'start_feature_point_id'
// Member 'end_feature_point_id'
// Member 'nexts'
// Member 'prevs'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.h"
// Member 'geometry'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"
// Member 'relate_link_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"

/// Struct defined in msg/IntersectionRoad in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__IntersectionRoad
{
  deva_gaode_routing_msgs__msg__FeatureIDType id;
  uint8_t link_direction;
  uint8_t cross_turn_type;
  bool has_traffic_light;
  deva_gaode_routing_msgs__msg__Coordinate__Sequence geometry;
  deva_gaode_routing_msgs__msg__FeatureIDType start_node_id;
  deva_gaode_routing_msgs__msg__FeatureIDType end_node_id;
  deva_gaode_routing_msgs__msg__FeatureIDType start_feature_point_id;
  deva_gaode_routing_msgs__msg__FeatureIDType end_feature_point_id;
  deva_gaode_routing_msgs__msg__LinkIDType relate_link_id;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence nexts;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence prevs;
} deva_gaode_routing_msgs__msg__IntersectionRoad;

// Struct for a sequence of deva_gaode_routing_msgs__msg__IntersectionRoad.
typedef struct deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence
{
  deva_gaode_routing_msgs__msg__IntersectionRoad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD__STRUCT_H_
