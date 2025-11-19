// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebParallelRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_PARALLEL_ROAD__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_PARALLEL_ROAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parallel_road_list'
#include "deva_gaode_routing_msgs/msg/detail/web_loc_parallel_road__struct.h"

/// Struct defined in msg/WebParallelRoad in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__WebParallelRoad
{
  int32_t count;
  int32_t flag;
  int32_t hw_flag;
  int32_t status;
  deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence parallel_road_list;
} deva_gaode_routing_msgs__msg__WebParallelRoad;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebParallelRoad.
typedef struct deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence
{
  deva_gaode_routing_msgs__msg__WebParallelRoad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_PARALLEL_ROAD__STRUCT_H_
