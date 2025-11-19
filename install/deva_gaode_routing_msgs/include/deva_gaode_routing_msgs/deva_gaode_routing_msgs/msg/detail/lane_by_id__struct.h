// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/LaneById.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_BY_ID__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_BY_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'feature_point_id_s'
// Member 'previous_id_s'
// Member 'next_id_s'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.h"
// Member 'lane_group_id_type'
#include "deva_gaode_routing_msgs/msg/detail/lane_group_id_type__struct.h"
// Member 'lane_type'
// Member 'border_types'
// Member 'border_colors'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LaneById in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__LaneById
{
  deva_gaode_routing_msgs__msg__FeatureIDType id;
  deva_gaode_routing_msgs__msg__LaneGroupIDType lane_group_id_type;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence feature_point_id_s;
  uint8_t direction;
  rosidl_runtime_c__uint8__Sequence lane_type;
  rosidl_runtime_c__uint8__Sequence border_types;
  rosidl_runtime_c__uint8__Sequence border_colors;
  float lane_width;
  float lane_start_width;
  float lane_end_width;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence previous_id_s;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence next_id_s;
} deva_gaode_routing_msgs__msg__LaneById;

// Struct for a sequence of deva_gaode_routing_msgs__msg__LaneById.
typedef struct deva_gaode_routing_msgs__msg__LaneById__Sequence
{
  deva_gaode_routing_msgs__msg__LaneById * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__LaneById__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_BY_ID__STRUCT_H_
