// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rviz_plug_msg:msg/FreqMonitor.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__FUNCTIONS_H_
#define RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rviz_plug_msg/msg/rosidl_generator_c__visibility_control.h"

#include "rviz_plug_msg/msg/detail/freq_monitor__struct.h"

/// Initialize msg/FreqMonitor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rviz_plug_msg__msg__FreqMonitor
 * )) before or use
 * rviz_plug_msg__msg__FreqMonitor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__FreqMonitor__init(rviz_plug_msg__msg__FreqMonitor * msg);

/// Finalize msg/FreqMonitor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
void
rviz_plug_msg__msg__FreqMonitor__fini(rviz_plug_msg__msg__FreqMonitor * msg);

/// Create msg/FreqMonitor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rviz_plug_msg__msg__FreqMonitor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
rviz_plug_msg__msg__FreqMonitor *
rviz_plug_msg__msg__FreqMonitor__create();

/// Destroy msg/FreqMonitor message.
/**
 * It calls
 * rviz_plug_msg__msg__FreqMonitor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
void
rviz_plug_msg__msg__FreqMonitor__destroy(rviz_plug_msg__msg__FreqMonitor * msg);

/// Check for msg/FreqMonitor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__FreqMonitor__are_equal(const rviz_plug_msg__msg__FreqMonitor * lhs, const rviz_plug_msg__msg__FreqMonitor * rhs);

/// Copy a msg/FreqMonitor message.
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
rviz_plug_msg__msg__FreqMonitor__copy(
  const rviz_plug_msg__msg__FreqMonitor * input,
  rviz_plug_msg__msg__FreqMonitor * output);

/// Initialize array of msg/FreqMonitor messages.
/**
 * It allocates the memory for the number of elements and calls
 * rviz_plug_msg__msg__FreqMonitor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__FreqMonitor__Sequence__init(rviz_plug_msg__msg__FreqMonitor__Sequence * array, size_t size);

/// Finalize array of msg/FreqMonitor messages.
/**
 * It calls
 * rviz_plug_msg__msg__FreqMonitor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
void
rviz_plug_msg__msg__FreqMonitor__Sequence__fini(rviz_plug_msg__msg__FreqMonitor__Sequence * array);

/// Create array of msg/FreqMonitor messages.
/**
 * It allocates the memory for the array and calls
 * rviz_plug_msg__msg__FreqMonitor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
rviz_plug_msg__msg__FreqMonitor__Sequence *
rviz_plug_msg__msg__FreqMonitor__Sequence__create(size_t size);

/// Destroy array of msg/FreqMonitor messages.
/**
 * It calls
 * rviz_plug_msg__msg__FreqMonitor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
void
rviz_plug_msg__msg__FreqMonitor__Sequence__destroy(rviz_plug_msg__msg__FreqMonitor__Sequence * array);

/// Check for msg/FreqMonitor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__FreqMonitor__Sequence__are_equal(const rviz_plug_msg__msg__FreqMonitor__Sequence * lhs, const rviz_plug_msg__msg__FreqMonitor__Sequence * rhs);

/// Copy an array of msg/FreqMonitor messages.
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
rviz_plug_msg__msg__FreqMonitor__Sequence__copy(
  const rviz_plug_msg__msg__FreqMonitor__Sequence * input,
  rviz_plug_msg__msg__FreqMonitor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__FUNCTIONS_H_
