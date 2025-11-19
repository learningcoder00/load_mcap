// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/Images4vMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGES4V_MSG__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGES4V_MSG__STRUCT_H_

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
// Member 'right_cam_image'
// Member 'front_cam_image'
// Member 'back_cam_image'
// Member 'left_cam_image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/Images4vMsg in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__Images4vMsg
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__Image right_cam_image;
  sensor_msgs__msg__Image front_cam_image;
  sensor_msgs__msg__Image back_cam_image;
  sensor_msgs__msg__Image left_cam_image;
  int32_t pubtime;
} deva_perception_msgs__msg__Images4vMsg;

// Struct for a sequence of deva_perception_msgs__msg__Images4vMsg.
typedef struct deva_perception_msgs__msg__Images4vMsg__Sequence
{
  deva_perception_msgs__msg__Images4vMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__Images4vMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGES4V_MSG__STRUCT_H_
