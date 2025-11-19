// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from environment_model_msgs:msg/EnvObject.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_OBJECT__FUNCTIONS_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "environment_model_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "environment_model_msgs/msg/detail/env_object__struct.h"

/// Initialize msg/EnvObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * environment_model_msgs__msg__EnvObject
 * )) before or use
 * environment_model_msgs__msg__EnvObject__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
bool
environment_model_msgs__msg__EnvObject__init(environment_model_msgs__msg__EnvObject * msg);

/// Finalize msg/EnvObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
void
environment_model_msgs__msg__EnvObject__fini(environment_model_msgs__msg__EnvObject * msg);

/// Create msg/EnvObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * environment_model_msgs__msg__EnvObject__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
environment_model_msgs__msg__EnvObject *
environment_model_msgs__msg__EnvObject__create();

/// Destroy msg/EnvObject message.
/**
 * It calls
 * environment_model_msgs__msg__EnvObject__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
void
environment_model_msgs__msg__EnvObject__destroy(environment_model_msgs__msg__EnvObject * msg);

/// Check for msg/EnvObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
bool
environment_model_msgs__msg__EnvObject__are_equal(const environment_model_msgs__msg__EnvObject * lhs, const environment_model_msgs__msg__EnvObject * rhs);

/// Copy a msg/EnvObject message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
bool
environment_model_msgs__msg__EnvObject__copy(
  const environment_model_msgs__msg__EnvObject * input,
  environment_model_msgs__msg__EnvObject * output);

/// Initialize array of msg/EnvObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * environment_model_msgs__msg__EnvObject__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
bool
environment_model_msgs__msg__EnvObject__Sequence__init(environment_model_msgs__msg__EnvObject__Sequence * array, size_t size);

/// Finalize array of msg/EnvObject messages.
/**
 * It calls
 * environment_model_msgs__msg__EnvObject__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
void
environment_model_msgs__msg__EnvObject__Sequence__fini(environment_model_msgs__msg__EnvObject__Sequence * array);

/// Create array of msg/EnvObject messages.
/**
 * It allocates the memory for the array and calls
 * environment_model_msgs__msg__EnvObject__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
environment_model_msgs__msg__EnvObject__Sequence *
environment_model_msgs__msg__EnvObject__Sequence__create(size_t size);

/// Destroy array of msg/EnvObject messages.
/**
 * It calls
 * environment_model_msgs__msg__EnvObject__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
void
environment_model_msgs__msg__EnvObject__Sequence__destroy(environment_model_msgs__msg__EnvObject__Sequence * array);

/// Check for msg/EnvObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
bool
environment_model_msgs__msg__EnvObject__Sequence__are_equal(const environment_model_msgs__msg__EnvObject__Sequence * lhs, const environment_model_msgs__msg__EnvObject__Sequence * rhs);

/// Copy an array of msg/EnvObject messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
bool
environment_model_msgs__msg__EnvObject__Sequence__copy(
  const environment_model_msgs__msg__EnvObject__Sequence * input,
  environment_model_msgs__msg__EnvObject__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_OBJECT__FUNCTIONS_H_
