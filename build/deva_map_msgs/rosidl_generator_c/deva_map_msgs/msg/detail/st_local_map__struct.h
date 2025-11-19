// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/STLocalMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__ST_LOCAL_MAP__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__ST_LOCAL_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'channels'
#include "deva_map_msgs/msg/detail/channel__struct.h"
// Member 'reference_channals'
#include "deva_map_msgs/msg/detail/reference_channal__struct.h"
// Member 'obstacles'
#include "deva_perception_msgs/msg/detail/static_obstacle__struct.h"
// Member 'signals'
#include "deva_perception_msgs/msg/detail/signal__struct.h"

/// Struct defined in msg/STLocalMap in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__STLocalMap
{
  deva_map_msgs__msg__Channel__Sequence channels;
  deva_map_msgs__msg__ReferenceChannal__Sequence reference_channals;
  deva_perception_msgs__msg__StaticObstacle__Sequence obstacles;
  deva_perception_msgs__msg__Signal__Sequence signals;
} deva_map_msgs__msg__STLocalMap;

// Struct for a sequence of deva_map_msgs__msg__STLocalMap.
typedef struct deva_map_msgs__msg__STLocalMap__Sequence
{
  deva_map_msgs__msg__STLocalMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__STLocalMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__ST_LOCAL_MAP__STRUCT_H_
