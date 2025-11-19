// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/ParkableID.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PARKABLE_ID__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PARKABLE_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parkable_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ParkableID in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__ParkableID
{
  /// 可泊的车位ID数组
  rosidl_runtime_c__uint32__Sequence parkable_ids;
} deva_planning_msgs2__msg__ParkableID;

// Struct for a sequence of deva_planning_msgs2__msg__ParkableID.
typedef struct deva_planning_msgs2__msg__ParkableID__Sequence
{
  deva_planning_msgs2__msg__ParkableID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__ParkableID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PARKABLE_ID__STRUCT_H_
