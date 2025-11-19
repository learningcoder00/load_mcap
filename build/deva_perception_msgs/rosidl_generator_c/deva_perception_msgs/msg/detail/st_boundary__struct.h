// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/STBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ST_BOUNDARY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ST_BOUNDARY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POSITION_BOLLARD_LEFT'.
enum
{
  deva_perception_msgs__msg__STBoundary__POSITION_BOLLARD_LEFT = -5
};

/// Constant 'POSITION_FOURTH_LEFT'.
enum
{
  deva_perception_msgs__msg__STBoundary__POSITION_FOURTH_LEFT = -4
};

/// Constant 'POSITION_THIRD_LEFT'.
enum
{
  deva_perception_msgs__msg__STBoundary__POSITION_THIRD_LEFT = -3
};

/// Constant 'POSITION_ADJACENT_LEFT'.
enum
{
  deva_perception_msgs__msg__STBoundary__POSITION_ADJACENT_LEFT = -2
};

/// Constant 'POSITION_EGO_LEFT'.
enum
{
  deva_perception_msgs__msg__STBoundary__POSITION_EGO_LEFT = -1
};

/// Constant 'POSITION_EGO_RIGHT'.
enum
{
  deva_perception_msgs__msg__STBoundary__POSITION_EGO_RIGHT = 1
};

/// Constant 'POSITION_ADJACENT_RIGHT'.
enum
{
  deva_perception_msgs__msg__STBoundary__POSITION_ADJACENT_RIGHT = 2
};

/// Constant 'POSITION_THIRD_RIGHT'.
enum
{
  deva_perception_msgs__msg__STBoundary__POSITION_THIRD_RIGHT = 3
};

/// Constant 'POSITION_FOURTH_RIGHT'.
enum
{
  deva_perception_msgs__msg__STBoundary__POSITION_FOURTH_RIGHT = 4
};

/// Constant 'POSITION_BOLLARD_RIGHT'.
enum
{
  deva_perception_msgs__msg__STBoundary__POSITION_BOLLARD_RIGHT = 5
};

/// Constant 'POSITION_OTHER'.
enum
{
  deva_perception_msgs__msg__STBoundary__POSITION_OTHER = 6
};

/// Constant 'POSITION_UNKNOWN'.
enum
{
  deva_perception_msgs__msg__STBoundary__POSITION_UNKNOWN = 7
};

// Include directives for member types
// Member 'equation_curves'
// Member 'extend_equation_curve'
#include "deva_common_msgs/msg/detail/equation_curve__struct.h"
// Member 'disperse_curve'
// Member 'extend_disperse_curve'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'lane_type'
#include "deva_perception_msgs/msg/detail/lane_type__struct.h"

/// Struct defined in msg/STBoundary in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__STBoundary
{
  bool has_equation;
  deva_common_msgs__msg__EquationCurve__Sequence equation_curves;
  bool has_disperse;
  geometry_msgs__msg__Point__Sequence disperse_curve;
  bool has_extend_equation;
  deva_common_msgs__msg__EquationCurve extend_equation_curve;
  bool has_extend_disperse;
  geometry_msgs__msg__Point__Sequence extend_disperse_curve;
  deva_perception_msgs__msg__LaneType__Sequence lane_type;
  int8_t position;
  int32_t id;
  int32_t left_id;
  int32_t right_id;
  float confidence;
  int32_t reserve;
  int32_t global_track_id;
} deva_perception_msgs__msg__STBoundary;

// Struct for a sequence of deva_perception_msgs__msg__STBoundary.
typedef struct deva_perception_msgs__msg__STBoundary__Sequence
{
  deva_perception_msgs__msg__STBoundary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__STBoundary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ST_BOUNDARY__STRUCT_H_
