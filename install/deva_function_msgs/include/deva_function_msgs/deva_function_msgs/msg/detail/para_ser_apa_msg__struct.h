// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/ParaSerApaMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__PARA_SER_APA_MSG__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__PARA_SER_APA_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ParaSerApaMsg in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__ParaSerApaMsg
{
  double publish_timestamp;
  uint8_t apa_switch_setting_result;
  uint8_t rpa_switch_setting_result;
  uint8_t summon_switch_setting_result;
} deva_function_msgs__msg__ParaSerApaMsg;

// Struct for a sequence of deva_function_msgs__msg__ParaSerApaMsg.
typedef struct deva_function_msgs__msg__ParaSerApaMsg__Sequence
{
  deva_function_msgs__msg__ParaSerApaMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__ParaSerApaMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__PARA_SER_APA_MSG__STRUCT_H_
