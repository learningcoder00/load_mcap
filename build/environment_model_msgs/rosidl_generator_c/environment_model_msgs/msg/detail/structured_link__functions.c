// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/StructuredLink.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/structured_link__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `prev_ids`
// Member `succ_ids`
// Member `link_kinds`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `feature_point_ids`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"
// Member `points`
#include "environment_model_msgs/msg/detail/vec3d__functions.h"
// Member `guidances`
#include "deva_gaode_routing_msgs/msg/detail/guidance__functions.h"

bool
environment_model_msgs__msg__StructuredLink__init(environment_model_msgs__msg__StructuredLink * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // prev_ids
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->prev_ids, 0)) {
    environment_model_msgs__msg__StructuredLink__fini(msg);
    return false;
  }
  // succ_ids
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->succ_ids, 0)) {
    environment_model_msgs__msg__StructuredLink__fini(msg);
    return false;
  }
  // feature_point_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->feature_point_ids, 0)) {
    environment_model_msgs__msg__StructuredLink__fini(msg);
    return false;
  }
  // points
  if (!environment_model_msgs__msg__Vec3d__Sequence__init(&msg->points, 0)) {
    environment_model_msgs__msg__StructuredLink__fini(msg);
    return false;
  }
  // direction
  // length
  // speed_limit_s2e
  // speed_limit_e2s
  // coverage_status
  // lane_num
  // lane_num_s2e
  // lane_num_e2s
  // relationship_with_junction
  // guidances
  if (!deva_gaode_routing_msgs__msg__Guidance__Sequence__init(&msg->guidances, 0)) {
    environment_model_msgs__msg__StructuredLink__fini(msg);
    return false;
  }
  // is_on_routing
  // need_revert
  // link_kinds
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->link_kinds, 0)) {
    environment_model_msgs__msg__StructuredLink__fini(msg);
    return false;
  }
  return true;
}

void
environment_model_msgs__msg__StructuredLink__fini(environment_model_msgs__msg__StructuredLink * msg)
{
  if (!msg) {
    return;
  }
  // id
  // prev_ids
  rosidl_runtime_c__uint64__Sequence__fini(&msg->prev_ids);
  // succ_ids
  rosidl_runtime_c__uint64__Sequence__fini(&msg->succ_ids);
  // feature_point_ids
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->feature_point_ids);
  // points
  environment_model_msgs__msg__Vec3d__Sequence__fini(&msg->points);
  // direction
  // length
  // speed_limit_s2e
  // speed_limit_e2s
  // coverage_status
  // lane_num
  // lane_num_s2e
  // lane_num_e2s
  // relationship_with_junction
  // guidances
  deva_gaode_routing_msgs__msg__Guidance__Sequence__fini(&msg->guidances);
  // is_on_routing
  // need_revert
  // link_kinds
  rosidl_runtime_c__uint8__Sequence__fini(&msg->link_kinds);
}

bool
environment_model_msgs__msg__StructuredLink__are_equal(const environment_model_msgs__msg__StructuredLink * lhs, const environment_model_msgs__msg__StructuredLink * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // prev_ids
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->prev_ids), &(rhs->prev_ids)))
  {
    return false;
  }
  // succ_ids
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->succ_ids), &(rhs->succ_ids)))
  {
    return false;
  }
  // feature_point_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->feature_point_ids), &(rhs->feature_point_ids)))
  {
    return false;
  }
  // points
  if (!environment_model_msgs__msg__Vec3d__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // speed_limit_s2e
  if (lhs->speed_limit_s2e != rhs->speed_limit_s2e) {
    return false;
  }
  // speed_limit_e2s
  if (lhs->speed_limit_e2s != rhs->speed_limit_e2s) {
    return false;
  }
  // coverage_status
  if (lhs->coverage_status != rhs->coverage_status) {
    return false;
  }
  // lane_num
  if (lhs->lane_num != rhs->lane_num) {
    return false;
  }
  // lane_num_s2e
  if (lhs->lane_num_s2e != rhs->lane_num_s2e) {
    return false;
  }
  // lane_num_e2s
  if (lhs->lane_num_e2s != rhs->lane_num_e2s) {
    return false;
  }
  // relationship_with_junction
  if (lhs->relationship_with_junction != rhs->relationship_with_junction) {
    return false;
  }
  // guidances
  if (!deva_gaode_routing_msgs__msg__Guidance__Sequence__are_equal(
      &(lhs->guidances), &(rhs->guidances)))
  {
    return false;
  }
  // is_on_routing
  if (lhs->is_on_routing != rhs->is_on_routing) {
    return false;
  }
  // need_revert
  if (lhs->need_revert != rhs->need_revert) {
    return false;
  }
  // link_kinds
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->link_kinds), &(rhs->link_kinds)))
  {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__StructuredLink__copy(
  const environment_model_msgs__msg__StructuredLink * input,
  environment_model_msgs__msg__StructuredLink * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // prev_ids
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->prev_ids), &(output->prev_ids)))
  {
    return false;
  }
  // succ_ids
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->succ_ids), &(output->succ_ids)))
  {
    return false;
  }
  // feature_point_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->feature_point_ids), &(output->feature_point_ids)))
  {
    return false;
  }
  // points
  if (!environment_model_msgs__msg__Vec3d__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // direction
  output->direction = input->direction;
  // length
  output->length = input->length;
  // speed_limit_s2e
  output->speed_limit_s2e = input->speed_limit_s2e;
  // speed_limit_e2s
  output->speed_limit_e2s = input->speed_limit_e2s;
  // coverage_status
  output->coverage_status = input->coverage_status;
  // lane_num
  output->lane_num = input->lane_num;
  // lane_num_s2e
  output->lane_num_s2e = input->lane_num_s2e;
  // lane_num_e2s
  output->lane_num_e2s = input->lane_num_e2s;
  // relationship_with_junction
  output->relationship_with_junction = input->relationship_with_junction;
  // guidances
  if (!deva_gaode_routing_msgs__msg__Guidance__Sequence__copy(
      &(input->guidances), &(output->guidances)))
  {
    return false;
  }
  // is_on_routing
  output->is_on_routing = input->is_on_routing;
  // need_revert
  output->need_revert = input->need_revert;
  // link_kinds
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->link_kinds), &(output->link_kinds)))
  {
    return false;
  }
  return true;
}

environment_model_msgs__msg__StructuredLink *
environment_model_msgs__msg__StructuredLink__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__StructuredLink * msg = (environment_model_msgs__msg__StructuredLink *)allocator.allocate(sizeof(environment_model_msgs__msg__StructuredLink), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__StructuredLink));
  bool success = environment_model_msgs__msg__StructuredLink__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__StructuredLink__destroy(environment_model_msgs__msg__StructuredLink * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__StructuredLink__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__StructuredLink__Sequence__init(environment_model_msgs__msg__StructuredLink__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__StructuredLink * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__StructuredLink *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__StructuredLink), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__StructuredLink__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__StructuredLink__fini(&data[i - 1]);
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
environment_model_msgs__msg__StructuredLink__Sequence__fini(environment_model_msgs__msg__StructuredLink__Sequence * array)
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
      environment_model_msgs__msg__StructuredLink__fini(&array->data[i]);
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

environment_model_msgs__msg__StructuredLink__Sequence *
environment_model_msgs__msg__StructuredLink__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__StructuredLink__Sequence * array = (environment_model_msgs__msg__StructuredLink__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__StructuredLink__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__StructuredLink__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__StructuredLink__Sequence__destroy(environment_model_msgs__msg__StructuredLink__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__StructuredLink__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__StructuredLink__Sequence__are_equal(const environment_model_msgs__msg__StructuredLink__Sequence * lhs, const environment_model_msgs__msg__StructuredLink__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__StructuredLink__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__StructuredLink__Sequence__copy(
  const environment_model_msgs__msg__StructuredLink__Sequence * input,
  environment_model_msgs__msg__StructuredLink__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__StructuredLink);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__StructuredLink * data =
      (environment_model_msgs__msg__StructuredLink *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__StructuredLink__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__StructuredLink__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__StructuredLink__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
