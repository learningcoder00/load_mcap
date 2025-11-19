// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/SLBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__SL_BOUNDARY__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__SL_BOUNDARY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SLBoundary in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__SLBoundary
{
  double start_s;
  double end_s;
  double start_l;
  double end_l;
} deva_planning_msgs2__msg__SLBoundary;

// Struct for a sequence of deva_planning_msgs2__msg__SLBoundary.
typedef struct deva_planning_msgs2__msg__SLBoundary__Sequence
{
  deva_planning_msgs2__msg__SLBoundary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__SLBoundary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__SL_BOUNDARY__STRUCT_H_
