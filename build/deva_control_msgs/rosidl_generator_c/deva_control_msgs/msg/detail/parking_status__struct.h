// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_control_msgs:msg/ParkingStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__PARKING_STATUS__STRUCT_H_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__PARKING_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ParkingStatus in the package deva_control_msgs.
/**
  * uint8 UNKNOWN = 0
  * uint8 FREEZING = 1
  * uint8 WAITING = 2
  * uint8 NORMAL = 3
  * uint8 SHIFTGEAR = 4
  * uint8 FINISHED = 5
  * uint8 TAKEOVER = 6
  * uint8 FORCEDFINISH = 7
 */
typedef struct deva_control_msgs__msg__ParkingStatus
{
  uint8_t status;
} deva_control_msgs__msg__ParkingStatus;

// Struct for a sequence of deva_control_msgs__msg__ParkingStatus.
typedef struct deva_control_msgs__msg__ParkingStatus__Sequence
{
  deva_control_msgs__msg__ParkingStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_control_msgs__msg__ParkingStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__PARKING_STATUS__STRUCT_H_
