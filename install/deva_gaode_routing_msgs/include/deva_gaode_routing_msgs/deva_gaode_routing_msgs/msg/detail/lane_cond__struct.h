// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/LaneCond.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_COND__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_COND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'date'
#include "rosidl_runtime_c/string.h"
// Member 'vehicles'
// Member 'special_times'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LaneCond in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__LaneCond
{
  uint16_t laneinfo_cond;
  uint8_t link_direction;
  rosidl_runtime_c__String date;
  rosidl_runtime_c__uint8__Sequence vehicles;
  rosidl_runtime_c__uint8__Sequence special_times;
} deva_gaode_routing_msgs__msg__LaneCond;

// Struct for a sequence of deva_gaode_routing_msgs__msg__LaneCond.
typedef struct deva_gaode_routing_msgs__msg__LaneCond__Sequence
{
  deva_gaode_routing_msgs__msg__LaneCond * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__LaneCond__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_COND__STRUCT_H_
