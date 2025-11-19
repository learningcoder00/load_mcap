// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/IPMImage.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__IPM_IMAGE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__IPM_IMAGE__STRUCT_H_

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
// Member 'ipm_image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/IPMImage in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__IPMImage
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__Image ipm_image;
  int32_t pubtime;
} deva_perception_msgs__msg__IPMImage;

// Struct for a sequence of deva_perception_msgs__msg__IPMImage.
typedef struct deva_perception_msgs__msg__IPMImage__Sequence
{
  deva_perception_msgs__msg__IPMImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__IPMImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__IPM_IMAGE__STRUCT_H_
