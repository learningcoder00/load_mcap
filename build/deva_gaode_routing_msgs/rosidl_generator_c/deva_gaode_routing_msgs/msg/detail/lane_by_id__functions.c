// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/LaneById.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/lane_by_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `feature_point_id_s`
// Member `previous_id_s`
// Member `next_id_s`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"
// Member `lane_group_id_type`
#include "deva_gaode_routing_msgs/msg/detail/lane_group_id_type__functions.h"
// Member `lane_type`
// Member `border_types`
// Member `border_colors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_gaode_routing_msgs__msg__LaneById__init(deva_gaode_routing_msgs__msg__LaneById * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__init(&msg->id)) {
    deva_gaode_routing_msgs__msg__LaneById__fini(msg);
    return false;
  }
  // lane_group_id_type
  if (!deva_gaode_routing_msgs__msg__LaneGroupIDType__init(&msg->lane_group_id_type)) {
    deva_gaode_routing_msgs__msg__LaneById__fini(msg);
    return false;
  }
  // feature_point_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->feature_point_id_s, 0)) {
    deva_gaode_routing_msgs__msg__LaneById__fini(msg);
    return false;
  }
  // direction
  // lane_type
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->lane_type, 0)) {
    deva_gaode_routing_msgs__msg__LaneById__fini(msg);
    return false;
  }
  // border_types
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->border_types, 0)) {
    deva_gaode_routing_msgs__msg__LaneById__fini(msg);
    return false;
  }
  // border_colors
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->border_colors, 0)) {
    deva_gaode_routing_msgs__msg__LaneById__fini(msg);
    return false;
  }
  // lane_width
  // lane_start_width
  // lane_end_width
  // previous_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->previous_id_s, 0)) {
    deva_gaode_routing_msgs__msg__LaneById__fini(msg);
    return false;
  }
  // next_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->next_id_s, 0)) {
    deva_gaode_routing_msgs__msg__LaneById__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__LaneById__fini(deva_gaode_routing_msgs__msg__LaneById * msg)
{
  if (!msg) {
    return;
  }
  // id
  deva_gaode_routing_msgs__msg__FeatureIDType__fini(&msg->id);
  // lane_group_id_type
  deva_gaode_routing_msgs__msg__LaneGroupIDType__fini(&msg->lane_group_id_type);
  // feature_point_id_s
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->feature_point_id_s);
  // direction
  // lane_type
  rosidl_runtime_c__uint8__Sequence__fini(&msg->lane_type);
  // border_types
  rosidl_runtime_c__uint8__Sequence__fini(&msg->border_types);
  // border_colors
  rosidl_runtime_c__uint8__Sequence__fini(&msg->border_colors);
  // lane_width
  // lane_start_width
  // lane_end_width
  // previous_id_s
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->previous_id_s);
  // next_id_s
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->next_id_s);
}

bool
deva_gaode_routing_msgs__msg__LaneById__are_equal(const deva_gaode_routing_msgs__msg__LaneById * lhs, const deva_gaode_routing_msgs__msg__LaneById * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // lane_group_id_type
  if (!deva_gaode_routing_msgs__msg__LaneGroupIDType__are_equal(
      &(lhs->lane_group_id_type), &(rhs->lane_group_id_type)))
  {
    return false;
  }
  // feature_point_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->feature_point_id_s), &(rhs->feature_point_id_s)))
  {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // lane_type
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->lane_type), &(rhs->lane_type)))
  {
    return false;
  }
  // border_types
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->border_types), &(rhs->border_types)))
  {
    return false;
  }
  // border_colors
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->border_colors), &(rhs->border_colors)))
  {
    return false;
  }
  // lane_width
  if (lhs->lane_width != rhs->lane_width) {
    return false;
  }
  // lane_start_width
  if (lhs->lane_start_width != rhs->lane_start_width) {
    return false;
  }
  // lane_end_width
  if (lhs->lane_end_width != rhs->lane_end_width) {
    return false;
  }
  // previous_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->previous_id_s), &(rhs->previous_id_s)))
  {
    return false;
  }
  // next_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->next_id_s), &(rhs->next_id_s)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__LaneById__copy(
  const deva_gaode_routing_msgs__msg__LaneById * input,
  deva_gaode_routing_msgs__msg__LaneById * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // lane_group_id_type
  if (!deva_gaode_routing_msgs__msg__LaneGroupIDType__copy(
      &(input->lane_group_id_type), &(output->lane_group_id_type)))
  {
    return false;
  }
  // feature_point_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->feature_point_id_s), &(output->feature_point_id_s)))
  {
    return false;
  }
  // direction
  output->direction = input->direction;
  // lane_type
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->lane_type), &(output->lane_type)))
  {
    return false;
  }
  // border_types
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->border_types), &(output->border_types)))
  {
    return false;
  }
  // border_colors
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->border_colors), &(output->border_colors)))
  {
    return false;
  }
  // lane_width
  output->lane_width = input->lane_width;
  // lane_start_width
  output->lane_start_width = input->lane_start_width;
  // lane_end_width
  output->lane_end_width = input->lane_end_width;
  // previous_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->previous_id_s), &(output->previous_id_s)))
  {
    return false;
  }
  // next_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->next_id_s), &(output->next_id_s)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__LaneById *
deva_gaode_routing_msgs__msg__LaneById__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneById * msg = (deva_gaode_routing_msgs__msg__LaneById *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__LaneById), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__LaneById));
  bool success = deva_gaode_routing_msgs__msg__LaneById__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__LaneById__destroy(deva_gaode_routing_msgs__msg__LaneById * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__LaneById__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__LaneById__Sequence__init(deva_gaode_routing_msgs__msg__LaneById__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneById * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__LaneById *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__LaneById), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__LaneById__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__LaneById__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__LaneById__Sequence__fini(deva_gaode_routing_msgs__msg__LaneById__Sequence * array)
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
      deva_gaode_routing_msgs__msg__LaneById__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__LaneById__Sequence *
deva_gaode_routing_msgs__msg__LaneById__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneById__Sequence * array = (deva_gaode_routing_msgs__msg__LaneById__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__LaneById__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__LaneById__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__LaneById__Sequence__destroy(deva_gaode_routing_msgs__msg__LaneById__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__LaneById__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__LaneById__Sequence__are_equal(const deva_gaode_routing_msgs__msg__LaneById__Sequence * lhs, const deva_gaode_routing_msgs__msg__LaneById__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__LaneById__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__LaneById__Sequence__copy(
  const deva_gaode_routing_msgs__msg__LaneById__Sequence * input,
  deva_gaode_routing_msgs__msg__LaneById__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__LaneById);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__LaneById * data =
      (deva_gaode_routing_msgs__msg__LaneById *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__LaneById__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__LaneById__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__LaneById__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
