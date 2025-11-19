// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_localization_msgs:msg/GnssBestPose.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__FUNCTIONS_H_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_localization_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_localization_msgs/msg/detail/gnss_best_pose__struct.h"

/// Initialize msg/GnssBestPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_localization_msgs__msg__GnssBestPose
 * )) before or use
 * deva_localization_msgs__msg__GnssBestPose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
bool
deva_localization_msgs__msg__GnssBestPose__init(deva_localization_msgs__msg__GnssBestPose * msg);

/// Finalize msg/GnssBestPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
void
deva_localization_msgs__msg__GnssBestPose__fini(deva_localization_msgs__msg__GnssBestPose * msg);

/// Create msg/GnssBestPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_localization_msgs__msg__GnssBestPose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
deva_localization_msgs__msg__GnssBestPose *
deva_localization_msgs__msg__GnssBestPose__create();

/// Destroy msg/GnssBestPose message.
/**
 * It calls
 * deva_localization_msgs__msg__GnssBestPose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
void
deva_localization_msgs__msg__GnssBestPose__destroy(deva_localization_msgs__msg__GnssBestPose * msg);

/// Check for msg/GnssBestPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
bool
deva_localization_msgs__msg__GnssBestPose__are_equal(const deva_localization_msgs__msg__GnssBestPose * lhs, const deva_localization_msgs__msg__GnssBestPose * rhs);

/// Copy a msg/GnssBestPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
bool
deva_localization_msgs__msg__GnssBestPose__copy(
  const deva_localization_msgs__msg__GnssBestPose * input,
  deva_localization_msgs__msg__GnssBestPose * output);

/// Initialize array of msg/GnssBestPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_localization_msgs__msg__GnssBestPose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
bool
deva_localization_msgs__msg__GnssBestPose__Sequence__init(deva_localization_msgs__msg__GnssBestPose__Sequence * array, size_t size);

/// Finalize array of msg/GnssBestPose messages.
/**
 * It calls
 * deva_localization_msgs__msg__GnssBestPose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
void
deva_localization_msgs__msg__GnssBestPose__Sequence__fini(deva_localization_msgs__msg__GnssBestPose__Sequence * array);

/// Create array of msg/GnssBestPose messages.
/**
 * It allocates the memory for the array and calls
 * deva_localization_msgs__msg__GnssBestPose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
deva_localization_msgs__msg__GnssBestPose__Sequence *
deva_localization_msgs__msg__GnssBestPose__Sequence__create(size_t size);

/// Destroy array of msg/GnssBestPose messages.
/**
 * It calls
 * deva_localization_msgs__msg__GnssBestPose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
void
deva_localization_msgs__msg__GnssBestPose__Sequence__destroy(deva_localization_msgs__msg__GnssBestPose__Sequence * array);

/// Check for msg/GnssBestPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
bool
deva_localization_msgs__msg__GnssBestPose__Sequence__are_equal(const deva_localization_msgs__msg__GnssBestPose__Sequence * lhs, const deva_localization_msgs__msg__GnssBestPose__Sequence * rhs);

/// Copy an array of msg/GnssBestPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_localization_msgs
bool
deva_localization_msgs__msg__GnssBestPose__Sequence__copy(
  const deva_localization_msgs__msg__GnssBestPose__Sequence * input,
  deva_localization_msgs__msg__GnssBestPose__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__FUNCTIONS_H_
