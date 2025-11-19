// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deva_planning_msgs2:msg/NavOpenspaceParkingSlot.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__FUNCTIONS_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deva_planning_msgs2/msg/rosidl_generator_c__visibility_control.h"

#include "deva_planning_msgs2/msg/detail/nav_openspace_parking_slot__struct.h"

/// Initialize msg/NavOpenspaceParkingSlot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deva_planning_msgs2__msg__NavOpenspaceParkingSlot
 * )) before or use
 * deva_planning_msgs2__msg__NavOpenspaceParkingSlot__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
bool
deva_planning_msgs2__msg__NavOpenspaceParkingSlot__init(deva_planning_msgs2__msg__NavOpenspaceParkingSlot * msg);

/// Finalize msg/NavOpenspaceParkingSlot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
void
deva_planning_msgs2__msg__NavOpenspaceParkingSlot__fini(deva_planning_msgs2__msg__NavOpenspaceParkingSlot * msg);

/// Create msg/NavOpenspaceParkingSlot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deva_planning_msgs2__msg__NavOpenspaceParkingSlot__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
deva_planning_msgs2__msg__NavOpenspaceParkingSlot *
deva_planning_msgs2__msg__NavOpenspaceParkingSlot__create();

/// Destroy msg/NavOpenspaceParkingSlot message.
/**
 * It calls
 * deva_planning_msgs2__msg__NavOpenspaceParkingSlot__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
void
deva_planning_msgs2__msg__NavOpenspaceParkingSlot__destroy(deva_planning_msgs2__msg__NavOpenspaceParkingSlot * msg);

/// Check for msg/NavOpenspaceParkingSlot message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
bool
deva_planning_msgs2__msg__NavOpenspaceParkingSlot__are_equal(const deva_planning_msgs2__msg__NavOpenspaceParkingSlot * lhs, const deva_planning_msgs2__msg__NavOpenspaceParkingSlot * rhs);

/// Copy a msg/NavOpenspaceParkingSlot message.
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
deva_planning_msgs2__msg__NavOpenspaceParkingSlot__copy(
  const deva_planning_msgs2__msg__NavOpenspaceParkingSlot * input,
  deva_planning_msgs2__msg__NavOpenspaceParkingSlot * output);

/// Initialize array of msg/NavOpenspaceParkingSlot messages.
/**
 * It allocates the memory for the number of elements and calls
 * deva_planning_msgs2__msg__NavOpenspaceParkingSlot__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
bool
deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__init(deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence * array, size_t size);

/// Finalize array of msg/NavOpenspaceParkingSlot messages.
/**
 * It calls
 * deva_planning_msgs2__msg__NavOpenspaceParkingSlot__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
void
deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__fini(deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence * array);

/// Create array of msg/NavOpenspaceParkingSlot messages.
/**
 * It allocates the memory for the array and calls
 * deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence *
deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__create(size_t size);

/// Destroy array of msg/NavOpenspaceParkingSlot messages.
/**
 * It calls
 * deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
void
deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__destroy(deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence * array);

/// Check for msg/NavOpenspaceParkingSlot message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deva_planning_msgs2
bool
deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__are_equal(const deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence * lhs, const deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence * rhs);

/// Copy an array of msg/NavOpenspaceParkingSlot messages.
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
deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__copy(
  const deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence * input,
  deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__FUNCTIONS_H_
