// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/LANE.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE__STRUCT_H_

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
// Member 'left_border_types'
// Member 'right_border_types'
// Member 'left_border_colors'
// Member 'right_border_colors'
// Member 'arrows'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'lane_restricts'
#include "deva_gaode_routing_msgs/msg/detail/lane_restriction__struct.h"

/// Struct defined in msg/LANE in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__LANE
{
  deva_gaode_routing_msgs__msg__FeatureIDType id;
  deva_gaode_routing_msgs__msg__LaneGroupIDType lane_group_id_type;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence feature_point_id_s;
  uint8_t direction;
  rosidl_runtime_c__uint8__Sequence lane_type;
  rosidl_runtime_c__uint8__Sequence left_border_types;
  rosidl_runtime_c__uint8__Sequence right_border_types;
  rosidl_runtime_c__uint8__Sequence left_border_colors;
  rosidl_runtime_c__uint8__Sequence right_border_colors;
  uint8_t change_type;
  float lane_width;
  float lane_start_width;
  float lane_end_width;
  uint8_t seq_num;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence previous_id_s;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence next_id_s;
  uint8_t lsl_type;
  rosidl_runtime_c__uint8__Sequence arrows;
  deva_gaode_routing_msgs__msg__LaneRestriction__Sequence lane_restricts;
} deva_gaode_routing_msgs__msg__LANE;

// Struct for a sequence of deva_gaode_routing_msgs__msg__LANE.
typedef struct deva_gaode_routing_msgs__msg__LANE__Sequence
{
  deva_gaode_routing_msgs__msg__LANE * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__LANE__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE__STRUCT_H_
