// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/RoadInfo.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/road_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_perception_msgs__msg__RoadInfo__init(deva_perception_msgs__msg__RoadInfo * msg)
{
  if (!msg) {
    return false;
  }
  // has_traffic_light
  // road_type
  // road_class
  return true;
}

void
deva_perception_msgs__msg__RoadInfo__fini(deva_perception_msgs__msg__RoadInfo * msg)
{
  if (!msg) {
    return;
  }
  // has_traffic_light
  // road_type
  // road_class
}

bool
deva_perception_msgs__msg__RoadInfo__are_equal(const deva_perception_msgs__msg__RoadInfo * lhs, const deva_perception_msgs__msg__RoadInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // has_traffic_light
  if (lhs->has_traffic_light != rhs->has_traffic_light) {
    return false;
  }
  // road_type
  if (lhs->road_type != rhs->road_type) {
    return false;
  }
  // road_class
  if (lhs->road_class != rhs->road_class) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__RoadInfo__copy(
  const deva_perception_msgs__msg__RoadInfo * input,
  deva_perception_msgs__msg__RoadInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // has_traffic_light
  output->has_traffic_light = input->has_traffic_light;
  // road_type
  output->road_type = input->road_type;
  // road_class
  output->road_class = input->road_class;
  return true;
}

deva_perception_msgs__msg__RoadInfo *
deva_perception_msgs__msg__RoadInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RoadInfo * msg = (deva_perception_msgs__msg__RoadInfo *)allocator.allocate(sizeof(deva_perception_msgs__msg__RoadInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__RoadInfo));
  bool success = deva_perception_msgs__msg__RoadInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__RoadInfo__destroy(deva_perception_msgs__msg__RoadInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__RoadInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__RoadInfo__Sequence__init(deva_perception_msgs__msg__RoadInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RoadInfo * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__RoadInfo *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__RoadInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__RoadInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__RoadInfo__fini(&data[i - 1]);
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
deva_perception_msgs__msg__RoadInfo__Sequence__fini(deva_perception_msgs__msg__RoadInfo__Sequence * array)
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
      deva_perception_msgs__msg__RoadInfo__fini(&array->data[i]);
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

deva_perception_msgs__msg__RoadInfo__Sequence *
deva_perception_msgs__msg__RoadInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RoadInfo__Sequence * array = (deva_perception_msgs__msg__RoadInfo__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__RoadInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__RoadInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__RoadInfo__Sequence__destroy(deva_perception_msgs__msg__RoadInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__RoadInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__RoadInfo__Sequence__are_equal(const deva_perception_msgs__msg__RoadInfo__Sequence * lhs, const deva_perception_msgs__msg__RoadInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__RoadInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__RoadInfo__Sequence__copy(
  const deva_perception_msgs__msg__RoadInfo__Sequence * input,
  deva_perception_msgs__msg__RoadInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__RoadInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__RoadInfo * data =
      (deva_perception_msgs__msg__RoadInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__RoadInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__RoadInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__RoadInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
