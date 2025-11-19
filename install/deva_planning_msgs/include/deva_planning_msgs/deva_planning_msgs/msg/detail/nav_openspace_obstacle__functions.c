// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs:msg/NavOpenspaceObstacle.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/nav_openspace_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `xy_vec`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_planning_msgs__msg__NavOpenspaceObstacle__init(deva_planning_msgs__msg__NavOpenspaceObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // obs_type
  // xy_vec
  if (!rosidl_runtime_c__double__Sequence__init(&msg->xy_vec, 0)) {
    deva_planning_msgs__msg__NavOpenspaceObstacle__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs__msg__NavOpenspaceObstacle__fini(deva_planning_msgs__msg__NavOpenspaceObstacle * msg)
{
  if (!msg) {
    return;
  }
  // obs_type
  // xy_vec
  rosidl_runtime_c__double__Sequence__fini(&msg->xy_vec);
}

bool
deva_planning_msgs__msg__NavOpenspaceObstacle__are_equal(const deva_planning_msgs__msg__NavOpenspaceObstacle * lhs, const deva_planning_msgs__msg__NavOpenspaceObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obs_type
  if (lhs->obs_type != rhs->obs_type) {
    return false;
  }
  // xy_vec
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->xy_vec), &(rhs->xy_vec)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs__msg__NavOpenspaceObstacle__copy(
  const deva_planning_msgs__msg__NavOpenspaceObstacle * input,
  deva_planning_msgs__msg__NavOpenspaceObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // obs_type
  output->obs_type = input->obs_type;
  // xy_vec
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->xy_vec), &(output->xy_vec)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs__msg__NavOpenspaceObstacle *
deva_planning_msgs__msg__NavOpenspaceObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__NavOpenspaceObstacle * msg = (deva_planning_msgs__msg__NavOpenspaceObstacle *)allocator.allocate(sizeof(deva_planning_msgs__msg__NavOpenspaceObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs__msg__NavOpenspaceObstacle));
  bool success = deva_planning_msgs__msg__NavOpenspaceObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs__msg__NavOpenspaceObstacle__destroy(deva_planning_msgs__msg__NavOpenspaceObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs__msg__NavOpenspaceObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence__init(deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__NavOpenspaceObstacle * data = NULL;

  if (size) {
    data = (deva_planning_msgs__msg__NavOpenspaceObstacle *)allocator.zero_allocate(size, sizeof(deva_planning_msgs__msg__NavOpenspaceObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs__msg__NavOpenspaceObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs__msg__NavOpenspaceObstacle__fini(&data[i - 1]);
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
deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence__fini(deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence * array)
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
      deva_planning_msgs__msg__NavOpenspaceObstacle__fini(&array->data[i]);
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

deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence *
deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence * array = (deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence *)allocator.allocate(sizeof(deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence__destroy(deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence__are_equal(const deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence * lhs, const deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs__msg__NavOpenspaceObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence__copy(
  const deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence * input,
  deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs__msg__NavOpenspaceObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs__msg__NavOpenspaceObstacle * data =
      (deva_planning_msgs__msg__NavOpenspaceObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs__msg__NavOpenspaceObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs__msg__NavOpenspaceObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs__msg__NavOpenspaceObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
