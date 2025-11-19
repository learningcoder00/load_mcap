// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/KWarningSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_WARNING_SIGN__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_WARNING_SIGN__STRUCT_H_

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
// Member 'descript'
#include "rosidl_runtime_c/string.h"
// Member 'coordinate'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"

/// Struct defined in msg/KWarningSign in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__KWarningSign
{
  deva_gaode_routing_msgs__msg__LinkIDType in_link_id;
  deva_gaode_routing_msgs__msg__NodeIDType node_id;
  deva_gaode_routing_msgs__msg__LinkIDType pass_link_id_s;
  uint16_t trc_kind;
  uint16_t forcetold_dist;
  uint16_t control_dist;
  uint8_t link_direction;
  rosidl_runtime_c__String descript;
  deva_gaode_routing_msgs__msg__Coordinate coordinate;
} deva_gaode_routing_msgs__msg__KWarningSign;

// Struct for a sequence of deva_gaode_routing_msgs__msg__KWarningSign.
typedef struct deva_gaode_routing_msgs__msg__KWarningSign__Sequence
{
  deva_gaode_routing_msgs__msg__KWarningSign * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__KWarningSign__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_WARNING_SIGN__STRUCT_H_
