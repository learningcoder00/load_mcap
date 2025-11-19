// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFFusionRoadEdge.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frontleft`
// Member `frontright`
// Member `rearleft`
// Member `rearright`
#include "deva_aeb_msgs/msg/detail/road_info__functions.h"

bool
deva_aeb_msgs__msg__SFFusionRoadEdge__init(deva_aeb_msgs__msg__SFFusionRoadEdge * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // framenum
  // frontleft
  if (!deva_aeb_msgs__msg__RoadInfo__init(&msg->frontleft)) {
    deva_aeb_msgs__msg__SFFusionRoadEdge__fini(msg);
    return false;
  }
  // frontright
  if (!deva_aeb_msgs__msg__RoadInfo__init(&msg->frontright)) {
    deva_aeb_msgs__msg__SFFusionRoadEdge__fini(msg);
    return false;
  }
  // rearleft
  if (!deva_aeb_msgs__msg__RoadInfo__init(&msg->rearleft)) {
    deva_aeb_msgs__msg__SFFusionRoadEdge__fini(msg);
    return false;
  }
  // rearright
  if (!deva_aeb_msgs__msg__RoadInfo__init(&msg->rearright)) {
    deva_aeb_msgs__msg__SFFusionRoadEdge__fini(msg);
    return false;
  }
  return true;
}

void
deva_aeb_msgs__msg__SFFusionRoadEdge__fini(deva_aeb_msgs__msg__SFFusionRoadEdge * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // framenum
  // frontleft
  deva_aeb_msgs__msg__RoadInfo__fini(&msg->frontleft);
  // frontright
  deva_aeb_msgs__msg__RoadInfo__fini(&msg->frontright);
  // rearleft
  deva_aeb_msgs__msg__RoadInfo__fini(&msg->rearleft);
  // rearright
  deva_aeb_msgs__msg__RoadInfo__fini(&msg->rearright);
}

bool
deva_aeb_msgs__msg__SFFusionRoadEdge__are_equal(const deva_aeb_msgs__msg__SFFusionRoadEdge * lhs, const deva_aeb_msgs__msg__SFFusionRoadEdge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // framenum
  if (lhs->framenum != rhs->framenum) {
    return false;
  }
  // frontleft
  if (!deva_aeb_msgs__msg__RoadInfo__are_equal(
      &(lhs->frontleft), &(rhs->frontleft)))
  {
    return false;
  }
  // frontright
  if (!deva_aeb_msgs__msg__RoadInfo__are_equal(
      &(lhs->frontright), &(rhs->frontright)))
  {
    return false;
  }
  // rearleft
  if (!deva_aeb_msgs__msg__RoadInfo__are_equal(
      &(lhs->rearleft), &(rhs->rearleft)))
  {
    return false;
  }
  // rearright
  if (!deva_aeb_msgs__msg__RoadInfo__are_equal(
      &(lhs->rearright), &(rhs->rearright)))
  {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFFusionRoadEdge__copy(
  const deva_aeb_msgs__msg__SFFusionRoadEdge * input,
  deva_aeb_msgs__msg__SFFusionRoadEdge * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // framenum
  output->framenum = input->framenum;
  // frontleft
  if (!deva_aeb_msgs__msg__RoadInfo__copy(
      &(input->frontleft), &(output->frontleft)))
  {
    return false;
  }
  // frontright
  if (!deva_aeb_msgs__msg__RoadInfo__copy(
      &(input->frontright), &(output->frontright)))
  {
    return false;
  }
  // rearleft
  if (!deva_aeb_msgs__msg__RoadInfo__copy(
      &(input->rearleft), &(output->rearleft)))
  {
    return false;
  }
  // rearright
  if (!deva_aeb_msgs__msg__RoadInfo__copy(
      &(input->rearright), &(output->rearright)))
  {
    return false;
  }
  return true;
}

deva_aeb_msgs__msg__SFFusionRoadEdge *
deva_aeb_msgs__msg__SFFusionRoadEdge__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionRoadEdge * msg = (deva_aeb_msgs__msg__SFFusionRoadEdge *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFFusionRoadEdge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFFusionRoadEdge));
  bool success = deva_aeb_msgs__msg__SFFusionRoadEdge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFFusionRoadEdge__destroy(deva_aeb_msgs__msg__SFFusionRoadEdge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFFusionRoadEdge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence__init(deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionRoadEdge * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFFusionRoadEdge *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFFusionRoadEdge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFFusionRoadEdge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFFusionRoadEdge__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence__fini(deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence * array)
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
      deva_aeb_msgs__msg__SFFusionRoadEdge__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence *
deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence * array = (deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence__destroy(deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence__are_equal(const deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence * lhs, const deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFFusionRoadEdge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence__copy(
  const deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence * input,
  deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFFusionRoadEdge);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFFusionRoadEdge * data =
      (deva_aeb_msgs__msg__SFFusionRoadEdge *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFFusionRoadEdge__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFFusionRoadEdge__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFFusionRoadEdge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
