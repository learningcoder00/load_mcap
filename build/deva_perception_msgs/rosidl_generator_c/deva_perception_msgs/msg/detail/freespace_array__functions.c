// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/FreespaceArray.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/freespace_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `freespace_array`
#include "deva_perception_msgs/msg/detail/freespace_point__functions.h"

bool
deva_perception_msgs__msg__FreespaceArray__init(deva_perception_msgs__msg__FreespaceArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__FreespaceArray__fini(msg);
    return false;
  }
  // freespace_array
  if (!deva_perception_msgs__msg__FreespacePoint__Sequence__init(&msg->freespace_array, 0)) {
    deva_perception_msgs__msg__FreespaceArray__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__FreespaceArray__fini(deva_perception_msgs__msg__FreespaceArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // freespace_array
  deva_perception_msgs__msg__FreespacePoint__Sequence__fini(&msg->freespace_array);
}

bool
deva_perception_msgs__msg__FreespaceArray__are_equal(const deva_perception_msgs__msg__FreespaceArray * lhs, const deva_perception_msgs__msg__FreespaceArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // freespace_array
  if (!deva_perception_msgs__msg__FreespacePoint__Sequence__are_equal(
      &(lhs->freespace_array), &(rhs->freespace_array)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__FreespaceArray__copy(
  const deva_perception_msgs__msg__FreespaceArray * input,
  deva_perception_msgs__msg__FreespaceArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // freespace_array
  if (!deva_perception_msgs__msg__FreespacePoint__Sequence__copy(
      &(input->freespace_array), &(output->freespace_array)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__FreespaceArray *
deva_perception_msgs__msg__FreespaceArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__FreespaceArray * msg = (deva_perception_msgs__msg__FreespaceArray *)allocator.allocate(sizeof(deva_perception_msgs__msg__FreespaceArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__FreespaceArray));
  bool success = deva_perception_msgs__msg__FreespaceArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__FreespaceArray__destroy(deva_perception_msgs__msg__FreespaceArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__FreespaceArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__FreespaceArray__Sequence__init(deva_perception_msgs__msg__FreespaceArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__FreespaceArray * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__FreespaceArray *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__FreespaceArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__FreespaceArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__FreespaceArray__fini(&data[i - 1]);
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
deva_perception_msgs__msg__FreespaceArray__Sequence__fini(deva_perception_msgs__msg__FreespaceArray__Sequence * array)
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
      deva_perception_msgs__msg__FreespaceArray__fini(&array->data[i]);
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

deva_perception_msgs__msg__FreespaceArray__Sequence *
deva_perception_msgs__msg__FreespaceArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__FreespaceArray__Sequence * array = (deva_perception_msgs__msg__FreespaceArray__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__FreespaceArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__FreespaceArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__FreespaceArray__Sequence__destroy(deva_perception_msgs__msg__FreespaceArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__FreespaceArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__FreespaceArray__Sequence__are_equal(const deva_perception_msgs__msg__FreespaceArray__Sequence * lhs, const deva_perception_msgs__msg__FreespaceArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__FreespaceArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__FreespaceArray__Sequence__copy(
  const deva_perception_msgs__msg__FreespaceArray__Sequence * input,
  deva_perception_msgs__msg__FreespaceArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__FreespaceArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__FreespaceArray * data =
      (deva_perception_msgs__msg__FreespaceArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__FreespaceArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__FreespaceArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__FreespaceArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
