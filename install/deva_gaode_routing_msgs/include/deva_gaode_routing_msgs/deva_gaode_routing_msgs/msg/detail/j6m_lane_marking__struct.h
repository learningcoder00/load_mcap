// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/J6mLaneMarking.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE_MARKING__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE_MARKING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lane_marking_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"
// Member 'lane_marking_coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"

/// Struct defined in msg/J6mLaneMarking in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__J6mLaneMarking
{
  /// 车道线原始数据Id
  deva_gaode_routing_msgs__msg__LinkIDType lane_marking_id;
  /// 车道线类型
  uint8_t lane_marking_type;
  /// 车道线长度  cm
  uint32_t lane_marking_length;
  /// 车道线是所属车道的第几段车道线
  uint8_t lane_marking_order_number;
  /// 车道线的起点到所属车道的第一段车道线的起点的距离
  uint32_t lane_marking_offset;
  /// 车道线颜色
  uint8_t lane_marking_color;
  /// 车道线置信度，单位为百分之（返回 5 表示 5%）
  uint32_t lane_marking_confidence;
  /// 车道线坐标列表
  deva_gaode_routing_msgs__msg__Coordinate__Sequence lane_marking_coordinates;
} deva_gaode_routing_msgs__msg__J6mLaneMarking;

// Struct for a sequence of deva_gaode_routing_msgs__msg__J6mLaneMarking.
typedef struct deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence
{
  deva_gaode_routing_msgs__msg__J6mLaneMarking * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE_MARKING__STRUCT_H_
