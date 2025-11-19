// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fault_diagnosis:msg/ODDStatusArray.idl
// generated code does not contain a copyright notice

#ifndef FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__FUNCTIONS_H_
#define FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fault_diagnosis/msg/rosidl_generator_c__visibility_control.h"

#include "fault_diagnosis/msg/detail/odd_status_array__struct.h"

/// Initialize msg/ODDStatusArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fault_diagnosis__msg__ODDStatusArray
 * )) before or use
 * fault_diagnosis__msg__ODDStatusArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fault_diagnosis
bool
fault_diagnosis__msg__ODDStatusArray__init(fault_diagnosis__msg__ODDStatusArray * msg);

/// Finalize msg/ODDStatusArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fault_diagnosis
void
fault_diagnosis__msg__ODDStatusArray__fini(fault_diagnosis__msg__ODDStatusArray * msg);

/// Create msg/ODDStatusArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fault_diagnosis__msg__ODDStatusArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fault_diagnosis
fault_diagnosis__msg__ODDStatusArray *
fault_diagnosis__msg__ODDStatusArray__create();

/// Destroy msg/ODDStatusArray message.
/**
 * It calls
 * fault_diagnosis__msg__ODDStatusArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fault_diagnosis
void
fault_diagnosis__msg__ODDStatusArray__destroy(fault_diagnosis__msg__ODDStatusArray * msg);

/// Check for msg/ODDStatusArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fault_diagnosis
bool
fault_diagnosis__msg__ODDStatusArray__are_equal(const fault_diagnosis__msg__ODDStatusArray * lhs, const fault_diagnosis__msg__ODDStatusArray * rhs);

/// Copy a msg/ODDStatusArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_fault_diagnosis
bool
fault_diagnosis__msg__ODDStatusArray__copy(
  const fault_diagnosis__msg__ODDStatusArray * input,
  fault_diagnosis__msg__ODDStatusArray * output);

/// Initialize array of msg/ODDStatusArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * fault_diagnosis__msg__ODDStatusArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fault_diagnosis
bool
fault_diagnosis__msg__ODDStatusArray__Sequence__init(fault_diagnosis__msg__ODDStatusArray__Sequence * array, size_t size);

/// Finalize array of msg/ODDStatusArray messages.
/**
 * It calls
 * fault_diagnosis__msg__ODDStatusArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fault_diagnosis
void
fault_diagnosis__msg__ODDStatusArray__Sequence__fini(fault_diagnosis__msg__ODDStatusArray__Sequence * array);

/// Create array of msg/ODDStatusArray messages.
/**
 * It allocates the memory for the array and calls
 * fault_diagnosis__msg__ODDStatusArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fault_diagnosis
fault_diagnosis__msg__ODDStatusArray__Sequence *
fault_diagnosis__msg__ODDStatusArray__Sequence__create(size_t size);

/// Destroy array of msg/ODDStatusArray messages.
/**
 * It calls
 * fault_diagnosis__msg__ODDStatusArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fault_diagnosis
void
fault_diagnosis__msg__ODDStatusArray__Sequence__destroy(fault_diagnosis__msg__ODDStatusArray__Sequence * array);

/// Check for msg/ODDStatusArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fault_diagnosis
bool
fault_diagnosis__msg__ODDStatusArray__Sequence__are_equal(const fault_diagnosis__msg__ODDStatusArray__Sequence * lhs, const fault_diagnosis__msg__ODDStatusArray__Sequence * rhs);

/// Copy an array of msg/ODDStatusArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_fault_diagnosis
bool
fault_diagnosis__msg__ODDStatusArray__Sequence__copy(
  const fault_diagnosis__msg__ODDStatusArray__Sequence * input,
  fault_diagnosis__msg__ODDStatusArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__FUNCTIONS_H_
