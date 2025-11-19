// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_gaode_routing_msgs:msg/SdProMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__FUNCTIONS_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_gaode_routing_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_map__struct.h"

/// Initialize msg/SdProMap message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_gaode_routing_msgs__msg__SdProMap
 * )) before or use
 * deva_gaode_routing_msgs__msg__SdProMap__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__SdProMap__init(deva_gaode_routing_msgs__msg__SdProMap * msg);

/// Finalize msg/SdProMap message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__SdProMap__fini(deva_gaode_routing_msgs__msg__SdProMap * msg);

/// Create msg/SdProMap message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_gaode_routing_msgs__msg__SdProMap__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
deva_gaode_routing_msgs__msg__SdProMap *
deva_gaode_routing_msgs__msg__SdProMap__create();

/// Destroy msg/SdProMap message.
/**
 * It calls
 * deva_gaode_routing_msgs__msg__SdProMap__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__SdProMap__destroy(deva_gaode_routing_msgs__msg__SdProMap * msg);

/// Check for msg/SdProMap message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__SdProMap__are_equal(const deva_gaode_routing_msgs__msg__SdProMap * lhs, const deva_gaode_routing_msgs__msg__SdProMap * rhs);

/// Copy a msg/SdProMap message.
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
deva_gaode_routing_msgs__msg__SdProMap__copy(
  const deva_gaode_routing_msgs__msg__SdProMap * input,
  deva_gaode_routing_msgs__msg__SdProMap * output);

/// Initialize array of msg/SdProMap messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_gaode_routing_msgs__msg__SdProMap__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__SdProMap__Sequence__init(deva_gaode_routing_msgs__msg__SdProMap__Sequence * array, size_t size);

/// Finalize array of msg/SdProMap messages.
/**
 * It calls
 * deva_gaode_routing_msgs__msg__SdProMap__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__SdProMap__Sequence__fini(deva_gaode_routing_msgs__msg__SdProMap__Sequence * array);

/// Create array of msg/SdProMap messages.
/**
 * It allocates the memory for the array and calls
 * deva_gaode_routing_msgs__msg__SdProMap__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
deva_gaode_routing_msgs__msg__SdProMap__Sequence *
deva_gaode_routing_msgs__msg__SdProMap__Sequence__create(size_t size);

/// Destroy array of msg/SdProMap messages.
/**
 * It calls
 * deva_gaode_routing_msgs__msg__SdProMap__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__SdProMap__Sequence__destroy(deva_gaode_routing_msgs__msg__SdProMap__Sequence * array);

/// Check for msg/SdProMap message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__SdProMap__Sequence__are_equal(const deva_gaode_routing_msgs__msg__SdProMap__Sequence * lhs, const deva_gaode_routing_msgs__msg__SdProMap__Sequence * rhs);

/// Copy an array of msg/SdProMap messages.
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
deva_gaode_routing_msgs__msg__SdProMap__Sequence__copy(
  const deva_gaode_routing_msgs__msg__SdProMap__Sequence * input,
  deva_gaode_routing_msgs__msg__SdProMap__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__FUNCTIONS_H_
