// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebNotAvoidInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_NOT_AVOID_INFO__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_NOT_AVOID_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'coord_2d'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.h"

/// Struct defined in msg/WebNotAvoidInfo in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__WebNotAvoidInfo
{
  deva_gaode_routing_msgs__msg__WebPoint coord_2d;
  int32_t dist_to_car;
  int32_t forbid_type;
  int32_t type;
  bool valid;
} deva_gaode_routing_msgs__msg__WebNotAvoidInfo;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebNotAvoidInfo.
typedef struct deva_gaode_routing_msgs__msg__WebNotAvoidInfo__Sequence
{
  deva_gaode_routing_msgs__msg__WebNotAvoidInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebNotAvoidInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_NOT_AVOID_INFO__STRUCT_H_
