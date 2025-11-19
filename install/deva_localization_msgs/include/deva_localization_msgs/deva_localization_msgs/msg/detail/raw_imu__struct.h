// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_localization_msgs:msg/RawImu.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__RAW_IMU__STRUCT_H_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__RAW_IMU__STRUCT_H_

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
// Member 'linear_acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/RawImu in the package deva_localization_msgs.
typedef struct deva_localization_msgs__msg__RawImu
{
  deva_common_msgs__msg__Header header;
  float measurement_span;
  geometry_msgs__msg__Point linear_acceleration;
  geometry_msgs__msg__Point angular_velocity;
} deva_localization_msgs__msg__RawImu;

// Struct for a sequence of deva_localization_msgs__msg__RawImu.
typedef struct deva_localization_msgs__msg__RawImu__Sequence
{
  deva_localization_msgs__msg__RawImu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_localization_msgs__msg__RawImu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__RAW_IMU__STRUCT_H_
