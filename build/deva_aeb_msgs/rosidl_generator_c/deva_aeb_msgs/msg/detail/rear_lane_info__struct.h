// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/RearLaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__REAR_LANE_INFO__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__REAR_LANE_INFO__STRUCT_H_

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
#include "deva_aeb_msgs/msg/detail/sf_lane_estimn__struct.h"
// Member 'info'
#include "deva_aeb_msgs/msg/detail/sf_lane_mkr_info__struct.h"
// Member 'ppty'
#include "deva_aeb_msgs/msg/detail/sf_rear_line_ppty__struct.h"

/// Struct defined in msg/RearLaneInfo in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__RearLaneInfo
{
  deva_aeb_msgs__msg__SFLaneEstimn estimn;
  deva_aeb_msgs__msg__SFLaneMkrInfo info;
  deva_aeb_msgs__msg__SFRearLinePpty ppty;
} deva_aeb_msgs__msg__RearLaneInfo;

// Struct for a sequence of deva_aeb_msgs__msg__RearLaneInfo.
typedef struct deva_aeb_msgs__msg__RearLaneInfo__Sequence
{
  deva_aeb_msgs__msg__RearLaneInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__RearLaneInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__REAR_LANE_INFO__STRUCT_H_
