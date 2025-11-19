// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from environment_model_msgs:msg/StructuredFeaturePoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__FUNCTIONS_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "environment_model_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "environment_model_msgs/msg/detail/structured_feature_point__struct.h"

/// Initialize msg/StructuredFeaturePoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * environment_model_msgs__msg__StructuredFeaturePoint
 * )) before or use
 * environment_model_msgs__msg__StructuredFeaturePoint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
bool
environment_model_msgs__msg__StructuredFeaturePoint__init(environment_model_msgs__msg__StructuredFeaturePoint * msg);

/// Finalize msg/StructuredFeaturePoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
void
environment_model_msgs__msg__StructuredFeaturePoint__fini(environment_model_msgs__msg__StructuredFeaturePoint * msg);

/// Create msg/StructuredFeaturePoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * environment_model_msgs__msg__StructuredFeaturePoint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
environment_model_msgs__msg__StructuredFeaturePoint *
environment_model_msgs__msg__StructuredFeaturePoint__create();

/// Destroy msg/StructuredFeaturePoint message.
/**
 * It calls
 * environment_model_msgs__msg__StructuredFeaturePoint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
void
environment_model_msgs__msg__StructuredFeaturePoint__destroy(environment_model_msgs__msg__StructuredFeaturePoint * msg);

/// Check for msg/StructuredFeaturePoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
bool
environment_model_msgs__msg__StructuredFeaturePoint__are_equal(const environment_model_msgs__msg__StructuredFeaturePoint * lhs, const environment_model_msgs__msg__StructuredFeaturePoint * rhs);

/// Copy a msg/StructuredFeaturePoint message.
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
environment_model_msgs__msg__StructuredFeaturePoint__copy(
  const environment_model_msgs__msg__StructuredFeaturePoint * input,
  environment_model_msgs__msg__StructuredFeaturePoint * output);

/// Initialize array of msg/StructuredFeaturePoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * environment_model_msgs__msg__StructuredFeaturePoint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
bool
environment_model_msgs__msg__StructuredFeaturePoint__Sequence__init(environment_model_msgs__msg__StructuredFeaturePoint__Sequence * array, size_t size);

/// Finalize array of msg/StructuredFeaturePoint messages.
/**
 * It calls
 * environment_model_msgs__msg__StructuredFeaturePoint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
void
environment_model_msgs__msg__StructuredFeaturePoint__Sequence__fini(environment_model_msgs__msg__StructuredFeaturePoint__Sequence * array);

/// Create array of msg/StructuredFeaturePoint messages.
/**
 * It allocates the memory for the array and calls
 * environment_model_msgs__msg__StructuredFeaturePoint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
environment_model_msgs__msg__StructuredFeaturePoint__Sequence *
environment_model_msgs__msg__StructuredFeaturePoint__Sequence__create(size_t size);

/// Destroy array of msg/StructuredFeaturePoint messages.
/**
 * It calls
 * environment_model_msgs__msg__StructuredFeaturePoint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
void
environment_model_msgs__msg__StructuredFeaturePoint__Sequence__destroy(environment_model_msgs__msg__StructuredFeaturePoint__Sequence * array);

/// Check for msg/StructuredFeaturePoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_model_msgs
bool
environment_model_msgs__msg__StructuredFeaturePoint__Sequence__are_equal(const environment_model_msgs__msg__StructuredFeaturePoint__Sequence * lhs, const environment_model_msgs__msg__StructuredFeaturePoint__Sequence * rhs);

/// Copy an array of msg/StructuredFeaturePoint messages.
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
environment_model_msgs__msg__StructuredFeaturePoint__Sequence__copy(
  const environment_model_msgs__msg__StructuredFeaturePoint__Sequence * input,
  environment_model_msgs__msg__StructuredFeaturePoint__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__FUNCTIONS_H_
