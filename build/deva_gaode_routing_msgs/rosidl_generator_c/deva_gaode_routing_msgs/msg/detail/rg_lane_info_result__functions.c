// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/RGLaneInfoResult.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `arrow`
// Member `flag`
// Member `rg_lane_result_property`
// Member `recommend`
// Member `lane_info_raw_link_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `active_time`
#include "rosidl_runtime_c/string_functions.h"
// Member `additional_lane_info`
#include "deva_gaode_routing_msgs/msg/detail/rg_additional_lane_info__functions.h"
// Member `pos`
#include "deva_gaode_routing_msgs/msg/detail/route_pos__functions.h"

bool
deva_gaode_routing_msgs__msg__RGLaneInfoResult__init(deva_gaode_routing_msgs__msg__RGLaneInfoResult * msg)
{
  if (!msg) {
    return false;
  }
  // raw_link_id
  // arrow
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->arrow, 0)) {
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(msg);
    return false;
  }
  // flag
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->flag, 0)) {
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(msg);
    return false;
  }
  // rg_lane_result_property
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->rg_lane_result_property, 0)) {
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(msg);
    return false;
  }
  // recommend
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->recommend, 0)) {
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(msg);
    return false;
  }
  // active_time
  if (!rosidl_runtime_c__String__init(&msg->active_time)) {
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(msg);
    return false;
  }
  // additional_lane_info
  if (!deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__init(&msg->additional_lane_info, 0)) {
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(msg);
    return false;
  }
  // lane_info_raw_link_ids
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->lane_info_raw_link_ids, 0)) {
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(msg);
    return false;
  }
  // pos
  if (!deva_gaode_routing_msgs__msg__RoutePos__init(&msg->pos)) {
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(deva_gaode_routing_msgs__msg__RGLaneInfoResult * msg)
{
  if (!msg) {
    return;
  }
  // raw_link_id
  // arrow
  rosidl_runtime_c__uint32__Sequence__fini(&msg->arrow);
  // flag
  rosidl_runtime_c__uint32__Sequence__fini(&msg->flag);
  // rg_lane_result_property
  rosidl_runtime_c__uint32__Sequence__fini(&msg->rg_lane_result_property);
  // recommend
  rosidl_runtime_c__uint32__Sequence__fini(&msg->recommend);
  // active_time
  rosidl_runtime_c__String__fini(&msg->active_time);
  // additional_lane_info
  deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__fini(&msg->additional_lane_info);
  // lane_info_raw_link_ids
  rosidl_runtime_c__uint64__Sequence__fini(&msg->lane_info_raw_link_ids);
  // pos
  deva_gaode_routing_msgs__msg__RoutePos__fini(&msg->pos);
}

bool
deva_gaode_routing_msgs__msg__RGLaneInfoResult__are_equal(const deva_gaode_routing_msgs__msg__RGLaneInfoResult * lhs, const deva_gaode_routing_msgs__msg__RGLaneInfoResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // raw_link_id
  if (lhs->raw_link_id != rhs->raw_link_id) {
    return false;
  }
  // arrow
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->arrow), &(rhs->arrow)))
  {
    return false;
  }
  // flag
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->flag), &(rhs->flag)))
  {
    return false;
  }
  // rg_lane_result_property
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->rg_lane_result_property), &(rhs->rg_lane_result_property)))
  {
    return false;
  }
  // recommend
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->recommend), &(rhs->recommend)))
  {
    return false;
  }
  // active_time
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->active_time), &(rhs->active_time)))
  {
    return false;
  }
  // additional_lane_info
  if (!deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__are_equal(
      &(lhs->additional_lane_info), &(rhs->additional_lane_info)))
  {
    return false;
  }
  // lane_info_raw_link_ids
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->lane_info_raw_link_ids), &(rhs->lane_info_raw_link_ids)))
  {
    return false;
  }
  // pos
  if (!deva_gaode_routing_msgs__msg__RoutePos__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RGLaneInfoResult__copy(
  const deva_gaode_routing_msgs__msg__RGLaneInfoResult * input,
  deva_gaode_routing_msgs__msg__RGLaneInfoResult * output)
{
  if (!input || !output) {
    return false;
  }
  // raw_link_id
  output->raw_link_id = input->raw_link_id;
  // arrow
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->arrow), &(output->arrow)))
  {
    return false;
  }
  // flag
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->flag), &(output->flag)))
  {
    return false;
  }
  // rg_lane_result_property
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->rg_lane_result_property), &(output->rg_lane_result_property)))
  {
    return false;
  }
  // recommend
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->recommend), &(output->recommend)))
  {
    return false;
  }
  // active_time
  if (!rosidl_runtime_c__String__copy(
      &(input->active_time), &(output->active_time)))
  {
    return false;
  }
  // additional_lane_info
  if (!deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__copy(
      &(input->additional_lane_info), &(output->additional_lane_info)))
  {
    return false;
  }
  // lane_info_raw_link_ids
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->lane_info_raw_link_ids), &(output->lane_info_raw_link_ids)))
  {
    return false;
  }
  // pos
  if (!deva_gaode_routing_msgs__msg__RoutePos__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__RGLaneInfoResult *
deva_gaode_routing_msgs__msg__RGLaneInfoResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RGLaneInfoResult * msg = (deva_gaode_routing_msgs__msg__RGLaneInfoResult *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RGLaneInfoResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__RGLaneInfoResult));
  bool success = deva_gaode_routing_msgs__msg__RGLaneInfoResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__RGLaneInfoResult__destroy(deva_gaode_routing_msgs__msg__RGLaneInfoResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__init(deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RGLaneInfoResult * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__RGLaneInfoResult *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__RGLaneInfoResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__RGLaneInfoResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__fini(deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence * array)
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
      deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence *
deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence * array = (deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__destroy(deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__are_equal(const deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence * lhs, const deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RGLaneInfoResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__copy(
  const deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence * input,
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__RGLaneInfoResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__RGLaneInfoResult * data =
      (deva_gaode_routing_msgs__msg__RGLaneInfoResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__RGLaneInfoResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RGLaneInfoResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
