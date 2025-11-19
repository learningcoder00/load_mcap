// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_gaode_routing_msgs:msg/J6mLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__FUNCTIONS_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_gaode_routing_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_gaode_routing_msgs/msg/detail/j6m_link__struct.h"

/// Initialize msg/J6mLink message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_gaode_routing_msgs__msg__J6mLink
 * )) before or use
 * deva_gaode_routing_msgs__msg__J6mLink__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__J6mLink__init(deva_gaode_routing_msgs__msg__J6mLink * msg);

/// Finalize msg/J6mLink message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__J6mLink__fini(deva_gaode_routing_msgs__msg__J6mLink * msg);

/// Create msg/J6mLink message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_gaode_routing_msgs__msg__J6mLink__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
deva_gaode_routing_msgs__msg__J6mLink *
deva_gaode_routing_msgs__msg__J6mLink__create();

/// Destroy msg/J6mLink message.
/**
 * It calls
 * deva_gaode_routing_msgs__msg__J6mLink__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__J6mLink__destroy(deva_gaode_routing_msgs__msg__J6mLink * msg);

/// Check for msg/J6mLink message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__J6mLink__are_equal(const deva_gaode_routing_msgs__msg__J6mLink * lhs, const deva_gaode_routing_msgs__msg__J6mLink * rhs);

/// Copy a msg/J6mLink message.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__J6mLink__copy(
  const deva_gaode_routing_msgs__msg__J6mLink * input,
  deva_gaode_routing_msgs__msg__J6mLink * output);

/// Initialize array of msg/J6mLink messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_gaode_routing_msgs__msg__J6mLink__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__J6mLink__Sequence__init(deva_gaode_routing_msgs__msg__J6mLink__Sequence * array, size_t size);

/// Finalize array of msg/J6mLink messages.
/**
 * It calls
 * deva_gaode_routing_msgs__msg__J6mLink__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__J6mLink__Sequence__fini(deva_gaode_routing_msgs__msg__J6mLink__Sequence * array);

/// Create array of msg/J6mLink messages.
/**
 * It allocates the memory for the array and calls
 * deva_gaode_routing_msgs__msg__J6mLink__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
deva_gaode_routing_msgs__msg__J6mLink__Sequence *
deva_gaode_routing_msgs__msg__J6mLink__Sequence__create(size_t size);

/// Destroy array of msg/J6mLink messages.
/**
 * It calls
 * deva_gaode_routing_msgs__msg__J6mLink__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__J6mLink__Sequence__destroy(deva_gaode_routing_msgs__msg__J6mLink__Sequence * array);

/// Check for msg/J6mLink message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__J6mLink__Sequence__are_equal(const deva_gaode_routing_msgs__msg__J6mLink__Sequence * lhs, const deva_gaode_routing_msgs__msg__J6mLink__Sequence * rhs);

/// Copy an array of msg/J6mLink messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__J6mLink__Sequence__copy(
  const deva_gaode_routing_msgs__msg__J6mLink__Sequence * input,
  deva_gaode_routing_msgs__msg__J6mLink__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__FUNCTIONS_H_
