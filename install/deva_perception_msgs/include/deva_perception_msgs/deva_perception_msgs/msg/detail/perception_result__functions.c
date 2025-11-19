// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/PerceptionResult.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/perception_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `translation`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `st_boundaries`
#include "deva_perception_msgs/msg/detail/st_boundary__functions.h"
// Member `ust_boundaries`
#include "deva_perception_msgs/msg/detail/ust_boundary__functions.h"
// Member `crosswalks`
#include "deva_perception_msgs/msg/detail/crosswalk__functions.h"
// Member `steering_arrows`
#include "deva_perception_msgs/msg/detail/steering_arrow__functions.h"
// Member `noparking_zones`
#include "deva_perception_msgs/msg/detail/noparking_zone__functions.h"
// Member `areas`
#include "deva_perception_msgs/msg/detail/area__functions.h"
// Member `moving_obstacles`
#include "deva_perception_msgs/msg/detail/moving_obstacle__functions.h"
// Member `general_static_obstacles`
#include "deva_perception_msgs/msg/detail/static_obstacle__functions.h"
// Member `traffic_light_obstacles`
#include "deva_perception_msgs/msg/detail/traffic_light__functions.h"
// Member `mutable_obstacles`
#include "deva_perception_msgs/msg/detail/mutable_obstacle__functions.h"
// Member `center_lines`
#include "deva_perception_msgs/msg/detail/center_line__functions.h"
// Member `fork_points`
#include "deva_perception_msgs/msg/detail/fork_point__functions.h"

bool
deva_perception_msgs__msg__PerceptionResult__init(deva_perception_msgs__msg__PerceptionResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // translation
  if (!geometry_msgs__msg__Vector3__init(&msg->translation)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // st_boundaries
  if (!deva_perception_msgs__msg__STBoundary__Sequence__init(&msg->st_boundaries, 0)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // ust_boundaries
  if (!deva_perception_msgs__msg__USTBoundary__Sequence__init(&msg->ust_boundaries, 0)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // crosswalks
  if (!deva_perception_msgs__msg__Crosswalk__Sequence__init(&msg->crosswalks, 0)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // steering_arrows
  if (!deva_perception_msgs__msg__SteeringArrow__Sequence__init(&msg->steering_arrows, 0)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // noparking_zones
  if (!deva_perception_msgs__msg__NoparkingZone__Sequence__init(&msg->noparking_zones, 0)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // areas
  if (!deva_perception_msgs__msg__Area__Sequence__init(&msg->areas, 0)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // moving_obstacles
  if (!deva_perception_msgs__msg__MovingObstacle__Sequence__init(&msg->moving_obstacles, 0)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // general_static_obstacles
  if (!deva_perception_msgs__msg__StaticObstacle__Sequence__init(&msg->general_static_obstacles, 0)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // traffic_light_obstacles
  if (!deva_perception_msgs__msg__TrafficLight__Sequence__init(&msg->traffic_light_obstacles, 0)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // mutable_obstacles
  if (!deva_perception_msgs__msg__MutableObstacle__Sequence__init(&msg->mutable_obstacles, 0)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // center_lines
  if (!deva_perception_msgs__msg__CenterLine__Sequence__init(&msg->center_lines, 0)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  // fork_points
  if (!deva_perception_msgs__msg__ForkPoint__Sequence__init(&msg->fork_points, 0)) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__PerceptionResult__fini(deva_perception_msgs__msg__PerceptionResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // translation
  geometry_msgs__msg__Vector3__fini(&msg->translation);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // st_boundaries
  deva_perception_msgs__msg__STBoundary__Sequence__fini(&msg->st_boundaries);
  // ust_boundaries
  deva_perception_msgs__msg__USTBoundary__Sequence__fini(&msg->ust_boundaries);
  // crosswalks
  deva_perception_msgs__msg__Crosswalk__Sequence__fini(&msg->crosswalks);
  // steering_arrows
  deva_perception_msgs__msg__SteeringArrow__Sequence__fini(&msg->steering_arrows);
  // noparking_zones
  deva_perception_msgs__msg__NoparkingZone__Sequence__fini(&msg->noparking_zones);
  // areas
  deva_perception_msgs__msg__Area__Sequence__fini(&msg->areas);
  // moving_obstacles
  deva_perception_msgs__msg__MovingObstacle__Sequence__fini(&msg->moving_obstacles);
  // general_static_obstacles
  deva_perception_msgs__msg__StaticObstacle__Sequence__fini(&msg->general_static_obstacles);
  // traffic_light_obstacles
  deva_perception_msgs__msg__TrafficLight__Sequence__fini(&msg->traffic_light_obstacles);
  // mutable_obstacles
  deva_perception_msgs__msg__MutableObstacle__Sequence__fini(&msg->mutable_obstacles);
  // center_lines
  deva_perception_msgs__msg__CenterLine__Sequence__fini(&msg->center_lines);
  // fork_points
  deva_perception_msgs__msg__ForkPoint__Sequence__fini(&msg->fork_points);
}

bool
deva_perception_msgs__msg__PerceptionResult__are_equal(const deva_perception_msgs__msg__PerceptionResult * lhs, const deva_perception_msgs__msg__PerceptionResult * rhs)
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
  // translation
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->translation), &(rhs->translation)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // st_boundaries
  if (!deva_perception_msgs__msg__STBoundary__Sequence__are_equal(
      &(lhs->st_boundaries), &(rhs->st_boundaries)))
  {
    return false;
  }
  // ust_boundaries
  if (!deva_perception_msgs__msg__USTBoundary__Sequence__are_equal(
      &(lhs->ust_boundaries), &(rhs->ust_boundaries)))
  {
    return false;
  }
  // crosswalks
  if (!deva_perception_msgs__msg__Crosswalk__Sequence__are_equal(
      &(lhs->crosswalks), &(rhs->crosswalks)))
  {
    return false;
  }
  // steering_arrows
  if (!deva_perception_msgs__msg__SteeringArrow__Sequence__are_equal(
      &(lhs->steering_arrows), &(rhs->steering_arrows)))
  {
    return false;
  }
  // noparking_zones
  if (!deva_perception_msgs__msg__NoparkingZone__Sequence__are_equal(
      &(lhs->noparking_zones), &(rhs->noparking_zones)))
  {
    return false;
  }
  // areas
  if (!deva_perception_msgs__msg__Area__Sequence__are_equal(
      &(lhs->areas), &(rhs->areas)))
  {
    return false;
  }
  // moving_obstacles
  if (!deva_perception_msgs__msg__MovingObstacle__Sequence__are_equal(
      &(lhs->moving_obstacles), &(rhs->moving_obstacles)))
  {
    return false;
  }
  // general_static_obstacles
  if (!deva_perception_msgs__msg__StaticObstacle__Sequence__are_equal(
      &(lhs->general_static_obstacles), &(rhs->general_static_obstacles)))
  {
    return false;
  }
  // traffic_light_obstacles
  if (!deva_perception_msgs__msg__TrafficLight__Sequence__are_equal(
      &(lhs->traffic_light_obstacles), &(rhs->traffic_light_obstacles)))
  {
    return false;
  }
  // mutable_obstacles
  if (!deva_perception_msgs__msg__MutableObstacle__Sequence__are_equal(
      &(lhs->mutable_obstacles), &(rhs->mutable_obstacles)))
  {
    return false;
  }
  // center_lines
  if (!deva_perception_msgs__msg__CenterLine__Sequence__are_equal(
      &(lhs->center_lines), &(rhs->center_lines)))
  {
    return false;
  }
  // fork_points
  if (!deva_perception_msgs__msg__ForkPoint__Sequence__are_equal(
      &(lhs->fork_points), &(rhs->fork_points)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__PerceptionResult__copy(
  const deva_perception_msgs__msg__PerceptionResult * input,
  deva_perception_msgs__msg__PerceptionResult * output)
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
  // translation
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->translation), &(output->translation)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // st_boundaries
  if (!deva_perception_msgs__msg__STBoundary__Sequence__copy(
      &(input->st_boundaries), &(output->st_boundaries)))
  {
    return false;
  }
  // ust_boundaries
  if (!deva_perception_msgs__msg__USTBoundary__Sequence__copy(
      &(input->ust_boundaries), &(output->ust_boundaries)))
  {
    return false;
  }
  // crosswalks
  if (!deva_perception_msgs__msg__Crosswalk__Sequence__copy(
      &(input->crosswalks), &(output->crosswalks)))
  {
    return false;
  }
  // steering_arrows
  if (!deva_perception_msgs__msg__SteeringArrow__Sequence__copy(
      &(input->steering_arrows), &(output->steering_arrows)))
  {
    return false;
  }
  // noparking_zones
  if (!deva_perception_msgs__msg__NoparkingZone__Sequence__copy(
      &(input->noparking_zones), &(output->noparking_zones)))
  {
    return false;
  }
  // areas
  if (!deva_perception_msgs__msg__Area__Sequence__copy(
      &(input->areas), &(output->areas)))
  {
    return false;
  }
  // moving_obstacles
  if (!deva_perception_msgs__msg__MovingObstacle__Sequence__copy(
      &(input->moving_obstacles), &(output->moving_obstacles)))
  {
    return false;
  }
  // general_static_obstacles
  if (!deva_perception_msgs__msg__StaticObstacle__Sequence__copy(
      &(input->general_static_obstacles), &(output->general_static_obstacles)))
  {
    return false;
  }
  // traffic_light_obstacles
  if (!deva_perception_msgs__msg__TrafficLight__Sequence__copy(
      &(input->traffic_light_obstacles), &(output->traffic_light_obstacles)))
  {
    return false;
  }
  // mutable_obstacles
  if (!deva_perception_msgs__msg__MutableObstacle__Sequence__copy(
      &(input->mutable_obstacles), &(output->mutable_obstacles)))
  {
    return false;
  }
  // center_lines
  if (!deva_perception_msgs__msg__CenterLine__Sequence__copy(
      &(input->center_lines), &(output->center_lines)))
  {
    return false;
  }
  // fork_points
  if (!deva_perception_msgs__msg__ForkPoint__Sequence__copy(
      &(input->fork_points), &(output->fork_points)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__PerceptionResult *
deva_perception_msgs__msg__PerceptionResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__PerceptionResult * msg = (deva_perception_msgs__msg__PerceptionResult *)allocator.allocate(sizeof(deva_perception_msgs__msg__PerceptionResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__PerceptionResult));
  bool success = deva_perception_msgs__msg__PerceptionResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__PerceptionResult__destroy(deva_perception_msgs__msg__PerceptionResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__PerceptionResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__PerceptionResult__Sequence__init(deva_perception_msgs__msg__PerceptionResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__PerceptionResult * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__PerceptionResult *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__PerceptionResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__PerceptionResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__PerceptionResult__fini(&data[i - 1]);
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
deva_perception_msgs__msg__PerceptionResult__Sequence__fini(deva_perception_msgs__msg__PerceptionResult__Sequence * array)
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
      deva_perception_msgs__msg__PerceptionResult__fini(&array->data[i]);
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

deva_perception_msgs__msg__PerceptionResult__Sequence *
deva_perception_msgs__msg__PerceptionResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__PerceptionResult__Sequence * array = (deva_perception_msgs__msg__PerceptionResult__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__PerceptionResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__PerceptionResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__PerceptionResult__Sequence__destroy(deva_perception_msgs__msg__PerceptionResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__PerceptionResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__PerceptionResult__Sequence__are_equal(const deva_perception_msgs__msg__PerceptionResult__Sequence * lhs, const deva_perception_msgs__msg__PerceptionResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__PerceptionResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__PerceptionResult__Sequence__copy(
  const deva_perception_msgs__msg__PerceptionResult__Sequence * input,
  deva_perception_msgs__msg__PerceptionResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__PerceptionResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__PerceptionResult * data =
      (deva_perception_msgs__msg__PerceptionResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__PerceptionResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__PerceptionResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__PerceptionResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
