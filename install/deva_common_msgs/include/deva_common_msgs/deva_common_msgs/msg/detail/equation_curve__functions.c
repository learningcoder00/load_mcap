// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_common_msgs:msg/EquationCurve.idl
// generated code does not contain a copyright notice
#include "deva_common_msgs/msg/detail/equation_curve__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_common_msgs__msg__EquationCurve__init(deva_common_msgs__msg__EquationCurve * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // a3
  // a2
  // a1
  // a0
  // b3
  // b2
  // b1
  // b0
  // c3
  // c2
  // c1
  // c0
  // s_start
  // s_end
  return true;
}

void
deva_common_msgs__msg__EquationCurve__fini(deva_common_msgs__msg__EquationCurve * msg)
{
  if (!msg) {
    return;
  }
  // type
  // a3
  // a2
  // a1
  // a0
  // b3
  // b2
  // b1
  // b0
  // c3
  // c2
  // c1
  // c0
  // s_start
  // s_end
}

bool
deva_common_msgs__msg__EquationCurve__are_equal(const deva_common_msgs__msg__EquationCurve * lhs, const deva_common_msgs__msg__EquationCurve * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // a3
  if (lhs->a3 != rhs->a3) {
    return false;
  }
  // a2
  if (lhs->a2 != rhs->a2) {
    return false;
  }
  // a1
  if (lhs->a1 != rhs->a1) {
    return false;
  }
  // a0
  if (lhs->a0 != rhs->a0) {
    return false;
  }
  // b3
  if (lhs->b3 != rhs->b3) {
    return false;
  }
  // b2
  if (lhs->b2 != rhs->b2) {
    return false;
  }
  // b1
  if (lhs->b1 != rhs->b1) {
    return false;
  }
  // b0
  if (lhs->b0 != rhs->b0) {
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
  // s_start
  if (lhs->s_start != rhs->s_start) {
    return false;
  }
  // s_end
  if (lhs->s_end != rhs->s_end) {
    return false;
  }
  return true;
}

bool
deva_common_msgs__msg__EquationCurve__copy(
  const deva_common_msgs__msg__EquationCurve * input,
  deva_common_msgs__msg__EquationCurve * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // a3
  output->a3 = input->a3;
  // a2
  output->a2 = input->a2;
  // a1
  output->a1 = input->a1;
  // a0
  output->a0 = input->a0;
  // b3
  output->b3 = input->b3;
  // b2
  output->b2 = input->b2;
  // b1
  output->b1 = input->b1;
  // b0
  output->b0 = input->b0;
  // c3
  output->c3 = input->c3;
  // c2
  output->c2 = input->c2;
  // c1
  output->c1 = input->c1;
  // c0
  output->c0 = input->c0;
  // s_start
  output->s_start = input->s_start;
  // s_end
  output->s_end = input->s_end;
  return true;
}

deva_common_msgs__msg__EquationCurve *
deva_common_msgs__msg__EquationCurve__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__EquationCurve * msg = (deva_common_msgs__msg__EquationCurve *)allocator.allocate(sizeof(deva_common_msgs__msg__EquationCurve), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_common_msgs__msg__EquationCurve));
  bool success = deva_common_msgs__msg__EquationCurve__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_common_msgs__msg__EquationCurve__destroy(deva_common_msgs__msg__EquationCurve * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_common_msgs__msg__EquationCurve__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_common_msgs__msg__EquationCurve__Sequence__init(deva_common_msgs__msg__EquationCurve__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__EquationCurve * data = NULL;

  if (size) {
    data = (deva_common_msgs__msg__EquationCurve *)allocator.zero_allocate(size, sizeof(deva_common_msgs__msg__EquationCurve), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_common_msgs__msg__EquationCurve__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_common_msgs__msg__EquationCurve__fini(&data[i - 1]);
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
deva_common_msgs__msg__EquationCurve__Sequence__fini(deva_common_msgs__msg__EquationCurve__Sequence * array)
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
      deva_common_msgs__msg__EquationCurve__fini(&array->data[i]);
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

deva_common_msgs__msg__EquationCurve__Sequence *
deva_common_msgs__msg__EquationCurve__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__EquationCurve__Sequence * array = (deva_common_msgs__msg__EquationCurve__Sequence *)allocator.allocate(sizeof(deva_common_msgs__msg__EquationCurve__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_common_msgs__msg__EquationCurve__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_common_msgs__msg__EquationCurve__Sequence__destroy(deva_common_msgs__msg__EquationCurve__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_common_msgs__msg__EquationCurve__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_common_msgs__msg__EquationCurve__Sequence__are_equal(const deva_common_msgs__msg__EquationCurve__Sequence * lhs, const deva_common_msgs__msg__EquationCurve__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_common_msgs__msg__EquationCurve__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_common_msgs__msg__EquationCurve__Sequence__copy(
  const deva_common_msgs__msg__EquationCurve__Sequence * input,
  deva_common_msgs__msg__EquationCurve__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_common_msgs__msg__EquationCurve);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_common_msgs__msg__EquationCurve * data =
      (deva_common_msgs__msg__EquationCurve *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_common_msgs__msg__EquationCurve__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_common_msgs__msg__EquationCurve__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_common_msgs__msg__EquationCurve__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
