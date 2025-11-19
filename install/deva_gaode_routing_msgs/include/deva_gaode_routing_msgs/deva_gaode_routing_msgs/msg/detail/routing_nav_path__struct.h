// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/RoutingNavPath.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTING_NAV_PATH__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTING_NAV_PATH__STRUCT_H_

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
#include "std_msgs/msg/detail/header__struct.h"
// Member 'version'
// Member 'md5'
#include "rosidl_runtime_c/string.h"
// Member 'start_point'
// Member 'way_points'
// Member 'end_point'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.h"

/// Struct defined in msg/RoutingNavPath in the package deva_gaode_routing_msgs.
/**
  * 本消息用于收发导航信息，发送到高德node
 */
typedef struct deva_gaode_routing_msgs__msg__RoutingNavPath
{
  std_msgs__msg__Header header;
  /// 版本信息
  rosidl_runtime_c__String version;
  /// 可用状态
  bool status;
  /// 策略更新标志，用于rerouting更新,md5值
  rosidl_runtime_c__String md5;
  /// 策略更新标志，用于rerouting更新,index值
  uint32_t index;
  /// 起点
  deva_gaode_routing_msgs__msg__WebPoint start_point;
  /// 途经点
  deva_gaode_routing_msgs__msg__WebPoint__Sequence way_points;
  /// 终点
  deva_gaode_routing_msgs__msg__WebPoint end_point;
} deva_gaode_routing_msgs__msg__RoutingNavPath;

// Struct for a sequence of deva_gaode_routing_msgs__msg__RoutingNavPath.
typedef struct deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence
{
  deva_gaode_routing_msgs__msg__RoutingNavPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTING_NAV_PATH__STRUCT_H_
