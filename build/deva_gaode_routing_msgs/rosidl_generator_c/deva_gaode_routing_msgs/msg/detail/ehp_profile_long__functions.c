// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/EhpProfileLong.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_long__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_gaode_routing_msgs__msg__EhpProfileLong__init(deva_gaode_routing_msgs__msg__EhpProfileLong * msg)
{
  if (!msg) {
    return false;
  }
  // prof_long_offset
  // prof_long_msg_type
  // prof_long_path_idx
  // prof_long_cyc_cnt
  // prof_long_update
  // prof_long_retr
  // prof_long_ctrl_point
  // prof_long_prof_type
  // prof_long_value
  // prof_long_relative_offset
  return true;
}

void
deva_gaode_routing_msgs__msg__EhpProfileLong__fini(deva_gaode_routing_msgs__msg__EhpProfileLong * msg)
{
  if (!msg) {
    return;
  }
  // prof_long_offset
  // prof_long_msg_type
  // prof_long_path_idx
  // prof_long_cyc_cnt
  // prof_long_update
  // prof_long_retr
  // prof_long_ctrl_point
  // prof_long_prof_type
  // prof_long_value
  // prof_long_relative_offset
}

bool
deva_gaode_routing_msgs__msg__EhpProfileLong__are_equal(const deva_gaode_routing_msgs__msg__EhpProfileLong * lhs, const deva_gaode_routing_msgs__msg__EhpProfileLong * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prof_long_offset
  if (lhs->prof_long_offset != rhs->prof_long_offset) {
    return false;
  }
  // prof_long_msg_type
  if (lhs->prof_long_msg_type != rhs->prof_long_msg_type) {
    return false;
  }
  // prof_long_path_idx
  if (lhs->prof_long_path_idx != rhs->prof_long_path_idx) {
    return false;
  }
  // prof_long_cyc_cnt
  if (lhs->prof_long_cyc_cnt != rhs->prof_long_cyc_cnt) {
    return false;
  }
  // prof_long_update
  if (lhs->prof_long_update != rhs->prof_long_update) {
    return false;
  }
  // prof_long_retr
  if (lhs->prof_long_retr != rhs->prof_long_retr) {
    return false;
  }
  // prof_long_ctrl_point
  if (lhs->prof_long_ctrl_point != rhs->prof_long_ctrl_point) {
    return false;
  }
  // prof_long_prof_type
  if (lhs->prof_long_prof_type != rhs->prof_long_prof_type) {
    return false;
  }
  // prof_long_value
  if (lhs->prof_long_value != rhs->prof_long_value) {
    return false;
  }
  // prof_long_relative_offset
  if (lhs->prof_long_relative_offset != rhs->prof_long_relative_offset) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__EhpProfileLong__copy(
  const deva_gaode_routing_msgs__msg__EhpProfileLong * input,
  deva_gaode_routing_msgs__msg__EhpProfileLong * output)
{
  if (!input || !output) {
    return false;
  }
  // prof_long_offset
  output->prof_long_offset = input->prof_long_offset;
  // prof_long_msg_type
  output->prof_long_msg_type = input->prof_long_msg_type;
  // prof_long_path_idx
  output->prof_long_path_idx = input->prof_long_path_idx;
  // prof_long_cyc_cnt
  output->prof_long_cyc_cnt = input->prof_long_cyc_cnt;
  // prof_long_update
  output->prof_long_update = input->prof_long_update;
  // prof_long_retr
  output->prof_long_retr = input->prof_long_retr;
  // prof_long_ctrl_point
  output->prof_long_ctrl_point = input->prof_long_ctrl_point;
  // prof_long_prof_type
  output->prof_long_prof_type = input->prof_long_prof_type;
  // prof_long_value
  output->prof_long_value = input->prof_long_value;
  // prof_long_relative_offset
  output->prof_long_relative_offset = input->prof_long_relative_offset;
  return true;
}

deva_gaode_routing_msgs__msg__EhpProfileLong *
deva_gaode_routing_msgs__msg__EhpProfileLong__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpProfileLong * msg = (deva_gaode_routing_msgs__msg__EhpProfileLong *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__EhpProfileLong), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__EhpProfileLong));
  bool success = deva_gaode_routing_msgs__msg__EhpProfileLong__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__EhpProfileLong__destroy(deva_gaode_routing_msgs__msg__EhpProfileLong * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__EhpProfileLong__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__init(deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpProfileLong * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__EhpProfileLong *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__EhpProfileLong), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__EhpProfileLong__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__EhpProfileLong__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__fini(deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence * array)
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
      deva_gaode_routing_msgs__msg__EhpProfileLong__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence *
deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence * array = (deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__destroy(deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__are_equal(const deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence * lhs, const deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__EhpProfileLong__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__copy(
  const deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence * input,
  deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__EhpProfileLong);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__EhpProfileLong * data =
      (deva_gaode_routing_msgs__msg__EhpProfileLong *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__EhpProfileLong__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__EhpProfileLong__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__EhpProfileLong__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
