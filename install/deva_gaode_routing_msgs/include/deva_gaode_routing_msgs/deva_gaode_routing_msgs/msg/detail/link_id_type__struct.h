// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/LinkIDType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ID_TYPE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ID_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LinkIDType in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__LinkIDType
{
  uint32_t tile_id;
  uint64_t link_id;
  uint64_t raw_id;
} deva_gaode_routing_msgs__msg__LinkIDType;

// Struct for a sequence of deva_gaode_routing_msgs__msg__LinkIDType.
typedef struct deva_gaode_routing_msgs__msg__LinkIDType__Sequence
{
  deva_gaode_routing_msgs__msg__LinkIDType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__LinkIDType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ID_TYPE__STRUCT_H_
