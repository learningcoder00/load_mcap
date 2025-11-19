// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/NoparkingZone.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__NOPARKING_ZONE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__NOPARKING_ZONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vertices'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/NoparkingZone in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__NoparkingZone
{
  uint32_t id;
  double confidence;
  geometry_msgs__msg__Point__Sequence vertices;
} deva_perception_msgs__msg__NoparkingZone;

// Struct for a sequence of deva_perception_msgs__msg__NoparkingZone.
typedef struct deva_perception_msgs__msg__NoparkingZone__Sequence
{
  deva_perception_msgs__msg__NoparkingZone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__NoparkingZone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__NOPARKING_ZONE__STRUCT_H_
