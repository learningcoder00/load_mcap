// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_function_msgs:msg/MachRemind.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__FUNCTIONS_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_function_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_function_msgs/msg/detail/mach_remind__struct.h"

/// Initialize msg/MachRemind message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_function_msgs__msg__MachRemind
 * )) before or use
 * deva_function_msgs__msg__MachRemind__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_function_msgs
bool
deva_function_msgs__msg__MachRemind__init(deva_function_msgs__msg__MachRemind * msg);

/// Finalize msg/MachRemind message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_function_msgs
void
deva_function_msgs__msg__MachRemind__fini(deva_function_msgs__msg__MachRemind * msg);

/// Create msg/MachRemind message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_function_msgs__msg__MachRemind__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_function_msgs
deva_function_msgs__msg__MachRemind *
deva_function_msgs__msg__MachRemind__create();

/// Destroy msg/MachRemind message.
/**
 * It calls
 * deva_function_msgs__msg__MachRemind__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_function_msgs
void
deva_function_msgs__msg__MachRemind__destroy(deva_function_msgs__msg__MachRemind * msg);

/// Check for msg/MachRemind message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_function_msgs
bool
deva_function_msgs__msg__MachRemind__are_equal(const deva_function_msgs__msg__MachRemind * lhs, const deva_function_msgs__msg__MachRemind * rhs);

/// Copy a msg/MachRemind message.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_function_msgs
bool
deva_function_msgs__msg__MachRemind__copy(
  const deva_function_msgs__msg__MachRemind * input,
  deva_function_msgs__msg__MachRemind * output);

/// Initialize array of msg/MachRemind messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_function_msgs__msg__MachRemind__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_function_msgs
bool
deva_function_msgs__msg__MachRemind__Sequence__init(deva_function_msgs__msg__MachRemind__Sequence * array, size_t size);

/// Finalize array of msg/MachRemind messages.
/**
 * It calls
 * deva_function_msgs__msg__MachRemind__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_function_msgs
void
deva_function_msgs__msg__MachRemind__Sequence__fini(deva_function_msgs__msg__MachRemind__Sequence * array);

/// Create array of msg/MachRemind messages.
/**
 * It allocates the memory for the array and calls
 * deva_function_msgs__msg__MachRemind__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_function_msgs
deva_function_msgs__msg__MachRemind__Sequence *
deva_function_msgs__msg__MachRemind__Sequence__create(size_t size);

/// Destroy array of msg/MachRemind messages.
/**
 * It calls
 * deva_function_msgs__msg__MachRemind__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_function_msgs
void
deva_function_msgs__msg__MachRemind__Sequence__destroy(deva_function_msgs__msg__MachRemind__Sequence * array);

/// Check for msg/MachRemind message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_function_msgs
bool
deva_function_msgs__msg__MachRemind__Sequence__are_equal(const deva_function_msgs__msg__MachRemind__Sequence * lhs, const deva_function_msgs__msg__MachRemind__Sequence * rhs);

/// Copy an array of msg/MachRemind messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_function_msgs
bool
deva_function_msgs__msg__MachRemind__Sequence__copy(
  const deva_function_msgs__msg__MachRemind__Sequence * input,
  deva_function_msgs__msg__MachRemind__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__FUNCTIONS_H_
