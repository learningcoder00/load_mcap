// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/RGAdditionalLaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_ADDITIONAL_LANE_INFO__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_ADDITIONAL_LANE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'arrow'
// Member 'flag'
// Member 'rg_add_lane_property'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'active_time'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RGAdditionalLaneInfo in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo
{
  rosidl_runtime_c__uint32__Sequence arrow;
  rosidl_runtime_c__uint32__Sequence flag;
  rosidl_runtime_c__uint32__Sequence rg_add_lane_property;
  rosidl_runtime_c__String active_time;
} deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo;

// Struct for a sequence of deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo.
typedef struct deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence
{
  deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_ADDITIONAL_LANE_INFO__STRUCT_H_
