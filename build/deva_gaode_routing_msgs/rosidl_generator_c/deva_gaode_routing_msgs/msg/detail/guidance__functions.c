// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/Guidance.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/guidance__functions.h"

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
// Member `k_warning_sign`
#include "deva_gaode_routing_msgs/msg/detail/k_warning_sign__functions.h"
// Member `k_lane_meta_info`
#include "deva_gaode_routing_msgs/msg/detail/k_lane_meta_info__functions.h"
// Member `k_lsl`
#include "deva_gaode_routing_msgs/msg/detail/k_lsl__functions.h"

bool
deva_gaode_routing_msgs__msg__Guidance__init(deva_gaode_routing_msgs__msg__Guidance * msg)
{
  if (!msg) {
    return false;
  }
  // in_link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->in_link_id)) {
    deva_gaode_routing_msgs__msg__Guidance__fini(msg);
    return false;
  }
  // node_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__init(&msg->node_id)) {
    deva_gaode_routing_msgs__msg__Guidance__fini(msg);
    return false;
  }
  // pass_link_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->pass_link_id_s, 0)) {
    deva_gaode_routing_msgs__msg__Guidance__fini(msg);
    return false;
  }
  // k_warning_sign
  if (!deva_gaode_routing_msgs__msg__KWarningSign__init(&msg->k_warning_sign)) {
    deva_gaode_routing_msgs__msg__Guidance__fini(msg);
    return false;
  }
  // k_lane_meta_info
  if (!deva_gaode_routing_msgs__msg__KLaneMetaInfo__init(&msg->k_lane_meta_info)) {
    deva_gaode_routing_msgs__msg__Guidance__fini(msg);
    return false;
  }
  // k_lsl
  if (!deva_gaode_routing_msgs__msg__KLsl__init(&msg->k_lsl)) {
    deva_gaode_routing_msgs__msg__Guidance__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__Guidance__fini(deva_gaode_routing_msgs__msg__Guidance * msg)
{
  if (!msg) {
    return;
  }
  // in_link_id
  deva_gaode_routing_msgs__msg__LinkIDType__fini(&msg->in_link_id);
  // node_id
  deva_gaode_routing_msgs__msg__NodeIDType__fini(&msg->node_id);
  // pass_link_id_s
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->pass_link_id_s);
  // k_warning_sign
  deva_gaode_routing_msgs__msg__KWarningSign__fini(&msg->k_warning_sign);
  // k_lane_meta_info
  deva_gaode_routing_msgs__msg__KLaneMetaInfo__fini(&msg->k_lane_meta_info);
  // k_lsl
  deva_gaode_routing_msgs__msg__KLsl__fini(&msg->k_lsl);
}

bool
deva_gaode_routing_msgs__msg__Guidance__are_equal(const deva_gaode_routing_msgs__msg__Guidance * lhs, const deva_gaode_routing_msgs__msg__Guidance * rhs)
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
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->pass_link_id_s), &(rhs->pass_link_id_s)))
  {
    return false;
  }
  // k_warning_sign
  if (!deva_gaode_routing_msgs__msg__KWarningSign__are_equal(
      &(lhs->k_warning_sign), &(rhs->k_warning_sign)))
  {
    return false;
  }
  // k_lane_meta_info
  if (!deva_gaode_routing_msgs__msg__KLaneMetaInfo__are_equal(
      &(lhs->k_lane_meta_info), &(rhs->k_lane_meta_info)))
  {
    return false;
  }
  // k_lsl
  if (!deva_gaode_routing_msgs__msg__KLsl__are_equal(
      &(lhs->k_lsl), &(rhs->k_lsl)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Guidance__copy(
  const deva_gaode_routing_msgs__msg__Guidance * input,
  deva_gaode_routing_msgs__msg__Guidance * output)
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
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->pass_link_id_s), &(output->pass_link_id_s)))
  {
    return false;
  }
  // k_warning_sign
  if (!deva_gaode_routing_msgs__msg__KWarningSign__copy(
      &(input->k_warning_sign), &(output->k_warning_sign)))
  {
    return false;
  }
  // k_lane_meta_info
  if (!deva_gaode_routing_msgs__msg__KLaneMetaInfo__copy(
      &(input->k_lane_meta_info), &(output->k_lane_meta_info)))
  {
    return false;
  }
  // k_lsl
  if (!deva_gaode_routing_msgs__msg__KLsl__copy(
      &(input->k_lsl), &(output->k_lsl)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__Guidance *
deva_gaode_routing_msgs__msg__Guidance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Guidance * msg = (deva_gaode_routing_msgs__msg__Guidance *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Guidance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__Guidance));
  bool success = deva_gaode_routing_msgs__msg__Guidance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__Guidance__destroy(deva_gaode_routing_msgs__msg__Guidance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__Guidance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__Guidance__Sequence__init(deva_gaode_routing_msgs__msg__Guidance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Guidance * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__Guidance *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__Guidance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__Guidance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__Guidance__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__Guidance__Sequence__fini(deva_gaode_routing_msgs__msg__Guidance__Sequence * array)
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
      deva_gaode_routing_msgs__msg__Guidance__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__Guidance__Sequence *
deva_gaode_routing_msgs__msg__Guidance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Guidance__Sequence * array = (deva_gaode_routing_msgs__msg__Guidance__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Guidance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__Guidance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__Guidance__Sequence__destroy(deva_gaode_routing_msgs__msg__Guidance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__Guidance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__Guidance__Sequence__are_equal(const deva_gaode_routing_msgs__msg__Guidance__Sequence * lhs, const deva_gaode_routing_msgs__msg__Guidance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Guidance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Guidance__Sequence__copy(
  const deva_gaode_routing_msgs__msg__Guidance__Sequence * input,
  deva_gaode_routing_msgs__msg__Guidance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__Guidance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__Guidance * data =
      (deva_gaode_routing_msgs__msg__Guidance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__Guidance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__Guidance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Guidance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
