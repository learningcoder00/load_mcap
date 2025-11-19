// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_planning_msgs2:msg/AvpRefLineTreePointVec.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__FUNCTIONS_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_planning_msgs2/msg/rosidl_generator_c__visibility_control.h"

#include "deva_planning_msgs2/msg/detail/avp_ref_line_tree_point_vec__struct.h"

/// Initialize msg/AvpRefLineTreePointVec message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_planning_msgs2__msg__AvpRefLineTreePointVec
 * )) before or use
 * deva_planning_msgs2__msg__AvpRefLineTreePointVec__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
bool
deva_planning_msgs2__msg__AvpRefLineTreePointVec__init(deva_planning_msgs2__msg__AvpRefLineTreePointVec * msg);

/// Finalize msg/AvpRefLineTreePointVec message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
void
deva_planning_msgs2__msg__AvpRefLineTreePointVec__fini(deva_planning_msgs2__msg__AvpRefLineTreePointVec * msg);

/// Create msg/AvpRefLineTreePointVec message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_planning_msgs2__msg__AvpRefLineTreePointVec__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
deva_planning_msgs2__msg__AvpRefLineTreePointVec *
deva_planning_msgs2__msg__AvpRefLineTreePointVec__create();

/// Destroy msg/AvpRefLineTreePointVec message.
/**
 * It calls
 * deva_planning_msgs2__msg__AvpRefLineTreePointVec__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
void
deva_planning_msgs2__msg__AvpRefLineTreePointVec__destroy(deva_planning_msgs2__msg__AvpRefLineTreePointVec * msg);

/// Check for msg/AvpRefLineTreePointVec message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
bool
deva_planning_msgs2__msg__AvpRefLineTreePointVec__are_equal(const deva_planning_msgs2__msg__AvpRefLineTreePointVec * lhs, const deva_planning_msgs2__msg__AvpRefLineTreePointVec * rhs);

/// Copy a msg/AvpRefLineTreePointVec message.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
bool
deva_planning_msgs2__msg__AvpRefLineTreePointVec__copy(
  const deva_planning_msgs2__msg__AvpRefLineTreePointVec * input,
  deva_planning_msgs2__msg__AvpRefLineTreePointVec * output);

/// Initialize array of msg/AvpRefLineTreePointVec messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_planning_msgs2__msg__AvpRefLineTreePointVec__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
bool
deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__init(deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * array, size_t size);

/// Finalize array of msg/AvpRefLineTreePointVec messages.
/**
 * It calls
 * deva_planning_msgs2__msg__AvpRefLineTreePointVec__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
void
deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__fini(deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * array);

/// Create array of msg/AvpRefLineTreePointVec messages.
/**
 * It allocates the memory for the array and calls
 * deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence *
deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__create(size_t size);

/// Destroy array of msg/AvpRefLineTreePointVec messages.
/**
 * It calls
 * deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
void
deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__destroy(deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * array);

/// Check for msg/AvpRefLineTreePointVec message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
bool
deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__are_equal(const deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * lhs, const deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * rhs);

/// Copy an array of msg/AvpRefLineTreePointVec messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
bool
deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__copy(
  const deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * input,
  deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__FUNCTIONS_H_
