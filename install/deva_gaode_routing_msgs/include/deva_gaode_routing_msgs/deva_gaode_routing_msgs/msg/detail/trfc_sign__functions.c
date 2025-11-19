// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/TrfcSign.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/trfc_sign__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_gaode_routing_msgs__msg__TrfcSign__init(deva_gaode_routing_msgs__msg__TrfcSign * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // speedflag
  // speed
  // offset
  return true;
}

void
deva_gaode_routing_msgs__msg__TrfcSign__fini(deva_gaode_routing_msgs__msg__TrfcSign * msg)
{
  if (!msg) {
    return;
  }
  // id
  // speedflag
  // speed
  // offset
}

bool
deva_gaode_routing_msgs__msg__TrfcSign__are_equal(const deva_gaode_routing_msgs__msg__TrfcSign * lhs, const deva_gaode_routing_msgs__msg__TrfcSign * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // speedflag
  if (lhs->speedflag != rhs->speedflag) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // offset
  if (lhs->offset != rhs->offset) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__TrfcSign__copy(
  const deva_gaode_routing_msgs__msg__TrfcSign * input,
  deva_gaode_routing_msgs__msg__TrfcSign * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // speedflag
  output->speedflag = input->speedflag;
  // speed
  output->speed = input->speed;
  // offset
  output->offset = input->offset;
  return true;
}

deva_gaode_routing_msgs__msg__TrfcSign *
deva_gaode_routing_msgs__msg__TrfcSign__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__TrfcSign * msg = (deva_gaode_routing_msgs__msg__TrfcSign *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__TrfcSign), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__TrfcSign));
  bool success = deva_gaode_routing_msgs__msg__TrfcSign__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__TrfcSign__destroy(deva_gaode_routing_msgs__msg__TrfcSign * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__TrfcSign__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__TrfcSign__Sequence__init(deva_gaode_routing_msgs__msg__TrfcSign__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__TrfcSign * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__TrfcSign *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__TrfcSign), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__TrfcSign__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__TrfcSign__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__TrfcSign__Sequence__fini(deva_gaode_routing_msgs__msg__TrfcSign__Sequence * array)
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
      deva_gaode_routing_msgs__msg__TrfcSign__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__TrfcSign__Sequence *
deva_gaode_routing_msgs__msg__TrfcSign__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__TrfcSign__Sequence * array = (deva_gaode_routing_msgs__msg__TrfcSign__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__TrfcSign__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__TrfcSign__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__TrfcSign__Sequence__destroy(deva_gaode_routing_msgs__msg__TrfcSign__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__TrfcSign__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__TrfcSign__Sequence__are_equal(const deva_gaode_routing_msgs__msg__TrfcSign__Sequence * lhs, const deva_gaode_routing_msgs__msg__TrfcSign__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__TrfcSign__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__TrfcSign__Sequence__copy(
  const deva_gaode_routing_msgs__msg__TrfcSign__Sequence * input,
  deva_gaode_routing_msgs__msg__TrfcSign__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__TrfcSign);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__TrfcSign * data =
      (deva_gaode_routing_msgs__msg__TrfcSign *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__TrfcSign__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__TrfcSign__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__TrfcSign__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
