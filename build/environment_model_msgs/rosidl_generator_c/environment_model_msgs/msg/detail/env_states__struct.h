// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/EnvStates.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATES__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATES__STRUCT_H_

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
// Member 'states'
#include "environment_model_msgs/msg/detail/env_state__struct.h"

/// Struct defined in msg/EnvStates in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__EnvStates
{
  deva_common_msgs__msg__Header header;
  environment_model_msgs__msg__EnvState__Sequence states;
} environment_model_msgs__msg__EnvStates;

// Struct for a sequence of environment_model_msgs__msg__EnvStates.
typedef struct environment_model_msgs__msg__EnvStates__Sequence
{
  environment_model_msgs__msg__EnvStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__EnvStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATES__STRUCT_H_
