// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFFusionRoadSignList.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sllist`
#include "deva_aeb_msgs/msg/detail/sf_stopline__functions.h"
// Member `cwlist`
#include "deva_aeb_msgs/msg/detail/sf_crosswalk__functions.h"
// Member `ralist`
#include "deva_aeb_msgs/msg/detail/sf_road_arrow__functions.h"

bool
deva_aeb_msgs__msg__SFFusionRoadSignList__init(deva_aeb_msgs__msg__SFFusionRoadSignList * msg)
{
  if (!msg) {
    return false;
  }
  // sllist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_aeb_msgs__msg__SFStopline__init(&msg->sllist[i])) {
      deva_aeb_msgs__msg__SFFusionRoadSignList__fini(msg);
      return false;
    }
  }
  // cwlist
  for (size_t i = 0; i < 4; ++i) {
    if (!deva_aeb_msgs__msg__SFCrosswalk__init(&msg->cwlist[i])) {
      deva_aeb_msgs__msg__SFFusionRoadSignList__fini(msg);
      return false;
    }
  }
  // ralist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_aeb_msgs__msg__SFRoadArrow__init(&msg->ralist[i])) {
      deva_aeb_msgs__msg__SFFusionRoadSignList__fini(msg);
      return false;
    }
  }
  // timestamp
  // framenum
  // cwcount
  // racount
  // slvalidsize
  // cwvalidsize
  // ravalidsize
  // reserved
  return true;
}

void
deva_aeb_msgs__msg__SFFusionRoadSignList__fini(deva_aeb_msgs__msg__SFFusionRoadSignList * msg)
{
  if (!msg) {
    return;
  }
  // sllist
  for (size_t i = 0; i < 8; ++i) {
    deva_aeb_msgs__msg__SFStopline__fini(&msg->sllist[i]);
  }
  // cwlist
  for (size_t i = 0; i < 4; ++i) {
    deva_aeb_msgs__msg__SFCrosswalk__fini(&msg->cwlist[i]);
  }
  // ralist
  for (size_t i = 0; i < 8; ++i) {
    deva_aeb_msgs__msg__SFRoadArrow__fini(&msg->ralist[i]);
  }
  // timestamp
  // framenum
  // cwcount
  // racount
  // slvalidsize
  // cwvalidsize
  // ravalidsize
  // reserved
}

bool
deva_aeb_msgs__msg__SFFusionRoadSignList__are_equal(const deva_aeb_msgs__msg__SFFusionRoadSignList * lhs, const deva_aeb_msgs__msg__SFFusionRoadSignList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sllist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_aeb_msgs__msg__SFStopline__are_equal(
        &(lhs->sllist[i]), &(rhs->sllist[i])))
    {
      return false;
    }
  }
  // cwlist
  for (size_t i = 0; i < 4; ++i) {
    if (!deva_aeb_msgs__msg__SFCrosswalk__are_equal(
        &(lhs->cwlist[i]), &(rhs->cwlist[i])))
    {
      return false;
    }
  }
  // ralist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_aeb_msgs__msg__SFRoadArrow__are_equal(
        &(lhs->ralist[i]), &(rhs->ralist[i])))
    {
      return false;
    }
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // framenum
  if (lhs->framenum != rhs->framenum) {
    return false;
  }
  // cwcount
  if (lhs->cwcount != rhs->cwcount) {
    return false;
  }
  // racount
  if (lhs->racount != rhs->racount) {
    return false;
  }
  // slvalidsize
  if (lhs->slvalidsize != rhs->slvalidsize) {
    return false;
  }
  // cwvalidsize
  if (lhs->cwvalidsize != rhs->cwvalidsize) {
    return false;
  }
  // ravalidsize
  if (lhs->ravalidsize != rhs->ravalidsize) {
    return false;
  }
  // reserved
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->reserved[i] != rhs->reserved[i]) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFFusionRoadSignList__copy(
  const deva_aeb_msgs__msg__SFFusionRoadSignList * input,
  deva_aeb_msgs__msg__SFFusionRoadSignList * output)
{
  if (!input || !output) {
    return false;
  }
  // sllist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_aeb_msgs__msg__SFStopline__copy(
        &(input->sllist[i]), &(output->sllist[i])))
    {
      return false;
    }
  }
  // cwlist
  for (size_t i = 0; i < 4; ++i) {
    if (!deva_aeb_msgs__msg__SFCrosswalk__copy(
        &(input->cwlist[i]), &(output->cwlist[i])))
    {
      return false;
    }
  }
  // ralist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_aeb_msgs__msg__SFRoadArrow__copy(
        &(input->ralist[i]), &(output->ralist[i])))
    {
      return false;
    }
  }
  // timestamp
  output->timestamp = input->timestamp;
  // framenum
  output->framenum = input->framenum;
  // cwcount
  output->cwcount = input->cwcount;
  // racount
  output->racount = input->racount;
  // slvalidsize
  output->slvalidsize = input->slvalidsize;
  // cwvalidsize
  output->cwvalidsize = input->cwvalidsize;
  // ravalidsize
  output->ravalidsize = input->ravalidsize;
  // reserved
  for (size_t i = 0; i < 3; ++i) {
    output->reserved[i] = input->reserved[i];
  }
  return true;
}

deva_aeb_msgs__msg__SFFusionRoadSignList *
deva_aeb_msgs__msg__SFFusionRoadSignList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionRoadSignList * msg = (deva_aeb_msgs__msg__SFFusionRoadSignList *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFFusionRoadSignList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFFusionRoadSignList));
  bool success = deva_aeb_msgs__msg__SFFusionRoadSignList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFFusionRoadSignList__destroy(deva_aeb_msgs__msg__SFFusionRoadSignList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFFusionRoadSignList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__init(deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionRoadSignList * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFFusionRoadSignList *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFFusionRoadSignList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFFusionRoadSignList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFFusionRoadSignList__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__fini(deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * array)
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
      deva_aeb_msgs__msg__SFFusionRoadSignList__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence *
deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * array = (deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__destroy(deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__are_equal(const deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * lhs, const deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFFusionRoadSignList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence__copy(
  const deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * input,
  deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFFusionRoadSignList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFFusionRoadSignList * data =
      (deva_aeb_msgs__msg__SFFusionRoadSignList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFFusionRoadSignList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFFusionRoadSignList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFFusionRoadSignList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
