// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/E2eAdbArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_ARRAY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_ARRAY__STRUCT_H_

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
// Member 'e2e_adb_veh_obj'
#include "deva_perception_msgs/msg/detail/e2e_adb__struct.h"
// Member 'e2e_adb_traffic_sign'
#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__struct.h"

/// Struct defined in msg/E2eAdbArray in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__E2eAdbArray
{
  std_msgs__msg__Header header;
  double pre_crash_front_data_closing_velocity;
  uint8_t pre_crash_front_data_object_class;
  double pre_crash_front_data_overlap;
  float pre_crash_front_data_time_to_impact;
  bool lit_area;
  uint8_t camera_sts_for_ahbc;
  bool too_many_cars;
  deva_perception_msgs__msg__E2eAdb__Sequence e2e_adb_veh_obj;
  deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence e2e_adb_traffic_sign;
} deva_perception_msgs__msg__E2eAdbArray;

// Struct for a sequence of deva_perception_msgs__msg__E2eAdbArray.
typedef struct deva_perception_msgs__msg__E2eAdbArray__Sequence
{
  deva_perception_msgs__msg__E2eAdbArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__E2eAdbArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_ARRAY__STRUCT_H_
