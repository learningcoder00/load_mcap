// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_navi_msgs:msg/ChargeStationInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__CHARGE_STATION_INFO_PROTO__FUNCTIONS_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__CHARGE_STATION_INFO_PROTO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_navi_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deva_navi_msgs/msg/detail/charge_station_info_proto__struct.h"

/// Initialize msg/ChargeStationInfoProto message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_navi_msgs__msg__ChargeStationInfoProto
 * )) before or use
 * deva_navi_msgs__msg__ChargeStationInfoProto__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__ChargeStationInfoProto__init(deva_navi_msgs__msg__ChargeStationInfoProto * msg);

/// Finalize msg/ChargeStationInfoProto message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
void
deva_navi_msgs__msg__ChargeStationInfoProto__fini(deva_navi_msgs__msg__ChargeStationInfoProto * msg);

/// Create msg/ChargeStationInfoProto message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_navi_msgs__msg__ChargeStationInfoProto__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
deva_navi_msgs__msg__ChargeStationInfoProto *
deva_navi_msgs__msg__ChargeStationInfoProto__create();

/// Destroy msg/ChargeStationInfoProto message.
/**
 * It calls
 * deva_navi_msgs__msg__ChargeStationInfoProto__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
void
deva_navi_msgs__msg__ChargeStationInfoProto__destroy(deva_navi_msgs__msg__ChargeStationInfoProto * msg);

/// Check for msg/ChargeStationInfoProto message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__ChargeStationInfoProto__are_equal(const deva_navi_msgs__msg__ChargeStationInfoProto * lhs, const deva_navi_msgs__msg__ChargeStationInfoProto * rhs);

/// Copy a msg/ChargeStationInfoProto message.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__ChargeStationInfoProto__copy(
  const deva_navi_msgs__msg__ChargeStationInfoProto * input,
  deva_navi_msgs__msg__ChargeStationInfoProto * output);

/// Initialize array of msg/ChargeStationInfoProto messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_navi_msgs__msg__ChargeStationInfoProto__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__init(deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * array, size_t size);

/// Finalize array of msg/ChargeStationInfoProto messages.
/**
 * It calls
 * deva_navi_msgs__msg__ChargeStationInfoProto__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
void
deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__fini(deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * array);

/// Create array of msg/ChargeStationInfoProto messages.
/**
 * It allocates the memory for the array and calls
 * deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
deva_navi_msgs__msg__ChargeStationInfoProto__Sequence *
deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__create(size_t size);

/// Destroy array of msg/ChargeStationInfoProto messages.
/**
 * It calls
 * deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
void
deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__destroy(deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * array);

/// Check for msg/ChargeStationInfoProto message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * lhs, const deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * rhs);

/// Copy an array of msg/ChargeStationInfoProto messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deva_navi_msgs
bool
deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * input,
  deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__CHARGE_STATION_INFO_PROTO__FUNCTIONS_H_
