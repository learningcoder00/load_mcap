// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/KLaneMetaInfo.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/k_lane_meta_info__functions.h"

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
// Member `lane_infos`
#include "deva_gaode_routing_msgs/msg/detail/lane_traffic_info__functions.h"
// Member `lane_topos`
#include "deva_gaode_routing_msgs/msg/detail/lane_topo__functions.h"

bool
deva_gaode_routing_msgs__msg__KLaneMetaInfo__init(deva_gaode_routing_msgs__msg__KLaneMetaInfo * msg)
{
  if (!msg) {
    return false;
  }
  // in_link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->in_link_id)) {
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__fini(msg);
    return false;
  }
  // node_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__init(&msg->node_id)) {
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__fini(msg);
    return false;
  }
  // pass_link_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->pass_link_id_s)) {
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__fini(msg);
    return false;
  }
  // lane_num
  // lane_num_left
  // lane_num_right
  // lane_infos
  if (!deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__init(&msg->lane_infos, 0)) {
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__fini(msg);
    return false;
  }
  // lane_topos
  if (!deva_gaode_routing_msgs__msg__LaneTopo__Sequence__init(&msg->lane_topos, 0)) {
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__KLaneMetaInfo__fini(deva_gaode_routing_msgs__msg__KLaneMetaInfo * msg)
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
  // lane_num
  // lane_num_left
  // lane_num_right
  // lane_infos
  deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__fini(&msg->lane_infos);
  // lane_topos
  deva_gaode_routing_msgs__msg__LaneTopo__Sequence__fini(&msg->lane_topos);
}

bool
deva_gaode_routing_msgs__msg__KLaneMetaInfo__are_equal(const deva_gaode_routing_msgs__msg__KLaneMetaInfo * lhs, const deva_gaode_routing_msgs__msg__KLaneMetaInfo * rhs)
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
  // lane_num
  if (lhs->lane_num != rhs->lane_num) {
    return false;
  }
  // lane_num_left
  if (lhs->lane_num_left != rhs->lane_num_left) {
    return false;
  }
  // lane_num_right
  if (lhs->lane_num_right != rhs->lane_num_right) {
    return false;
  }
  // lane_infos
  if (!deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__are_equal(
      &(lhs->lane_infos), &(rhs->lane_infos)))
  {
    return false;
  }
  // lane_topos
  if (!deva_gaode_routing_msgs__msg__LaneTopo__Sequence__are_equal(
      &(lhs->lane_topos), &(rhs->lane_topos)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__KLaneMetaInfo__copy(
  const deva_gaode_routing_msgs__msg__KLaneMetaInfo * input,
  deva_gaode_routing_msgs__msg__KLaneMetaInfo * output)
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
  // lane_num
  output->lane_num = input->lane_num;
  // lane_num_left
  output->lane_num_left = input->lane_num_left;
  // lane_num_right
  output->lane_num_right = input->lane_num_right;
  // lane_infos
  if (!deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__copy(
      &(input->lane_infos), &(output->lane_infos)))
  {
    return false;
  }
  // lane_topos
  if (!deva_gaode_routing_msgs__msg__LaneTopo__Sequence__copy(
      &(input->lane_topos), &(output->lane_topos)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__KLaneMetaInfo *
deva_gaode_routing_msgs__msg__KLaneMetaInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__KLaneMetaInfo * msg = (deva_gaode_routing_msgs__msg__KLaneMetaInfo *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__KLaneMetaInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__KLaneMetaInfo));
  bool success = deva_gaode_routing_msgs__msg__KLaneMetaInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__KLaneMetaInfo__destroy(deva_gaode_routing_msgs__msg__KLaneMetaInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence__init(deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__KLaneMetaInfo * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__KLaneMetaInfo *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__KLaneMetaInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__KLaneMetaInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__KLaneMetaInfo__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence__fini(deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence * array)
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
      deva_gaode_routing_msgs__msg__KLaneMetaInfo__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence *
deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence * array = (deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence__destroy(deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence__are_equal(const deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence * lhs, const deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__KLaneMetaInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence__copy(
  const deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence * input,
  deva_gaode_routing_msgs__msg__KLaneMetaInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__KLaneMetaInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__KLaneMetaInfo * data =
      (deva_gaode_routing_msgs__msg__KLaneMetaInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__KLaneMetaInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__KLaneMetaInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__KLaneMetaInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
