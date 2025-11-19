// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/Crosswalk2dArray.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/crosswalk2d_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `crosswalk_2ds`
#include "deva_perception_msgs/msg/detail/crosswalk2d__functions.h"

bool
deva_perception_msgs__msg__Crosswalk2dArray__init(deva_perception_msgs__msg__Crosswalk2dArray * msg)
{
  if (!msg) {
    return false;
  }
  // crosswalk_2ds
  if (!deva_perception_msgs__msg__Crosswalk2d__Sequence__init(&msg->crosswalk_2ds, 0)) {
    deva_perception_msgs__msg__Crosswalk2dArray__fini(msg);
    return false;
  }
  // source
  return true;
}

void
deva_perception_msgs__msg__Crosswalk2dArray__fini(deva_perception_msgs__msg__Crosswalk2dArray * msg)
{
  if (!msg) {
    return;
  }
  // crosswalk_2ds
  deva_perception_msgs__msg__Crosswalk2d__Sequence__fini(&msg->crosswalk_2ds);
  // source
}

bool
deva_perception_msgs__msg__Crosswalk2dArray__are_equal(const deva_perception_msgs__msg__Crosswalk2dArray * lhs, const deva_perception_msgs__msg__Crosswalk2dArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // crosswalk_2ds
  if (!deva_perception_msgs__msg__Crosswalk2d__Sequence__are_equal(
      &(lhs->crosswalk_2ds), &(rhs->crosswalk_2ds)))
  {
    return false;
  }
  // source
  if (lhs->source != rhs->source) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__Crosswalk2dArray__copy(
  const deva_perception_msgs__msg__Crosswalk2dArray * input,
  deva_perception_msgs__msg__Crosswalk2dArray * output)
{
  if (!input || !output) {
    return false;
  }
  // crosswalk_2ds
  if (!deva_perception_msgs__msg__Crosswalk2d__Sequence__copy(
      &(input->crosswalk_2ds), &(output->crosswalk_2ds)))
  {
    return false;
  }
  // source
  output->source = input->source;
  return true;
}

deva_perception_msgs__msg__Crosswalk2dArray *
deva_perception_msgs__msg__Crosswalk2dArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Crosswalk2dArray * msg = (deva_perception_msgs__msg__Crosswalk2dArray *)allocator.allocate(sizeof(deva_perception_msgs__msg__Crosswalk2dArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__Crosswalk2dArray));
  bool success = deva_perception_msgs__msg__Crosswalk2dArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__Crosswalk2dArray__destroy(deva_perception_msgs__msg__Crosswalk2dArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__Crosswalk2dArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__Crosswalk2dArray__Sequence__init(deva_perception_msgs__msg__Crosswalk2dArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Crosswalk2dArray * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__Crosswalk2dArray *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__Crosswalk2dArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__Crosswalk2dArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__Crosswalk2dArray__fini(&data[i - 1]);
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
deva_perception_msgs__msg__Crosswalk2dArray__Sequence__fini(deva_perception_msgs__msg__Crosswalk2dArray__Sequence * array)
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
      deva_perception_msgs__msg__Crosswalk2dArray__fini(&array->data[i]);
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

deva_perception_msgs__msg__Crosswalk2dArray__Sequence *
deva_perception_msgs__msg__Crosswalk2dArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Crosswalk2dArray__Sequence * array = (deva_perception_msgs__msg__Crosswalk2dArray__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__Crosswalk2dArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__Crosswalk2dArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__Crosswalk2dArray__Sequence__destroy(deva_perception_msgs__msg__Crosswalk2dArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__Crosswalk2dArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__Crosswalk2dArray__Sequence__are_equal(const deva_perception_msgs__msg__Crosswalk2dArray__Sequence * lhs, const deva_perception_msgs__msg__Crosswalk2dArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__Crosswalk2dArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__Crosswalk2dArray__Sequence__copy(
  const deva_perception_msgs__msg__Crosswalk2dArray__Sequence * input,
  deva_perception_msgs__msg__Crosswalk2dArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__Crosswalk2dArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__Crosswalk2dArray * data =
      (deva_perception_msgs__msg__Crosswalk2dArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__Crosswalk2dArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__Crosswalk2dArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__Crosswalk2dArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
