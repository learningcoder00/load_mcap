// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/TrafficChannelArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_CHANNEL_ARRAY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_CHANNEL_ARRAY__STRUCT_H_

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
#include "std_msgs/msg/detail/header__struct.h"
// Member 'traffic_channel_array'
#include "deva_perception_msgs/msg/detail/traffic_channel__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'state_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TrafficChannelArray in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__TrafficChannelArray
{
  std_msgs__msg__Header header;
  deva_perception_msgs__msg__TrafficChannel__Sequence traffic_channel_array;
  /// ego transform information
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Quaternion orientation;
  /// GOOD: Safe to use. The INS has fully converged;
  rosidl_runtime_c__String state_message;
} deva_perception_msgs__msg__TrafficChannelArray;

// Struct for a sequence of deva_perception_msgs__msg__TrafficChannelArray.
typedef struct deva_perception_msgs__msg__TrafficChannelArray__Sequence
{
  deva_perception_msgs__msg__TrafficChannelArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__TrafficChannelArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_CHANNEL_ARRAY__STRUCT_H_
