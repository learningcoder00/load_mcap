// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_localization_msgs:msg/Pose.idl
// generated code does not contain a copyright notice
#include "deva_localization_msgs/msg/detail/pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
// Member `linear_velocity`
// Member `linear_acceleration`
// Member `angular_velocity`
// Member `linear_acceleration_vrf`
// Member `angular_velocity_vrf`
// Member `euler_angles`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
deva_localization_msgs__msg__Pose__init(deva_localization_msgs__msg__Pose * msg)
{
  if (!msg) {
    return false;
  }
  // utm_id
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    deva_localization_msgs__msg__Pose__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    deva_localization_msgs__msg__Pose__fini(msg);
    return false;
  }
  // linear_velocity
  if (!geometry_msgs__msg__Point__init(&msg->linear_velocity)) {
    deva_localization_msgs__msg__Pose__fini(msg);
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Point__init(&msg->linear_acceleration)) {
    deva_localization_msgs__msg__Pose__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Point__init(&msg->angular_velocity)) {
    deva_localization_msgs__msg__Pose__fini(msg);
    return false;
  }
  // heading
  // linear_acceleration_vrf
  if (!geometry_msgs__msg__Point__init(&msg->linear_acceleration_vrf)) {
    deva_localization_msgs__msg__Pose__fini(msg);
    return false;
  }
  // angular_velocity_vrf
  if (!geometry_msgs__msg__Point__init(&msg->angular_velocity_vrf)) {
    deva_localization_msgs__msg__Pose__fini(msg);
    return false;
  }
  // euler_angles
  if (!geometry_msgs__msg__Point__init(&msg->euler_angles)) {
    deva_localization_msgs__msg__Pose__fini(msg);
    return false;
  }
  return true;
}

void
deva_localization_msgs__msg__Pose__fini(deva_localization_msgs__msg__Pose * msg)
{
  if (!msg) {
    return;
  }
  // utm_id
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // linear_velocity
  geometry_msgs__msg__Point__fini(&msg->linear_velocity);
  // linear_acceleration
  geometry_msgs__msg__Point__fini(&msg->linear_acceleration);
  // angular_velocity
  geometry_msgs__msg__Point__fini(&msg->angular_velocity);
  // heading
  // linear_acceleration_vrf
  geometry_msgs__msg__Point__fini(&msg->linear_acceleration_vrf);
  // angular_velocity_vrf
  geometry_msgs__msg__Point__fini(&msg->angular_velocity_vrf);
  // euler_angles
  geometry_msgs__msg__Point__fini(&msg->euler_angles);
}

bool
deva_localization_msgs__msg__Pose__are_equal(const deva_localization_msgs__msg__Pose * lhs, const deva_localization_msgs__msg__Pose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // utm_id
  if (lhs->utm_id != rhs->utm_id) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // linear_velocity
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->linear_velocity), &(rhs->linear_velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // linear_acceleration_vrf
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->linear_acceleration_vrf), &(rhs->linear_acceleration_vrf)))
  {
    return false;
  }
  // angular_velocity_vrf
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->angular_velocity_vrf), &(rhs->angular_velocity_vrf)))
  {
    return false;
  }
  // euler_angles
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->euler_angles), &(rhs->euler_angles)))
  {
    return false;
  }
  return true;
}

bool
deva_localization_msgs__msg__Pose__copy(
  const deva_localization_msgs__msg__Pose * input,
  deva_localization_msgs__msg__Pose * output)
{
  if (!input || !output) {
    return false;
  }
  // utm_id
  output->utm_id = input->utm_id;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // linear_velocity
  if (!geometry_msgs__msg__Point__copy(
      &(input->linear_velocity), &(output->linear_velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Point__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Point__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  // linear_acceleration_vrf
  if (!geometry_msgs__msg__Point__copy(
      &(input->linear_acceleration_vrf), &(output->linear_acceleration_vrf)))
  {
    return false;
  }
  // angular_velocity_vrf
  if (!geometry_msgs__msg__Point__copy(
      &(input->angular_velocity_vrf), &(output->angular_velocity_vrf)))
  {
    return false;
  }
  // euler_angles
  if (!geometry_msgs__msg__Point__copy(
      &(input->euler_angles), &(output->euler_angles)))
  {
    return false;
  }
  return true;
}

deva_localization_msgs__msg__Pose *
deva_localization_msgs__msg__Pose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_localization_msgs__msg__Pose * msg = (deva_localization_msgs__msg__Pose *)allocator.allocate(sizeof(deva_localization_msgs__msg__Pose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_localization_msgs__msg__Pose));
  bool success = deva_localization_msgs__msg__Pose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_localization_msgs__msg__Pose__destroy(deva_localization_msgs__msg__Pose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_localization_msgs__msg__Pose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_localization_msgs__msg__Pose__Sequence__init(deva_localization_msgs__msg__Pose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_localization_msgs__msg__Pose * data = NULL;

  if (size) {
    data = (deva_localization_msgs__msg__Pose *)allocator.zero_allocate(size, sizeof(deva_localization_msgs__msg__Pose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_localization_msgs__msg__Pose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_localization_msgs__msg__Pose__fini(&data[i - 1]);
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
deva_localization_msgs__msg__Pose__Sequence__fini(deva_localization_msgs__msg__Pose__Sequence * array)
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
      deva_localization_msgs__msg__Pose__fini(&array->data[i]);
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

deva_localization_msgs__msg__Pose__Sequence *
deva_localization_msgs__msg__Pose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_localization_msgs__msg__Pose__Sequence * array = (deva_localization_msgs__msg__Pose__Sequence *)allocator.allocate(sizeof(deva_localization_msgs__msg__Pose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_localization_msgs__msg__Pose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_localization_msgs__msg__Pose__Sequence__destroy(deva_localization_msgs__msg__Pose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_localization_msgs__msg__Pose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_localization_msgs__msg__Pose__Sequence__are_equal(const deva_localization_msgs__msg__Pose__Sequence * lhs, const deva_localization_msgs__msg__Pose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_localization_msgs__msg__Pose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_localization_msgs__msg__Pose__Sequence__copy(
  const deva_localization_msgs__msg__Pose__Sequence * input,
  deva_localization_msgs__msg__Pose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_localization_msgs__msg__Pose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_localization_msgs__msg__Pose * data =
      (deva_localization_msgs__msg__Pose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_localization_msgs__msg__Pose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_localization_msgs__msg__Pose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_localization_msgs__msg__Pose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
