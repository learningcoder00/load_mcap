// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/RadarVehicleInfo.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/radar_vehicle_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_perception_msgs__msg__RadarVehicleInfo__init(deva_perception_msgs__msg__RadarVehicleInfo * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // position_x
  // position_y
  // rel_vel_x
  // rel_vel_y
  // abs_vel_x
  // abs_vel_y
  // rel_acc_x
  // rel_acc_y
  // abs_acc_x
  // abs_acc_y
  // speed
  // yaw_rate
  // radar_time
  // vehicle_time
  return true;
}

void
deva_perception_msgs__msg__RadarVehicleInfo__fini(deva_perception_msgs__msg__RadarVehicleInfo * msg)
{
  if (!msg) {
    return;
  }
  // id
  // position_x
  // position_y
  // rel_vel_x
  // rel_vel_y
  // abs_vel_x
  // abs_vel_y
  // rel_acc_x
  // rel_acc_y
  // abs_acc_x
  // abs_acc_y
  // speed
  // yaw_rate
  // radar_time
  // vehicle_time
}

bool
deva_perception_msgs__msg__RadarVehicleInfo__are_equal(const deva_perception_msgs__msg__RadarVehicleInfo * lhs, const deva_perception_msgs__msg__RadarVehicleInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // position_x
  if (lhs->position_x != rhs->position_x) {
    return false;
  }
  // position_y
  if (lhs->position_y != rhs->position_y) {
    return false;
  }
  // rel_vel_x
  if (lhs->rel_vel_x != rhs->rel_vel_x) {
    return false;
  }
  // rel_vel_y
  if (lhs->rel_vel_y != rhs->rel_vel_y) {
    return false;
  }
  // abs_vel_x
  if (lhs->abs_vel_x != rhs->abs_vel_x) {
    return false;
  }
  // abs_vel_y
  if (lhs->abs_vel_y != rhs->abs_vel_y) {
    return false;
  }
  // rel_acc_x
  if (lhs->rel_acc_x != rhs->rel_acc_x) {
    return false;
  }
  // rel_acc_y
  if (lhs->rel_acc_y != rhs->rel_acc_y) {
    return false;
  }
  // abs_acc_x
  if (lhs->abs_acc_x != rhs->abs_acc_x) {
    return false;
  }
  // abs_acc_y
  if (lhs->abs_acc_y != rhs->abs_acc_y) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // radar_time
  if (lhs->radar_time != rhs->radar_time) {
    return false;
  }
  // vehicle_time
  if (lhs->vehicle_time != rhs->vehicle_time) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__RadarVehicleInfo__copy(
  const deva_perception_msgs__msg__RadarVehicleInfo * input,
  deva_perception_msgs__msg__RadarVehicleInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // position_x
  output->position_x = input->position_x;
  // position_y
  output->position_y = input->position_y;
  // rel_vel_x
  output->rel_vel_x = input->rel_vel_x;
  // rel_vel_y
  output->rel_vel_y = input->rel_vel_y;
  // abs_vel_x
  output->abs_vel_x = input->abs_vel_x;
  // abs_vel_y
  output->abs_vel_y = input->abs_vel_y;
  // rel_acc_x
  output->rel_acc_x = input->rel_acc_x;
  // rel_acc_y
  output->rel_acc_y = input->rel_acc_y;
  // abs_acc_x
  output->abs_acc_x = input->abs_acc_x;
  // abs_acc_y
  output->abs_acc_y = input->abs_acc_y;
  // speed
  output->speed = input->speed;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // radar_time
  output->radar_time = input->radar_time;
  // vehicle_time
  output->vehicle_time = input->vehicle_time;
  return true;
}

deva_perception_msgs__msg__RadarVehicleInfo *
deva_perception_msgs__msg__RadarVehicleInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RadarVehicleInfo * msg = (deva_perception_msgs__msg__RadarVehicleInfo *)allocator.allocate(sizeof(deva_perception_msgs__msg__RadarVehicleInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__RadarVehicleInfo));
  bool success = deva_perception_msgs__msg__RadarVehicleInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__RadarVehicleInfo__destroy(deva_perception_msgs__msg__RadarVehicleInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__RadarVehicleInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__RadarVehicleInfo__Sequence__init(deva_perception_msgs__msg__RadarVehicleInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RadarVehicleInfo * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__RadarVehicleInfo *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__RadarVehicleInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__RadarVehicleInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__RadarVehicleInfo__fini(&data[i - 1]);
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
deva_perception_msgs__msg__RadarVehicleInfo__Sequence__fini(deva_perception_msgs__msg__RadarVehicleInfo__Sequence * array)
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
      deva_perception_msgs__msg__RadarVehicleInfo__fini(&array->data[i]);
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

deva_perception_msgs__msg__RadarVehicleInfo__Sequence *
deva_perception_msgs__msg__RadarVehicleInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RadarVehicleInfo__Sequence * array = (deva_perception_msgs__msg__RadarVehicleInfo__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__RadarVehicleInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__RadarVehicleInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__RadarVehicleInfo__Sequence__destroy(deva_perception_msgs__msg__RadarVehicleInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__RadarVehicleInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__RadarVehicleInfo__Sequence__are_equal(const deva_perception_msgs__msg__RadarVehicleInfo__Sequence * lhs, const deva_perception_msgs__msg__RadarVehicleInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__RadarVehicleInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__RadarVehicleInfo__Sequence__copy(
  const deva_perception_msgs__msg__RadarVehicleInfo__Sequence * input,
  deva_perception_msgs__msg__RadarVehicleInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__RadarVehicleInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__RadarVehicleInfo * data =
      (deva_perception_msgs__msg__RadarVehicleInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__RadarVehicleInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__RadarVehicleInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__RadarVehicleInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
