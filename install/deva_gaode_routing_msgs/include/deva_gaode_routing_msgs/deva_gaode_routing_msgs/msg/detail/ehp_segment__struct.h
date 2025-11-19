// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/EhpSegment.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_SEGMENT__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_SEGMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EhpSegment in the package deva_gaode_routing_msgs.
/**
  * EHP_SEGMENT.msg
 */
typedef struct deva_gaode_routing_msgs__msg__EhpSegment
{
  uint16_t seg_offset;
  uint8_t seg_msg_type;
  uint8_t seg_path_idx;
  uint8_t seg_cyc_cnt;
  uint8_t seg_update;
  uint8_t seg_retr;
  uint8_t seg_build_up_area;
  uint8_t seg_bridge;
  uint8_t seg_tunnel;
  uint8_t seg_func_road_class;
  float seg_rel_probb;
  uint8_t seg_form_of_way;
  uint8_t seg_cmplx_insct;
  uint8_t seg_part_of_calc_route;
  uint8_t seg_eff_spd_lmt_type;
  uint8_t seg_eff_spd_lmt;
  uint8_t seg_num_of_lane_drv_dir;
  uint8_t seg_num_of_lane_opp_dir;
  uint8_t seg_divide_road;
  int32_t seg_relative_offset;
} deva_gaode_routing_msgs__msg__EhpSegment;

// Struct for a sequence of deva_gaode_routing_msgs__msg__EhpSegment.
typedef struct deva_gaode_routing_msgs__msg__EhpSegment__Sequence
{
  deva_gaode_routing_msgs__msg__EhpSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__EhpSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_SEGMENT__STRUCT_H_
