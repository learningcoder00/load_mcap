// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/J6mIntersection.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'intersection_id'
// Member 'link_id_s'
// Member 'intersection_successor_id_s'
// Member 'intersection_predecessor_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"
// Member 'intersection_coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"

/// Struct defined in msg/J6mIntersection in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__J6mIntersection
{
  /// 路口原始数据Id
  deva_gaode_routing_msgs__msg__LinkIDType intersection_id;
  /// 路口linkId列表
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence link_id_s;
  /// 路口后继路口Id列表
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence intersection_successor_id_s;
  /// 路口前驱路口Id列表
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence intersection_predecessor_id_s;
  /// 路口是否是车道数变化区域
  bool is_lane_num_change_areas;
  /// 路口坐标列表
  deva_gaode_routing_msgs__msg__Coordinate__Sequence intersection_coordinates;
} deva_gaode_routing_msgs__msg__J6mIntersection;

// Struct for a sequence of deva_gaode_routing_msgs__msg__J6mIntersection.
typedef struct deva_gaode_routing_msgs__msg__J6mIntersection__Sequence
{
  deva_gaode_routing_msgs__msg__J6mIntersection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__J6mIntersection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION__STRUCT_H_
