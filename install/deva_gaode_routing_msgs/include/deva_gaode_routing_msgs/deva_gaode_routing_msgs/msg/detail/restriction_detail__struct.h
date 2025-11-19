// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/RestrictionDetail.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION_DETAIL__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION_DETAIL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'valid_period'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RestrictionDetail in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__RestrictionDetail
{
  uint64_t id;
  /// 目前只有一个方向：顺
  int32_t direction;
  uint32_t vehicle_limit;
  /// 时间段是否是估算值,0 是 1 否
  int32_t period_approx;
  rosidl_runtime_c__String valid_period;
  uint32_t time_type;
} deva_gaode_routing_msgs__msg__RestrictionDetail;

// Struct for a sequence of deva_gaode_routing_msgs__msg__RestrictionDetail.
typedef struct deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence
{
  deva_gaode_routing_msgs__msg__RestrictionDetail * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION_DETAIL__STRUCT_H_
