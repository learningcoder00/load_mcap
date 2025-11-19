// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_localization_msgs:msg/RawImu.idl
// generated code does not contain a copyright notice
#include "deva_localization_msgs/msg/detail/raw_imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `linear_acceleration`
// Member `angular_velocity`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
deva_localization_msgs__msg__RawImu__init(deva_localization_msgs__msg__RawImu * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_localization_msgs__msg__RawImu__fini(msg);
    return false;
  }
  // measurement_span
  // linear_acceleration
  if (!geometry_msgs__msg__Point__init(&msg->linear_acceleration)) {
    deva_localization_msgs__msg__RawImu__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Point__init(&msg->angular_velocity)) {
    deva_localization_msgs__msg__RawImu__fini(msg);
    return false;
  }
  return true;
}

void
deva_localization_msgs__msg__RawImu__fini(deva_localization_msgs__msg__RawImu * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // measurement_span
  // linear_acceleration
  geometry_msgs__msg__Point__fini(&msg->linear_acceleration);
  // angular_velocity
  geometry_msgs__msg__Point__fini(&msg->angular_velocity);
}

bool
deva_localization_msgs__msg__RawImu__are_equal(const deva_localization_msgs__msg__RawImu * lhs, const deva_localization_msgs__msg__RawImu * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // measurement_span
  if (lhs->measurement_span != rhs->measurement_span) {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  return true;
}

bool
deva_localization_msgs__msg__RawImu__copy(
  const deva_localization_msgs__msg__RawImu * input,
  deva_localization_msgs__msg__RawImu * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // measurement_span
  output->measurement_span = input->measurement_span;
  // linear_acceleration
  if (!geometry_msgs__msg__Point__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Point__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  return true;
}

deva_localization_msgs__msg__RawImu *
deva_localization_msgs__msg__RawImu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_localization_msgs__msg__RawImu * msg = (deva_localization_msgs__msg__RawImu *)allocator.allocate(sizeof(deva_localization_msgs__msg__RawImu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_localization_msgs__msg__RawImu));
  bool success = deva_localization_msgs__msg__RawImu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_localization_msgs__msg__RawImu__destroy(deva_localization_msgs__msg__RawImu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_localization_msgs__msg__RawImu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_localization_msgs__msg__RawImu__Sequence__init(deva_localization_msgs__msg__RawImu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_localization_msgs__msg__RawImu * data = NULL;

  if (size) {
    data = (deva_localization_msgs__msg__RawImu *)allocator.zero_allocate(size, sizeof(deva_localization_msgs__msg__RawImu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_localization_msgs__msg__RawImu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_localization_msgs__msg__RawImu__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
deva_localization_msgs__msg__RawImu__Sequence__fini(deva_localization_msgs__msg__RawImu__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deva_localization_msgs__msg__RawImu__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

deva_localization_msgs__msg__RawImu__Sequence *
deva_localization_msgs__msg__RawImu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_localization_msgs__msg__RawImu__Sequence * array = (deva_localization_msgs__msg__RawImu__Sequence *)allocator.allocate(sizeof(deva_localization_msgs__msg__RawImu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_localization_msgs__msg__RawImu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_localization_msgs__msg__RawImu__Sequence__destroy(deva_localization_msgs__msg__RawImu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_localization_msgs__msg__RawImu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_localization_msgs__msg__RawImu__Sequence__are_equal(const deva_localization_msgs__msg__RawImu__Sequence * lhs, const deva_localization_msgs__msg__RawImu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_localization_msgs__msg__RawImu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_localization_msgs__msg__RawImu__Sequence__copy(
  const deva_localization_msgs__msg__RawImu__Sequence * input,
  deva_localization_msgs__msg__RawImu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_localization_msgs__msg__RawImu);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_localization_msgs__msg__RawImu * data =
      (deva_localization_msgs__msg__RawImu *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_localization_msgs__msg__RawImu__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_localization_msgs__msg__RawImu__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_localization_msgs__msg__RawImu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
