// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/HeterogeneousMatchLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HETEROGENEOUS_MATCH_LINK__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HETEROGENEOUS_MATCH_LINK__STRUCT_H_

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

/// Struct defined in msg/HeterogeneousMatchLink in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__HeterogeneousMatchLink
{
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence links;
} deva_gaode_routing_msgs__msg__HeterogeneousMatchLink;

// Struct for a sequence of deva_gaode_routing_msgs__msg__HeterogeneousMatchLink.
typedef struct deva_gaode_routing_msgs__msg__HeterogeneousMatchLink__Sequence
{
  deva_gaode_routing_msgs__msg__HeterogeneousMatchLink * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__HeterogeneousMatchLink__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HETEROGENEOUS_MATCH_LINK__STRUCT_H_
