// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/LocalMapHeader.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/local_map_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `send_localmap_header`
// Member `received_preseptionmap_header`
// Member `preseptionmap_header`
#include "deva_common_msgs/msg/detail/header__functions.h"

bool
deva_map_msgs__msg__LocalMapHeader__init(deva_map_msgs__msg__LocalMapHeader * msg)
{
  if (!msg) {
    return false;
  }
  // send_localmap_header
  if (!deva_common_msgs__msg__Header__init(&msg->send_localmap_header)) {
    deva_map_msgs__msg__LocalMapHeader__fini(msg);
    return false;
  }
  // received_preseptionmap_header
  if (!deva_common_msgs__msg__Header__init(&msg->received_preseptionmap_header)) {
    deva_map_msgs__msg__LocalMapHeader__fini(msg);
    return false;
  }
  // preseptionmap_header
  if (!deva_common_msgs__msg__Header__init(&msg->preseptionmap_header)) {
    deva_map_msgs__msg__LocalMapHeader__fini(msg);
    return false;
  }
  return true;
}

void
deva_map_msgs__msg__LocalMapHeader__fini(deva_map_msgs__msg__LocalMapHeader * msg)
{
  if (!msg) {
    return;
  }
  // send_localmap_header
  deva_common_msgs__msg__Header__fini(&msg->send_localmap_header);
  // received_preseptionmap_header
  deva_common_msgs__msg__Header__fini(&msg->received_preseptionmap_header);
  // preseptionmap_header
  deva_common_msgs__msg__Header__fini(&msg->preseptionmap_header);
}

bool
deva_map_msgs__msg__LocalMapHeader__are_equal(const deva_map_msgs__msg__LocalMapHeader * lhs, const deva_map_msgs__msg__LocalMapHeader * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // send_localmap_header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->send_localmap_header), &(rhs->send_localmap_header)))
  {
    return false;
  }
  // received_preseptionmap_header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->received_preseptionmap_header), &(rhs->received_preseptionmap_header)))
  {
    return false;
  }
  // preseptionmap_header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->preseptionmap_header), &(rhs->preseptionmap_header)))
  {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__LocalMapHeader__copy(
  const deva_map_msgs__msg__LocalMapHeader * input,
  deva_map_msgs__msg__LocalMapHeader * output)
{
  if (!input || !output) {
    return false;
  }
  // send_localmap_header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->send_localmap_header), &(output->send_localmap_header)))
  {
    return false;
  }
  // received_preseptionmap_header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->received_preseptionmap_header), &(output->received_preseptionmap_header)))
  {
    return false;
  }
  // preseptionmap_header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->preseptionmap_header), &(output->preseptionmap_header)))
  {
    return false;
  }
  return true;
}

deva_map_msgs__msg__LocalMapHeader *
deva_map_msgs__msg__LocalMapHeader__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__LocalMapHeader * msg = (deva_map_msgs__msg__LocalMapHeader *)allocator.allocate(sizeof(deva_map_msgs__msg__LocalMapHeader), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__LocalMapHeader));
  bool success = deva_map_msgs__msg__LocalMapHeader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__LocalMapHeader__destroy(deva_map_msgs__msg__LocalMapHeader * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__LocalMapHeader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__LocalMapHeader__Sequence__init(deva_map_msgs__msg__LocalMapHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__LocalMapHeader * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__LocalMapHeader *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__LocalMapHeader), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__LocalMapHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__LocalMapHeader__fini(&data[i - 1]);
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
deva_map_msgs__msg__LocalMapHeader__Sequence__fini(deva_map_msgs__msg__LocalMapHeader__Sequence * array)
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
      deva_map_msgs__msg__LocalMapHeader__fini(&array->data[i]);
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

deva_map_msgs__msg__LocalMapHeader__Sequence *
deva_map_msgs__msg__LocalMapHeader__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__LocalMapHeader__Sequence * array = (deva_map_msgs__msg__LocalMapHeader__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__LocalMapHeader__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__LocalMapHeader__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__LocalMapHeader__Sequence__destroy(deva_map_msgs__msg__LocalMapHeader__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__LocalMapHeader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__LocalMapHeader__Sequence__are_equal(const deva_map_msgs__msg__LocalMapHeader__Sequence * lhs, const deva_map_msgs__msg__LocalMapHeader__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__LocalMapHeader__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__LocalMapHeader__Sequence__copy(
  const deva_map_msgs__msg__LocalMapHeader__Sequence * input,
  deva_map_msgs__msg__LocalMapHeader__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__LocalMapHeader);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__LocalMapHeader * data =
      (deva_map_msgs__msg__LocalMapHeader *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__LocalMapHeader__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__LocalMapHeader__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__LocalMapHeader__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
