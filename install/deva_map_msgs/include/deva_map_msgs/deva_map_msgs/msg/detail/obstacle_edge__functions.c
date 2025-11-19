// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/ObstacleEdge.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/obstacle_edge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `world_coord_center_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
deva_map_msgs__msg__ObstacleEdge__init(deva_map_msgs__msg__ObstacleEdge * msg)
{
  if (!msg) {
    return false;
  }
  // world_coord_center_point
  if (!geometry_msgs__msg__Point__init(&msg->world_coord_center_point)) {
    deva_map_msgs__msg__ObstacleEdge__fini(msg);
    return false;
  }
  return true;
}

void
deva_map_msgs__msg__ObstacleEdge__fini(deva_map_msgs__msg__ObstacleEdge * msg)
{
  if (!msg) {
    return;
  }
  // world_coord_center_point
  geometry_msgs__msg__Point__fini(&msg->world_coord_center_point);
}

bool
deva_map_msgs__msg__ObstacleEdge__are_equal(const deva_map_msgs__msg__ObstacleEdge * lhs, const deva_map_msgs__msg__ObstacleEdge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // world_coord_center_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->world_coord_center_point), &(rhs->world_coord_center_point)))
  {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__ObstacleEdge__copy(
  const deva_map_msgs__msg__ObstacleEdge * input,
  deva_map_msgs__msg__ObstacleEdge * output)
{
  if (!input || !output) {
    return false;
  }
  // world_coord_center_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->world_coord_center_point), &(output->world_coord_center_point)))
  {
    return false;
  }
  return true;
}

deva_map_msgs__msg__ObstacleEdge *
deva_map_msgs__msg__ObstacleEdge__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ObstacleEdge * msg = (deva_map_msgs__msg__ObstacleEdge *)allocator.allocate(sizeof(deva_map_msgs__msg__ObstacleEdge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__ObstacleEdge));
  bool success = deva_map_msgs__msg__ObstacleEdge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__ObstacleEdge__destroy(deva_map_msgs__msg__ObstacleEdge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__ObstacleEdge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__ObstacleEdge__Sequence__init(deva_map_msgs__msg__ObstacleEdge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ObstacleEdge * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__ObstacleEdge *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__ObstacleEdge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__ObstacleEdge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__ObstacleEdge__fini(&data[i - 1]);
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
deva_map_msgs__msg__ObstacleEdge__Sequence__fini(deva_map_msgs__msg__ObstacleEdge__Sequence * array)
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
      deva_map_msgs__msg__ObstacleEdge__fini(&array->data[i]);
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

deva_map_msgs__msg__ObstacleEdge__Sequence *
deva_map_msgs__msg__ObstacleEdge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ObstacleEdge__Sequence * array = (deva_map_msgs__msg__ObstacleEdge__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__ObstacleEdge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__ObstacleEdge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__ObstacleEdge__Sequence__destroy(deva_map_msgs__msg__ObstacleEdge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__ObstacleEdge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__ObstacleEdge__Sequence__are_equal(const deva_map_msgs__msg__ObstacleEdge__Sequence * lhs, const deva_map_msgs__msg__ObstacleEdge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__ObstacleEdge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__ObstacleEdge__Sequence__copy(
  const deva_map_msgs__msg__ObstacleEdge__Sequence * input,
  deva_map_msgs__msg__ObstacleEdge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__ObstacleEdge);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__ObstacleEdge * data =
      (deva_map_msgs__msg__ObstacleEdge *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__ObstacleEdge__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__ObstacleEdge__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__ObstacleEdge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
