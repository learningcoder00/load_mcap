// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/EhpStub.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_STUB__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_STUB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EhpStub in the package deva_gaode_routing_msgs.
/**
  * EHP_STUB.msg
 */
typedef struct deva_gaode_routing_msgs__msg__EhpStub
{
  uint16_t stub_offset;
  uint8_t stub_msg_type;
  uint8_t stub_path_idx;
  uint8_t stub_cyc_cnt;
  uint8_t stub_update;
  uint8_t stub_retr;
  uint8_t stub_stub_path_idx;
  uint8_t stub_func_road_class;
  float stub_rel_probb;
  uint8_t stub_form_of_way;
  uint8_t stub_cmplx_insct;
  uint8_t stub_part_of_calc_route;
  float stub_turn_angl;
  uint8_t stub_num_of_lane_drv_dir;
  uint8_t stub_num_of_lane_opp_dir;
  uint8_t stub_rt_of_way;
  uint8_t stub_last_stub;
  int32_t stub_relative_offset;
} deva_gaode_routing_msgs__msg__EhpStub;

// Struct for a sequence of deva_gaode_routing_msgs__msg__EhpStub.
typedef struct deva_gaode_routing_msgs__msg__EhpStub__Sequence
{
  deva_gaode_routing_msgs__msg__EhpStub * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__EhpStub__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_STUB__STRUCT_H_
