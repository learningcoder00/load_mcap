// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/StructuredFeaturePoint.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/structured_feature_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `prev_ids`
// Member `next_ids`
// Member `lane_ids`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"
// Member `types`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `position`
#include "environment_model_msgs/msg/detail/vec3d__functions.h"

bool
environment_model_msgs__msg__StructuredFeaturePoint__init(environment_model_msgs__msg__StructuredFeaturePoint * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__init(&msg->id)) {
    environment_model_msgs__msg__StructuredFeaturePoint__fini(msg);
    return false;
  }
  // link_id
  // types
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->types, 0)) {
    environment_model_msgs__msg__StructuredFeaturePoint__fini(msg);
    return false;
  }
  // direction
  // position
  if (!environment_model_msgs__msg__Vec3d__init(&msg->position)) {
    environment_model_msgs__msg__StructuredFeaturePoint__fini(msg);
    return false;
  }
  // project_percent
  // prev_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->prev_ids, 0)) {
    environment_model_msgs__msg__StructuredFeaturePoint__fini(msg);
    return false;
  }
  // next_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->next_ids, 0)) {
    environment_model_msgs__msg__StructuredFeaturePoint__fini(msg);
    return false;
  }
  // lane_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->lane_ids, 0)) {
    environment_model_msgs__msg__StructuredFeaturePoint__fini(msg);
    return false;
  }
  return true;
}

void
environment_model_msgs__msg__StructuredFeaturePoint__fini(environment_model_msgs__msg__StructuredFeaturePoint * msg)
{
  if (!msg) {
    return;
  }
  // id
  deva_gaode_routing_msgs__msg__FeatureIDType__fini(&msg->id);
  // link_id
  // types
  rosidl_runtime_c__uint8__Sequence__fini(&msg->types);
  // direction
  // position
  environment_model_msgs__msg__Vec3d__fini(&msg->position);
  // project_percent
  // prev_ids
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->prev_ids);
  // next_ids
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->next_ids);
  // lane_ids
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->lane_ids);
}

bool
environment_model_msgs__msg__StructuredFeaturePoint__are_equal(const environment_model_msgs__msg__StructuredFeaturePoint * lhs, const environment_model_msgs__msg__StructuredFeaturePoint * rhs)
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
  // link_id
  if (lhs->link_id != rhs->link_id) {
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
  // position
  if (!environment_model_msgs__msg__Vec3d__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // project_percent
  if (lhs->project_percent != rhs->project_percent) {
    return false;
  }
  // prev_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->prev_ids), &(rhs->prev_ids)))
  {
    return false;
  }
  // next_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->next_ids), &(rhs->next_ids)))
  {
    return false;
  }
  // lane_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->lane_ids), &(rhs->lane_ids)))
  {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__StructuredFeaturePoint__copy(
  const environment_model_msgs__msg__StructuredFeaturePoint * input,
  environment_model_msgs__msg__StructuredFeaturePoint * output)
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
  // link_id
  output->link_id = input->link_id;
  // types
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->types), &(output->types)))
  {
    return false;
  }
  // direction
  output->direction = input->direction;
  // position
  if (!environment_model_msgs__msg__Vec3d__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // project_percent
  output->project_percent = input->project_percent;
  // prev_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->prev_ids), &(output->prev_ids)))
  {
    return false;
  }
  // next_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->next_ids), &(output->next_ids)))
  {
    return false;
  }
  // lane_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->lane_ids), &(output->lane_ids)))
  {
    return false;
  }
  return true;
}

environment_model_msgs__msg__StructuredFeaturePoint *
environment_model_msgs__msg__StructuredFeaturePoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__StructuredFeaturePoint * msg = (environment_model_msgs__msg__StructuredFeaturePoint *)allocator.allocate(sizeof(environment_model_msgs__msg__StructuredFeaturePoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__StructuredFeaturePoint));
  bool success = environment_model_msgs__msg__StructuredFeaturePoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__StructuredFeaturePoint__destroy(environment_model_msgs__msg__StructuredFeaturePoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__StructuredFeaturePoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__StructuredFeaturePoint__Sequence__init(environment_model_msgs__msg__StructuredFeaturePoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__StructuredFeaturePoint * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__StructuredFeaturePoint *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__StructuredFeaturePoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__StructuredFeaturePoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__StructuredFeaturePoint__fini(&data[i - 1]);
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
environment_model_msgs__msg__StructuredFeaturePoint__Sequence__fini(environment_model_msgs__msg__StructuredFeaturePoint__Sequence * array)
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
      environment_model_msgs__msg__StructuredFeaturePoint__fini(&array->data[i]);
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

environment_model_msgs__msg__StructuredFeaturePoint__Sequence *
environment_model_msgs__msg__StructuredFeaturePoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__StructuredFeaturePoint__Sequence * array = (environment_model_msgs__msg__StructuredFeaturePoint__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__StructuredFeaturePoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__StructuredFeaturePoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__StructuredFeaturePoint__Sequence__destroy(environment_model_msgs__msg__StructuredFeaturePoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__StructuredFeaturePoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__StructuredFeaturePoint__Sequence__are_equal(const environment_model_msgs__msg__StructuredFeaturePoint__Sequence * lhs, const environment_model_msgs__msg__StructuredFeaturePoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__StructuredFeaturePoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__StructuredFeaturePoint__Sequence__copy(
  const environment_model_msgs__msg__StructuredFeaturePoint__Sequence * input,
  environment_model_msgs__msg__StructuredFeaturePoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__StructuredFeaturePoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__StructuredFeaturePoint * data =
      (environment_model_msgs__msg__StructuredFeaturePoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__StructuredFeaturePoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__StructuredFeaturePoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__StructuredFeaturePoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
