// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RvLaneResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LANE_RESULT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LANE_RESULT__STRUCT_H_

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
// Member 'laneline_2d_array'
#include "deva_perception_msgs/msg/detail/lane_line2d_array__struct.h"
// Member 'stopline_2d_array'
#include "deva_perception_msgs/msg/detail/stop_line2d_array__struct.h"
// Member 'crosswalk_2d_array'
#include "deva_perception_msgs/msg/detail/crosswalk2d_array__struct.h"

/// Struct defined in msg/RvLaneResult in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__RvLaneResult
{
  deva_common_msgs__msg__Header header;
  deva_perception_msgs__msg__LaneLine2dArray__Sequence laneline_2d_array;
  deva_perception_msgs__msg__StopLine2dArray__Sequence stopline_2d_array;
  deva_perception_msgs__msg__Crosswalk2dArray__Sequence crosswalk_2d_array;
} deva_perception_msgs__msg__RvLaneResult;

// Struct for a sequence of deva_perception_msgs__msg__RvLaneResult.
typedef struct deva_perception_msgs__msg__RvLaneResult__Sequence
{
  deva_perception_msgs__msg__RvLaneResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RvLaneResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LANE_RESULT__STRUCT_H_
