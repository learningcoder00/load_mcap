// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/Images4vMsg.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/images4v_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `right_cam_image`
// Member `front_cam_image`
// Member `back_cam_image`
// Member `left_cam_image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
deva_perception_msgs__msg__Images4vMsg__init(deva_perception_msgs__msg__Images4vMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__Images4vMsg__fini(msg);
    return false;
  }
  // right_cam_image
  if (!sensor_msgs__msg__Image__init(&msg->right_cam_image)) {
    deva_perception_msgs__msg__Images4vMsg__fini(msg);
    return false;
  }
  // front_cam_image
  if (!sensor_msgs__msg__Image__init(&msg->front_cam_image)) {
    deva_perception_msgs__msg__Images4vMsg__fini(msg);
    return false;
  }
  // back_cam_image
  if (!sensor_msgs__msg__Image__init(&msg->back_cam_image)) {
    deva_perception_msgs__msg__Images4vMsg__fini(msg);
    return false;
  }
  // left_cam_image
  if (!sensor_msgs__msg__Image__init(&msg->left_cam_image)) {
    deva_perception_msgs__msg__Images4vMsg__fini(msg);
    return false;
  }
  // pubtime
  return true;
}

void
deva_perception_msgs__msg__Images4vMsg__fini(deva_perception_msgs__msg__Images4vMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // right_cam_image
  sensor_msgs__msg__Image__fini(&msg->right_cam_image);
  // front_cam_image
  sensor_msgs__msg__Image__fini(&msg->front_cam_image);
  // back_cam_image
  sensor_msgs__msg__Image__fini(&msg->back_cam_image);
  // left_cam_image
  sensor_msgs__msg__Image__fini(&msg->left_cam_image);
  // pubtime
}

bool
deva_perception_msgs__msg__Images4vMsg__are_equal(const deva_perception_msgs__msg__Images4vMsg * lhs, const deva_perception_msgs__msg__Images4vMsg * rhs)
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
  // right_cam_image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->right_cam_image), &(rhs->right_cam_image)))
  {
    return false;
  }
  // front_cam_image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->front_cam_image), &(rhs->front_cam_image)))
  {
    return false;
  }
  // back_cam_image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->back_cam_image), &(rhs->back_cam_image)))
  {
    return false;
  }
  // left_cam_image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->left_cam_image), &(rhs->left_cam_image)))
  {
    return false;
  }
  // pubtime
  if (lhs->pubtime != rhs->pubtime) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__Images4vMsg__copy(
  const deva_perception_msgs__msg__Images4vMsg * input,
  deva_perception_msgs__msg__Images4vMsg * output)
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
  // right_cam_image
  if (!sensor_msgs__msg__Image__copy(
      &(input->right_cam_image), &(output->right_cam_image)))
  {
    return false;
  }
  // front_cam_image
  if (!sensor_msgs__msg__Image__copy(
      &(input->front_cam_image), &(output->front_cam_image)))
  {
    return false;
  }
  // back_cam_image
  if (!sensor_msgs__msg__Image__copy(
      &(input->back_cam_image), &(output->back_cam_image)))
  {
    return false;
  }
  // left_cam_image
  if (!sensor_msgs__msg__Image__copy(
      &(input->left_cam_image), &(output->left_cam_image)))
  {
    return false;
  }
  // pubtime
  output->pubtime = input->pubtime;
  return true;
}

deva_perception_msgs__msg__Images4vMsg *
deva_perception_msgs__msg__Images4vMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Images4vMsg * msg = (deva_perception_msgs__msg__Images4vMsg *)allocator.allocate(sizeof(deva_perception_msgs__msg__Images4vMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__Images4vMsg));
  bool success = deva_perception_msgs__msg__Images4vMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__Images4vMsg__destroy(deva_perception_msgs__msg__Images4vMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__Images4vMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__Images4vMsg__Sequence__init(deva_perception_msgs__msg__Images4vMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Images4vMsg * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__Images4vMsg *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__Images4vMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__Images4vMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__Images4vMsg__fini(&data[i - 1]);
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
deva_perception_msgs__msg__Images4vMsg__Sequence__fini(deva_perception_msgs__msg__Images4vMsg__Sequence * array)
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
      deva_perception_msgs__msg__Images4vMsg__fini(&array->data[i]);
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

deva_perception_msgs__msg__Images4vMsg__Sequence *
deva_perception_msgs__msg__Images4vMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Images4vMsg__Sequence * array = (deva_perception_msgs__msg__Images4vMsg__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__Images4vMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__Images4vMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__Images4vMsg__Sequence__destroy(deva_perception_msgs__msg__Images4vMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__Images4vMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__Images4vMsg__Sequence__are_equal(const deva_perception_msgs__msg__Images4vMsg__Sequence * lhs, const deva_perception_msgs__msg__Images4vMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__Images4vMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__Images4vMsg__Sequence__copy(
  const deva_perception_msgs__msg__Images4vMsg__Sequence * input,
  deva_perception_msgs__msg__Images4vMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__Images4vMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__Images4vMsg * data =
      (deva_perception_msgs__msg__Images4vMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__Images4vMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__Images4vMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__Images4vMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
