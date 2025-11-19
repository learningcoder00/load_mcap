// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/StitchData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__STITCH_DATA__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__STITCH_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/StitchData in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__StitchData
{
  uint8_t stitch_mode;
  uint8_t planner_mode;
  uint8_t actual_planner_mode;
  double current_x;
  double current_y;
  double stitch_s;
  double stitch_l;
  double stitch_x;
  double stitch_y;
  double stitch_z;
  double stitch_heading;
  double stitch_alpha;
  double stitch_v;
  double stitch_steer;
} deva_planning_msgs2__msg__StitchData;

// Struct for a sequence of deva_planning_msgs2__msg__StitchData.
typedef struct deva_planning_msgs2__msg__StitchData__Sequence
{
  deva_planning_msgs2__msg__StitchData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__StitchData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__STITCH_DATA__STRUCT_H_
