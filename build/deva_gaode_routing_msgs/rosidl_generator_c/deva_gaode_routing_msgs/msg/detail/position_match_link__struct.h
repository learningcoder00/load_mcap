// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/PositionMatchLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__POSITION_MATCH_LINK__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__POSITION_MATCH_LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'links'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"

/// Struct defined in msg/PositionMatchLink in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__PositionMatchLink
{
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence links;
} deva_gaode_routing_msgs__msg__PositionMatchLink;

// Struct for a sequence of deva_gaode_routing_msgs__msg__PositionMatchLink.
typedef struct deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence
{
  deva_gaode_routing_msgs__msg__PositionMatchLink * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__POSITION_MATCH_LINK__STRUCT_H_
