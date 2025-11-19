// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_control_msgs:msg/VehicleReportBelt.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_BELT__STRUCT_H_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_BELT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleReportBelt in the package deva_control_msgs.
typedef struct deva_control_msgs__msg__VehicleReportBelt
{
  /// 驾驶位安全带是否系上
  bool drv_belt;
  /// 副驾驶位安全带是否系上
  bool pass_belt;
  /// 后左位安全带是否系上
  bool rl_belt;
  /// 后中位安全带是否系上
  bool rm_belt;
  /// 后右位安全带是否系上
  bool rr_belt;
} deva_control_msgs__msg__VehicleReportBelt;

// Struct for a sequence of deva_control_msgs__msg__VehicleReportBelt.
typedef struct deva_control_msgs__msg__VehicleReportBelt__Sequence
{
  deva_control_msgs__msg__VehicleReportBelt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_control_msgs__msg__VehicleReportBelt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_BELT__STRUCT_H_
