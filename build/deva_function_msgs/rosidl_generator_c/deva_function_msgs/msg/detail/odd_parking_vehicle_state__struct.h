// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/OddParkingVehicleState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__ODD_PARKING_VEHICLE_STATE__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__ODD_PARKING_VEHICLE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/OddParkingVehicleState in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__OddParkingVehicleState
{
  double publish_timestamp;
  uint8_t odd_apa_illumination_pass_flag;
  uint8_t odd_apa_gradient_pass_flag;
  uint8_t odd_apa_standby_hu_speed_pass_flag;
} deva_function_msgs__msg__OddParkingVehicleState;

// Struct for a sequence of deva_function_msgs__msg__OddParkingVehicleState.
typedef struct deva_function_msgs__msg__OddParkingVehicleState__Sequence
{
  deva_function_msgs__msg__OddParkingVehicleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__OddParkingVehicleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__ODD_PARKING_VEHICLE_STATE__STRUCT_H_
