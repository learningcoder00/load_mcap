// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/SFFusionTSListNOA.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/sf_fusion_ts_list_noa__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `trafficsign`
// Member `trafficsign_all`
#include "deva_perception_msgs/msg/detail/sf_fusion_tsnoa__functions.h"

bool
deva_perception_msgs__msg__SFFusionTSListNOA__init(deva_perception_msgs__msg__SFFusionTSListNOA * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__SFFusionTSListNOA__fini(msg);
    return false;
  }
  // timestamp
  // framenum
  // reversed
  // trafficsign
  for (size_t i = 0; i < 16; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTSNOA__init(&msg->trafficsign[i])) {
      deva_perception_msgs__msg__SFFusionTSListNOA__fini(msg);
      return false;
    }
  }
  // validsize
  // trafficsign_all
  if (!deva_perception_msgs__msg__SFFusionTSNOA__Sequence__init(&msg->trafficsign_all, 0)) {
    deva_perception_msgs__msg__SFFusionTSListNOA__fini(msg);
    return false;
  }
  // all_validsize
  return true;
}

void
deva_perception_msgs__msg__SFFusionTSListNOA__fini(deva_perception_msgs__msg__SFFusionTSListNOA * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // timestamp
  // framenum
  // reversed
  // trafficsign
  for (size_t i = 0; i < 16; ++i) {
    deva_perception_msgs__msg__SFFusionTSNOA__fini(&msg->trafficsign[i]);
  }
  // validsize
  // trafficsign_all
  deva_perception_msgs__msg__SFFusionTSNOA__Sequence__fini(&msg->trafficsign_all);
  // all_validsize
}

bool
deva_perception_msgs__msg__SFFusionTSListNOA__are_equal(const deva_perception_msgs__msg__SFFusionTSListNOA * lhs, const deva_perception_msgs__msg__SFFusionTSListNOA * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
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
  // reversed
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->reversed[i] != rhs->reversed[i]) {
      return false;
    }
  }
  // trafficsign
  for (size_t i = 0; i < 16; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTSNOA__are_equal(
        &(lhs->trafficsign[i]), &(rhs->trafficsign[i])))
    {
      return false;
    }
  }
  // validsize
  if (lhs->validsize != rhs->validsize) {
    return false;
  }
  // trafficsign_all
  if (!deva_perception_msgs__msg__SFFusionTSNOA__Sequence__are_equal(
      &(lhs->trafficsign_all), &(rhs->trafficsign_all)))
  {
    return false;
  }
  // all_validsize
  if (lhs->all_validsize != rhs->all_validsize) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__SFFusionTSListNOA__copy(
  const deva_perception_msgs__msg__SFFusionTSListNOA * input,
  deva_perception_msgs__msg__SFFusionTSListNOA * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // framenum
  output->framenum = input->framenum;
  // reversed
  for (size_t i = 0; i < 3; ++i) {
    output->reversed[i] = input->reversed[i];
  }
  // trafficsign
  for (size_t i = 0; i < 16; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTSNOA__copy(
        &(input->trafficsign[i]), &(output->trafficsign[i])))
    {
      return false;
    }
  }
  // validsize
  output->validsize = input->validsize;
  // trafficsign_all
  if (!deva_perception_msgs__msg__SFFusionTSNOA__Sequence__copy(
      &(input->trafficsign_all), &(output->trafficsign_all)))
  {
    return false;
  }
  // all_validsize
  output->all_validsize = input->all_validsize;
  return true;
}

deva_perception_msgs__msg__SFFusionTSListNOA *
deva_perception_msgs__msg__SFFusionTSListNOA__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SFFusionTSListNOA * msg = (deva_perception_msgs__msg__SFFusionTSListNOA *)allocator.allocate(sizeof(deva_perception_msgs__msg__SFFusionTSListNOA), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__SFFusionTSListNOA));
  bool success = deva_perception_msgs__msg__SFFusionTSListNOA__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__SFFusionTSListNOA__destroy(deva_perception_msgs__msg__SFFusionTSListNOA * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__SFFusionTSListNOA__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__SFFusionTSListNOA__Sequence__init(deva_perception_msgs__msg__SFFusionTSListNOA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SFFusionTSListNOA * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__SFFusionTSListNOA *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__SFFusionTSListNOA), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__SFFusionTSListNOA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__SFFusionTSListNOA__fini(&data[i - 1]);
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
deva_perception_msgs__msg__SFFusionTSListNOA__Sequence__fini(deva_perception_msgs__msg__SFFusionTSListNOA__Sequence * array)
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
      deva_perception_msgs__msg__SFFusionTSListNOA__fini(&array->data[i]);
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

deva_perception_msgs__msg__SFFusionTSListNOA__Sequence *
deva_perception_msgs__msg__SFFusionTSListNOA__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SFFusionTSListNOA__Sequence * array = (deva_perception_msgs__msg__SFFusionTSListNOA__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__SFFusionTSListNOA__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__SFFusionTSListNOA__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__SFFusionTSListNOA__Sequence__destroy(deva_perception_msgs__msg__SFFusionTSListNOA__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__SFFusionTSListNOA__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__SFFusionTSListNOA__Sequence__are_equal(const deva_perception_msgs__msg__SFFusionTSListNOA__Sequence * lhs, const deva_perception_msgs__msg__SFFusionTSListNOA__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTSListNOA__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__SFFusionTSListNOA__Sequence__copy(
  const deva_perception_msgs__msg__SFFusionTSListNOA__Sequence * input,
  deva_perception_msgs__msg__SFFusionTSListNOA__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__SFFusionTSListNOA);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__SFFusionTSListNOA * data =
      (deva_perception_msgs__msg__SFFusionTSListNOA *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__SFFusionTSListNOA__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__SFFusionTSListNOA__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTSListNOA__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
