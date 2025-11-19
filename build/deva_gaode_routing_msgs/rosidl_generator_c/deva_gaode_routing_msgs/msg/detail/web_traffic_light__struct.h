// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebTrafficLight.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_TRAFFIC_LIGHT__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_TRAFFIC_LIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.h"
// Member 'light_info'
#include "deva_gaode_routing_msgs/msg/detail/web_light_info__struct.h"

/// Struct defined in msg/WebTrafficLight in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__WebTrafficLight
{
  int32_t road_id;
  int32_t road_index;
  int32_t setp_index;
  int32_t path_id;
  deva_gaode_routing_msgs__msg__WebPoint position;
  int32_t status;
  deva_gaode_routing_msgs__msg__WebLightInfo light_info;
} deva_gaode_routing_msgs__msg__WebTrafficLight;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebTrafficLight.
typedef struct deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence
{
  deva_gaode_routing_msgs__msg__WebTrafficLight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_TRAFFIC_LIGHT__STRUCT_H_
