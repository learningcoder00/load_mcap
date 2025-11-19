// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/FeaturePoint.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/feature_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `feature_point_id_s`
// Member `feature_point_id_s_by_link_id`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"
// Member `feature_point_id_by_id`
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__functions.h"

bool
deva_gaode_routing_msgs__msg__FeaturePoint__init(deva_gaode_routing_msgs__msg__FeaturePoint * msg)
{
  if (!msg) {
    return false;
  }
  // feature_point_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->feature_point_id_s, 0)) {
    deva_gaode_routing_msgs__msg__FeaturePoint__fini(msg);
    return false;
  }
  // feature_point_id_s_by_link_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->feature_point_id_s_by_link_id, 0)) {
    deva_gaode_routing_msgs__msg__FeaturePoint__fini(msg);
    return false;
  }
  // feature_point_id_by_id
  if (!deva_gaode_routing_msgs__msg__FeaturePointById__init(&msg->feature_point_id_by_id)) {
    deva_gaode_routing_msgs__msg__FeaturePoint__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__FeaturePoint__fini(deva_gaode_routing_msgs__msg__FeaturePoint * msg)
{
  if (!msg) {
    return;
  }
  // feature_point_id_s
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->feature_point_id_s);
  // feature_point_id_s_by_link_id
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->feature_point_id_s_by_link_id);
  // feature_point_id_by_id
  deva_gaode_routing_msgs__msg__FeaturePointById__fini(&msg->feature_point_id_by_id);
}

bool
deva_gaode_routing_msgs__msg__FeaturePoint__are_equal(const deva_gaode_routing_msgs__msg__FeaturePoint * lhs, const deva_gaode_routing_msgs__msg__FeaturePoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feature_point_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->feature_point_id_s), &(rhs->feature_point_id_s)))
  {
    return false;
  }
  // feature_point_id_s_by_link_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->feature_point_id_s_by_link_id), &(rhs->feature_point_id_s_by_link_id)))
  {
    return false;
  }
  // feature_point_id_by_id
  if (!deva_gaode_routing_msgs__msg__FeaturePointById__are_equal(
      &(lhs->feature_point_id_by_id), &(rhs->feature_point_id_by_id)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__FeaturePoint__copy(
  const deva_gaode_routing_msgs__msg__FeaturePoint * input,
  deva_gaode_routing_msgs__msg__FeaturePoint * output)
{
  if (!input || !output) {
    return false;
  }
  // feature_point_id_s
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->feature_point_id_s), &(output->feature_point_id_s)))
  {
    return false;
  }
  // feature_point_id_s_by_link_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->feature_point_id_s_by_link_id), &(output->feature_point_id_s_by_link_id)))
  {
    return false;
  }
  // feature_point_id_by_id
  if (!deva_gaode_routing_msgs__msg__FeaturePointById__copy(
      &(input->feature_point_id_by_id), &(output->feature_point_id_by_id)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__FeaturePoint *
deva_gaode_routing_msgs__msg__FeaturePoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__FeaturePoint * msg = (deva_gaode_routing_msgs__msg__FeaturePoint *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__FeaturePoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__FeaturePoint));
  bool success = deva_gaode_routing_msgs__msg__FeaturePoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__FeaturePoint__destroy(deva_gaode_routing_msgs__msg__FeaturePoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__FeaturePoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__init(deva_gaode_routing_msgs__msg__FeaturePoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__FeaturePoint * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__FeaturePoint *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__FeaturePoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__FeaturePoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__FeaturePoint__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__fini(deva_gaode_routing_msgs__msg__FeaturePoint__Sequence * array)
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
      deva_gaode_routing_msgs__msg__FeaturePoint__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__FeaturePoint__Sequence *
deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__FeaturePoint__Sequence * array = (deva_gaode_routing_msgs__msg__FeaturePoint__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__FeaturePoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__destroy(deva_gaode_routing_msgs__msg__FeaturePoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__are_equal(const deva_gaode_routing_msgs__msg__FeaturePoint__Sequence * lhs, const deva_gaode_routing_msgs__msg__FeaturePoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__FeaturePoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__copy(
  const deva_gaode_routing_msgs__msg__FeaturePoint__Sequence * input,
  deva_gaode_routing_msgs__msg__FeaturePoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__FeaturePoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__FeaturePoint * data =
      (deva_gaode_routing_msgs__msg__FeaturePoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__FeaturePoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__FeaturePoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__FeaturePoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
