// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/MpcPathData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__MPC_PATH_DATA__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__MPC_PATH_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MpcPathData in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__MpcPathData
{
  double x;
  double y;
  double z;
  double heading;
  double kappa;
  double s;
  double l;
  double alpha;
  double v;
  double delta;
} deva_planning_msgs__msg__MpcPathData;

// Struct for a sequence of deva_planning_msgs__msg__MpcPathData.
typedef struct deva_planning_msgs__msg__MpcPathData__Sequence
{
  deva_planning_msgs__msg__MpcPathData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__MpcPathData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__MPC_PATH_DATA__STRUCT_H_
