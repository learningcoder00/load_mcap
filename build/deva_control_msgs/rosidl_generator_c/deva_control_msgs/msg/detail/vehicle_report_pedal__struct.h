// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_control_msgs:msg/VehicleReportPedal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_PEDAL__STRUCT_H_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_PEDAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleReportPedal in the package deva_control_msgs.
typedef struct deva_control_msgs__msg__VehicleReportPedal
{
  /// 加速踏板开度 %
  float acc_pedal_pos;
  /// 制动踏板开度 %
  float brk_pedal_pos;
} deva_control_msgs__msg__VehicleReportPedal;

// Struct for a sequence of deva_control_msgs__msg__VehicleReportPedal.
typedef struct deva_control_msgs__msg__VehicleReportPedal__Sequence
{
  deva_control_msgs__msg__VehicleReportPedal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_control_msgs__msg__VehicleReportPedal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_PEDAL__STRUCT_H_
