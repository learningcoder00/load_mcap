// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rviz_plug_msg:msg/BywireDiag.idl
// generated code does not contain a copyright notice
#include "rviz_plug_msg/msg/detail/bywire_diag__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `node_name`
// Member `detail`
#include "rosidl_runtime_c/string_functions.h"
// Member `type`
#include "rviz_plug_msg/msg/detail/bywire_msg_type__functions.h"

bool
rviz_plug_msg__msg__BywireDiag__init(rviz_plug_msg__msg__BywireDiag * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rviz_plug_msg__msg__BywireDiag__fini(msg);
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    rviz_plug_msg__msg__BywireDiag__fini(msg);
    return false;
  }
  // type
  if (!rviz_plug_msg__msg__BywireMsgType__init(&msg->type)) {
    rviz_plug_msg__msg__BywireDiag__fini(msg);
    return false;
  }
  // code
  // detail
  if (!rosidl_runtime_c__String__init(&msg->detail)) {
    rviz_plug_msg__msg__BywireDiag__fini(msg);
    return false;
  }
  return true;
}

void
rviz_plug_msg__msg__BywireDiag__fini(rviz_plug_msg__msg__BywireDiag * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // type
  rviz_plug_msg__msg__BywireMsgType__fini(&msg->type);
  // code
  // detail
  rosidl_runtime_c__String__fini(&msg->detail);
}

bool
rviz_plug_msg__msg__BywireDiag__are_equal(const rviz_plug_msg__msg__BywireDiag * lhs, const rviz_plug_msg__msg__BywireDiag * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_name), &(rhs->node_name)))
  {
    return false;
  }
  // type
  if (!rviz_plug_msg__msg__BywireMsgType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detail), &(rhs->detail)))
  {
    return false;
  }
  return true;
}

bool
rviz_plug_msg__msg__BywireDiag__copy(
  const rviz_plug_msg__msg__BywireDiag * input,
  rviz_plug_msg__msg__BywireDiag * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->node_name), &(output->node_name)))
  {
    return false;
  }
  // type
  if (!rviz_plug_msg__msg__BywireMsgType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // code
  output->code = input->code;
  // detail
  if (!rosidl_runtime_c__String__copy(
      &(input->detail), &(output->detail)))
  {
    return false;
  }
  return true;
}

rviz_plug_msg__msg__BywireDiag *
rviz_plug_msg__msg__BywireDiag__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__BywireDiag * msg = (rviz_plug_msg__msg__BywireDiag *)allocator.allocate(sizeof(rviz_plug_msg__msg__BywireDiag), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rviz_plug_msg__msg__BywireDiag));
  bool success = rviz_plug_msg__msg__BywireDiag__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rviz_plug_msg__msg__BywireDiag__destroy(rviz_plug_msg__msg__BywireDiag * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rviz_plug_msg__msg__BywireDiag__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rviz_plug_msg__msg__BywireDiag__Sequence__init(rviz_plug_msg__msg__BywireDiag__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__BywireDiag * data = NULL;

  if (size) {
    data = (rviz_plug_msg__msg__BywireDiag *)allocator.zero_allocate(size, sizeof(rviz_plug_msg__msg__BywireDiag), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rviz_plug_msg__msg__BywireDiag__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rviz_plug_msg__msg__BywireDiag__fini(&data[i - 1]);
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
rviz_plug_msg__msg__BywireDiag__Sequence__fini(rviz_plug_msg__msg__BywireDiag__Sequence * array)
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
      rviz_plug_msg__msg__BywireDiag__fini(&array->data[i]);
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

rviz_plug_msg__msg__BywireDiag__Sequence *
rviz_plug_msg__msg__BywireDiag__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__BywireDiag__Sequence * array = (rviz_plug_msg__msg__BywireDiag__Sequence *)allocator.allocate(sizeof(rviz_plug_msg__msg__BywireDiag__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rviz_plug_msg__msg__BywireDiag__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rviz_plug_msg__msg__BywireDiag__Sequence__destroy(rviz_plug_msg__msg__BywireDiag__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rviz_plug_msg__msg__BywireDiag__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rviz_plug_msg__msg__BywireDiag__Sequence__are_equal(const rviz_plug_msg__msg__BywireDiag__Sequence * lhs, const rviz_plug_msg__msg__BywireDiag__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rviz_plug_msg__msg__BywireDiag__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rviz_plug_msg__msg__BywireDiag__Sequence__copy(
  const rviz_plug_msg__msg__BywireDiag__Sequence * input,
  rviz_plug_msg__msg__BywireDiag__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rviz_plug_msg__msg__BywireDiag);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rviz_plug_msg__msg__BywireDiag * data =
      (rviz_plug_msg__msg__BywireDiag *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rviz_plug_msg__msg__BywireDiag__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rviz_plug_msg__msg__BywireDiag__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rviz_plug_msg__msg__BywireDiag__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
