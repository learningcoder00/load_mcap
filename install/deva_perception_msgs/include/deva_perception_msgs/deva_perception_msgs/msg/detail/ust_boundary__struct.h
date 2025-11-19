// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/USTBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__UST_BOUNDARY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__UST_BOUNDARY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  deva_perception_msgs__msg__USTBoundary__UNKNOWN = 0
};

/// Constant 'STATIC_BOUNDARY'.
enum
{
  deva_perception_msgs__msg__USTBoundary__STATIC_BOUNDARY = 1
};

/// Constant 'CURB'.
enum
{
  deva_perception_msgs__msg__USTBoundary__CURB = 2
};

/// Constant 'GUARDRAIL'.
enum
{
  deva_perception_msgs__msg__USTBoundary__GUARDRAIL = 3
};

/// Constant 'WALLEDGE'.
enum
{
  deva_perception_msgs__msg__USTBoundary__WALLEDGE = 4
};

/// Constant 'CONE_LINE'.
enum
{
  deva_perception_msgs__msg__USTBoundary__CONE_LINE = 5
};

/// Constant 'STOP_LINE'.
enum
{
  deva_perception_msgs__msg__USTBoundary__STOP_LINE = 6
};

/// Constant 'LINE_SEGMENT'.
enum
{
  deva_perception_msgs__msg__USTBoundary__LINE_SEGMENT = 0
};

/// Constant 'EQUATION_CURVE'.
enum
{
  deva_perception_msgs__msg__USTBoundary__EQUATION_CURVE = 1
};

/// Constant 'DISPERSE_CURVE'.
enum
{
  deva_perception_msgs__msg__USTBoundary__DISPERSE_CURVE = 2
};

// Include directives for member types
// Member 'line_segments'
#include "deva_perception_msgs/msg/detail/edge_line_segment__struct.h"
// Member 'equation_curves'
#include "deva_perception_msgs/msg/detail/edge_equation_curve__struct.h"
// Member 'disperse_curves'
#include "deva_perception_msgs/msg/detail/edge_disperse_curve__struct.h"
// Member 'corner_points'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'waylink'
#include "deva_perception_msgs/msg/detail/way_link__struct.h"

/// Struct defined in msg/USTBoundary in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__USTBoundary
{
  int32_t id;
  uint8_t type;
  uint8_t segment_type;
  deva_perception_msgs__msg__EdgeLineSegment__Sequence line_segments;
  deva_perception_msgs__msg__EdgeEquationCurve__Sequence equation_curves;
  deva_perception_msgs__msg__EdgeDisperseCurve__Sequence disperse_curves;
  geometry_msgs__msg__Point__Sequence corner_points;
  deva_perception_msgs__msg__WayLink waylink;
  bool is_stable_tracked;
} deva_perception_msgs__msg__USTBoundary;

// Struct for a sequence of deva_perception_msgs__msg__USTBoundary.
typedef struct deva_perception_msgs__msg__USTBoundary__Sequence
{
  deva_perception_msgs__msg__USTBoundary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__USTBoundary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__UST_BOUNDARY__STRUCT_H_
