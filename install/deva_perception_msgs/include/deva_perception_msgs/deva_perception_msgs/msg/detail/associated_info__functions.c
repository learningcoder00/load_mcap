// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/AssociatedInfo.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/associated_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `associated_id`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_perception_msgs__msg__AssociatedInfo__init(deva_perception_msgs__msg__AssociatedInfo * msg)
{
  if (!msg) {
    return false;
  }
  // associated_type
  // associated_id
  if (!rosidl_runtime_c__String__init(&msg->associated_id)) {
    deva_perception_msgs__msg__AssociatedInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__AssociatedInfo__fini(deva_perception_msgs__msg__AssociatedInfo * msg)
{
  if (!msg) {
    return;
  }
  // associated_type
  // associated_id
  rosidl_runtime_c__String__fini(&msg->associated_id);
}

bool
deva_perception_msgs__msg__AssociatedInfo__are_equal(const deva_perception_msgs__msg__AssociatedInfo * lhs, const deva_perception_msgs__msg__AssociatedInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // associated_type
  if (lhs->associated_type != rhs->associated_type) {
    return false;
  }
  // associated_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->associated_id), &(rhs->associated_id)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__AssociatedInfo__copy(
  const deva_perception_msgs__msg__AssociatedInfo * input,
  deva_perception_msgs__msg__AssociatedInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // associated_type
  output->associated_type = input->associated_type;
  // associated_id
  if (!rosidl_runtime_c__String__copy(
      &(input->associated_id), &(output->associated_id)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__AssociatedInfo *
deva_perception_msgs__msg__AssociatedInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__AssociatedInfo * msg = (deva_perception_msgs__msg__AssociatedInfo *)allocator.allocate(sizeof(deva_perception_msgs__msg__AssociatedInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__AssociatedInfo));
  bool success = deva_perception_msgs__msg__AssociatedInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__AssociatedInfo__destroy(deva_perception_msgs__msg__AssociatedInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__AssociatedInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__AssociatedInfo__Sequence__init(deva_perception_msgs__msg__AssociatedInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__AssociatedInfo * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__AssociatedInfo *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__AssociatedInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__AssociatedInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__AssociatedInfo__fini(&data[i - 1]);
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
deva_perception_msgs__msg__AssociatedInfo__Sequence__fini(deva_perception_msgs__msg__AssociatedInfo__Sequence * array)
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
      deva_perception_msgs__msg__AssociatedInfo__fini(&array->data[i]);
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

deva_perception_msgs__msg__AssociatedInfo__Sequence *
deva_perception_msgs__msg__AssociatedInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__AssociatedInfo__Sequence * array = (deva_perception_msgs__msg__AssociatedInfo__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__AssociatedInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__AssociatedInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__AssociatedInfo__Sequence__destroy(deva_perception_msgs__msg__AssociatedInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__AssociatedInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__AssociatedInfo__Sequence__are_equal(const deva_perception_msgs__msg__AssociatedInfo__Sequence * lhs, const deva_perception_msgs__msg__AssociatedInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__AssociatedInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__AssociatedInfo__Sequence__copy(
  const deva_perception_msgs__msg__AssociatedInfo__Sequence * input,
  deva_perception_msgs__msg__AssociatedInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__AssociatedInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__AssociatedInfo * data =
      (deva_perception_msgs__msg__AssociatedInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__AssociatedInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__AssociatedInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__AssociatedInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
