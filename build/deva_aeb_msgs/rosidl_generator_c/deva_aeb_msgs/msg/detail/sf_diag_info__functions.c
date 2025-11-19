// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFDiagInfo.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_diag_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFDiagInfo__init(deva_aeb_msgs__msg__SFDiagInfo * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // confi
  // reserved
  // timestamp
  // framenum
  return true;
}

void
deva_aeb_msgs__msg__SFDiagInfo__fini(deva_aeb_msgs__msg__SFDiagInfo * msg)
{
  if (!msg) {
    return;
  }
  // type
  // confi
  // reserved
  // timestamp
  // framenum
}

bool
deva_aeb_msgs__msg__SFDiagInfo__are_equal(const deva_aeb_msgs__msg__SFDiagInfo * lhs, const deva_aeb_msgs__msg__SFDiagInfo * rhs)
{
  if (!lhs || !rhs) {
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
  // reserved
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->reserved[i] != rhs->reserved[i]) {
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
  return true;
}

bool
deva_aeb_msgs__msg__SFDiagInfo__copy(
  const deva_aeb_msgs__msg__SFDiagInfo * input,
  deva_aeb_msgs__msg__SFDiagInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // confi
  output->confi = input->confi;
  // reserved
  for (size_t i = 0; i < 2; ++i) {
    output->reserved[i] = input->reserved[i];
  }
  // timestamp
  output->timestamp = input->timestamp;
  // framenum
  output->framenum = input->framenum;
  return true;
}

deva_aeb_msgs__msg__SFDiagInfo *
deva_aeb_msgs__msg__SFDiagInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFDiagInfo * msg = (deva_aeb_msgs__msg__SFDiagInfo *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFDiagInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFDiagInfo));
  bool success = deva_aeb_msgs__msg__SFDiagInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFDiagInfo__destroy(deva_aeb_msgs__msg__SFDiagInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFDiagInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFDiagInfo__Sequence__init(deva_aeb_msgs__msg__SFDiagInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFDiagInfo * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFDiagInfo *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFDiagInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFDiagInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFDiagInfo__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFDiagInfo__Sequence__fini(deva_aeb_msgs__msg__SFDiagInfo__Sequence * array)
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
      deva_aeb_msgs__msg__SFDiagInfo__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFDiagInfo__Sequence *
deva_aeb_msgs__msg__SFDiagInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFDiagInfo__Sequence * array = (deva_aeb_msgs__msg__SFDiagInfo__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFDiagInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFDiagInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFDiagInfo__Sequence__destroy(deva_aeb_msgs__msg__SFDiagInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFDiagInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFDiagInfo__Sequence__are_equal(const deva_aeb_msgs__msg__SFDiagInfo__Sequence * lhs, const deva_aeb_msgs__msg__SFDiagInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFDiagInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFDiagInfo__Sequence__copy(
  const deva_aeb_msgs__msg__SFDiagInfo__Sequence * input,
  deva_aeb_msgs__msg__SFDiagInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFDiagInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFDiagInfo * data =
      (deva_aeb_msgs__msg__SFDiagInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFDiagInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFDiagInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFDiagInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
