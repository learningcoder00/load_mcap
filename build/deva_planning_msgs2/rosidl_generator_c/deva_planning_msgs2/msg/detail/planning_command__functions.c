// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/PlanningCommand.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/planning_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `lane_width`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_planning_msgs2__msg__PlanningCommand__init(deva_planning_msgs2__msg__PlanningCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_planning_msgs2__msg__PlanningCommand__fini(msg);
    return false;
  }
  // action
  // cruise_speed
  // park_slot_id
  // park_out_direction
  // lane_width
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lane_width, 0)) {
    deva_planning_msgs2__msg__PlanningCommand__fini(msg);
    return false;
  }
  // function
  return true;
}

void
deva_planning_msgs2__msg__PlanningCommand__fini(deva_planning_msgs2__msg__PlanningCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // action
  // cruise_speed
  // park_slot_id
  // park_out_direction
  // lane_width
  rosidl_runtime_c__double__Sequence__fini(&msg->lane_width);
  // function
}

bool
deva_planning_msgs2__msg__PlanningCommand__are_equal(const deva_planning_msgs2__msg__PlanningCommand * lhs, const deva_planning_msgs2__msg__PlanningCommand * rhs)
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
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // cruise_speed
  if (lhs->cruise_speed != rhs->cruise_speed) {
    return false;
  }
  // park_slot_id
  if (lhs->park_slot_id != rhs->park_slot_id) {
    return false;
  }
  // park_out_direction
  if (lhs->park_out_direction != rhs->park_out_direction) {
    return false;
  }
  // lane_width
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->lane_width), &(rhs->lane_width)))
  {
    return false;
  }
  // function
  if (lhs->function != rhs->function) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__PlanningCommand__copy(
  const deva_planning_msgs2__msg__PlanningCommand * input,
  deva_planning_msgs2__msg__PlanningCommand * output)
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
  // action
  output->action = input->action;
  // cruise_speed
  output->cruise_speed = input->cruise_speed;
  // park_slot_id
  output->park_slot_id = input->park_slot_id;
  // park_out_direction
  output->park_out_direction = input->park_out_direction;
  // lane_width
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->lane_width), &(output->lane_width)))
  {
    return false;
  }
  // function
  output->function = input->function;
  return true;
}

deva_planning_msgs2__msg__PlanningCommand *
deva_planning_msgs2__msg__PlanningCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PlanningCommand * msg = (deva_planning_msgs2__msg__PlanningCommand *)allocator.allocate(sizeof(deva_planning_msgs2__msg__PlanningCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__PlanningCommand));
  bool success = deva_planning_msgs2__msg__PlanningCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__PlanningCommand__destroy(deva_planning_msgs2__msg__PlanningCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__PlanningCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__PlanningCommand__Sequence__init(deva_planning_msgs2__msg__PlanningCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PlanningCommand * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__PlanningCommand *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__PlanningCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__PlanningCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__PlanningCommand__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__PlanningCommand__Sequence__fini(deva_planning_msgs2__msg__PlanningCommand__Sequence * array)
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
      deva_planning_msgs2__msg__PlanningCommand__fini(&array->data[i]);
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

deva_planning_msgs2__msg__PlanningCommand__Sequence *
deva_planning_msgs2__msg__PlanningCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PlanningCommand__Sequence * array = (deva_planning_msgs2__msg__PlanningCommand__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__PlanningCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__PlanningCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__PlanningCommand__Sequence__destroy(deva_planning_msgs2__msg__PlanningCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__PlanningCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__PlanningCommand__Sequence__are_equal(const deva_planning_msgs2__msg__PlanningCommand__Sequence * lhs, const deva_planning_msgs2__msg__PlanningCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__PlanningCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__PlanningCommand__Sequence__copy(
  const deva_planning_msgs2__msg__PlanningCommand__Sequence * input,
  deva_planning_msgs2__msg__PlanningCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__PlanningCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__PlanningCommand * data =
      (deva_planning_msgs2__msg__PlanningCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__PlanningCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__PlanningCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__PlanningCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
