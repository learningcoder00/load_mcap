// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/SDNode.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/sd_node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `geo`
#include "deva_gaode_routing_msgs/msg/detail/web_point__functions.h"
// Member `in_linklist`
// Member `out_linklist`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `sd_cross`
#include "deva_gaode_routing_msgs/msg/detail/sd_cross__functions.h"
// Member `solid_line`
#include "deva_gaode_routing_msgs/msg/detail/solid_line__functions.h"

bool
deva_gaode_routing_msgs__msg__SDNode__init(deva_gaode_routing_msgs__msg__SDNode * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // geo
  if (!deva_gaode_routing_msgs__msg__WebPoint__init(&msg->geo)) {
    deva_gaode_routing_msgs__msg__SDNode__fini(msg);
    return false;
  }
  // in_linklist
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->in_linklist, 0)) {
    deva_gaode_routing_msgs__msg__SDNode__fini(msg);
    return false;
  }
  // out_linklist
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->out_linklist, 0)) {
    deva_gaode_routing_msgs__msg__SDNode__fini(msg);
    return false;
  }
  // change_point
  // sd_cross
  if (!deva_gaode_routing_msgs__msg__SDCross__init(&msg->sd_cross)) {
    deva_gaode_routing_msgs__msg__SDNode__fini(msg);
    return false;
  }
  // solid_line
  if (!deva_gaode_routing_msgs__msg__SolidLine__Sequence__init(&msg->solid_line, 0)) {
    deva_gaode_routing_msgs__msg__SDNode__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__SDNode__fini(deva_gaode_routing_msgs__msg__SDNode * msg)
{
  if (!msg) {
    return;
  }
  // id
  // geo
  deva_gaode_routing_msgs__msg__WebPoint__fini(&msg->geo);
  // in_linklist
  rosidl_runtime_c__uint64__Sequence__fini(&msg->in_linklist);
  // out_linklist
  rosidl_runtime_c__uint64__Sequence__fini(&msg->out_linklist);
  // change_point
  // sd_cross
  deva_gaode_routing_msgs__msg__SDCross__fini(&msg->sd_cross);
  // solid_line
  deva_gaode_routing_msgs__msg__SolidLine__Sequence__fini(&msg->solid_line);
}

bool
deva_gaode_routing_msgs__msg__SDNode__are_equal(const deva_gaode_routing_msgs__msg__SDNode * lhs, const deva_gaode_routing_msgs__msg__SDNode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // geo
  if (!deva_gaode_routing_msgs__msg__WebPoint__are_equal(
      &(lhs->geo), &(rhs->geo)))
  {
    return false;
  }
  // in_linklist
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->in_linklist), &(rhs->in_linklist)))
  {
    return false;
  }
  // out_linklist
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->out_linklist), &(rhs->out_linklist)))
  {
    return false;
  }
  // change_point
  if (lhs->change_point != rhs->change_point) {
    return false;
  }
  // sd_cross
  if (!deva_gaode_routing_msgs__msg__SDCross__are_equal(
      &(lhs->sd_cross), &(rhs->sd_cross)))
  {
    return false;
  }
  // solid_line
  if (!deva_gaode_routing_msgs__msg__SolidLine__Sequence__are_equal(
      &(lhs->solid_line), &(rhs->solid_line)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SDNode__copy(
  const deva_gaode_routing_msgs__msg__SDNode * input,
  deva_gaode_routing_msgs__msg__SDNode * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // geo
  if (!deva_gaode_routing_msgs__msg__WebPoint__copy(
      &(input->geo), &(output->geo)))
  {
    return false;
  }
  // in_linklist
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->in_linklist), &(output->in_linklist)))
  {
    return false;
  }
  // out_linklist
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->out_linklist), &(output->out_linklist)))
  {
    return false;
  }
  // change_point
  output->change_point = input->change_point;
  // sd_cross
  if (!deva_gaode_routing_msgs__msg__SDCross__copy(
      &(input->sd_cross), &(output->sd_cross)))
  {
    return false;
  }
  // solid_line
  if (!deva_gaode_routing_msgs__msg__SolidLine__Sequence__copy(
      &(input->solid_line), &(output->solid_line)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__SDNode *
deva_gaode_routing_msgs__msg__SDNode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SDNode * msg = (deva_gaode_routing_msgs__msg__SDNode *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SDNode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__SDNode));
  bool success = deva_gaode_routing_msgs__msg__SDNode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__SDNode__destroy(deva_gaode_routing_msgs__msg__SDNode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__SDNode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__SDNode__Sequence__init(deva_gaode_routing_msgs__msg__SDNode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SDNode * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__SDNode *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__SDNode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__SDNode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__SDNode__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__SDNode__Sequence__fini(deva_gaode_routing_msgs__msg__SDNode__Sequence * array)
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
      deva_gaode_routing_msgs__msg__SDNode__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__SDNode__Sequence *
deva_gaode_routing_msgs__msg__SDNode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SDNode__Sequence * array = (deva_gaode_routing_msgs__msg__SDNode__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SDNode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__SDNode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__SDNode__Sequence__destroy(deva_gaode_routing_msgs__msg__SDNode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__SDNode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__SDNode__Sequence__are_equal(const deva_gaode_routing_msgs__msg__SDNode__Sequence * lhs, const deva_gaode_routing_msgs__msg__SDNode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SDNode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SDNode__Sequence__copy(
  const deva_gaode_routing_msgs__msg__SDNode__Sequence * input,
  deva_gaode_routing_msgs__msg__SDNode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__SDNode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__SDNode * data =
      (deva_gaode_routing_msgs__msg__SDNode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__SDNode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__SDNode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SDNode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
