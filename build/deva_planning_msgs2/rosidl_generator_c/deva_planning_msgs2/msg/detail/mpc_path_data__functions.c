// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/MpcPathData.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/mpc_path_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_planning_msgs2__msg__MpcPathData__init(deva_planning_msgs2__msg__MpcPathData * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // heading
  // kappa
  // s
  // l
  // alpha
  // v
  // delta
  return true;
}

void
deva_planning_msgs2__msg__MpcPathData__fini(deva_planning_msgs2__msg__MpcPathData * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // heading
  // kappa
  // s
  // l
  // alpha
  // v
  // delta
}

bool
deva_planning_msgs2__msg__MpcPathData__are_equal(const deva_planning_msgs2__msg__MpcPathData * lhs, const deva_planning_msgs2__msg__MpcPathData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // kappa
  if (lhs->kappa != rhs->kappa) {
    return false;
  }
  // s
  if (lhs->s != rhs->s) {
    return false;
  }
  // l
  if (lhs->l != rhs->l) {
    return false;
  }
  // alpha
  if (lhs->alpha != rhs->alpha) {
    return false;
  }
  // v
  if (lhs->v != rhs->v) {
    return false;
  }
  // delta
  if (lhs->delta != rhs->delta) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__MpcPathData__copy(
  const deva_planning_msgs2__msg__MpcPathData * input,
  deva_planning_msgs2__msg__MpcPathData * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // heading
  output->heading = input->heading;
  // kappa
  output->kappa = input->kappa;
  // s
  output->s = input->s;
  // l
  output->l = input->l;
  // alpha
  output->alpha = input->alpha;
  // v
  output->v = input->v;
  // delta
  output->delta = input->delta;
  return true;
}

deva_planning_msgs2__msg__MpcPathData *
deva_planning_msgs2__msg__MpcPathData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__MpcPathData * msg = (deva_planning_msgs2__msg__MpcPathData *)allocator.allocate(sizeof(deva_planning_msgs2__msg__MpcPathData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__MpcPathData));
  bool success = deva_planning_msgs2__msg__MpcPathData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__MpcPathData__destroy(deva_planning_msgs2__msg__MpcPathData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__MpcPathData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__MpcPathData__Sequence__init(deva_planning_msgs2__msg__MpcPathData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__MpcPathData * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__MpcPathData *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__MpcPathData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__MpcPathData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__MpcPathData__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__MpcPathData__Sequence__fini(deva_planning_msgs2__msg__MpcPathData__Sequence * array)
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
      deva_planning_msgs2__msg__MpcPathData__fini(&array->data[i]);
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

deva_planning_msgs2__msg__MpcPathData__Sequence *
deva_planning_msgs2__msg__MpcPathData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__MpcPathData__Sequence * array = (deva_planning_msgs2__msg__MpcPathData__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__MpcPathData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__MpcPathData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__MpcPathData__Sequence__destroy(deva_planning_msgs2__msg__MpcPathData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__MpcPathData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__MpcPathData__Sequence__are_equal(const deva_planning_msgs2__msg__MpcPathData__Sequence * lhs, const deva_planning_msgs2__msg__MpcPathData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__MpcPathData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__MpcPathData__Sequence__copy(
  const deva_planning_msgs2__msg__MpcPathData__Sequence * input,
  deva_planning_msgs2__msg__MpcPathData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__MpcPathData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__MpcPathData * data =
      (deva_planning_msgs2__msg__MpcPathData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__MpcPathData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__MpcPathData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__MpcPathData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
