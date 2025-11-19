// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/NaviSubCameraProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SUB_CAMERA_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SUB_CAMERA_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'speed'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/NaviSubCameraProto in the package deva_navi_msgs.
/**
  * NaviSubCameraProto.msg
 */
typedef struct deva_navi_msgs__msg__NaviSubCameraProto
{
  int32_t sub_type;
  int32_t make_sound;
  int64_t camera_id;
  int32_t busway_time_enable;
  int32_t penalty;
  int32_t priority;
  bool is_new;
  bool is_variable_speed;
  bool is_match;
  bool is_special;
  rosidl_runtime_c__int32__Sequence speed;
} deva_navi_msgs__msg__NaviSubCameraProto;

// Struct for a sequence of deva_navi_msgs__msg__NaviSubCameraProto.
typedef struct deva_navi_msgs__msg__NaviSubCameraProto__Sequence
{
  deva_navi_msgs__msg__NaviSubCameraProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__NaviSubCameraProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SUB_CAMERA_PROTO__STRUCT_H_
