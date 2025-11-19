// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_aeb_msgs:msg/SFRoadArrow.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__FUNCTIONS_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_aeb_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_aeb_msgs/msg/detail/sf_road_arrow__struct.h"

/// Initialize msg/SFRoadArrow message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_aeb_msgs__msg__SFRoadArrow
 * )) before or use
 * deva_aeb_msgs__msg__SFRoadArrow__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFRoadArrow__init(deva_aeb_msgs__msg__SFRoadArrow * msg);

/// Finalize msg/SFRoadArrow message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
void
deva_aeb_msgs__msg__SFRoadArrow__fini(deva_aeb_msgs__msg__SFRoadArrow * msg);

/// Create msg/SFRoadArrow message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_aeb_msgs__msg__SFRoadArrow__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
deva_aeb_msgs__msg__SFRoadArrow *
deva_aeb_msgs__msg__SFRoadArrow__create();

/// Destroy msg/SFRoadArrow message.
/**
 * It calls
 * deva_aeb_msgs__msg__SFRoadArrow__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
void
deva_aeb_msgs__msg__SFRoadArrow__destroy(deva_aeb_msgs__msg__SFRoadArrow * msg);

/// Check for msg/SFRoadArrow message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFRoadArrow__are_equal(const deva_aeb_msgs__msg__SFRoadArrow * lhs, const deva_aeb_msgs__msg__SFRoadArrow * rhs);

/// Copy a msg/SFRoadArrow message.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFRoadArrow__copy(
  const deva_aeb_msgs__msg__SFRoadArrow * input,
  deva_aeb_msgs__msg__SFRoadArrow * output);

/// Initialize array of msg/SFRoadArrow messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_aeb_msgs__msg__SFRoadArrow__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFRoadArrow__Sequence__init(deva_aeb_msgs__msg__SFRoadArrow__Sequence * array, size_t size);

/// Finalize array of msg/SFRoadArrow messages.
/**
 * It calls
 * deva_aeb_msgs__msg__SFRoadArrow__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
void
deva_aeb_msgs__msg__SFRoadArrow__Sequence__fini(deva_aeb_msgs__msg__SFRoadArrow__Sequence * array);

/// Create array of msg/SFRoadArrow messages.
/**
 * It allocates the memory for the array and calls
 * deva_aeb_msgs__msg__SFRoadArrow__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
deva_aeb_msgs__msg__SFRoadArrow__Sequence *
deva_aeb_msgs__msg__SFRoadArrow__Sequence__create(size_t size);

/// Destroy array of msg/SFRoadArrow messages.
/**
 * It calls
 * deva_aeb_msgs__msg__SFRoadArrow__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
void
deva_aeb_msgs__msg__SFRoadArrow__Sequence__destroy(deva_aeb_msgs__msg__SFRoadArrow__Sequence * array);

/// Check for msg/SFRoadArrow message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFRoadArrow__Sequence__are_equal(const deva_aeb_msgs__msg__SFRoadArrow__Sequence * lhs, const deva_aeb_msgs__msg__SFRoadArrow__Sequence * rhs);

/// Copy an array of msg/SFRoadArrow messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFRoadArrow__Sequence__copy(
  const deva_aeb_msgs__msg__SFRoadArrow__Sequence * input,
  deva_aeb_msgs__msg__SFRoadArrow__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__FUNCTIONS_H_
