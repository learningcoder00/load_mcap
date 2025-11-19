// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/STLocalMap.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/st_local_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `channels`
#include "deva_map_msgs/msg/detail/channel__functions.h"
// Member `reference_channals`
#include "deva_map_msgs/msg/detail/reference_channal__functions.h"
// Member `obstacles`
#include "deva_perception_msgs/msg/detail/static_obstacle__functions.h"
// Member `signals`
#include "deva_perception_msgs/msg/detail/signal__functions.h"

bool
deva_map_msgs__msg__STLocalMap__init(deva_map_msgs__msg__STLocalMap * msg)
{
  if (!msg) {
    return false;
  }
  // channels
  if (!deva_map_msgs__msg__Channel__Sequence__init(&msg->channels, 0)) {
    deva_map_msgs__msg__STLocalMap__fini(msg);
    return false;
  }
  // reference_channals
  if (!deva_map_msgs__msg__ReferenceChannal__Sequence__init(&msg->reference_channals, 0)) {
    deva_map_msgs__msg__STLocalMap__fini(msg);
    return false;
  }
  // obstacles
  if (!deva_perception_msgs__msg__StaticObstacle__Sequence__init(&msg->obstacles, 0)) {
    deva_map_msgs__msg__STLocalMap__fini(msg);
    return false;
  }
  // signals
  if (!deva_perception_msgs__msg__Signal__Sequence__init(&msg->signals, 0)) {
    deva_map_msgs__msg__STLocalMap__fini(msg);
    return false;
  }
  return true;
}

void
deva_map_msgs__msg__STLocalMap__fini(deva_map_msgs__msg__STLocalMap * msg)
{
  if (!msg) {
    return;
  }
  // channels
  deva_map_msgs__msg__Channel__Sequence__fini(&msg->channels);
  // reference_channals
  deva_map_msgs__msg__ReferenceChannal__Sequence__fini(&msg->reference_channals);
  // obstacles
  deva_perception_msgs__msg__StaticObstacle__Sequence__fini(&msg->obstacles);
  // signals
  deva_perception_msgs__msg__Signal__Sequence__fini(&msg->signals);
}

bool
deva_map_msgs__msg__STLocalMap__are_equal(const deva_map_msgs__msg__STLocalMap * lhs, const deva_map_msgs__msg__STLocalMap * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // channels
  if (!deva_map_msgs__msg__Channel__Sequence__are_equal(
      &(lhs->channels), &(rhs->channels)))
  {
    return false;
  }
  // reference_channals
  if (!deva_map_msgs__msg__ReferenceChannal__Sequence__are_equal(
      &(lhs->reference_channals), &(rhs->reference_channals)))
  {
    return false;
  }
  // obstacles
  if (!deva_perception_msgs__msg__StaticObstacle__Sequence__are_equal(
      &(lhs->obstacles), &(rhs->obstacles)))
  {
    return false;
  }
  // signals
  if (!deva_perception_msgs__msg__Signal__Sequence__are_equal(
      &(lhs->signals), &(rhs->signals)))
  {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__STLocalMap__copy(
  const deva_map_msgs__msg__STLocalMap * input,
  deva_map_msgs__msg__STLocalMap * output)
{
  if (!input || !output) {
    return false;
  }
  // channels
  if (!deva_map_msgs__msg__Channel__Sequence__copy(
      &(input->channels), &(output->channels)))
  {
    return false;
  }
  // reference_channals
  if (!deva_map_msgs__msg__ReferenceChannal__Sequence__copy(
      &(input->reference_channals), &(output->reference_channals)))
  {
    return false;
  }
  // obstacles
  if (!deva_perception_msgs__msg__StaticObstacle__Sequence__copy(
      &(input->obstacles), &(output->obstacles)))
  {
    return false;
  }
  // signals
  if (!deva_perception_msgs__msg__Signal__Sequence__copy(
      &(input->signals), &(output->signals)))
  {
    return false;
  }
  return true;
}

deva_map_msgs__msg__STLocalMap *
deva_map_msgs__msg__STLocalMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__STLocalMap * msg = (deva_map_msgs__msg__STLocalMap *)allocator.allocate(sizeof(deva_map_msgs__msg__STLocalMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__STLocalMap));
  bool success = deva_map_msgs__msg__STLocalMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__STLocalMap__destroy(deva_map_msgs__msg__STLocalMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__STLocalMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__STLocalMap__Sequence__init(deva_map_msgs__msg__STLocalMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__STLocalMap * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__STLocalMap *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__STLocalMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__STLocalMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__STLocalMap__fini(&data[i - 1]);
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
deva_map_msgs__msg__STLocalMap__Sequence__fini(deva_map_msgs__msg__STLocalMap__Sequence * array)
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
      deva_map_msgs__msg__STLocalMap__fini(&array->data[i]);
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

deva_map_msgs__msg__STLocalMap__Sequence *
deva_map_msgs__msg__STLocalMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__STLocalMap__Sequence * array = (deva_map_msgs__msg__STLocalMap__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__STLocalMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__STLocalMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__STLocalMap__Sequence__destroy(deva_map_msgs__msg__STLocalMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__STLocalMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__STLocalMap__Sequence__are_equal(const deva_map_msgs__msg__STLocalMap__Sequence * lhs, const deva_map_msgs__msg__STLocalMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__STLocalMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__STLocalMap__Sequence__copy(
  const deva_map_msgs__msg__STLocalMap__Sequence * input,
  deva_map_msgs__msg__STLocalMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__STLocalMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__STLocalMap * data =
      (deva_map_msgs__msg__STLocalMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__STLocalMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__STLocalMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__STLocalMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
