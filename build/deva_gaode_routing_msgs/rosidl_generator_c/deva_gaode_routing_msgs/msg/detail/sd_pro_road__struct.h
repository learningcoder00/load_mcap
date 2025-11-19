// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/SdProRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_ROAD__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_ROAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'forms'
// Member 'next_ids'
// Member 'pre_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'geo'
#include "deva_gaode_routing_msgs/msg/detail/center_point__struct.h"
// Member 'lanes'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane__struct.h"
// Member 'lane_connect'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_connect__struct.h"
// Member 'trfc_signs'
#include "deva_gaode_routing_msgs/msg/detail/trfc_sign__struct.h"
// Member 'road_name'
#include "rosidl_runtime_c/string.h"
// Member 'restriction'
#include "deva_gaode_routing_msgs/msg/detail/restriction__struct.h"
// Member 'cross_point'
#include "deva_gaode_routing_msgs/msg/detail/cross_point__struct.h"

/// Struct defined in msg/SdProRoad in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__SdProRoad
{
  uint64_t id;
  /// 道路等级
  uint32_t road_kind;
  uint32_t direction;
  /// 道路类型
  rosidl_runtime_c__uint32__Sequence forms;
  uint32_t lane_count;
  double length;
  uint32_t speed_limit_min;
  uint32_t speed_limit_max;
  double start_angle;
  double end_angle;
  deva_gaode_routing_msgs__msg__CenterPoint__Sequence geo;
  deva_gaode_routing_msgs__msg__SdProLane__Sequence lanes;
  rosidl_runtime_c__uint64__Sequence next_ids;
  rosidl_runtime_c__uint64__Sequence pre_ids;
  uint32_t product_type;
  deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence lane_connect;
  deva_gaode_routing_msgs__msg__TrfcSign__Sequence trfc_signs;
  uint64_t s_node_id;
  uint64_t e_node_id;
  uint32_t joint_type;
  rosidl_runtime_c__String road_name;
  deva_gaode_routing_msgs__msg__Restriction__Sequence restriction;
  deva_gaode_routing_msgs__msg__CrossPoint__Sequence cross_point;
} deva_gaode_routing_msgs__msg__SdProRoad;

// Struct for a sequence of deva_gaode_routing_msgs__msg__SdProRoad.
typedef struct deva_gaode_routing_msgs__msg__SdProRoad__Sequence
{
  deva_gaode_routing_msgs__msg__SdProRoad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__SdProRoad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_ROAD__STRUCT_H_
