// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/TrafficRount.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_ROUNT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_ROUNT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lane_info'
#include "deva_perception_msgs/msg/detail/lane_info__struct.h"
// Member 'road_info'
#include "deva_perception_msgs/msg/detail/road_info__struct.h"

/// Struct defined in msg/TrafficRount in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__TrafficRount
{
  double timestamp;
  deva_perception_msgs__msg__LaneInfo lane_info;
  int32_t cur_road;
  deva_perception_msgs__msg__RoadInfo road_info;
} deva_perception_msgs__msg__TrafficRount;

// Struct for a sequence of deva_perception_msgs__msg__TrafficRount.
typedef struct deva_perception_msgs__msg__TrafficRount__Sequence
{
  deva_perception_msgs__msg__TrafficRount * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__TrafficRount__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_ROUNT__STRUCT_H_
