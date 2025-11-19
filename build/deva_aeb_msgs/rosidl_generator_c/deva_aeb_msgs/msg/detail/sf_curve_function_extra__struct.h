// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFCurveFunctionExtra.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_CURVE_FUNCTION_EXTRA__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_CURVE_FUNCTION_EXTRA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'estimn'
#include "deva_aeb_msgs/msg/detail/sf_lane_estimn__struct.h"

/// Struct defined in msg/SFCurveFunctionExtra in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFCurveFunctionExtra
{
  float poslgt;
  float poslat;
  deva_aeb_msgs__msg__SFLaneEstimn estimn;
  uint8_t extrapointtype;
  uint8_t lanemkrtype;
  uint8_t confi;
  uint8_t reserved;
} deva_aeb_msgs__msg__SFCurveFunctionExtra;

// Struct for a sequence of deva_aeb_msgs__msg__SFCurveFunctionExtra.
typedef struct deva_aeb_msgs__msg__SFCurveFunctionExtra__Sequence
{
  deva_aeb_msgs__msg__SFCurveFunctionExtra * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFCurveFunctionExtra__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_CURVE_FUNCTION_EXTRA__STRUCT_H_
