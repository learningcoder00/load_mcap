// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/WheelSpeed.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_SPEED__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'front_left'
// Member 'front_right'
// Member 'rear_left'
// Member 'rear_right'
#include "deva_function_msgs/msg/detail/wheel_info__struct.h"

/// Struct defined in msg/WheelSpeed in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__WheelSpeed
{
  deva_function_msgs__msg__WheelInfo front_left;
  deva_function_msgs__msg__WheelInfo front_right;
  deva_function_msgs__msg__WheelInfo rear_left;
  deva_function_msgs__msg__WheelInfo rear_right;
} deva_function_msgs__msg__WheelSpeed;

// Struct for a sequence of deva_function_msgs__msg__WheelSpeed.
typedef struct deva_function_msgs__msg__WheelSpeed__Sequence
{
  deva_function_msgs__msg__WheelSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__WheelSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_SPEED__STRUCT_H_
