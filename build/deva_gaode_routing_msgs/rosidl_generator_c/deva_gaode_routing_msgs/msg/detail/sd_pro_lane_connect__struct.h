// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/SdProLaneConnect.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_CONNECT__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_CONNECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pass_road_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'connect_restriction'
#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__struct.h"

/// Struct defined in msg/SdProLaneConnect in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__SdProLaneConnect
{
  uint64_t id;
  uint64_t out_road;
  rosidl_runtime_c__uint64__Sequence pass_road_ids;
  uint32_t arrow_info;
  /// 可通行车道 转为16位2进制 从左到右标识车道
  int32_t lane_info;
  /// 公交车可通行车道 转为16位2进制 从左到右标识车道 1标识只有公交车可通过车道实现箭头信息的转向，结合valid_period时间段使用
  int32_t bus_lane;
  /// 总车道数
  int32_t lane_num;
  /// 左侧附加车道
  int32_t lane_left;
  /// 右侧附加车道
  int32_t lane_right;
  /// 进入点sdnode_id，与road中s_node_id对应，lane与road是同时打断，对应的sdnode也一样
  uint64_t node_id;
  /// 条件限制车道，使用16位0/1表达从左向右为各车道的标识位，标识为1时，表示该车道具有条件限制
  int32_t limit_lane;
  /// 车道条件限制，顺序对应limit_lane标识为1的车道（从左向右），这里RestrictionDetail中字段period_approx set 1
  deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence connect_restriction;
} deva_gaode_routing_msgs__msg__SdProLaneConnect;

// Struct for a sequence of deva_gaode_routing_msgs__msg__SdProLaneConnect.
typedef struct deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence
{
  deva_gaode_routing_msgs__msg__SdProLaneConnect * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_CONNECT__STRUCT_H_
