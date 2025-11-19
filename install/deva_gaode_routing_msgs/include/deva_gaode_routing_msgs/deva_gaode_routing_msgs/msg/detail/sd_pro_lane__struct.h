// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/SdProLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'next_lanes'
// Member 'pre_lanes'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_topo__struct.h"

/// Struct defined in msg/SdProLane in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__SdProLane
{
  uint64_t id;
  /// 车道引导标识方向
  uint32_t lane_arrow_type;
  uint32_t category_location;
  uint32_t category_vehicle;
  uint32_t category_special;
  /// 车道编号，从右到左增加，从1开始
  int32_t lane_num;
  int32_t length;
  int32_t direction;
  deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence next_lanes;
  deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence pre_lanes;
  /// UNKNOWN = 0, CONTINUE = 1 // 直行, MERGE = 2 // 并道,  SPLIT = 3 // 岔道
  uint32_t transition;
} deva_gaode_routing_msgs__msg__SdProLane;

// Struct for a sequence of deva_gaode_routing_msgs__msg__SdProLane.
typedef struct deva_gaode_routing_msgs__msg__SdProLane__Sequence
{
  deva_gaode_routing_msgs__msg__SdProLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__SdProLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE__STRUCT_H_
