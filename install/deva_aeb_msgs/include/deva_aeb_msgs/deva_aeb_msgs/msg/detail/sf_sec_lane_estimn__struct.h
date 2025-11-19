// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFSecLaneEstimn.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_ESTIMN__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_ESTIMN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SFSecLaneEstimn in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFSecLaneEstimn
{
  float constcoeff;
  float firstordercoeff;
  float secondordercoeff;
  float thirdordercoeff;
  float width;
  float startpointposx;
  float startpointposy;
  float endpointposx;
  float endpointposy;
  float extendendpointposx;
  float extendendpointposy;
  uint8_t parseconfi;
  uint8_t rmse;
  uint8_t obstacleflag;
  uint8_t trackstatus;
} deva_aeb_msgs__msg__SFSecLaneEstimn;

// Struct for a sequence of deva_aeb_msgs__msg__SFSecLaneEstimn.
typedef struct deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence
{
  deva_aeb_msgs__msg__SFSecLaneEstimn * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_ESTIMN__STRUCT_H_
