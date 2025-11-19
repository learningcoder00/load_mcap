// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/PathDescriptionInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/path_description_info_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_navi_msgs__msg__PathDescriptionInfoProto__init(deva_navi_msgs__msg__PathDescriptionInfoProto * msg)
{
  if (!msg) {
    return false;
  }
  // path_type
  // flag1
  // flag2
  return true;
}

void
deva_navi_msgs__msg__PathDescriptionInfoProto__fini(deva_navi_msgs__msg__PathDescriptionInfoProto * msg)
{
  if (!msg) {
    return;
  }
  // path_type
  // flag1
  // flag2
}

bool
deva_navi_msgs__msg__PathDescriptionInfoProto__are_equal(const deva_navi_msgs__msg__PathDescriptionInfoProto * lhs, const deva_navi_msgs__msg__PathDescriptionInfoProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path_type
  if (lhs->path_type != rhs->path_type) {
    return false;
  }
  // flag1
  if (lhs->flag1 != rhs->flag1) {
    return false;
  }
  // flag2
  if (lhs->flag2 != rhs->flag2) {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__PathDescriptionInfoProto__copy(
  const deva_navi_msgs__msg__PathDescriptionInfoProto * input,
  deva_navi_msgs__msg__PathDescriptionInfoProto * output)
{
  if (!input || !output) {
    return false;
  }
  // path_type
  output->path_type = input->path_type;
  // flag1
  output->flag1 = input->flag1;
  // flag2
  output->flag2 = input->flag2;
  return true;
}

deva_navi_msgs__msg__PathDescriptionInfoProto *
deva_navi_msgs__msg__PathDescriptionInfoProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__PathDescriptionInfoProto * msg = (deva_navi_msgs__msg__PathDescriptionInfoProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__PathDescriptionInfoProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__PathDescriptionInfoProto));
  bool success = deva_navi_msgs__msg__PathDescriptionInfoProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__PathDescriptionInfoProto__destroy(deva_navi_msgs__msg__PathDescriptionInfoProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__PathDescriptionInfoProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence__init(deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__PathDescriptionInfoProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__PathDescriptionInfoProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__PathDescriptionInfoProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__PathDescriptionInfoProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__PathDescriptionInfoProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence__fini(deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence * array)
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
      deva_navi_msgs__msg__PathDescriptionInfoProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence *
deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence * array = (deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence__destroy(deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence * lhs, const deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__PathDescriptionInfoProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence * input,
  deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__PathDescriptionInfoProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__PathDescriptionInfoProto * data =
      (deva_navi_msgs__msg__PathDescriptionInfoProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__PathDescriptionInfoProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__PathDescriptionInfoProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__PathDescriptionInfoProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
