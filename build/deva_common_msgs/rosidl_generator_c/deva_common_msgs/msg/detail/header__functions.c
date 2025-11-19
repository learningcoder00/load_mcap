// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_common_msgs:msg/Header.idl
// generated code does not contain a copyright notice
#include "deva_common_msgs/msg/detail/header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
// Member `pub_stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `frame_id`
#include "deva_common_msgs/msg/detail/string__functions.h"

bool
deva_common_msgs__msg__Header__init(deva_common_msgs__msg__Header * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deva_common_msgs__msg__Header__fini(msg);
    return false;
  }
  // pub_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->pub_stamp)) {
    deva_common_msgs__msg__Header__fini(msg);
    return false;
  }
  // index
  // frame_id
  if (!deva_common_msgs__msg__String__init(&msg->frame_id)) {
    deva_common_msgs__msg__Header__fini(msg);
    return false;
  }
  return true;
}

void
deva_common_msgs__msg__Header__fini(deva_common_msgs__msg__Header * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // pub_stamp
  builtin_interfaces__msg__Time__fini(&msg->pub_stamp);
  // index
  // frame_id
  deva_common_msgs__msg__String__fini(&msg->frame_id);
}

bool
deva_common_msgs__msg__Header__are_equal(const deva_common_msgs__msg__Header * lhs, const deva_common_msgs__msg__Header * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // pub_stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->pub_stamp), &(rhs->pub_stamp)))
  {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // frame_id
  if (!deva_common_msgs__msg__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  return true;
}

bool
deva_common_msgs__msg__Header__copy(
  const deva_common_msgs__msg__Header * input,
  deva_common_msgs__msg__Header * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // pub_stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->pub_stamp), &(output->pub_stamp)))
  {
    return false;
  }
  // index
  output->index = input->index;
  // frame_id
  if (!deva_common_msgs__msg__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  return true;
}

deva_common_msgs__msg__Header *
deva_common_msgs__msg__Header__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__Header * msg = (deva_common_msgs__msg__Header *)allocator.allocate(sizeof(deva_common_msgs__msg__Header), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_common_msgs__msg__Header));
  bool success = deva_common_msgs__msg__Header__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_common_msgs__msg__Header__destroy(deva_common_msgs__msg__Header * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_common_msgs__msg__Header__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_common_msgs__msg__Header__Sequence__init(deva_common_msgs__msg__Header__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__Header * data = NULL;

  if (size) {
    data = (deva_common_msgs__msg__Header *)allocator.zero_allocate(size, sizeof(deva_common_msgs__msg__Header), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_common_msgs__msg__Header__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_common_msgs__msg__Header__fini(&data[i - 1]);
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
deva_common_msgs__msg__Header__Sequence__fini(deva_common_msgs__msg__Header__Sequence * array)
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
      deva_common_msgs__msg__Header__fini(&array->data[i]);
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

deva_common_msgs__msg__Header__Sequence *
deva_common_msgs__msg__Header__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__Header__Sequence * array = (deva_common_msgs__msg__Header__Sequence *)allocator.allocate(sizeof(deva_common_msgs__msg__Header__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_common_msgs__msg__Header__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_common_msgs__msg__Header__Sequence__destroy(deva_common_msgs__msg__Header__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_common_msgs__msg__Header__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_common_msgs__msg__Header__Sequence__are_equal(const deva_common_msgs__msg__Header__Sequence * lhs, const deva_common_msgs__msg__Header__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_common_msgs__msg__Header__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_common_msgs__msg__Header__Sequence__copy(
  const deva_common_msgs__msg__Header__Sequence * input,
  deva_common_msgs__msg__Header__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_common_msgs__msg__Header);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_common_msgs__msg__Header * data =
      (deva_common_msgs__msg__Header *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_common_msgs__msg__Header__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_common_msgs__msg__Header__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_common_msgs__msg__Header__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
