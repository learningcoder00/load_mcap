// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFCrosswalk.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_crosswalk__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFCrosswalk__init(deva_aeb_msgs__msg__SFCrosswalk * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // lupointposlgt
  // lupointposlat
  // rupointposlgt
  // rupointposlat
  // rdpointposlgt
  // rdpointposlat
  // ldpointposlgt
  // ldpointposlat
  // confi
  // reserved
  return true;
}

void
deva_aeb_msgs__msg__SFCrosswalk__fini(deva_aeb_msgs__msg__SFCrosswalk * msg)
{
  if (!msg) {
    return;
  }
  // id
  // lupointposlgt
  // lupointposlat
  // rupointposlgt
  // rupointposlat
  // rdpointposlgt
  // rdpointposlat
  // ldpointposlgt
  // ldpointposlat
  // confi
  // reserved
}

bool
deva_aeb_msgs__msg__SFCrosswalk__are_equal(const deva_aeb_msgs__msg__SFCrosswalk * lhs, const deva_aeb_msgs__msg__SFCrosswalk * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // lupointposlgt
  if (lhs->lupointposlgt != rhs->lupointposlgt) {
    return false;
  }
  // lupointposlat
  if (lhs->lupointposlat != rhs->lupointposlat) {
    return false;
  }
  // rupointposlgt
  if (lhs->rupointposlgt != rhs->rupointposlgt) {
    return false;
  }
  // rupointposlat
  if (lhs->rupointposlat != rhs->rupointposlat) {
    return false;
  }
  // rdpointposlgt
  if (lhs->rdpointposlgt != rhs->rdpointposlgt) {
    return false;
  }
  // rdpointposlat
  if (lhs->rdpointposlat != rhs->rdpointposlat) {
    return false;
  }
  // ldpointposlgt
  if (lhs->ldpointposlgt != rhs->ldpointposlgt) {
    return false;
  }
  // ldpointposlat
  if (lhs->ldpointposlat != rhs->ldpointposlat) {
    return false;
  }
  // confi
  if (lhs->confi != rhs->confi) {
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
deva_aeb_msgs__msg__SFCrosswalk__copy(
  const deva_aeb_msgs__msg__SFCrosswalk * input,
  deva_aeb_msgs__msg__SFCrosswalk * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // lupointposlgt
  output->lupointposlgt = input->lupointposlgt;
  // lupointposlat
  output->lupointposlat = input->lupointposlat;
  // rupointposlgt
  output->rupointposlgt = input->rupointposlgt;
  // rupointposlat
  output->rupointposlat = input->rupointposlat;
  // rdpointposlgt
  output->rdpointposlgt = input->rdpointposlgt;
  // rdpointposlat
  output->rdpointposlat = input->rdpointposlat;
  // ldpointposlgt
  output->ldpointposlgt = input->ldpointposlgt;
  // ldpointposlat
  output->ldpointposlat = input->ldpointposlat;
  // confi
  output->confi = input->confi;
  // reserved
  for (size_t i = 0; i < 3; ++i) {
    output->reserved[i] = input->reserved[i];
  }
  return true;
}

deva_aeb_msgs__msg__SFCrosswalk *
deva_aeb_msgs__msg__SFCrosswalk__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFCrosswalk * msg = (deva_aeb_msgs__msg__SFCrosswalk *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFCrosswalk), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFCrosswalk));
  bool success = deva_aeb_msgs__msg__SFCrosswalk__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFCrosswalk__destroy(deva_aeb_msgs__msg__SFCrosswalk * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFCrosswalk__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFCrosswalk__Sequence__init(deva_aeb_msgs__msg__SFCrosswalk__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFCrosswalk * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFCrosswalk *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFCrosswalk), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFCrosswalk__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFCrosswalk__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFCrosswalk__Sequence__fini(deva_aeb_msgs__msg__SFCrosswalk__Sequence * array)
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
      deva_aeb_msgs__msg__SFCrosswalk__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFCrosswalk__Sequence *
deva_aeb_msgs__msg__SFCrosswalk__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFCrosswalk__Sequence * array = (deva_aeb_msgs__msg__SFCrosswalk__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFCrosswalk__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFCrosswalk__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFCrosswalk__Sequence__destroy(deva_aeb_msgs__msg__SFCrosswalk__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFCrosswalk__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFCrosswalk__Sequence__are_equal(const deva_aeb_msgs__msg__SFCrosswalk__Sequence * lhs, const deva_aeb_msgs__msg__SFCrosswalk__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFCrosswalk__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFCrosswalk__Sequence__copy(
  const deva_aeb_msgs__msg__SFCrosswalk__Sequence * input,
  deva_aeb_msgs__msg__SFCrosswalk__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFCrosswalk);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFCrosswalk * data =
      (deva_aeb_msgs__msg__SFCrosswalk *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFCrosswalk__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFCrosswalk__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFCrosswalk__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
