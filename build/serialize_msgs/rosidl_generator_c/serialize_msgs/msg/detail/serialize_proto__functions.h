// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from serialize_msgs:msg/SerializeProto.idl
// generated code does not contain a copyright notice

#ifndef SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__FUNCTIONS_H_
#define SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "serialize_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "serialize_msgs/msg/detail/serialize_proto__struct.h"

/// Initialize msg/SerializeProto message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * serialize_msgs__msg__SerializeProto
 * )) before or use
 * serialize_msgs__msg__SerializeProto__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_serialize_msgs
bool
serialize_msgs__msg__SerializeProto__init(serialize_msgs__msg__SerializeProto * msg);

/// Finalize msg/SerializeProto message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serialize_msgs
void
serialize_msgs__msg__SerializeProto__fini(serialize_msgs__msg__SerializeProto * msg);

/// Create msg/SerializeProto message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * serialize_msgs__msg__SerializeProto__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serialize_msgs
serialize_msgs__msg__SerializeProto *
serialize_msgs__msg__SerializeProto__create();

/// Destroy msg/SerializeProto message.
/**
 * It calls
 * serialize_msgs__msg__SerializeProto__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serialize_msgs
void
serialize_msgs__msg__SerializeProto__destroy(serialize_msgs__msg__SerializeProto * msg);

/// Check for msg/SerializeProto message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serialize_msgs
bool
serialize_msgs__msg__SerializeProto__are_equal(const serialize_msgs__msg__SerializeProto * lhs, const serialize_msgs__msg__SerializeProto * rhs);

/// Copy a msg/SerializeProto message.
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
ROSIDL_GENERATOR_C_PUBLIC_serialize_msgs
bool
serialize_msgs__msg__SerializeProto__copy(
  const serialize_msgs__msg__SerializeProto * input,
  serialize_msgs__msg__SerializeProto * output);

/// Initialize array of msg/SerializeProto messages.
/**
 * It allocates the memory for the number of elements and calls
 * serialize_msgs__msg__SerializeProto__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_serialize_msgs
bool
serialize_msgs__msg__SerializeProto__Sequence__init(serialize_msgs__msg__SerializeProto__Sequence * array, size_t size);

/// Finalize array of msg/SerializeProto messages.
/**
 * It calls
 * serialize_msgs__msg__SerializeProto__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serialize_msgs
void
serialize_msgs__msg__SerializeProto__Sequence__fini(serialize_msgs__msg__SerializeProto__Sequence * array);

/// Create array of msg/SerializeProto messages.
/**
 * It allocates the memory for the array and calls
 * serialize_msgs__msg__SerializeProto__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serialize_msgs
serialize_msgs__msg__SerializeProto__Sequence *
serialize_msgs__msg__SerializeProto__Sequence__create(size_t size);

/// Destroy array of msg/SerializeProto messages.
/**
 * It calls
 * serialize_msgs__msg__SerializeProto__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serialize_msgs
void
serialize_msgs__msg__SerializeProto__Sequence__destroy(serialize_msgs__msg__SerializeProto__Sequence * array);

/// Check for msg/SerializeProto message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serialize_msgs
bool
serialize_msgs__msg__SerializeProto__Sequence__are_equal(const serialize_msgs__msg__SerializeProto__Sequence * lhs, const serialize_msgs__msg__SerializeProto__Sequence * rhs);

/// Copy an array of msg/SerializeProto messages.
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
ROSIDL_GENERATOR_C_PUBLIC_serialize_msgs
bool
serialize_msgs__msg__SerializeProto__Sequence__copy(
  const serialize_msgs__msg__SerializeProto__Sequence * input,
  serialize_msgs__msg__SerializeProto__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__FUNCTIONS_H_
