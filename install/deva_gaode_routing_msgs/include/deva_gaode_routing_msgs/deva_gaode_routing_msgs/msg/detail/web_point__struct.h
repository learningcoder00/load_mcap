// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_POINT__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WebPoint in the package deva_gaode_routing_msgs.
/**
  * 坐标系类型，1-高德坐标系GCJ02|2-wgs84|utm
 */
typedef struct deva_gaode_routing_msgs__msg__WebPoint
{
  uint8_t type;
  /// 如果是utm坐标需要填写id
  int32_t id;
  double x;
  double y;
} deva_gaode_routing_msgs__msg__WebPoint;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebPoint.
typedef struct deva_gaode_routing_msgs__msg__WebPoint__Sequence
{
  deva_gaode_routing_msgs__msg__WebPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_POINT__STRUCT_H_
