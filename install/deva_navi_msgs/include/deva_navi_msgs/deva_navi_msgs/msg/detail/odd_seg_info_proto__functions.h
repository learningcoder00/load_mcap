// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_navi_msgs:msg/OddSegInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__FUNCTIONS_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_navi_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_navi_msgs/msg/detail/odd_seg_info_proto__struct.h"

/// Initialize msg/OddSegInfoProto message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_navi_msgs__msg__OddSegInfoProto
 * )) before or use
 * deva_navi_msgs__msg__OddSegInfoProto__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__OddSegInfoProto__init(deva_navi_msgs__msg__OddSegInfoProto * msg);

/// Finalize msg/OddSegInfoProto message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
void
deva_navi_msgs__msg__OddSegInfoProto__fini(deva_navi_msgs__msg__OddSegInfoProto * msg);

/// Create msg/OddSegInfoProto message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_navi_msgs__msg__OddSegInfoProto__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
deva_navi_msgs__msg__OddSegInfoProto *
deva_navi_msgs__msg__OddSegInfoProto__create();

/// Destroy msg/OddSegInfoProto message.
/**
 * It calls
 * deva_navi_msgs__msg__OddSegInfoProto__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
void
deva_navi_msgs__msg__OddSegInfoProto__destroy(deva_navi_msgs__msg__OddSegInfoProto * msg);

/// Check for msg/OddSegInfoProto message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__OddSegInfoProto__are_equal(const deva_navi_msgs__msg__OddSegInfoProto * lhs, const deva_navi_msgs__msg__OddSegInfoProto * rhs);

/// Copy a msg/OddSegInfoProto message.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__OddSegInfoProto__copy(
  const deva_navi_msgs__msg__OddSegInfoProto * input,
  deva_navi_msgs__msg__OddSegInfoProto * output);

/// Initialize array of msg/OddSegInfoProto messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_navi_msgs__msg__OddSegInfoProto__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__OddSegInfoProto__Sequence__init(deva_navi_msgs__msg__OddSegInfoProto__Sequence * array, size_t size);

/// Finalize array of msg/OddSegInfoProto messages.
/**
 * It calls
 * deva_navi_msgs__msg__OddSegInfoProto__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
void
deva_navi_msgs__msg__OddSegInfoProto__Sequence__fini(deva_navi_msgs__msg__OddSegInfoProto__Sequence * array);

/// Create array of msg/OddSegInfoProto messages.
/**
 * It allocates the memory for the array and calls
 * deva_navi_msgs__msg__OddSegInfoProto__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
deva_navi_msgs__msg__OddSegInfoProto__Sequence *
deva_navi_msgs__msg__OddSegInfoProto__Sequence__create(size_t size);

/// Destroy array of msg/OddSegInfoProto messages.
/**
 * It calls
 * deva_navi_msgs__msg__OddSegInfoProto__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
void
deva_navi_msgs__msg__OddSegInfoProto__Sequence__destroy(deva_navi_msgs__msg__OddSegInfoProto__Sequence * array);

/// Check for msg/OddSegInfoProto message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__OddSegInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__OddSegInfoProto__Sequence * lhs, const deva_navi_msgs__msg__OddSegInfoProto__Sequence * rhs);

/// Copy an array of msg/OddSegInfoProto messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__OddSegInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__OddSegInfoProto__Sequence * input,
  deva_navi_msgs__msg__OddSegInfoProto__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__FUNCTIONS_H_
