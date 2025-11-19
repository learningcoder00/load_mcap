// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/Guidance.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GUIDANCE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GUIDANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'in_link_id'
// Member 'pass_link_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"
// Member 'node_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__struct.h"
// Member 'k_warning_sign'
#include "deva_gaode_routing_msgs/msg/detail/k_warning_sign__struct.h"
// Member 'k_lane_meta_info'
#include "deva_gaode_routing_msgs/msg/detail/k_lane_meta_info__struct.h"
// Member 'k_lsl'
#include "deva_gaode_routing_msgs/msg/detail/k_lsl__struct.h"

/// Struct defined in msg/Guidance in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__Guidance
{
  deva_gaode_routing_msgs__msg__LinkIDType in_link_id;
  deva_gaode_routing_msgs__msg__NodeIDType node_id;
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence pass_link_id_s;
  deva_gaode_routing_msgs__msg__KWarningSign k_warning_sign;
  deva_gaode_routing_msgs__msg__KLaneMetaInfo k_lane_meta_info;
  deva_gaode_routing_msgs__msg__KLsl k_lsl;
} deva_gaode_routing_msgs__msg__Guidance;

// Struct for a sequence of deva_gaode_routing_msgs__msg__Guidance.
typedef struct deva_gaode_routing_msgs__msg__Guidance__Sequence
{
  deva_gaode_routing_msgs__msg__Guidance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__Guidance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GUIDANCE__STRUCT_H_
