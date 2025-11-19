// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_common_msgs:msg/EquationCurve.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__EQUATION_CURVE__STRUCT_H_
#define DEVA_COMMON_MSGS__MSG__DETAIL__EQUATION_CURVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EquationCurve in the package deva_common_msgs.
typedef struct deva_common_msgs__msg__EquationCurve
{
  uint8_t type;
  double a3;
  double a2;
  double a1;
  double a0;
  double b3;
  double b2;
  double b1;
  double b0;
  double c3;
  double c2;
  double c1;
  double c0;
  double s_start;
  double s_end;
} deva_common_msgs__msg__EquationCurve;

// Struct for a sequence of deva_common_msgs__msg__EquationCurve.
typedef struct deva_common_msgs__msg__EquationCurve__Sequence
{
  deva_common_msgs__msg__EquationCurve * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_common_msgs__msg__EquationCurve__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__EQUATION_CURVE__STRUCT_H_
