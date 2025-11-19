// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/DynamicObstWorldSpaceInfo.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/dynamic_obst_world_space_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `poly`
// Member `poly_vcs`
#include "deva_perception_msgs/msg/detail/polygon__functions.h"
// Member `position`
// Member `vel`
// Member `vel_abs_world`
// Member `acc`
// Member `acc_abs_world`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `sigma_vel`
// Member `sigma_position`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__init(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo * msg)
{
  if (!msg) {
    return false;
  }
  // yaw
  // length
  // width
  // height
  // poly
  if (!deva_perception_msgs__msg__Polygon__init(&msg->poly)) {
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(msg);
    return false;
  }
  // poly_vcs
  if (!deva_perception_msgs__msg__Polygon__init(&msg->poly_vcs)) {
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(msg);
    return false;
  }
  // ttc
  // vel
  if (!geometry_msgs__msg__Point__init(&msg->vel)) {
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(msg);
    return false;
  }
  // vel_abs_world
  if (!geometry_msgs__msg__Point__init(&msg->vel_abs_world)) {
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(msg);
    return false;
  }
  // acc
  if (!geometry_msgs__msg__Point__init(&msg->acc)) {
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(msg);
    return false;
  }
  // acc_abs_world
  if (!geometry_msgs__msg__Point__init(&msg->acc_abs_world)) {
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(msg);
    return false;
  }
  // motion_status
  // yaw_rate
  // sigma_vel
  if (!rosidl_runtime_c__float__Sequence__init(&msg->sigma_vel, 0)) {
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(msg);
    return false;
  }
  // sigma_yaw
  // sigma_width
  // sigma_height
  // sigma_length
  // sigma_position
  if (!rosidl_runtime_c__float__Sequence__init(&msg->sigma_position, 0)) {
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(msg);
    return false;
  }
  // sigma_yaw_rate
  // lane_assignment
  // cipv
  return true;
}

void
deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo * msg)
{
  if (!msg) {
    return;
  }
  // yaw
  // length
  // width
  // height
  // poly
  deva_perception_msgs__msg__Polygon__fini(&msg->poly);
  // poly_vcs
  deva_perception_msgs__msg__Polygon__fini(&msg->poly_vcs);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // ttc
  // vel
  geometry_msgs__msg__Point__fini(&msg->vel);
  // vel_abs_world
  geometry_msgs__msg__Point__fini(&msg->vel_abs_world);
  // acc
  geometry_msgs__msg__Point__fini(&msg->acc);
  // acc_abs_world
  geometry_msgs__msg__Point__fini(&msg->acc_abs_world);
  // motion_status
  // yaw_rate
  // sigma_vel
  rosidl_runtime_c__float__Sequence__fini(&msg->sigma_vel);
  // sigma_yaw
  // sigma_width
  // sigma_height
  // sigma_length
  // sigma_position
  rosidl_runtime_c__float__Sequence__fini(&msg->sigma_position);
  // sigma_yaw_rate
  // lane_assignment
  // cipv
}

bool
deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__are_equal(const deva_perception_msgs__msg__DynamicObstWorldSpaceInfo * lhs, const deva_perception_msgs__msg__DynamicObstWorldSpaceInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // poly
  if (!deva_perception_msgs__msg__Polygon__are_equal(
      &(lhs->poly), &(rhs->poly)))
  {
    return false;
  }
  // poly_vcs
  if (!deva_perception_msgs__msg__Polygon__are_equal(
      &(lhs->poly_vcs), &(rhs->poly_vcs)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // ttc
  if (lhs->ttc != rhs->ttc) {
    return false;
  }
  // vel
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->vel), &(rhs->vel)))
  {
    return false;
  }
  // vel_abs_world
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->vel_abs_world), &(rhs->vel_abs_world)))
  {
    return false;
  }
  // acc
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->acc), &(rhs->acc)))
  {
    return false;
  }
  // acc_abs_world
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->acc_abs_world), &(rhs->acc_abs_world)))
  {
    return false;
  }
  // motion_status
  if (lhs->motion_status != rhs->motion_status) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // sigma_vel
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->sigma_vel), &(rhs->sigma_vel)))
  {
    return false;
  }
  // sigma_yaw
  if (lhs->sigma_yaw != rhs->sigma_yaw) {
    return false;
  }
  // sigma_width
  if (lhs->sigma_width != rhs->sigma_width) {
    return false;
  }
  // sigma_height
  if (lhs->sigma_height != rhs->sigma_height) {
    return false;
  }
  // sigma_length
  if (lhs->sigma_length != rhs->sigma_length) {
    return false;
  }
  // sigma_position
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->sigma_position), &(rhs->sigma_position)))
  {
    return false;
  }
  // sigma_yaw_rate
  if (lhs->sigma_yaw_rate != rhs->sigma_yaw_rate) {
    return false;
  }
  // lane_assignment
  if (lhs->lane_assignment != rhs->lane_assignment) {
    return false;
  }
  // cipv
  if (lhs->cipv != rhs->cipv) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__copy(
  const deva_perception_msgs__msg__DynamicObstWorldSpaceInfo * input,
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // poly
  if (!deva_perception_msgs__msg__Polygon__copy(
      &(input->poly), &(output->poly)))
  {
    return false;
  }
  // poly_vcs
  if (!deva_perception_msgs__msg__Polygon__copy(
      &(input->poly_vcs), &(output->poly_vcs)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // ttc
  output->ttc = input->ttc;
  // vel
  if (!geometry_msgs__msg__Point__copy(
      &(input->vel), &(output->vel)))
  {
    return false;
  }
  // vel_abs_world
  if (!geometry_msgs__msg__Point__copy(
      &(input->vel_abs_world), &(output->vel_abs_world)))
  {
    return false;
  }
  // acc
  if (!geometry_msgs__msg__Point__copy(
      &(input->acc), &(output->acc)))
  {
    return false;
  }
  // acc_abs_world
  if (!geometry_msgs__msg__Point__copy(
      &(input->acc_abs_world), &(output->acc_abs_world)))
  {
    return false;
  }
  // motion_status
  output->motion_status = input->motion_status;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // sigma_vel
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->sigma_vel), &(output->sigma_vel)))
  {
    return false;
  }
  // sigma_yaw
  output->sigma_yaw = input->sigma_yaw;
  // sigma_width
  output->sigma_width = input->sigma_width;
  // sigma_height
  output->sigma_height = input->sigma_height;
  // sigma_length
  output->sigma_length = input->sigma_length;
  // sigma_position
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->sigma_position), &(output->sigma_position)))
  {
    return false;
  }
  // sigma_yaw_rate
  output->sigma_yaw_rate = input->sigma_yaw_rate;
  // lane_assignment
  output->lane_assignment = input->lane_assignment;
  // cipv
  output->cipv = input->cipv;
  return true;
}

deva_perception_msgs__msg__DynamicObstWorldSpaceInfo *
deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo * msg = (deva_perception_msgs__msg__DynamicObstWorldSpaceInfo *)allocator.allocate(sizeof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo));
  bool success = deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__destroy(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence__init(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__DynamicObstWorldSpaceInfo *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(&data[i - 1]);
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
deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence__fini(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence * array)
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
      deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(&array->data[i]);
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

deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence *
deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence * array = (deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence__destroy(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence__are_equal(const deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence * lhs, const deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence__copy(
  const deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence * input,
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo * data =
      (deva_perception_msgs__msg__DynamicObstWorldSpaceInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
