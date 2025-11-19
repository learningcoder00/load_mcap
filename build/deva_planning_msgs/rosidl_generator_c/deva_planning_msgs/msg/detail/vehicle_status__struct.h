// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STARTING'.
enum
{
  deva_planning_msgs__msg__VehicleStatus__STARTING = 0
};

/// Constant 'READY'.
enum
{
  deva_planning_msgs__msg__VehicleStatus__READY = 1
};

/// Constant 'STOPPING'.
enum
{
  deva_planning_msgs__msg__VehicleStatus__STOPPING = 2
};

/// Constant 'FATAL'.
enum
{
  deva_planning_msgs__msg__VehicleStatus__FATAL = 3
};

/// Constant 'PILOT'.
enum
{
  deva_planning_msgs__msg__VehicleStatus__PILOT = 4
};

/// Constant 'AVP'.
enum
{
  deva_planning_msgs__msg__VehicleStatus__AVP = 5
};

/// Constant 'APA'.
enum
{
  deva_planning_msgs__msg__VehicleStatus__APA = 6
};

/// Constant 'EMERGENCY_STOP'.
enum
{
  deva_planning_msgs__msg__VehicleStatus__EMERGENCY_STOP = 7
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/VehicleStatus in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__VehicleStatus
{
  std_msgs__msg__Header header;
  uint8_t status;
} deva_planning_msgs__msg__VehicleStatus;

// Struct for a sequence of deva_planning_msgs__msg__VehicleStatus.
typedef struct deva_planning_msgs__msg__VehicleStatus__Sequence
{
  deva_planning_msgs__msg__VehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__VehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
