// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_mdriver_msgs:msg/MWorld.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__FUNCTIONS_H_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_mdriver_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_mdriver_msgs/msg/detail/m_world__struct.h"

/// Initialize msg/MWorld message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_mdriver_msgs__msg__MWorld
 * )) before or use
 * deva_mdriver_msgs__msg__MWorld__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_mdriver_msgs
bool
deva_mdriver_msgs__msg__MWorld__init(deva_mdriver_msgs__msg__MWorld * msg);

/// Finalize msg/MWorld message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_mdriver_msgs
void
deva_mdriver_msgs__msg__MWorld__fini(deva_mdriver_msgs__msg__MWorld * msg);

/// Create msg/MWorld message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_mdriver_msgs__msg__MWorld__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_mdriver_msgs
deva_mdriver_msgs__msg__MWorld *
deva_mdriver_msgs__msg__MWorld__create();

/// Destroy msg/MWorld message.
/**
 * It calls
 * deva_mdriver_msgs__msg__MWorld__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_mdriver_msgs
void
deva_mdriver_msgs__msg__MWorld__destroy(deva_mdriver_msgs__msg__MWorld * msg);

/// Check for msg/MWorld message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_mdriver_msgs
bool
deva_mdriver_msgs__msg__MWorld__are_equal(const deva_mdriver_msgs__msg__MWorld * lhs, const deva_mdriver_msgs__msg__MWorld * rhs);

/// Copy a msg/MWorld message.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_mdriver_msgs
bool
deva_mdriver_msgs__msg__MWorld__copy(
  const deva_mdriver_msgs__msg__MWorld * input,
  deva_mdriver_msgs__msg__MWorld * output);

/// Initialize array of msg/MWorld messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_mdriver_msgs__msg__MWorld__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_mdriver_msgs
bool
deva_mdriver_msgs__msg__MWorld__Sequence__init(deva_mdriver_msgs__msg__MWorld__Sequence * array, size_t size);

/// Finalize array of msg/MWorld messages.
/**
 * It calls
 * deva_mdriver_msgs__msg__MWorld__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_mdriver_msgs
void
deva_mdriver_msgs__msg__MWorld__Sequence__fini(deva_mdriver_msgs__msg__MWorld__Sequence * array);

/// Create array of msg/MWorld messages.
/**
 * It allocates the memory for the array and calls
 * deva_mdriver_msgs__msg__MWorld__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_mdriver_msgs
deva_mdriver_msgs__msg__MWorld__Sequence *
deva_mdriver_msgs__msg__MWorld__Sequence__create(size_t size);

/// Destroy array of msg/MWorld messages.
/**
 * It calls
 * deva_mdriver_msgs__msg__MWorld__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_mdriver_msgs
void
deva_mdriver_msgs__msg__MWorld__Sequence__destroy(deva_mdriver_msgs__msg__MWorld__Sequence * array);

/// Check for msg/MWorld message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_mdriver_msgs
bool
deva_mdriver_msgs__msg__MWorld__Sequence__are_equal(const deva_mdriver_msgs__msg__MWorld__Sequence * lhs, const deva_mdriver_msgs__msg__MWorld__Sequence * rhs);

/// Copy an array of msg/MWorld messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_mdriver_msgs
bool
deva_mdriver_msgs__msg__MWorld__Sequence__copy(
  const deva_mdriver_msgs__msg__MWorld__Sequence * input,
  deva_mdriver_msgs__msg__MWorld__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__FUNCTIONS_H_
