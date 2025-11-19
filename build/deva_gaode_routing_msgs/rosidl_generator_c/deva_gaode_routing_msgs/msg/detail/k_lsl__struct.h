// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/KLsl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LSL__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LSL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'in_link_id'
// Member 'pass_link_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"
// Member 'node_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__struct.h"
// Member 'lsl_lanes'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/KLsl in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__KLsl
{
  deva_gaode_routing_msgs__msg__LinkIDType in_link_id;
  deva_gaode_routing_msgs__msg__NodeIDType node_id;
  deva_gaode_routing_msgs__msg__LinkIDType pass_link_id_s;
  uint8_t seqnum;
  uint8_t lsl_type;
  uint8_t lane_nums;
  rosidl_runtime_c__uint8__Sequence lsl_lanes;
} deva_gaode_routing_msgs__msg__KLsl;

// Struct for a sequence of deva_gaode_routing_msgs__msg__KLsl.
typedef struct deva_gaode_routing_msgs__msg__KLsl__Sequence
{
  deva_gaode_routing_msgs__msg__KLsl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__KLsl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LSL__STRUCT_H_
