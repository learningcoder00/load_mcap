// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/FuncMainSM.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FUNC_MAIN_SM__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FUNC_MAIN_SM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/FuncMainSM in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__FuncMainSM
{
  deva_common_msgs__msg__Header header;
  uint8_t state_machine_main_state;
  uint8_t state_machine_mode;
  uint8_t act_func_arbn;
} deva_function_msgs__msg__FuncMainSM;

// Struct for a sequence of deva_function_msgs__msg__FuncMainSM.
typedef struct deva_function_msgs__msg__FuncMainSM__Sequence
{
  deva_function_msgs__msg__FuncMainSM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__FuncMainSM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FUNC_MAIN_SM__STRUCT_H_
