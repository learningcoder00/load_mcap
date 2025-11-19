// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_localization_msgs:msg/LocalizationEstimate.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__STRUCT_H_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__STRUCT_H_

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
// Member 'pose'
// Member 'global_pose'
#include "deva_localization_msgs/msg/detail/pose__struct.h"
// Member 'state_message'
// Member 'global_pose_state_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LocalizationEstimate in the package deva_localization_msgs.
typedef struct deva_localization_msgs__msg__LocalizationEstimate
{
  deva_common_msgs__msg__Header header;
  deva_localization_msgs__msg__Pose pose;
  deva_localization_msgs__msg__Pose global_pose;
  /// The time of pose measurement, seconds since 1970-1-1 (UNIX time).
  /// In seconds.
  double measurement_time;
  /// GOOD: Safe to use. The INS has fully converged;
  rosidl_runtime_c__String state_message;
  rosidl_runtime_c__String global_pose_state_message;
} deva_localization_msgs__msg__LocalizationEstimate;

// Struct for a sequence of deva_localization_msgs__msg__LocalizationEstimate.
typedef struct deva_localization_msgs__msg__LocalizationEstimate__Sequence
{
  deva_localization_msgs__msg__LocalizationEstimate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_localization_msgs__msg__LocalizationEstimate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__STRUCT_H_
