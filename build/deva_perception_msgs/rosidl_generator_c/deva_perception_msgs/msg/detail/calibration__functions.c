// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/Calibration.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/calibration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `version`
#include "std_msgs/msg/detail/string__functions.h"
// Member `lidar2gnss`
// Member `gnss2ego`
#include "geometry_msgs/msg/detail/transform__functions.h"

bool
deva_perception_msgs__msg__Calibration__init(deva_perception_msgs__msg__Calibration * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__Calibration__fini(msg);
    return false;
  }
  // version
  if (!std_msgs__msg__String__init(&msg->version)) {
    deva_perception_msgs__msg__Calibration__fini(msg);
    return false;
  }
  // lidar2gnss
  if (!geometry_msgs__msg__Transform__init(&msg->lidar2gnss)) {
    deva_perception_msgs__msg__Calibration__fini(msg);
    return false;
  }
  // gnss2ego
  if (!geometry_msgs__msg__Transform__init(&msg->gnss2ego)) {
    deva_perception_msgs__msg__Calibration__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__Calibration__fini(deva_perception_msgs__msg__Calibration * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // version
  std_msgs__msg__String__fini(&msg->version);
  // lidar2gnss
  geometry_msgs__msg__Transform__fini(&msg->lidar2gnss);
  // gnss2ego
  geometry_msgs__msg__Transform__fini(&msg->gnss2ego);
}

bool
deva_perception_msgs__msg__Calibration__are_equal(const deva_perception_msgs__msg__Calibration * lhs, const deva_perception_msgs__msg__Calibration * rhs)
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
  // version
  if (!std_msgs__msg__String__are_equal(
      &(lhs->version), &(rhs->version)))
  {
    return false;
  }
  // lidar2gnss
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->lidar2gnss), &(rhs->lidar2gnss)))
  {
    return false;
  }
  // gnss2ego
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->gnss2ego), &(rhs->gnss2ego)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__Calibration__copy(
  const deva_perception_msgs__msg__Calibration * input,
  deva_perception_msgs__msg__Calibration * output)
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
  // version
  if (!std_msgs__msg__String__copy(
      &(input->version), &(output->version)))
  {
    return false;
  }
  // lidar2gnss
  if (!geometry_msgs__msg__Transform__copy(
      &(input->lidar2gnss), &(output->lidar2gnss)))
  {
    return false;
  }
  // gnss2ego
  if (!geometry_msgs__msg__Transform__copy(
      &(input->gnss2ego), &(output->gnss2ego)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__Calibration *
deva_perception_msgs__msg__Calibration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Calibration * msg = (deva_perception_msgs__msg__Calibration *)allocator.allocate(sizeof(deva_perception_msgs__msg__Calibration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__Calibration));
  bool success = deva_perception_msgs__msg__Calibration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__Calibration__destroy(deva_perception_msgs__msg__Calibration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__Calibration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__Calibration__Sequence__init(deva_perception_msgs__msg__Calibration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Calibration * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__Calibration *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__Calibration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__Calibration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__Calibration__fini(&data[i - 1]);
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
deva_perception_msgs__msg__Calibration__Sequence__fini(deva_perception_msgs__msg__Calibration__Sequence * array)
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
      deva_perception_msgs__msg__Calibration__fini(&array->data[i]);
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

deva_perception_msgs__msg__Calibration__Sequence *
deva_perception_msgs__msg__Calibration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Calibration__Sequence * array = (deva_perception_msgs__msg__Calibration__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__Calibration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__Calibration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__Calibration__Sequence__destroy(deva_perception_msgs__msg__Calibration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__Calibration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__Calibration__Sequence__are_equal(const deva_perception_msgs__msg__Calibration__Sequence * lhs, const deva_perception_msgs__msg__Calibration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__Calibration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__Calibration__Sequence__copy(
  const deva_perception_msgs__msg__Calibration__Sequence * input,
  deva_perception_msgs__msg__Calibration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__Calibration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__Calibration * data =
      (deva_perception_msgs__msg__Calibration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__Calibration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__Calibration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__Calibration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
