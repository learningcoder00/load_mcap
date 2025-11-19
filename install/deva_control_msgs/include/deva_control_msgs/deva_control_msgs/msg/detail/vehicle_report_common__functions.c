// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_control_msgs:msg/VehicleReportCommon.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/vehicle_report_common__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `protocol_version`
// Member `bywire_exit_reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `pedal`
#include "deva_control_msgs/msg/detail/vehicle_report_pedal__functions.h"
// Member `wheelspeed_rc`
#include "deva_control_msgs/msg/detail/wheel_speed__functions.h"
// Member `belt`
#include "deva_control_msgs/msg/detail/vehicle_report_belt__functions.h"

bool
deva_control_msgs__msg__VehicleReportCommon__init(deva_control_msgs__msg__VehicleReportCommon * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_control_msgs__msg__VehicleReportCommon__fini(msg);
    return false;
  }
  // protocol_version
  if (!rosidl_runtime_c__String__init(&msg->protocol_version)) {
    deva_control_msgs__msg__VehicleReportCommon__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->protocol_version, "2.11");
    if (!success) {
      goto abort_init_0;
    }
  }
  // unix_ts
  // speed
  // speed_valid
  // speed_directivity
  // wheelspeed_directivity
  // wheelspeed_valid
  // wheelspeed_dir
  // wheelspeed
  // gear_enable
  // gear
  // epb_state
  // epb_flt
  // late_enable
  // late_driveover
  // steer_angle_valid
  // steer_angle
  // steer_rotate_angle_speed
  // steer_torque_valid
  // steer_torque
  // steer_rotate_torque_speed
  // late_flt
  // longit_enable
  // longit_driveover
  // longit_torque_valid
  // longit_torque
  // longit_acc_valid
  // longit_acc
  // longit_flt
  // turn_lamp_lever_state
  // turn_lamp_left
  // turn_lamp_right
  // hazard_lamp
  // wiper_front
  // door_open_state
  // late_acc
  // yaw_rate
  // slope
  // standstill
  // pedal_valid
  // pedal
  if (!deva_control_msgs__msg__VehicleReportPedal__init(&msg->pedal)) {
    deva_control_msgs__msg__VehicleReportCommon__fini(msg);
    return false;
  }
  // wheelspeed_rc_valid
  // wheelspeed_rc
  if (!deva_control_msgs__msg__WheelSpeed__init(&msg->wheelspeed_rc)) {
    deva_control_msgs__msg__VehicleReportCommon__fini(msg);
    return false;
  }
  // belt_valid
  // belt
  if (!deva_control_msgs__msg__VehicleReportBelt__init(&msg->belt)) {
    deva_control_msgs__msg__VehicleReportCommon__fini(msg);
    return false;
  }
  // bywire_exit_reason
  if (!rosidl_runtime_c__String__init(&msg->bywire_exit_reason)) {
    deva_control_msgs__msg__VehicleReportCommon__fini(msg);
    return false;
  }
  // request_cancel
  // action_brake
  // action_throttle
  // action_steer
  // heavy_action_steer
  // sustain_action_throttle
  // sustain_action_steer
  return true;
abort_init_0:
  return false;
}

void
deva_control_msgs__msg__VehicleReportCommon__fini(deva_control_msgs__msg__VehicleReportCommon * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // protocol_version
  rosidl_runtime_c__String__fini(&msg->protocol_version);
  // unix_ts
  // speed
  // speed_valid
  // speed_directivity
  // wheelspeed_directivity
  // wheelspeed_valid
  // wheelspeed_dir
  // wheelspeed
  // gear_enable
  // gear
  // epb_state
  // epb_flt
  // late_enable
  // late_driveover
  // steer_angle_valid
  // steer_angle
  // steer_rotate_angle_speed
  // steer_torque_valid
  // steer_torque
  // steer_rotate_torque_speed
  // late_flt
  // longit_enable
  // longit_driveover
  // longit_torque_valid
  // longit_torque
  // longit_acc_valid
  // longit_acc
  // longit_flt
  // turn_lamp_lever_state
  // turn_lamp_left
  // turn_lamp_right
  // hazard_lamp
  // wiper_front
  // door_open_state
  // late_acc
  // yaw_rate
  // slope
  // standstill
  // pedal_valid
  // pedal
  deva_control_msgs__msg__VehicleReportPedal__fini(&msg->pedal);
  // wheelspeed_rc_valid
  // wheelspeed_rc
  deva_control_msgs__msg__WheelSpeed__fini(&msg->wheelspeed_rc);
  // belt_valid
  // belt
  deva_control_msgs__msg__VehicleReportBelt__fini(&msg->belt);
  // bywire_exit_reason
  rosidl_runtime_c__String__fini(&msg->bywire_exit_reason);
  // request_cancel
  // action_brake
  // action_throttle
  // action_steer
  // heavy_action_steer
  // sustain_action_throttle
  // sustain_action_steer
}

bool
deva_control_msgs__msg__VehicleReportCommon__are_equal(const deva_control_msgs__msg__VehicleReportCommon * lhs, const deva_control_msgs__msg__VehicleReportCommon * rhs)
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
  // unix_ts
  if (lhs->unix_ts != rhs->unix_ts) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // speed_valid
  if (lhs->speed_valid != rhs->speed_valid) {
    return false;
  }
  // speed_directivity
  if (lhs->speed_directivity != rhs->speed_directivity) {
    return false;
  }
  // wheelspeed_directivity
  if (lhs->wheelspeed_directivity != rhs->wheelspeed_directivity) {
    return false;
  }
  // wheelspeed_valid
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->wheelspeed_valid[i] != rhs->wheelspeed_valid[i]) {
      return false;
    }
  }
  // wheelspeed_dir
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->wheelspeed_dir[i] != rhs->wheelspeed_dir[i]) {
      return false;
    }
  }
  // wheelspeed
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->wheelspeed[i] != rhs->wheelspeed[i]) {
      return false;
    }
  }
  // gear_enable
  if (lhs->gear_enable != rhs->gear_enable) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  // epb_state
  if (lhs->epb_state != rhs->epb_state) {
    return false;
  }
  // epb_flt
  if (lhs->epb_flt != rhs->epb_flt) {
    return false;
  }
  // late_enable
  if (lhs->late_enable != rhs->late_enable) {
    return false;
  }
  // late_driveover
  if (lhs->late_driveover != rhs->late_driveover) {
    return false;
  }
  // steer_angle_valid
  if (lhs->steer_angle_valid != rhs->steer_angle_valid) {
    return false;
  }
  // steer_angle
  if (lhs->steer_angle != rhs->steer_angle) {
    return false;
  }
  // steer_rotate_angle_speed
  if (lhs->steer_rotate_angle_speed != rhs->steer_rotate_angle_speed) {
    return false;
  }
  // steer_torque_valid
  if (lhs->steer_torque_valid != rhs->steer_torque_valid) {
    return false;
  }
  // steer_torque
  if (lhs->steer_torque != rhs->steer_torque) {
    return false;
  }
  // steer_rotate_torque_speed
  if (lhs->steer_rotate_torque_speed != rhs->steer_rotate_torque_speed) {
    return false;
  }
  // late_flt
  if (lhs->late_flt != rhs->late_flt) {
    return false;
  }
  // longit_enable
  if (lhs->longit_enable != rhs->longit_enable) {
    return false;
  }
  // longit_driveover
  if (lhs->longit_driveover != rhs->longit_driveover) {
    return false;
  }
  // longit_torque_valid
  if (lhs->longit_torque_valid != rhs->longit_torque_valid) {
    return false;
  }
  // longit_torque
  if (lhs->longit_torque != rhs->longit_torque) {
    return false;
  }
  // longit_acc_valid
  if (lhs->longit_acc_valid != rhs->longit_acc_valid) {
    return false;
  }
  // longit_acc
  if (lhs->longit_acc != rhs->longit_acc) {
    return false;
  }
  // longit_flt
  if (lhs->longit_flt != rhs->longit_flt) {
    return false;
  }
  // turn_lamp_lever_state
  if (lhs->turn_lamp_lever_state != rhs->turn_lamp_lever_state) {
    return false;
  }
  // turn_lamp_left
  if (lhs->turn_lamp_left != rhs->turn_lamp_left) {
    return false;
  }
  // turn_lamp_right
  if (lhs->turn_lamp_right != rhs->turn_lamp_right) {
    return false;
  }
  // hazard_lamp
  if (lhs->hazard_lamp != rhs->hazard_lamp) {
    return false;
  }
  // wiper_front
  if (lhs->wiper_front != rhs->wiper_front) {
    return false;
  }
  // door_open_state
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->door_open_state[i] != rhs->door_open_state[i]) {
      return false;
    }
  }
  // late_acc
  if (lhs->late_acc != rhs->late_acc) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // slope
  if (lhs->slope != rhs->slope) {
    return false;
  }
  // standstill
  if (lhs->standstill != rhs->standstill) {
    return false;
  }
  // pedal_valid
  if (lhs->pedal_valid != rhs->pedal_valid) {
    return false;
  }
  // pedal
  if (!deva_control_msgs__msg__VehicleReportPedal__are_equal(
      &(lhs->pedal), &(rhs->pedal)))
  {
    return false;
  }
  // wheelspeed_rc_valid
  if (lhs->wheelspeed_rc_valid != rhs->wheelspeed_rc_valid) {
    return false;
  }
  // wheelspeed_rc
  if (!deva_control_msgs__msg__WheelSpeed__are_equal(
      &(lhs->wheelspeed_rc), &(rhs->wheelspeed_rc)))
  {
    return false;
  }
  // belt_valid
  if (lhs->belt_valid != rhs->belt_valid) {
    return false;
  }
  // belt
  if (!deva_control_msgs__msg__VehicleReportBelt__are_equal(
      &(lhs->belt), &(rhs->belt)))
  {
    return false;
  }
  // bywire_exit_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bywire_exit_reason), &(rhs->bywire_exit_reason)))
  {
    return false;
  }
  // request_cancel
  if (lhs->request_cancel != rhs->request_cancel) {
    return false;
  }
  // action_brake
  if (lhs->action_brake != rhs->action_brake) {
    return false;
  }
  // action_throttle
  if (lhs->action_throttle != rhs->action_throttle) {
    return false;
  }
  // action_steer
  if (lhs->action_steer != rhs->action_steer) {
    return false;
  }
  // heavy_action_steer
  if (lhs->heavy_action_steer != rhs->heavy_action_steer) {
    return false;
  }
  // sustain_action_throttle
  if (lhs->sustain_action_throttle != rhs->sustain_action_throttle) {
    return false;
  }
  // sustain_action_steer
  if (lhs->sustain_action_steer != rhs->sustain_action_steer) {
    return false;
  }
  return true;
}

bool
deva_control_msgs__msg__VehicleReportCommon__copy(
  const deva_control_msgs__msg__VehicleReportCommon * input,
  deva_control_msgs__msg__VehicleReportCommon * output)
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
  // unix_ts
  output->unix_ts = input->unix_ts;
  // speed
  output->speed = input->speed;
  // speed_valid
  output->speed_valid = input->speed_valid;
  // speed_directivity
  output->speed_directivity = input->speed_directivity;
  // wheelspeed_directivity
  output->wheelspeed_directivity = input->wheelspeed_directivity;
  // wheelspeed_valid
  for (size_t i = 0; i < 4; ++i) {
    output->wheelspeed_valid[i] = input->wheelspeed_valid[i];
  }
  // wheelspeed_dir
  for (size_t i = 0; i < 4; ++i) {
    output->wheelspeed_dir[i] = input->wheelspeed_dir[i];
  }
  // wheelspeed
  for (size_t i = 0; i < 4; ++i) {
    output->wheelspeed[i] = input->wheelspeed[i];
  }
  // gear_enable
  output->gear_enable = input->gear_enable;
  // gear
  output->gear = input->gear;
  // epb_state
  output->epb_state = input->epb_state;
  // epb_flt
  output->epb_flt = input->epb_flt;
  // late_enable
  output->late_enable = input->late_enable;
  // late_driveover
  output->late_driveover = input->late_driveover;
  // steer_angle_valid
  output->steer_angle_valid = input->steer_angle_valid;
  // steer_angle
  output->steer_angle = input->steer_angle;
  // steer_rotate_angle_speed
  output->steer_rotate_angle_speed = input->steer_rotate_angle_speed;
  // steer_torque_valid
  output->steer_torque_valid = input->steer_torque_valid;
  // steer_torque
  output->steer_torque = input->steer_torque;
  // steer_rotate_torque_speed
  output->steer_rotate_torque_speed = input->steer_rotate_torque_speed;
  // late_flt
  output->late_flt = input->late_flt;
  // longit_enable
  output->longit_enable = input->longit_enable;
  // longit_driveover
  output->longit_driveover = input->longit_driveover;
  // longit_torque_valid
  output->longit_torque_valid = input->longit_torque_valid;
  // longit_torque
  output->longit_torque = input->longit_torque;
  // longit_acc_valid
  output->longit_acc_valid = input->longit_acc_valid;
  // longit_acc
  output->longit_acc = input->longit_acc;
  // longit_flt
  output->longit_flt = input->longit_flt;
  // turn_lamp_lever_state
  output->turn_lamp_lever_state = input->turn_lamp_lever_state;
  // turn_lamp_left
  output->turn_lamp_left = input->turn_lamp_left;
  // turn_lamp_right
  output->turn_lamp_right = input->turn_lamp_right;
  // hazard_lamp
  output->hazard_lamp = input->hazard_lamp;
  // wiper_front
  output->wiper_front = input->wiper_front;
  // door_open_state
  for (size_t i = 0; i < 4; ++i) {
    output->door_open_state[i] = input->door_open_state[i];
  }
  // late_acc
  output->late_acc = input->late_acc;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // slope
  output->slope = input->slope;
  // standstill
  output->standstill = input->standstill;
  // pedal_valid
  output->pedal_valid = input->pedal_valid;
  // pedal
  if (!deva_control_msgs__msg__VehicleReportPedal__copy(
      &(input->pedal), &(output->pedal)))
  {
    return false;
  }
  // wheelspeed_rc_valid
  output->wheelspeed_rc_valid = input->wheelspeed_rc_valid;
  // wheelspeed_rc
  if (!deva_control_msgs__msg__WheelSpeed__copy(
      &(input->wheelspeed_rc), &(output->wheelspeed_rc)))
  {
    return false;
  }
  // belt_valid
  output->belt_valid = input->belt_valid;
  // belt
  if (!deva_control_msgs__msg__VehicleReportBelt__copy(
      &(input->belt), &(output->belt)))
  {
    return false;
  }
  // bywire_exit_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->bywire_exit_reason), &(output->bywire_exit_reason)))
  {
    return false;
  }
  // request_cancel
  output->request_cancel = input->request_cancel;
  // action_brake
  output->action_brake = input->action_brake;
  // action_throttle
  output->action_throttle = input->action_throttle;
  // action_steer
  output->action_steer = input->action_steer;
  // heavy_action_steer
  output->heavy_action_steer = input->heavy_action_steer;
  // sustain_action_throttle
  output->sustain_action_throttle = input->sustain_action_throttle;
  // sustain_action_steer
  output->sustain_action_steer = input->sustain_action_steer;
  return true;
}

deva_control_msgs__msg__VehicleReportCommon *
deva_control_msgs__msg__VehicleReportCommon__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleReportCommon * msg = (deva_control_msgs__msg__VehicleReportCommon *)allocator.allocate(sizeof(deva_control_msgs__msg__VehicleReportCommon), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_control_msgs__msg__VehicleReportCommon));
  bool success = deva_control_msgs__msg__VehicleReportCommon__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_control_msgs__msg__VehicleReportCommon__destroy(deva_control_msgs__msg__VehicleReportCommon * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_control_msgs__msg__VehicleReportCommon__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_control_msgs__msg__VehicleReportCommon__Sequence__init(deva_control_msgs__msg__VehicleReportCommon__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleReportCommon * data = NULL;

  if (size) {
    data = (deva_control_msgs__msg__VehicleReportCommon *)allocator.zero_allocate(size, sizeof(deva_control_msgs__msg__VehicleReportCommon), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_control_msgs__msg__VehicleReportCommon__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_control_msgs__msg__VehicleReportCommon__fini(&data[i - 1]);
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
deva_control_msgs__msg__VehicleReportCommon__Sequence__fini(deva_control_msgs__msg__VehicleReportCommon__Sequence * array)
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
      deva_control_msgs__msg__VehicleReportCommon__fini(&array->data[i]);
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

deva_control_msgs__msg__VehicleReportCommon__Sequence *
deva_control_msgs__msg__VehicleReportCommon__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleReportCommon__Sequence * array = (deva_control_msgs__msg__VehicleReportCommon__Sequence *)allocator.allocate(sizeof(deva_control_msgs__msg__VehicleReportCommon__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_control_msgs__msg__VehicleReportCommon__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_control_msgs__msg__VehicleReportCommon__Sequence__destroy(deva_control_msgs__msg__VehicleReportCommon__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_control_msgs__msg__VehicleReportCommon__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_control_msgs__msg__VehicleReportCommon__Sequence__are_equal(const deva_control_msgs__msg__VehicleReportCommon__Sequence * lhs, const deva_control_msgs__msg__VehicleReportCommon__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_control_msgs__msg__VehicleReportCommon__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_control_msgs__msg__VehicleReportCommon__Sequence__copy(
  const deva_control_msgs__msg__VehicleReportCommon__Sequence * input,
  deva_control_msgs__msg__VehicleReportCommon__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_control_msgs__msg__VehicleReportCommon);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_control_msgs__msg__VehicleReportCommon * data =
      (deva_control_msgs__msg__VehicleReportCommon *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_control_msgs__msg__VehicleReportCommon__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_control_msgs__msg__VehicleReportCommon__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_control_msgs__msg__VehicleReportCommon__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
