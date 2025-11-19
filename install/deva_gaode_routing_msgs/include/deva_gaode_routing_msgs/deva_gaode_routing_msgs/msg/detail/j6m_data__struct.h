// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/J6mData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_DATA__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'j6m_links'
#include "deva_gaode_routing_msgs/msg/detail/j6m_link__struct.h"
// Member 'j6m_intersections'
#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection__struct.h"
// Member 'j6m_lanes'
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane__struct.h"
// Member 'j6m_lane_markings'
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__struct.h"
// Member 'j6m_road_objects'
#include "deva_gaode_routing_msgs/msg/detail/j6m_road_object__struct.h"

/// Struct defined in msg/J6mData in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__J6mData
{
  /// j6m links
  deva_gaode_routing_msgs__msg__J6mLink__Sequence j6m_links;
  /// j6m intersection
  deva_gaode_routing_msgs__msg__J6mIntersection__Sequence j6m_intersections;
  /// j6m lanes
  deva_gaode_routing_msgs__msg__J6mLane__Sequence j6m_lanes;
  /// j6m lane markings
  deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence j6m_lane_markings;
  /// j6m road objects
  deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence j6m_road_objects;
} deva_gaode_routing_msgs__msg__J6mData;

// Struct for a sequence of deva_gaode_routing_msgs__msg__J6mData.
typedef struct deva_gaode_routing_msgs__msg__J6mData__Sequence
{
  deva_gaode_routing_msgs__msg__J6mData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__J6mData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_DATA__STRUCT_H_
