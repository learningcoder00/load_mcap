// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NODE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tpid'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__struct.h"
// Member 'position'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"
// Member 'links_enter'
// Member 'links_enter_cross'
// Member 'links_out'
// Member 'links_out_cross'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"

/// Struct defined in msg/Node in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__Node
{
  deva_gaode_routing_msgs__msg__NodeIDType tpid;
  uint8_t cross_flag;
  bool has_traffic_light;
  deva_gaode_routing_msgs__msg__Coordinate position;
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence links_enter;
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence links_enter_cross;
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence links_out;
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence links_out_cross;
} deva_gaode_routing_msgs__msg__Node;

// Struct for a sequence of deva_gaode_routing_msgs__msg__Node.
typedef struct deva_gaode_routing_msgs__msg__Node__Sequence
{
  deva_gaode_routing_msgs__msg__Node * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__Node__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NODE__STRUCT_H_
