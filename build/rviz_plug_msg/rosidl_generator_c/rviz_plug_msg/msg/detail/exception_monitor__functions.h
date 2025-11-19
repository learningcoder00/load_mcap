// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rviz_plug_msg:msg/ExceptionMonitor.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__FUNCTIONS_H_
#define RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rviz_plug_msg/msg/rosidl_generator_c__visibility_control.h"

#include "rviz_plug_msg/msg/detail/exception_monitor__struct.h"

/// Initialize msg/ExceptionMonitor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rviz_plug_msg__msg__ExceptionMonitor
 * )) before or use
 * rviz_plug_msg__msg__ExceptionMonitor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__ExceptionMonitor__init(rviz_plug_msg__msg__ExceptionMonitor * msg);

/// Finalize msg/ExceptionMonitor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
void
rviz_plug_msg__msg__ExceptionMonitor__fini(rviz_plug_msg__msg__ExceptionMonitor * msg);

/// Create msg/ExceptionMonitor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rviz_plug_msg__msg__ExceptionMonitor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
rviz_plug_msg__msg__ExceptionMonitor *
rviz_plug_msg__msg__ExceptionMonitor__create();

/// Destroy msg/ExceptionMonitor message.
/**
 * It calls
 * rviz_plug_msg__msg__ExceptionMonitor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
void
rviz_plug_msg__msg__ExceptionMonitor__destroy(rviz_plug_msg__msg__ExceptionMonitor * msg);

/// Check for msg/ExceptionMonitor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__ExceptionMonitor__are_equal(const rviz_plug_msg__msg__ExceptionMonitor * lhs, const rviz_plug_msg__msg__ExceptionMonitor * rhs);

/// Copy a msg/ExceptionMonitor message.
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
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__ExceptionMonitor__copy(
  const rviz_plug_msg__msg__ExceptionMonitor * input,
  rviz_plug_msg__msg__ExceptionMonitor * output);

/// Initialize array of msg/ExceptionMonitor messages.
/**
 * It allocates the memory for the number of elements and calls
 * rviz_plug_msg__msg__ExceptionMonitor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__ExceptionMonitor__Sequence__init(rviz_plug_msg__msg__ExceptionMonitor__Sequence * array, size_t size);

/// Finalize array of msg/ExceptionMonitor messages.
/**
 * It calls
 * rviz_plug_msg__msg__ExceptionMonitor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
void
rviz_plug_msg__msg__ExceptionMonitor__Sequence__fini(rviz_plug_msg__msg__ExceptionMonitor__Sequence * array);

/// Create array of msg/ExceptionMonitor messages.
/**
 * It allocates the memory for the array and calls
 * rviz_plug_msg__msg__ExceptionMonitor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
rviz_plug_msg__msg__ExceptionMonitor__Sequence *
rviz_plug_msg__msg__ExceptionMonitor__Sequence__create(size_t size);

/// Destroy array of msg/ExceptionMonitor messages.
/**
 * It calls
 * rviz_plug_msg__msg__ExceptionMonitor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
void
rviz_plug_msg__msg__ExceptionMonitor__Sequence__destroy(rviz_plug_msg__msg__ExceptionMonitor__Sequence * array);

/// Check for msg/ExceptionMonitor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__ExceptionMonitor__Sequence__are_equal(const rviz_plug_msg__msg__ExceptionMonitor__Sequence * lhs, const rviz_plug_msg__msg__ExceptionMonitor__Sequence * rhs);

/// Copy an array of msg/ExceptionMonitor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__ExceptionMonitor__Sequence__copy(
  const rviz_plug_msg__msg__ExceptionMonitor__Sequence * input,
  rviz_plug_msg__msg__ExceptionMonitor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__FUNCTIONS_H_
