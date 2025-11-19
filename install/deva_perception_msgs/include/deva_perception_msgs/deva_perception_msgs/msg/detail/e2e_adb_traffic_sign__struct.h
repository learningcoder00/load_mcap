// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/E2eAdbTrafficSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_TRAFFIC_SIGN__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_TRAFFIC_SIGN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/E2eAdbTrafficSign in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__E2eAdbTrafficSign
{
  std_msgs__msg__Header header;
  uint8_t traffic_sign_for_adb_adb_trk_info;
  float traffic_sign_for_adb_adb_abs_dist;
  float traffic_sign_for_adb_adb_vert_ag_bot;
  float traffic_sign_for_adb_adb_vert_ag_top;
  float traffic_sign_for_adb_adb_hozl_ag_le;
  float traffic_sign_for_adb_adb_hozl_ag_ri;
  float traffic_sign_for_adb_adb_detd_qly;
} deva_perception_msgs__msg__E2eAdbTrafficSign;

// Struct for a sequence of deva_perception_msgs__msg__E2eAdbTrafficSign.
typedef struct deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence
{
  deva_perception_msgs__msg__E2eAdbTrafficSign * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_TRAFFIC_SIGN__STRUCT_H_
