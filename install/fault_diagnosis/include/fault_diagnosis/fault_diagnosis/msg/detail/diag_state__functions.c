// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fault_diagnosis:msg/DiagState.idl
// generated code does not contain a copyright notice
#include "fault_diagnosis/msg/detail/diag_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `fault_name`
// Member `info`
#include "rosidl_runtime_c/string_functions.h"

bool
fault_diagnosis__msg__DiagState__init(fault_diagnosis__msg__DiagState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    fault_diagnosis__msg__DiagState__fini(msg);
    return false;
  }
  // fault_name
  if (!rosidl_runtime_c__String__init(&msg->fault_name)) {
    fault_diagnosis__msg__DiagState__fini(msg);
    return false;
  }
  // state
  // info
  if (!rosidl_runtime_c__String__init(&msg->info)) {
    fault_diagnosis__msg__DiagState__fini(msg);
    return false;
  }
  return true;
}

void
fault_diagnosis__msg__DiagState__fini(fault_diagnosis__msg__DiagState * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // fault_name
  rosidl_runtime_c__String__fini(&msg->fault_name);
  // state
  // info
  rosidl_runtime_c__String__fini(&msg->info);
}

bool
fault_diagnosis__msg__DiagState__are_equal(const fault_diagnosis__msg__DiagState * lhs, const fault_diagnosis__msg__DiagState * rhs)
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
  // fault_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fault_name), &(rhs->fault_name)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  return true;
}

bool
fault_diagnosis__msg__DiagState__copy(
  const fault_diagnosis__msg__DiagState * input,
  fault_diagnosis__msg__DiagState * output)
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
  // fault_name
  if (!rosidl_runtime_c__String__copy(
      &(input->fault_name), &(output->fault_name)))
  {
    return false;
  }
  // state
  output->state = input->state;
  // info
  if (!rosidl_runtime_c__String__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  return true;
}

fault_diagnosis__msg__DiagState *
fault_diagnosis__msg__DiagState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fault_diagnosis__msg__DiagState * msg = (fault_diagnosis__msg__DiagState *)allocator.allocate(sizeof(fault_diagnosis__msg__DiagState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fault_diagnosis__msg__DiagState));
  bool success = fault_diagnosis__msg__DiagState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fault_diagnosis__msg__DiagState__destroy(fault_diagnosis__msg__DiagState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fault_diagnosis__msg__DiagState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fault_diagnosis__msg__DiagState__Sequence__init(fault_diagnosis__msg__DiagState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fault_diagnosis__msg__DiagState * data = NULL;

  if (size) {
    data = (fault_diagnosis__msg__DiagState *)allocator.zero_allocate(size, sizeof(fault_diagnosis__msg__DiagState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fault_diagnosis__msg__DiagState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fault_diagnosis__msg__DiagState__fini(&data[i - 1]);
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
fault_diagnosis__msg__DiagState__Sequence__fini(fault_diagnosis__msg__DiagState__Sequence * array)
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
      fault_diagnosis__msg__DiagState__fini(&array->data[i]);
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

fault_diagnosis__msg__DiagState__Sequence *
fault_diagnosis__msg__DiagState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fault_diagnosis__msg__DiagState__Sequence * array = (fault_diagnosis__msg__DiagState__Sequence *)allocator.allocate(sizeof(fault_diagnosis__msg__DiagState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fault_diagnosis__msg__DiagState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fault_diagnosis__msg__DiagState__Sequence__destroy(fault_diagnosis__msg__DiagState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fault_diagnosis__msg__DiagState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fault_diagnosis__msg__DiagState__Sequence__are_equal(const fault_diagnosis__msg__DiagState__Sequence * lhs, const fault_diagnosis__msg__DiagState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fault_diagnosis__msg__DiagState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fault_diagnosis__msg__DiagState__Sequence__copy(
  const fault_diagnosis__msg__DiagState__Sequence * input,
  fault_diagnosis__msg__DiagState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fault_diagnosis__msg__DiagState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fault_diagnosis__msg__DiagState * data =
      (fault_diagnosis__msg__DiagState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fault_diagnosis__msg__DiagState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fault_diagnosis__msg__DiagState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fault_diagnosis__msg__DiagState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
