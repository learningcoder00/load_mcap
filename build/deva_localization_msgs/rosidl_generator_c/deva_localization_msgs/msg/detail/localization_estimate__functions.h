// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_localization_msgs:msg/LocalizationEstimate.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__FUNCTIONS_H_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_localization_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_localization_msgs/msg/detail/localization_estimate__struct.h"

/// Initialize msg/LocalizationEstimate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_localization_msgs__msg__LocalizationEstimate
 * )) before or use
 * deva_localization_msgs__msg__LocalizationEstimate__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
bool
deva_localization_msgs__msg__LocalizationEstimate__init(deva_localization_msgs__msg__LocalizationEstimate * msg);

/// Finalize msg/LocalizationEstimate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
void
deva_localization_msgs__msg__LocalizationEstimate__fini(deva_localization_msgs__msg__LocalizationEstimate * msg);

/// Create msg/LocalizationEstimate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_localization_msgs__msg__LocalizationEstimate__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
deva_localization_msgs__msg__LocalizationEstimate *
deva_localization_msgs__msg__LocalizationEstimate__create();

/// Destroy msg/LocalizationEstimate message.
/**
 * It calls
 * deva_localization_msgs__msg__LocalizationEstimate__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
void
deva_localization_msgs__msg__LocalizationEstimate__destroy(deva_localization_msgs__msg__LocalizationEstimate * msg);

/// Check for msg/LocalizationEstimate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
bool
deva_localization_msgs__msg__LocalizationEstimate__are_equal(const deva_localization_msgs__msg__LocalizationEstimate * lhs, const deva_localization_msgs__msg__LocalizationEstimate * rhs);

/// Copy a msg/LocalizationEstimate message.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
bool
deva_localization_msgs__msg__LocalizationEstimate__copy(
  const deva_localization_msgs__msg__LocalizationEstimate * input,
  deva_localization_msgs__msg__LocalizationEstimate * output);

/// Initialize array of msg/LocalizationEstimate messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_localization_msgs__msg__LocalizationEstimate__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
bool
deva_localization_msgs__msg__LocalizationEstimate__Sequence__init(deva_localization_msgs__msg__LocalizationEstimate__Sequence * array, size_t size);

/// Finalize array of msg/LocalizationEstimate messages.
/**
 * It calls
 * deva_localization_msgs__msg__LocalizationEstimate__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
void
deva_localization_msgs__msg__LocalizationEstimate__Sequence__fini(deva_localization_msgs__msg__LocalizationEstimate__Sequence * array);

/// Create array of msg/LocalizationEstimate messages.
/**
 * It allocates the memory for the array and calls
 * deva_localization_msgs__msg__LocalizationEstimate__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
deva_localization_msgs__msg__LocalizationEstimate__Sequence *
deva_localization_msgs__msg__LocalizationEstimate__Sequence__create(size_t size);

/// Destroy array of msg/LocalizationEstimate messages.
/**
 * It calls
 * deva_localization_msgs__msg__LocalizationEstimate__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
void
deva_localization_msgs__msg__LocalizationEstimate__Sequence__destroy(deva_localization_msgs__msg__LocalizationEstimate__Sequence * array);

/// Check for msg/LocalizationEstimate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
bool
deva_localization_msgs__msg__LocalizationEstimate__Sequence__are_equal(const deva_localization_msgs__msg__LocalizationEstimate__Sequence * lhs, const deva_localization_msgs__msg__LocalizationEstimate__Sequence * rhs);

/// Copy an array of msg/LocalizationEstimate messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
bool
deva_localization_msgs__msg__LocalizationEstimate__Sequence__copy(
  const deva_localization_msgs__msg__LocalizationEstimate__Sequence * input,
  deva_localization_msgs__msg__LocalizationEstimate__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__FUNCTIONS_H_
