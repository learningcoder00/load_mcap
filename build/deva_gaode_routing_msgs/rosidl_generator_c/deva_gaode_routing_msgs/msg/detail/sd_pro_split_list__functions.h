// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_gaode_routing_msgs:msg/SdProSplitList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__FUNCTIONS_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_gaode_routing_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_split_list__struct.h"

/// Initialize msg/SdProSplitList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_gaode_routing_msgs__msg__SdProSplitList
 * )) before or use
 * deva_gaode_routing_msgs__msg__SdProSplitList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__SdProSplitList__init(deva_gaode_routing_msgs__msg__SdProSplitList * msg);

/// Finalize msg/SdProSplitList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__SdProSplitList__fini(deva_gaode_routing_msgs__msg__SdProSplitList * msg);

/// Create msg/SdProSplitList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_gaode_routing_msgs__msg__SdProSplitList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
deva_gaode_routing_msgs__msg__SdProSplitList *
deva_gaode_routing_msgs__msg__SdProSplitList__create();

/// Destroy msg/SdProSplitList message.
/**
 * It calls
 * deva_gaode_routing_msgs__msg__SdProSplitList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__SdProSplitList__destroy(deva_gaode_routing_msgs__msg__SdProSplitList * msg);

/// Check for msg/SdProSplitList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__SdProSplitList__are_equal(const deva_gaode_routing_msgs__msg__SdProSplitList * lhs, const deva_gaode_routing_msgs__msg__SdProSplitList * rhs);

/// Copy a msg/SdProSplitList message.
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
deva_gaode_routing_msgs__msg__SdProSplitList__copy(
  const deva_gaode_routing_msgs__msg__SdProSplitList * input,
  deva_gaode_routing_msgs__msg__SdProSplitList * output);

/// Initialize array of msg/SdProSplitList messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_gaode_routing_msgs__msg__SdProSplitList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__SdProSplitList__Sequence__init(deva_gaode_routing_msgs__msg__SdProSplitList__Sequence * array, size_t size);

/// Finalize array of msg/SdProSplitList messages.
/**
 * It calls
 * deva_gaode_routing_msgs__msg__SdProSplitList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__SdProSplitList__Sequence__fini(deva_gaode_routing_msgs__msg__SdProSplitList__Sequence * array);

/// Create array of msg/SdProSplitList messages.
/**
 * It allocates the memory for the array and calls
 * deva_gaode_routing_msgs__msg__SdProSplitList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
deva_gaode_routing_msgs__msg__SdProSplitList__Sequence *
deva_gaode_routing_msgs__msg__SdProSplitList__Sequence__create(size_t size);

/// Destroy array of msg/SdProSplitList messages.
/**
 * It calls
 * deva_gaode_routing_msgs__msg__SdProSplitList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
void
deva_gaode_routing_msgs__msg__SdProSplitList__Sequence__destroy(deva_gaode_routing_msgs__msg__SdProSplitList__Sequence * array);

/// Check for msg/SdProSplitList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_gaode_routing_msgs
bool
deva_gaode_routing_msgs__msg__SdProSplitList__Sequence__are_equal(const deva_gaode_routing_msgs__msg__SdProSplitList__Sequence * lhs, const deva_gaode_routing_msgs__msg__SdProSplitList__Sequence * rhs);

/// Copy an array of msg/SdProSplitList messages.
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
deva_gaode_routing_msgs__msg__SdProSplitList__Sequence__copy(
  const deva_gaode_routing_msgs__msg__SdProSplitList__Sequence * input,
  deva_gaode_routing_msgs__msg__SdProSplitList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__FUNCTIONS_H_
