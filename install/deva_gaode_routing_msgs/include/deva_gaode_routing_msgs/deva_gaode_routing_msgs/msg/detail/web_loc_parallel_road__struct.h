// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebLocParallelRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LOC_PARALLEL_ROAD__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LOC_PARALLEL_ROAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WebLocParallelRoad in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__WebLocParallelRoad
{
  int32_t formway;
  int32_t road_type;
  int32_t road_id;
  int32_t type;
} deva_gaode_routing_msgs__msg__WebLocParallelRoad;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebLocParallelRoad.
typedef struct deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence
{
  deva_gaode_routing_msgs__msg__WebLocParallelRoad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LOC_PARALLEL_ROAD__STRUCT_H_
