// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/AppMapInfoToStmStruct.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_MAP_INFO_TO_STM_STRUCT__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_MAP_INFO_TO_STM_STRUCT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AppMapInfoToStmStruct in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__AppMapInfoToStmStruct
{
  uint8_t route_id;
  uint8_t aut_valt_prkg_map_upload_use_map_type2;
  uint32_t aut_valt_prkg_map_upload_use_map_list1;
  uint32_t aut_valt_prkg_map_upload_use_map_list2;
  uint32_t aut_valt_prkg_map_upload_use_map_list3;
  uint32_t aut_valt_prkg_map_upload_use_map_list4;
} deva_function_msgs__msg__AppMapInfoToStmStruct;

// Struct for a sequence of deva_function_msgs__msg__AppMapInfoToStmStruct.
typedef struct deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence
{
  deva_function_msgs__msg__AppMapInfoToStmStruct * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_MAP_INFO_TO_STM_STRUCT__STRUCT_H_
