// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_localization_msgs:msg/CorrectedImu.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__CORRECTED_IMU__STRUCT_H_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__CORRECTED_IMU__STRUCT_H_

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
// Member 'imu'
#include "deva_localization_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/CorrectedImu in the package deva_localization_msgs.
typedef struct deva_localization_msgs__msg__CorrectedImu
{
  deva_common_msgs__msg__Header header;
  deva_localization_msgs__msg__Pose imu;
} deva_localization_msgs__msg__CorrectedImu;

// Struct for a sequence of deva_localization_msgs__msg__CorrectedImu.
typedef struct deva_localization_msgs__msg__CorrectedImu__Sequence
{
  deva_localization_msgs__msg__CorrectedImu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_localization_msgs__msg__CorrectedImu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__CORRECTED_IMU__STRUCT_H_
