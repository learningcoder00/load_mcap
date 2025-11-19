// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/FeatureIDType.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_gaode_routing_msgs__msg__FeatureIDType__init(deva_gaode_routing_msgs__msg__FeatureIDType * msg)
{
  if (!msg) {
    return false;
  }
  // tile_id
  // id
  return true;
}

void
deva_gaode_routing_msgs__msg__FeatureIDType__fini(deva_gaode_routing_msgs__msg__FeatureIDType * msg)
{
  if (!msg) {
    return;
  }
  // tile_id
  // id
}

bool
deva_gaode_routing_msgs__msg__FeatureIDType__are_equal(const deva_gaode_routing_msgs__msg__FeatureIDType * lhs, const deva_gaode_routing_msgs__msg__FeatureIDType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tile_id
  if (lhs->tile_id != rhs->tile_id) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__FeatureIDType__copy(
  const deva_gaode_routing_msgs__msg__FeatureIDType * input,
  deva_gaode_routing_msgs__msg__FeatureIDType * output)
{
  if (!input || !output) {
    return false;
  }
  // tile_id
  output->tile_id = input->tile_id;
  // id
  output->id = input->id;
  return true;
}

deva_gaode_routing_msgs__msg__FeatureIDType *
deva_gaode_routing_msgs__msg__FeatureIDType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__FeatureIDType * msg = (deva_gaode_routing_msgs__msg__FeatureIDType *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__FeatureIDType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__FeatureIDType));
  bool success = deva_gaode_routing_msgs__msg__FeatureIDType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__FeatureIDType__destroy(deva_gaode_routing_msgs__msg__FeatureIDType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__FeatureIDType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__FeatureIDType * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__FeatureIDType *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__FeatureIDType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__FeatureIDType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__FeatureIDType__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * array)
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
      deva_gaode_routing_msgs__msg__FeatureIDType__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *
deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * array = (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__FeatureIDType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__destroy(deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * lhs, const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__FeatureIDType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * input,
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__FeatureIDType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__FeatureIDType * data =
      (deva_gaode_routing_msgs__msg__FeatureIDType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__FeatureIDType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__FeatureIDType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__FeatureIDType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
