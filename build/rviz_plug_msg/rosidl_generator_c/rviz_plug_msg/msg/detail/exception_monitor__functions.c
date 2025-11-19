// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rviz_plug_msg:msg/ExceptionMonitor.idl
// generated code does not contain a copyright notice
#include "rviz_plug_msg/msg/detail/exception_monitor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `exception_content`
#include "rosidl_runtime_c/string_functions.h"

bool
rviz_plug_msg__msg__ExceptionMonitor__init(rviz_plug_msg__msg__ExceptionMonitor * msg)
{
  if (!msg) {
    return false;
  }
  // exception_content
  if (!rosidl_runtime_c__String__Sequence__init(&msg->exception_content, 0)) {
    rviz_plug_msg__msg__ExceptionMonitor__fini(msg);
    return false;
  }
  return true;
}

void
rviz_plug_msg__msg__ExceptionMonitor__fini(rviz_plug_msg__msg__ExceptionMonitor * msg)
{
  if (!msg) {
    return;
  }
  // exception_content
  rosidl_runtime_c__String__Sequence__fini(&msg->exception_content);
}

bool
rviz_plug_msg__msg__ExceptionMonitor__are_equal(const rviz_plug_msg__msg__ExceptionMonitor * lhs, const rviz_plug_msg__msg__ExceptionMonitor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // exception_content
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->exception_content), &(rhs->exception_content)))
  {
    return false;
  }
  return true;
}

bool
rviz_plug_msg__msg__ExceptionMonitor__copy(
  const rviz_plug_msg__msg__ExceptionMonitor * input,
  rviz_plug_msg__msg__ExceptionMonitor * output)
{
  if (!input || !output) {
    return false;
  }
  // exception_content
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->exception_content), &(output->exception_content)))
  {
    return false;
  }
  return true;
}

rviz_plug_msg__msg__ExceptionMonitor *
rviz_plug_msg__msg__ExceptionMonitor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__ExceptionMonitor * msg = (rviz_plug_msg__msg__ExceptionMonitor *)allocator.allocate(sizeof(rviz_plug_msg__msg__ExceptionMonitor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rviz_plug_msg__msg__ExceptionMonitor));
  bool success = rviz_plug_msg__msg__ExceptionMonitor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rviz_plug_msg__msg__ExceptionMonitor__destroy(rviz_plug_msg__msg__ExceptionMonitor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rviz_plug_msg__msg__ExceptionMonitor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rviz_plug_msg__msg__ExceptionMonitor__Sequence__init(rviz_plug_msg__msg__ExceptionMonitor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__ExceptionMonitor * data = NULL;

  if (size) {
    data = (rviz_plug_msg__msg__ExceptionMonitor *)allocator.zero_allocate(size, sizeof(rviz_plug_msg__msg__ExceptionMonitor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rviz_plug_msg__msg__ExceptionMonitor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rviz_plug_msg__msg__ExceptionMonitor__fini(&data[i - 1]);
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
rviz_plug_msg__msg__ExceptionMonitor__Sequence__fini(rviz_plug_msg__msg__ExceptionMonitor__Sequence * array)
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
      rviz_plug_msg__msg__ExceptionMonitor__fini(&array->data[i]);
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

rviz_plug_msg__msg__ExceptionMonitor__Sequence *
rviz_plug_msg__msg__ExceptionMonitor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__ExceptionMonitor__Sequence * array = (rviz_plug_msg__msg__ExceptionMonitor__Sequence *)allocator.allocate(sizeof(rviz_plug_msg__msg__ExceptionMonitor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rviz_plug_msg__msg__ExceptionMonitor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rviz_plug_msg__msg__ExceptionMonitor__Sequence__destroy(rviz_plug_msg__msg__ExceptionMonitor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rviz_plug_msg__msg__ExceptionMonitor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rviz_plug_msg__msg__ExceptionMonitor__Sequence__are_equal(const rviz_plug_msg__msg__ExceptionMonitor__Sequence * lhs, const rviz_plug_msg__msg__ExceptionMonitor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rviz_plug_msg__msg__ExceptionMonitor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rviz_plug_msg__msg__ExceptionMonitor__Sequence__copy(
  const rviz_plug_msg__msg__ExceptionMonitor__Sequence * input,
  rviz_plug_msg__msg__ExceptionMonitor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rviz_plug_msg__msg__ExceptionMonitor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rviz_plug_msg__msg__ExceptionMonitor * data =
      (rviz_plug_msg__msg__ExceptionMonitor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rviz_plug_msg__msg__ExceptionMonitor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rviz_plug_msg__msg__ExceptionMonitor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rviz_plug_msg__msg__ExceptionMonitor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
