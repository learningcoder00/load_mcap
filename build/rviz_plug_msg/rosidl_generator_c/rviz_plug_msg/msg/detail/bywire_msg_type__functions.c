// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rviz_plug_msg:msg/BywireMsgType.idl
// generated code does not contain a copyright notice
#include "rviz_plug_msg/msg/detail/bywire_msg_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rviz_plug_msg__msg__BywireMsgType__init(rviz_plug_msg__msg__BywireMsgType * msg)
{
  if (!msg) {
    return false;
  }
  // val
  return true;
}

void
rviz_plug_msg__msg__BywireMsgType__fini(rviz_plug_msg__msg__BywireMsgType * msg)
{
  if (!msg) {
    return;
  }
  // val
}

bool
rviz_plug_msg__msg__BywireMsgType__are_equal(const rviz_plug_msg__msg__BywireMsgType * lhs, const rviz_plug_msg__msg__BywireMsgType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // val
  if (lhs->val != rhs->val) {
    return false;
  }
  return true;
}

bool
rviz_plug_msg__msg__BywireMsgType__copy(
  const rviz_plug_msg__msg__BywireMsgType * input,
  rviz_plug_msg__msg__BywireMsgType * output)
{
  if (!input || !output) {
    return false;
  }
  // val
  output->val = input->val;
  return true;
}

rviz_plug_msg__msg__BywireMsgType *
rviz_plug_msg__msg__BywireMsgType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__BywireMsgType * msg = (rviz_plug_msg__msg__BywireMsgType *)allocator.allocate(sizeof(rviz_plug_msg__msg__BywireMsgType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rviz_plug_msg__msg__BywireMsgType));
  bool success = rviz_plug_msg__msg__BywireMsgType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rviz_plug_msg__msg__BywireMsgType__destroy(rviz_plug_msg__msg__BywireMsgType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rviz_plug_msg__msg__BywireMsgType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rviz_plug_msg__msg__BywireMsgType__Sequence__init(rviz_plug_msg__msg__BywireMsgType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__BywireMsgType * data = NULL;

  if (size) {
    data = (rviz_plug_msg__msg__BywireMsgType *)allocator.zero_allocate(size, sizeof(rviz_plug_msg__msg__BywireMsgType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rviz_plug_msg__msg__BywireMsgType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rviz_plug_msg__msg__BywireMsgType__fini(&data[i - 1]);
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
rviz_plug_msg__msg__BywireMsgType__Sequence__fini(rviz_plug_msg__msg__BywireMsgType__Sequence * array)
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
      rviz_plug_msg__msg__BywireMsgType__fini(&array->data[i]);
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

rviz_plug_msg__msg__BywireMsgType__Sequence *
rviz_plug_msg__msg__BywireMsgType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__BywireMsgType__Sequence * array = (rviz_plug_msg__msg__BywireMsgType__Sequence *)allocator.allocate(sizeof(rviz_plug_msg__msg__BywireMsgType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rviz_plug_msg__msg__BywireMsgType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rviz_plug_msg__msg__BywireMsgType__Sequence__destroy(rviz_plug_msg__msg__BywireMsgType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rviz_plug_msg__msg__BywireMsgType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rviz_plug_msg__msg__BywireMsgType__Sequence__are_equal(const rviz_plug_msg__msg__BywireMsgType__Sequence * lhs, const rviz_plug_msg__msg__BywireMsgType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rviz_plug_msg__msg__BywireMsgType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rviz_plug_msg__msg__BywireMsgType__Sequence__copy(
  const rviz_plug_msg__msg__BywireMsgType__Sequence * input,
  rviz_plug_msg__msg__BywireMsgType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rviz_plug_msg__msg__BywireMsgType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rviz_plug_msg__msg__BywireMsgType * data =
      (rviz_plug_msg__msg__BywireMsgType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rviz_plug_msg__msg__BywireMsgType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rviz_plug_msg__msg__BywireMsgType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rviz_plug_msg__msg__BywireMsgType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
