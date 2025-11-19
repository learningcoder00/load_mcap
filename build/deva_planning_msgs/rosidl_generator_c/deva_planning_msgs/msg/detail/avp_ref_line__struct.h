// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/AvpRefLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AvpRefLine in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__AvpRefLine
{
  double s;
  double x;
  double y;
  double z;
  double heading;
  double left_boundary_x;
  double left_boundary_y;
  double left_boundary_z;
  double right_boundary_x;
  double right_boundary_y;
  double right_boundary_z;
  double left_boundary_n;
  double right_boundary_n;
  double is_junction;
} deva_planning_msgs__msg__AvpRefLine;

// Struct for a sequence of deva_planning_msgs__msg__AvpRefLine.
typedef struct deva_planning_msgs__msg__AvpRefLine__Sequence
{
  deva_planning_msgs__msg__AvpRefLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__AvpRefLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE__STRUCT_H_
