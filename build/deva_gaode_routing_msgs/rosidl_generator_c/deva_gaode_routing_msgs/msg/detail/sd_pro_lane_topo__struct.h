// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/SdProLaneTopo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_TOPO__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_TOPO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SdProLaneTopo in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__SdProLaneTopo
{
  uint64_t road_id;
  int32_t lane_num;
  uint64_t lane_id;
} deva_gaode_routing_msgs__msg__SdProLaneTopo;

// Struct for a sequence of deva_gaode_routing_msgs__msg__SdProLaneTopo.
typedef struct deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence
{
  deva_gaode_routing_msgs__msg__SdProLaneTopo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_TOPO__STRUCT_H_
