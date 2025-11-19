// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/TurnInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/turn_info_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_navi_msgs__msg__TurnInfoProto__init(deva_navi_msgs__msg__TurnInfoProto * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // lot
  // lat
  return true;
}

void
deva_navi_msgs__msg__TurnInfoProto__fini(deva_navi_msgs__msg__TurnInfoProto * msg)
{
  if (!msg) {
    return;
  }
  // type
  // lot
  // lat
}

bool
deva_navi_msgs__msg__TurnInfoProto__are_equal(const deva_navi_msgs__msg__TurnInfoProto * lhs, const deva_navi_msgs__msg__TurnInfoProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // lot
  if (lhs->lot != rhs->lot) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__TurnInfoProto__copy(
  const deva_navi_msgs__msg__TurnInfoProto * input,
  deva_navi_msgs__msg__TurnInfoProto * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // lot
  output->lot = input->lot;
  // lat
  output->lat = input->lat;
  return true;
}

deva_navi_msgs__msg__TurnInfoProto *
deva_navi_msgs__msg__TurnInfoProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__TurnInfoProto * msg = (deva_navi_msgs__msg__TurnInfoProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__TurnInfoProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__TurnInfoProto));
  bool success = deva_navi_msgs__msg__TurnInfoProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__TurnInfoProto__destroy(deva_navi_msgs__msg__TurnInfoProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__TurnInfoProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__TurnInfoProto__Sequence__init(deva_navi_msgs__msg__TurnInfoProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__TurnInfoProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__TurnInfoProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__TurnInfoProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__TurnInfoProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__TurnInfoProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__TurnInfoProto__Sequence__fini(deva_navi_msgs__msg__TurnInfoProto__Sequence * array)
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
      deva_navi_msgs__msg__TurnInfoProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__TurnInfoProto__Sequence *
deva_navi_msgs__msg__TurnInfoProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__TurnInfoProto__Sequence * array = (deva_navi_msgs__msg__TurnInfoProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__TurnInfoProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__TurnInfoProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__TurnInfoProto__Sequence__destroy(deva_navi_msgs__msg__TurnInfoProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__TurnInfoProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__TurnInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__TurnInfoProto__Sequence * lhs, const deva_navi_msgs__msg__TurnInfoProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__TurnInfoProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__TurnInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__TurnInfoProto__Sequence * input,
  deva_navi_msgs__msg__TurnInfoProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__TurnInfoProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__TurnInfoProto * data =
      (deva_navi_msgs__msg__TurnInfoProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__TurnInfoProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__TurnInfoProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__TurnInfoProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
