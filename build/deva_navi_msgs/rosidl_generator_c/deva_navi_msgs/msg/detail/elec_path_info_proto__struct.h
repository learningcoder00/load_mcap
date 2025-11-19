// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/ElecPathInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ELEC_PATH_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ELEC_PATH_INFO_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'm_link_consume'
// Member 'm_link_distance'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'm_via_info'
#include "deva_navi_msgs/msg/detail/via_point_info_proto__struct.h"
// Member 'm_energy_consume'
#include "deva_navi_msgs/msg/detail/energy_consume_proto__struct.h"

/// Struct defined in msg/ElecPathInfoProto in the package deva_navi_msgs.
/**
  * ElecPathInfoProto.msg
 */
typedef struct deva_navi_msgs__msg__ElecPathInfoProto
{
  bool m_is_elec_route;
  bool m_link_consume_size_word;
  int32_t m_traffic_info;
  int32_t m_energy_unit;
  int32_t m_path_flag;
  int32_t m_energy_sum;
  int32_t m_link_num;
  rosidl_runtime_c__int32__Sequence m_link_consume;
  rosidl_runtime_c__int64__Sequence m_link_distance;
  deva_navi_msgs__msg__ViaPointInfoProto__Sequence m_via_info;
  deva_navi_msgs__msg__EnergyConsumeProto m_energy_consume;
} deva_navi_msgs__msg__ElecPathInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__ElecPathInfoProto.
typedef struct deva_navi_msgs__msg__ElecPathInfoProto__Sequence
{
  deva_navi_msgs__msg__ElecPathInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__ElecPathInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ELEC_PATH_INFO_PROTO__STRUCT_H_
