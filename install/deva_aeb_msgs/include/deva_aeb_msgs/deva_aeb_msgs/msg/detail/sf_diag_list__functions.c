// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFDiagList.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_diag_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `weather`
// Member `scene`
// Member `rdsuf`
// Member `light`
// Member `time`
#include "deva_aeb_msgs/msg/detail/sf_diag_info__functions.h"

bool
deva_aeb_msgs__msg__SFDiagList__init(deva_aeb_msgs__msg__SFDiagList * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // framenum
  // weather
  if (!deva_aeb_msgs__msg__SFDiagInfo__init(&msg->weather)) {
    deva_aeb_msgs__msg__SFDiagList__fini(msg);
    return false;
  }
  // scene
  if (!deva_aeb_msgs__msg__SFDiagInfo__init(&msg->scene)) {
    deva_aeb_msgs__msg__SFDiagList__fini(msg);
    return false;
  }
  // rdsuf
  if (!deva_aeb_msgs__msg__SFDiagInfo__init(&msg->rdsuf)) {
    deva_aeb_msgs__msg__SFDiagList__fini(msg);
    return false;
  }
  // light
  if (!deva_aeb_msgs__msg__SFDiagInfo__init(&msg->light)) {
    deva_aeb_msgs__msg__SFDiagList__fini(msg);
    return false;
  }
  // time
  if (!deva_aeb_msgs__msg__SFDiagInfo__init(&msg->time)) {
    deva_aeb_msgs__msg__SFDiagList__fini(msg);
    return false;
  }
  return true;
}

void
deva_aeb_msgs__msg__SFDiagList__fini(deva_aeb_msgs__msg__SFDiagList * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // framenum
  // weather
  deva_aeb_msgs__msg__SFDiagInfo__fini(&msg->weather);
  // scene
  deva_aeb_msgs__msg__SFDiagInfo__fini(&msg->scene);
  // rdsuf
  deva_aeb_msgs__msg__SFDiagInfo__fini(&msg->rdsuf);
  // light
  deva_aeb_msgs__msg__SFDiagInfo__fini(&msg->light);
  // time
  deva_aeb_msgs__msg__SFDiagInfo__fini(&msg->time);
}

bool
deva_aeb_msgs__msg__SFDiagList__are_equal(const deva_aeb_msgs__msg__SFDiagList * lhs, const deva_aeb_msgs__msg__SFDiagList * rhs)
{
  if (!lhs || !rhs) {
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
  // weather
  if (!deva_aeb_msgs__msg__SFDiagInfo__are_equal(
      &(lhs->weather), &(rhs->weather)))
  {
    return false;
  }
  // scene
  if (!deva_aeb_msgs__msg__SFDiagInfo__are_equal(
      &(lhs->scene), &(rhs->scene)))
  {
    return false;
  }
  // rdsuf
  if (!deva_aeb_msgs__msg__SFDiagInfo__are_equal(
      &(lhs->rdsuf), &(rhs->rdsuf)))
  {
    return false;
  }
  // light
  if (!deva_aeb_msgs__msg__SFDiagInfo__are_equal(
      &(lhs->light), &(rhs->light)))
  {
    return false;
  }
  // time
  if (!deva_aeb_msgs__msg__SFDiagInfo__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFDiagList__copy(
  const deva_aeb_msgs__msg__SFDiagList * input,
  deva_aeb_msgs__msg__SFDiagList * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // framenum
  output->framenum = input->framenum;
  // weather
  if (!deva_aeb_msgs__msg__SFDiagInfo__copy(
      &(input->weather), &(output->weather)))
  {
    return false;
  }
  // scene
  if (!deva_aeb_msgs__msg__SFDiagInfo__copy(
      &(input->scene), &(output->scene)))
  {
    return false;
  }
  // rdsuf
  if (!deva_aeb_msgs__msg__SFDiagInfo__copy(
      &(input->rdsuf), &(output->rdsuf)))
  {
    return false;
  }
  // light
  if (!deva_aeb_msgs__msg__SFDiagInfo__copy(
      &(input->light), &(output->light)))
  {
    return false;
  }
  // time
  if (!deva_aeb_msgs__msg__SFDiagInfo__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  return true;
}

deva_aeb_msgs__msg__SFDiagList *
deva_aeb_msgs__msg__SFDiagList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFDiagList * msg = (deva_aeb_msgs__msg__SFDiagList *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFDiagList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFDiagList));
  bool success = deva_aeb_msgs__msg__SFDiagList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFDiagList__destroy(deva_aeb_msgs__msg__SFDiagList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFDiagList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFDiagList__Sequence__init(deva_aeb_msgs__msg__SFDiagList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFDiagList * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFDiagList *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFDiagList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFDiagList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFDiagList__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFDiagList__Sequence__fini(deva_aeb_msgs__msg__SFDiagList__Sequence * array)
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
      deva_aeb_msgs__msg__SFDiagList__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFDiagList__Sequence *
deva_aeb_msgs__msg__SFDiagList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFDiagList__Sequence * array = (deva_aeb_msgs__msg__SFDiagList__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFDiagList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFDiagList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFDiagList__Sequence__destroy(deva_aeb_msgs__msg__SFDiagList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFDiagList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFDiagList__Sequence__are_equal(const deva_aeb_msgs__msg__SFDiagList__Sequence * lhs, const deva_aeb_msgs__msg__SFDiagList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFDiagList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFDiagList__Sequence__copy(
  const deva_aeb_msgs__msg__SFDiagList__Sequence * input,
  deva_aeb_msgs__msg__SFDiagList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFDiagList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFDiagList * data =
      (deva_aeb_msgs__msg__SFDiagList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFDiagList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFDiagList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFDiagList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
