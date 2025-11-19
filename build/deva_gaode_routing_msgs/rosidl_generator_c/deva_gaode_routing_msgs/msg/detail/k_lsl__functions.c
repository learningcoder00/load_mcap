// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/KLsl.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/k_lsl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `in_link_id`
// Member `pass_link_id_s`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"
// Member `node_id`
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__functions.h"
// Member `lsl_lanes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_gaode_routing_msgs__msg__KLsl__init(deva_gaode_routing_msgs__msg__KLsl * msg)
{
  if (!msg) {
    return false;
  }
  // in_link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->in_link_id)) {
    deva_gaode_routing_msgs__msg__KLsl__fini(msg);
    return false;
  }
  // node_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__init(&msg->node_id)) {
    deva_gaode_routing_msgs__msg__KLsl__fini(msg);
    return false;
  }
  // pass_link_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->pass_link_id_s)) {
    deva_gaode_routing_msgs__msg__KLsl__fini(msg);
    return false;
  }
  // seqnum
  // lsl_type
  // lane_nums
  // lsl_lanes
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->lsl_lanes, 0)) {
    deva_gaode_routing_msgs__msg__KLsl__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__KLsl__fini(deva_gaode_routing_msgs__msg__KLsl * msg)
{
  if (!msg) {
    return;
  }
  // in_link_id
  deva_gaode_routing_msgs__msg__LinkIDType__fini(&msg->in_link_id);
  // node_id
  deva_gaode_routing_msgs__msg__NodeIDType__fini(&msg->node_id);
  // pass_link_id_s
  deva_gaode_routing_msgs__msg__LinkIDType__fini(&msg->pass_link_id_s);
  // seqnum
  // lsl_type
  // lane_nums
  // lsl_lanes
  rosidl_runtime_c__uint8__Sequence__fini(&msg->lsl_lanes);
}

bool
deva_gaode_routing_msgs__msg__KLsl__are_equal(const deva_gaode_routing_msgs__msg__KLsl * lhs, const deva_gaode_routing_msgs__msg__KLsl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // in_link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__are_equal(
      &(lhs->in_link_id), &(rhs->in_link_id)))
  {
    return false;
  }
  // node_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__are_equal(
      &(lhs->node_id), &(rhs->node_id)))
  {
    return false;
  }
  // pass_link_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__are_equal(
      &(lhs->pass_link_id_s), &(rhs->pass_link_id_s)))
  {
    return false;
  }
  // seqnum
  if (lhs->seqnum != rhs->seqnum) {
    return false;
  }
  // lsl_type
  if (lhs->lsl_type != rhs->lsl_type) {
    return false;
  }
  // lane_nums
  if (lhs->lane_nums != rhs->lane_nums) {
    return false;
  }
  // lsl_lanes
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->lsl_lanes), &(rhs->lsl_lanes)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__KLsl__copy(
  const deva_gaode_routing_msgs__msg__KLsl * input,
  deva_gaode_routing_msgs__msg__KLsl * output)
{
  if (!input || !output) {
    return false;
  }
  // in_link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__copy(
      &(input->in_link_id), &(output->in_link_id)))
  {
    return false;
  }
  // node_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__copy(
      &(input->node_id), &(output->node_id)))
  {
    return false;
  }
  // pass_link_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__copy(
      &(input->pass_link_id_s), &(output->pass_link_id_s)))
  {
    return false;
  }
  // seqnum
  output->seqnum = input->seqnum;
  // lsl_type
  output->lsl_type = input->lsl_type;
  // lane_nums
  output->lane_nums = input->lane_nums;
  // lsl_lanes
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->lsl_lanes), &(output->lsl_lanes)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__KLsl *
deva_gaode_routing_msgs__msg__KLsl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__KLsl * msg = (deva_gaode_routing_msgs__msg__KLsl *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__KLsl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__KLsl));
  bool success = deva_gaode_routing_msgs__msg__KLsl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__KLsl__destroy(deva_gaode_routing_msgs__msg__KLsl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__KLsl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__KLsl__Sequence__init(deva_gaode_routing_msgs__msg__KLsl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__KLsl * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__KLsl *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__KLsl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__KLsl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__KLsl__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__KLsl__Sequence__fini(deva_gaode_routing_msgs__msg__KLsl__Sequence * array)
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
      deva_gaode_routing_msgs__msg__KLsl__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__KLsl__Sequence *
deva_gaode_routing_msgs__msg__KLsl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__KLsl__Sequence * array = (deva_gaode_routing_msgs__msg__KLsl__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__KLsl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__KLsl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__KLsl__Sequence__destroy(deva_gaode_routing_msgs__msg__KLsl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__KLsl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__KLsl__Sequence__are_equal(const deva_gaode_routing_msgs__msg__KLsl__Sequence * lhs, const deva_gaode_routing_msgs__msg__KLsl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__KLsl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__KLsl__Sequence__copy(
  const deva_gaode_routing_msgs__msg__KLsl__Sequence * input,
  deva_gaode_routing_msgs__msg__KLsl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__KLsl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__KLsl * data =
      (deva_gaode_routing_msgs__msg__KLsl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__KLsl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__KLsl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__KLsl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
