// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/SolidLine.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/solid_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pass_list`
// Member `lane_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_gaode_routing_msgs__msg__SolidLine__init(deva_gaode_routing_msgs__msg__SolidLine * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // in_road
  // pass_list
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->pass_list, 0)) {
    deva_gaode_routing_msgs__msg__SolidLine__fini(msg);
    return false;
  }
  // out_road
  // lane_num
  // seq_num
  // lane_list
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->lane_list, 0)) {
    deva_gaode_routing_msgs__msg__SolidLine__fini(msg);
    return false;
  }
  // type
  return true;
}

void
deva_gaode_routing_msgs__msg__SolidLine__fini(deva_gaode_routing_msgs__msg__SolidLine * msg)
{
  if (!msg) {
    return;
  }
  // id
  // in_road
  // pass_list
  rosidl_runtime_c__uint64__Sequence__fini(&msg->pass_list);
  // out_road
  // lane_num
  // seq_num
  // lane_list
  rosidl_runtime_c__int32__Sequence__fini(&msg->lane_list);
  // type
}

bool
deva_gaode_routing_msgs__msg__SolidLine__are_equal(const deva_gaode_routing_msgs__msg__SolidLine * lhs, const deva_gaode_routing_msgs__msg__SolidLine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // in_road
  if (lhs->in_road != rhs->in_road) {
    return false;
  }
  // pass_list
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->pass_list), &(rhs->pass_list)))
  {
    return false;
  }
  // out_road
  if (lhs->out_road != rhs->out_road) {
    return false;
  }
  // lane_num
  if (lhs->lane_num != rhs->lane_num) {
    return false;
  }
  // seq_num
  if (lhs->seq_num != rhs->seq_num) {
    return false;
  }
  // lane_list
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->lane_list), &(rhs->lane_list)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SolidLine__copy(
  const deva_gaode_routing_msgs__msg__SolidLine * input,
  deva_gaode_routing_msgs__msg__SolidLine * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // in_road
  output->in_road = input->in_road;
  // pass_list
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->pass_list), &(output->pass_list)))
  {
    return false;
  }
  // out_road
  output->out_road = input->out_road;
  // lane_num
  output->lane_num = input->lane_num;
  // seq_num
  output->seq_num = input->seq_num;
  // lane_list
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->lane_list), &(output->lane_list)))
  {
    return false;
  }
  // type
  output->type = input->type;
  return true;
}

deva_gaode_routing_msgs__msg__SolidLine *
deva_gaode_routing_msgs__msg__SolidLine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SolidLine * msg = (deva_gaode_routing_msgs__msg__SolidLine *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SolidLine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__SolidLine));
  bool success = deva_gaode_routing_msgs__msg__SolidLine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__SolidLine__destroy(deva_gaode_routing_msgs__msg__SolidLine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__SolidLine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__SolidLine__Sequence__init(deva_gaode_routing_msgs__msg__SolidLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SolidLine * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__SolidLine *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__SolidLine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__SolidLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__SolidLine__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__SolidLine__Sequence__fini(deva_gaode_routing_msgs__msg__SolidLine__Sequence * array)
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
      deva_gaode_routing_msgs__msg__SolidLine__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__SolidLine__Sequence *
deva_gaode_routing_msgs__msg__SolidLine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SolidLine__Sequence * array = (deva_gaode_routing_msgs__msg__SolidLine__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SolidLine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__SolidLine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__SolidLine__Sequence__destroy(deva_gaode_routing_msgs__msg__SolidLine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__SolidLine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__SolidLine__Sequence__are_equal(const deva_gaode_routing_msgs__msg__SolidLine__Sequence * lhs, const deva_gaode_routing_msgs__msg__SolidLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SolidLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SolidLine__Sequence__copy(
  const deva_gaode_routing_msgs__msg__SolidLine__Sequence * input,
  deva_gaode_routing_msgs__msg__SolidLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__SolidLine);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__SolidLine * data =
      (deva_gaode_routing_msgs__msg__SolidLine *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__SolidLine__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__SolidLine__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SolidLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
