// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fault_diagnosis:msg/OddStatus.idl
// generated code does not contain a copyright notice
#include "fault_diagnosis/msg/detail/odd_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `function_id`
// Member `fault_reasons`
#include "rosidl_runtime_c/string_functions.h"

bool
fault_diagnosis__msg__OddStatus__init(fault_diagnosis__msg__OddStatus * msg)
{
  if (!msg) {
    return false;
  }
  // function_id
  if (!rosidl_runtime_c__String__init(&msg->function_id)) {
    fault_diagnosis__msg__OddStatus__fini(msg);
    return false;
  }
  // state
  // fault_reasons
  if (!rosidl_runtime_c__String__Sequence__init(&msg->fault_reasons, 0)) {
    fault_diagnosis__msg__OddStatus__fini(msg);
    return false;
  }
  return true;
}

void
fault_diagnosis__msg__OddStatus__fini(fault_diagnosis__msg__OddStatus * msg)
{
  if (!msg) {
    return;
  }
  // function_id
  rosidl_runtime_c__String__fini(&msg->function_id);
  // state
  // fault_reasons
  rosidl_runtime_c__String__Sequence__fini(&msg->fault_reasons);
}

bool
fault_diagnosis__msg__OddStatus__are_equal(const fault_diagnosis__msg__OddStatus * lhs, const fault_diagnosis__msg__OddStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // function_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->function_id), &(rhs->function_id)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // fault_reasons
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->fault_reasons), &(rhs->fault_reasons)))
  {
    return false;
  }
  return true;
}

bool
fault_diagnosis__msg__OddStatus__copy(
  const fault_diagnosis__msg__OddStatus * input,
  fault_diagnosis__msg__OddStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // function_id
  if (!rosidl_runtime_c__String__copy(
      &(input->function_id), &(output->function_id)))
  {
    return false;
  }
  // state
  output->state = input->state;
  // fault_reasons
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->fault_reasons), &(output->fault_reasons)))
  {
    return false;
  }
  return true;
}

fault_diagnosis__msg__OddStatus *
fault_diagnosis__msg__OddStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fault_diagnosis__msg__OddStatus * msg = (fault_diagnosis__msg__OddStatus *)allocator.allocate(sizeof(fault_diagnosis__msg__OddStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fault_diagnosis__msg__OddStatus));
  bool success = fault_diagnosis__msg__OddStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fault_diagnosis__msg__OddStatus__destroy(fault_diagnosis__msg__OddStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fault_diagnosis__msg__OddStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fault_diagnosis__msg__OddStatus__Sequence__init(fault_diagnosis__msg__OddStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fault_diagnosis__msg__OddStatus * data = NULL;

  if (size) {
    data = (fault_diagnosis__msg__OddStatus *)allocator.zero_allocate(size, sizeof(fault_diagnosis__msg__OddStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fault_diagnosis__msg__OddStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fault_diagnosis__msg__OddStatus__fini(&data[i - 1]);
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
fault_diagnosis__msg__OddStatus__Sequence__fini(fault_diagnosis__msg__OddStatus__Sequence * array)
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
      fault_diagnosis__msg__OddStatus__fini(&array->data[i]);
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

fault_diagnosis__msg__OddStatus__Sequence *
fault_diagnosis__msg__OddStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fault_diagnosis__msg__OddStatus__Sequence * array = (fault_diagnosis__msg__OddStatus__Sequence *)allocator.allocate(sizeof(fault_diagnosis__msg__OddStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fault_diagnosis__msg__OddStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fault_diagnosis__msg__OddStatus__Sequence__destroy(fault_diagnosis__msg__OddStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fault_diagnosis__msg__OddStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fault_diagnosis__msg__OddStatus__Sequence__are_equal(const fault_diagnosis__msg__OddStatus__Sequence * lhs, const fault_diagnosis__msg__OddStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fault_diagnosis__msg__OddStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fault_diagnosis__msg__OddStatus__Sequence__copy(
  const fault_diagnosis__msg__OddStatus__Sequence * input,
  fault_diagnosis__msg__OddStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fault_diagnosis__msg__OddStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fault_diagnosis__msg__OddStatus * data =
      (fault_diagnosis__msg__OddStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fault_diagnosis__msg__OddStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fault_diagnosis__msg__OddStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fault_diagnosis__msg__OddStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
