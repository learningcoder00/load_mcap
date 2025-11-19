// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFFrontLinePpty.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFFrontLinePpty__init(deva_aeb_msgs__msg__SFFrontLinePpty * msg)
{
  if (!msg) {
    return false;
  }
  // drvrpfmncmonqly
  // lanekeepaidqly
  // trfcjamassiqly
  // reserved
  // tunqly
  // id
  // lifetime
  return true;
}

void
deva_aeb_msgs__msg__SFFrontLinePpty__fini(deva_aeb_msgs__msg__SFFrontLinePpty * msg)
{
  if (!msg) {
    return;
  }
  // drvrpfmncmonqly
  // lanekeepaidqly
  // trfcjamassiqly
  // reserved
  // tunqly
  // id
  // lifetime
}

bool
deva_aeb_msgs__msg__SFFrontLinePpty__are_equal(const deva_aeb_msgs__msg__SFFrontLinePpty * lhs, const deva_aeb_msgs__msg__SFFrontLinePpty * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // drvrpfmncmonqly
  if (lhs->drvrpfmncmonqly != rhs->drvrpfmncmonqly) {
    return false;
  }
  // lanekeepaidqly
  if (lhs->lanekeepaidqly != rhs->lanekeepaidqly) {
    return false;
  }
  // trfcjamassiqly
  if (lhs->trfcjamassiqly != rhs->trfcjamassiqly) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // tunqly
  if (lhs->tunqly != rhs->tunqly) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // lifetime
  if (lhs->lifetime != rhs->lifetime) {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFFrontLinePpty__copy(
  const deva_aeb_msgs__msg__SFFrontLinePpty * input,
  deva_aeb_msgs__msg__SFFrontLinePpty * output)
{
  if (!input || !output) {
    return false;
  }
  // drvrpfmncmonqly
  output->drvrpfmncmonqly = input->drvrpfmncmonqly;
  // lanekeepaidqly
  output->lanekeepaidqly = input->lanekeepaidqly;
  // trfcjamassiqly
  output->trfcjamassiqly = input->trfcjamassiqly;
  // reserved
  output->reserved = input->reserved;
  // tunqly
  output->tunqly = input->tunqly;
  // id
  output->id = input->id;
  // lifetime
  output->lifetime = input->lifetime;
  return true;
}

deva_aeb_msgs__msg__SFFrontLinePpty *
deva_aeb_msgs__msg__SFFrontLinePpty__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFrontLinePpty * msg = (deva_aeb_msgs__msg__SFFrontLinePpty *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFFrontLinePpty), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFFrontLinePpty));
  bool success = deva_aeb_msgs__msg__SFFrontLinePpty__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFFrontLinePpty__destroy(deva_aeb_msgs__msg__SFFrontLinePpty * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFFrontLinePpty__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFFrontLinePpty__Sequence__init(deva_aeb_msgs__msg__SFFrontLinePpty__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFrontLinePpty * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFFrontLinePpty *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFFrontLinePpty), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFFrontLinePpty__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFFrontLinePpty__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFFrontLinePpty__Sequence__fini(deva_aeb_msgs__msg__SFFrontLinePpty__Sequence * array)
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
      deva_aeb_msgs__msg__SFFrontLinePpty__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFFrontLinePpty__Sequence *
deva_aeb_msgs__msg__SFFrontLinePpty__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFrontLinePpty__Sequence * array = (deva_aeb_msgs__msg__SFFrontLinePpty__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFFrontLinePpty__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFFrontLinePpty__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFFrontLinePpty__Sequence__destroy(deva_aeb_msgs__msg__SFFrontLinePpty__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFFrontLinePpty__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFFrontLinePpty__Sequence__are_equal(const deva_aeb_msgs__msg__SFFrontLinePpty__Sequence * lhs, const deva_aeb_msgs__msg__SFFrontLinePpty__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFFrontLinePpty__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFFrontLinePpty__Sequence__copy(
  const deva_aeb_msgs__msg__SFFrontLinePpty__Sequence * input,
  deva_aeb_msgs__msg__SFFrontLinePpty__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFFrontLinePpty);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFFrontLinePpty * data =
      (deva_aeb_msgs__msg__SFFrontLinePpty *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFFrontLinePpty__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFFrontLinePpty__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFFrontLinePpty__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
