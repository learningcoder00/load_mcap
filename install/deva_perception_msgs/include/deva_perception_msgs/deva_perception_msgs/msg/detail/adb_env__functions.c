// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/AdbEnv.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/adb_env__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `sign_list`
#include "deva_perception_msgs/msg/detail/adb_traffic_sign__functions.h"
// Member `extra_infos`
#include "deva_perception_msgs/msg/detail/extra_info__functions.h"

bool
deva_perception_msgs__msg__AdbEnv__init(deva_perception_msgs__msg__AdbEnv * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__AdbEnv__fini(msg);
    return false;
  }
  // sign_list
  if (!deva_perception_msgs__msg__AdbTrafficSign__Sequence__init(&msg->sign_list, 0)) {
    deva_perception_msgs__msg__AdbEnv__fini(msg);
    return false;
  }
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__init(&msg->extra_infos, 0)) {
    deva_perception_msgs__msg__AdbEnv__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__AdbEnv__fini(deva_perception_msgs__msg__AdbEnv * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // sign_list
  deva_perception_msgs__msg__AdbTrafficSign__Sequence__fini(&msg->sign_list);
  // extra_infos
  deva_perception_msgs__msg__ExtraInfo__Sequence__fini(&msg->extra_infos);
}

bool
deva_perception_msgs__msg__AdbEnv__are_equal(const deva_perception_msgs__msg__AdbEnv * lhs, const deva_perception_msgs__msg__AdbEnv * rhs)
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
  // sign_list
  if (!deva_perception_msgs__msg__AdbTrafficSign__Sequence__are_equal(
      &(lhs->sign_list), &(rhs->sign_list)))
  {
    return false;
  }
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__are_equal(
      &(lhs->extra_infos), &(rhs->extra_infos)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__AdbEnv__copy(
  const deva_perception_msgs__msg__AdbEnv * input,
  deva_perception_msgs__msg__AdbEnv * output)
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
  // sign_list
  if (!deva_perception_msgs__msg__AdbTrafficSign__Sequence__copy(
      &(input->sign_list), &(output->sign_list)))
  {
    return false;
  }
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__copy(
      &(input->extra_infos), &(output->extra_infos)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__AdbEnv *
deva_perception_msgs__msg__AdbEnv__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__AdbEnv * msg = (deva_perception_msgs__msg__AdbEnv *)allocator.allocate(sizeof(deva_perception_msgs__msg__AdbEnv), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__AdbEnv));
  bool success = deva_perception_msgs__msg__AdbEnv__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__AdbEnv__destroy(deva_perception_msgs__msg__AdbEnv * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__AdbEnv__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__AdbEnv__Sequence__init(deva_perception_msgs__msg__AdbEnv__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__AdbEnv * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__AdbEnv *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__AdbEnv), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__AdbEnv__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__AdbEnv__fini(&data[i - 1]);
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
deva_perception_msgs__msg__AdbEnv__Sequence__fini(deva_perception_msgs__msg__AdbEnv__Sequence * array)
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
      deva_perception_msgs__msg__AdbEnv__fini(&array->data[i]);
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

deva_perception_msgs__msg__AdbEnv__Sequence *
deva_perception_msgs__msg__AdbEnv__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__AdbEnv__Sequence * array = (deva_perception_msgs__msg__AdbEnv__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__AdbEnv__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__AdbEnv__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__AdbEnv__Sequence__destroy(deva_perception_msgs__msg__AdbEnv__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__AdbEnv__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__AdbEnv__Sequence__are_equal(const deva_perception_msgs__msg__AdbEnv__Sequence * lhs, const deva_perception_msgs__msg__AdbEnv__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__AdbEnv__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__AdbEnv__Sequence__copy(
  const deva_perception_msgs__msg__AdbEnv__Sequence * input,
  deva_perception_msgs__msg__AdbEnv__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__AdbEnv);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__AdbEnv * data =
      (deva_perception_msgs__msg__AdbEnv *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__AdbEnv__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__AdbEnv__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__AdbEnv__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
