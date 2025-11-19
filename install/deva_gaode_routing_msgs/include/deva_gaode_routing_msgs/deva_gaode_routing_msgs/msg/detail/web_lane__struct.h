// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LANE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'actual_turn'
// Member 'navi_turn'
// Member 'optimal_turn'
// Member 'actual_exten_turn'
// Member 'exten_turn'
// Member 'actual_turn_type'
// Member 'navi_turn_type'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'md5'
#include "rosidl_runtime_c/string.h"
// Member 'callback_point'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.h"

/// Struct defined in msg/WebLane in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__WebLane
{
  int32_t lane_num;
  rosidl_runtime_c__uint32__Sequence actual_turn;
  rosidl_runtime_c__uint32__Sequence navi_turn;
  rosidl_runtime_c__uint32__Sequence optimal_turn;
  rosidl_runtime_c__uint32__Sequence actual_exten_turn;
  rosidl_runtime_c__uint32__Sequence exten_turn;
  rosidl_runtime_c__uint32__Sequence actual_turn_type;
  rosidl_runtime_c__uint32__Sequence navi_turn_type;
  int32_t road_idx;
  int32_t step_idx;
  rosidl_runtime_c__String md5;
  deva_gaode_routing_msgs__msg__WebPoint callback_point;
} deva_gaode_routing_msgs__msg__WebLane;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebLane.
typedef struct deva_gaode_routing_msgs__msg__WebLane__Sequence
{
  deva_gaode_routing_msgs__msg__WebLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LANE__STRUCT_H_
