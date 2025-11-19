// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/Topology.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TOPOLOGY__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TOPOLOGY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'next_id_s'
// Member 'previous_id_s'
// Member 'next_within_intersection'
// Member 'previous_within_intersection'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"

/// Struct defined in msg/Topology in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__Topology
{
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence next_id_s;
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence previous_id_s;
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence next_within_intersection;
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence previous_within_intersection;
} deva_gaode_routing_msgs__msg__Topology;

// Struct for a sequence of deva_gaode_routing_msgs__msg__Topology.
typedef struct deva_gaode_routing_msgs__msg__Topology__Sequence
{
  deva_gaode_routing_msgs__msg__Topology * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__Topology__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TOPOLOGY__STRUCT_H_
