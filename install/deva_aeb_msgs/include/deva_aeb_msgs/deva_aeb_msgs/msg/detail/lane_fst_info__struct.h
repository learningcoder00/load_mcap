// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/LaneFstInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__LANE_FST_INFO__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__LANE_FST_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'estimn'
#include "deva_aeb_msgs/msg/detail/sf_lane_two_seg_estimn__struct.h"
// Member 'info'
#include "deva_aeb_msgs/msg/detail/sf_lane_info__struct.h"
// Member 'ppty'
#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__struct.h"
// Member 'extracurveinfo'
#include "deva_aeb_msgs/msg/detail/sf_curve_function_extra__struct.h"

/// Struct defined in msg/LaneFstInfo in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__LaneFstInfo
{
  deva_aeb_msgs__msg__SFLaneTwoSegEstimn estimn;
  deva_aeb_msgs__msg__SFLaneInfo info;
  deva_aeb_msgs__msg__SFFrontLinePpty ppty;
  deva_aeb_msgs__msg__SFCurveFunctionExtra extracurveinfo;
} deva_aeb_msgs__msg__LaneFstInfo;

// Struct for a sequence of deva_aeb_msgs__msg__LaneFstInfo.
typedef struct deva_aeb_msgs__msg__LaneFstInfo__Sequence
{
  deva_aeb_msgs__msg__LaneFstInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__LaneFstInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__LANE_FST_INFO__STRUCT_H_
