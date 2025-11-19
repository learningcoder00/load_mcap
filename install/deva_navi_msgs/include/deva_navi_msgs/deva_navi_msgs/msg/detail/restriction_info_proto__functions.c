// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/RestrictionInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/restriction_info_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `title`
// Member `desc`
// Member `tipc`
#include "rosidl_runtime_c/string_functions.h"
// Member `rule_ids`
// Member `tail_nums`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_navi_msgs__msg__RestrictionInfoProto__init(deva_navi_msgs__msg__RestrictionInfoProto * msg)
{
  if (!msg) {
    return false;
  }
  // title
  if (!rosidl_runtime_c__String__init(&msg->title)) {
    deva_navi_msgs__msg__RestrictionInfoProto__fini(msg);
    return false;
  }
  // desc
  if (!rosidl_runtime_c__String__init(&msg->desc)) {
    deva_navi_msgs__msg__RestrictionInfoProto__fini(msg);
    return false;
  }
  // tipc
  if (!rosidl_runtime_c__String__init(&msg->tipc)) {
    deva_navi_msgs__msg__RestrictionInfoProto__fini(msg);
    return false;
  }
  // city_code
  // type
  // title_type
  // rule_ids
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->rule_ids, 0)) {
    deva_navi_msgs__msg__RestrictionInfoProto__fini(msg);
    return false;
  }
  // tail_nums
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->tail_nums, 0)) {
    deva_navi_msgs__msg__RestrictionInfoProto__fini(msg);
    return false;
  }
  return true;
}

void
deva_navi_msgs__msg__RestrictionInfoProto__fini(deva_navi_msgs__msg__RestrictionInfoProto * msg)
{
  if (!msg) {
    return;
  }
  // title
  rosidl_runtime_c__String__fini(&msg->title);
  // desc
  rosidl_runtime_c__String__fini(&msg->desc);
  // tipc
  rosidl_runtime_c__String__fini(&msg->tipc);
  // city_code
  // type
  // title_type
  // rule_ids
  rosidl_runtime_c__int64__Sequence__fini(&msg->rule_ids);
  // tail_nums
  rosidl_runtime_c__int32__Sequence__fini(&msg->tail_nums);
}

bool
deva_navi_msgs__msg__RestrictionInfoProto__are_equal(const deva_navi_msgs__msg__RestrictionInfoProto * lhs, const deva_navi_msgs__msg__RestrictionInfoProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // title
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->title), &(rhs->title)))
  {
    return false;
  }
  // desc
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->desc), &(rhs->desc)))
  {
    return false;
  }
  // tipc
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tipc), &(rhs->tipc)))
  {
    return false;
  }
  // city_code
  if (lhs->city_code != rhs->city_code) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // title_type
  if (lhs->title_type != rhs->title_type) {
    return false;
  }
  // rule_ids
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->rule_ids), &(rhs->rule_ids)))
  {
    return false;
  }
  // tail_nums
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->tail_nums), &(rhs->tail_nums)))
  {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__RestrictionInfoProto__copy(
  const deva_navi_msgs__msg__RestrictionInfoProto * input,
  deva_navi_msgs__msg__RestrictionInfoProto * output)
{
  if (!input || !output) {
    return false;
  }
  // title
  if (!rosidl_runtime_c__String__copy(
      &(input->title), &(output->title)))
  {
    return false;
  }
  // desc
  if (!rosidl_runtime_c__String__copy(
      &(input->desc), &(output->desc)))
  {
    return false;
  }
  // tipc
  if (!rosidl_runtime_c__String__copy(
      &(input->tipc), &(output->tipc)))
  {
    return false;
  }
  // city_code
  output->city_code = input->city_code;
  // type
  output->type = input->type;
  // title_type
  output->title_type = input->title_type;
  // rule_ids
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->rule_ids), &(output->rule_ids)))
  {
    return false;
  }
  // tail_nums
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->tail_nums), &(output->tail_nums)))
  {
    return false;
  }
  return true;
}

deva_navi_msgs__msg__RestrictionInfoProto *
deva_navi_msgs__msg__RestrictionInfoProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__RestrictionInfoProto * msg = (deva_navi_msgs__msg__RestrictionInfoProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__RestrictionInfoProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__RestrictionInfoProto));
  bool success = deva_navi_msgs__msg__RestrictionInfoProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__RestrictionInfoProto__destroy(deva_navi_msgs__msg__RestrictionInfoProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__RestrictionInfoProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__RestrictionInfoProto__Sequence__init(deva_navi_msgs__msg__RestrictionInfoProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__RestrictionInfoProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__RestrictionInfoProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__RestrictionInfoProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__RestrictionInfoProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__RestrictionInfoProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__RestrictionInfoProto__Sequence__fini(deva_navi_msgs__msg__RestrictionInfoProto__Sequence * array)
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
      deva_navi_msgs__msg__RestrictionInfoProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__RestrictionInfoProto__Sequence *
deva_navi_msgs__msg__RestrictionInfoProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__RestrictionInfoProto__Sequence * array = (deva_navi_msgs__msg__RestrictionInfoProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__RestrictionInfoProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__RestrictionInfoProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__RestrictionInfoProto__Sequence__destroy(deva_navi_msgs__msg__RestrictionInfoProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__RestrictionInfoProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__RestrictionInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__RestrictionInfoProto__Sequence * lhs, const deva_navi_msgs__msg__RestrictionInfoProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__RestrictionInfoProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__RestrictionInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__RestrictionInfoProto__Sequence * input,
  deva_navi_msgs__msg__RestrictionInfoProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__RestrictionInfoProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__RestrictionInfoProto * data =
      (deva_navi_msgs__msg__RestrictionInfoProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__RestrictionInfoProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__RestrictionInfoProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__RestrictionInfoProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
