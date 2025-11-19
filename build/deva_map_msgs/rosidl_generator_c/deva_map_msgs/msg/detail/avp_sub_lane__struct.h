// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/AvpSubLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_LANE__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lane_id'
// Member 'successor_lane_ids'
// Member 'left_lane_ids'
// Member 'right_lane_ids'
#include "rosidl_runtime_c/string.h"
// Member 'ref_line'
#include "deva_map_msgs/msg/detail/path_point__struct.h"
// Member 'drivable_boundary'
#include "deva_map_msgs/msg/detail/avp_boundary__struct.h"

/// Struct defined in msg/AvpSubLane in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__AvpSubLane
{
  rosidl_runtime_c__String lane_id;
  deva_map_msgs__msg__PathPoint__Sequence ref_line;
  deva_map_msgs__msg__AvpBoundary__Sequence drivable_boundary;
  rosidl_runtime_c__String__Sequence successor_lane_ids;
  rosidl_runtime_c__String__Sequence left_lane_ids;
  rosidl_runtime_c__String__Sequence right_lane_ids;
} deva_map_msgs__msg__AvpSubLane;

// Struct for a sequence of deva_map_msgs__msg__AvpSubLane.
typedef struct deva_map_msgs__msg__AvpSubLane__Sequence
{
  deva_map_msgs__msg__AvpSubLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__AvpSubLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_LANE__STRUCT_H_
