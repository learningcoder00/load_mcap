// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/OddParkingVehicleState.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/odd_parking_vehicle_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_function_msgs__msg__OddParkingVehicleState__init(deva_function_msgs__msg__OddParkingVehicleState * msg)
{
  if (!msg) {
    return false;
  }
  // publish_timestamp
  // odd_apa_illumination_pass_flag
  // odd_apa_gradient_pass_flag
  // odd_apa_standby_hu_speed_pass_flag
  return true;
}

void
deva_function_msgs__msg__OddParkingVehicleState__fini(deva_function_msgs__msg__OddParkingVehicleState * msg)
{
  if (!msg) {
    return;
  }
  // publish_timestamp
  // odd_apa_illumination_pass_flag
  // odd_apa_gradient_pass_flag
  // odd_apa_standby_hu_speed_pass_flag
}

bool
deva_function_msgs__msg__OddParkingVehicleState__are_equal(const deva_function_msgs__msg__OddParkingVehicleState * lhs, const deva_function_msgs__msg__OddParkingVehicleState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // publish_timestamp
  if (lhs->publish_timestamp != rhs->publish_timestamp) {
    return false;
  }
  // odd_apa_illumination_pass_flag
  if (lhs->odd_apa_illumination_pass_flag != rhs->odd_apa_illumination_pass_flag) {
    return false;
  }
  // odd_apa_gradient_pass_flag
  if (lhs->odd_apa_gradient_pass_flag != rhs->odd_apa_gradient_pass_flag) {
    return false;
  }
  // odd_apa_standby_hu_speed_pass_flag
  if (lhs->odd_apa_standby_hu_speed_pass_flag != rhs->odd_apa_standby_hu_speed_pass_flag) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__OddParkingVehicleState__copy(
  const deva_function_msgs__msg__OddParkingVehicleState * input,
  deva_function_msgs__msg__OddParkingVehicleState * output)
{
  if (!input || !output) {
    return false;
  }
  // publish_timestamp
  output->publish_timestamp = input->publish_timestamp;
  // odd_apa_illumination_pass_flag
  output->odd_apa_illumination_pass_flag = input->odd_apa_illumination_pass_flag;
  // odd_apa_gradient_pass_flag
  output->odd_apa_gradient_pass_flag = input->odd_apa_gradient_pass_flag;
  // odd_apa_standby_hu_speed_pass_flag
  output->odd_apa_standby_hu_speed_pass_flag = input->odd_apa_standby_hu_speed_pass_flag;
  return true;
}

deva_function_msgs__msg__OddParkingVehicleState *
deva_function_msgs__msg__OddParkingVehicleState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__OddParkingVehicleState * msg = (deva_function_msgs__msg__OddParkingVehicleState *)allocator.allocate(sizeof(deva_function_msgs__msg__OddParkingVehicleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__OddParkingVehicleState));
  bool success = deva_function_msgs__msg__OddParkingVehicleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__OddParkingVehicleState__destroy(deva_function_msgs__msg__OddParkingVehicleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__OddParkingVehicleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__OddParkingVehicleState__Sequence__init(deva_function_msgs__msg__OddParkingVehicleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__OddParkingVehicleState * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__OddParkingVehicleState *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__OddParkingVehicleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__OddParkingVehicleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__OddParkingVehicleState__fini(&data[i - 1]);
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
deva_function_msgs__msg__OddParkingVehicleState__Sequence__fini(deva_function_msgs__msg__OddParkingVehicleState__Sequence * array)
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
      deva_function_msgs__msg__OddParkingVehicleState__fini(&array->data[i]);
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

deva_function_msgs__msg__OddParkingVehicleState__Sequence *
deva_function_msgs__msg__OddParkingVehicleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__OddParkingVehicleState__Sequence * array = (deva_function_msgs__msg__OddParkingVehicleState__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__OddParkingVehicleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__OddParkingVehicleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__OddParkingVehicleState__Sequence__destroy(deva_function_msgs__msg__OddParkingVehicleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__OddParkingVehicleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__OddParkingVehicleState__Sequence__are_equal(const deva_function_msgs__msg__OddParkingVehicleState__Sequence * lhs, const deva_function_msgs__msg__OddParkingVehicleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__OddParkingVehicleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__OddParkingVehicleState__Sequence__copy(
  const deva_function_msgs__msg__OddParkingVehicleState__Sequence * input,
  deva_function_msgs__msg__OddParkingVehicleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__OddParkingVehicleState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__OddParkingVehicleState * data =
      (deva_function_msgs__msg__OddParkingVehicleState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__OddParkingVehicleState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__OddParkingVehicleState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__OddParkingVehicleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
