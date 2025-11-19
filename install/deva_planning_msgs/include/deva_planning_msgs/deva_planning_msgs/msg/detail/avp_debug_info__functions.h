// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_planning_msgs:msg/AvpDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_DEBUG_INFO__FUNCTIONS_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_DEBUG_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_planning_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_planning_msgs/msg/detail/avp_debug_info__struct.h"

/// Initialize msg/AvpDebugInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_planning_msgs__msg__AvpDebugInfo
 * )) before or use
 * deva_planning_msgs__msg__AvpDebugInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
bool
deva_planning_msgs__msg__AvpDebugInfo__init(deva_planning_msgs__msg__AvpDebugInfo * msg);

/// Finalize msg/AvpDebugInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
void
deva_planning_msgs__msg__AvpDebugInfo__fini(deva_planning_msgs__msg__AvpDebugInfo * msg);

/// Create msg/AvpDebugInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_planning_msgs__msg__AvpDebugInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
deva_planning_msgs__msg__AvpDebugInfo *
deva_planning_msgs__msg__AvpDebugInfo__create();

/// Destroy msg/AvpDebugInfo message.
/**
 * It calls
 * deva_planning_msgs__msg__AvpDebugInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
void
deva_planning_msgs__msg__AvpDebugInfo__destroy(deva_planning_msgs__msg__AvpDebugInfo * msg);

/// Check for msg/AvpDebugInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
bool
deva_planning_msgs__msg__AvpDebugInfo__are_equal(const deva_planning_msgs__msg__AvpDebugInfo * lhs, const deva_planning_msgs__msg__AvpDebugInfo * rhs);

/// Copy a msg/AvpDebugInfo message.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
bool
deva_planning_msgs__msg__AvpDebugInfo__copy(
  const deva_planning_msgs__msg__AvpDebugInfo * input,
  deva_planning_msgs__msg__AvpDebugInfo * output);

/// Initialize array of msg/AvpDebugInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_planning_msgs__msg__AvpDebugInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
bool
deva_planning_msgs__msg__AvpDebugInfo__Sequence__init(deva_planning_msgs__msg__AvpDebugInfo__Sequence * array, size_t size);

/// Finalize array of msg/AvpDebugInfo messages.
/**
 * It calls
 * deva_planning_msgs__msg__AvpDebugInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
void
deva_planning_msgs__msg__AvpDebugInfo__Sequence__fini(deva_planning_msgs__msg__AvpDebugInfo__Sequence * array);

/// Create array of msg/AvpDebugInfo messages.
/**
 * It allocates the memory for the array and calls
 * deva_planning_msgs__msg__AvpDebugInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
deva_planning_msgs__msg__AvpDebugInfo__Sequence *
deva_planning_msgs__msg__AvpDebugInfo__Sequence__create(size_t size);

/// Destroy array of msg/AvpDebugInfo messages.
/**
 * It calls
 * deva_planning_msgs__msg__AvpDebugInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
void
deva_planning_msgs__msg__AvpDebugInfo__Sequence__destroy(deva_planning_msgs__msg__AvpDebugInfo__Sequence * array);

/// Check for msg/AvpDebugInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
bool
deva_planning_msgs__msg__AvpDebugInfo__Sequence__are_equal(const deva_planning_msgs__msg__AvpDebugInfo__Sequence * lhs, const deva_planning_msgs__msg__AvpDebugInfo__Sequence * rhs);

/// Copy an array of msg/AvpDebugInfo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
bool
deva_planning_msgs__msg__AvpDebugInfo__Sequence__copy(
  const deva_planning_msgs__msg__AvpDebugInfo__Sequence * input,
  deva_planning_msgs__msg__AvpDebugInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_DEBUG_INFO__FUNCTIONS_H_
