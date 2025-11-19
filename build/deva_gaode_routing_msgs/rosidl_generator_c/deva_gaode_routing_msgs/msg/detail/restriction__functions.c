// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/Restriction.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/restriction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pass_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `toll_mode`
// Member `toll_lane_type`
// Member `toll_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `restriction_detail`
#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__functions.h"

bool
deva_gaode_routing_msgs__msg__Restriction__init(deva_gaode_routing_msgs__msg__Restriction * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // limit_type
  // node_id
  // pass_list
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->pass_list, 0)) {
    deva_gaode_routing_msgs__msg__Restriction__fini(msg);
    return false;
  }
  // out_road
  // passage
  // slope
  // toll_mode
  if (!rosidl_runtime_c__String__init(&msg->toll_mode)) {
    deva_gaode_routing_msgs__msg__Restriction__fini(msg);
    return false;
  }
  // toll_lane_type
  if (!rosidl_runtime_c__String__init(&msg->toll_lane_type)) {
    deva_gaode_routing_msgs__msg__Restriction__fini(msg);
    return false;
  }
  // toll_name
  if (!rosidl_runtime_c__String__init(&msg->toll_name)) {
    deva_gaode_routing_msgs__msg__Restriction__fini(msg);
    return false;
  }
  // restriction_detail
  if (!deva_gaode_routing_msgs__msg__RestrictionDetail__init(&msg->restriction_detail)) {
    deva_gaode_routing_msgs__msg__Restriction__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__Restriction__fini(deva_gaode_routing_msgs__msg__Restriction * msg)
{
  if (!msg) {
    return;
  }
  // id
  // limit_type
  // node_id
  // pass_list
  rosidl_runtime_c__uint64__Sequence__fini(&msg->pass_list);
  // out_road
  // passage
  // slope
  // toll_mode
  rosidl_runtime_c__String__fini(&msg->toll_mode);
  // toll_lane_type
  rosidl_runtime_c__String__fini(&msg->toll_lane_type);
  // toll_name
  rosidl_runtime_c__String__fini(&msg->toll_name);
  // restriction_detail
  deva_gaode_routing_msgs__msg__RestrictionDetail__fini(&msg->restriction_detail);
}

bool
deva_gaode_routing_msgs__msg__Restriction__are_equal(const deva_gaode_routing_msgs__msg__Restriction * lhs, const deva_gaode_routing_msgs__msg__Restriction * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // limit_type
  if (lhs->limit_type != rhs->limit_type) {
    return false;
  }
  // node_id
  if (lhs->node_id != rhs->node_id) {
    return false;
  }
  // pass_list
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->pass_list), &(rhs->pass_list)))
  {
    return false;
  }
  // out_road
  if (lhs->out_road != rhs->out_road) {
    return false;
  }
  // passage
  if (lhs->passage != rhs->passage) {
    return false;
  }
  // slope
  if (lhs->slope != rhs->slope) {
    return false;
  }
  // toll_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->toll_mode), &(rhs->toll_mode)))
  {
    return false;
  }
  // toll_lane_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->toll_lane_type), &(rhs->toll_lane_type)))
  {
    return false;
  }
  // toll_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->toll_name), &(rhs->toll_name)))
  {
    return false;
  }
  // restriction_detail
  if (!deva_gaode_routing_msgs__msg__RestrictionDetail__are_equal(
      &(lhs->restriction_detail), &(rhs->restriction_detail)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Restriction__copy(
  const deva_gaode_routing_msgs__msg__Restriction * input,
  deva_gaode_routing_msgs__msg__Restriction * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // limit_type
  output->limit_type = input->limit_type;
  // node_id
  output->node_id = input->node_id;
  // pass_list
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->pass_list), &(output->pass_list)))
  {
    return false;
  }
  // out_road
  output->out_road = input->out_road;
  // passage
  output->passage = input->passage;
  // slope
  output->slope = input->slope;
  // toll_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->toll_mode), &(output->toll_mode)))
  {
    return false;
  }
  // toll_lane_type
  if (!rosidl_runtime_c__String__copy(
      &(input->toll_lane_type), &(output->toll_lane_type)))
  {
    return false;
  }
  // toll_name
  if (!rosidl_runtime_c__String__copy(
      &(input->toll_name), &(output->toll_name)))
  {
    return false;
  }
  // restriction_detail
  if (!deva_gaode_routing_msgs__msg__RestrictionDetail__copy(
      &(input->restriction_detail), &(output->restriction_detail)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__Restriction *
deva_gaode_routing_msgs__msg__Restriction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Restriction * msg = (deva_gaode_routing_msgs__msg__Restriction *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Restriction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__Restriction));
  bool success = deva_gaode_routing_msgs__msg__Restriction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__Restriction__destroy(deva_gaode_routing_msgs__msg__Restriction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__Restriction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__Restriction__Sequence__init(deva_gaode_routing_msgs__msg__Restriction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Restriction * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__Restriction *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__Restriction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__Restriction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__Restriction__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__Restriction__Sequence__fini(deva_gaode_routing_msgs__msg__Restriction__Sequence * array)
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
      deva_gaode_routing_msgs__msg__Restriction__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__Restriction__Sequence *
deva_gaode_routing_msgs__msg__Restriction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Restriction__Sequence * array = (deva_gaode_routing_msgs__msg__Restriction__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Restriction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__Restriction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__Restriction__Sequence__destroy(deva_gaode_routing_msgs__msg__Restriction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__Restriction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__Restriction__Sequence__are_equal(const deva_gaode_routing_msgs__msg__Restriction__Sequence * lhs, const deva_gaode_routing_msgs__msg__Restriction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Restriction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Restriction__Sequence__copy(
  const deva_gaode_routing_msgs__msg__Restriction__Sequence * input,
  deva_gaode_routing_msgs__msg__Restriction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__Restriction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__Restriction * data =
      (deva_gaode_routing_msgs__msg__Restriction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__Restriction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__Restriction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Restriction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
