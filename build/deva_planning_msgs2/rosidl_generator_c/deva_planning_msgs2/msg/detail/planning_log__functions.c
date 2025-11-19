// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/PlanningLog.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/planning_log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `localization`
// Member `chassis`
// Member `pad_message`
// Member `pull_over_msg`
// Member `traffic_poles`
// Member `apollo_decision`
// Member `prediction`
// Member `megmap_proto`
// Member `state_context`
// Member `target_trajectory`
// Member `speed_solver_debug_sequence`
// Member `trajectory_solver_debug_sequence`
// Member `planning_log`
// Member `navigator_routing`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `scalable_stream`
#include "deva_planning_msgs2/msg/detail/string2_u_int__functions.h"
// Member `scalable_int`
#include "deva_planning_msgs2/msg/detail/string2_int__functions.h"
// Member `scalable_double`
#include "deva_planning_msgs2/msg/detail/string2_double__functions.h"
// Member `scalable_bool`
#include "deva_planning_msgs2/msg/detail/string2_bool__functions.h"

bool
deva_planning_msgs2__msg__PlanningLog__init(deva_planning_msgs2__msg__PlanningLog * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // localization
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->localization, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // chassis
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->chassis, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // pad_message
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->pad_message, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // pull_over_msg
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->pull_over_msg, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // traffic_poles
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->traffic_poles, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // apollo_decision
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->apollo_decision, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // prediction
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->prediction, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // megmap_proto
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->megmap_proto, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // state_context
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->state_context, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // target_trajectory
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->target_trajectory, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // speed_solver_debug_sequence
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->speed_solver_debug_sequence, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // trajectory_solver_debug_sequence
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->trajectory_solver_debug_sequence, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // planning_log
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->planning_log, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // navigator_routing
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->navigator_routing, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // scalable_stream
  if (!deva_planning_msgs2__msg__String2UInt__Sequence__init(&msg->scalable_stream, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // scalable_int
  if (!deva_planning_msgs2__msg__String2Int__Sequence__init(&msg->scalable_int, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // scalable_double
  if (!deva_planning_msgs2__msg__String2Double__Sequence__init(&msg->scalable_double, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  // scalable_bool
  if (!deva_planning_msgs2__msg__String2Bool__Sequence__init(&msg->scalable_bool, 0)) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs2__msg__PlanningLog__fini(deva_planning_msgs2__msg__PlanningLog * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // localization
  rosidl_runtime_c__uint8__Sequence__fini(&msg->localization);
  // chassis
  rosidl_runtime_c__uint8__Sequence__fini(&msg->chassis);
  // pad_message
  rosidl_runtime_c__uint8__Sequence__fini(&msg->pad_message);
  // pull_over_msg
  rosidl_runtime_c__uint8__Sequence__fini(&msg->pull_over_msg);
  // traffic_poles
  rosidl_runtime_c__uint8__Sequence__fini(&msg->traffic_poles);
  // apollo_decision
  rosidl_runtime_c__uint8__Sequence__fini(&msg->apollo_decision);
  // prediction
  rosidl_runtime_c__uint8__Sequence__fini(&msg->prediction);
  // megmap_proto
  rosidl_runtime_c__uint8__Sequence__fini(&msg->megmap_proto);
  // state_context
  rosidl_runtime_c__uint8__Sequence__fini(&msg->state_context);
  // target_trajectory
  rosidl_runtime_c__uint8__Sequence__fini(&msg->target_trajectory);
  // speed_solver_debug_sequence
  rosidl_runtime_c__uint8__Sequence__fini(&msg->speed_solver_debug_sequence);
  // trajectory_solver_debug_sequence
  rosidl_runtime_c__uint8__Sequence__fini(&msg->trajectory_solver_debug_sequence);
  // planning_log
  rosidl_runtime_c__uint8__Sequence__fini(&msg->planning_log);
  // navigator_routing
  rosidl_runtime_c__uint8__Sequence__fini(&msg->navigator_routing);
  // scalable_stream
  deva_planning_msgs2__msg__String2UInt__Sequence__fini(&msg->scalable_stream);
  // scalable_int
  deva_planning_msgs2__msg__String2Int__Sequence__fini(&msg->scalable_int);
  // scalable_double
  deva_planning_msgs2__msg__String2Double__Sequence__fini(&msg->scalable_double);
  // scalable_bool
  deva_planning_msgs2__msg__String2Bool__Sequence__fini(&msg->scalable_bool);
}

bool
deva_planning_msgs2__msg__PlanningLog__are_equal(const deva_planning_msgs2__msg__PlanningLog * lhs, const deva_planning_msgs2__msg__PlanningLog * rhs)
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
  // localization
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->localization), &(rhs->localization)))
  {
    return false;
  }
  // chassis
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->chassis), &(rhs->chassis)))
  {
    return false;
  }
  // pad_message
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->pad_message), &(rhs->pad_message)))
  {
    return false;
  }
  // pull_over_msg
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->pull_over_msg), &(rhs->pull_over_msg)))
  {
    return false;
  }
  // traffic_poles
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->traffic_poles), &(rhs->traffic_poles)))
  {
    return false;
  }
  // apollo_decision
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->apollo_decision), &(rhs->apollo_decision)))
  {
    return false;
  }
  // prediction
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->prediction), &(rhs->prediction)))
  {
    return false;
  }
  // megmap_proto
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->megmap_proto), &(rhs->megmap_proto)))
  {
    return false;
  }
  // state_context
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->state_context), &(rhs->state_context)))
  {
    return false;
  }
  // target_trajectory
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->target_trajectory), &(rhs->target_trajectory)))
  {
    return false;
  }
  // speed_solver_debug_sequence
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->speed_solver_debug_sequence), &(rhs->speed_solver_debug_sequence)))
  {
    return false;
  }
  // trajectory_solver_debug_sequence
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->trajectory_solver_debug_sequence), &(rhs->trajectory_solver_debug_sequence)))
  {
    return false;
  }
  // planning_log
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->planning_log), &(rhs->planning_log)))
  {
    return false;
  }
  // navigator_routing
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->navigator_routing), &(rhs->navigator_routing)))
  {
    return false;
  }
  // scalable_stream
  if (!deva_planning_msgs2__msg__String2UInt__Sequence__are_equal(
      &(lhs->scalable_stream), &(rhs->scalable_stream)))
  {
    return false;
  }
  // scalable_int
  if (!deva_planning_msgs2__msg__String2Int__Sequence__are_equal(
      &(lhs->scalable_int), &(rhs->scalable_int)))
  {
    return false;
  }
  // scalable_double
  if (!deva_planning_msgs2__msg__String2Double__Sequence__are_equal(
      &(lhs->scalable_double), &(rhs->scalable_double)))
  {
    return false;
  }
  // scalable_bool
  if (!deva_planning_msgs2__msg__String2Bool__Sequence__are_equal(
      &(lhs->scalable_bool), &(rhs->scalable_bool)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__PlanningLog__copy(
  const deva_planning_msgs2__msg__PlanningLog * input,
  deva_planning_msgs2__msg__PlanningLog * output)
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
  // localization
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->localization), &(output->localization)))
  {
    return false;
  }
  // chassis
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->chassis), &(output->chassis)))
  {
    return false;
  }
  // pad_message
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->pad_message), &(output->pad_message)))
  {
    return false;
  }
  // pull_over_msg
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->pull_over_msg), &(output->pull_over_msg)))
  {
    return false;
  }
  // traffic_poles
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->traffic_poles), &(output->traffic_poles)))
  {
    return false;
  }
  // apollo_decision
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->apollo_decision), &(output->apollo_decision)))
  {
    return false;
  }
  // prediction
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->prediction), &(output->prediction)))
  {
    return false;
  }
  // megmap_proto
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->megmap_proto), &(output->megmap_proto)))
  {
    return false;
  }
  // state_context
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->state_context), &(output->state_context)))
  {
    return false;
  }
  // target_trajectory
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->target_trajectory), &(output->target_trajectory)))
  {
    return false;
  }
  // speed_solver_debug_sequence
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->speed_solver_debug_sequence), &(output->speed_solver_debug_sequence)))
  {
    return false;
  }
  // trajectory_solver_debug_sequence
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->trajectory_solver_debug_sequence), &(output->trajectory_solver_debug_sequence)))
  {
    return false;
  }
  // planning_log
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->planning_log), &(output->planning_log)))
  {
    return false;
  }
  // navigator_routing
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->navigator_routing), &(output->navigator_routing)))
  {
    return false;
  }
  // scalable_stream
  if (!deva_planning_msgs2__msg__String2UInt__Sequence__copy(
      &(input->scalable_stream), &(output->scalable_stream)))
  {
    return false;
  }
  // scalable_int
  if (!deva_planning_msgs2__msg__String2Int__Sequence__copy(
      &(input->scalable_int), &(output->scalable_int)))
  {
    return false;
  }
  // scalable_double
  if (!deva_planning_msgs2__msg__String2Double__Sequence__copy(
      &(input->scalable_double), &(output->scalable_double)))
  {
    return false;
  }
  // scalable_bool
  if (!deva_planning_msgs2__msg__String2Bool__Sequence__copy(
      &(input->scalable_bool), &(output->scalable_bool)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs2__msg__PlanningLog *
deva_planning_msgs2__msg__PlanningLog__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PlanningLog * msg = (deva_planning_msgs2__msg__PlanningLog *)allocator.allocate(sizeof(deva_planning_msgs2__msg__PlanningLog), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__PlanningLog));
  bool success = deva_planning_msgs2__msg__PlanningLog__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__PlanningLog__destroy(deva_planning_msgs2__msg__PlanningLog * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__PlanningLog__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__PlanningLog__Sequence__init(deva_planning_msgs2__msg__PlanningLog__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PlanningLog * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__PlanningLog *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__PlanningLog), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__PlanningLog__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__PlanningLog__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__PlanningLog__Sequence__fini(deva_planning_msgs2__msg__PlanningLog__Sequence * array)
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
      deva_planning_msgs2__msg__PlanningLog__fini(&array->data[i]);
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

deva_planning_msgs2__msg__PlanningLog__Sequence *
deva_planning_msgs2__msg__PlanningLog__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PlanningLog__Sequence * array = (deva_planning_msgs2__msg__PlanningLog__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__PlanningLog__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__PlanningLog__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__PlanningLog__Sequence__destroy(deva_planning_msgs2__msg__PlanningLog__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__PlanningLog__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__PlanningLog__Sequence__are_equal(const deva_planning_msgs2__msg__PlanningLog__Sequence * lhs, const deva_planning_msgs2__msg__PlanningLog__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__PlanningLog__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__PlanningLog__Sequence__copy(
  const deva_planning_msgs2__msg__PlanningLog__Sequence * input,
  deva_planning_msgs2__msg__PlanningLog__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__PlanningLog);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__PlanningLog * data =
      (deva_planning_msgs2__msg__PlanningLog *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__PlanningLog__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__PlanningLog__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__PlanningLog__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
