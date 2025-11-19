// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_ads_msgs:msg/AdsMarker.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__FUNCTIONS_H_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_ads_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_ads_msgs/msg/detail/ads_marker__struct.h"

/// Initialize msg/AdsMarker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_ads_msgs__msg__AdsMarker
 * )) before or use
 * deva_ads_msgs__msg__AdsMarker__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
bool
deva_ads_msgs__msg__AdsMarker__init(deva_ads_msgs__msg__AdsMarker * msg);

/// Finalize msg/AdsMarker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
void
deva_ads_msgs__msg__AdsMarker__fini(deva_ads_msgs__msg__AdsMarker * msg);

/// Create msg/AdsMarker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_ads_msgs__msg__AdsMarker__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
deva_ads_msgs__msg__AdsMarker *
deva_ads_msgs__msg__AdsMarker__create();

/// Destroy msg/AdsMarker message.
/**
 * It calls
 * deva_ads_msgs__msg__AdsMarker__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
void
deva_ads_msgs__msg__AdsMarker__destroy(deva_ads_msgs__msg__AdsMarker * msg);

/// Check for msg/AdsMarker message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
bool
deva_ads_msgs__msg__AdsMarker__are_equal(const deva_ads_msgs__msg__AdsMarker * lhs, const deva_ads_msgs__msg__AdsMarker * rhs);

/// Copy a msg/AdsMarker message.
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
deva_ads_msgs__msg__AdsMarker__copy(
  const deva_ads_msgs__msg__AdsMarker * input,
  deva_ads_msgs__msg__AdsMarker * output);

/// Initialize array of msg/AdsMarker messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_ads_msgs__msg__AdsMarker__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
bool
deva_ads_msgs__msg__AdsMarker__Sequence__init(deva_ads_msgs__msg__AdsMarker__Sequence * array, size_t size);

/// Finalize array of msg/AdsMarker messages.
/**
 * It calls
 * deva_ads_msgs__msg__AdsMarker__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
void
deva_ads_msgs__msg__AdsMarker__Sequence__fini(deva_ads_msgs__msg__AdsMarker__Sequence * array);

/// Create array of msg/AdsMarker messages.
/**
 * It allocates the memory for the array and calls
 * deva_ads_msgs__msg__AdsMarker__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
deva_ads_msgs__msg__AdsMarker__Sequence *
deva_ads_msgs__msg__AdsMarker__Sequence__create(size_t size);

/// Destroy array of msg/AdsMarker messages.
/**
 * It calls
 * deva_ads_msgs__msg__AdsMarker__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
void
deva_ads_msgs__msg__AdsMarker__Sequence__destroy(deva_ads_msgs__msg__AdsMarker__Sequence * array);

/// Check for msg/AdsMarker message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_ads_msgs
bool
deva_ads_msgs__msg__AdsMarker__Sequence__are_equal(const deva_ads_msgs__msg__AdsMarker__Sequence * lhs, const deva_ads_msgs__msg__AdsMarker__Sequence * rhs);

/// Copy an array of msg/AdsMarker messages.
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
deva_ads_msgs__msg__AdsMarker__Sequence__copy(
  const deva_ads_msgs__msg__AdsMarker__Sequence * input,
  deva_ads_msgs__msg__AdsMarker__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__FUNCTIONS_H_
