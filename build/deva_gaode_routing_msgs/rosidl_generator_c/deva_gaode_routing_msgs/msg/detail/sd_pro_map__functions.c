// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/SdProMap.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `navi_route`
#include "deva_gaode_routing_msgs/msg/detail/nav_route__functions.h"
// Member `paths`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path__functions.h"
// Member `links`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_link__functions.h"
// Member `path_splits`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_split__functions.h"
// Member `path_merges`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_merge__functions.h"
// Member `sd_nodes`
#include "deva_gaode_routing_msgs/msg/detail/sd_node__functions.h"

bool
deva_gaode_routing_msgs__msg__SdProMap__init(deva_gaode_routing_msgs__msg__SdProMap * msg)
{
  if (!msg) {
    return false;
  }
  // version
  // city_code
  // navi_route
  if (!deva_gaode_routing_msgs__msg__NavRoute__init(&msg->navi_route)) {
    deva_gaode_routing_msgs__msg__SdProMap__fini(msg);
    return false;
  }
  // paths
  if (!deva_gaode_routing_msgs__msg__SdProPath__Sequence__init(&msg->paths, 0)) {
    deva_gaode_routing_msgs__msg__SdProMap__fini(msg);
    return false;
  }
  // links
  if (!deva_gaode_routing_msgs__msg__SdProLink__Sequence__init(&msg->links, 0)) {
    deva_gaode_routing_msgs__msg__SdProMap__fini(msg);
    return false;
  }
  // path_splits
  if (!deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__init(&msg->path_splits, 0)) {
    deva_gaode_routing_msgs__msg__SdProMap__fini(msg);
    return false;
  }
  // path_merges
  if (!deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence__init(&msg->path_merges, 0)) {
    deva_gaode_routing_msgs__msg__SdProMap__fini(msg);
    return false;
  }
  // sd_nodes
  if (!deva_gaode_routing_msgs__msg__SDNode__Sequence__init(&msg->sd_nodes, 0)) {
    deva_gaode_routing_msgs__msg__SdProMap__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__SdProMap__fini(deva_gaode_routing_msgs__msg__SdProMap * msg)
{
  if (!msg) {
    return;
  }
  // version
  // city_code
  // navi_route
  deva_gaode_routing_msgs__msg__NavRoute__fini(&msg->navi_route);
  // paths
  deva_gaode_routing_msgs__msg__SdProPath__Sequence__fini(&msg->paths);
  // links
  deva_gaode_routing_msgs__msg__SdProLink__Sequence__fini(&msg->links);
  // path_splits
  deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__fini(&msg->path_splits);
  // path_merges
  deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence__fini(&msg->path_merges);
  // sd_nodes
  deva_gaode_routing_msgs__msg__SDNode__Sequence__fini(&msg->sd_nodes);
}

bool
deva_gaode_routing_msgs__msg__SdProMap__are_equal(const deva_gaode_routing_msgs__msg__SdProMap * lhs, const deva_gaode_routing_msgs__msg__SdProMap * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // version
  if (lhs->version != rhs->version) {
    return false;
  }
  // city_code
  if (lhs->city_code != rhs->city_code) {
    return false;
  }
  // navi_route
  if (!deva_gaode_routing_msgs__msg__NavRoute__are_equal(
      &(lhs->navi_route), &(rhs->navi_route)))
  {
    return false;
  }
  // paths
  if (!deva_gaode_routing_msgs__msg__SdProPath__Sequence__are_equal(
      &(lhs->paths), &(rhs->paths)))
  {
    return false;
  }
  // links
  if (!deva_gaode_routing_msgs__msg__SdProLink__Sequence__are_equal(
      &(lhs->links), &(rhs->links)))
  {
    return false;
  }
  // path_splits
  if (!deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__are_equal(
      &(lhs->path_splits), &(rhs->path_splits)))
  {
    return false;
  }
  // path_merges
  if (!deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence__are_equal(
      &(lhs->path_merges), &(rhs->path_merges)))
  {
    return false;
  }
  // sd_nodes
  if (!deva_gaode_routing_msgs__msg__SDNode__Sequence__are_equal(
      &(lhs->sd_nodes), &(rhs->sd_nodes)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SdProMap__copy(
  const deva_gaode_routing_msgs__msg__SdProMap * input,
  deva_gaode_routing_msgs__msg__SdProMap * output)
{
  if (!input || !output) {
    return false;
  }
  // version
  output->version = input->version;
  // city_code
  output->city_code = input->city_code;
  // navi_route
  if (!deva_gaode_routing_msgs__msg__NavRoute__copy(
      &(input->navi_route), &(output->navi_route)))
  {
    return false;
  }
  // paths
  if (!deva_gaode_routing_msgs__msg__SdProPath__Sequence__copy(
      &(input->paths), &(output->paths)))
  {
    return false;
  }
  // links
  if (!deva_gaode_routing_msgs__msg__SdProLink__Sequence__copy(
      &(input->links), &(output->links)))
  {
    return false;
  }
  // path_splits
  if (!deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__copy(
      &(input->path_splits), &(output->path_splits)))
  {
    return false;
  }
  // path_merges
  if (!deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence__copy(
      &(input->path_merges), &(output->path_merges)))
  {
    return false;
  }
  // sd_nodes
  if (!deva_gaode_routing_msgs__msg__SDNode__Sequence__copy(
      &(input->sd_nodes), &(output->sd_nodes)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__SdProMap *
deva_gaode_routing_msgs__msg__SdProMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProMap * msg = (deva_gaode_routing_msgs__msg__SdProMap *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SdProMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__SdProMap));
  bool success = deva_gaode_routing_msgs__msg__SdProMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__SdProMap__destroy(deva_gaode_routing_msgs__msg__SdProMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__SdProMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__SdProMap__Sequence__init(deva_gaode_routing_msgs__msg__SdProMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProMap * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__SdProMap *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__SdProMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__SdProMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__SdProMap__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__SdProMap__Sequence__fini(deva_gaode_routing_msgs__msg__SdProMap__Sequence * array)
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
      deva_gaode_routing_msgs__msg__SdProMap__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__SdProMap__Sequence *
deva_gaode_routing_msgs__msg__SdProMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProMap__Sequence * array = (deva_gaode_routing_msgs__msg__SdProMap__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SdProMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__SdProMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__SdProMap__Sequence__destroy(deva_gaode_routing_msgs__msg__SdProMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__SdProMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__SdProMap__Sequence__are_equal(const deva_gaode_routing_msgs__msg__SdProMap__Sequence * lhs, const deva_gaode_routing_msgs__msg__SdProMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SdProMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SdProMap__Sequence__copy(
  const deva_gaode_routing_msgs__msg__SdProMap__Sequence * input,
  deva_gaode_routing_msgs__msg__SdProMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__SdProMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__SdProMap * data =
      (deva_gaode_routing_msgs__msg__SdProMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__SdProMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__SdProMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SdProMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
