// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rviz_plug_msg:msg/Freq.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__FREQ__FUNCTIONS_H_
#define RVIZ_PLUG_MSG__MSG__DETAIL__FREQ__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rviz_plug_msg/msg/rosidl_generator_c__visibility_control.h"

#include "rviz_plug_msg/msg/detail/freq__struct.h"

/// Initialize msg/Freq message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rviz_plug_msg__msg__Freq
 * )) before or use
 * rviz_plug_msg__msg__Freq__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__Freq__init(rviz_plug_msg__msg__Freq * msg);

/// Finalize msg/Freq message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
void
rviz_plug_msg__msg__Freq__fini(rviz_plug_msg__msg__Freq * msg);

/// Create msg/Freq message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rviz_plug_msg__msg__Freq__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
rviz_plug_msg__msg__Freq *
rviz_plug_msg__msg__Freq__create();

/// Destroy msg/Freq message.
/**
 * It calls
 * rviz_plug_msg__msg__Freq__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
void
rviz_plug_msg__msg__Freq__destroy(rviz_plug_msg__msg__Freq * msg);

/// Check for msg/Freq message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__Freq__are_equal(const rviz_plug_msg__msg__Freq * lhs, const rviz_plug_msg__msg__Freq * rhs);

/// Copy a msg/Freq message.
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
rviz_plug_msg__msg__Freq__copy(
  const rviz_plug_msg__msg__Freq * input,
  rviz_plug_msg__msg__Freq * output);

/// Initialize array of msg/Freq messages.
/**
 * It allocates the memory for the number of elements and calls
 * rviz_plug_msg__msg__Freq__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__Freq__Sequence__init(rviz_plug_msg__msg__Freq__Sequence * array, size_t size);

/// Finalize array of msg/Freq messages.
/**
 * It calls
 * rviz_plug_msg__msg__Freq__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
void
rviz_plug_msg__msg__Freq__Sequence__fini(rviz_plug_msg__msg__Freq__Sequence * array);

/// Create array of msg/Freq messages.
/**
 * It allocates the memory for the array and calls
 * rviz_plug_msg__msg__Freq__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
rviz_plug_msg__msg__Freq__Sequence *
rviz_plug_msg__msg__Freq__Sequence__create(size_t size);

/// Destroy array of msg/Freq messages.
/**
 * It calls
 * rviz_plug_msg__msg__Freq__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
void
rviz_plug_msg__msg__Freq__Sequence__destroy(rviz_plug_msg__msg__Freq__Sequence * array);

/// Check for msg/Freq message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_plug_msg
bool
rviz_plug_msg__msg__Freq__Sequence__are_equal(const rviz_plug_msg__msg__Freq__Sequence * lhs, const rviz_plug_msg__msg__Freq__Sequence * rhs);

/// Copy an array of msg/Freq messages.
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
rviz_plug_msg__msg__Freq__Sequence__copy(
  const rviz_plug_msg__msg__Freq__Sequence * input,
  rviz_plug_msg__msg__Freq__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__FREQ__FUNCTIONS_H_
