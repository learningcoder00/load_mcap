// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_control_msgs:msg/VehicleLimitValue.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_LIMIT_VALUE__STRUCT_H_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_LIMIT_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'value_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VehicleLimitValue in the package deva_control_msgs.
typedef struct deva_control_msgs__msg__VehicleLimitValue
{
  /// 车辆限制的类型(如LONGIT_DECC_MIN_VALUE)
  rosidl_runtime_c__String value_type;
  /// 车辆限制的值
  double value;
} deva_control_msgs__msg__VehicleLimitValue;

// Struct for a sequence of deva_control_msgs__msg__VehicleLimitValue.
typedef struct deva_control_msgs__msg__VehicleLimitValue__Sequence
{
  deva_control_msgs__msg__VehicleLimitValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_control_msgs__msg__VehicleLimitValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_LIMIT_VALUE__STRUCT_H_
