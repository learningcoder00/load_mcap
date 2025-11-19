// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/TrafficDetectData.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/traffic_detect_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `f120trafficobjects`
// Member `f30trafficobjects`
#include "deva_perception_msgs/msg/detail/traffic_object__functions.h"
// Member `e2eobjects`
#include "deva_perception_msgs/msg/detail/e2e_result__functions.h"

bool
deva_perception_msgs__msg__TrafficDetectData__init(deva_perception_msgs__msg__TrafficDetectData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__TrafficDetectData__fini(msg);
    return false;
  }
  // framenum
  // timestamp
  // abs_vel_x
  // abs_acc_x
  // vel_motion
  // acc_motion
  // f120_object_num
  // f30_object_num
  // f120trafficobjects
  for (size_t i = 0; i < 64; ++i) {
    if (!deva_perception_msgs__msg__TrafficObject__init(&msg->f120trafficobjects[i])) {
      deva_perception_msgs__msg__TrafficDetectData__fini(msg);
      return false;
    }
  }
  // f30trafficobjects
  for (size_t i = 0; i < 64; ++i) {
    if (!deva_perception_msgs__msg__TrafficObject__init(&msg->f30trafficobjects[i])) {
      deva_perception_msgs__msg__TrafficDetectData__fini(msg);
      return false;
    }
  }
  // e2eobjects
  if (!deva_perception_msgs__msg__E2eResult__init(&msg->e2eobjects)) {
    deva_perception_msgs__msg__TrafficDetectData__fini(msg);
    return false;
  }
  // time_of_day
  // reserved
  return true;
}

void
deva_perception_msgs__msg__TrafficDetectData__fini(deva_perception_msgs__msg__TrafficDetectData * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // framenum
  // timestamp
  // abs_vel_x
  // abs_acc_x
  // vel_motion
  // acc_motion
  // f120_object_num
  // f30_object_num
  // f120trafficobjects
  for (size_t i = 0; i < 64; ++i) {
    deva_perception_msgs__msg__TrafficObject__fini(&msg->f120trafficobjects[i]);
  }
  // f30trafficobjects
  for (size_t i = 0; i < 64; ++i) {
    deva_perception_msgs__msg__TrafficObject__fini(&msg->f30trafficobjects[i]);
  }
  // e2eobjects
  deva_perception_msgs__msg__E2eResult__fini(&msg->e2eobjects);
  // time_of_day
  // reserved
}

bool
deva_perception_msgs__msg__TrafficDetectData__are_equal(const deva_perception_msgs__msg__TrafficDetectData * lhs, const deva_perception_msgs__msg__TrafficDetectData * rhs)
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
  // framenum
  if (lhs->framenum != rhs->framenum) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // abs_vel_x
  if (lhs->abs_vel_x != rhs->abs_vel_x) {
    return false;
  }
  // abs_acc_x
  if (lhs->abs_acc_x != rhs->abs_acc_x) {
    return false;
  }
  // vel_motion
  if (lhs->vel_motion != rhs->vel_motion) {
    return false;
  }
  // acc_motion
  if (lhs->acc_motion != rhs->acc_motion) {
    return false;
  }
  // f120_object_num
  if (lhs->f120_object_num != rhs->f120_object_num) {
    return false;
  }
  // f30_object_num
  if (lhs->f30_object_num != rhs->f30_object_num) {
    return false;
  }
  // f120trafficobjects
  for (size_t i = 0; i < 64; ++i) {
    if (!deva_perception_msgs__msg__TrafficObject__are_equal(
        &(lhs->f120trafficobjects[i]), &(rhs->f120trafficobjects[i])))
    {
      return false;
    }
  }
  // f30trafficobjects
  for (size_t i = 0; i < 64; ++i) {
    if (!deva_perception_msgs__msg__TrafficObject__are_equal(
        &(lhs->f30trafficobjects[i]), &(rhs->f30trafficobjects[i])))
    {
      return false;
    }
  }
  // e2eobjects
  if (!deva_perception_msgs__msg__E2eResult__are_equal(
      &(lhs->e2eobjects), &(rhs->e2eobjects)))
  {
    return false;
  }
  // time_of_day
  if (lhs->time_of_day != rhs->time_of_day) {
    return false;
  }
  // reserved
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->reserved[i] != rhs->reserved[i]) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__TrafficDetectData__copy(
  const deva_perception_msgs__msg__TrafficDetectData * input,
  deva_perception_msgs__msg__TrafficDetectData * output)
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
  // framenum
  output->framenum = input->framenum;
  // timestamp
  output->timestamp = input->timestamp;
  // abs_vel_x
  output->abs_vel_x = input->abs_vel_x;
  // abs_acc_x
  output->abs_acc_x = input->abs_acc_x;
  // vel_motion
  output->vel_motion = input->vel_motion;
  // acc_motion
  output->acc_motion = input->acc_motion;
  // f120_object_num
  output->f120_object_num = input->f120_object_num;
  // f30_object_num
  output->f30_object_num = input->f30_object_num;
  // f120trafficobjects
  for (size_t i = 0; i < 64; ++i) {
    if (!deva_perception_msgs__msg__TrafficObject__copy(
        &(input->f120trafficobjects[i]), &(output->f120trafficobjects[i])))
    {
      return false;
    }
  }
  // f30trafficobjects
  for (size_t i = 0; i < 64; ++i) {
    if (!deva_perception_msgs__msg__TrafficObject__copy(
        &(input->f30trafficobjects[i]), &(output->f30trafficobjects[i])))
    {
      return false;
    }
  }
  // e2eobjects
  if (!deva_perception_msgs__msg__E2eResult__copy(
      &(input->e2eobjects), &(output->e2eobjects)))
  {
    return false;
  }
  // time_of_day
  output->time_of_day = input->time_of_day;
  // reserved
  for (size_t i = 0; i < 2; ++i) {
    output->reserved[i] = input->reserved[i];
  }
  return true;
}

deva_perception_msgs__msg__TrafficDetectData *
deva_perception_msgs__msg__TrafficDetectData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__TrafficDetectData * msg = (deva_perception_msgs__msg__TrafficDetectData *)allocator.allocate(sizeof(deva_perception_msgs__msg__TrafficDetectData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__TrafficDetectData));
  bool success = deva_perception_msgs__msg__TrafficDetectData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__TrafficDetectData__destroy(deva_perception_msgs__msg__TrafficDetectData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__TrafficDetectData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__TrafficDetectData__Sequence__init(deva_perception_msgs__msg__TrafficDetectData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__TrafficDetectData * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__TrafficDetectData *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__TrafficDetectData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__TrafficDetectData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__TrafficDetectData__fini(&data[i - 1]);
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
deva_perception_msgs__msg__TrafficDetectData__Sequence__fini(deva_perception_msgs__msg__TrafficDetectData__Sequence * array)
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
      deva_perception_msgs__msg__TrafficDetectData__fini(&array->data[i]);
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

deva_perception_msgs__msg__TrafficDetectData__Sequence *
deva_perception_msgs__msg__TrafficDetectData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__TrafficDetectData__Sequence * array = (deva_perception_msgs__msg__TrafficDetectData__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__TrafficDetectData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__TrafficDetectData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__TrafficDetectData__Sequence__destroy(deva_perception_msgs__msg__TrafficDetectData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__TrafficDetectData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__TrafficDetectData__Sequence__are_equal(const deva_perception_msgs__msg__TrafficDetectData__Sequence * lhs, const deva_perception_msgs__msg__TrafficDetectData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__TrafficDetectData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__TrafficDetectData__Sequence__copy(
  const deva_perception_msgs__msg__TrafficDetectData__Sequence * input,
  deva_perception_msgs__msg__TrafficDetectData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__TrafficDetectData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__TrafficDetectData * data =
      (deva_perception_msgs__msg__TrafficDetectData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__TrafficDetectData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__TrafficDetectData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__TrafficDetectData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
