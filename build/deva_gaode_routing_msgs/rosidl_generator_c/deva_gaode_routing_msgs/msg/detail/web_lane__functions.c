// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/WebLane.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/web_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `actual_turn`
// Member `navi_turn`
// Member `optimal_turn`
// Member `actual_exten_turn`
// Member `exten_turn`
// Member `actual_turn_type`
// Member `navi_turn_type`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `md5`
#include "rosidl_runtime_c/string_functions.h"
// Member `callback_point`
#include "deva_gaode_routing_msgs/msg/detail/web_point__functions.h"

bool
deva_gaode_routing_msgs__msg__WebLane__init(deva_gaode_routing_msgs__msg__WebLane * msg)
{
  if (!msg) {
    return false;
  }
  // lane_num
  // actual_turn
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->actual_turn, 0)) {
    deva_gaode_routing_msgs__msg__WebLane__fini(msg);
    return false;
  }
  // navi_turn
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->navi_turn, 0)) {
    deva_gaode_routing_msgs__msg__WebLane__fini(msg);
    return false;
  }
  // optimal_turn
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->optimal_turn, 0)) {
    deva_gaode_routing_msgs__msg__WebLane__fini(msg);
    return false;
  }
  // actual_exten_turn
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->actual_exten_turn, 0)) {
    deva_gaode_routing_msgs__msg__WebLane__fini(msg);
    return false;
  }
  // exten_turn
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->exten_turn, 0)) {
    deva_gaode_routing_msgs__msg__WebLane__fini(msg);
    return false;
  }
  // actual_turn_type
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->actual_turn_type, 0)) {
    deva_gaode_routing_msgs__msg__WebLane__fini(msg);
    return false;
  }
  // navi_turn_type
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->navi_turn_type, 0)) {
    deva_gaode_routing_msgs__msg__WebLane__fini(msg);
    return false;
  }
  // road_idx
  // step_idx
  // md5
  if (!rosidl_runtime_c__String__init(&msg->md5)) {
    deva_gaode_routing_msgs__msg__WebLane__fini(msg);
    return false;
  }
  // callback_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__init(&msg->callback_point)) {
    deva_gaode_routing_msgs__msg__WebLane__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__WebLane__fini(deva_gaode_routing_msgs__msg__WebLane * msg)
{
  if (!msg) {
    return;
  }
  // lane_num
  // actual_turn
  rosidl_runtime_c__uint32__Sequence__fini(&msg->actual_turn);
  // navi_turn
  rosidl_runtime_c__uint32__Sequence__fini(&msg->navi_turn);
  // optimal_turn
  rosidl_runtime_c__uint32__Sequence__fini(&msg->optimal_turn);
  // actual_exten_turn
  rosidl_runtime_c__uint32__Sequence__fini(&msg->actual_exten_turn);
  // exten_turn
  rosidl_runtime_c__uint32__Sequence__fini(&msg->exten_turn);
  // actual_turn_type
  rosidl_runtime_c__uint32__Sequence__fini(&msg->actual_turn_type);
  // navi_turn_type
  rosidl_runtime_c__uint32__Sequence__fini(&msg->navi_turn_type);
  // road_idx
  // step_idx
  // md5
  rosidl_runtime_c__String__fini(&msg->md5);
  // callback_point
  deva_gaode_routing_msgs__msg__WebPoint__fini(&msg->callback_point);
}

bool
deva_gaode_routing_msgs__msg__WebLane__are_equal(const deva_gaode_routing_msgs__msg__WebLane * lhs, const deva_gaode_routing_msgs__msg__WebLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_num
  if (lhs->lane_num != rhs->lane_num) {
    return false;
  }
  // actual_turn
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->actual_turn), &(rhs->actual_turn)))
  {
    return false;
  }
  // navi_turn
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->navi_turn), &(rhs->navi_turn)))
  {
    return false;
  }
  // optimal_turn
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->optimal_turn), &(rhs->optimal_turn)))
  {
    return false;
  }
  // actual_exten_turn
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->actual_exten_turn), &(rhs->actual_exten_turn)))
  {
    return false;
  }
  // exten_turn
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->exten_turn), &(rhs->exten_turn)))
  {
    return false;
  }
  // actual_turn_type
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->actual_turn_type), &(rhs->actual_turn_type)))
  {
    return false;
  }
  // navi_turn_type
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->navi_turn_type), &(rhs->navi_turn_type)))
  {
    return false;
  }
  // road_idx
  if (lhs->road_idx != rhs->road_idx) {
    return false;
  }
  // step_idx
  if (lhs->step_idx != rhs->step_idx) {
    return false;
  }
  // md5
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->md5), &(rhs->md5)))
  {
    return false;
  }
  // callback_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__are_equal(
      &(lhs->callback_point), &(rhs->callback_point)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebLane__copy(
  const deva_gaode_routing_msgs__msg__WebLane * input,
  deva_gaode_routing_msgs__msg__WebLane * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_num
  output->lane_num = input->lane_num;
  // actual_turn
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->actual_turn), &(output->actual_turn)))
  {
    return false;
  }
  // navi_turn
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->navi_turn), &(output->navi_turn)))
  {
    return false;
  }
  // optimal_turn
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->optimal_turn), &(output->optimal_turn)))
  {
    return false;
  }
  // actual_exten_turn
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->actual_exten_turn), &(output->actual_exten_turn)))
  {
    return false;
  }
  // exten_turn
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->exten_turn), &(output->exten_turn)))
  {
    return false;
  }
  // actual_turn_type
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->actual_turn_type), &(output->actual_turn_type)))
  {
    return false;
  }
  // navi_turn_type
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->navi_turn_type), &(output->navi_turn_type)))
  {
    return false;
  }
  // road_idx
  output->road_idx = input->road_idx;
  // step_idx
  output->step_idx = input->step_idx;
  // md5
  if (!rosidl_runtime_c__String__copy(
      &(input->md5), &(output->md5)))
  {
    return false;
  }
  // callback_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__copy(
      &(input->callback_point), &(output->callback_point)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__WebLane *
deva_gaode_routing_msgs__msg__WebLane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebLane * msg = (deva_gaode_routing_msgs__msg__WebLane *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__WebLane));
  bool success = deva_gaode_routing_msgs__msg__WebLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__WebLane__destroy(deva_gaode_routing_msgs__msg__WebLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__WebLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__WebLane__Sequence__init(deva_gaode_routing_msgs__msg__WebLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebLane * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__WebLane *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__WebLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__WebLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__WebLane__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__WebLane__Sequence__fini(deva_gaode_routing_msgs__msg__WebLane__Sequence * array)
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
      deva_gaode_routing_msgs__msg__WebLane__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__WebLane__Sequence *
deva_gaode_routing_msgs__msg__WebLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebLane__Sequence * array = (deva_gaode_routing_msgs__msg__WebLane__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__WebLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__WebLane__Sequence__destroy(deva_gaode_routing_msgs__msg__WebLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__WebLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__WebLane__Sequence__are_equal(const deva_gaode_routing_msgs__msg__WebLane__Sequence * lhs, const deva_gaode_routing_msgs__msg__WebLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebLane__Sequence__copy(
  const deva_gaode_routing_msgs__msg__WebLane__Sequence * input,
  deva_gaode_routing_msgs__msg__WebLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__WebLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__WebLane * data =
      (deva_gaode_routing_msgs__msg__WebLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__WebLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__WebLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
