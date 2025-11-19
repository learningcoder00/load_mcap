// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebLightState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_STATE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WebLightState in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__WebLightState
{
  int64_t etime;
  int64_t stime;
  int32_t type;
} deva_gaode_routing_msgs__msg__WebLightState;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebLightState.
typedef struct deva_gaode_routing_msgs__msg__WebLightState__Sequence
{
  deva_gaode_routing_msgs__msg__WebLightState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebLightState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_STATE__STRUCT_H_
