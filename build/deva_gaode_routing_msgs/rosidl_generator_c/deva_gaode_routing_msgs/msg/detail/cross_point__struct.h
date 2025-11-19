// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/CrossPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CROSS_POINT__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CROSS_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'geom'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.h"

/// Struct defined in msg/CrossPoint in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__CrossPoint
{
  uint64_t id;
  deva_gaode_routing_msgs__msg__WebPoint geom;
  /// 路口属性点类型: 1 进入路口点；2 退出路口点； 3 待转区停止线；4 停止线；5 红绿灯
  int32_t type;
  /// 关联路口id，与SDCrossMsg中id对应
  uint64_t cross_id;
} deva_gaode_routing_msgs__msg__CrossPoint;

// Struct for a sequence of deva_gaode_routing_msgs__msg__CrossPoint.
typedef struct deva_gaode_routing_msgs__msg__CrossPoint__Sequence
{
  deva_gaode_routing_msgs__msg__CrossPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__CrossPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CROSS_POINT__STRUCT_H_
