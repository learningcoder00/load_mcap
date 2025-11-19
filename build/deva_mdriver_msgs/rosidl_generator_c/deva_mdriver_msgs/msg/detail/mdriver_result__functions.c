// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_mdriver_msgs:msg/MdriverResult.idl
// generated code does not contain a copyright notice
#include "deva_mdriver_msgs/msg/detail/mdriver_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `worlds`
#include "deva_mdriver_msgs/msg/detail/m_world__functions.h"

bool
deva_mdriver_msgs__msg__MdriverResult__init(deva_mdriver_msgs__msg__MdriverResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_mdriver_msgs__msg__MdriverResult__fini(msg);
    return false;
  }
  // worlds
  if (!deva_mdriver_msgs__msg__MWorld__Sequence__init(&msg->worlds, 0)) {
    deva_mdriver_msgs__msg__MdriverResult__fini(msg);
    return false;
  }
  return true;
}

void
deva_mdriver_msgs__msg__MdriverResult__fini(deva_mdriver_msgs__msg__MdriverResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // worlds
  deva_mdriver_msgs__msg__MWorld__Sequence__fini(&msg->worlds);
}

bool
deva_mdriver_msgs__msg__MdriverResult__are_equal(const deva_mdriver_msgs__msg__MdriverResult * lhs, const deva_mdriver_msgs__msg__MdriverResult * rhs)
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
  // worlds
  if (!deva_mdriver_msgs__msg__MWorld__Sequence__are_equal(
      &(lhs->worlds), &(rhs->worlds)))
  {
    return false;
  }
  return true;
}

bool
deva_mdriver_msgs__msg__MdriverResult__copy(
  const deva_mdriver_msgs__msg__MdriverResult * input,
  deva_mdriver_msgs__msg__MdriverResult * output)
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
  // worlds
  if (!deva_mdriver_msgs__msg__MWorld__Sequence__copy(
      &(input->worlds), &(output->worlds)))
  {
    return false;
  }
  return true;
}

deva_mdriver_msgs__msg__MdriverResult *
deva_mdriver_msgs__msg__MdriverResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__MdriverResult * msg = (deva_mdriver_msgs__msg__MdriverResult *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__MdriverResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_mdriver_msgs__msg__MdriverResult));
  bool success = deva_mdriver_msgs__msg__MdriverResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_mdriver_msgs__msg__MdriverResult__destroy(deva_mdriver_msgs__msg__MdriverResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_mdriver_msgs__msg__MdriverResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_mdriver_msgs__msg__MdriverResult__Sequence__init(deva_mdriver_msgs__msg__MdriverResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__MdriverResult * data = NULL;

  if (size) {
    data = (deva_mdriver_msgs__msg__MdriverResult *)allocator.zero_allocate(size, sizeof(deva_mdriver_msgs__msg__MdriverResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_mdriver_msgs__msg__MdriverResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_mdriver_msgs__msg__MdriverResult__fini(&data[i - 1]);
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
deva_mdriver_msgs__msg__MdriverResult__Sequence__fini(deva_mdriver_msgs__msg__MdriverResult__Sequence * array)
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
      deva_mdriver_msgs__msg__MdriverResult__fini(&array->data[i]);
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

deva_mdriver_msgs__msg__MdriverResult__Sequence *
deva_mdriver_msgs__msg__MdriverResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__MdriverResult__Sequence * array = (deva_mdriver_msgs__msg__MdriverResult__Sequence *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__MdriverResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_mdriver_msgs__msg__MdriverResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_mdriver_msgs__msg__MdriverResult__Sequence__destroy(deva_mdriver_msgs__msg__MdriverResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_mdriver_msgs__msg__MdriverResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_mdriver_msgs__msg__MdriverResult__Sequence__are_equal(const deva_mdriver_msgs__msg__MdriverResult__Sequence * lhs, const deva_mdriver_msgs__msg__MdriverResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_mdriver_msgs__msg__MdriverResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_mdriver_msgs__msg__MdriverResult__Sequence__copy(
  const deva_mdriver_msgs__msg__MdriverResult__Sequence * input,
  deva_mdriver_msgs__msg__MdriverResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_mdriver_msgs__msg__MdriverResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_mdriver_msgs__msg__MdriverResult * data =
      (deva_mdriver_msgs__msg__MdriverResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_mdriver_msgs__msg__MdriverResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_mdriver_msgs__msg__MdriverResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_mdriver_msgs__msg__MdriverResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
