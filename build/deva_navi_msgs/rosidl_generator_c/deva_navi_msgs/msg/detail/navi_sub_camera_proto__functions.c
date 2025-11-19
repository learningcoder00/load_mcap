// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/NaviSubCameraProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/navi_sub_camera_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `speed`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_navi_msgs__msg__NaviSubCameraProto__init(deva_navi_msgs__msg__NaviSubCameraProto * msg)
{
  if (!msg) {
    return false;
  }
  // sub_type
  // make_sound
  // camera_id
  // busway_time_enable
  // penalty
  // priority
  // is_new
  // is_variable_speed
  // is_match
  // is_special
  // speed
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->speed, 0)) {
    deva_navi_msgs__msg__NaviSubCameraProto__fini(msg);
    return false;
  }
  return true;
}

void
deva_navi_msgs__msg__NaviSubCameraProto__fini(deva_navi_msgs__msg__NaviSubCameraProto * msg)
{
  if (!msg) {
    return;
  }
  // sub_type
  // make_sound
  // camera_id
  // busway_time_enable
  // penalty
  // priority
  // is_new
  // is_variable_speed
  // is_match
  // is_special
  // speed
  rosidl_runtime_c__int32__Sequence__fini(&msg->speed);
}

bool
deva_navi_msgs__msg__NaviSubCameraProto__are_equal(const deva_navi_msgs__msg__NaviSubCameraProto * lhs, const deva_navi_msgs__msg__NaviSubCameraProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sub_type
  if (lhs->sub_type != rhs->sub_type) {
    return false;
  }
  // make_sound
  if (lhs->make_sound != rhs->make_sound) {
    return false;
  }
  // camera_id
  if (lhs->camera_id != rhs->camera_id) {
    return false;
  }
  // busway_time_enable
  if (lhs->busway_time_enable != rhs->busway_time_enable) {
    return false;
  }
  // penalty
  if (lhs->penalty != rhs->penalty) {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  // is_new
  if (lhs->is_new != rhs->is_new) {
    return false;
  }
  // is_variable_speed
  if (lhs->is_variable_speed != rhs->is_variable_speed) {
    return false;
  }
  // is_match
  if (lhs->is_match != rhs->is_match) {
    return false;
  }
  // is_special
  if (lhs->is_special != rhs->is_special) {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__NaviSubCameraProto__copy(
  const deva_navi_msgs__msg__NaviSubCameraProto * input,
  deva_navi_msgs__msg__NaviSubCameraProto * output)
{
  if (!input || !output) {
    return false;
  }
  // sub_type
  output->sub_type = input->sub_type;
  // make_sound
  output->make_sound = input->make_sound;
  // camera_id
  output->camera_id = input->camera_id;
  // busway_time_enable
  output->busway_time_enable = input->busway_time_enable;
  // penalty
  output->penalty = input->penalty;
  // priority
  output->priority = input->priority;
  // is_new
  output->is_new = input->is_new;
  // is_variable_speed
  output->is_variable_speed = input->is_variable_speed;
  // is_match
  output->is_match = input->is_match;
  // is_special
  output->is_special = input->is_special;
  // speed
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  return true;
}

deva_navi_msgs__msg__NaviSubCameraProto *
deva_navi_msgs__msg__NaviSubCameraProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__NaviSubCameraProto * msg = (deva_navi_msgs__msg__NaviSubCameraProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__NaviSubCameraProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__NaviSubCameraProto));
  bool success = deva_navi_msgs__msg__NaviSubCameraProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__NaviSubCameraProto__destroy(deva_navi_msgs__msg__NaviSubCameraProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__NaviSubCameraProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__NaviSubCameraProto__Sequence__init(deva_navi_msgs__msg__NaviSubCameraProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__NaviSubCameraProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__NaviSubCameraProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__NaviSubCameraProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__NaviSubCameraProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__NaviSubCameraProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__NaviSubCameraProto__Sequence__fini(deva_navi_msgs__msg__NaviSubCameraProto__Sequence * array)
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
      deva_navi_msgs__msg__NaviSubCameraProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__NaviSubCameraProto__Sequence *
deva_navi_msgs__msg__NaviSubCameraProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__NaviSubCameraProto__Sequence * array = (deva_navi_msgs__msg__NaviSubCameraProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__NaviSubCameraProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__NaviSubCameraProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__NaviSubCameraProto__Sequence__destroy(deva_navi_msgs__msg__NaviSubCameraProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__NaviSubCameraProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__NaviSubCameraProto__Sequence__are_equal(const deva_navi_msgs__msg__NaviSubCameraProto__Sequence * lhs, const deva_navi_msgs__msg__NaviSubCameraProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__NaviSubCameraProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__NaviSubCameraProto__Sequence__copy(
  const deva_navi_msgs__msg__NaviSubCameraProto__Sequence * input,
  deva_navi_msgs__msg__NaviSubCameraProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__NaviSubCameraProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__NaviSubCameraProto * data =
      (deva_navi_msgs__msg__NaviSubCameraProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__NaviSubCameraProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__NaviSubCameraProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__NaviSubCameraProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
