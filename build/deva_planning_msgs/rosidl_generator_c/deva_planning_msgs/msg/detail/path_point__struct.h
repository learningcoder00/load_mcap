// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pos'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'lane_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PathPoint in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__PathPoint
{
  geometry_msgs__msg__Point pos;
  double heading;
  double speed;
  /// direction on the x-y plane
  double theta;
  /// curvature on the x-y planning
  double kappa;
  /// accumulated distance from beginning of the path
  double s;
  /// derivative of kappa w.r.t s.
  double dkappa;
  /// derivative of derivative of kappa w.r.t s.
  double ddkappa;
  /// The lane ID where the path point is on
  rosidl_runtime_c__String lane_id;
  /// derivative of x and y w.r.t parametric parameter t in CosThetareferenceline
  double x_derivative;
  double y_derivative;
  double lane_width;
  bool is_junction;
  double distance2obs;
} deva_planning_msgs__msg__PathPoint;

// Struct for a sequence of deva_planning_msgs__msg__PathPoint.
typedef struct deva_planning_msgs__msg__PathPoint__Sequence
{
  deva_planning_msgs__msg__PathPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__PathPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_
