// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/RouteTypeProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ROUTE_TYPE_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ROUTE_TYPE_PROTO__STRUCT_H_

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
#include "deva_navi_msgs/msg/detail/header_proto__struct.h"

/// Struct defined in msg/RouteTypeProto in the package deva_navi_msgs.
/**
  * RouteTypeProto.msg
 */
typedef struct deva_navi_msgs__msg__RouteTypeProto
{
  deva_navi_msgs__msg__HeaderProto header;
  int32_t type;
} deva_navi_msgs__msg__RouteTypeProto;

// Struct for a sequence of deva_navi_msgs__msg__RouteTypeProto.
typedef struct deva_navi_msgs__msg__RouteTypeProto__Sequence
{
  deva_navi_msgs__msg__RouteTypeProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__RouteTypeProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ROUTE_TYPE_PROTO__STRUCT_H_
