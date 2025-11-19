// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_

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

/// Struct defined in msg/TrafficLight in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__TrafficLight
{
  deva_perception_msgs__msg__ObstacleCommon perception_obstacle;
  int8_t color_type;
  bool blink;
  double remaining_time;
  rosidl_runtime_c__String bind_id;
} deva_map_msgs__msg__TrafficLight;

// Struct for a sequence of deva_map_msgs__msg__TrafficLight.
typedef struct deva_map_msgs__msg__TrafficLight__Sequence
{
  deva_map_msgs__msg__TrafficLight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__TrafficLight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_
