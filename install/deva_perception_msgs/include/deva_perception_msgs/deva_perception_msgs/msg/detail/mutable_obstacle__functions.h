// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_perception_msgs:msg/MutableObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__MUTABLE_OBSTACLE__FUNCTIONS_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__MUTABLE_OBSTACLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_perception_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_perception_msgs/msg/detail/mutable_obstacle__struct.h"

/// Initialize msg/MutableObstacle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_perception_msgs__msg__MutableObstacle
 * )) before or use
 * deva_perception_msgs__msg__MutableObstacle__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
bool
deva_perception_msgs__msg__MutableObstacle__init(deva_perception_msgs__msg__MutableObstacle * msg);

/// Finalize msg/MutableObstacle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
void
deva_perception_msgs__msg__MutableObstacle__fini(deva_perception_msgs__msg__MutableObstacle * msg);

/// Create msg/MutableObstacle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_perception_msgs__msg__MutableObstacle__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
deva_perception_msgs__msg__MutableObstacle *
deva_perception_msgs__msg__MutableObstacle__create();

/// Destroy msg/MutableObstacle message.
/**
 * It calls
 * deva_perception_msgs__msg__MutableObstacle__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
void
deva_perception_msgs__msg__MutableObstacle__destroy(deva_perception_msgs__msg__MutableObstacle * msg);

/// Check for msg/MutableObstacle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
bool
deva_perception_msgs__msg__MutableObstacle__are_equal(const deva_perception_msgs__msg__MutableObstacle * lhs, const deva_perception_msgs__msg__MutableObstacle * rhs);

/// Copy a msg/MutableObstacle message.
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
deva_perception_msgs__msg__MutableObstacle__copy(
  const deva_perception_msgs__msg__MutableObstacle * input,
  deva_perception_msgs__msg__MutableObstacle * output);

/// Initialize array of msg/MutableObstacle messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_perception_msgs__msg__MutableObstacle__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
bool
deva_perception_msgs__msg__MutableObstacle__Sequence__init(deva_perception_msgs__msg__MutableObstacle__Sequence * array, size_t size);

/// Finalize array of msg/MutableObstacle messages.
/**
 * It calls
 * deva_perception_msgs__msg__MutableObstacle__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
void
deva_perception_msgs__msg__MutableObstacle__Sequence__fini(deva_perception_msgs__msg__MutableObstacle__Sequence * array);

/// Create array of msg/MutableObstacle messages.
/**
 * It allocates the memory for the array and calls
 * deva_perception_msgs__msg__MutableObstacle__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
deva_perception_msgs__msg__MutableObstacle__Sequence *
deva_perception_msgs__msg__MutableObstacle__Sequence__create(size_t size);

/// Destroy array of msg/MutableObstacle messages.
/**
 * It calls
 * deva_perception_msgs__msg__MutableObstacle__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
void
deva_perception_msgs__msg__MutableObstacle__Sequence__destroy(deva_perception_msgs__msg__MutableObstacle__Sequence * array);

/// Check for msg/MutableObstacle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_perception_msgs
bool
deva_perception_msgs__msg__MutableObstacle__Sequence__are_equal(const deva_perception_msgs__msg__MutableObstacle__Sequence * lhs, const deva_perception_msgs__msg__MutableObstacle__Sequence * rhs);

/// Copy an array of msg/MutableObstacle messages.
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
deva_perception_msgs__msg__MutableObstacle__Sequence__copy(
  const deva_perception_msgs__msg__MutableObstacle__Sequence * input,
  deva_perception_msgs__msg__MutableObstacle__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__MUTABLE_OBSTACLE__FUNCTIONS_H_
