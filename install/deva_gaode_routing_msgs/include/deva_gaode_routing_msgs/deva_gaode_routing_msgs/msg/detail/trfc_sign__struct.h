// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/TrfcSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TRFC_SIGN__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TRFC_SIGN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrfcSign in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__TrfcSign
{
  uint64_t id;
  /// 是否是限速标牌 0 no;1 yes
  bool speedflag;
  /// 限速标牌的限速值
  int32_t speed;
  /// 警示标牌距离
  double offset;
} deva_gaode_routing_msgs__msg__TrfcSign;

// Struct for a sequence of deva_gaode_routing_msgs__msg__TrfcSign.
typedef struct deva_gaode_routing_msgs__msg__TrfcSign__Sequence
{
  deva_gaode_routing_msgs__msg__TrfcSign * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__TrfcSign__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TRFC_SIGN__STRUCT_H_
