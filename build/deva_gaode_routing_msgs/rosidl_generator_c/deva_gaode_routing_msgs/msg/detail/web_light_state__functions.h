// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_gaode_routing_msgs:msg/WebLightState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_STATE__FUNCTIONS_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_gaode_routing_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_gaode_routing_msgs/msg/detail/web_light_state__struct.h"

/// Initialize msg/WebLightState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_gaode_routing_msgs__msg__WebLightState
 * )) before or use
 * deva_gaode_routing_msgs__msg__WebLightState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__WebLightState__init(deva_gaode_routing_msgs__msg__WebLightState * msg);

/// Finalize msg/WebLightState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__WebLightState__fini(deva_gaode_routing_msgs__msg__WebLightState * msg);

/// Create msg/WebLightState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_gaode_routing_msgs__msg__WebLightState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
deva_gaode_routing_msgs__msg__WebLightState *
deva_gaode_routing_msgs__msg__WebLightState__create();

/// Destroy msg/WebLightState message.
/**
 * It calls
 * deva_gaode_routing_msgs__msg__WebLightState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__WebLightState__destroy(deva_gaode_routing_msgs__msg__WebLightState * msg);

/// Check for msg/WebLightState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__WebLightState__are_equal(const deva_gaode_routing_msgs__msg__WebLightState * lhs, const deva_gaode_routing_msgs__msg__WebLightState * rhs);

/// Copy a msg/WebLightState message.
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
deva_gaode_routing_msgs__msg__WebLightState__copy(
  const deva_gaode_routing_msgs__msg__WebLightState * input,
  deva_gaode_routing_msgs__msg__WebLightState * output);

/// Initialize array of msg/WebLightState messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_gaode_routing_msgs__msg__WebLightState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__WebLightState__Sequence__init(deva_gaode_routing_msgs__msg__WebLightState__Sequence * array, size_t size);

/// Finalize array of msg/WebLightState messages.
/**
 * It calls
 * deva_gaode_routing_msgs__msg__WebLightState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__WebLightState__Sequence__fini(deva_gaode_routing_msgs__msg__WebLightState__Sequence * array);

/// Create array of msg/WebLightState messages.
/**
 * It allocates the memory for the array and calls
 * deva_gaode_routing_msgs__msg__WebLightState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
deva_gaode_routing_msgs__msg__WebLightState__Sequence *
deva_gaode_routing_msgs__msg__WebLightState__Sequence__create(size_t size);

/// Destroy array of msg/WebLightState messages.
/**
 * It calls
 * deva_gaode_routing_msgs__msg__WebLightState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__WebLightState__Sequence__destroy(deva_gaode_routing_msgs__msg__WebLightState__Sequence * array);

/// Check for msg/WebLightState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__WebLightState__Sequence__are_equal(const deva_gaode_routing_msgs__msg__WebLightState__Sequence * lhs, const deva_gaode_routing_msgs__msg__WebLightState__Sequence * rhs);

/// Copy an array of msg/WebLightState messages.
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
deva_gaode_routing_msgs__msg__WebLightState__Sequence__copy(
  const deva_gaode_routing_msgs__msg__WebLightState__Sequence * input,
  deva_gaode_routing_msgs__msg__WebLightState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_STATE__FUNCTIONS_H_
