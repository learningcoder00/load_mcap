// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/WheelSpeed.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/wheel_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `front_left`
// Member `front_right`
// Member `rear_left`
// Member `rear_right`
#include "deva_function_msgs/msg/detail/wheel_info__functions.h"

bool
deva_function_msgs__msg__WheelSpeed__init(deva_function_msgs__msg__WheelSpeed * msg)
{
  if (!msg) {
    return false;
  }
  // front_left
  if (!deva_function_msgs__msg__WheelInfo__init(&msg->front_left)) {
    deva_function_msgs__msg__WheelSpeed__fini(msg);
    return false;
  }
  // front_right
  if (!deva_function_msgs__msg__WheelInfo__init(&msg->front_right)) {
    deva_function_msgs__msg__WheelSpeed__fini(msg);
    return false;
  }
  // rear_left
  if (!deva_function_msgs__msg__WheelInfo__init(&msg->rear_left)) {
    deva_function_msgs__msg__WheelSpeed__fini(msg);
    return false;
  }
  // rear_right
  if (!deva_function_msgs__msg__WheelInfo__init(&msg->rear_right)) {
    deva_function_msgs__msg__WheelSpeed__fini(msg);
    return false;
  }
  return true;
}

void
deva_function_msgs__msg__WheelSpeed__fini(deva_function_msgs__msg__WheelSpeed * msg)
{
  if (!msg) {
    return;
  }
  // front_left
  deva_function_msgs__msg__WheelInfo__fini(&msg->front_left);
  // front_right
  deva_function_msgs__msg__WheelInfo__fini(&msg->front_right);
  // rear_left
  deva_function_msgs__msg__WheelInfo__fini(&msg->rear_left);
  // rear_right
  deva_function_msgs__msg__WheelInfo__fini(&msg->rear_right);
}

bool
deva_function_msgs__msg__WheelSpeed__are_equal(const deva_function_msgs__msg__WheelSpeed * lhs, const deva_function_msgs__msg__WheelSpeed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // front_left
  if (!deva_function_msgs__msg__WheelInfo__are_equal(
      &(lhs->front_left), &(rhs->front_left)))
  {
    return false;
  }
  // front_right
  if (!deva_function_msgs__msg__WheelInfo__are_equal(
      &(lhs->front_right), &(rhs->front_right)))
  {
    return false;
  }
  // rear_left
  if (!deva_function_msgs__msg__WheelInfo__are_equal(
      &(lhs->rear_left), &(rhs->rear_left)))
  {
    return false;
  }
  // rear_right
  if (!deva_function_msgs__msg__WheelInfo__are_equal(
      &(lhs->rear_right), &(rhs->rear_right)))
  {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__WheelSpeed__copy(
  const deva_function_msgs__msg__WheelSpeed * input,
  deva_function_msgs__msg__WheelSpeed * output)
{
  if (!input || !output) {
    return false;
  }
  // front_left
  if (!deva_function_msgs__msg__WheelInfo__copy(
      &(input->front_left), &(output->front_left)))
  {
    return false;
  }
  // front_right
  if (!deva_function_msgs__msg__WheelInfo__copy(
      &(input->front_right), &(output->front_right)))
  {
    return false;
  }
  // rear_left
  if (!deva_function_msgs__msg__WheelInfo__copy(
      &(input->rear_left), &(output->rear_left)))
  {
    return false;
  }
  // rear_right
  if (!deva_function_msgs__msg__WheelInfo__copy(
      &(input->rear_right), &(output->rear_right)))
  {
    return false;
  }
  return true;
}

deva_function_msgs__msg__WheelSpeed *
deva_function_msgs__msg__WheelSpeed__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__WheelSpeed * msg = (deva_function_msgs__msg__WheelSpeed *)allocator.allocate(sizeof(deva_function_msgs__msg__WheelSpeed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__WheelSpeed));
  bool success = deva_function_msgs__msg__WheelSpeed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__WheelSpeed__destroy(deva_function_msgs__msg__WheelSpeed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__WheelSpeed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__WheelSpeed__Sequence__init(deva_function_msgs__msg__WheelSpeed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__WheelSpeed * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__WheelSpeed *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__WheelSpeed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__WheelSpeed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__WheelSpeed__fini(&data[i - 1]);
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
deva_function_msgs__msg__WheelSpeed__Sequence__fini(deva_function_msgs__msg__WheelSpeed__Sequence * array)
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
      deva_function_msgs__msg__WheelSpeed__fini(&array->data[i]);
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

deva_function_msgs__msg__WheelSpeed__Sequence *
deva_function_msgs__msg__WheelSpeed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__WheelSpeed__Sequence * array = (deva_function_msgs__msg__WheelSpeed__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__WheelSpeed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__WheelSpeed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__WheelSpeed__Sequence__destroy(deva_function_msgs__msg__WheelSpeed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__WheelSpeed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__WheelSpeed__Sequence__are_equal(const deva_function_msgs__msg__WheelSpeed__Sequence * lhs, const deva_function_msgs__msg__WheelSpeed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__WheelSpeed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__WheelSpeed__Sequence__copy(
  const deva_function_msgs__msg__WheelSpeed__Sequence * input,
  deva_function_msgs__msg__WheelSpeed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__WheelSpeed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__WheelSpeed * data =
      (deva_function_msgs__msg__WheelSpeed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__WheelSpeed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__WheelSpeed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__WheelSpeed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
