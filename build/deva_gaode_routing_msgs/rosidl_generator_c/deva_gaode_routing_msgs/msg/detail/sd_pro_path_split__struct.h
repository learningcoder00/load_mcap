// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/SdProPathSplit.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH_SPLIT__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH_SPLIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'split_list'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_split_list__struct.h"

/// Struct defined in msg/SdProPathSplit in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__SdProPathSplit
{
  uint32_t path_id;
  uint32_t split_node_id;
  double offset;
  deva_gaode_routing_msgs__msg__SdProSplitList__Sequence split_list;
} deva_gaode_routing_msgs__msg__SdProPathSplit;

// Struct for a sequence of deva_gaode_routing_msgs__msg__SdProPathSplit.
typedef struct deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence
{
  deva_gaode_routing_msgs__msg__SdProPathSplit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH_SPLIT__STRUCT_H_
