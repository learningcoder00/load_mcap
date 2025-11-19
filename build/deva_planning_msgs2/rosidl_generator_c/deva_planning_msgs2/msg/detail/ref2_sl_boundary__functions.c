// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/Ref2SLBoundary.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/ref2_sl_boundary__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sl_boundary`
#include "deva_planning_msgs2/msg/detail/sl_boundary__functions.h"

bool
deva_planning_msgs2__msg__Ref2SLBoundary__init(deva_planning_msgs2__msg__Ref2SLBoundary * msg)
{
  if (!msg) {
    return false;
  }
  // ref_id
  // sl_boundary
  if (!deva_planning_msgs2__msg__SLBoundary__init(&msg->sl_boundary)) {
    deva_planning_msgs2__msg__Ref2SLBoundary__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs2__msg__Ref2SLBoundary__fini(deva_planning_msgs2__msg__Ref2SLBoundary * msg)
{
  if (!msg) {
    return;
  }
  // ref_id
  // sl_boundary
  deva_planning_msgs2__msg__SLBoundary__fini(&msg->sl_boundary);
}

bool
deva_planning_msgs2__msg__Ref2SLBoundary__are_equal(const deva_planning_msgs2__msg__Ref2SLBoundary * lhs, const deva_planning_msgs2__msg__Ref2SLBoundary * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ref_id
  if (lhs->ref_id != rhs->ref_id) {
    return false;
  }
  // sl_boundary
  if (!deva_planning_msgs2__msg__SLBoundary__are_equal(
      &(lhs->sl_boundary), &(rhs->sl_boundary)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__Ref2SLBoundary__copy(
  const deva_planning_msgs2__msg__Ref2SLBoundary * input,
  deva_planning_msgs2__msg__Ref2SLBoundary * output)
{
  if (!input || !output) {
    return false;
  }
  // ref_id
  output->ref_id = input->ref_id;
  // sl_boundary
  if (!deva_planning_msgs2__msg__SLBoundary__copy(
      &(input->sl_boundary), &(output->sl_boundary)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs2__msg__Ref2SLBoundary *
deva_planning_msgs2__msg__Ref2SLBoundary__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__Ref2SLBoundary * msg = (deva_planning_msgs2__msg__Ref2SLBoundary *)allocator.allocate(sizeof(deva_planning_msgs2__msg__Ref2SLBoundary), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__Ref2SLBoundary));
  bool success = deva_planning_msgs2__msg__Ref2SLBoundary__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__Ref2SLBoundary__destroy(deva_planning_msgs2__msg__Ref2SLBoundary * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__Ref2SLBoundary__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__init(deva_planning_msgs2__msg__Ref2SLBoundary__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__Ref2SLBoundary * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__Ref2SLBoundary *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__Ref2SLBoundary), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__Ref2SLBoundary__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__Ref2SLBoundary__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__fini(deva_planning_msgs2__msg__Ref2SLBoundary__Sequence * array)
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
      deva_planning_msgs2__msg__Ref2SLBoundary__fini(&array->data[i]);
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

deva_planning_msgs2__msg__Ref2SLBoundary__Sequence *
deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__Ref2SLBoundary__Sequence * array = (deva_planning_msgs2__msg__Ref2SLBoundary__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__Ref2SLBoundary__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__destroy(deva_planning_msgs2__msg__Ref2SLBoundary__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__are_equal(const deva_planning_msgs2__msg__Ref2SLBoundary__Sequence * lhs, const deva_planning_msgs2__msg__Ref2SLBoundary__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__Ref2SLBoundary__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__copy(
  const deva_planning_msgs2__msg__Ref2SLBoundary__Sequence * input,
  deva_planning_msgs2__msg__Ref2SLBoundary__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__Ref2SLBoundary);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__Ref2SLBoundary * data =
      (deva_planning_msgs2__msg__Ref2SLBoundary *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__Ref2SLBoundary__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__Ref2SLBoundary__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__Ref2SLBoundary__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
