// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/Node.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tpid`
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__functions.h"
// Member `position`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"
// Member `links_enter`
// Member `links_enter_cross`
// Member `links_out`
// Member `links_out_cross`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"

bool
deva_gaode_routing_msgs__msg__Node__init(deva_gaode_routing_msgs__msg__Node * msg)
{
  if (!msg) {
    return false;
  }
  // tpid
  if (!deva_gaode_routing_msgs__msg__NodeIDType__init(&msg->tpid)) {
    deva_gaode_routing_msgs__msg__Node__fini(msg);
    return false;
  }
  // cross_flag
  // has_traffic_light
  // position
  if (!deva_gaode_routing_msgs__msg__Coordinate__init(&msg->position)) {
    deva_gaode_routing_msgs__msg__Node__fini(msg);
    return false;
  }
  // links_enter
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->links_enter, 0)) {
    deva_gaode_routing_msgs__msg__Node__fini(msg);
    return false;
  }
  // links_enter_cross
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->links_enter_cross, 0)) {
    deva_gaode_routing_msgs__msg__Node__fini(msg);
    return false;
  }
  // links_out
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->links_out, 0)) {
    deva_gaode_routing_msgs__msg__Node__fini(msg);
    return false;
  }
  // links_out_cross
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->links_out_cross, 0)) {
    deva_gaode_routing_msgs__msg__Node__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__Node__fini(deva_gaode_routing_msgs__msg__Node * msg)
{
  if (!msg) {
    return;
  }
  // tpid
  deva_gaode_routing_msgs__msg__NodeIDType__fini(&msg->tpid);
  // cross_flag
  // has_traffic_light
  // position
  deva_gaode_routing_msgs__msg__Coordinate__fini(&msg->position);
  // links_enter
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->links_enter);
  // links_enter_cross
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->links_enter_cross);
  // links_out
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->links_out);
  // links_out_cross
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->links_out_cross);
}

bool
deva_gaode_routing_msgs__msg__Node__are_equal(const deva_gaode_routing_msgs__msg__Node * lhs, const deva_gaode_routing_msgs__msg__Node * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tpid
  if (!deva_gaode_routing_msgs__msg__NodeIDType__are_equal(
      &(lhs->tpid), &(rhs->tpid)))
  {
    return false;
  }
  // cross_flag
  if (lhs->cross_flag != rhs->cross_flag) {
    return false;
  }
  // has_traffic_light
  if (lhs->has_traffic_light != rhs->has_traffic_light) {
    return false;
  }
  // position
  if (!deva_gaode_routing_msgs__msg__Coordinate__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // links_enter
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->links_enter), &(rhs->links_enter)))
  {
    return false;
  }
  // links_enter_cross
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->links_enter_cross), &(rhs->links_enter_cross)))
  {
    return false;
  }
  // links_out
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->links_out), &(rhs->links_out)))
  {
    return false;
  }
  // links_out_cross
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->links_out_cross), &(rhs->links_out_cross)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Node__copy(
  const deva_gaode_routing_msgs__msg__Node * input,
  deva_gaode_routing_msgs__msg__Node * output)
{
  if (!input || !output) {
    return false;
  }
  // tpid
  if (!deva_gaode_routing_msgs__msg__NodeIDType__copy(
      &(input->tpid), &(output->tpid)))
  {
    return false;
  }
  // cross_flag
  output->cross_flag = input->cross_flag;
  // has_traffic_light
  output->has_traffic_light = input->has_traffic_light;
  // position
  if (!deva_gaode_routing_msgs__msg__Coordinate__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // links_enter
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->links_enter), &(output->links_enter)))
  {
    return false;
  }
  // links_enter_cross
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->links_enter_cross), &(output->links_enter_cross)))
  {
    return false;
  }
  // links_out
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->links_out), &(output->links_out)))
  {
    return false;
  }
  // links_out_cross
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->links_out_cross), &(output->links_out_cross)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__Node *
deva_gaode_routing_msgs__msg__Node__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Node * msg = (deva_gaode_routing_msgs__msg__Node *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Node), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__Node));
  bool success = deva_gaode_routing_msgs__msg__Node__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__Node__destroy(deva_gaode_routing_msgs__msg__Node * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__Node__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__Node__Sequence__init(deva_gaode_routing_msgs__msg__Node__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Node * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__Node *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__Node), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__Node__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__Node__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__Node__Sequence__fini(deva_gaode_routing_msgs__msg__Node__Sequence * array)
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
      deva_gaode_routing_msgs__msg__Node__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__Node__Sequence *
deva_gaode_routing_msgs__msg__Node__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Node__Sequence * array = (deva_gaode_routing_msgs__msg__Node__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Node__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__Node__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__Node__Sequence__destroy(deva_gaode_routing_msgs__msg__Node__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__Node__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__Node__Sequence__are_equal(const deva_gaode_routing_msgs__msg__Node__Sequence * lhs, const deva_gaode_routing_msgs__msg__Node__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Node__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Node__Sequence__copy(
  const deva_gaode_routing_msgs__msg__Node__Sequence * input,
  deva_gaode_routing_msgs__msg__Node__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__Node);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__Node * data =
      (deva_gaode_routing_msgs__msg__Node *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__Node__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__Node__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Node__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
