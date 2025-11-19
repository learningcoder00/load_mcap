// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/WheelInfo.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/wheel_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_function_msgs__msg__WheelInfo__init(deva_function_msgs__msg__WheelInfo * msg)
{
  if (!msg) {
    return false;
  }
  // speed
  // counter
  // direction
  // is_slip
  // is_brake
  // is_valid
  return true;
}

void
deva_function_msgs__msg__WheelInfo__fini(deva_function_msgs__msg__WheelInfo * msg)
{
  if (!msg) {
    return;
  }
  // speed
  // counter
  // direction
  // is_slip
  // is_brake
  // is_valid
}

bool
deva_function_msgs__msg__WheelInfo__are_equal(const deva_function_msgs__msg__WheelInfo * lhs, const deva_function_msgs__msg__WheelInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // counter
  if (lhs->counter != rhs->counter) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // is_slip
  if (lhs->is_slip != rhs->is_slip) {
    return false;
  }
  // is_brake
  if (lhs->is_brake != rhs->is_brake) {
    return false;
  }
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__WheelInfo__copy(
  const deva_function_msgs__msg__WheelInfo * input,
  deva_function_msgs__msg__WheelInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // speed
  output->speed = input->speed;
  // counter
  output->counter = input->counter;
  // direction
  output->direction = input->direction;
  // is_slip
  output->is_slip = input->is_slip;
  // is_brake
  output->is_brake = input->is_brake;
  // is_valid
  output->is_valid = input->is_valid;
  return true;
}

deva_function_msgs__msg__WheelInfo *
deva_function_msgs__msg__WheelInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__WheelInfo * msg = (deva_function_msgs__msg__WheelInfo *)allocator.allocate(sizeof(deva_function_msgs__msg__WheelInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__WheelInfo));
  bool success = deva_function_msgs__msg__WheelInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__WheelInfo__destroy(deva_function_msgs__msg__WheelInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__WheelInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__WheelInfo__Sequence__init(deva_function_msgs__msg__WheelInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__WheelInfo * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__WheelInfo *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__WheelInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__WheelInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__WheelInfo__fini(&data[i - 1]);
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
deva_function_msgs__msg__WheelInfo__Sequence__fini(deva_function_msgs__msg__WheelInfo__Sequence * array)
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
      deva_function_msgs__msg__WheelInfo__fini(&array->data[i]);
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

deva_function_msgs__msg__WheelInfo__Sequence *
deva_function_msgs__msg__WheelInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__WheelInfo__Sequence * array = (deva_function_msgs__msg__WheelInfo__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__WheelInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__WheelInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__WheelInfo__Sequence__destroy(deva_function_msgs__msg__WheelInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__WheelInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__WheelInfo__Sequence__are_equal(const deva_function_msgs__msg__WheelInfo__Sequence * lhs, const deva_function_msgs__msg__WheelInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__WheelInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__WheelInfo__Sequence__copy(
  const deva_function_msgs__msg__WheelInfo__Sequence * input,
  deva_function_msgs__msg__WheelInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__WheelInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__WheelInfo * data =
      (deva_function_msgs__msg__WheelInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__WheelInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__WheelInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__WheelInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
