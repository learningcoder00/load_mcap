// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_control_msgs:msg/VehicleStatusCommand.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/vehicle_status_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `protocol_version`
// Member `node_name`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_control_msgs__msg__VehicleStatusCommand__init(deva_control_msgs__msg__VehicleStatusCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_control_msgs__msg__VehicleStatusCommand__fini(msg);
    return false;
  }
  // protocol_version
  if (!rosidl_runtime_c__String__init(&msg->protocol_version)) {
    deva_control_msgs__msg__VehicleStatusCommand__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->protocol_version, "2.0");
    if (!success) {
      goto abort_init_0;
    }
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    deva_control_msgs__msg__VehicleStatusCommand__fini(msg);
    return false;
  }
  // use_gear_cmd
  msg->use_gear_cmd = false;
  // gear_en
  // gear_cmd_val
  // use_epb_cmd
  msg->use_epb_cmd = false;
  // epb_en
  // epb_cmd_val
  // use_turn_light_cmd
  msg->use_turn_light_cmd = false;
  // turn_light_en
  // turn_light_cmd
  // use_wiper_cmd
  msg->use_wiper_cmd = false;
  // wiper_en
  // wiper_cmd
  // use_bywire_enable_cmd
  msg->use_bywire_enable_cmd = false;
  // lateral_en
  // longitudinal_en
  // use_park_cmd
  msg->use_park_cmd = false;
  // park_action
  return true;
abort_init_0:
  return false;
}

void
deva_control_msgs__msg__VehicleStatusCommand__fini(deva_control_msgs__msg__VehicleStatusCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // protocol_version
  rosidl_runtime_c__String__fini(&msg->protocol_version);
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // use_gear_cmd
  // gear_en
  // gear_cmd_val
  // use_epb_cmd
  // epb_en
  // epb_cmd_val
  // use_turn_light_cmd
  // turn_light_en
  // turn_light_cmd
  // use_wiper_cmd
  // wiper_en
  // wiper_cmd
  // use_bywire_enable_cmd
  // lateral_en
  // longitudinal_en
  // use_park_cmd
  // park_action
}

bool
deva_control_msgs__msg__VehicleStatusCommand__are_equal(const deva_control_msgs__msg__VehicleStatusCommand * lhs, const deva_control_msgs__msg__VehicleStatusCommand * rhs)
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
  // protocol_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->protocol_version), &(rhs->protocol_version)))
  {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_name), &(rhs->node_name)))
  {
    return false;
  }
  // use_gear_cmd
  if (lhs->use_gear_cmd != rhs->use_gear_cmd) {
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
  // use_epb_cmd
  if (lhs->use_epb_cmd != rhs->use_epb_cmd) {
    return false;
  }
  // epb_en
  if (lhs->epb_en != rhs->epb_en) {
    return false;
  }
  // epb_cmd_val
  if (lhs->epb_cmd_val != rhs->epb_cmd_val) {
    return false;
  }
  // use_turn_light_cmd
  if (lhs->use_turn_light_cmd != rhs->use_turn_light_cmd) {
    return false;
  }
  // turn_light_en
  if (lhs->turn_light_en != rhs->turn_light_en) {
    return false;
  }
  // turn_light_cmd
  if (lhs->turn_light_cmd != rhs->turn_light_cmd) {
    return false;
  }
  // use_wiper_cmd
  if (lhs->use_wiper_cmd != rhs->use_wiper_cmd) {
    return false;
  }
  // wiper_en
  if (lhs->wiper_en != rhs->wiper_en) {
    return false;
  }
  // wiper_cmd
  if (lhs->wiper_cmd != rhs->wiper_cmd) {
    return false;
  }
  // use_bywire_enable_cmd
  if (lhs->use_bywire_enable_cmd != rhs->use_bywire_enable_cmd) {
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
  // use_park_cmd
  if (lhs->use_park_cmd != rhs->use_park_cmd) {
    return false;
  }
  // park_action
  if (lhs->park_action != rhs->park_action) {
    return false;
  }
  return true;
}

bool
deva_control_msgs__msg__VehicleStatusCommand__copy(
  const deva_control_msgs__msg__VehicleStatusCommand * input,
  deva_control_msgs__msg__VehicleStatusCommand * output)
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
  // protocol_version
  if (!rosidl_runtime_c__String__copy(
      &(input->protocol_version), &(output->protocol_version)))
  {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->node_name), &(output->node_name)))
  {
    return false;
  }
  // use_gear_cmd
  output->use_gear_cmd = input->use_gear_cmd;
  // gear_en
  output->gear_en = input->gear_en;
  // gear_cmd_val
  output->gear_cmd_val = input->gear_cmd_val;
  // use_epb_cmd
  output->use_epb_cmd = input->use_epb_cmd;
  // epb_en
  output->epb_en = input->epb_en;
  // epb_cmd_val
  output->epb_cmd_val = input->epb_cmd_val;
  // use_turn_light_cmd
  output->use_turn_light_cmd = input->use_turn_light_cmd;
  // turn_light_en
  output->turn_light_en = input->turn_light_en;
  // turn_light_cmd
  output->turn_light_cmd = input->turn_light_cmd;
  // use_wiper_cmd
  output->use_wiper_cmd = input->use_wiper_cmd;
  // wiper_en
  output->wiper_en = input->wiper_en;
  // wiper_cmd
  output->wiper_cmd = input->wiper_cmd;
  // use_bywire_enable_cmd
  output->use_bywire_enable_cmd = input->use_bywire_enable_cmd;
  // lateral_en
  output->lateral_en = input->lateral_en;
  // longitudinal_en
  output->longitudinal_en = input->longitudinal_en;
  // use_park_cmd
  output->use_park_cmd = input->use_park_cmd;
  // park_action
  output->park_action = input->park_action;
  return true;
}

deva_control_msgs__msg__VehicleStatusCommand *
deva_control_msgs__msg__VehicleStatusCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleStatusCommand * msg = (deva_control_msgs__msg__VehicleStatusCommand *)allocator.allocate(sizeof(deva_control_msgs__msg__VehicleStatusCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_control_msgs__msg__VehicleStatusCommand));
  bool success = deva_control_msgs__msg__VehicleStatusCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_control_msgs__msg__VehicleStatusCommand__destroy(deva_control_msgs__msg__VehicleStatusCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_control_msgs__msg__VehicleStatusCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_control_msgs__msg__VehicleStatusCommand__Sequence__init(deva_control_msgs__msg__VehicleStatusCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleStatusCommand * data = NULL;

  if (size) {
    data = (deva_control_msgs__msg__VehicleStatusCommand *)allocator.zero_allocate(size, sizeof(deva_control_msgs__msg__VehicleStatusCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_control_msgs__msg__VehicleStatusCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_control_msgs__msg__VehicleStatusCommand__fini(&data[i - 1]);
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
deva_control_msgs__msg__VehicleStatusCommand__Sequence__fini(deva_control_msgs__msg__VehicleStatusCommand__Sequence * array)
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
      deva_control_msgs__msg__VehicleStatusCommand__fini(&array->data[i]);
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

deva_control_msgs__msg__VehicleStatusCommand__Sequence *
deva_control_msgs__msg__VehicleStatusCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleStatusCommand__Sequence * array = (deva_control_msgs__msg__VehicleStatusCommand__Sequence *)allocator.allocate(sizeof(deva_control_msgs__msg__VehicleStatusCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_control_msgs__msg__VehicleStatusCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_control_msgs__msg__VehicleStatusCommand__Sequence__destroy(deva_control_msgs__msg__VehicleStatusCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_control_msgs__msg__VehicleStatusCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_control_msgs__msg__VehicleStatusCommand__Sequence__are_equal(const deva_control_msgs__msg__VehicleStatusCommand__Sequence * lhs, const deva_control_msgs__msg__VehicleStatusCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_control_msgs__msg__VehicleStatusCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_control_msgs__msg__VehicleStatusCommand__Sequence__copy(
  const deva_control_msgs__msg__VehicleStatusCommand__Sequence * input,
  deva_control_msgs__msg__VehicleStatusCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_control_msgs__msg__VehicleStatusCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_control_msgs__msg__VehicleStatusCommand * data =
      (deva_control_msgs__msg__VehicleStatusCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_control_msgs__msg__VehicleStatusCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_control_msgs__msg__VehicleStatusCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_control_msgs__msg__VehicleStatusCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
