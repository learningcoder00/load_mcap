// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/EhpPosition.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_POSITION__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EhpPosition in the package deva_gaode_routing_msgs.
/**
  * EHP_POSITION.msg
 */
typedef struct deva_gaode_routing_msgs__msg__EhpPosition
{
  uint16_t posn_offset;
  uint8_t posn_msg_type;
  uint8_t posn_path_idx;
  uint8_t posn_cyc_cnt;
  uint16_t posn_age;
  float posn_pos_probb;
  uint8_t posn_idx;
  float posn_spd;
  uint8_t posn_cur_lane;
  uint8_t posn_pos_confdc;
  float posn_rehead;
} deva_gaode_routing_msgs__msg__EhpPosition;

// Struct for a sequence of deva_gaode_routing_msgs__msg__EhpPosition.
typedef struct deva_gaode_routing_msgs__msg__EhpPosition__Sequence
{
  deva_gaode_routing_msgs__msg__EhpPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__EhpPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_POSITION__STRUCT_H_
