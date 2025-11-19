// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/J6mIntersectionEntryInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION_ENTRY_INFO__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION_ENTRY_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'crowd_sourcing_link_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"
// Member 'position'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"

/// Struct defined in msg/J6mIntersectionEntryInfo in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo
{
  /// 路口进入点所在的 crowd sourcing link id
  deva_gaode_routing_msgs__msg__LinkIDType crowd_sourcing_link_id;
  /// 当前 link 起点到路口进入点的 offset，单位：厘米
  uint32_t offset;
  /// 路口进入点坐标
  deva_gaode_routing_msgs__msg__Coordinate position;
} deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo;

// Struct for a sequence of deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo.
typedef struct deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence
{
  deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION_ENTRY_INFO__STRUCT_H_
