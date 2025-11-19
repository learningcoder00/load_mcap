// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_control_msgs:msg/ControlMonitorMsg.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/control_monitor_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `openloop_trajectory`
#include "deva_planning_msgs2/msg/detail/planning_trajectory__functions.h"

bool
deva_control_msgs__msg__ControlMonitorMsg__init(deva_control_msgs__msg__ControlMonitorMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_control_msgs__msg__ControlMonitorMsg__fini(msg);
    return false;
  }
  // in_auto_drive
  // chs_yaw_rate
  // chs_speed
  // chs_steer
  // chs_longit_acc
  // chs_longit_torque
  // chs_gear
  // loc_x
  // loc_y
  // loc_z
  // loc_speed
  // loc_acc
  // loc_heading
  // loc_pitch
  // preview_path_x
  // preview_path_y
  // preview_path_theta
  // matched_path_x
  // matched_path_y
  // matched_path_theta
  // matched_path_kappa
  // matched_path_s
  // matched_path_v
  // matched_path_a
  // current_station
  // station_ref
  // station_error
  // current_speed
  // speed_ref
  // preview_speed_ref
  // speed_error
  // acc_ref
  // preview_acc_ref
  // actual_acc
  // lat_d
  // lat_d_rate
  // heading_d_rate
  // heading_d
  // pre_lat_d
  // pre_lat_theta
  // cmd_steer
  // cmd_acc
  // control_computation_time
  // loc_header_time
  // chas_header_time
  // planning_header_time
  // openloop_trajectory
  if (!deva_planning_msgs2__msg__PlanningTrajectory__init(&msg->openloop_trajectory)) {
    deva_control_msgs__msg__ControlMonitorMsg__fini(msg);
    return false;
  }
  return true;
}

void
deva_control_msgs__msg__ControlMonitorMsg__fini(deva_control_msgs__msg__ControlMonitorMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // in_auto_drive
  // chs_yaw_rate
  // chs_speed
  // chs_steer
  // chs_longit_acc
  // chs_longit_torque
  // chs_gear
  // loc_x
  // loc_y
  // loc_z
  // loc_speed
  // loc_acc
  // loc_heading
  // loc_pitch
  // preview_path_x
  // preview_path_y
  // preview_path_theta
  // matched_path_x
  // matched_path_y
  // matched_path_theta
  // matched_path_kappa
  // matched_path_s
  // matched_path_v
  // matched_path_a
  // current_station
  // station_ref
  // station_error
  // current_speed
  // speed_ref
  // preview_speed_ref
  // speed_error
  // acc_ref
  // preview_acc_ref
  // actual_acc
  // lat_d
  // lat_d_rate
  // heading_d_rate
  // heading_d
  // pre_lat_d
  // pre_lat_theta
  // cmd_steer
  // cmd_acc
  // control_computation_time
  // loc_header_time
  // chas_header_time
  // planning_header_time
  // openloop_trajectory
  deva_planning_msgs2__msg__PlanningTrajectory__fini(&msg->openloop_trajectory);
}

bool
deva_control_msgs__msg__ControlMonitorMsg__are_equal(const deva_control_msgs__msg__ControlMonitorMsg * lhs, const deva_control_msgs__msg__ControlMonitorMsg * rhs)
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
  // in_auto_drive
  if (lhs->in_auto_drive != rhs->in_auto_drive) {
    return false;
  }
  // chs_yaw_rate
  if (lhs->chs_yaw_rate != rhs->chs_yaw_rate) {
    return false;
  }
  // chs_speed
  if (lhs->chs_speed != rhs->chs_speed) {
    return false;
  }
  // chs_steer
  if (lhs->chs_steer != rhs->chs_steer) {
    return false;
  }
  // chs_longit_acc
  if (lhs->chs_longit_acc != rhs->chs_longit_acc) {
    return false;
  }
  // chs_longit_torque
  if (lhs->chs_longit_torque != rhs->chs_longit_torque) {
    return false;
  }
  // chs_gear
  if (lhs->chs_gear != rhs->chs_gear) {
    return false;
  }
  // loc_x
  if (lhs->loc_x != rhs->loc_x) {
    return false;
  }
  // loc_y
  if (lhs->loc_y != rhs->loc_y) {
    return false;
  }
  // loc_z
  if (lhs->loc_z != rhs->loc_z) {
    return false;
  }
  // loc_speed
  if (lhs->loc_speed != rhs->loc_speed) {
    return false;
  }
  // loc_acc
  if (lhs->loc_acc != rhs->loc_acc) {
    return false;
  }
  // loc_heading
  if (lhs->loc_heading != rhs->loc_heading) {
    return false;
  }
  // loc_pitch
  if (lhs->loc_pitch != rhs->loc_pitch) {
    return false;
  }
  // preview_path_x
  if (lhs->preview_path_x != rhs->preview_path_x) {
    return false;
  }
  // preview_path_y
  if (lhs->preview_path_y != rhs->preview_path_y) {
    return false;
  }
  // preview_path_theta
  if (lhs->preview_path_theta != rhs->preview_path_theta) {
    return false;
  }
  // matched_path_x
  if (lhs->matched_path_x != rhs->matched_path_x) {
    return false;
  }
  // matched_path_y
  if (lhs->matched_path_y != rhs->matched_path_y) {
    return false;
  }
  // matched_path_theta
  if (lhs->matched_path_theta != rhs->matched_path_theta) {
    return false;
  }
  // matched_path_kappa
  if (lhs->matched_path_kappa != rhs->matched_path_kappa) {
    return false;
  }
  // matched_path_s
  if (lhs->matched_path_s != rhs->matched_path_s) {
    return false;
  }
  // matched_path_v
  if (lhs->matched_path_v != rhs->matched_path_v) {
    return false;
  }
  // matched_path_a
  if (lhs->matched_path_a != rhs->matched_path_a) {
    return false;
  }
  // current_station
  if (lhs->current_station != rhs->current_station) {
    return false;
  }
  // station_ref
  if (lhs->station_ref != rhs->station_ref) {
    return false;
  }
  // station_error
  if (lhs->station_error != rhs->station_error) {
    return false;
  }
  // current_speed
  if (lhs->current_speed != rhs->current_speed) {
    return false;
  }
  // speed_ref
  if (lhs->speed_ref != rhs->speed_ref) {
    return false;
  }
  // preview_speed_ref
  if (lhs->preview_speed_ref != rhs->preview_speed_ref) {
    return false;
  }
  // speed_error
  if (lhs->speed_error != rhs->speed_error) {
    return false;
  }
  // acc_ref
  if (lhs->acc_ref != rhs->acc_ref) {
    return false;
  }
  // preview_acc_ref
  if (lhs->preview_acc_ref != rhs->preview_acc_ref) {
    return false;
  }
  // actual_acc
  if (lhs->actual_acc != rhs->actual_acc) {
    return false;
  }
  // lat_d
  if (lhs->lat_d != rhs->lat_d) {
    return false;
  }
  // lat_d_rate
  if (lhs->lat_d_rate != rhs->lat_d_rate) {
    return false;
  }
  // heading_d_rate
  if (lhs->heading_d_rate != rhs->heading_d_rate) {
    return false;
  }
  // heading_d
  if (lhs->heading_d != rhs->heading_d) {
    return false;
  }
  // pre_lat_d
  if (lhs->pre_lat_d != rhs->pre_lat_d) {
    return false;
  }
  // pre_lat_theta
  if (lhs->pre_lat_theta != rhs->pre_lat_theta) {
    return false;
  }
  // cmd_steer
  if (lhs->cmd_steer != rhs->cmd_steer) {
    return false;
  }
  // cmd_acc
  if (lhs->cmd_acc != rhs->cmd_acc) {
    return false;
  }
  // control_computation_time
  if (lhs->control_computation_time != rhs->control_computation_time) {
    return false;
  }
  // loc_header_time
  if (lhs->loc_header_time != rhs->loc_header_time) {
    return false;
  }
  // chas_header_time
  if (lhs->chas_header_time != rhs->chas_header_time) {
    return false;
  }
  // planning_header_time
  if (lhs->planning_header_time != rhs->planning_header_time) {
    return false;
  }
  // openloop_trajectory
  if (!deva_planning_msgs2__msg__PlanningTrajectory__are_equal(
      &(lhs->openloop_trajectory), &(rhs->openloop_trajectory)))
  {
    return false;
  }
  return true;
}

bool
deva_control_msgs__msg__ControlMonitorMsg__copy(
  const deva_control_msgs__msg__ControlMonitorMsg * input,
  deva_control_msgs__msg__ControlMonitorMsg * output)
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
  // in_auto_drive
  output->in_auto_drive = input->in_auto_drive;
  // chs_yaw_rate
  output->chs_yaw_rate = input->chs_yaw_rate;
  // chs_speed
  output->chs_speed = input->chs_speed;
  // chs_steer
  output->chs_steer = input->chs_steer;
  // chs_longit_acc
  output->chs_longit_acc = input->chs_longit_acc;
  // chs_longit_torque
  output->chs_longit_torque = input->chs_longit_torque;
  // chs_gear
  output->chs_gear = input->chs_gear;
  // loc_x
  output->loc_x = input->loc_x;
  // loc_y
  output->loc_y = input->loc_y;
  // loc_z
  output->loc_z = input->loc_z;
  // loc_speed
  output->loc_speed = input->loc_speed;
  // loc_acc
  output->loc_acc = input->loc_acc;
  // loc_heading
  output->loc_heading = input->loc_heading;
  // loc_pitch
  output->loc_pitch = input->loc_pitch;
  // preview_path_x
  output->preview_path_x = input->preview_path_x;
  // preview_path_y
  output->preview_path_y = input->preview_path_y;
  // preview_path_theta
  output->preview_path_theta = input->preview_path_theta;
  // matched_path_x
  output->matched_path_x = input->matched_path_x;
  // matched_path_y
  output->matched_path_y = input->matched_path_y;
  // matched_path_theta
  output->matched_path_theta = input->matched_path_theta;
  // matched_path_kappa
  output->matched_path_kappa = input->matched_path_kappa;
  // matched_path_s
  output->matched_path_s = input->matched_path_s;
  // matched_path_v
  output->matched_path_v = input->matched_path_v;
  // matched_path_a
  output->matched_path_a = input->matched_path_a;
  // current_station
  output->current_station = input->current_station;
  // station_ref
  output->station_ref = input->station_ref;
  // station_error
  output->station_error = input->station_error;
  // current_speed
  output->current_speed = input->current_speed;
  // speed_ref
  output->speed_ref = input->speed_ref;
  // preview_speed_ref
  output->preview_speed_ref = input->preview_speed_ref;
  // speed_error
  output->speed_error = input->speed_error;
  // acc_ref
  output->acc_ref = input->acc_ref;
  // preview_acc_ref
  output->preview_acc_ref = input->preview_acc_ref;
  // actual_acc
  output->actual_acc = input->actual_acc;
  // lat_d
  output->lat_d = input->lat_d;
  // lat_d_rate
  output->lat_d_rate = input->lat_d_rate;
  // heading_d_rate
  output->heading_d_rate = input->heading_d_rate;
  // heading_d
  output->heading_d = input->heading_d;
  // pre_lat_d
  output->pre_lat_d = input->pre_lat_d;
  // pre_lat_theta
  output->pre_lat_theta = input->pre_lat_theta;
  // cmd_steer
  output->cmd_steer = input->cmd_steer;
  // cmd_acc
  output->cmd_acc = input->cmd_acc;
  // control_computation_time
  output->control_computation_time = input->control_computation_time;
  // loc_header_time
  output->loc_header_time = input->loc_header_time;
  // chas_header_time
  output->chas_header_time = input->chas_header_time;
  // planning_header_time
  output->planning_header_time = input->planning_header_time;
  // openloop_trajectory
  if (!deva_planning_msgs2__msg__PlanningTrajectory__copy(
      &(input->openloop_trajectory), &(output->openloop_trajectory)))
  {
    return false;
  }
  return true;
}

deva_control_msgs__msg__ControlMonitorMsg *
deva_control_msgs__msg__ControlMonitorMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__ControlMonitorMsg * msg = (deva_control_msgs__msg__ControlMonitorMsg *)allocator.allocate(sizeof(deva_control_msgs__msg__ControlMonitorMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_control_msgs__msg__ControlMonitorMsg));
  bool success = deva_control_msgs__msg__ControlMonitorMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_control_msgs__msg__ControlMonitorMsg__destroy(deva_control_msgs__msg__ControlMonitorMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_control_msgs__msg__ControlMonitorMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_control_msgs__msg__ControlMonitorMsg__Sequence__init(deva_control_msgs__msg__ControlMonitorMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__ControlMonitorMsg * data = NULL;

  if (size) {
    data = (deva_control_msgs__msg__ControlMonitorMsg *)allocator.zero_allocate(size, sizeof(deva_control_msgs__msg__ControlMonitorMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_control_msgs__msg__ControlMonitorMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_control_msgs__msg__ControlMonitorMsg__fini(&data[i - 1]);
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
deva_control_msgs__msg__ControlMonitorMsg__Sequence__fini(deva_control_msgs__msg__ControlMonitorMsg__Sequence * array)
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
      deva_control_msgs__msg__ControlMonitorMsg__fini(&array->data[i]);
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

deva_control_msgs__msg__ControlMonitorMsg__Sequence *
deva_control_msgs__msg__ControlMonitorMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__ControlMonitorMsg__Sequence * array = (deva_control_msgs__msg__ControlMonitorMsg__Sequence *)allocator.allocate(sizeof(deva_control_msgs__msg__ControlMonitorMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_control_msgs__msg__ControlMonitorMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_control_msgs__msg__ControlMonitorMsg__Sequence__destroy(deva_control_msgs__msg__ControlMonitorMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_control_msgs__msg__ControlMonitorMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_control_msgs__msg__ControlMonitorMsg__Sequence__are_equal(const deva_control_msgs__msg__ControlMonitorMsg__Sequence * lhs, const deva_control_msgs__msg__ControlMonitorMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_control_msgs__msg__ControlMonitorMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_control_msgs__msg__ControlMonitorMsg__Sequence__copy(
  const deva_control_msgs__msg__ControlMonitorMsg__Sequence * input,
  deva_control_msgs__msg__ControlMonitorMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_control_msgs__msg__ControlMonitorMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_control_msgs__msg__ControlMonitorMsg * data =
      (deva_control_msgs__msg__ControlMonitorMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_control_msgs__msg__ControlMonitorMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_control_msgs__msg__ControlMonitorMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_control_msgs__msg__ControlMonitorMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
