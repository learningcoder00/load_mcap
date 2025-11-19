// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/FsmTestToolDataMsg.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/fsm_test_tool_data_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `keys`
// Member `values`
// Member `state`
// Member `conditions`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_function_msgs__msg__FsmTestToolDataMsg__init(deva_function_msgs__msg__FsmTestToolDataMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__FsmTestToolDataMsg__fini(msg);
    return false;
  }
  // cmd
  // request_id
  // keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->keys, 0)) {
    deva_function_msgs__msg__FsmTestToolDataMsg__fini(msg);
    return false;
  }
  // values
  if (!rosidl_runtime_c__String__Sequence__init(&msg->values, 0)) {
    deva_function_msgs__msg__FsmTestToolDataMsg__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    deva_function_msgs__msg__FsmTestToolDataMsg__fini(msg);
    return false;
  }
  // conditions
  if (!rosidl_runtime_c__String__Sequence__init(&msg->conditions, 0)) {
    deva_function_msgs__msg__FsmTestToolDataMsg__fini(msg);
    return false;
  }
  return true;
}

void
deva_function_msgs__msg__FsmTestToolDataMsg__fini(deva_function_msgs__msg__FsmTestToolDataMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // cmd
  // request_id
  // keys
  rosidl_runtime_c__String__Sequence__fini(&msg->keys);
  // values
  rosidl_runtime_c__String__Sequence__fini(&msg->values);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // conditions
  rosidl_runtime_c__String__Sequence__fini(&msg->conditions);
}

bool
deva_function_msgs__msg__FsmTestToolDataMsg__are_equal(const deva_function_msgs__msg__FsmTestToolDataMsg * lhs, const deva_function_msgs__msg__FsmTestToolDataMsg * rhs)
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
  // cmd
  if (lhs->cmd != rhs->cmd) {
    return false;
  }
  // request_id
  if (lhs->request_id != rhs->request_id) {
    return false;
  }
  // keys
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->keys), &(rhs->keys)))
  {
    return false;
  }
  // values
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->values), &(rhs->values)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // conditions
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->conditions), &(rhs->conditions)))
  {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__FsmTestToolDataMsg__copy(
  const deva_function_msgs__msg__FsmTestToolDataMsg * input,
  deva_function_msgs__msg__FsmTestToolDataMsg * output)
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
  // cmd
  output->cmd = input->cmd;
  // request_id
  output->request_id = input->request_id;
  // keys
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->keys), &(output->keys)))
  {
    return false;
  }
  // values
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->values), &(output->values)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // conditions
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->conditions), &(output->conditions)))
  {
    return false;
  }
  return true;
}

deva_function_msgs__msg__FsmTestToolDataMsg *
deva_function_msgs__msg__FsmTestToolDataMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__FsmTestToolDataMsg * msg = (deva_function_msgs__msg__FsmTestToolDataMsg *)allocator.allocate(sizeof(deva_function_msgs__msg__FsmTestToolDataMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__FsmTestToolDataMsg));
  bool success = deva_function_msgs__msg__FsmTestToolDataMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__FsmTestToolDataMsg__destroy(deva_function_msgs__msg__FsmTestToolDataMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__FsmTestToolDataMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__FsmTestToolDataMsg__Sequence__init(deva_function_msgs__msg__FsmTestToolDataMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__FsmTestToolDataMsg * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__FsmTestToolDataMsg *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__FsmTestToolDataMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__FsmTestToolDataMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__FsmTestToolDataMsg__fini(&data[i - 1]);
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
deva_function_msgs__msg__FsmTestToolDataMsg__Sequence__fini(deva_function_msgs__msg__FsmTestToolDataMsg__Sequence * array)
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
      deva_function_msgs__msg__FsmTestToolDataMsg__fini(&array->data[i]);
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

deva_function_msgs__msg__FsmTestToolDataMsg__Sequence *
deva_function_msgs__msg__FsmTestToolDataMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__FsmTestToolDataMsg__Sequence * array = (deva_function_msgs__msg__FsmTestToolDataMsg__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__FsmTestToolDataMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__FsmTestToolDataMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__FsmTestToolDataMsg__Sequence__destroy(deva_function_msgs__msg__FsmTestToolDataMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__FsmTestToolDataMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__FsmTestToolDataMsg__Sequence__are_equal(const deva_function_msgs__msg__FsmTestToolDataMsg__Sequence * lhs, const deva_function_msgs__msg__FsmTestToolDataMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__FsmTestToolDataMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__FsmTestToolDataMsg__Sequence__copy(
  const deva_function_msgs__msg__FsmTestToolDataMsg__Sequence * input,
  deva_function_msgs__msg__FsmTestToolDataMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__FsmTestToolDataMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__FsmTestToolDataMsg * data =
      (deva_function_msgs__msg__FsmTestToolDataMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__FsmTestToolDataMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__FsmTestToolDataMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__FsmTestToolDataMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
