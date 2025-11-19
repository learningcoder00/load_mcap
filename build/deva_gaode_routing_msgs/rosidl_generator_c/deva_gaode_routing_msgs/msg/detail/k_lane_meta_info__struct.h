// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/KLaneMetaInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LANE_META_INFO__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LANE_META_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'in_link_id'
// Member 'pass_link_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"
// Member 'node_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__struct.h"
// Member 'lane_infos'
#include "deva_gaode_routing_msgs/msg/detail/lane_traffic_info__struct.h"
// Member 'lane_topos'
#include "deva_gaode_routing_msgs/msg/detail/lane_topo__struct.h"

/// Struct defined in msg/KLaneMetaInfo in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__KLaneMetaInfo
{
  deva_gaode_routing_msgs__msg__LinkIDType in_link_id;
  deva_gaode_routing_msgs__msg__NodeIDType node_id;
  deva_gaode_routing_msgs__msg__LinkIDType pass_link_id_s;
  int32_t lane_num;
  uint8_t lane_num_left;
  uint8_t lane_num_right;
  deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence lane_infos;
  deva_gaode_routing_msgs__msg__LaneTopo__Sequence lane_topos;
} deva_gaode_routing_msgs__msg__KLaneMetaInfo;

// Struct for a sequence of deva_gaode_routing_msgs__msg__KLaneMetaInfo.
typedef struct deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence
{
  deva_gaode_routing_msgs__msg__KLaneMetaInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LANE_META_INFO__STRUCT_H_
