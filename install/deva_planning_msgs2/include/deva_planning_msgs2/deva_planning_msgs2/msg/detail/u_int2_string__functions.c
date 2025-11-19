// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/UInt2String.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/u_int2_string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_planning_msgs2__msg__UInt2String__init(deva_planning_msgs2__msg__UInt2String * msg)
{
  if (!msg) {
    return false;
  }
  // key
  // value
  if (!rosidl_runtime_c__String__Sequence__init(&msg->value, 0)) {
    deva_planning_msgs2__msg__UInt2String__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs2__msg__UInt2String__fini(deva_planning_msgs2__msg__UInt2String * msg)
{
  if (!msg) {
    return;
  }
  // key
  // value
  rosidl_runtime_c__String__Sequence__fini(&msg->value);
}

bool
deva_planning_msgs2__msg__UInt2String__are_equal(const deva_planning_msgs2__msg__UInt2String * lhs, const deva_planning_msgs2__msg__UInt2String * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key
  if (lhs->key != rhs->key) {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__UInt2String__copy(
  const deva_planning_msgs2__msg__UInt2String * input,
  deva_planning_msgs2__msg__UInt2String * output)
{
  if (!input || !output) {
    return false;
  }
  // key
  output->key = input->key;
  // value
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs2__msg__UInt2String *
deva_planning_msgs2__msg__UInt2String__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__UInt2String * msg = (deva_planning_msgs2__msg__UInt2String *)allocator.allocate(sizeof(deva_planning_msgs2__msg__UInt2String), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__UInt2String));
  bool success = deva_planning_msgs2__msg__UInt2String__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__UInt2String__destroy(deva_planning_msgs2__msg__UInt2String * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__UInt2String__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__UInt2String__Sequence__init(deva_planning_msgs2__msg__UInt2String__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__UInt2String * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__UInt2String *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__UInt2String), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__UInt2String__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__UInt2String__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__UInt2String__Sequence__fini(deva_planning_msgs2__msg__UInt2String__Sequence * array)
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
      deva_planning_msgs2__msg__UInt2String__fini(&array->data[i]);
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

deva_planning_msgs2__msg__UInt2String__Sequence *
deva_planning_msgs2__msg__UInt2String__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__UInt2String__Sequence * array = (deva_planning_msgs2__msg__UInt2String__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__UInt2String__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__UInt2String__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__UInt2String__Sequence__destroy(deva_planning_msgs2__msg__UInt2String__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__UInt2String__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__UInt2String__Sequence__are_equal(const deva_planning_msgs2__msg__UInt2String__Sequence * lhs, const deva_planning_msgs2__msg__UInt2String__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__UInt2String__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__UInt2String__Sequence__copy(
  const deva_planning_msgs2__msg__UInt2String__Sequence * input,
  deva_planning_msgs2__msg__UInt2String__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__UInt2String);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__UInt2String * data =
      (deva_planning_msgs2__msg__UInt2String *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__UInt2String__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__UInt2String__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__UInt2String__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
