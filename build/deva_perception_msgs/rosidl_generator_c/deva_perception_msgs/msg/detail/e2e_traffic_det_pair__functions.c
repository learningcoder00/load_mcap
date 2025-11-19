// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/E2eTrafficDetPair.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/e2e_traffic_det_pair__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `e2e_decode_result`
#include "deva_perception_msgs/msg/detail/e2e_decode_result__functions.h"

bool
deva_perception_msgs__msg__E2eTrafficDetPair__init(deva_perception_msgs__msg__E2eTrafficDetPair * msg)
{
  if (!msg) {
    return false;
  }
  // traffic_e2e_result
  // e2e_decode_result
  if (!deva_perception_msgs__msg__E2eDecodeResult__init(&msg->e2e_decode_result)) {
    deva_perception_msgs__msg__E2eTrafficDetPair__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__E2eTrafficDetPair__fini(deva_perception_msgs__msg__E2eTrafficDetPair * msg)
{
  if (!msg) {
    return;
  }
  // traffic_e2e_result
  // e2e_decode_result
  deva_perception_msgs__msg__E2eDecodeResult__fini(&msg->e2e_decode_result);
}

bool
deva_perception_msgs__msg__E2eTrafficDetPair__are_equal(const deva_perception_msgs__msg__E2eTrafficDetPair * lhs, const deva_perception_msgs__msg__E2eTrafficDetPair * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // traffic_e2e_result
  if (lhs->traffic_e2e_result != rhs->traffic_e2e_result) {
    return false;
  }
  // e2e_decode_result
  if (!deva_perception_msgs__msg__E2eDecodeResult__are_equal(
      &(lhs->e2e_decode_result), &(rhs->e2e_decode_result)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__E2eTrafficDetPair__copy(
  const deva_perception_msgs__msg__E2eTrafficDetPair * input,
  deva_perception_msgs__msg__E2eTrafficDetPair * output)
{
  if (!input || !output) {
    return false;
  }
  // traffic_e2e_result
  output->traffic_e2e_result = input->traffic_e2e_result;
  // e2e_decode_result
  if (!deva_perception_msgs__msg__E2eDecodeResult__copy(
      &(input->e2e_decode_result), &(output->e2e_decode_result)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__E2eTrafficDetPair *
deva_perception_msgs__msg__E2eTrafficDetPair__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eTrafficDetPair * msg = (deva_perception_msgs__msg__E2eTrafficDetPair *)allocator.allocate(sizeof(deva_perception_msgs__msg__E2eTrafficDetPair), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__E2eTrafficDetPair));
  bool success = deva_perception_msgs__msg__E2eTrafficDetPair__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__E2eTrafficDetPair__destroy(deva_perception_msgs__msg__E2eTrafficDetPair * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__E2eTrafficDetPair__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__init(deva_perception_msgs__msg__E2eTrafficDetPair__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eTrafficDetPair * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__E2eTrafficDetPair *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__E2eTrafficDetPair), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__E2eTrafficDetPair__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__E2eTrafficDetPair__fini(&data[i - 1]);
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
deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__fini(deva_perception_msgs__msg__E2eTrafficDetPair__Sequence * array)
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
      deva_perception_msgs__msg__E2eTrafficDetPair__fini(&array->data[i]);
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

deva_perception_msgs__msg__E2eTrafficDetPair__Sequence *
deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eTrafficDetPair__Sequence * array = (deva_perception_msgs__msg__E2eTrafficDetPair__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__E2eTrafficDetPair__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__destroy(deva_perception_msgs__msg__E2eTrafficDetPair__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__are_equal(const deva_perception_msgs__msg__E2eTrafficDetPair__Sequence * lhs, const deva_perception_msgs__msg__E2eTrafficDetPair__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__E2eTrafficDetPair__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__copy(
  const deva_perception_msgs__msg__E2eTrafficDetPair__Sequence * input,
  deva_perception_msgs__msg__E2eTrafficDetPair__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__E2eTrafficDetPair);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__E2eTrafficDetPair * data =
      (deva_perception_msgs__msg__E2eTrafficDetPair *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__E2eTrafficDetPair__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__E2eTrafficDetPair__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__E2eTrafficDetPair__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
