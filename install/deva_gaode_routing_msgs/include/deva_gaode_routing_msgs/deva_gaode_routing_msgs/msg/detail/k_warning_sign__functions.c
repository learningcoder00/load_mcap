// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/KWarningSign.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/k_warning_sign__functions.h"

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
// Member `descript`
#include "rosidl_runtime_c/string_functions.h"
// Member `coordinate`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"

bool
deva_gaode_routing_msgs__msg__KWarningSign__init(deva_gaode_routing_msgs__msg__KWarningSign * msg)
{
  if (!msg) {
    return false;
  }
  // in_link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->in_link_id)) {
    deva_gaode_routing_msgs__msg__KWarningSign__fini(msg);
    return false;
  }
  // node_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__init(&msg->node_id)) {
    deva_gaode_routing_msgs__msg__KWarningSign__fini(msg);
    return false;
  }
  // pass_link_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->pass_link_id_s)) {
    deva_gaode_routing_msgs__msg__KWarningSign__fini(msg);
    return false;
  }
  // trc_kind
  // forcetold_dist
  // control_dist
  // link_direction
  // descript
  if (!rosidl_runtime_c__String__init(&msg->descript)) {
    deva_gaode_routing_msgs__msg__KWarningSign__fini(msg);
    return false;
  }
  // coordinate
  if (!deva_gaode_routing_msgs__msg__Coordinate__init(&msg->coordinate)) {
    deva_gaode_routing_msgs__msg__KWarningSign__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__KWarningSign__fini(deva_gaode_routing_msgs__msg__KWarningSign * msg)
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
  // trc_kind
  // forcetold_dist
  // control_dist
  // link_direction
  // descript
  rosidl_runtime_c__String__fini(&msg->descript);
  // coordinate
  deva_gaode_routing_msgs__msg__Coordinate__fini(&msg->coordinate);
}

bool
deva_gaode_routing_msgs__msg__KWarningSign__are_equal(const deva_gaode_routing_msgs__msg__KWarningSign * lhs, const deva_gaode_routing_msgs__msg__KWarningSign * rhs)
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
  // trc_kind
  if (lhs->trc_kind != rhs->trc_kind) {
    return false;
  }
  // forcetold_dist
  if (lhs->forcetold_dist != rhs->forcetold_dist) {
    return false;
  }
  // control_dist
  if (lhs->control_dist != rhs->control_dist) {
    return false;
  }
  // link_direction
  if (lhs->link_direction != rhs->link_direction) {
    return false;
  }
  // descript
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->descript), &(rhs->descript)))
  {
    return false;
  }
  // coordinate
  if (!deva_gaode_routing_msgs__msg__Coordinate__are_equal(
      &(lhs->coordinate), &(rhs->coordinate)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__KWarningSign__copy(
  const deva_gaode_routing_msgs__msg__KWarningSign * input,
  deva_gaode_routing_msgs__msg__KWarningSign * output)
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
  // trc_kind
  output->trc_kind = input->trc_kind;
  // forcetold_dist
  output->forcetold_dist = input->forcetold_dist;
  // control_dist
  output->control_dist = input->control_dist;
  // link_direction
  output->link_direction = input->link_direction;
  // descript
  if (!rosidl_runtime_c__String__copy(
      &(input->descript), &(output->descript)))
  {
    return false;
  }
  // coordinate
  if (!deva_gaode_routing_msgs__msg__Coordinate__copy(
      &(input->coordinate), &(output->coordinate)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__KWarningSign *
deva_gaode_routing_msgs__msg__KWarningSign__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__KWarningSign * msg = (deva_gaode_routing_msgs__msg__KWarningSign *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__KWarningSign), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__KWarningSign));
  bool success = deva_gaode_routing_msgs__msg__KWarningSign__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__KWarningSign__destroy(deva_gaode_routing_msgs__msg__KWarningSign * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__KWarningSign__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__KWarningSign__Sequence__init(deva_gaode_routing_msgs__msg__KWarningSign__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__KWarningSign * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__KWarningSign *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__KWarningSign), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__KWarningSign__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__KWarningSign__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__KWarningSign__Sequence__fini(deva_gaode_routing_msgs__msg__KWarningSign__Sequence * array)
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
      deva_gaode_routing_msgs__msg__KWarningSign__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__KWarningSign__Sequence *
deva_gaode_routing_msgs__msg__KWarningSign__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__KWarningSign__Sequence * array = (deva_gaode_routing_msgs__msg__KWarningSign__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__KWarningSign__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__KWarningSign__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__KWarningSign__Sequence__destroy(deva_gaode_routing_msgs__msg__KWarningSign__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__KWarningSign__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__KWarningSign__Sequence__are_equal(const deva_gaode_routing_msgs__msg__KWarningSign__Sequence * lhs, const deva_gaode_routing_msgs__msg__KWarningSign__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__KWarningSign__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__KWarningSign__Sequence__copy(
  const deva_gaode_routing_msgs__msg__KWarningSign__Sequence * input,
  deva_gaode_routing_msgs__msg__KWarningSign__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__KWarningSign);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__KWarningSign * data =
      (deva_gaode_routing_msgs__msg__KWarningSign *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__KWarningSign__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__KWarningSign__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__KWarningSign__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
