// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/LaneSecInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__LANE_SEC_INFO__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__LANE_SEC_INFO__STRUCT_H_

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
#include "deva_aeb_msgs/msg/detail/sf_sec_lane_estimn__struct.h"
// Member 'info'
#include "deva_aeb_msgs/msg/detail/sf_lane_info__struct.h"
// Member 'ppty'
#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__struct.h"
// Member 'nearramppoint'
#include "deva_aeb_msgs/msg/detail/sf_sec_lane_near_ramp_point__struct.h"

/// Struct defined in msg/LaneSecInfo in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__LaneSecInfo
{
  deva_aeb_msgs__msg__SFSecLaneEstimn estimn;
  deva_aeb_msgs__msg__SFLaneInfo info;
  deva_aeb_msgs__msg__SFFrontLinePpty ppty;
  deva_aeb_msgs__msg__SFSecLaneNearRampPoint nearramppoint;
} deva_aeb_msgs__msg__LaneSecInfo;

// Struct for a sequence of deva_aeb_msgs__msg__LaneSecInfo.
typedef struct deva_aeb_msgs__msg__LaneSecInfo__Sequence
{
  deva_aeb_msgs__msg__LaneSecInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__LaneSecInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__LANE_SEC_INFO__STRUCT_H_
