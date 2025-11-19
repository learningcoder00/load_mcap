// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/WheelInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_INFO__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WheelInfo in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__WheelInfo
{
  float speed;
  uint8_t counter;
  uint8_t direction;
  bool is_slip;
  bool is_brake;
  uint8_t is_valid;
} deva_function_msgs__msg__WheelInfo;

// Struct for a sequence of deva_function_msgs__msg__WheelInfo.
typedef struct deva_function_msgs__msg__WheelInfo__Sequence
{
  deva_function_msgs__msg__WheelInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__WheelInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_INFO__STRUCT_H_
