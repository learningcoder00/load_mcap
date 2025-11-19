// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/WebParallelRoad.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/web_parallel_road__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `parallel_road_list`
#include "deva_gaode_routing_msgs/msg/detail/web_loc_parallel_road__functions.h"

bool
deva_gaode_routing_msgs__msg__WebParallelRoad__init(deva_gaode_routing_msgs__msg__WebParallelRoad * msg)
{
  if (!msg) {
    return false;
  }
  // count
  // flag
  // hw_flag
  // status
  // parallel_road_list
  if (!deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence__init(&msg->parallel_road_list, 0)) {
    deva_gaode_routing_msgs__msg__WebParallelRoad__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__WebParallelRoad__fini(deva_gaode_routing_msgs__msg__WebParallelRoad * msg)
{
  if (!msg) {
    return;
  }
  // count
  // flag
  // hw_flag
  // status
  // parallel_road_list
  deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence__fini(&msg->parallel_road_list);
}

bool
deva_gaode_routing_msgs__msg__WebParallelRoad__are_equal(const deva_gaode_routing_msgs__msg__WebParallelRoad * lhs, const deva_gaode_routing_msgs__msg__WebParallelRoad * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  // flag
  if (lhs->flag != rhs->flag) {
    return false;
  }
  // hw_flag
  if (lhs->hw_flag != rhs->hw_flag) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // parallel_road_list
  if (!deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence__are_equal(
      &(lhs->parallel_road_list), &(rhs->parallel_road_list)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebParallelRoad__copy(
  const deva_gaode_routing_msgs__msg__WebParallelRoad * input,
  deva_gaode_routing_msgs__msg__WebParallelRoad * output)
{
  if (!input || !output) {
    return false;
  }
  // count
  output->count = input->count;
  // flag
  output->flag = input->flag;
  // hw_flag
  output->hw_flag = input->hw_flag;
  // status
  output->status = input->status;
  // parallel_road_list
  if (!deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence__copy(
      &(input->parallel_road_list), &(output->parallel_road_list)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__WebParallelRoad *
deva_gaode_routing_msgs__msg__WebParallelRoad__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebParallelRoad * msg = (deva_gaode_routing_msgs__msg__WebParallelRoad *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebParallelRoad), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__WebParallelRoad));
  bool success = deva_gaode_routing_msgs__msg__WebParallelRoad__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__WebParallelRoad__destroy(deva_gaode_routing_msgs__msg__WebParallelRoad * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__WebParallelRoad__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence__init(deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebParallelRoad * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__WebParallelRoad *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__WebParallelRoad), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__WebParallelRoad__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__WebParallelRoad__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence__fini(deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence * array)
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
      deva_gaode_routing_msgs__msg__WebParallelRoad__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence *
deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence * array = (deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence__destroy(deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence__are_equal(const deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence * lhs, const deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebParallelRoad__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence__copy(
  const deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence * input,
  deva_gaode_routing_msgs__msg__WebParallelRoad__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__WebParallelRoad);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__WebParallelRoad * data =
      (deva_gaode_routing_msgs__msg__WebParallelRoad *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__WebParallelRoad__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__WebParallelRoad__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebParallelRoad__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
