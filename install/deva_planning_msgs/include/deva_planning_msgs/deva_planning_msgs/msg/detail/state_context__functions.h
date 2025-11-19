// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_planning_msgs:msg/StateContext.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__FUNCTIONS_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_planning_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_planning_msgs/msg/detail/state_context__struct.h"

/// Initialize msg/StateContext message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_planning_msgs__msg__StateContext
 * )) before or use
 * deva_planning_msgs__msg__StateContext__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
bool
deva_planning_msgs__msg__StateContext__init(deva_planning_msgs__msg__StateContext * msg);

/// Finalize msg/StateContext message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
void
deva_planning_msgs__msg__StateContext__fini(deva_planning_msgs__msg__StateContext * msg);

/// Create msg/StateContext message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_planning_msgs__msg__StateContext__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
deva_planning_msgs__msg__StateContext *
deva_planning_msgs__msg__StateContext__create();

/// Destroy msg/StateContext message.
/**
 * It calls
 * deva_planning_msgs__msg__StateContext__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
void
deva_planning_msgs__msg__StateContext__destroy(deva_planning_msgs__msg__StateContext * msg);

/// Check for msg/StateContext message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
bool
deva_planning_msgs__msg__StateContext__are_equal(const deva_planning_msgs__msg__StateContext * lhs, const deva_planning_msgs__msg__StateContext * rhs);

/// Copy a msg/StateContext message.
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
deva_planning_msgs__msg__StateContext__copy(
  const deva_planning_msgs__msg__StateContext * input,
  deva_planning_msgs__msg__StateContext * output);

/// Initialize array of msg/StateContext messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_planning_msgs__msg__StateContext__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
bool
deva_planning_msgs__msg__StateContext__Sequence__init(deva_planning_msgs__msg__StateContext__Sequence * array, size_t size);

/// Finalize array of msg/StateContext messages.
/**
 * It calls
 * deva_planning_msgs__msg__StateContext__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
void
deva_planning_msgs__msg__StateContext__Sequence__fini(deva_planning_msgs__msg__StateContext__Sequence * array);

/// Create array of msg/StateContext messages.
/**
 * It allocates the memory for the array and calls
 * deva_planning_msgs__msg__StateContext__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
deva_planning_msgs__msg__StateContext__Sequence *
deva_planning_msgs__msg__StateContext__Sequence__create(size_t size);

/// Destroy array of msg/StateContext messages.
/**
 * It calls
 * deva_planning_msgs__msg__StateContext__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
void
deva_planning_msgs__msg__StateContext__Sequence__destroy(deva_planning_msgs__msg__StateContext__Sequence * array);

/// Check for msg/StateContext message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs
bool
deva_planning_msgs__msg__StateContext__Sequence__are_equal(const deva_planning_msgs__msg__StateContext__Sequence * lhs, const deva_planning_msgs__msg__StateContext__Sequence * rhs);

/// Copy an array of msg/StateContext messages.
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
deva_planning_msgs__msg__StateContext__Sequence__copy(
  const deva_planning_msgs__msg__StateContext__Sequence * input,
  deva_planning_msgs__msg__StateContext__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__FUNCTIONS_H_
