// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/LaneArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'lanes'
#include "deva_perception_msgs/msg/detail/lane__struct.h"

/// Struct defined in msg/LaneArray in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__LaneArray
{
  deva_common_msgs__msg__Header header;
  int32_t vehicle_left_lane_id;
  int32_t vehicle_right_lane_id;
  deva_perception_msgs__msg__Lane__Sequence lanes;
} deva_perception_msgs__msg__LaneArray;

// Struct for a sequence of deva_perception_msgs__msg__LaneArray.
typedef struct deva_perception_msgs__msg__LaneArray__Sequence
{
  deva_perception_msgs__msg__LaneArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__LaneArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAY__STRUCT_H_
