// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/AvpRefLineTreePointVec.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/avp_ref_line_tree_point_vec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vec`
#include "deva_planning_msgs2/msg/detail/avp_ref_line_tree_point__functions.h"

bool
deva_planning_msgs2__msg__AvpRefLineTreePointVec__init(deva_planning_msgs2__msg__AvpRefLineTreePointVec * msg)
{
  if (!msg) {
    return false;
  }
  // vec
  if (!deva_planning_msgs2__msg__AvpRefLineTreePoint__Sequence__init(&msg->vec, 0)) {
    deva_planning_msgs2__msg__AvpRefLineTreePointVec__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs2__msg__AvpRefLineTreePointVec__fini(deva_planning_msgs2__msg__AvpRefLineTreePointVec * msg)
{
  if (!msg) {
    return;
  }
  // vec
  deva_planning_msgs2__msg__AvpRefLineTreePoint__Sequence__fini(&msg->vec);
}

bool
deva_planning_msgs2__msg__AvpRefLineTreePointVec__are_equal(const deva_planning_msgs2__msg__AvpRefLineTreePointVec * lhs, const deva_planning_msgs2__msg__AvpRefLineTreePointVec * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vec
  if (!deva_planning_msgs2__msg__AvpRefLineTreePoint__Sequence__are_equal(
      &(lhs->vec), &(rhs->vec)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__AvpRefLineTreePointVec__copy(
  const deva_planning_msgs2__msg__AvpRefLineTreePointVec * input,
  deva_planning_msgs2__msg__AvpRefLineTreePointVec * output)
{
  if (!input || !output) {
    return false;
  }
  // vec
  if (!deva_planning_msgs2__msg__AvpRefLineTreePoint__Sequence__copy(
      &(input->vec), &(output->vec)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs2__msg__AvpRefLineTreePointVec *
deva_planning_msgs2__msg__AvpRefLineTreePointVec__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__AvpRefLineTreePointVec * msg = (deva_planning_msgs2__msg__AvpRefLineTreePointVec *)allocator.allocate(sizeof(deva_planning_msgs2__msg__AvpRefLineTreePointVec), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__AvpRefLineTreePointVec));
  bool success = deva_planning_msgs2__msg__AvpRefLineTreePointVec__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__AvpRefLineTreePointVec__destroy(deva_planning_msgs2__msg__AvpRefLineTreePointVec * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__AvpRefLineTreePointVec__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__init(deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__AvpRefLineTreePointVec * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__AvpRefLineTreePointVec *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__AvpRefLineTreePointVec), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__AvpRefLineTreePointVec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__AvpRefLineTreePointVec__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__fini(deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * array)
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
      deva_planning_msgs2__msg__AvpRefLineTreePointVec__fini(&array->data[i]);
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

deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence *
deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * array = (deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__destroy(deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__are_equal(const deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * lhs, const deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__AvpRefLineTreePointVec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__copy(
  const deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * input,
  deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__AvpRefLineTreePointVec);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__AvpRefLineTreePointVec * data =
      (deva_planning_msgs2__msg__AvpRefLineTreePointVec *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__AvpRefLineTreePointVec__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__AvpRefLineTreePointVec__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__AvpRefLineTreePointVec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
