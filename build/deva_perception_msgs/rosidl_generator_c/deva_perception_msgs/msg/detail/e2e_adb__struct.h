// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/E2eAdb.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB__STRUCT_H_

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

/// Struct defined in msg/E2eAdb in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__E2eAdb
{
  std_msgs__msg__Header header;
  double eh_obj_for_adb_abs_dist;
  uint8_t veh_obj_for_adb_classn;
  double veh_obj_for_adb_hozl_ag_le;
  double veh_obj_for_adb_hozl_ag_ri;
  uint8_t veh_obj_for_adb_obj_dir;
  double veh_obj_for_adb_obj_hozl_ag_spd_le;
  double veh_obj_for_adb_obj_hozl_ag_spd_ri;
  uint8_t veh_obj_for_adb_trk_info;
  double veh_obj_for_adb_vert_ag;
} deva_perception_msgs__msg__E2eAdb;

// Struct for a sequence of deva_perception_msgs__msg__E2eAdb.
typedef struct deva_perception_msgs__msg__E2eAdb__Sequence
{
  deva_perception_msgs__msg__E2eAdb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__E2eAdb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB__STRUCT_H_
