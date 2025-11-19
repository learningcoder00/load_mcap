// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/AvpRefLineTreePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE_TREE_POINT__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE_TREE_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AvpRefLineTreePoint in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__AvpRefLineTreePoint
{
  int32_t idx;
  int32_t directory;
  double center_n;
  double center_point_x;
  double center_point_y;
  double center_point_z;
  double left_n;
  double right_n;
  double left_x;
  double left_y;
  double left_z;
  double right_x;
  double right_y;
  double right_z;
} deva_planning_msgs__msg__AvpRefLineTreePoint;

// Struct for a sequence of deva_planning_msgs__msg__AvpRefLineTreePoint.
typedef struct deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence
{
  deva_planning_msgs__msg__AvpRefLineTreePoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE_TREE_POINT__STRUCT_H_
