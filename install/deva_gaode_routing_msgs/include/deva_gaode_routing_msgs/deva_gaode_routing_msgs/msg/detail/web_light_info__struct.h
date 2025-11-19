// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebLightInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_INFO__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'light_states'
#include "deva_gaode_routing_msgs/msg/detail/web_light_state__struct.h"
// Member 'desc'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WebLightInfo in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__WebLightInfo
{
  int32_t dir;
  int32_t wait_num;
  deva_gaode_routing_msgs__msg__WebLightState__Sequence light_states;
  rosidl_runtime_c__String desc;
} deva_gaode_routing_msgs__msg__WebLightInfo;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebLightInfo.
typedef struct deva_gaode_routing_msgs__msg__WebLightInfo__Sequence
{
  deva_gaode_routing_msgs__msg__WebLightInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebLightInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_INFO__STRUCT_H_
