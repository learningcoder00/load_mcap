// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RadarVehicleInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RadarVehicleInfo in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__RadarVehicleInfo
{
  uint8_t id;
  double position_x;
  double position_y;
  double rel_vel_x;
  double rel_vel_y;
  double abs_vel_x;
  double abs_vel_y;
  double rel_acc_x;
  double rel_acc_y;
  double abs_acc_x;
  double abs_acc_y;
  double speed;
  double yaw_rate;
  double radar_time;
  double vehicle_time;
} deva_perception_msgs__msg__RadarVehicleInfo;

// Struct for a sequence of deva_perception_msgs__msg__RadarVehicleInfo.
typedef struct deva_perception_msgs__msg__RadarVehicleInfo__Sequence
{
  deva_perception_msgs__msg__RadarVehicleInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RadarVehicleInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO__STRUCT_H_
