// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/SdProPathSplit.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_split__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `split_list`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_split_list__functions.h"

bool
deva_gaode_routing_msgs__msg__SdProPathSplit__init(deva_gaode_routing_msgs__msg__SdProPathSplit * msg)
{
  if (!msg) {
    return false;
  }
  // path_id
  // split_node_id
  // offset
  // split_list
  if (!deva_gaode_routing_msgs__msg__SdProSplitList__Sequence__init(&msg->split_list, 0)) {
    deva_gaode_routing_msgs__msg__SdProPathSplit__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__SdProPathSplit__fini(deva_gaode_routing_msgs__msg__SdProPathSplit * msg)
{
  if (!msg) {
    return;
  }
  // path_id
  // split_node_id
  // offset
  // split_list
  deva_gaode_routing_msgs__msg__SdProSplitList__Sequence__fini(&msg->split_list);
}

bool
deva_gaode_routing_msgs__msg__SdProPathSplit__are_equal(const deva_gaode_routing_msgs__msg__SdProPathSplit * lhs, const deva_gaode_routing_msgs__msg__SdProPathSplit * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path_id
  if (lhs->path_id != rhs->path_id) {
    return false;
  }
  // split_node_id
  if (lhs->split_node_id != rhs->split_node_id) {
    return false;
  }
  // offset
  if (lhs->offset != rhs->offset) {
    return false;
  }
  // split_list
  if (!deva_gaode_routing_msgs__msg__SdProSplitList__Sequence__are_equal(
      &(lhs->split_list), &(rhs->split_list)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SdProPathSplit__copy(
  const deva_gaode_routing_msgs__msg__SdProPathSplit * input,
  deva_gaode_routing_msgs__msg__SdProPathSplit * output)
{
  if (!input || !output) {
    return false;
  }
  // path_id
  output->path_id = input->path_id;
  // split_node_id
  output->split_node_id = input->split_node_id;
  // offset
  output->offset = input->offset;
  // split_list
  if (!deva_gaode_routing_msgs__msg__SdProSplitList__Sequence__copy(
      &(input->split_list), &(output->split_list)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__SdProPathSplit *
deva_gaode_routing_msgs__msg__SdProPathSplit__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProPathSplit * msg = (deva_gaode_routing_msgs__msg__SdProPathSplit *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SdProPathSplit), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__SdProPathSplit));
  bool success = deva_gaode_routing_msgs__msg__SdProPathSplit__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__SdProPathSplit__destroy(deva_gaode_routing_msgs__msg__SdProPathSplit * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__SdProPathSplit__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__init(deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProPathSplit * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__SdProPathSplit *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__SdProPathSplit), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__SdProPathSplit__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__SdProPathSplit__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__fini(deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence * array)
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
      deva_gaode_routing_msgs__msg__SdProPathSplit__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence *
deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence * array = (deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__destroy(deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__are_equal(const deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence * lhs, const deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SdProPathSplit__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__copy(
  const deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence * input,
  deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__SdProPathSplit);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__SdProPathSplit * data =
      (deva_gaode_routing_msgs__msg__SdProPathSplit *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__SdProPathSplit__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__SdProPathSplit__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SdProPathSplit__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
