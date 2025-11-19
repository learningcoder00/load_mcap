// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs:msg/DrivingMode.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/driving_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `driving_mode_select`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_planning_msgs__msg__DrivingMode__init(deva_planning_msgs__msg__DrivingMode * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_planning_msgs__msg__DrivingMode__fini(msg);
    return false;
  }
  // driving_mode_select
  if (!rosidl_runtime_c__String__init(&msg->driving_mode_select)) {
    deva_planning_msgs__msg__DrivingMode__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs__msg__DrivingMode__fini(deva_planning_msgs__msg__DrivingMode * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // driving_mode_select
  rosidl_runtime_c__String__fini(&msg->driving_mode_select);
}

bool
deva_planning_msgs__msg__DrivingMode__are_equal(const deva_planning_msgs__msg__DrivingMode * lhs, const deva_planning_msgs__msg__DrivingMode * rhs)
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
  // driving_mode_select
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->driving_mode_select), &(rhs->driving_mode_select)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs__msg__DrivingMode__copy(
  const deva_planning_msgs__msg__DrivingMode * input,
  deva_planning_msgs__msg__DrivingMode * output)
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
  // driving_mode_select
  if (!rosidl_runtime_c__String__copy(
      &(input->driving_mode_select), &(output->driving_mode_select)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs__msg__DrivingMode *
deva_planning_msgs__msg__DrivingMode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__DrivingMode * msg = (deva_planning_msgs__msg__DrivingMode *)allocator.allocate(sizeof(deva_planning_msgs__msg__DrivingMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs__msg__DrivingMode));
  bool success = deva_planning_msgs__msg__DrivingMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs__msg__DrivingMode__destroy(deva_planning_msgs__msg__DrivingMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs__msg__DrivingMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs__msg__DrivingMode__Sequence__init(deva_planning_msgs__msg__DrivingMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__DrivingMode * data = NULL;

  if (size) {
    data = (deva_planning_msgs__msg__DrivingMode *)allocator.zero_allocate(size, sizeof(deva_planning_msgs__msg__DrivingMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs__msg__DrivingMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs__msg__DrivingMode__fini(&data[i - 1]);
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
deva_planning_msgs__msg__DrivingMode__Sequence__fini(deva_planning_msgs__msg__DrivingMode__Sequence * array)
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
      deva_planning_msgs__msg__DrivingMode__fini(&array->data[i]);
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

deva_planning_msgs__msg__DrivingMode__Sequence *
deva_planning_msgs__msg__DrivingMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__DrivingMode__Sequence * array = (deva_planning_msgs__msg__DrivingMode__Sequence *)allocator.allocate(sizeof(deva_planning_msgs__msg__DrivingMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs__msg__DrivingMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs__msg__DrivingMode__Sequence__destroy(deva_planning_msgs__msg__DrivingMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs__msg__DrivingMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs__msg__DrivingMode__Sequence__are_equal(const deva_planning_msgs__msg__DrivingMode__Sequence * lhs, const deva_planning_msgs__msg__DrivingMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs__msg__DrivingMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs__msg__DrivingMode__Sequence__copy(
  const deva_planning_msgs__msg__DrivingMode__Sequence * input,
  deva_planning_msgs__msg__DrivingMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs__msg__DrivingMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs__msg__DrivingMode * data =
      (deva_planning_msgs__msg__DrivingMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs__msg__DrivingMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs__msg__DrivingMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs__msg__DrivingMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
