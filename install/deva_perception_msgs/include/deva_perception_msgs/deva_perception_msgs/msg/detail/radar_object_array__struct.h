// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RadarObjectArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_ARRAY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_ARRAY__STRUCT_H_

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
// Member 'objects'
#include "deva_perception_msgs/msg/detail/radar_object__struct.h"

/// Struct defined in msg/RadarObjectArray in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__RadarObjectArray
{
  std_msgs__msg__Header header;
  deva_perception_msgs__msg__RadarObject__Sequence objects;
} deva_perception_msgs__msg__RadarObjectArray;

// Struct for a sequence of deva_perception_msgs__msg__RadarObjectArray.
typedef struct deva_perception_msgs__msg__RadarObjectArray__Sequence
{
  deva_perception_msgs__msg__RadarObjectArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RadarObjectArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_ARRAY__STRUCT_H_
