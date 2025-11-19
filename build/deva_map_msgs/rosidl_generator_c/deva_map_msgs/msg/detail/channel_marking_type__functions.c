// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/ChannelMarkingType.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/channel_marking_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_map_msgs__msg__ChannelMarkingType__init(deva_map_msgs__msg__ChannelMarkingType * msg)
{
  if (!msg) {
    return false;
  }
  // s_start
  // s_end
  // markingtype
  // markingcolor
  return true;
}

void
deva_map_msgs__msg__ChannelMarkingType__fini(deva_map_msgs__msg__ChannelMarkingType * msg)
{
  if (!msg) {
    return;
  }
  // s_start
  // s_end
  // markingtype
  // markingcolor
}

bool
deva_map_msgs__msg__ChannelMarkingType__are_equal(const deva_map_msgs__msg__ChannelMarkingType * lhs, const deva_map_msgs__msg__ChannelMarkingType * rhs)
{
  if (!lhs || !rhs) {
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
  // markingtype
  if (lhs->markingtype != rhs->markingtype) {
    return false;
  }
  // markingcolor
  if (lhs->markingcolor != rhs->markingcolor) {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__ChannelMarkingType__copy(
  const deva_map_msgs__msg__ChannelMarkingType * input,
  deva_map_msgs__msg__ChannelMarkingType * output)
{
  if (!input || !output) {
    return false;
  }
  // s_start
  output->s_start = input->s_start;
  // s_end
  output->s_end = input->s_end;
  // markingtype
  output->markingtype = input->markingtype;
  // markingcolor
  output->markingcolor = input->markingcolor;
  return true;
}

deva_map_msgs__msg__ChannelMarkingType *
deva_map_msgs__msg__ChannelMarkingType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ChannelMarkingType * msg = (deva_map_msgs__msg__ChannelMarkingType *)allocator.allocate(sizeof(deva_map_msgs__msg__ChannelMarkingType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__ChannelMarkingType));
  bool success = deva_map_msgs__msg__ChannelMarkingType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__ChannelMarkingType__destroy(deva_map_msgs__msg__ChannelMarkingType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__ChannelMarkingType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__ChannelMarkingType__Sequence__init(deva_map_msgs__msg__ChannelMarkingType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ChannelMarkingType * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__ChannelMarkingType *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__ChannelMarkingType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__ChannelMarkingType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__ChannelMarkingType__fini(&data[i - 1]);
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
deva_map_msgs__msg__ChannelMarkingType__Sequence__fini(deva_map_msgs__msg__ChannelMarkingType__Sequence * array)
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
      deva_map_msgs__msg__ChannelMarkingType__fini(&array->data[i]);
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

deva_map_msgs__msg__ChannelMarkingType__Sequence *
deva_map_msgs__msg__ChannelMarkingType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ChannelMarkingType__Sequence * array = (deva_map_msgs__msg__ChannelMarkingType__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__ChannelMarkingType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__ChannelMarkingType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__ChannelMarkingType__Sequence__destroy(deva_map_msgs__msg__ChannelMarkingType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__ChannelMarkingType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__ChannelMarkingType__Sequence__are_equal(const deva_map_msgs__msg__ChannelMarkingType__Sequence * lhs, const deva_map_msgs__msg__ChannelMarkingType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__ChannelMarkingType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__ChannelMarkingType__Sequence__copy(
  const deva_map_msgs__msg__ChannelMarkingType__Sequence * input,
  deva_map_msgs__msg__ChannelMarkingType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__ChannelMarkingType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__ChannelMarkingType * data =
      (deva_map_msgs__msg__ChannelMarkingType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__ChannelMarkingType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__ChannelMarkingType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__ChannelMarkingType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
