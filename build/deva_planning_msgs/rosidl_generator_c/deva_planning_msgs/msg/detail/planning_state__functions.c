// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs:msg/PlanningState.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/planning_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `pilot_planning_state`
// Member `navi_state`
#include "rosidl_runtime_c/string_functions.h"
// Member `fail_reason`
#include "deva_planning_msgs/msg/detail/planning_fail__functions.h"

bool
deva_planning_msgs__msg__PlanningState__init(deva_planning_msgs__msg__PlanningState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_planning_msgs__msg__PlanningState__fini(msg);
    return false;
  }
  // pilot_planning_state
  if (!rosidl_runtime_c__String__init(&msg->pilot_planning_state)) {
    deva_planning_msgs__msg__PlanningState__fini(msg);
    return false;
  }
  // navi_state
  if (!rosidl_runtime_c__String__init(&msg->navi_state)) {
    deva_planning_msgs__msg__PlanningState__fini(msg);
    return false;
  }
  // fail_reason
  if (!deva_planning_msgs__msg__PlanningFail__Sequence__init(&msg->fail_reason, 0)) {
    deva_planning_msgs__msg__PlanningState__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs__msg__PlanningState__fini(deva_planning_msgs__msg__PlanningState * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // pilot_planning_state
  rosidl_runtime_c__String__fini(&msg->pilot_planning_state);
  // navi_state
  rosidl_runtime_c__String__fini(&msg->navi_state);
  // fail_reason
  deva_planning_msgs__msg__PlanningFail__Sequence__fini(&msg->fail_reason);
}

bool
deva_planning_msgs__msg__PlanningState__are_equal(const deva_planning_msgs__msg__PlanningState * lhs, const deva_planning_msgs__msg__PlanningState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // pilot_planning_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pilot_planning_state), &(rhs->pilot_planning_state)))
  {
    return false;
  }
  // navi_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->navi_state), &(rhs->navi_state)))
  {
    return false;
  }
  // fail_reason
  if (!deva_planning_msgs__msg__PlanningFail__Sequence__are_equal(
      &(lhs->fail_reason), &(rhs->fail_reason)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs__msg__PlanningState__copy(
  const deva_planning_msgs__msg__PlanningState * input,
  deva_planning_msgs__msg__PlanningState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // pilot_planning_state
  if (!rosidl_runtime_c__String__copy(
      &(input->pilot_planning_state), &(output->pilot_planning_state)))
  {
    return false;
  }
  // navi_state
  if (!rosidl_runtime_c__String__copy(
      &(input->navi_state), &(output->navi_state)))
  {
    return false;
  }
  // fail_reason
  if (!deva_planning_msgs__msg__PlanningFail__Sequence__copy(
      &(input->fail_reason), &(output->fail_reason)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs__msg__PlanningState *
deva_planning_msgs__msg__PlanningState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__PlanningState * msg = (deva_planning_msgs__msg__PlanningState *)allocator.allocate(sizeof(deva_planning_msgs__msg__PlanningState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs__msg__PlanningState));
  bool success = deva_planning_msgs__msg__PlanningState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs__msg__PlanningState__destroy(deva_planning_msgs__msg__PlanningState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs__msg__PlanningState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs__msg__PlanningState__Sequence__init(deva_planning_msgs__msg__PlanningState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__PlanningState * data = NULL;

  if (size) {
    data = (deva_planning_msgs__msg__PlanningState *)allocator.zero_allocate(size, sizeof(deva_planning_msgs__msg__PlanningState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs__msg__PlanningState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs__msg__PlanningState__fini(&data[i - 1]);
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
deva_planning_msgs__msg__PlanningState__Sequence__fini(deva_planning_msgs__msg__PlanningState__Sequence * array)
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
      deva_planning_msgs__msg__PlanningState__fini(&array->data[i]);
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

deva_planning_msgs__msg__PlanningState__Sequence *
deva_planning_msgs__msg__PlanningState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__PlanningState__Sequence * array = (deva_planning_msgs__msg__PlanningState__Sequence *)allocator.allocate(sizeof(deva_planning_msgs__msg__PlanningState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs__msg__PlanningState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs__msg__PlanningState__Sequence__destroy(deva_planning_msgs__msg__PlanningState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs__msg__PlanningState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs__msg__PlanningState__Sequence__are_equal(const deva_planning_msgs__msg__PlanningState__Sequence * lhs, const deva_planning_msgs__msg__PlanningState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs__msg__PlanningState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs__msg__PlanningState__Sequence__copy(
  const deva_planning_msgs__msg__PlanningState__Sequence * input,
  deva_planning_msgs__msg__PlanningState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs__msg__PlanningState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs__msg__PlanningState * data =
      (deva_planning_msgs__msg__PlanningState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs__msg__PlanningState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs__msg__PlanningState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs__msg__PlanningState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
