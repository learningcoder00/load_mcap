// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/Coord3DDoubleProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__COORD3_D_DOUBLE_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__COORD3_D_DOUBLE_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Coord3DDoubleProto in the package deva_navi_msgs.
/**
  * Coord3DDoubleProto.msg
 */
typedef struct deva_navi_msgs__msg__Coord3DDoubleProto
{
  double lon;
  double lat;
  double z;
} deva_navi_msgs__msg__Coord3DDoubleProto;

// Struct for a sequence of deva_navi_msgs__msg__Coord3DDoubleProto.
typedef struct deva_navi_msgs__msg__Coord3DDoubleProto__Sequence
{
  deva_navi_msgs__msg__Coord3DDoubleProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__Coord3DDoubleProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__COORD3_D_DOUBLE_PROTO__STRUCT_H_
