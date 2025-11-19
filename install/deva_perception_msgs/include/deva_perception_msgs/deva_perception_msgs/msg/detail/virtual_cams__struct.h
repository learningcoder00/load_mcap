// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/VirtualCams.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAMS__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAMS__STRUCT_H_

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
// Member 'vitual_cams'
#include "deva_perception_msgs/msg/detail/virtual_cam_info__struct.h"

/// Struct defined in msg/VirtualCams in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__VirtualCams
{
  deva_common_msgs__msg__Header header;
  deva_perception_msgs__msg__VirtualCamInfo__Sequence vitual_cams;
} deva_perception_msgs__msg__VirtualCams;

// Struct for a sequence of deva_perception_msgs__msg__VirtualCams.
typedef struct deva_perception_msgs__msg__VirtualCams__Sequence
{
  deva_perception_msgs__msg__VirtualCams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__VirtualCams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAMS__STRUCT_H_
