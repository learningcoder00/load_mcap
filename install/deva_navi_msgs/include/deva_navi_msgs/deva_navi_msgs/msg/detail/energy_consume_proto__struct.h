// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/EnergyConsumeProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_CONSUME_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_CONSUME_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'energy_end_point'
#include "deva_navi_msgs/msg/detail/energy_end_point_proto__struct.h"
// Member 'vehiclechargeleft'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/EnergyConsumeProto in the package deva_navi_msgs.
/**
  * EnergyConsumeProto.msg
 */
typedef struct deva_navi_msgs__msg__EnergyConsumeProto
{
  bool energy_end_flag;
  deva_navi_msgs__msg__EnergyEndPointProto energy_end_point;
  rosidl_runtime_c__int32__Sequence vehiclechargeleft;
} deva_navi_msgs__msg__EnergyConsumeProto;

// Struct for a sequence of deva_navi_msgs__msg__EnergyConsumeProto.
typedef struct deva_navi_msgs__msg__EnergyConsumeProto__Sequence
{
  deva_navi_msgs__msg__EnergyConsumeProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__EnergyConsumeProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_CONSUME_PROTO__STRUCT_H_
