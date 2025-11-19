// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebStep.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_STEP__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_STEP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'roads'
#include "deva_gaode_routing_msgs/msg/detail/web_road__struct.h"

/// Struct defined in msg/WebStep in the package deva_gaode_routing_msgs.
/**
  * step index, 阶段更新
 */
typedef struct deva_gaode_routing_msgs__msg__WebStep
{
  int32_t id;
  /// 当前路段所有的road集合，对于hwa模式，也将只填写该字段，并且road只写当前搜索的road就行, 阶段更新
  deva_gaode_routing_msgs__msg__WebRoad__Sequence roads;
  /// 当前路段经过的红绿灯数目, 阶段更新
  int32_t traffic_light_count;
  /// 当前路段行驶距离, 阶段更新
  float distance;
  /// 当前路段行驶时间, 阶段更新
  float time;
  /// 当前路段前方行驶方向, 阶段更新
  uint32_t forward_direction;
  /// 当前路段前方road类型（隧道环岛等）, 阶段更新
  uint32_t forward_type;
  /// 引导动作
  uint32_t main_action;
  /// 辅助引导动作
  uint32_t assistant_action;
} deva_gaode_routing_msgs__msg__WebStep;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebStep.
typedef struct deva_gaode_routing_msgs__msg__WebStep__Sequence
{
  deva_gaode_routing_msgs__msg__WebStep * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebStep__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_STEP__STRUCT_H_
