// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/FeaturePointById.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `lane_id_s`
// Member `previous_id_s`
// Member `next_id_s`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"
// Member `types`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `coordinate`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"
// Member `link_id`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"

bool
deva_gaode_routing_msgs__msg__FeaturePointById__init(deva_gaode_routing_msgs__msg__FeaturePointById * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__init(&msg->id)) {
    deva_gaode_routing_msgs__msg__FeaturePointById__fini(msg);
    return false;
  }
  // types
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->types, 0)) {
    deva_gaode_routing_msgs__msg__FeaturePointById__fini(msg);
    return false;
  }
  // direction
  // coordinate
  if (!deva_gaode_routing_msgs__msg__Coordinate__init(&msg->coordinate)) {
    deva_gaode_routing_msgs__msg__FeaturePointById__fini(msg);
    return false;
  }
  // link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->link_id)) {
    deva_gaode_routing_msgs__msg__FeaturePointById__fini(msg);
    return false;
  }
  // project_percent
  // lane_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->lane_id_s, 0)) {
    deva_gaode_routing_msgs__msg__FeaturePointById__fini(msg);
    return false;
  }
  // previous_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->previous_id_s, 0)) {
    deva_gaode_routing_msgs__msg__FeaturePointById__fini(msg);
    return false;
  }
  // next_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->next_id_s, 0)) {
    deva_gaode_routing_msgs__msg__FeaturePointById__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__FeaturePointById__fini(deva_gaode_routing_msgs__msg__FeaturePointById * msg)
{
  if (!msg) {
    return;
  }
  // id
  deva_gaode_routing_msgs__msg__FeatureIDType__fini(&msg->id);
  // types
  rosidl_runtime_c__uint8__Sequence__fini(&msg->types);
  // direction
  // coordinate
  deva_gaode_routing_msgs__msg__Coordinate__fini(&msg->coordinate);
  // link_id
  deva_gaode_routing_msgs__msg__LinkIDType__fini(&msg->link_id);
  // project_percent
  // lane_id_s
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->lane_id_s);
  // previous_id_s
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->previous_id_s);
  // next_id_s
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->next_id_s);
}

bool
deva_gaode_routing_msgs__msg__FeaturePointById__are_equal(const deva_gaode_routing_msgs__msg__FeaturePointById * lhs, const deva_gaode_routing_msgs__msg__FeaturePointById * rhs)
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
  // types
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->types), &(rhs->types)))
  {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // coordinate
  if (!deva_gaode_routing_msgs__msg__Coordinate__are_equal(
      &(lhs->coordinate), &(rhs->coordinate)))
  {
    return false;
  }
  // link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__are_equal(
      &(lhs->link_id), &(rhs->link_id)))
  {
    return false;
  }
  // project_percent
  if (lhs->project_percent != rhs->project_percent) {
    return false;
  }
  // lane_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->lane_id_s), &(rhs->lane_id_s)))
  {
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
deva_gaode_routing_msgs__msg__FeaturePointById__copy(
  const deva_gaode_routing_msgs__msg__FeaturePointById * input,
  deva_gaode_routing_msgs__msg__FeaturePointById * output)
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
  // types
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->types), &(output->types)))
  {
    return false;
  }
  // direction
  output->direction = input->direction;
  // coordinate
  if (!deva_gaode_routing_msgs__msg__Coordinate__copy(
      &(input->coordinate), &(output->coordinate)))
  {
    return false;
  }
  // link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__copy(
      &(input->link_id), &(output->link_id)))
  {
    return false;
  }
  // project_percent
  output->project_percent = input->project_percent;
  // lane_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->lane_id_s), &(output->lane_id_s)))
  {
    return false;
  }
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

deva_gaode_routing_msgs__msg__FeaturePointById *
deva_gaode_routing_msgs__msg__FeaturePointById__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__FeaturePointById * msg = (deva_gaode_routing_msgs__msg__FeaturePointById *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__FeaturePointById), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__FeaturePointById));
  bool success = deva_gaode_routing_msgs__msg__FeaturePointById__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__FeaturePointById__destroy(deva_gaode_routing_msgs__msg__FeaturePointById * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__FeaturePointById__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__init(deva_gaode_routing_msgs__msg__FeaturePointById__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__FeaturePointById * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__FeaturePointById *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__FeaturePointById), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__FeaturePointById__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__FeaturePointById__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__fini(deva_gaode_routing_msgs__msg__FeaturePointById__Sequence * array)
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
      deva_gaode_routing_msgs__msg__FeaturePointById__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__FeaturePointById__Sequence *
deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__FeaturePointById__Sequence * array = (deva_gaode_routing_msgs__msg__FeaturePointById__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__FeaturePointById__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__destroy(deva_gaode_routing_msgs__msg__FeaturePointById__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__are_equal(const deva_gaode_routing_msgs__msg__FeaturePointById__Sequence * lhs, const deva_gaode_routing_msgs__msg__FeaturePointById__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__FeaturePointById__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__copy(
  const deva_gaode_routing_msgs__msg__FeaturePointById__Sequence * input,
  deva_gaode_routing_msgs__msg__FeaturePointById__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__FeaturePointById);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__FeaturePointById * data =
      (deva_gaode_routing_msgs__msg__FeaturePointById *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__FeaturePointById__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__FeaturePointById__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__FeaturePointById__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
