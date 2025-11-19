// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/SdProLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LINK__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'road'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_road__struct.h"

/// Struct defined in msg/SdProLink in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__SdProLink
{
  uint32_t path_id;
  double offset;
  deva_gaode_routing_msgs__msg__SdProRoad road;
} deva_gaode_routing_msgs__msg__SdProLink;

// Struct for a sequence of deva_gaode_routing_msgs__msg__SdProLink.
typedef struct deva_gaode_routing_msgs__msg__SdProLink__Sequence
{
  deva_gaode_routing_msgs__msg__SdProLink * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__SdProLink__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LINK__STRUCT_H_
