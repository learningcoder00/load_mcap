// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/LinkAttribute.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ATTRIBUTE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ATTRIBUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"
// Member 'road_kinds'
// Member 'vehicle_types'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LinkAttribute in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__LinkAttribute
{
  deva_gaode_routing_msgs__msg__LinkIDType link_id;
  int32_t length;
  uint8_t link_direction;
  uint8_t lane_num_sum;
  uint8_t lane_num_s2e;
  uint8_t lane_num_e2s;
  uint8_t speed_limit_s2e;
  uint8_t speed_limit_e2s;
  /// 道路等级
  int8_t road_class;
  /// 收费属性
  uint8_t toll_type;
  /// 道路类型   0x12 提前道路
  rosidl_runtime_c__uint8__Sequence road_kinds;
  /// link数据hdair覆盖状态
  uint16_t coverage_status;
  /// 功能类别
  uint8_t function_class;
  /// 在建状态
  uint8_t construction_type;
  /// 铺设状态
  uint8_t condition_type;
  /// 速度等级
  uint8_t speed_class;
  /// 行政区代码
  uint32_t admin_code;
  /// 可通行车辆类型
  rosidl_runtime_c__uint8__Sequence vehicle_types;
  /// 通行能力
  uint8_t compacity;
  /// 特殊交通类型 为了控制进入道路车流量的近似环形道路
  bool is_special;
  /// 是否城市区域
  bool is_in_city;
  /// 是否跨tile
  bool is_cross_tile;
} deva_gaode_routing_msgs__msg__LinkAttribute;

// Struct for a sequence of deva_gaode_routing_msgs__msg__LinkAttribute.
typedef struct deva_gaode_routing_msgs__msg__LinkAttribute__Sequence
{
  deva_gaode_routing_msgs__msg__LinkAttribute * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__LinkAttribute__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ATTRIBUTE__STRUCT_H_
