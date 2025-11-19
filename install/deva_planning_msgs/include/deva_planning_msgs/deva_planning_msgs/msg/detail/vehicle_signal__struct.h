// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/VehicleSignal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_SIGNAL__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_SIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_TURN'.
/**
  * ==================
 */
enum
{
  deva_planning_msgs__msg__VehicleSignal__NO_TURN = 0
};

/// Constant 'TURN_LEFT'.
enum
{
  deva_planning_msgs__msg__VehicleSignal__TURN_LEFT = 1
};

/// Constant 'TURN_RIGHT'.
enum
{
  deva_planning_msgs__msg__VehicleSignal__TURN_RIGHT = 2
};

/// Constant 'EMERGENCY_FLASHERS'.
enum
{
  deva_planning_msgs__msg__VehicleSignal__EMERGENCY_FLASHERS = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/VehicleSignal in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__VehicleSignal
{
  std_msgs__msg__Header header;
  bool high_beam;
  bool low_beam;
  bool horn;
  bool emergency_light;
  uint8_t turn_light;
} deva_planning_msgs__msg__VehicleSignal;

// Struct for a sequence of deva_planning_msgs__msg__VehicleSignal.
typedef struct deva_planning_msgs__msg__VehicleSignal__Sequence
{
  deva_planning_msgs__msg__VehicleSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__VehicleSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_SIGNAL__STRUCT_H_
