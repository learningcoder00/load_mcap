// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__AREA__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__AREA__STRUCT_H_

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
  deva_perception_msgs__msg__Area__UNKNOWN = 0
};

/// Constant 'CROSSWALK'.
enum
{
  deva_perception_msgs__msg__Area__CROSSWALK = 1
};

/// Constant 'JUNCTION'.
enum
{
  deva_perception_msgs__msg__Area__JUNCTION = 2
};

/// Constant 'VERTICAL_SLOT'.
enum
{
  deva_perception_msgs__msg__Area__VERTICAL_SLOT = 3
};

/// Constant 'SIDE_SLOT'.
enum
{
  deva_perception_msgs__msg__Area__SIDE_SLOT = 4
};

/// Constant 'SLANTED_SLOT'.
enum
{
  deva_perception_msgs__msg__Area__SLANTED_SLOT = 5
};

/// Constant 'ULTRASONIC_VERTICAL_SLOT'.
enum
{
  deva_perception_msgs__msg__Area__ULTRASONIC_VERTICAL_SLOT = 6
};

/// Constant 'ULTRASONIC_SIDE_SLOT'.
enum
{
  deva_perception_msgs__msg__Area__ULTRASONIC_SIDE_SLOT = 7
};

/// Constant 'LINE_SEGMENT'.
enum
{
  deva_perception_msgs__msg__Area__LINE_SEGMENT = 0
};

/// Constant 'EQUATION_CURVE'.
enum
{
  deva_perception_msgs__msg__Area__EQUATION_CURVE = 1
};

/// Constant 'DISPERSE_CURVE'.
enum
{
  deva_perception_msgs__msg__Area__DISPERSE_CURVE = 2
};

// Include directives for member types
// Member 'dims'
// Member 'corner_points'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'pose'
#include "deva_localization_msgs/msg/detail/pose__struct.h"
// Member 'line_segments'
#include "deva_perception_msgs/msg/detail/edge_line_segment__struct.h"
// Member 'equation_curves'
#include "deva_perception_msgs/msg/detail/edge_equation_curve__struct.h"
// Member 'disperse_curves'
#include "deva_perception_msgs/msg/detail/edge_disperse_curve__struct.h"
// Member 'direction_pixcoord'
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__struct.h"
// Member 'static_obstacles'
#include "deva_perception_msgs/msg/detail/static_obstacle__struct.h"

/// Struct defined in msg/Area in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__Area
{
  int32_t id;
  uint8_t type;
  geometry_msgs__msg__Point dims;
  deva_localization_msgs__msg__Pose pose;
  uint8_t segment_type;
  deva_perception_msgs__msg__EdgeLineSegment__Sequence line_segments;
  deva_perception_msgs__msg__EdgeEquationCurve__Sequence equation_curves;
  deva_perception_msgs__msg__EdgeDisperseCurve__Sequence disperse_curves;
  geometry_msgs__msg__Point__Sequence corner_points;
  deva_common_msgs__msg__Point2d direction_pixcoord;
  float confidence;
  float depth_carcoord;
  bool is_occupied;
  bool is_stable_tracked;
  float occupied_confidence;
  deva_perception_msgs__msg__StaticObstacle__Sequence static_obstacles;
  /// Only used by MVIZ
  deva_common_msgs__msg__Point2d__Sequence pixel_points;
} deva_perception_msgs__msg__Area;

// Struct for a sequence of deva_perception_msgs__msg__Area.
typedef struct deva_perception_msgs__msg__Area__Sequence
{
  deva_perception_msgs__msg__Area * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__Area__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__AREA__STRUCT_H_
