// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/FsmModuleRunningStateMsg.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/fsm_module_running_state_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `module_name`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_function_msgs__msg__FsmModuleRunningStateMsg__init(deva_function_msgs__msg__FsmModuleRunningStateMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__FsmModuleRunningStateMsg__fini(msg);
    return false;
  }
  // module_name
  if (!rosidl_runtime_c__String__init(&msg->module_name)) {
    deva_function_msgs__msg__FsmModuleRunningStateMsg__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    deva_function_msgs__msg__FsmModuleRunningStateMsg__fini(msg);
    return false;
  }
  return true;
}

void
deva_function_msgs__msg__FsmModuleRunningStateMsg__fini(deva_function_msgs__msg__FsmModuleRunningStateMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // module_name
  rosidl_runtime_c__String__fini(&msg->module_name);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

bool
deva_function_msgs__msg__FsmModuleRunningStateMsg__are_equal(const deva_function_msgs__msg__FsmModuleRunningStateMsg * lhs, const deva_function_msgs__msg__FsmModuleRunningStateMsg * rhs)
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
  // module_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->module_name), &(rhs->module_name)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__FsmModuleRunningStateMsg__copy(
  const deva_function_msgs__msg__FsmModuleRunningStateMsg * input,
  deva_function_msgs__msg__FsmModuleRunningStateMsg * output)
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
  // module_name
  if (!rosidl_runtime_c__String__copy(
      &(input->module_name), &(output->module_name)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

deva_function_msgs__msg__FsmModuleRunningStateMsg *
deva_function_msgs__msg__FsmModuleRunningStateMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__FsmModuleRunningStateMsg * msg = (deva_function_msgs__msg__FsmModuleRunningStateMsg *)allocator.allocate(sizeof(deva_function_msgs__msg__FsmModuleRunningStateMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__FsmModuleRunningStateMsg));
  bool success = deva_function_msgs__msg__FsmModuleRunningStateMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__FsmModuleRunningStateMsg__destroy(deva_function_msgs__msg__FsmModuleRunningStateMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__FsmModuleRunningStateMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence__init(deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__FsmModuleRunningStateMsg * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__FsmModuleRunningStateMsg *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__FsmModuleRunningStateMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__FsmModuleRunningStateMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__FsmModuleRunningStateMsg__fini(&data[i - 1]);
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
deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence__fini(deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence * array)
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
      deva_function_msgs__msg__FsmModuleRunningStateMsg__fini(&array->data[i]);
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

deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence *
deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence * array = (deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence__destroy(deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence__are_equal(const deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence * lhs, const deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__FsmModuleRunningStateMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence__copy(
  const deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence * input,
  deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__FsmModuleRunningStateMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__FsmModuleRunningStateMsg * data =
      (deva_function_msgs__msg__FsmModuleRunningStateMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__FsmModuleRunningStateMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__FsmModuleRunningStateMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__FsmModuleRunningStateMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
