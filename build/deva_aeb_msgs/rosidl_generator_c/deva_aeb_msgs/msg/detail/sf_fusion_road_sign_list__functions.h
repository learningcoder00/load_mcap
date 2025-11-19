// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_aeb_msgs:msg/SFFusionRoadSignList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__FUNCTIONS_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_aeb_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__struct.h"

/// Initialize msg/SFFusionRoadSignList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_aeb_msgs__msg__SFFusionRoadSignList
 * )) before or use
 * deva_aeb_msgs__msg__SFFusionRoadSignList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFFusionRoadSignList__init(deva_aeb_msgs__msg__SFFusionRoadSignList * msg);

/// Finalize msg/SFFusionRoadSignList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
void
deva_aeb_msgs__msg__SFFusionRoadSignList__fini(deva_aeb_msgs__msg__SFFusionRoadSignList * msg);

/// Create msg/SFFusionRoadSignList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_aeb_msgs__msg__SFFusionRoadSignList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
deva_aeb_msgs__msg__SFFusionRoadSignList *
deva_aeb_msgs__msg__SFFusionRoadSignList__create();

/// Destroy msg/SFFusionRoadSignList message.
/**
 * It calls
 * deva_aeb_msgs__msg__SFFusionRoadSignList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
void
deva_aeb_msgs__msg__SFFusionRoadSignList__destroy(deva_aeb_msgs__msg__SFFusionRoadSignList * msg);

/// Check for msg/SFFusionRoadSignList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFFusionRoadSignList__are_equal(const deva_aeb_msgs__msg__SFFusionRoadSignList * lhs, const deva_aeb_msgs__msg__SFFusionRoadSignList * rhs);

/// Copy a msg/SFFusionRoadSignList message.
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
deva_aeb_msgs__msg__SFFusionRoadSignList__copy(
  const deva_aeb_msgs__msg__SFFusionRoadSignList * input,
  deva_aeb_msgs__msg__SFFusionRoadSignList * output);

/// Initialize array of msg/SFFusionRoadSignList messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_aeb_msgs__msg__SFFusionRoadSignList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__init(deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * array, size_t size);

/// Finalize array of msg/SFFusionRoadSignList messages.
/**
 * It calls
 * deva_aeb_msgs__msg__SFFusionRoadSignList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
void
deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__fini(deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * array);

/// Create array of msg/SFFusionRoadSignList messages.
/**
 * It allocates the memory for the array and calls
 * deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence *
deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__create(size_t size);

/// Destroy array of msg/SFFusionRoadSignList messages.
/**
 * It calls
 * deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
void
deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__destroy(deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * array);

/// Check for msg/SFFusionRoadSignList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__are_equal(const deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * lhs, const deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * rhs);

/// Copy an array of msg/SFFusionRoadSignList messages.
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
deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__copy(
  const deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * input,
  deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__FUNCTIONS_H_
