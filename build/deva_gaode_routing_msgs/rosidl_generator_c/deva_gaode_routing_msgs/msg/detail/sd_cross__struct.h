// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/SDCross.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_CROSS__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_CROSS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sub_node'
// Member 'inner_roads'
// Member 'in_roads'
// Member 'out_roads'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SDCross in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__SDCross
{
  uint64_t id;
  int32_t type;
  uint64_t main_node;
  rosidl_runtime_c__uint64__Sequence sub_node;
  rosidl_runtime_c__uint64__Sequence inner_roads;
  rosidl_runtime_c__uint64__Sequence in_roads;
  rosidl_runtime_c__uint64__Sequence out_roads;
} deva_gaode_routing_msgs__msg__SDCross;

// Struct for a sequence of deva_gaode_routing_msgs__msg__SDCross.
typedef struct deva_gaode_routing_msgs__msg__SDCross__Sequence
{
  deva_gaode_routing_msgs__msg__SDCross * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__SDCross__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_CROSS__STRUCT_H_
