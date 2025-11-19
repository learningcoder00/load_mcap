// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_navi_msgs:msg/ViaPointInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__FUNCTIONS_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_navi_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_navi_msgs/msg/detail/via_point_info_proto__struct.h"

/// Initialize msg/ViaPointInfoProto message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_navi_msgs__msg__ViaPointInfoProto
 * )) before or use
 * deva_navi_msgs__msg__ViaPointInfoProto__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__ViaPointInfoProto__init(deva_navi_msgs__msg__ViaPointInfoProto * msg);

/// Finalize msg/ViaPointInfoProto message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
void
deva_navi_msgs__msg__ViaPointInfoProto__fini(deva_navi_msgs__msg__ViaPointInfoProto * msg);

/// Create msg/ViaPointInfoProto message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_navi_msgs__msg__ViaPointInfoProto__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
deva_navi_msgs__msg__ViaPointInfoProto *
deva_navi_msgs__msg__ViaPointInfoProto__create();

/// Destroy msg/ViaPointInfoProto message.
/**
 * It calls
 * deva_navi_msgs__msg__ViaPointInfoProto__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
void
deva_navi_msgs__msg__ViaPointInfoProto__destroy(deva_navi_msgs__msg__ViaPointInfoProto * msg);

/// Check for msg/ViaPointInfoProto message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__ViaPointInfoProto__are_equal(const deva_navi_msgs__msg__ViaPointInfoProto * lhs, const deva_navi_msgs__msg__ViaPointInfoProto * rhs);

/// Copy a msg/ViaPointInfoProto message.
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
deva_navi_msgs__msg__ViaPointInfoProto__copy(
  const deva_navi_msgs__msg__ViaPointInfoProto * input,
  deva_navi_msgs__msg__ViaPointInfoProto * output);

/// Initialize array of msg/ViaPointInfoProto messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_navi_msgs__msg__ViaPointInfoProto__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__ViaPointInfoProto__Sequence__init(deva_navi_msgs__msg__ViaPointInfoProto__Sequence * array, size_t size);

/// Finalize array of msg/ViaPointInfoProto messages.
/**
 * It calls
 * deva_navi_msgs__msg__ViaPointInfoProto__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
void
deva_navi_msgs__msg__ViaPointInfoProto__Sequence__fini(deva_navi_msgs__msg__ViaPointInfoProto__Sequence * array);

/// Create array of msg/ViaPointInfoProto messages.
/**
 * It allocates the memory for the array and calls
 * deva_navi_msgs__msg__ViaPointInfoProto__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
deva_navi_msgs__msg__ViaPointInfoProto__Sequence *
deva_navi_msgs__msg__ViaPointInfoProto__Sequence__create(size_t size);

/// Destroy array of msg/ViaPointInfoProto messages.
/**
 * It calls
 * deva_navi_msgs__msg__ViaPointInfoProto__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
void
deva_navi_msgs__msg__ViaPointInfoProto__Sequence__destroy(deva_navi_msgs__msg__ViaPointInfoProto__Sequence * array);

/// Check for msg/ViaPointInfoProto message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__ViaPointInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__ViaPointInfoProto__Sequence * lhs, const deva_navi_msgs__msg__ViaPointInfoProto__Sequence * rhs);

/// Copy an array of msg/ViaPointInfoProto messages.
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
deva_navi_msgs__msg__ViaPointInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__ViaPointInfoProto__Sequence * input,
  deva_navi_msgs__msg__ViaPointInfoProto__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__FUNCTIONS_H_
