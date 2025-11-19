// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rviz_plug_msg:msg/ErrorEnum.idl
// generated code does not contain a copyright notice
#include "rviz_plug_msg/msg/detail/error_enum__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rviz_plug_msg__msg__ErrorEnum__init(rviz_plug_msg__msg__ErrorEnum * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rviz_plug_msg__msg__ErrorEnum__fini(rviz_plug_msg__msg__ErrorEnum * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rviz_plug_msg__msg__ErrorEnum__are_equal(const rviz_plug_msg__msg__ErrorEnum * lhs, const rviz_plug_msg__msg__ErrorEnum * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
rviz_plug_msg__msg__ErrorEnum__copy(
  const rviz_plug_msg__msg__ErrorEnum * input,
  rviz_plug_msg__msg__ErrorEnum * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rviz_plug_msg__msg__ErrorEnum *
rviz_plug_msg__msg__ErrorEnum__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__ErrorEnum * msg = (rviz_plug_msg__msg__ErrorEnum *)allocator.allocate(sizeof(rviz_plug_msg__msg__ErrorEnum), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rviz_plug_msg__msg__ErrorEnum));
  bool success = rviz_plug_msg__msg__ErrorEnum__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rviz_plug_msg__msg__ErrorEnum__destroy(rviz_plug_msg__msg__ErrorEnum * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rviz_plug_msg__msg__ErrorEnum__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rviz_plug_msg__msg__ErrorEnum__Sequence__init(rviz_plug_msg__msg__ErrorEnum__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__ErrorEnum * data = NULL;

  if (size) {
    data = (rviz_plug_msg__msg__ErrorEnum *)allocator.zero_allocate(size, sizeof(rviz_plug_msg__msg__ErrorEnum), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rviz_plug_msg__msg__ErrorEnum__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rviz_plug_msg__msg__ErrorEnum__fini(&data[i - 1]);
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
rviz_plug_msg__msg__ErrorEnum__Sequence__fini(rviz_plug_msg__msg__ErrorEnum__Sequence * array)
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
      rviz_plug_msg__msg__ErrorEnum__fini(&array->data[i]);
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

rviz_plug_msg__msg__ErrorEnum__Sequence *
rviz_plug_msg__msg__ErrorEnum__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__ErrorEnum__Sequence * array = (rviz_plug_msg__msg__ErrorEnum__Sequence *)allocator.allocate(sizeof(rviz_plug_msg__msg__ErrorEnum__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rviz_plug_msg__msg__ErrorEnum__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rviz_plug_msg__msg__ErrorEnum__Sequence__destroy(rviz_plug_msg__msg__ErrorEnum__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rviz_plug_msg__msg__ErrorEnum__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rviz_plug_msg__msg__ErrorEnum__Sequence__are_equal(const rviz_plug_msg__msg__ErrorEnum__Sequence * lhs, const rviz_plug_msg__msg__ErrorEnum__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rviz_plug_msg__msg__ErrorEnum__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rviz_plug_msg__msg__ErrorEnum__Sequence__copy(
  const rviz_plug_msg__msg__ErrorEnum__Sequence * input,
  rviz_plug_msg__msg__ErrorEnum__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rviz_plug_msg__msg__ErrorEnum);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rviz_plug_msg__msg__ErrorEnum * data =
      (rviz_plug_msg__msg__ErrorEnum *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rviz_plug_msg__msg__ErrorEnum__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rviz_plug_msg__msg__ErrorEnum__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rviz_plug_msg__msg__ErrorEnum__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
