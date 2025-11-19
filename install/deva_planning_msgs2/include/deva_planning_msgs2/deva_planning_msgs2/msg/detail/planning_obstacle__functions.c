// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/PlanningObstacle.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/planning_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `current_line_id`
// Member `target_line_id`
// Member `decision_tag`
// Member `scene_understanding`
// Member `scalable_flags`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `scalable_multimap`
#include "deva_planning_msgs2/msg/detail/string2_string__functions.h"

bool
deva_planning_msgs2__msg__PlanningObstacle__init(deva_planning_msgs2__msg__PlanningObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    deva_planning_msgs2__msg__PlanningObstacle__fini(msg);
    return false;
  }
  // current_line_id
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->current_line_id, 0)) {
    deva_planning_msgs2__msg__PlanningObstacle__fini(msg);
    return false;
  }
  // target_line_id
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->target_line_id, 0)) {
    deva_planning_msgs2__msg__PlanningObstacle__fini(msg);
    return false;
  }
  // decision_tag
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->decision_tag, 0)) {
    deva_planning_msgs2__msg__PlanningObstacle__fini(msg);
    return false;
  }
  // scene_understanding
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->scene_understanding, 0)) {
    deva_planning_msgs2__msg__PlanningObstacle__fini(msg);
    return false;
  }
  // cutin_time
  // cutout_time
  // distance
  // ttc
  // priority
  // scalable_flags
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->scalable_flags, 0)) {
    deva_planning_msgs2__msg__PlanningObstacle__fini(msg);
    return false;
  }
  // scalable_multimap
  if (!deva_planning_msgs2__msg__String2String__Sequence__init(&msg->scalable_multimap, 0)) {
    deva_planning_msgs2__msg__PlanningObstacle__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs2__msg__PlanningObstacle__fini(deva_planning_msgs2__msg__PlanningObstacle * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // current_line_id
  rosidl_runtime_c__int32__Sequence__fini(&msg->current_line_id);
  // target_line_id
  rosidl_runtime_c__int32__Sequence__fini(&msg->target_line_id);
  // decision_tag
  rosidl_runtime_c__uint8__Sequence__fini(&msg->decision_tag);
  // scene_understanding
  rosidl_runtime_c__uint8__Sequence__fini(&msg->scene_understanding);
  // cutin_time
  // cutout_time
  // distance
  // ttc
  // priority
  // scalable_flags
  rosidl_runtime_c__uint8__Sequence__fini(&msg->scalable_flags);
  // scalable_multimap
  deva_planning_msgs2__msg__String2String__Sequence__fini(&msg->scalable_multimap);
}

bool
deva_planning_msgs2__msg__PlanningObstacle__are_equal(const deva_planning_msgs2__msg__PlanningObstacle * lhs, const deva_planning_msgs2__msg__PlanningObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // current_line_id
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->current_line_id), &(rhs->current_line_id)))
  {
    return false;
  }
  // target_line_id
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->target_line_id), &(rhs->target_line_id)))
  {
    return false;
  }
  // decision_tag
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->decision_tag), &(rhs->decision_tag)))
  {
    return false;
  }
  // scene_understanding
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->scene_understanding), &(rhs->scene_understanding)))
  {
    return false;
  }
  // cutin_time
  if (lhs->cutin_time != rhs->cutin_time) {
    return false;
  }
  // cutout_time
  if (lhs->cutout_time != rhs->cutout_time) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // ttc
  if (lhs->ttc != rhs->ttc) {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  // scalable_flags
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->scalable_flags), &(rhs->scalable_flags)))
  {
    return false;
  }
  // scalable_multimap
  if (!deva_planning_msgs2__msg__String2String__Sequence__are_equal(
      &(lhs->scalable_multimap), &(rhs->scalable_multimap)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__PlanningObstacle__copy(
  const deva_planning_msgs2__msg__PlanningObstacle * input,
  deva_planning_msgs2__msg__PlanningObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // current_line_id
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->current_line_id), &(output->current_line_id)))
  {
    return false;
  }
  // target_line_id
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->target_line_id), &(output->target_line_id)))
  {
    return false;
  }
  // decision_tag
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->decision_tag), &(output->decision_tag)))
  {
    return false;
  }
  // scene_understanding
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->scene_understanding), &(output->scene_understanding)))
  {
    return false;
  }
  // cutin_time
  output->cutin_time = input->cutin_time;
  // cutout_time
  output->cutout_time = input->cutout_time;
  // distance
  output->distance = input->distance;
  // ttc
  output->ttc = input->ttc;
  // priority
  output->priority = input->priority;
  // scalable_flags
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->scalable_flags), &(output->scalable_flags)))
  {
    return false;
  }
  // scalable_multimap
  if (!deva_planning_msgs2__msg__String2String__Sequence__copy(
      &(input->scalable_multimap), &(output->scalable_multimap)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs2__msg__PlanningObstacle *
deva_planning_msgs2__msg__PlanningObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PlanningObstacle * msg = (deva_planning_msgs2__msg__PlanningObstacle *)allocator.allocate(sizeof(deva_planning_msgs2__msg__PlanningObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__PlanningObstacle));
  bool success = deva_planning_msgs2__msg__PlanningObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__PlanningObstacle__destroy(deva_planning_msgs2__msg__PlanningObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__PlanningObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__PlanningObstacle__Sequence__init(deva_planning_msgs2__msg__PlanningObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PlanningObstacle * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__PlanningObstacle *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__PlanningObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__PlanningObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__PlanningObstacle__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__PlanningObstacle__Sequence__fini(deva_planning_msgs2__msg__PlanningObstacle__Sequence * array)
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
      deva_planning_msgs2__msg__PlanningObstacle__fini(&array->data[i]);
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

deva_planning_msgs2__msg__PlanningObstacle__Sequence *
deva_planning_msgs2__msg__PlanningObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PlanningObstacle__Sequence * array = (deva_planning_msgs2__msg__PlanningObstacle__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__PlanningObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__PlanningObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__PlanningObstacle__Sequence__destroy(deva_planning_msgs2__msg__PlanningObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__PlanningObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__PlanningObstacle__Sequence__are_equal(const deva_planning_msgs2__msg__PlanningObstacle__Sequence * lhs, const deva_planning_msgs2__msg__PlanningObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__PlanningObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__PlanningObstacle__Sequence__copy(
  const deva_planning_msgs2__msg__PlanningObstacle__Sequence * input,
  deva_planning_msgs2__msg__PlanningObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__PlanningObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__PlanningObstacle * data =
      (deva_planning_msgs2__msg__PlanningObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__PlanningObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__PlanningObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__PlanningObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
