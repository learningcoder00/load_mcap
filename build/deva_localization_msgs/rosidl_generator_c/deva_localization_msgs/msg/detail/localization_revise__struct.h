// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_localization_msgs:msg/LocalizationRevise.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_REVISE__STRUCT_H_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_REVISE__STRUCT_H_

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
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/LocalizationRevise in the package deva_localization_msgs.
typedef struct deva_localization_msgs__msg__LocalizationRevise
{
  deva_common_msgs__msg__Header header;
  /// 位置
  geometry_msgs__msg__Point position;
  /// 旋转
  geometry_msgs__msg__Quaternion orientation;
  int32_t state_message;
} deva_localization_msgs__msg__LocalizationRevise;

// Struct for a sequence of deva_localization_msgs__msg__LocalizationRevise.
typedef struct deva_localization_msgs__msg__LocalizationRevise__Sequence
{
  deva_localization_msgs__msg__LocalizationRevise * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_localization_msgs__msg__LocalizationRevise__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_REVISE__STRUCT_H_
