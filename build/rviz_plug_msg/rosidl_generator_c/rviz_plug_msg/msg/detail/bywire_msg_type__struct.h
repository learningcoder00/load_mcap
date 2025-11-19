// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rviz_plug_msg:msg/BywireMsgType.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_MSG_TYPE__STRUCT_H_
#define RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_MSG_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS'.
enum
{
  rviz_plug_msg__msg__BywireMsgType__STATUS = 0
};

/// Constant 'INFO'.
enum
{
  rviz_plug_msg__msg__BywireMsgType__INFO = 1
};

/// Constant 'ERROR'.
enum
{
  rviz_plug_msg__msg__BywireMsgType__ERROR = 2
};

/// Struct defined in msg/BywireMsgType in the package rviz_plug_msg.
typedef struct rviz_plug_msg__msg__BywireMsgType
{
  uint8_t val;
} rviz_plug_msg__msg__BywireMsgType;

// Struct for a sequence of rviz_plug_msg__msg__BywireMsgType.
typedef struct rviz_plug_msg__msg__BywireMsgType__Sequence
{
  rviz_plug_msg__msg__BywireMsgType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rviz_plug_msg__msg__BywireMsgType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_MSG_TYPE__STRUCT_H_
