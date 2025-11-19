// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_ads_msgs:msg/AdsMarkerArrayVec.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__FUNCTIONS_H_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_ads_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_ads_msgs/msg/detail/ads_marker_array_vec__struct.h"

/// Initialize msg/AdsMarkerArrayVec message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_ads_msgs__msg__AdsMarkerArrayVec
 * )) before or use
 * deva_ads_msgs__msg__AdsMarkerArrayVec__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
bool
deva_ads_msgs__msg__AdsMarkerArrayVec__init(deva_ads_msgs__msg__AdsMarkerArrayVec * msg);

/// Finalize msg/AdsMarkerArrayVec message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
void
deva_ads_msgs__msg__AdsMarkerArrayVec__fini(deva_ads_msgs__msg__AdsMarkerArrayVec * msg);

/// Create msg/AdsMarkerArrayVec message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_ads_msgs__msg__AdsMarkerArrayVec__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
deva_ads_msgs__msg__AdsMarkerArrayVec *
deva_ads_msgs__msg__AdsMarkerArrayVec__create();

/// Destroy msg/AdsMarkerArrayVec message.
/**
 * It calls
 * deva_ads_msgs__msg__AdsMarkerArrayVec__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
void
deva_ads_msgs__msg__AdsMarkerArrayVec__destroy(deva_ads_msgs__msg__AdsMarkerArrayVec * msg);

/// Check for msg/AdsMarkerArrayVec message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
bool
deva_ads_msgs__msg__AdsMarkerArrayVec__are_equal(const deva_ads_msgs__msg__AdsMarkerArrayVec * lhs, const deva_ads_msgs__msg__AdsMarkerArrayVec * rhs);

/// Copy a msg/AdsMarkerArrayVec message.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
bool
deva_ads_msgs__msg__AdsMarkerArrayVec__copy(
  const deva_ads_msgs__msg__AdsMarkerArrayVec * input,
  deva_ads_msgs__msg__AdsMarkerArrayVec * output);

/// Initialize array of msg/AdsMarkerArrayVec messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_ads_msgs__msg__AdsMarkerArrayVec__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
bool
deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__init(deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * array, size_t size);

/// Finalize array of msg/AdsMarkerArrayVec messages.
/**
 * It calls
 * deva_ads_msgs__msg__AdsMarkerArrayVec__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
void
deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__fini(deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * array);

/// Create array of msg/AdsMarkerArrayVec messages.
/**
 * It allocates the memory for the array and calls
 * deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence *
deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__create(size_t size);

/// Destroy array of msg/AdsMarkerArrayVec messages.
/**
 * It calls
 * deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
void
deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__destroy(deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * array);

/// Check for msg/AdsMarkerArrayVec message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
bool
deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__are_equal(const deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * lhs, const deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * rhs);

/// Copy an array of msg/AdsMarkerArrayVec messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
bool
deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__copy(
  const deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * input,
  deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__FUNCTIONS_H_
