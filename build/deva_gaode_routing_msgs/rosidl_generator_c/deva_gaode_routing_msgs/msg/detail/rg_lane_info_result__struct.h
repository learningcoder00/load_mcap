// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/RGLaneInfoResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_LANE_INFO_RESULT__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_LANE_INFO_RESULT__STRUCT_H_

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
// Member 'rg_lane_result_property'
// Member 'recommend'
// Member 'lane_info_raw_link_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'active_time'
#include "rosidl_runtime_c/string.h"
// Member 'additional_lane_info'
#include "deva_gaode_routing_msgs/msg/detail/rg_additional_lane_info__struct.h"
// Member 'pos'
#include "deva_gaode_routing_msgs/msg/detail/route_pos__struct.h"

/// Struct defined in msg/RGLaneInfoResult in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__RGLaneInfoResult
{
  uint64_t raw_link_id;
  rosidl_runtime_c__uint32__Sequence arrow;
  rosidl_runtime_c__uint32__Sequence flag;
  rosidl_runtime_c__uint32__Sequence rg_lane_result_property;
  rosidl_runtime_c__uint32__Sequence recommend;
  rosidl_runtime_c__String active_time;
  deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence additional_lane_info;
  rosidl_runtime_c__uint64__Sequence lane_info_raw_link_ids;
  deva_gaode_routing_msgs__msg__RoutePos pos;
} deva_gaode_routing_msgs__msg__RGLaneInfoResult;

// Struct for a sequence of deva_gaode_routing_msgs__msg__RGLaneInfoResult.
typedef struct deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence
{
  deva_gaode_routing_msgs__msg__RGLaneInfoResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_LANE_INFO_RESULT__STRUCT_H_
