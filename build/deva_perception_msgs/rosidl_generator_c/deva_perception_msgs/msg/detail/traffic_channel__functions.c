// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/TrafficChannel.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/traffic_channel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `dimensions`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `bbox2d`
#include "deva_common_msgs/msg/detail/bounding_box2d__functions.h"
// Member `extra_info`
#include "deva_perception_msgs/msg/detail/extra_info__functions.h"

bool
deva_perception_msgs__msg__TrafficChannel__init(deva_perception_msgs__msg__TrafficChannel * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__TrafficChannel__fini(msg);
    return false;
  }
  // id
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    deva_perception_msgs__msg__TrafficChannel__fini(msg);
    return false;
  }
  // dimensions
  if (!geometry_msgs__msg__Vector3__init(&msg->dimensions)) {
    deva_perception_msgs__msg__TrafficChannel__fini(msg);
    return false;
  }
  // score
  // type
  // bbox2d
  if (!deva_common_msgs__msg__BoundingBox2d__init(&msg->bbox2d)) {
    deva_perception_msgs__msg__TrafficChannel__fini(msg);
    return false;
  }
  // extra_info
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__init(&msg->extra_info, 0)) {
    deva_perception_msgs__msg__TrafficChannel__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__TrafficChannel__fini(deva_perception_msgs__msg__TrafficChannel * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // dimensions
  geometry_msgs__msg__Vector3__fini(&msg->dimensions);
  // score
  // type
  // bbox2d
  deva_common_msgs__msg__BoundingBox2d__fini(&msg->bbox2d);
  // extra_info
  deva_perception_msgs__msg__ExtraInfo__Sequence__fini(&msg->extra_info);
}

bool
deva_perception_msgs__msg__TrafficChannel__are_equal(const deva_perception_msgs__msg__TrafficChannel * lhs, const deva_perception_msgs__msg__TrafficChannel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // dimensions
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->dimensions), &(rhs->dimensions)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // bbox2d
  if (!deva_common_msgs__msg__BoundingBox2d__are_equal(
      &(lhs->bbox2d), &(rhs->bbox2d)))
  {
    return false;
  }
  // extra_info
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__are_equal(
      &(lhs->extra_info), &(rhs->extra_info)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__TrafficChannel__copy(
  const deva_perception_msgs__msg__TrafficChannel * input,
  deva_perception_msgs__msg__TrafficChannel * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // dimensions
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->dimensions), &(output->dimensions)))
  {
    return false;
  }
  // score
  output->score = input->score;
  // type
  output->type = input->type;
  // bbox2d
  if (!deva_common_msgs__msg__BoundingBox2d__copy(
      &(input->bbox2d), &(output->bbox2d)))
  {
    return false;
  }
  // extra_info
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__copy(
      &(input->extra_info), &(output->extra_info)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__TrafficChannel *
deva_perception_msgs__msg__TrafficChannel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__TrafficChannel * msg = (deva_perception_msgs__msg__TrafficChannel *)allocator.allocate(sizeof(deva_perception_msgs__msg__TrafficChannel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__TrafficChannel));
  bool success = deva_perception_msgs__msg__TrafficChannel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__TrafficChannel__destroy(deva_perception_msgs__msg__TrafficChannel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__TrafficChannel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__TrafficChannel__Sequence__init(deva_perception_msgs__msg__TrafficChannel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__TrafficChannel * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__TrafficChannel *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__TrafficChannel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__TrafficChannel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__TrafficChannel__fini(&data[i - 1]);
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
deva_perception_msgs__msg__TrafficChannel__Sequence__fini(deva_perception_msgs__msg__TrafficChannel__Sequence * array)
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
      deva_perception_msgs__msg__TrafficChannel__fini(&array->data[i]);
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

deva_perception_msgs__msg__TrafficChannel__Sequence *
deva_perception_msgs__msg__TrafficChannel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__TrafficChannel__Sequence * array = (deva_perception_msgs__msg__TrafficChannel__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__TrafficChannel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__TrafficChannel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__TrafficChannel__Sequence__destroy(deva_perception_msgs__msg__TrafficChannel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__TrafficChannel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__TrafficChannel__Sequence__are_equal(const deva_perception_msgs__msg__TrafficChannel__Sequence * lhs, const deva_perception_msgs__msg__TrafficChannel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__TrafficChannel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__TrafficChannel__Sequence__copy(
  const deva_perception_msgs__msg__TrafficChannel__Sequence * input,
  deva_perception_msgs__msg__TrafficChannel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__TrafficChannel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__TrafficChannel * data =
      (deva_perception_msgs__msg__TrafficChannel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__TrafficChannel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__TrafficChannel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__TrafficChannel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
