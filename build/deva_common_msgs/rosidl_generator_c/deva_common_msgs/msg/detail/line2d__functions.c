// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_common_msgs:msg/Line2d.idl
// generated code does not contain a copyright notice
#include "deva_common_msgs/msg/detail/line2d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_common_msgs__msg__Line2d__init(deva_common_msgs__msg__Line2d * msg)
{
  if (!msg) {
    return false;
  }
  // fit_property
  // c3
  // c2
  // c1
  // c0
  return true;
}

void
deva_common_msgs__msg__Line2d__fini(deva_common_msgs__msg__Line2d * msg)
{
  if (!msg) {
    return;
  }
  // fit_property
  // c3
  // c2
  // c1
  // c0
}

bool
deva_common_msgs__msg__Line2d__are_equal(const deva_common_msgs__msg__Line2d * lhs, const deva_common_msgs__msg__Line2d * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fit_property
  if (lhs->fit_property != rhs->fit_property) {
    return false;
  }
  // c3
  if (lhs->c3 != rhs->c3) {
    return false;
  }
  // c2
  if (lhs->c2 != rhs->c2) {
    return false;
  }
  // c1
  if (lhs->c1 != rhs->c1) {
    return false;
  }
  // c0
  if (lhs->c0 != rhs->c0) {
    return false;
  }
  return true;
}

bool
deva_common_msgs__msg__Line2d__copy(
  const deva_common_msgs__msg__Line2d * input,
  deva_common_msgs__msg__Line2d * output)
{
  if (!input || !output) {
    return false;
  }
  // fit_property
  output->fit_property = input->fit_property;
  // c3
  output->c3 = input->c3;
  // c2
  output->c2 = input->c2;
  // c1
  output->c1 = input->c1;
  // c0
  output->c0 = input->c0;
  return true;
}

deva_common_msgs__msg__Line2d *
deva_common_msgs__msg__Line2d__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__Line2d * msg = (deva_common_msgs__msg__Line2d *)allocator.allocate(sizeof(deva_common_msgs__msg__Line2d), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_common_msgs__msg__Line2d));
  bool success = deva_common_msgs__msg__Line2d__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_common_msgs__msg__Line2d__destroy(deva_common_msgs__msg__Line2d * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_common_msgs__msg__Line2d__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_common_msgs__msg__Line2d__Sequence__init(deva_common_msgs__msg__Line2d__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__Line2d * data = NULL;

  if (size) {
    data = (deva_common_msgs__msg__Line2d *)allocator.zero_allocate(size, sizeof(deva_common_msgs__msg__Line2d), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_common_msgs__msg__Line2d__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_common_msgs__msg__Line2d__fini(&data[i - 1]);
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
deva_common_msgs__msg__Line2d__Sequence__fini(deva_common_msgs__msg__Line2d__Sequence * array)
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
      deva_common_msgs__msg__Line2d__fini(&array->data[i]);
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

deva_common_msgs__msg__Line2d__Sequence *
deva_common_msgs__msg__Line2d__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__Line2d__Sequence * array = (deva_common_msgs__msg__Line2d__Sequence *)allocator.allocate(sizeof(deva_common_msgs__msg__Line2d__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_common_msgs__msg__Line2d__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_common_msgs__msg__Line2d__Sequence__destroy(deva_common_msgs__msg__Line2d__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_common_msgs__msg__Line2d__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_common_msgs__msg__Line2d__Sequence__are_equal(const deva_common_msgs__msg__Line2d__Sequence * lhs, const deva_common_msgs__msg__Line2d__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_common_msgs__msg__Line2d__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_common_msgs__msg__Line2d__Sequence__copy(
  const deva_common_msgs__msg__Line2d__Sequence * input,
  deva_common_msgs__msg__Line2d__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_common_msgs__msg__Line2d);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_common_msgs__msg__Line2d * data =
      (deva_common_msgs__msg__Line2d *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_common_msgs__msg__Line2d__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_common_msgs__msg__Line2d__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_common_msgs__msg__Line2d__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
