// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/TrafficLightArrayNew.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY_NEW__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY_NEW__STRUCT_H_

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
// Member 'traffic_lights'
#include "deva_perception_msgs/msg/detail/traffic_light_new__struct.h"

/// Struct defined in msg/TrafficLightArrayNew in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__TrafficLightArrayNew
{
  deva_common_msgs__msg__Header header;
  /// circle
  /// turn_left
  /// turn_right
  /// gostraight
  /// turn_round
  /// turnleft_turnaround
  /// turnleft_gostraight
  /// turnright_gostraight
  /// slow_down
  /// turn_left_waiting_zone
  /// turn_right_waiting_zone
  /// others
  deva_perception_msgs__msg__TrafficLightNew traffic_lights[12];
} deva_perception_msgs__msg__TrafficLightArrayNew;

// Struct for a sequence of deva_perception_msgs__msg__TrafficLightArrayNew.
typedef struct deva_perception_msgs__msg__TrafficLightArrayNew__Sequence
{
  deva_perception_msgs__msg__TrafficLightArrayNew * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__TrafficLightArrayNew__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY_NEW__STRUCT_H_
