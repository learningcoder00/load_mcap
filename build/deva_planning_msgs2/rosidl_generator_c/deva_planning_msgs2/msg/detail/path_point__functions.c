// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/PathPoint.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/path_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pos`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `lane_id`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_planning_msgs2__msg__PathPoint__init(deva_planning_msgs2__msg__PathPoint * msg)
{
  if (!msg) {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__init(&msg->pos)) {
    deva_planning_msgs2__msg__PathPoint__fini(msg);
    return false;
  }
  // heading
  // speed
  // theta
  // kappa
  // s
  // dkappa
  // ddkappa
  // lane_id
  if (!rosidl_runtime_c__String__init(&msg->lane_id)) {
    deva_planning_msgs2__msg__PathPoint__fini(msg);
    return false;
  }
  // x_derivative
  // y_derivative
  // lane_width
  // is_junction
  // distance2obs
  return true;
}

void
deva_planning_msgs2__msg__PathPoint__fini(deva_planning_msgs2__msg__PathPoint * msg)
{
  if (!msg) {
    return;
  }
  // pos
  geometry_msgs__msg__Point__fini(&msg->pos);
  // heading
  // speed
  // theta
  // kappa
  // s
  // dkappa
  // ddkappa
  // lane_id
  rosidl_runtime_c__String__fini(&msg->lane_id);
  // x_derivative
  // y_derivative
  // lane_width
  // is_junction
  // distance2obs
}

bool
deva_planning_msgs2__msg__PathPoint__are_equal(const deva_planning_msgs2__msg__PathPoint * lhs, const deva_planning_msgs2__msg__PathPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
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
  // dkappa
  if (lhs->dkappa != rhs->dkappa) {
    return false;
  }
  // ddkappa
  if (lhs->ddkappa != rhs->ddkappa) {
    return false;
  }
  // lane_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lane_id), &(rhs->lane_id)))
  {
    return false;
  }
  // x_derivative
  if (lhs->x_derivative != rhs->x_derivative) {
    return false;
  }
  // y_derivative
  if (lhs->y_derivative != rhs->y_derivative) {
    return false;
  }
  // lane_width
  if (lhs->lane_width != rhs->lane_width) {
    return false;
  }
  // is_junction
  if (lhs->is_junction != rhs->is_junction) {
    return false;
  }
  // distance2obs
  if (lhs->distance2obs != rhs->distance2obs) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__PathPoint__copy(
  const deva_planning_msgs2__msg__PathPoint * input,
  deva_planning_msgs2__msg__PathPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  // speed
  output->speed = input->speed;
  // theta
  output->theta = input->theta;
  // kappa
  output->kappa = input->kappa;
  // s
  output->s = input->s;
  // dkappa
  output->dkappa = input->dkappa;
  // ddkappa
  output->ddkappa = input->ddkappa;
  // lane_id
  if (!rosidl_runtime_c__String__copy(
      &(input->lane_id), &(output->lane_id)))
  {
    return false;
  }
  // x_derivative
  output->x_derivative = input->x_derivative;
  // y_derivative
  output->y_derivative = input->y_derivative;
  // lane_width
  output->lane_width = input->lane_width;
  // is_junction
  output->is_junction = input->is_junction;
  // distance2obs
  output->distance2obs = input->distance2obs;
  return true;
}

deva_planning_msgs2__msg__PathPoint *
deva_planning_msgs2__msg__PathPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PathPoint * msg = (deva_planning_msgs2__msg__PathPoint *)allocator.allocate(sizeof(deva_planning_msgs2__msg__PathPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__PathPoint));
  bool success = deva_planning_msgs2__msg__PathPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__PathPoint__destroy(deva_planning_msgs2__msg__PathPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__PathPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__PathPoint__Sequence__init(deva_planning_msgs2__msg__PathPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PathPoint * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__PathPoint *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__PathPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__PathPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__PathPoint__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__PathPoint__Sequence__fini(deva_planning_msgs2__msg__PathPoint__Sequence * array)
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
      deva_planning_msgs2__msg__PathPoint__fini(&array->data[i]);
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

deva_planning_msgs2__msg__PathPoint__Sequence *
deva_planning_msgs2__msg__PathPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PathPoint__Sequence * array = (deva_planning_msgs2__msg__PathPoint__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__PathPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__PathPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__PathPoint__Sequence__destroy(deva_planning_msgs2__msg__PathPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__PathPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__PathPoint__Sequence__are_equal(const deva_planning_msgs2__msg__PathPoint__Sequence * lhs, const deva_planning_msgs2__msg__PathPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__PathPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__PathPoint__Sequence__copy(
  const deva_planning_msgs2__msg__PathPoint__Sequence * input,
  deva_planning_msgs2__msg__PathPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__PathPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__PathPoint * data =
      (deva_planning_msgs2__msg__PathPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__PathPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__PathPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__PathPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
