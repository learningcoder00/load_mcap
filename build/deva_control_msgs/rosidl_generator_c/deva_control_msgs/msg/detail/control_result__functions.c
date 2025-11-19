// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_control_msgs:msg/ControlResult.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/control_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `protocol_version`
// Member `control_ready_false_reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `steer_angle_rate_limit`
// Member `steer_tq_limit`
// Member `longit_tq_limit`
// Member `longit_jerk_limit`
#include "deva_control_msgs/msg/detail/control_valid_limit__functions.h"

bool
deva_control_msgs__msg__ControlResult__init(deva_control_msgs__msg__ControlResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_control_msgs__msg__ControlResult__fini(msg);
    return false;
  }
  // protocol_version
  if (!rosidl_runtime_c__String__init(&msg->protocol_version)) {
    deva_control_msgs__msg__ControlResult__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->protocol_version, "2.10");
    if (!success) {
      goto abort_init_0;
    }
  }
  // late_mode
  // eps_torque
  // front_wheel_target
  // steering_target
  // long_mode
  // speed
  // acceleration
  // longit_torque
  // target_distance
  // throttle
  // brake
  // limit_command_enable
  msg->limit_command_enable = false;
  // steer_angle_rate_limit
  if (!deva_control_msgs__msg__ControlValidLimit__init(&msg->steer_angle_rate_limit)) {
    deva_control_msgs__msg__ControlResult__fini(msg);
    return false;
  }
  // steer_tq_limit
  if (!deva_control_msgs__msg__ControlValidLimit__init(&msg->steer_tq_limit)) {
    deva_control_msgs__msg__ControlResult__fini(msg);
    return false;
  }
  // longit_tq_limit
  if (!deva_control_msgs__msg__ControlValidLimit__init(&msg->longit_tq_limit)) {
    deva_control_msgs__msg__ControlResult__fini(msg);
    return false;
  }
  // longit_jerk_limit
  if (!deva_control_msgs__msg__ControlValidLimit__init(&msg->longit_jerk_limit)) {
    deva_control_msgs__msg__ControlResult__fini(msg);
    return false;
  }
  // control_ready_false_reason
  if (!rosidl_runtime_c__String__init(&msg->control_ready_false_reason)) {
    deva_control_msgs__msg__ControlResult__fini(msg);
    return false;
  }
  // ready
  // control_mode
  // gear_en
  // gear_cmd_val
  // lateral_en
  // longitudinal_en
  // steering_rate
  return true;
abort_init_0:
  return false;
}

void
deva_control_msgs__msg__ControlResult__fini(deva_control_msgs__msg__ControlResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // protocol_version
  rosidl_runtime_c__String__fini(&msg->protocol_version);
  // late_mode
  // eps_torque
  // front_wheel_target
  // steering_target
  // long_mode
  // speed
  // acceleration
  // longit_torque
  // target_distance
  // throttle
  // brake
  // limit_command_enable
  // steer_angle_rate_limit
  deva_control_msgs__msg__ControlValidLimit__fini(&msg->steer_angle_rate_limit);
  // steer_tq_limit
  deva_control_msgs__msg__ControlValidLimit__fini(&msg->steer_tq_limit);
  // longit_tq_limit
  deva_control_msgs__msg__ControlValidLimit__fini(&msg->longit_tq_limit);
  // longit_jerk_limit
  deva_control_msgs__msg__ControlValidLimit__fini(&msg->longit_jerk_limit);
  // control_ready_false_reason
  rosidl_runtime_c__String__fini(&msg->control_ready_false_reason);
  // ready
  // control_mode
  // gear_en
  // gear_cmd_val
  // lateral_en
  // longitudinal_en
  // steering_rate
}

bool
deva_control_msgs__msg__ControlResult__are_equal(const deva_control_msgs__msg__ControlResult * lhs, const deva_control_msgs__msg__ControlResult * rhs)
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
  // protocol_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->protocol_version), &(rhs->protocol_version)))
  {
    return false;
  }
  // late_mode
  if (lhs->late_mode != rhs->late_mode) {
    return false;
  }
  // eps_torque
  if (lhs->eps_torque != rhs->eps_torque) {
    return false;
  }
  // front_wheel_target
  if (lhs->front_wheel_target != rhs->front_wheel_target) {
    return false;
  }
  // steering_target
  if (lhs->steering_target != rhs->steering_target) {
    return false;
  }
  // long_mode
  if (lhs->long_mode != rhs->long_mode) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  // longit_torque
  if (lhs->longit_torque != rhs->longit_torque) {
    return false;
  }
  // target_distance
  if (lhs->target_distance != rhs->target_distance) {
    return false;
  }
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  // brake
  if (lhs->brake != rhs->brake) {
    return false;
  }
  // limit_command_enable
  if (lhs->limit_command_enable != rhs->limit_command_enable) {
    return false;
  }
  // steer_angle_rate_limit
  if (!deva_control_msgs__msg__ControlValidLimit__are_equal(
      &(lhs->steer_angle_rate_limit), &(rhs->steer_angle_rate_limit)))
  {
    return false;
  }
  // steer_tq_limit
  if (!deva_control_msgs__msg__ControlValidLimit__are_equal(
      &(lhs->steer_tq_limit), &(rhs->steer_tq_limit)))
  {
    return false;
  }
  // longit_tq_limit
  if (!deva_control_msgs__msg__ControlValidLimit__are_equal(
      &(lhs->longit_tq_limit), &(rhs->longit_tq_limit)))
  {
    return false;
  }
  // longit_jerk_limit
  if (!deva_control_msgs__msg__ControlValidLimit__are_equal(
      &(lhs->longit_jerk_limit), &(rhs->longit_jerk_limit)))
  {
    return false;
  }
  // control_ready_false_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->control_ready_false_reason), &(rhs->control_ready_false_reason)))
  {
    return false;
  }
  // ready
  if (lhs->ready != rhs->ready) {
    return false;
  }
  // control_mode
  if (lhs->control_mode != rhs->control_mode) {
    return false;
  }
  // gear_en
  if (lhs->gear_en != rhs->gear_en) {
    return false;
  }
  // gear_cmd_val
  if (lhs->gear_cmd_val != rhs->gear_cmd_val) {
    return false;
  }
  // lateral_en
  if (lhs->lateral_en != rhs->lateral_en) {
    return false;
  }
  // longitudinal_en
  if (lhs->longitudinal_en != rhs->longitudinal_en) {
    return false;
  }
  // steering_rate
  if (lhs->steering_rate != rhs->steering_rate) {
    return false;
  }
  return true;
}

bool
deva_control_msgs__msg__ControlResult__copy(
  const deva_control_msgs__msg__ControlResult * input,
  deva_control_msgs__msg__ControlResult * output)
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
  // protocol_version
  if (!rosidl_runtime_c__String__copy(
      &(input->protocol_version), &(output->protocol_version)))
  {
    return false;
  }
  // late_mode
  output->late_mode = input->late_mode;
  // eps_torque
  output->eps_torque = input->eps_torque;
  // front_wheel_target
  output->front_wheel_target = input->front_wheel_target;
  // steering_target
  output->steering_target = input->steering_target;
  // long_mode
  output->long_mode = input->long_mode;
  // speed
  output->speed = input->speed;
  // acceleration
  output->acceleration = input->acceleration;
  // longit_torque
  output->longit_torque = input->longit_torque;
  // target_distance
  output->target_distance = input->target_distance;
  // throttle
  output->throttle = input->throttle;
  // brake
  output->brake = input->brake;
  // limit_command_enable
  output->limit_command_enable = input->limit_command_enable;
  // steer_angle_rate_limit
  if (!deva_control_msgs__msg__ControlValidLimit__copy(
      &(input->steer_angle_rate_limit), &(output->steer_angle_rate_limit)))
  {
    return false;
  }
  // steer_tq_limit
  if (!deva_control_msgs__msg__ControlValidLimit__copy(
      &(input->steer_tq_limit), &(output->steer_tq_limit)))
  {
    return false;
  }
  // longit_tq_limit
  if (!deva_control_msgs__msg__ControlValidLimit__copy(
      &(input->longit_tq_limit), &(output->longit_tq_limit)))
  {
    return false;
  }
  // longit_jerk_limit
  if (!deva_control_msgs__msg__ControlValidLimit__copy(
      &(input->longit_jerk_limit), &(output->longit_jerk_limit)))
  {
    return false;
  }
  // control_ready_false_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->control_ready_false_reason), &(output->control_ready_false_reason)))
  {
    return false;
  }
  // ready
  output->ready = input->ready;
  // control_mode
  output->control_mode = input->control_mode;
  // gear_en
  output->gear_en = input->gear_en;
  // gear_cmd_val
  output->gear_cmd_val = input->gear_cmd_val;
  // lateral_en
  output->lateral_en = input->lateral_en;
  // longitudinal_en
  output->longitudinal_en = input->longitudinal_en;
  // steering_rate
  output->steering_rate = input->steering_rate;
  return true;
}

deva_control_msgs__msg__ControlResult *
deva_control_msgs__msg__ControlResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__ControlResult * msg = (deva_control_msgs__msg__ControlResult *)allocator.allocate(sizeof(deva_control_msgs__msg__ControlResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_control_msgs__msg__ControlResult));
  bool success = deva_control_msgs__msg__ControlResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_control_msgs__msg__ControlResult__destroy(deva_control_msgs__msg__ControlResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_control_msgs__msg__ControlResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_control_msgs__msg__ControlResult__Sequence__init(deva_control_msgs__msg__ControlResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__ControlResult * data = NULL;

  if (size) {
    data = (deva_control_msgs__msg__ControlResult *)allocator.zero_allocate(size, sizeof(deva_control_msgs__msg__ControlResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_control_msgs__msg__ControlResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_control_msgs__msg__ControlResult__fini(&data[i - 1]);
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
deva_control_msgs__msg__ControlResult__Sequence__fini(deva_control_msgs__msg__ControlResult__Sequence * array)
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
      deva_control_msgs__msg__ControlResult__fini(&array->data[i]);
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

deva_control_msgs__msg__ControlResult__Sequence *
deva_control_msgs__msg__ControlResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__ControlResult__Sequence * array = (deva_control_msgs__msg__ControlResult__Sequence *)allocator.allocate(sizeof(deva_control_msgs__msg__ControlResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_control_msgs__msg__ControlResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_control_msgs__msg__ControlResult__Sequence__destroy(deva_control_msgs__msg__ControlResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_control_msgs__msg__ControlResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_control_msgs__msg__ControlResult__Sequence__are_equal(const deva_control_msgs__msg__ControlResult__Sequence * lhs, const deva_control_msgs__msg__ControlResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_control_msgs__msg__ControlResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_control_msgs__msg__ControlResult__Sequence__copy(
  const deva_control_msgs__msg__ControlResult__Sequence * input,
  deva_control_msgs__msg__ControlResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_control_msgs__msg__ControlResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_control_msgs__msg__ControlResult * data =
      (deva_control_msgs__msg__ControlResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_control_msgs__msg__ControlResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_control_msgs__msg__ControlResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_control_msgs__msg__ControlResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
