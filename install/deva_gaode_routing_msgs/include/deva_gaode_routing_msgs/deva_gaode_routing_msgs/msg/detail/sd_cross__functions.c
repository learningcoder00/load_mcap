// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/SDCross.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/sd_cross__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sub_node`
// Member `inner_roads`
// Member `in_roads`
// Member `out_roads`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_gaode_routing_msgs__msg__SDCross__init(deva_gaode_routing_msgs__msg__SDCross * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // type
  // main_node
  // sub_node
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->sub_node, 0)) {
    deva_gaode_routing_msgs__msg__SDCross__fini(msg);
    return false;
  }
  // inner_roads
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->inner_roads, 0)) {
    deva_gaode_routing_msgs__msg__SDCross__fini(msg);
    return false;
  }
  // in_roads
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->in_roads, 0)) {
    deva_gaode_routing_msgs__msg__SDCross__fini(msg);
    return false;
  }
  // out_roads
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->out_roads, 0)) {
    deva_gaode_routing_msgs__msg__SDCross__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__SDCross__fini(deva_gaode_routing_msgs__msg__SDCross * msg)
{
  if (!msg) {
    return;
  }
  // id
  // type
  // main_node
  // sub_node
  rosidl_runtime_c__uint64__Sequence__fini(&msg->sub_node);
  // inner_roads
  rosidl_runtime_c__uint64__Sequence__fini(&msg->inner_roads);
  // in_roads
  rosidl_runtime_c__uint64__Sequence__fini(&msg->in_roads);
  // out_roads
  rosidl_runtime_c__uint64__Sequence__fini(&msg->out_roads);
}

bool
deva_gaode_routing_msgs__msg__SDCross__are_equal(const deva_gaode_routing_msgs__msg__SDCross * lhs, const deva_gaode_routing_msgs__msg__SDCross * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // main_node
  if (lhs->main_node != rhs->main_node) {
    return false;
  }
  // sub_node
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->sub_node), &(rhs->sub_node)))
  {
    return false;
  }
  // inner_roads
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->inner_roads), &(rhs->inner_roads)))
  {
    return false;
  }
  // in_roads
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->in_roads), &(rhs->in_roads)))
  {
    return false;
  }
  // out_roads
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->out_roads), &(rhs->out_roads)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SDCross__copy(
  const deva_gaode_routing_msgs__msg__SDCross * input,
  deva_gaode_routing_msgs__msg__SDCross * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // type
  output->type = input->type;
  // main_node
  output->main_node = input->main_node;
  // sub_node
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->sub_node), &(output->sub_node)))
  {
    return false;
  }
  // inner_roads
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->inner_roads), &(output->inner_roads)))
  {
    return false;
  }
  // in_roads
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->in_roads), &(output->in_roads)))
  {
    return false;
  }
  // out_roads
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->out_roads), &(output->out_roads)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__SDCross *
deva_gaode_routing_msgs__msg__SDCross__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SDCross * msg = (deva_gaode_routing_msgs__msg__SDCross *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SDCross), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__SDCross));
  bool success = deva_gaode_routing_msgs__msg__SDCross__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__SDCross__destroy(deva_gaode_routing_msgs__msg__SDCross * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__SDCross__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__SDCross__Sequence__init(deva_gaode_routing_msgs__msg__SDCross__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SDCross * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__SDCross *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__SDCross), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__SDCross__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__SDCross__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__SDCross__Sequence__fini(deva_gaode_routing_msgs__msg__SDCross__Sequence * array)
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
      deva_gaode_routing_msgs__msg__SDCross__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__SDCross__Sequence *
deva_gaode_routing_msgs__msg__SDCross__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SDCross__Sequence * array = (deva_gaode_routing_msgs__msg__SDCross__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SDCross__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__SDCross__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__SDCross__Sequence__destroy(deva_gaode_routing_msgs__msg__SDCross__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__SDCross__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__SDCross__Sequence__are_equal(const deva_gaode_routing_msgs__msg__SDCross__Sequence * lhs, const deva_gaode_routing_msgs__msg__SDCross__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SDCross__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SDCross__Sequence__copy(
  const deva_gaode_routing_msgs__msg__SDCross__Sequence * input,
  deva_gaode_routing_msgs__msg__SDCross__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__SDCross);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__SDCross * data =
      (deva_gaode_routing_msgs__msg__SDCross *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__SDCross__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__SDCross__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SDCross__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
