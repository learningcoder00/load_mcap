// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/StitchData.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/stitch_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_planning_msgs2__msg__StitchData__init(deva_planning_msgs2__msg__StitchData * msg)
{
  if (!msg) {
    return false;
  }
  // stitch_mode
  // planner_mode
  // actual_planner_mode
  // current_x
  // current_y
  // stitch_s
  // stitch_l
  // stitch_x
  // stitch_y
  // stitch_z
  // stitch_heading
  // stitch_alpha
  // stitch_v
  // stitch_steer
  return true;
}

void
deva_planning_msgs2__msg__StitchData__fini(deva_planning_msgs2__msg__StitchData * msg)
{
  if (!msg) {
    return;
  }
  // stitch_mode
  // planner_mode
  // actual_planner_mode
  // current_x
  // current_y
  // stitch_s
  // stitch_l
  // stitch_x
  // stitch_y
  // stitch_z
  // stitch_heading
  // stitch_alpha
  // stitch_v
  // stitch_steer
}

bool
deva_planning_msgs2__msg__StitchData__are_equal(const deva_planning_msgs2__msg__StitchData * lhs, const deva_planning_msgs2__msg__StitchData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stitch_mode
  if (lhs->stitch_mode != rhs->stitch_mode) {
    return false;
  }
  // planner_mode
  if (lhs->planner_mode != rhs->planner_mode) {
    return false;
  }
  // actual_planner_mode
  if (lhs->actual_planner_mode != rhs->actual_planner_mode) {
    return false;
  }
  // current_x
  if (lhs->current_x != rhs->current_x) {
    return false;
  }
  // current_y
  if (lhs->current_y != rhs->current_y) {
    return false;
  }
  // stitch_s
  if (lhs->stitch_s != rhs->stitch_s) {
    return false;
  }
  // stitch_l
  if (lhs->stitch_l != rhs->stitch_l) {
    return false;
  }
  // stitch_x
  if (lhs->stitch_x != rhs->stitch_x) {
    return false;
  }
  // stitch_y
  if (lhs->stitch_y != rhs->stitch_y) {
    return false;
  }
  // stitch_z
  if (lhs->stitch_z != rhs->stitch_z) {
    return false;
  }
  // stitch_heading
  if (lhs->stitch_heading != rhs->stitch_heading) {
    return false;
  }
  // stitch_alpha
  if (lhs->stitch_alpha != rhs->stitch_alpha) {
    return false;
  }
  // stitch_v
  if (lhs->stitch_v != rhs->stitch_v) {
    return false;
  }
  // stitch_steer
  if (lhs->stitch_steer != rhs->stitch_steer) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__StitchData__copy(
  const deva_planning_msgs2__msg__StitchData * input,
  deva_planning_msgs2__msg__StitchData * output)
{
  if (!input || !output) {
    return false;
  }
  // stitch_mode
  output->stitch_mode = input->stitch_mode;
  // planner_mode
  output->planner_mode = input->planner_mode;
  // actual_planner_mode
  output->actual_planner_mode = input->actual_planner_mode;
  // current_x
  output->current_x = input->current_x;
  // current_y
  output->current_y = input->current_y;
  // stitch_s
  output->stitch_s = input->stitch_s;
  // stitch_l
  output->stitch_l = input->stitch_l;
  // stitch_x
  output->stitch_x = input->stitch_x;
  // stitch_y
  output->stitch_y = input->stitch_y;
  // stitch_z
  output->stitch_z = input->stitch_z;
  // stitch_heading
  output->stitch_heading = input->stitch_heading;
  // stitch_alpha
  output->stitch_alpha = input->stitch_alpha;
  // stitch_v
  output->stitch_v = input->stitch_v;
  // stitch_steer
  output->stitch_steer = input->stitch_steer;
  return true;
}

deva_planning_msgs2__msg__StitchData *
deva_planning_msgs2__msg__StitchData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__StitchData * msg = (deva_planning_msgs2__msg__StitchData *)allocator.allocate(sizeof(deva_planning_msgs2__msg__StitchData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__StitchData));
  bool success = deva_planning_msgs2__msg__StitchData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__StitchData__destroy(deva_planning_msgs2__msg__StitchData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__StitchData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__StitchData__Sequence__init(deva_planning_msgs2__msg__StitchData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__StitchData * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__StitchData *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__StitchData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__StitchData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__StitchData__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__StitchData__Sequence__fini(deva_planning_msgs2__msg__StitchData__Sequence * array)
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
      deva_planning_msgs2__msg__StitchData__fini(&array->data[i]);
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

deva_planning_msgs2__msg__StitchData__Sequence *
deva_planning_msgs2__msg__StitchData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__StitchData__Sequence * array = (deva_planning_msgs2__msg__StitchData__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__StitchData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__StitchData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__StitchData__Sequence__destroy(deva_planning_msgs2__msg__StitchData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__StitchData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__StitchData__Sequence__are_equal(const deva_planning_msgs2__msg__StitchData__Sequence * lhs, const deva_planning_msgs2__msg__StitchData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__StitchData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__StitchData__Sequence__copy(
  const deva_planning_msgs2__msg__StitchData__Sequence * input,
  deva_planning_msgs2__msg__StitchData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__StitchData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__StitchData * data =
      (deva_planning_msgs2__msg__StitchData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__StitchData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__StitchData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__StitchData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
