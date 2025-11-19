// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/EhpProfileShort.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_SHORT__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_SHORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EhpProfileShort in the package deva_gaode_routing_msgs.
/**
  * EHP_PROFILE_SHORT.msg
 */
typedef struct deva_gaode_routing_msgs__msg__EhpProfileShort
{
  uint16_t prof_short_offset;
  uint8_t prof_short_msg_type;
  uint8_t prof_short_path_idx;
  uint8_t prof_short_cyc_cnt;
  uint8_t prof_short_update;
  uint8_t prof_short_retr;
  uint8_t prof_short_ctrl_point;
  uint8_t prof_short_prof_type;
  uint16_t prof_short_dist1;
  uint8_t prof_short_accur_class;
  uint16_t prof_short_value0;
  uint16_t prof_short_value1;
  int32_t prof_short_relative_offset;
  uint8_t prof_short_curve_road;
} deva_gaode_routing_msgs__msg__EhpProfileShort;

// Struct for a sequence of deva_gaode_routing_msgs__msg__EhpProfileShort.
typedef struct deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence
{
  deva_gaode_routing_msgs__msg__EhpProfileShort * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_SHORT__STRUCT_H_
