// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/LaneTopo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TOPO__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TOPO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'out_link_ids'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"
// Member 'lane_conds'
#include "deva_gaode_routing_msgs/msg/detail/lane_cond__struct.h"
// Member 'date'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LaneTopo in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__LaneTopo
{
  uint16_t lane_arrow;
  uint16_t lane_flag;
  uint16_t bus_flag;
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence out_link_ids;
  deva_gaode_routing_msgs__msg__LaneCond__Sequence lane_conds;
  uint16_t laneinfo_cond;
  uint8_t direction;
  rosidl_runtime_c__String date;
  uint8_t vehicles;
  uint8_t special_times;
} deva_gaode_routing_msgs__msg__LaneTopo;

// Struct for a sequence of deva_gaode_routing_msgs__msg__LaneTopo.
typedef struct deva_gaode_routing_msgs__msg__LaneTopo__Sequence
{
  deva_gaode_routing_msgs__msg__LaneTopo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__LaneTopo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TOPO__STRUCT_H_
