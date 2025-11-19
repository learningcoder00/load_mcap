// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/GlobalPathMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_PATH_MSG__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_PATH_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'global_coords'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.h"
// Member 'global_steps'
#include "deva_gaode_routing_msgs/msg/detail/web_step__struct.h"

/// Struct defined in msg/GlobalPathMsg in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__GlobalPathMsg
{
  deva_gaode_routing_msgs__msg__WebPoint__Sequence global_coords;
  deva_gaode_routing_msgs__msg__WebStep__Sequence global_steps;
} deva_gaode_routing_msgs__msg__GlobalPathMsg;

// Struct for a sequence of deva_gaode_routing_msgs__msg__GlobalPathMsg.
typedef struct deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence
{
  deva_gaode_routing_msgs__msg__GlobalPathMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_PATH_MSG__STRUCT_H_
