// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_ads_msgs:msg/AdsInfo.idl
// generated code does not contain a copyright notice
#include "deva_ads_msgs/msg/detail/ads_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `key`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_ads_msgs__msg__AdsInfo__init(deva_ads_msgs__msg__AdsInfo * msg)
{
  if (!msg) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__init(&msg->key)) {
    deva_ads_msgs__msg__AdsInfo__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__init(&msg->value)) {
    deva_ads_msgs__msg__AdsInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_ads_msgs__msg__AdsInfo__fini(deva_ads_msgs__msg__AdsInfo * msg)
{
  if (!msg) {
    return;
  }
  // key
  rosidl_runtime_c__String__fini(&msg->key);
  // value
  rosidl_runtime_c__String__fini(&msg->value);
}

bool
deva_ads_msgs__msg__AdsInfo__are_equal(const deva_ads_msgs__msg__AdsInfo * lhs, const deva_ads_msgs__msg__AdsInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->key), &(rhs->key)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
deva_ads_msgs__msg__AdsInfo__copy(
  const deva_ads_msgs__msg__AdsInfo * input,
  deva_ads_msgs__msg__AdsInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__copy(
      &(input->key), &(output->key)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

deva_ads_msgs__msg__AdsInfo *
deva_ads_msgs__msg__AdsInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_ads_msgs__msg__AdsInfo * msg = (deva_ads_msgs__msg__AdsInfo *)allocator.allocate(sizeof(deva_ads_msgs__msg__AdsInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_ads_msgs__msg__AdsInfo));
  bool success = deva_ads_msgs__msg__AdsInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_ads_msgs__msg__AdsInfo__destroy(deva_ads_msgs__msg__AdsInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_ads_msgs__msg__AdsInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_ads_msgs__msg__AdsInfo__Sequence__init(deva_ads_msgs__msg__AdsInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_ads_msgs__msg__AdsInfo * data = NULL;

  if (size) {
    data = (deva_ads_msgs__msg__AdsInfo *)allocator.zero_allocate(size, sizeof(deva_ads_msgs__msg__AdsInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_ads_msgs__msg__AdsInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_ads_msgs__msg__AdsInfo__fini(&data[i - 1]);
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
deva_ads_msgs__msg__AdsInfo__Sequence__fini(deva_ads_msgs__msg__AdsInfo__Sequence * array)
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
      deva_ads_msgs__msg__AdsInfo__fini(&array->data[i]);
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

deva_ads_msgs__msg__AdsInfo__Sequence *
deva_ads_msgs__msg__AdsInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_ads_msgs__msg__AdsInfo__Sequence * array = (deva_ads_msgs__msg__AdsInfo__Sequence *)allocator.allocate(sizeof(deva_ads_msgs__msg__AdsInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_ads_msgs__msg__AdsInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_ads_msgs__msg__AdsInfo__Sequence__destroy(deva_ads_msgs__msg__AdsInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_ads_msgs__msg__AdsInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_ads_msgs__msg__AdsInfo__Sequence__are_equal(const deva_ads_msgs__msg__AdsInfo__Sequence * lhs, const deva_ads_msgs__msg__AdsInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_ads_msgs__msg__AdsInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_ads_msgs__msg__AdsInfo__Sequence__copy(
  const deva_ads_msgs__msg__AdsInfo__Sequence * input,
  deva_ads_msgs__msg__AdsInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_ads_msgs__msg__AdsInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_ads_msgs__msg__AdsInfo * data =
      (deva_ads_msgs__msg__AdsInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_ads_msgs__msg__AdsInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_ads_msgs__msg__AdsInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_ads_msgs__msg__AdsInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
