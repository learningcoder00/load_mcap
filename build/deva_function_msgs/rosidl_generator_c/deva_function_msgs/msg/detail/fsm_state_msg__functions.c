// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/FsmStateMsg.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/fsm_state_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `fsm_state`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_function_msgs__msg__FsmStateMsg__init(deva_function_msgs__msg__FsmStateMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__FsmStateMsg__fini(msg);
    return false;
  }
  // publish_timestamp
  // fsm_state
  if (!rosidl_runtime_c__String__init(&msg->fsm_state)) {
    deva_function_msgs__msg__FsmStateMsg__fini(msg);
    return false;
  }
  // top_state
  // acc_state
  // icc_state
  // noa_state
  // d2d_state
  // calibra_state
  // mapping_state
  // parking_state
  return true;
}

void
deva_function_msgs__msg__FsmStateMsg__fini(deva_function_msgs__msg__FsmStateMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // publish_timestamp
  // fsm_state
  rosidl_runtime_c__String__fini(&msg->fsm_state);
  // top_state
  // acc_state
  // icc_state
  // noa_state
  // d2d_state
  // calibra_state
  // mapping_state
  // parking_state
}

bool
deva_function_msgs__msg__FsmStateMsg__are_equal(const deva_function_msgs__msg__FsmStateMsg * lhs, const deva_function_msgs__msg__FsmStateMsg * rhs)
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
  // publish_timestamp
  if (lhs->publish_timestamp != rhs->publish_timestamp) {
    return false;
  }
  // fsm_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fsm_state), &(rhs->fsm_state)))
  {
    return false;
  }
  // top_state
  if (lhs->top_state != rhs->top_state) {
    return false;
  }
  // acc_state
  if (lhs->acc_state != rhs->acc_state) {
    return false;
  }
  // icc_state
  if (lhs->icc_state != rhs->icc_state) {
    return false;
  }
  // noa_state
  if (lhs->noa_state != rhs->noa_state) {
    return false;
  }
  // d2d_state
  if (lhs->d2d_state != rhs->d2d_state) {
    return false;
  }
  // calibra_state
  if (lhs->calibra_state != rhs->calibra_state) {
    return false;
  }
  // mapping_state
  if (lhs->mapping_state != rhs->mapping_state) {
    return false;
  }
  // parking_state
  if (lhs->parking_state != rhs->parking_state) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__FsmStateMsg__copy(
  const deva_function_msgs__msg__FsmStateMsg * input,
  deva_function_msgs__msg__FsmStateMsg * output)
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
  // publish_timestamp
  output->publish_timestamp = input->publish_timestamp;
  // fsm_state
  if (!rosidl_runtime_c__String__copy(
      &(input->fsm_state), &(output->fsm_state)))
  {
    return false;
  }
  // top_state
  output->top_state = input->top_state;
  // acc_state
  output->acc_state = input->acc_state;
  // icc_state
  output->icc_state = input->icc_state;
  // noa_state
  output->noa_state = input->noa_state;
  // d2d_state
  output->d2d_state = input->d2d_state;
  // calibra_state
  output->calibra_state = input->calibra_state;
  // mapping_state
  output->mapping_state = input->mapping_state;
  // parking_state
  output->parking_state = input->parking_state;
  return true;
}

deva_function_msgs__msg__FsmStateMsg *
deva_function_msgs__msg__FsmStateMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__FsmStateMsg * msg = (deva_function_msgs__msg__FsmStateMsg *)allocator.allocate(sizeof(deva_function_msgs__msg__FsmStateMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__FsmStateMsg));
  bool success = deva_function_msgs__msg__FsmStateMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__FsmStateMsg__destroy(deva_function_msgs__msg__FsmStateMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__FsmStateMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__FsmStateMsg__Sequence__init(deva_function_msgs__msg__FsmStateMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__FsmStateMsg * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__FsmStateMsg *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__FsmStateMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__FsmStateMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__FsmStateMsg__fini(&data[i - 1]);
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
deva_function_msgs__msg__FsmStateMsg__Sequence__fini(deva_function_msgs__msg__FsmStateMsg__Sequence * array)
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
      deva_function_msgs__msg__FsmStateMsg__fini(&array->data[i]);
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

deva_function_msgs__msg__FsmStateMsg__Sequence *
deva_function_msgs__msg__FsmStateMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__FsmStateMsg__Sequence * array = (deva_function_msgs__msg__FsmStateMsg__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__FsmStateMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__FsmStateMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__FsmStateMsg__Sequence__destroy(deva_function_msgs__msg__FsmStateMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__FsmStateMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__FsmStateMsg__Sequence__are_equal(const deva_function_msgs__msg__FsmStateMsg__Sequence * lhs, const deva_function_msgs__msg__FsmStateMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__FsmStateMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__FsmStateMsg__Sequence__copy(
  const deva_function_msgs__msg__FsmStateMsg__Sequence * input,
  deva_function_msgs__msg__FsmStateMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__FsmStateMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__FsmStateMsg * data =
      (deva_function_msgs__msg__FsmStateMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__FsmStateMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__FsmStateMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__FsmStateMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
