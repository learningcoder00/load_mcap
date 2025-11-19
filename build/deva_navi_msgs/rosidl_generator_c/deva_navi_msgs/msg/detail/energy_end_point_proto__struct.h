// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/EnergyEndPointProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_END_POINT_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_END_POINT_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'show'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.h"

/// Struct defined in msg/EnergyEndPointProto in the package deva_navi_msgs.
/**
  * EnergyEndPointProto.msg
 */
typedef struct deva_navi_msgs__msg__EnergyEndPointProto
{
  deva_navi_msgs__msg__Coord3DDoubleProto show;
  int32_t segment_idx;
  int32_t link_index;
} deva_navi_msgs__msg__EnergyEndPointProto;

// Struct for a sequence of deva_navi_msgs__msg__EnergyEndPointProto.
typedef struct deva_navi_msgs__msg__EnergyEndPointProto__Sequence
{
  deva_navi_msgs__msg__EnergyEndPointProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__EnergyEndPointProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_END_POINT_PROTO__STRUCT_H_
