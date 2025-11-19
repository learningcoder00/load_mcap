// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/EhpProfileLong.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_LONG__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_LONG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EhpProfileLong in the package deva_gaode_routing_msgs.
/**
  * EHP_PROFILE_LONG.msg
 */
typedef struct deva_gaode_routing_msgs__msg__EhpProfileLong
{
  uint16_t prof_long_offset;
  uint8_t prof_long_msg_type;
  uint8_t prof_long_path_idx;
  uint8_t prof_long_cyc_cnt;
  uint8_t prof_long_update;
  uint8_t prof_long_retr;
  uint8_t prof_long_ctrl_point;
  uint8_t prof_long_prof_type;
  uint32_t prof_long_value;
  int32_t prof_long_relative_offset;
} deva_gaode_routing_msgs__msg__EhpProfileLong;

// Struct for a sequence of deva_gaode_routing_msgs__msg__EhpProfileLong.
typedef struct deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence
{
  deva_gaode_routing_msgs__msg__EhpProfileLong * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_LONG__STRUCT_H_
