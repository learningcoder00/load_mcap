// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_attribute'
#include "deva_gaode_routing_msgs/msg/detail/link_attribute__struct.h"
// Member 'coordinate'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"
// Member 'topology'
#include "deva_gaode_routing_msgs/msg/detail/topology__struct.h"
// Member 'link_curvature'
#include "deva_gaode_routing_msgs/msg/detail/link_curvature__struct.h"
// Member 'guidance'
#include "deva_gaode_routing_msgs/msg/detail/guidance__struct.h"
// Member 'start_id'
// Member 'end_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__struct.h"
// Member 'feature_point_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.h"
// Member 'start'
// Member 'end'
#include "deva_gaode_routing_msgs/msg/detail/node__struct.h"
// Member 'feature_points'
#include "deva_gaode_routing_msgs/msg/detail/feature_point__struct.h"
// Member 'lanes'
#include "deva_gaode_routing_msgs/msg/detail/lane_by_id__struct.h"
// Member 'j6m_intersection_entry_infos'
#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection_entry_info__struct.h"
// Member 'j6m_lane_ids'
// Member 'j6m_link_ids'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"

/// Struct defined in msg/Link in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__Link
{
  deva_gaode_routing_msgs__msg__LinkAttribute link_attribute;
  deva_gaode_routing_msgs__msg__Coordinate__Sequence coordinate;
  uint64_t raw_id;
  deva_gaode_routing_msgs__msg__Topology topology;
  deva_gaode_routing_msgs__msg__LinkCurvature link_curvature;
  deva_gaode_routing_msgs__msg__Guidance__Sequence guidance;
  deva_gaode_routing_msgs__msg__NodeIDType start_id;
  deva_gaode_routing_msgs__msg__NodeIDType end_id;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence feature_point_ids;
  /// 兼容   v2 删除
  deva_gaode_routing_msgs__msg__Node start;
  /// 兼容   v2 删除
  deva_gaode_routing_msgs__msg__Node end;
  /// 兼容   v2 删除
  deva_gaode_routing_msgs__msg__FeaturePoint__Sequence feature_points;
  /// 兼容   v2 删除
  deva_gaode_routing_msgs__msg__LaneById__Sequence lanes;
  deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence j6m_intersection_entry_infos;
  /// j6m lanes
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence j6m_lane_ids;
  /// j6m links
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence j6m_link_ids;
} deva_gaode_routing_msgs__msg__Link;

// Struct for a sequence of deva_gaode_routing_msgs__msg__Link.
typedef struct deva_gaode_routing_msgs__msg__Link__Sequence
{
  deva_gaode_routing_msgs__msg__Link * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__Link__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK__STRUCT_H_
