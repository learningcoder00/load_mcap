// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFRoadArrow.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_road_arrow__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFRoadArrow__init(deva_aeb_msgs__msg__SFRoadArrow * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // type
  // confi
  // lanassignment
  // reserved
  // poslgt
  // poslat
  // headingangle
  return true;
}

void
deva_aeb_msgs__msg__SFRoadArrow__fini(deva_aeb_msgs__msg__SFRoadArrow * msg)
{
  if (!msg) {
    return;
  }
  // id
  // type
  // confi
  // lanassignment
  // reserved
  // poslgt
  // poslat
  // headingangle
}

bool
deva_aeb_msgs__msg__SFRoadArrow__are_equal(const deva_aeb_msgs__msg__SFRoadArrow * lhs, const deva_aeb_msgs__msg__SFRoadArrow * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // confi
  if (lhs->confi != rhs->confi) {
    return false;
  }
  // lanassignment
  if (lhs->lanassignment != rhs->lanassignment) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // poslgt
  if (lhs->poslgt != rhs->poslgt) {
    return false;
  }
  // poslat
  if (lhs->poslat != rhs->poslat) {
    return false;
  }
  // headingangle
  if (lhs->headingangle != rhs->headingangle) {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFRoadArrow__copy(
  const deva_aeb_msgs__msg__SFRoadArrow * input,
  deva_aeb_msgs__msg__SFRoadArrow * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // type
  output->type = input->type;
  // confi
  output->confi = input->confi;
  // lanassignment
  output->lanassignment = input->lanassignment;
  // reserved
  output->reserved = input->reserved;
  // poslgt
  output->poslgt = input->poslgt;
  // poslat
  output->poslat = input->poslat;
  // headingangle
  output->headingangle = input->headingangle;
  return true;
}

deva_aeb_msgs__msg__SFRoadArrow *
deva_aeb_msgs__msg__SFRoadArrow__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFRoadArrow * msg = (deva_aeb_msgs__msg__SFRoadArrow *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFRoadArrow), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFRoadArrow));
  bool success = deva_aeb_msgs__msg__SFRoadArrow__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFRoadArrow__destroy(deva_aeb_msgs__msg__SFRoadArrow * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFRoadArrow__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFRoadArrow__Sequence__init(deva_aeb_msgs__msg__SFRoadArrow__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFRoadArrow * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFRoadArrow *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFRoadArrow), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFRoadArrow__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFRoadArrow__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFRoadArrow__Sequence__fini(deva_aeb_msgs__msg__SFRoadArrow__Sequence * array)
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
      deva_aeb_msgs__msg__SFRoadArrow__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFRoadArrow__Sequence *
deva_aeb_msgs__msg__SFRoadArrow__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFRoadArrow__Sequence * array = (deva_aeb_msgs__msg__SFRoadArrow__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFRoadArrow__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFRoadArrow__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFRoadArrow__Sequence__destroy(deva_aeb_msgs__msg__SFRoadArrow__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFRoadArrow__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFRoadArrow__Sequence__are_equal(const deva_aeb_msgs__msg__SFRoadArrow__Sequence * lhs, const deva_aeb_msgs__msg__SFRoadArrow__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFRoadArrow__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFRoadArrow__Sequence__copy(
  const deva_aeb_msgs__msg__SFRoadArrow__Sequence * input,
  deva_aeb_msgs__msg__SFRoadArrow__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFRoadArrow);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFRoadArrow * data =
      (deva_aeb_msgs__msg__SFRoadArrow *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFRoadArrow__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFRoadArrow__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFRoadArrow__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
