// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_map_msgs:msg/ReferenceChannal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__FUNCTIONS_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_map_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_map_msgs/msg/detail/reference_channal__struct.h"

/// Initialize msg/ReferenceChannal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_map_msgs__msg__ReferenceChannal
 * )) before or use
 * deva_map_msgs__msg__ReferenceChannal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_map_msgs
bool
deva_map_msgs__msg__ReferenceChannal__init(deva_map_msgs__msg__ReferenceChannal * msg);

/// Finalize msg/ReferenceChannal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_map_msgs
void
deva_map_msgs__msg__ReferenceChannal__fini(deva_map_msgs__msg__ReferenceChannal * msg);

/// Create msg/ReferenceChannal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_map_msgs__msg__ReferenceChannal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_map_msgs
deva_map_msgs__msg__ReferenceChannal *
deva_map_msgs__msg__ReferenceChannal__create();

/// Destroy msg/ReferenceChannal message.
/**
 * It calls
 * deva_map_msgs__msg__ReferenceChannal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_map_msgs
void
deva_map_msgs__msg__ReferenceChannal__destroy(deva_map_msgs__msg__ReferenceChannal * msg);

/// Check for msg/ReferenceChannal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_map_msgs
bool
deva_map_msgs__msg__ReferenceChannal__are_equal(const deva_map_msgs__msg__ReferenceChannal * lhs, const deva_map_msgs__msg__ReferenceChannal * rhs);

/// Copy a msg/ReferenceChannal message.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_map_msgs
bool
deva_map_msgs__msg__ReferenceChannal__copy(
  const deva_map_msgs__msg__ReferenceChannal * input,
  deva_map_msgs__msg__ReferenceChannal * output);

/// Initialize array of msg/ReferenceChannal messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_map_msgs__msg__ReferenceChannal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_map_msgs
bool
deva_map_msgs__msg__ReferenceChannal__Sequence__init(deva_map_msgs__msg__ReferenceChannal__Sequence * array, size_t size);

/// Finalize array of msg/ReferenceChannal messages.
/**
 * It calls
 * deva_map_msgs__msg__ReferenceChannal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_map_msgs
void
deva_map_msgs__msg__ReferenceChannal__Sequence__fini(deva_map_msgs__msg__ReferenceChannal__Sequence * array);

/// Create array of msg/ReferenceChannal messages.
/**
 * It allocates the memory for the array and calls
 * deva_map_msgs__msg__ReferenceChannal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_map_msgs
deva_map_msgs__msg__ReferenceChannal__Sequence *
deva_map_msgs__msg__ReferenceChannal__Sequence__create(size_t size);

/// Destroy array of msg/ReferenceChannal messages.
/**
 * It calls
 * deva_map_msgs__msg__ReferenceChannal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_map_msgs
void
deva_map_msgs__msg__ReferenceChannal__Sequence__destroy(deva_map_msgs__msg__ReferenceChannal__Sequence * array);

/// Check for msg/ReferenceChannal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_map_msgs
bool
deva_map_msgs__msg__ReferenceChannal__Sequence__are_equal(const deva_map_msgs__msg__ReferenceChannal__Sequence * lhs, const deva_map_msgs__msg__ReferenceChannal__Sequence * rhs);

/// Copy an array of msg/ReferenceChannal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_map_msgs
bool
deva_map_msgs__msg__ReferenceChannal__Sequence__copy(
  const deva_map_msgs__msg__ReferenceChannal__Sequence * input,
  deva_map_msgs__msg__ReferenceChannal__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__FUNCTIONS_H_
