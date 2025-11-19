// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/DbaStateMsg.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/dba_state_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_function_msgs__msg__DbaStateMsg__init(deva_function_msgs__msg__DbaStateMsg * msg)
{
  if (!msg) {
    return false;
  }
  // publish_timestamp
  // epb_state
  // speed
  // acc_enable
  // brake_enable
  // door_open_state
  // turn_lamp_lever_state
  // late_enable
  // late_driveover
  // longit_enable
  // longit_driveover
  // gear
  // belt
  // command
  // save_map
  // slot_id
  // park_out_direction
  // run_mode
  return true;
}

void
deva_function_msgs__msg__DbaStateMsg__fini(deva_function_msgs__msg__DbaStateMsg * msg)
{
  if (!msg) {
    return;
  }
  // publish_timestamp
  // epb_state
  // speed
  // acc_enable
  // brake_enable
  // door_open_state
  // turn_lamp_lever_state
  // late_enable
  // late_driveover
  // longit_enable
  // longit_driveover
  // gear
  // belt
  // command
  // save_map
  // slot_id
  // park_out_direction
  // run_mode
}

bool
deva_function_msgs__msg__DbaStateMsg__are_equal(const deva_function_msgs__msg__DbaStateMsg * lhs, const deva_function_msgs__msg__DbaStateMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // publish_timestamp
  if (lhs->publish_timestamp != rhs->publish_timestamp) {
    return false;
  }
  // epb_state
  if (lhs->epb_state != rhs->epb_state) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // acc_enable
  if (lhs->acc_enable != rhs->acc_enable) {
    return false;
  }
  // brake_enable
  if (lhs->brake_enable != rhs->brake_enable) {
    return false;
  }
  // door_open_state
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->door_open_state[i] != rhs->door_open_state[i]) {
      return false;
    }
  }
  // turn_lamp_lever_state
  if (lhs->turn_lamp_lever_state != rhs->turn_lamp_lever_state) {
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
  // longit_enable
  if (lhs->longit_enable != rhs->longit_enable) {
    return false;
  }
  // longit_driveover
  if (lhs->longit_driveover != rhs->longit_driveover) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  // belt
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->belt[i] != rhs->belt[i]) {
      return false;
    }
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  // save_map
  if (lhs->save_map != rhs->save_map) {
    return false;
  }
  // slot_id
  if (lhs->slot_id != rhs->slot_id) {
    return false;
  }
  // park_out_direction
  if (lhs->park_out_direction != rhs->park_out_direction) {
    return false;
  }
  // run_mode
  if (lhs->run_mode != rhs->run_mode) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__DbaStateMsg__copy(
  const deva_function_msgs__msg__DbaStateMsg * input,
  deva_function_msgs__msg__DbaStateMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // publish_timestamp
  output->publish_timestamp = input->publish_timestamp;
  // epb_state
  output->epb_state = input->epb_state;
  // speed
  output->speed = input->speed;
  // acc_enable
  output->acc_enable = input->acc_enable;
  // brake_enable
  output->brake_enable = input->brake_enable;
  // door_open_state
  for (size_t i = 0; i < 4; ++i) {
    output->door_open_state[i] = input->door_open_state[i];
  }
  // turn_lamp_lever_state
  output->turn_lamp_lever_state = input->turn_lamp_lever_state;
  // late_enable
  output->late_enable = input->late_enable;
  // late_driveover
  output->late_driveover = input->late_driveover;
  // longit_enable
  output->longit_enable = input->longit_enable;
  // longit_driveover
  output->longit_driveover = input->longit_driveover;
  // gear
  output->gear = input->gear;
  // belt
  for (size_t i = 0; i < 5; ++i) {
    output->belt[i] = input->belt[i];
  }
  // command
  output->command = input->command;
  // save_map
  output->save_map = input->save_map;
  // slot_id
  output->slot_id = input->slot_id;
  // park_out_direction
  output->park_out_direction = input->park_out_direction;
  // run_mode
  output->run_mode = input->run_mode;
  return true;
}

deva_function_msgs__msg__DbaStateMsg *
deva_function_msgs__msg__DbaStateMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__DbaStateMsg * msg = (deva_function_msgs__msg__DbaStateMsg *)allocator.allocate(sizeof(deva_function_msgs__msg__DbaStateMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__DbaStateMsg));
  bool success = deva_function_msgs__msg__DbaStateMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__DbaStateMsg__destroy(deva_function_msgs__msg__DbaStateMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__DbaStateMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__DbaStateMsg__Sequence__init(deva_function_msgs__msg__DbaStateMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__DbaStateMsg * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__DbaStateMsg *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__DbaStateMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__DbaStateMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__DbaStateMsg__fini(&data[i - 1]);
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
deva_function_msgs__msg__DbaStateMsg__Sequence__fini(deva_function_msgs__msg__DbaStateMsg__Sequence * array)
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
      deva_function_msgs__msg__DbaStateMsg__fini(&array->data[i]);
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

deva_function_msgs__msg__DbaStateMsg__Sequence *
deva_function_msgs__msg__DbaStateMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__DbaStateMsg__Sequence * array = (deva_function_msgs__msg__DbaStateMsg__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__DbaStateMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__DbaStateMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__DbaStateMsg__Sequence__destroy(deva_function_msgs__msg__DbaStateMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__DbaStateMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__DbaStateMsg__Sequence__are_equal(const deva_function_msgs__msg__DbaStateMsg__Sequence * lhs, const deva_function_msgs__msg__DbaStateMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__DbaStateMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__DbaStateMsg__Sequence__copy(
  const deva_function_msgs__msg__DbaStateMsg__Sequence * input,
  deva_function_msgs__msg__DbaStateMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__DbaStateMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__DbaStateMsg * data =
      (deva_function_msgs__msg__DbaStateMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__DbaStateMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__DbaStateMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__DbaStateMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
