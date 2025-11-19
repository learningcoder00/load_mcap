// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs:msg/ReferenceLine.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/reference_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reference_line`
// Member `original_merge_point`
// Member `merge_point`
#include "nav_msgs/msg/detail/path__functions.h"
// Member `cipv_ids`
// Member `cutin_cipv_ids`
// Member `nearest_cipv_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_planning_msgs__msg__ReferenceLine__init(deva_planning_msgs__msg__ReferenceLine * msg)
{
  if (!msg) {
    return false;
  }
  // reference_line
  if (!nav_msgs__msg__Path__init(&msg->reference_line)) {
    deva_planning_msgs__msg__ReferenceLine__fini(msg);
    return false;
  }
  // line_id
  // original_merge_point
  if (!nav_msgs__msg__Path__init(&msg->original_merge_point)) {
    deva_planning_msgs__msg__ReferenceLine__fini(msg);
    return false;
  }
  // merge_point
  if (!nav_msgs__msg__Path__init(&msg->merge_point)) {
    deva_planning_msgs__msg__ReferenceLine__fini(msg);
    return false;
  }
  // reference_line_type
  // line_is_virtual
  // left_line_nums
  // right_line_nums
  // cipv_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->cipv_ids, 0)) {
    deva_planning_msgs__msg__ReferenceLine__fini(msg);
    return false;
  }
  // cutin_cipv_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->cutin_cipv_ids, 0)) {
    deva_planning_msgs__msg__ReferenceLine__fini(msg);
    return false;
  }
  // nearest_cipv_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->nearest_cipv_ids, 0)) {
    deva_planning_msgs__msg__ReferenceLine__fini(msg);
    return false;
  }
  // navi_score
  // effic_score
  // turn_scenario
  return true;
}

void
deva_planning_msgs__msg__ReferenceLine__fini(deva_planning_msgs__msg__ReferenceLine * msg)
{
  if (!msg) {
    return;
  }
  // reference_line
  nav_msgs__msg__Path__fini(&msg->reference_line);
  // line_id
  // original_merge_point
  nav_msgs__msg__Path__fini(&msg->original_merge_point);
  // merge_point
  nav_msgs__msg__Path__fini(&msg->merge_point);
  // reference_line_type
  // line_is_virtual
  // left_line_nums
  // right_line_nums
  // cipv_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->cipv_ids);
  // cutin_cipv_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->cutin_cipv_ids);
  // nearest_cipv_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->nearest_cipv_ids);
  // navi_score
  // effic_score
  // turn_scenario
}

bool
deva_planning_msgs__msg__ReferenceLine__are_equal(const deva_planning_msgs__msg__ReferenceLine * lhs, const deva_planning_msgs__msg__ReferenceLine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reference_line
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->reference_line), &(rhs->reference_line)))
  {
    return false;
  }
  // line_id
  if (lhs->line_id != rhs->line_id) {
    return false;
  }
  // original_merge_point
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->original_merge_point), &(rhs->original_merge_point)))
  {
    return false;
  }
  // merge_point
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->merge_point), &(rhs->merge_point)))
  {
    return false;
  }
  // reference_line_type
  if (lhs->reference_line_type != rhs->reference_line_type) {
    return false;
  }
  // line_is_virtual
  if (lhs->line_is_virtual != rhs->line_is_virtual) {
    return false;
  }
  // left_line_nums
  if (lhs->left_line_nums != rhs->left_line_nums) {
    return false;
  }
  // right_line_nums
  if (lhs->right_line_nums != rhs->right_line_nums) {
    return false;
  }
  // cipv_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->cipv_ids), &(rhs->cipv_ids)))
  {
    return false;
  }
  // cutin_cipv_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->cutin_cipv_ids), &(rhs->cutin_cipv_ids)))
  {
    return false;
  }
  // nearest_cipv_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->nearest_cipv_ids), &(rhs->nearest_cipv_ids)))
  {
    return false;
  }
  // navi_score
  if (lhs->navi_score != rhs->navi_score) {
    return false;
  }
  // effic_score
  if (lhs->effic_score != rhs->effic_score) {
    return false;
  }
  // turn_scenario
  if (lhs->turn_scenario != rhs->turn_scenario) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs__msg__ReferenceLine__copy(
  const deva_planning_msgs__msg__ReferenceLine * input,
  deva_planning_msgs__msg__ReferenceLine * output)
{
  if (!input || !output) {
    return false;
  }
  // reference_line
  if (!nav_msgs__msg__Path__copy(
      &(input->reference_line), &(output->reference_line)))
  {
    return false;
  }
  // line_id
  output->line_id = input->line_id;
  // original_merge_point
  if (!nav_msgs__msg__Path__copy(
      &(input->original_merge_point), &(output->original_merge_point)))
  {
    return false;
  }
  // merge_point
  if (!nav_msgs__msg__Path__copy(
      &(input->merge_point), &(output->merge_point)))
  {
    return false;
  }
  // reference_line_type
  output->reference_line_type = input->reference_line_type;
  // line_is_virtual
  output->line_is_virtual = input->line_is_virtual;
  // left_line_nums
  output->left_line_nums = input->left_line_nums;
  // right_line_nums
  output->right_line_nums = input->right_line_nums;
  // cipv_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->cipv_ids), &(output->cipv_ids)))
  {
    return false;
  }
  // cutin_cipv_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->cutin_cipv_ids), &(output->cutin_cipv_ids)))
  {
    return false;
  }
  // nearest_cipv_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->nearest_cipv_ids), &(output->nearest_cipv_ids)))
  {
    return false;
  }
  // navi_score
  output->navi_score = input->navi_score;
  // effic_score
  output->effic_score = input->effic_score;
  // turn_scenario
  output->turn_scenario = input->turn_scenario;
  return true;
}

deva_planning_msgs__msg__ReferenceLine *
deva_planning_msgs__msg__ReferenceLine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__ReferenceLine * msg = (deva_planning_msgs__msg__ReferenceLine *)allocator.allocate(sizeof(deva_planning_msgs__msg__ReferenceLine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs__msg__ReferenceLine));
  bool success = deva_planning_msgs__msg__ReferenceLine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs__msg__ReferenceLine__destroy(deva_planning_msgs__msg__ReferenceLine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs__msg__ReferenceLine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs__msg__ReferenceLine__Sequence__init(deva_planning_msgs__msg__ReferenceLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__ReferenceLine * data = NULL;

  if (size) {
    data = (deva_planning_msgs__msg__ReferenceLine *)allocator.zero_allocate(size, sizeof(deva_planning_msgs__msg__ReferenceLine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs__msg__ReferenceLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs__msg__ReferenceLine__fini(&data[i - 1]);
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
deva_planning_msgs__msg__ReferenceLine__Sequence__fini(deva_planning_msgs__msg__ReferenceLine__Sequence * array)
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
      deva_planning_msgs__msg__ReferenceLine__fini(&array->data[i]);
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

deva_planning_msgs__msg__ReferenceLine__Sequence *
deva_planning_msgs__msg__ReferenceLine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__ReferenceLine__Sequence * array = (deva_planning_msgs__msg__ReferenceLine__Sequence *)allocator.allocate(sizeof(deva_planning_msgs__msg__ReferenceLine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs__msg__ReferenceLine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs__msg__ReferenceLine__Sequence__destroy(deva_planning_msgs__msg__ReferenceLine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs__msg__ReferenceLine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs__msg__ReferenceLine__Sequence__are_equal(const deva_planning_msgs__msg__ReferenceLine__Sequence * lhs, const deva_planning_msgs__msg__ReferenceLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs__msg__ReferenceLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs__msg__ReferenceLine__Sequence__copy(
  const deva_planning_msgs__msg__ReferenceLine__Sequence * input,
  deva_planning_msgs__msg__ReferenceLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs__msg__ReferenceLine);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs__msg__ReferenceLine * data =
      (deva_planning_msgs__msg__ReferenceLine *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs__msg__ReferenceLine__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs__msg__ReferenceLine__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs__msg__ReferenceLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
