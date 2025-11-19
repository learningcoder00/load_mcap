// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/TrafficPole.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'perception_obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.h"
// Member 'bind_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TrafficPole in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__TrafficPole
{
  deva_perception_msgs__msg__ObstacleCommon perception_obstacle;
  rosidl_runtime_c__String bind_id;
  bool raised;
} deva_perception_msgs__msg__TrafficPole;

// Struct for a sequence of deva_perception_msgs__msg__TrafficPole.
typedef struct deva_perception_msgs__msg__TrafficPole__Sequence
{
  deva_perception_msgs__msg__TrafficPole * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__TrafficPole__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE__STRUCT_H_
