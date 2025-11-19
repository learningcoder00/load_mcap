// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/AdasisMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ADASIS_MAP__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ADASIS_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'ehp_position'
#include "deva_gaode_routing_msgs/msg/detail/ehp_position__struct.h"
// Member 'ehp_meta_data'
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__struct.h"
// Member 'ehp_segments'
#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__struct.h"
// Member 'ehp_stubs'
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__struct.h"
// Member 'ehp_profile_shorts'
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__struct.h"
// Member 'ehp_profile_longs'
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_long__struct.h"
// Member 'link'
#include "deva_gaode_routing_msgs/msg/detail/link__struct.h"
// Member 'node'
#include "deva_gaode_routing_msgs/msg/detail/node__struct.h"
// Member 'feature_points'
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__struct.h"
// Member 'lanes'
#include "deva_gaode_routing_msgs/msg/detail/lane__struct.h"
// Member 'stoplines'
#include "deva_gaode_routing_msgs/msg/detail/stop_line__struct.h"
// Member 'intersection_road_nodes'
#include "deva_gaode_routing_msgs/msg/detail/intersection_road_node__struct.h"
// Member 'intersection_roads'
#include "deva_gaode_routing_msgs/msg/detail/intersection_road__struct.h"
// Member 'position_match_link'
#include "deva_gaode_routing_msgs/msg/detail/position_match_link__struct.h"
// Member 'heterogeneous_match_link'
#include "deva_gaode_routing_msgs/msg/detail/heterogeneous_match_link__struct.h"
// Member 'route_guide_response'
#include "deva_gaode_routing_msgs/msg/detail/route_guide_response__struct.h"
// Member 'j6m_data'
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__struct.h"

/// Struct defined in msg/AdasisMap in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__AdasisMap
{
  deva_common_msgs__msg__Header header;
  /// 0|no update 1|update
  uint8_t is_update_ehp_position;
  deva_gaode_routing_msgs__msg__EhpPosition ehp_position;
  uint8_t is_update_ehp_meta_data;
  deva_gaode_routing_msgs__msg__EhpMetaData ehp_meta_data;
  uint8_t is_update_ehp_segments;
  deva_gaode_routing_msgs__msg__EhpSegment__Sequence ehp_segments;
  uint8_t is_update_ehp_stubs;
  deva_gaode_routing_msgs__msg__EhpStub__Sequence ehp_stubs;
  uint8_t is_update_ehp_profile_shorts;
  deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence ehp_profile_shorts;
  uint8_t is_update_ehp_profile_longs;
  deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence ehp_profile_longs;
  /// links
  deva_gaode_routing_msgs__msg__Link__Sequence link;
  /// link node
  deva_gaode_routing_msgs__msg__Node__Sequence node;
  /// feature_point
  deva_gaode_routing_msgs__msg__FeaturePointById__Sequence feature_points;
  /// lanes
  deva_gaode_routing_msgs__msg__LANE__Sequence lanes;
  /// stop line
  deva_gaode_routing_msgs__msg__StopLine__Sequence stoplines;
  /// 交叉口节点
  deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence intersection_road_nodes;
  /// 交叉点道路
  deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence intersection_roads;
  deva_gaode_routing_msgs__msg__PositionMatchLink position_match_link;
  /// 异源匹配links
  deva_gaode_routing_msgs__msg__HeterogeneousMatchLink heterogeneous_match_link;
  /// guide response
  deva_gaode_routing_msgs__msg__RouteGuideResponse route_guide_response;
  /// j6m data
  deva_gaode_routing_msgs__msg__J6mData j6m_data;
} deva_gaode_routing_msgs__msg__AdasisMap;

// Struct for a sequence of deva_gaode_routing_msgs__msg__AdasisMap.
typedef struct deva_gaode_routing_msgs__msg__AdasisMap__Sequence
{
  deva_gaode_routing_msgs__msg__AdasisMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__AdasisMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ADASIS_MAP__STRUCT_H_
