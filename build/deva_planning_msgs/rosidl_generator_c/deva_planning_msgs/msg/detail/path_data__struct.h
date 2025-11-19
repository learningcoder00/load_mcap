// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/PathData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_DATA__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PathData in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__PathData
{
  double x;
  double y;
  double z;
  double s;
  double theta;
  double kappa;
  double dkappa;
  double ddkappa;
  bool is_junction;
  double speedlimit;
} deva_planning_msgs__msg__PathData;

// Struct for a sequence of deva_planning_msgs__msg__PathData.
typedef struct deva_planning_msgs__msg__PathData__Sequence
{
  deva_planning_msgs__msg__PathData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__PathData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_DATA__STRUCT_H_
