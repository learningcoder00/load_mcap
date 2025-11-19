// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/AdbTrafficSign.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/adb_traffic_sign__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `extra_infos`
#include "deva_perception_msgs/msg/detail/extra_info__functions.h"

bool
deva_perception_msgs__msg__AdbTrafficSign__init(deva_perception_msgs__msg__AdbTrafficSign * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // conf
  // parsing_conf
  // track_info
  // age
  // life_time
  // distance
  // horizon_left_angle
  // horizon_right_angle
  // vertical_bottom_angle
  // vertical_top_angle
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__init(&msg->extra_infos, 0)) {
    deva_perception_msgs__msg__AdbTrafficSign__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__AdbTrafficSign__fini(deva_perception_msgs__msg__AdbTrafficSign * msg)
{
  if (!msg) {
    return;
  }
  // id
  // conf
  // parsing_conf
  // track_info
  // age
  // life_time
  // distance
  // horizon_left_angle
  // horizon_right_angle
  // vertical_bottom_angle
  // vertical_top_angle
  // extra_infos
  deva_perception_msgs__msg__ExtraInfo__Sequence__fini(&msg->extra_infos);
}

bool
deva_perception_msgs__msg__AdbTrafficSign__are_equal(const deva_perception_msgs__msg__AdbTrafficSign * lhs, const deva_perception_msgs__msg__AdbTrafficSign * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // conf
  if (lhs->conf != rhs->conf) {
    return false;
  }
  // parsing_conf
  if (lhs->parsing_conf != rhs->parsing_conf) {
    return false;
  }
  // track_info
  if (lhs->track_info != rhs->track_info) {
    return false;
  }
  // age
  if (lhs->age != rhs->age) {
    return false;
  }
  // life_time
  if (lhs->life_time != rhs->life_time) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // horizon_left_angle
  if (lhs->horizon_left_angle != rhs->horizon_left_angle) {
    return false;
  }
  // horizon_right_angle
  if (lhs->horizon_right_angle != rhs->horizon_right_angle) {
    return false;
  }
  // vertical_bottom_angle
  if (lhs->vertical_bottom_angle != rhs->vertical_bottom_angle) {
    return false;
  }
  // vertical_top_angle
  if (lhs->vertical_top_angle != rhs->vertical_top_angle) {
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
deva_perception_msgs__msg__AdbTrafficSign__copy(
  const deva_perception_msgs__msg__AdbTrafficSign * input,
  deva_perception_msgs__msg__AdbTrafficSign * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // conf
  output->conf = input->conf;
  // parsing_conf
  output->parsing_conf = input->parsing_conf;
  // track_info
  output->track_info = input->track_info;
  // age
  output->age = input->age;
  // life_time
  output->life_time = input->life_time;
  // distance
  output->distance = input->distance;
  // horizon_left_angle
  output->horizon_left_angle = input->horizon_left_angle;
  // horizon_right_angle
  output->horizon_right_angle = input->horizon_right_angle;
  // vertical_bottom_angle
  output->vertical_bottom_angle = input->vertical_bottom_angle;
  // vertical_top_angle
  output->vertical_top_angle = input->vertical_top_angle;
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__copy(
      &(input->extra_infos), &(output->extra_infos)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__AdbTrafficSign *
deva_perception_msgs__msg__AdbTrafficSign__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__AdbTrafficSign * msg = (deva_perception_msgs__msg__AdbTrafficSign *)allocator.allocate(sizeof(deva_perception_msgs__msg__AdbTrafficSign), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__AdbTrafficSign));
  bool success = deva_perception_msgs__msg__AdbTrafficSign__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__AdbTrafficSign__destroy(deva_perception_msgs__msg__AdbTrafficSign * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__AdbTrafficSign__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__AdbTrafficSign__Sequence__init(deva_perception_msgs__msg__AdbTrafficSign__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__AdbTrafficSign * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__AdbTrafficSign *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__AdbTrafficSign), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__AdbTrafficSign__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__AdbTrafficSign__fini(&data[i - 1]);
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
deva_perception_msgs__msg__AdbTrafficSign__Sequence__fini(deva_perception_msgs__msg__AdbTrafficSign__Sequence * array)
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
      deva_perception_msgs__msg__AdbTrafficSign__fini(&array->data[i]);
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

deva_perception_msgs__msg__AdbTrafficSign__Sequence *
deva_perception_msgs__msg__AdbTrafficSign__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__AdbTrafficSign__Sequence * array = (deva_perception_msgs__msg__AdbTrafficSign__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__AdbTrafficSign__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__AdbTrafficSign__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__AdbTrafficSign__Sequence__destroy(deva_perception_msgs__msg__AdbTrafficSign__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__AdbTrafficSign__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__AdbTrafficSign__Sequence__are_equal(const deva_perception_msgs__msg__AdbTrafficSign__Sequence * lhs, const deva_perception_msgs__msg__AdbTrafficSign__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__AdbTrafficSign__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__AdbTrafficSign__Sequence__copy(
  const deva_perception_msgs__msg__AdbTrafficSign__Sequence * input,
  deva_perception_msgs__msg__AdbTrafficSign__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__AdbTrafficSign);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__AdbTrafficSign * data =
      (deva_perception_msgs__msg__AdbTrafficSign *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__AdbTrafficSign__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__AdbTrafficSign__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__AdbTrafficSign__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
