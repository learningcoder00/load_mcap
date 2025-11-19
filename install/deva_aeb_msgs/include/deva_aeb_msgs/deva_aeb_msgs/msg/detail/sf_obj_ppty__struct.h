// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFObjPpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SFObjPpty in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFObjPpty
{
  uint8_t idn;
  uint8_t sts;
  uint8_t mdlofmtn;
  uint8_t trfcsceno;
  uint8_t cllsnmtgtnbybrkgprimqly;
  uint8_t cllsnmtgtnbybrkgsecqly;
  uint8_t cllsnwarnfwdqly;
  uint8_t trfcjamassiqly;
  uint8_t dstlatfrommidoflaneselfqly;
  uint8_t emgylanekeepaidposnqly;
  uint8_t fusnsrc;
  float posnlgtstdde;
  float posnlatstdde;
  float agdirstdde;
  float spdstdde;
  float astdde;
  uint8_t reserved;
  uint32_t visnid;
} deva_aeb_msgs__msg__SFObjPpty;

// Struct for a sequence of deva_aeb_msgs__msg__SFObjPpty.
typedef struct deva_aeb_msgs__msg__SFObjPpty__Sequence
{
  deva_aeb_msgs__msg__SFObjPpty * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFObjPpty__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__STRUCT_H_
