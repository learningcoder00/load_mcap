// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_control_msgs:msg/ControlDebugSignal.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/control_debug_signal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
deva_control_msgs__msg__ControlDebugSignal__init(deva_control_msgs__msg__ControlDebugSignal * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_control_msgs__msg__ControlDebugSignal__fini(msg);
    return false;
  }
  // c0_val
  // c1_val
  // c2_val
  // station_error
  // speed_offset
  // speed_target
  // speed_current
  // speed_error
  // preview_steer_error
  // preview_speed_target
  // distance_error
  // angle_error
  // debug_signal_4
  // debug_signal_5
  // debug_signal_6
  // debug_signal_7
  // debug_signal_8
  // debug_signal_9
  return true;
}

void
deva_control_msgs__msg__ControlDebugSignal__fini(deva_control_msgs__msg__ControlDebugSignal * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // c0_val
  // c1_val
  // c2_val
  // station_error
  // speed_offset
  // speed_target
  // speed_current
  // speed_error
  // preview_steer_error
  // preview_speed_target
  // distance_error
  // angle_error
  // debug_signal_4
  // debug_signal_5
  // debug_signal_6
  // debug_signal_7
  // debug_signal_8
  // debug_signal_9
}

bool
deva_control_msgs__msg__ControlDebugSignal__are_equal(const deva_control_msgs__msg__ControlDebugSignal * lhs, const deva_control_msgs__msg__ControlDebugSignal * rhs)
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
  // c0_val
  if (lhs->c0_val != rhs->c0_val) {
    return false;
  }
  // c1_val
  if (lhs->c1_val != rhs->c1_val) {
    return false;
  }
  // c2_val
  if (lhs->c2_val != rhs->c2_val) {
    return false;
  }
  // station_error
  if (lhs->station_error != rhs->station_error) {
    return false;
  }
  // speed_offset
  if (lhs->speed_offset != rhs->speed_offset) {
    return false;
  }
  // speed_target
  if (lhs->speed_target != rhs->speed_target) {
    return false;
  }
  // speed_current
  if (lhs->speed_current != rhs->speed_current) {
    return false;
  }
  // speed_error
  if (lhs->speed_error != rhs->speed_error) {
    return false;
  }
  // preview_steer_error
  if (lhs->preview_steer_error != rhs->preview_steer_error) {
    return false;
  }
  // preview_speed_target
  if (lhs->preview_speed_target != rhs->preview_speed_target) {
    return false;
  }
  // distance_error
  if (lhs->distance_error != rhs->distance_error) {
    return false;
  }
  // angle_error
  if (lhs->angle_error != rhs->angle_error) {
    return false;
  }
  // debug_signal_4
  if (lhs->debug_signal_4 != rhs->debug_signal_4) {
    return false;
  }
  // debug_signal_5
  if (lhs->debug_signal_5 != rhs->debug_signal_5) {
    return false;
  }
  // debug_signal_6
  if (lhs->debug_signal_6 != rhs->debug_signal_6) {
    return false;
  }
  // debug_signal_7
  if (lhs->debug_signal_7 != rhs->debug_signal_7) {
    return false;
  }
  // debug_signal_8
  if (lhs->debug_signal_8 != rhs->debug_signal_8) {
    return false;
  }
  // debug_signal_9
  if (lhs->debug_signal_9 != rhs->debug_signal_9) {
    return false;
  }
  return true;
}

bool
deva_control_msgs__msg__ControlDebugSignal__copy(
  const deva_control_msgs__msg__ControlDebugSignal * input,
  deva_control_msgs__msg__ControlDebugSignal * output)
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
  // c0_val
  output->c0_val = input->c0_val;
  // c1_val
  output->c1_val = input->c1_val;
  // c2_val
  output->c2_val = input->c2_val;
  // station_error
  output->station_error = input->station_error;
  // speed_offset
  output->speed_offset = input->speed_offset;
  // speed_target
  output->speed_target = input->speed_target;
  // speed_current
  output->speed_current = input->speed_current;
  // speed_error
  output->speed_error = input->speed_error;
  // preview_steer_error
  output->preview_steer_error = input->preview_steer_error;
  // preview_speed_target
  output->preview_speed_target = input->preview_speed_target;
  // distance_error
  output->distance_error = input->distance_error;
  // angle_error
  output->angle_error = input->angle_error;
  // debug_signal_4
  output->debug_signal_4 = input->debug_signal_4;
  // debug_signal_5
  output->debug_signal_5 = input->debug_signal_5;
  // debug_signal_6
  output->debug_signal_6 = input->debug_signal_6;
  // debug_signal_7
  output->debug_signal_7 = input->debug_signal_7;
  // debug_signal_8
  output->debug_signal_8 = input->debug_signal_8;
  // debug_signal_9
  output->debug_signal_9 = input->debug_signal_9;
  return true;
}

deva_control_msgs__msg__ControlDebugSignal *
deva_control_msgs__msg__ControlDebugSignal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__ControlDebugSignal * msg = (deva_control_msgs__msg__ControlDebugSignal *)allocator.allocate(sizeof(deva_control_msgs__msg__ControlDebugSignal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_control_msgs__msg__ControlDebugSignal));
  bool success = deva_control_msgs__msg__ControlDebugSignal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_control_msgs__msg__ControlDebugSignal__destroy(deva_control_msgs__msg__ControlDebugSignal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_control_msgs__msg__ControlDebugSignal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_control_msgs__msg__ControlDebugSignal__Sequence__init(deva_control_msgs__msg__ControlDebugSignal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__ControlDebugSignal * data = NULL;

  if (size) {
    data = (deva_control_msgs__msg__ControlDebugSignal *)allocator.zero_allocate(size, sizeof(deva_control_msgs__msg__ControlDebugSignal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_control_msgs__msg__ControlDebugSignal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_control_msgs__msg__ControlDebugSignal__fini(&data[i - 1]);
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
deva_control_msgs__msg__ControlDebugSignal__Sequence__fini(deva_control_msgs__msg__ControlDebugSignal__Sequence * array)
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
      deva_control_msgs__msg__ControlDebugSignal__fini(&array->data[i]);
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

deva_control_msgs__msg__ControlDebugSignal__Sequence *
deva_control_msgs__msg__ControlDebugSignal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__ControlDebugSignal__Sequence * array = (deva_control_msgs__msg__ControlDebugSignal__Sequence *)allocator.allocate(sizeof(deva_control_msgs__msg__ControlDebugSignal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_control_msgs__msg__ControlDebugSignal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_control_msgs__msg__ControlDebugSignal__Sequence__destroy(deva_control_msgs__msg__ControlDebugSignal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_control_msgs__msg__ControlDebugSignal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_control_msgs__msg__ControlDebugSignal__Sequence__are_equal(const deva_control_msgs__msg__ControlDebugSignal__Sequence * lhs, const deva_control_msgs__msg__ControlDebugSignal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_control_msgs__msg__ControlDebugSignal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_control_msgs__msg__ControlDebugSignal__Sequence__copy(
  const deva_control_msgs__msg__ControlDebugSignal__Sequence * input,
  deva_control_msgs__msg__ControlDebugSignal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_control_msgs__msg__ControlDebugSignal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_control_msgs__msg__ControlDebugSignal * data =
      (deva_control_msgs__msg__ControlDebugSignal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_control_msgs__msg__ControlDebugSignal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_control_msgs__msg__ControlDebugSignal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_control_msgs__msg__ControlDebugSignal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
