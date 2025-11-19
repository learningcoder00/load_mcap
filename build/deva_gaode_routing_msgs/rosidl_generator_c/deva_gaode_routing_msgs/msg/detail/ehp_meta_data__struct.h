// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/EhpMetaData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_META_DATA__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_META_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EhpMetaData in the package deva_gaode_routing_msgs.
/**
  * EHP_META_DATA.msg
 */
typedef struct deva_gaode_routing_msgs__msg__EhpMetaData
{
  uint16_t meta_country_code;
  uint8_t meta_map_provider;
  uint8_t meta_msg_type;
  uint16_t meta_hw_ver;
  uint8_t meta_prot_ver_minor_sub;
  uint8_t meta_prot_ver_major;
  uint8_t meta_cyc_cnt;
  uint16_t meta_region_code;
  uint8_t meta_drv_side;
  uint8_t meta_map_ver_year;
  uint8_t meta_map_ver_qtr;
  uint8_t meta_prot_ver_minor;
  uint8_t meta_spd_units;
} deva_gaode_routing_msgs__msg__EhpMetaData;

// Struct for a sequence of deva_gaode_routing_msgs__msg__EhpMetaData.
typedef struct deva_gaode_routing_msgs__msg__EhpMetaData__Sequence
{
  deva_gaode_routing_msgs__msg__EhpMetaData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__EhpMetaData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_META_DATA__STRUCT_H_
