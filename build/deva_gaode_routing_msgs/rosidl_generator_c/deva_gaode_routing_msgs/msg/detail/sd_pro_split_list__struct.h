// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/SdProSplitList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SdProSplitList in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__SdProSplitList
{
  uint32_t sub_path_id;
  double turn_angle;
  uint32_t right_of_way;
} deva_gaode_routing_msgs__msg__SdProSplitList;

// Struct for a sequence of deva_gaode_routing_msgs__msg__SdProSplitList.
typedef struct deva_gaode_routing_msgs__msg__SdProSplitList__Sequence
{
  deva_gaode_routing_msgs__msg__SdProSplitList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__SdProSplitList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__STRUCT_H_
