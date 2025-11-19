// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_mdriver_msgs:msg/MWorld.idl
// generated code does not contain a copyright notice
#include "deva_mdriver_msgs/msg/detail/m_world__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `all_obstacles`
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__functions.h"
// Member `nudge_buffer`
#include "deva_mdriver_msgs/msg/detail/nudge_buffer__functions.h"
// Member `ego_ref_v`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `mdriver_meta_actions`
#include "deva_mdriver_msgs/msg/detail/mdriver_meta_action__functions.h"
// Member `refline_points`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
deva_mdriver_msgs__msg__MWorld__init(deva_mdriver_msgs__msg__MWorld * msg)
{
  if (!msg) {
    return false;
  }
  // world_id
  // meta_action
  // all_obstacles
  if (!deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__init(&msg->all_obstacles, 0)) {
    deva_mdriver_msgs__msg__MWorld__fini(msg);
    return false;
  }
  // nudge_buffer
  if (!deva_mdriver_msgs__msg__NudgeBuffer__init(&msg->nudge_buffer)) {
    deva_mdriver_msgs__msg__MWorld__fini(msg);
    return false;
  }
  // ego_ref_v
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ego_ref_v, 0)) {
    deva_mdriver_msgs__msg__MWorld__fini(msg);
    return false;
  }
  // mdriver_meta_actions
  if (!deva_mdriver_msgs__msg__MdriverMetaAction__Sequence__init(&msg->mdriver_meta_actions, 0)) {
    deva_mdriver_msgs__msg__MWorld__fini(msg);
    return false;
  }
  // score
  // refline_points
  for (size_t i = 0; i < 17; ++i) {
    if (!geometry_msgs__msg__Point__init(&msg->refline_points[i])) {
      deva_mdriver_msgs__msg__MWorld__fini(msg);
      return false;
    }
  }
  return true;
}

void
deva_mdriver_msgs__msg__MWorld__fini(deva_mdriver_msgs__msg__MWorld * msg)
{
  if (!msg) {
    return;
  }
  // world_id
  // meta_action
  // all_obstacles
  deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__fini(&msg->all_obstacles);
  // nudge_buffer
  deva_mdriver_msgs__msg__NudgeBuffer__fini(&msg->nudge_buffer);
  // ego_ref_v
  rosidl_runtime_c__double__Sequence__fini(&msg->ego_ref_v);
  // mdriver_meta_actions
  deva_mdriver_msgs__msg__MdriverMetaAction__Sequence__fini(&msg->mdriver_meta_actions);
  // score
  // refline_points
  for (size_t i = 0; i < 17; ++i) {
    geometry_msgs__msg__Point__fini(&msg->refline_points[i]);
  }
}

bool
deva_mdriver_msgs__msg__MWorld__are_equal(const deva_mdriver_msgs__msg__MWorld * lhs, const deva_mdriver_msgs__msg__MWorld * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // world_id
  if (lhs->world_id != rhs->world_id) {
    return false;
  }
  // meta_action
  if (lhs->meta_action != rhs->meta_action) {
    return false;
  }
  // all_obstacles
  if (!deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__are_equal(
      &(lhs->all_obstacles), &(rhs->all_obstacles)))
  {
    return false;
  }
  // nudge_buffer
  if (!deva_mdriver_msgs__msg__NudgeBuffer__are_equal(
      &(lhs->nudge_buffer), &(rhs->nudge_buffer)))
  {
    return false;
  }
  // ego_ref_v
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ego_ref_v), &(rhs->ego_ref_v)))
  {
    return false;
  }
  // mdriver_meta_actions
  if (!deva_mdriver_msgs__msg__MdriverMetaAction__Sequence__are_equal(
      &(lhs->mdriver_meta_actions), &(rhs->mdriver_meta_actions)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // refline_points
  for (size_t i = 0; i < 17; ++i) {
    if (!geometry_msgs__msg__Point__are_equal(
        &(lhs->refline_points[i]), &(rhs->refline_points[i])))
    {
      return false;
    }
  }
  return true;
}

bool
deva_mdriver_msgs__msg__MWorld__copy(
  const deva_mdriver_msgs__msg__MWorld * input,
  deva_mdriver_msgs__msg__MWorld * output)
{
  if (!input || !output) {
    return false;
  }
  // world_id
  output->world_id = input->world_id;
  // meta_action
  output->meta_action = input->meta_action;
  // all_obstacles
  if (!deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__copy(
      &(input->all_obstacles), &(output->all_obstacles)))
  {
    return false;
  }
  // nudge_buffer
  if (!deva_mdriver_msgs__msg__NudgeBuffer__copy(
      &(input->nudge_buffer), &(output->nudge_buffer)))
  {
    return false;
  }
  // ego_ref_v
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ego_ref_v), &(output->ego_ref_v)))
  {
    return false;
  }
  // mdriver_meta_actions
  if (!deva_mdriver_msgs__msg__MdriverMetaAction__Sequence__copy(
      &(input->mdriver_meta_actions), &(output->mdriver_meta_actions)))
  {
    return false;
  }
  // score
  output->score = input->score;
  // refline_points
  for (size_t i = 0; i < 17; ++i) {
    if (!geometry_msgs__msg__Point__copy(
        &(input->refline_points[i]), &(output->refline_points[i])))
    {
      return false;
    }
  }
  return true;
}

deva_mdriver_msgs__msg__MWorld *
deva_mdriver_msgs__msg__MWorld__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__MWorld * msg = (deva_mdriver_msgs__msg__MWorld *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__MWorld), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_mdriver_msgs__msg__MWorld));
  bool success = deva_mdriver_msgs__msg__MWorld__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_mdriver_msgs__msg__MWorld__destroy(deva_mdriver_msgs__msg__MWorld * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_mdriver_msgs__msg__MWorld__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_mdriver_msgs__msg__MWorld__Sequence__init(deva_mdriver_msgs__msg__MWorld__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__MWorld * data = NULL;

  if (size) {
    data = (deva_mdriver_msgs__msg__MWorld *)allocator.zero_allocate(size, sizeof(deva_mdriver_msgs__msg__MWorld), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_mdriver_msgs__msg__MWorld__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_mdriver_msgs__msg__MWorld__fini(&data[i - 1]);
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
deva_mdriver_msgs__msg__MWorld__Sequence__fini(deva_mdriver_msgs__msg__MWorld__Sequence * array)
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
      deva_mdriver_msgs__msg__MWorld__fini(&array->data[i]);
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

deva_mdriver_msgs__msg__MWorld__Sequence *
deva_mdriver_msgs__msg__MWorld__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__MWorld__Sequence * array = (deva_mdriver_msgs__msg__MWorld__Sequence *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__MWorld__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_mdriver_msgs__msg__MWorld__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_mdriver_msgs__msg__MWorld__Sequence__destroy(deva_mdriver_msgs__msg__MWorld__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_mdriver_msgs__msg__MWorld__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_mdriver_msgs__msg__MWorld__Sequence__are_equal(const deva_mdriver_msgs__msg__MWorld__Sequence * lhs, const deva_mdriver_msgs__msg__MWorld__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_mdriver_msgs__msg__MWorld__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_mdriver_msgs__msg__MWorld__Sequence__copy(
  const deva_mdriver_msgs__msg__MWorld__Sequence * input,
  deva_mdriver_msgs__msg__MWorld__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_mdriver_msgs__msg__MWorld);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_mdriver_msgs__msg__MWorld * data =
      (deva_mdriver_msgs__msg__MWorld *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_mdriver_msgs__msg__MWorld__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_mdriver_msgs__msg__MWorld__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_mdriver_msgs__msg__MWorld__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
