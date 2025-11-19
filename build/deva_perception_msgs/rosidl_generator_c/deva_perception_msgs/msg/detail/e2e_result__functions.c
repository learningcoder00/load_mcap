// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/E2eResult.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/e2e_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `broadcategory`
#include "deva_perception_msgs/msg/detail/e2e_decode_broad_result__functions.h"
// Member `turn_around`
// Member `left`
// Member `straight`
// Member `right`
#include "deva_perception_msgs/msg/detail/e2e_decode_result__functions.h"

bool
deva_perception_msgs__msg__E2eResult__init(deva_perception_msgs__msg__E2eResult * msg)
{
  if (!msg) {
    return false;
  }
  // broadcategory
  if (!deva_perception_msgs__msg__E2eDecodeBroadResult__init(&msg->broadcategory)) {
    deva_perception_msgs__msg__E2eResult__fini(msg);
    return false;
  }
  // turn_around
  if (!deva_perception_msgs__msg__E2eDecodeResult__init(&msg->turn_around)) {
    deva_perception_msgs__msg__E2eResult__fini(msg);
    return false;
  }
  // left
  if (!deva_perception_msgs__msg__E2eDecodeResult__init(&msg->left)) {
    deva_perception_msgs__msg__E2eResult__fini(msg);
    return false;
  }
  // straight
  if (!deva_perception_msgs__msg__E2eDecodeResult__init(&msg->straight)) {
    deva_perception_msgs__msg__E2eResult__fini(msg);
    return false;
  }
  // right
  if (!deva_perception_msgs__msg__E2eDecodeResult__init(&msg->right)) {
    deva_perception_msgs__msg__E2eResult__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__E2eResult__fini(deva_perception_msgs__msg__E2eResult * msg)
{
  if (!msg) {
    return;
  }
  // broadcategory
  deva_perception_msgs__msg__E2eDecodeBroadResult__fini(&msg->broadcategory);
  // turn_around
  deva_perception_msgs__msg__E2eDecodeResult__fini(&msg->turn_around);
  // left
  deva_perception_msgs__msg__E2eDecodeResult__fini(&msg->left);
  // straight
  deva_perception_msgs__msg__E2eDecodeResult__fini(&msg->straight);
  // right
  deva_perception_msgs__msg__E2eDecodeResult__fini(&msg->right);
}

bool
deva_perception_msgs__msg__E2eResult__are_equal(const deva_perception_msgs__msg__E2eResult * lhs, const deva_perception_msgs__msg__E2eResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // broadcategory
  if (!deva_perception_msgs__msg__E2eDecodeBroadResult__are_equal(
      &(lhs->broadcategory), &(rhs->broadcategory)))
  {
    return false;
  }
  // turn_around
  if (!deva_perception_msgs__msg__E2eDecodeResult__are_equal(
      &(lhs->turn_around), &(rhs->turn_around)))
  {
    return false;
  }
  // left
  if (!deva_perception_msgs__msg__E2eDecodeResult__are_equal(
      &(lhs->left), &(rhs->left)))
  {
    return false;
  }
  // straight
  if (!deva_perception_msgs__msg__E2eDecodeResult__are_equal(
      &(lhs->straight), &(rhs->straight)))
  {
    return false;
  }
  // right
  if (!deva_perception_msgs__msg__E2eDecodeResult__are_equal(
      &(lhs->right), &(rhs->right)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__E2eResult__copy(
  const deva_perception_msgs__msg__E2eResult * input,
  deva_perception_msgs__msg__E2eResult * output)
{
  if (!input || !output) {
    return false;
  }
  // broadcategory
  if (!deva_perception_msgs__msg__E2eDecodeBroadResult__copy(
      &(input->broadcategory), &(output->broadcategory)))
  {
    return false;
  }
  // turn_around
  if (!deva_perception_msgs__msg__E2eDecodeResult__copy(
      &(input->turn_around), &(output->turn_around)))
  {
    return false;
  }
  // left
  if (!deva_perception_msgs__msg__E2eDecodeResult__copy(
      &(input->left), &(output->left)))
  {
    return false;
  }
  // straight
  if (!deva_perception_msgs__msg__E2eDecodeResult__copy(
      &(input->straight), &(output->straight)))
  {
    return false;
  }
  // right
  if (!deva_perception_msgs__msg__E2eDecodeResult__copy(
      &(input->right), &(output->right)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__E2eResult *
deva_perception_msgs__msg__E2eResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eResult * msg = (deva_perception_msgs__msg__E2eResult *)allocator.allocate(sizeof(deva_perception_msgs__msg__E2eResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__E2eResult));
  bool success = deva_perception_msgs__msg__E2eResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__E2eResult__destroy(deva_perception_msgs__msg__E2eResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__E2eResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__E2eResult__Sequence__init(deva_perception_msgs__msg__E2eResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eResult * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__E2eResult *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__E2eResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__E2eResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__E2eResult__fini(&data[i - 1]);
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
deva_perception_msgs__msg__E2eResult__Sequence__fini(deva_perception_msgs__msg__E2eResult__Sequence * array)
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
      deva_perception_msgs__msg__E2eResult__fini(&array->data[i]);
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

deva_perception_msgs__msg__E2eResult__Sequence *
deva_perception_msgs__msg__E2eResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eResult__Sequence * array = (deva_perception_msgs__msg__E2eResult__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__E2eResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__E2eResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__E2eResult__Sequence__destroy(deva_perception_msgs__msg__E2eResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__E2eResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__E2eResult__Sequence__are_equal(const deva_perception_msgs__msg__E2eResult__Sequence * lhs, const deva_perception_msgs__msg__E2eResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__E2eResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__E2eResult__Sequence__copy(
  const deva_perception_msgs__msg__E2eResult__Sequence * input,
  deva_perception_msgs__msg__E2eResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__E2eResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__E2eResult * data =
      (deva_perception_msgs__msg__E2eResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__E2eResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__E2eResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__E2eResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
