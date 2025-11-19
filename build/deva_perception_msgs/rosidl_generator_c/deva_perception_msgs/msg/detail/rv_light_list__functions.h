// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_perception_msgs:msg/RVLightList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT_LIST__FUNCTIONS_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_perception_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_perception_msgs/msg/detail/rv_light_list__struct.h"

/// Initialize msg/RVLightList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_perception_msgs__msg__RVLightList
 * )) before or use
 * deva_perception_msgs__msg__RVLightList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
bool
deva_perception_msgs__msg__RVLightList__init(deva_perception_msgs__msg__RVLightList * msg);

/// Finalize msg/RVLightList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
void
deva_perception_msgs__msg__RVLightList__fini(deva_perception_msgs__msg__RVLightList * msg);

/// Create msg/RVLightList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_perception_msgs__msg__RVLightList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
deva_perception_msgs__msg__RVLightList *
deva_perception_msgs__msg__RVLightList__create();

/// Destroy msg/RVLightList message.
/**
 * It calls
 * deva_perception_msgs__msg__RVLightList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
void
deva_perception_msgs__msg__RVLightList__destroy(deva_perception_msgs__msg__RVLightList * msg);

/// Check for msg/RVLightList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
bool
deva_perception_msgs__msg__RVLightList__are_equal(const deva_perception_msgs__msg__RVLightList * lhs, const deva_perception_msgs__msg__RVLightList * rhs);

/// Copy a msg/RVLightList message.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
bool
deva_perception_msgs__msg__RVLightList__copy(
  const deva_perception_msgs__msg__RVLightList * input,
  deva_perception_msgs__msg__RVLightList * output);

/// Initialize array of msg/RVLightList messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_perception_msgs__msg__RVLightList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
bool
deva_perception_msgs__msg__RVLightList__Sequence__init(deva_perception_msgs__msg__RVLightList__Sequence * array, size_t size);

/// Finalize array of msg/RVLightList messages.
/**
 * It calls
 * deva_perception_msgs__msg__RVLightList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
void
deva_perception_msgs__msg__RVLightList__Sequence__fini(deva_perception_msgs__msg__RVLightList__Sequence * array);

/// Create array of msg/RVLightList messages.
/**
 * It allocates the memory for the array and calls
 * deva_perception_msgs__msg__RVLightList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
deva_perception_msgs__msg__RVLightList__Sequence *
deva_perception_msgs__msg__RVLightList__Sequence__create(size_t size);

/// Destroy array of msg/RVLightList messages.
/**
 * It calls
 * deva_perception_msgs__msg__RVLightList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
void
deva_perception_msgs__msg__RVLightList__Sequence__destroy(deva_perception_msgs__msg__RVLightList__Sequence * array);

/// Check for msg/RVLightList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
bool
deva_perception_msgs__msg__RVLightList__Sequence__are_equal(const deva_perception_msgs__msg__RVLightList__Sequence * lhs, const deva_perception_msgs__msg__RVLightList__Sequence * rhs);

/// Copy an array of msg/RVLightList messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
bool
deva_perception_msgs__msg__RVLightList__Sequence__copy(
  const deva_perception_msgs__msg__RVLightList__Sequence * input,
  deva_perception_msgs__msg__RVLightList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT_LIST__FUNCTIONS_H_
