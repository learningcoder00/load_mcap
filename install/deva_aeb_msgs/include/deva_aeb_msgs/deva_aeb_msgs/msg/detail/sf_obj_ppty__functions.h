// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_aeb_msgs:msg/SFObjPpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__FUNCTIONS_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_aeb_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__struct.h"

/// Initialize msg/SFObjPpty message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_aeb_msgs__msg__SFObjPpty
 * )) before or use
 * deva_aeb_msgs__msg__SFObjPpty__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFObjPpty__init(deva_aeb_msgs__msg__SFObjPpty * msg);

/// Finalize msg/SFObjPpty message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
void
deva_aeb_msgs__msg__SFObjPpty__fini(deva_aeb_msgs__msg__SFObjPpty * msg);

/// Create msg/SFObjPpty message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_aeb_msgs__msg__SFObjPpty__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
deva_aeb_msgs__msg__SFObjPpty *
deva_aeb_msgs__msg__SFObjPpty__create();

/// Destroy msg/SFObjPpty message.
/**
 * It calls
 * deva_aeb_msgs__msg__SFObjPpty__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
void
deva_aeb_msgs__msg__SFObjPpty__destroy(deva_aeb_msgs__msg__SFObjPpty * msg);

/// Check for msg/SFObjPpty message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFObjPpty__are_equal(const deva_aeb_msgs__msg__SFObjPpty * lhs, const deva_aeb_msgs__msg__SFObjPpty * rhs);

/// Copy a msg/SFObjPpty message.
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
deva_aeb_msgs__msg__SFObjPpty__copy(
  const deva_aeb_msgs__msg__SFObjPpty * input,
  deva_aeb_msgs__msg__SFObjPpty * output);

/// Initialize array of msg/SFObjPpty messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_aeb_msgs__msg__SFObjPpty__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFObjPpty__Sequence__init(deva_aeb_msgs__msg__SFObjPpty__Sequence * array, size_t size);

/// Finalize array of msg/SFObjPpty messages.
/**
 * It calls
 * deva_aeb_msgs__msg__SFObjPpty__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
void
deva_aeb_msgs__msg__SFObjPpty__Sequence__fini(deva_aeb_msgs__msg__SFObjPpty__Sequence * array);

/// Create array of msg/SFObjPpty messages.
/**
 * It allocates the memory for the array and calls
 * deva_aeb_msgs__msg__SFObjPpty__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
deva_aeb_msgs__msg__SFObjPpty__Sequence *
deva_aeb_msgs__msg__SFObjPpty__Sequence__create(size_t size);

/// Destroy array of msg/SFObjPpty messages.
/**
 * It calls
 * deva_aeb_msgs__msg__SFObjPpty__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
void
deva_aeb_msgs__msg__SFObjPpty__Sequence__destroy(deva_aeb_msgs__msg__SFObjPpty__Sequence * array);

/// Check for msg/SFObjPpty message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_aeb_msgs
bool
deva_aeb_msgs__msg__SFObjPpty__Sequence__are_equal(const deva_aeb_msgs__msg__SFObjPpty__Sequence * lhs, const deva_aeb_msgs__msg__SFObjPpty__Sequence * rhs);

/// Copy an array of msg/SFObjPpty messages.
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
deva_aeb_msgs__msg__SFObjPpty__Sequence__copy(
  const deva_aeb_msgs__msg__SFObjPpty__Sequence * input,
  deva_aeb_msgs__msg__SFObjPpty__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__FUNCTIONS_H_
