// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/LanePropertySegment.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_PROPERTY_SEGMENT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_PROPERTY_SEGMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'segment_properties'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'segment_points'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/LanePropertySegment in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__LanePropertySegment
{
  uint32_t num_segment;
  rosidl_runtime_c__uint8__Sequence segment_properties;
  geometry_msgs__msg__Point__Sequence segment_points;
} deva_perception_msgs__msg__LanePropertySegment;

// Struct for a sequence of deva_perception_msgs__msg__LanePropertySegment.
typedef struct deva_perception_msgs__msg__LanePropertySegment__Sequence
{
  deva_perception_msgs__msg__LanePropertySegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__LanePropertySegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_PROPERTY_SEGMENT__STRUCT_H_
