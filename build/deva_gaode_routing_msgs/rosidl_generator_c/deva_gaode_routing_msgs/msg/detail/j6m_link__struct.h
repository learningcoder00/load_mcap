// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/J6mLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__STRUCT_H_

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
// Member 'successor_linkid_s'
// Member 'predecessor_linkid_s'
// Member 'referenced_lane_id_s'
// Member 'referenced_intersection_id_s'
// Member 'referenced_lanemarking_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"
// Member 'coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"

/// Struct defined in msg/J6mLink in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__J6mLink
{
  deva_gaode_routing_msgs__msg__LinkIDType id;
  uint8_t road_type;
  /// cm
  uint32_t length;
  /// 取道路置信度，单位为百分之（返回 5 表示 5%）
  uint32_t confidence;
  /// 道路行驶方向
  uint8_t travel_direction;
  /// 道路几何形状
  deva_gaode_routing_msgs__msg__Coordinate__Sequence coordinates;
  /// 道路后继linkId列表
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence successor_linkid_s;
  /// 道路前驱linkId列表
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence predecessor_linkid_s;
  /// 道路关联lane
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence referenced_lane_id_s;
  /// 道路关联路口
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence referenced_intersection_id_s;
  /// 道路关联laneMarking
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence referenced_lanemarking_id_s;
} deva_gaode_routing_msgs__msg__J6mLink;

// Struct for a sequence of deva_gaode_routing_msgs__msg__J6mLink.
typedef struct deva_gaode_routing_msgs__msg__J6mLink__Sequence
{
  deva_gaode_routing_msgs__msg__J6mLink * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__J6mLink__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__STRUCT_H_
