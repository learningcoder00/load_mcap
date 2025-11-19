// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/Ref2SLBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__REF2_SL_BOUNDARY__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__REF2_SL_BOUNDARY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sl_boundary'
#include "deva_planning_msgs2/msg/detail/sl_boundary__struct.h"

/// Struct defined in msg/Ref2SLBoundary in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__Ref2SLBoundary
{
  int32_t ref_id;
  deva_planning_msgs2__msg__SLBoundary sl_boundary;
} deva_planning_msgs2__msg__Ref2SLBoundary;

// Struct for a sequence of deva_planning_msgs2__msg__Ref2SLBoundary.
typedef struct deva_planning_msgs2__msg__Ref2SLBoundary__Sequence
{
  deva_planning_msgs2__msg__Ref2SLBoundary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__Ref2SLBoundary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__REF2_SL_BOUNDARY__STRUCT_H_
