// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/RoutingNavPath.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/routing_nav_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `version`
// Member `md5`
#include "rosidl_runtime_c/string_functions.h"
// Member `start_point`
// Member `way_points`
// Member `end_point`
#include "deva_gaode_routing_msgs/msg/detail/web_point__functions.h"

bool
deva_gaode_routing_msgs__msg__RoutingNavPath__init(deva_gaode_routing_msgs__msg__RoutingNavPath * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_gaode_routing_msgs__msg__RoutingNavPath__fini(msg);
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__init(&msg->version)) {
    deva_gaode_routing_msgs__msg__RoutingNavPath__fini(msg);
    return false;
  }
  // status
  // md5
  if (!rosidl_runtime_c__String__init(&msg->md5)) {
    deva_gaode_routing_msgs__msg__RoutingNavPath__fini(msg);
    return false;
  }
  // index
  // start_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__init(&msg->start_point)) {
    deva_gaode_routing_msgs__msg__RoutingNavPath__fini(msg);
    return false;
  }
  // way_points
  if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__init(&msg->way_points, 0)) {
    deva_gaode_routing_msgs__msg__RoutingNavPath__fini(msg);
    return false;
  }
  // end_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__init(&msg->end_point)) {
    deva_gaode_routing_msgs__msg__RoutingNavPath__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__RoutingNavPath__fini(deva_gaode_routing_msgs__msg__RoutingNavPath * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // version
  rosidl_runtime_c__String__fini(&msg->version);
  // status
  // md5
  rosidl_runtime_c__String__fini(&msg->md5);
  // index
  // start_point
  deva_gaode_routing_msgs__msg__WebPoint__fini(&msg->start_point);
  // way_points
  deva_gaode_routing_msgs__msg__WebPoint__Sequence__fini(&msg->way_points);
  // end_point
  deva_gaode_routing_msgs__msg__WebPoint__fini(&msg->end_point);
}

bool
deva_gaode_routing_msgs__msg__RoutingNavPath__are_equal(const deva_gaode_routing_msgs__msg__RoutingNavPath * lhs, const deva_gaode_routing_msgs__msg__RoutingNavPath * rhs)
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
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version), &(rhs->version)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // md5
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->md5), &(rhs->md5)))
  {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // start_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__are_equal(
      &(lhs->start_point), &(rhs->start_point)))
  {
    return false;
  }
  // way_points
  if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__are_equal(
      &(lhs->way_points), &(rhs->way_points)))
  {
    return false;
  }
  // end_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__are_equal(
      &(lhs->end_point), &(rhs->end_point)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RoutingNavPath__copy(
  const deva_gaode_routing_msgs__msg__RoutingNavPath * input,
  deva_gaode_routing_msgs__msg__RoutingNavPath * output)
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
  if (!rosidl_runtime_c__String__copy(
      &(input->version), &(output->version)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // md5
  if (!rosidl_runtime_c__String__copy(
      &(input->md5), &(output->md5)))
  {
    return false;
  }
  // index
  output->index = input->index;
  // start_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__copy(
      &(input->start_point), &(output->start_point)))
  {
    return false;
  }
  // way_points
  if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__copy(
      &(input->way_points), &(output->way_points)))
  {
    return false;
  }
  // end_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__copy(
      &(input->end_point), &(output->end_point)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__RoutingNavPath *
deva_gaode_routing_msgs__msg__RoutingNavPath__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RoutingNavPath * msg = (deva_gaode_routing_msgs__msg__RoutingNavPath *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RoutingNavPath), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__RoutingNavPath));
  bool success = deva_gaode_routing_msgs__msg__RoutingNavPath__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__RoutingNavPath__destroy(deva_gaode_routing_msgs__msg__RoutingNavPath * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__RoutingNavPath__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence__init(deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RoutingNavPath * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__RoutingNavPath *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__RoutingNavPath), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__RoutingNavPath__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__RoutingNavPath__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence__fini(deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence * array)
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
      deva_gaode_routing_msgs__msg__RoutingNavPath__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence *
deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence * array = (deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence__destroy(deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence__are_equal(const deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence * lhs, const deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RoutingNavPath__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence__copy(
  const deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence * input,
  deva_gaode_routing_msgs__msg__RoutingNavPath__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__RoutingNavPath);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__RoutingNavPath * data =
      (deva_gaode_routing_msgs__msg__RoutingNavPath *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__RoutingNavPath__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__RoutingNavPath__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RoutingNavPath__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
