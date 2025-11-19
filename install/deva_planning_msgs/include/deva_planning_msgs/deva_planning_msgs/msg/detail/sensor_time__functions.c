// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs:msg/SensorTime.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/sensor_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `localization_header`
// Member `prediction_header`
// Member `decision_header`
// Member `chassis_header`
// Member `traffic_light_header`
// Member `traffic_pole_header`
// Member `cone_header`
// Member `map_header`
// Member `padmsg_header`
// Member `pull_over_header`
// Member `routing_header`
// Member `start_planning_header`
// Member `finish_planning_header`
// Member `navigator_start_header`
// Member `navigator_end_header`
#include "std_msgs/msg/detail/header__functions.h"

bool
deva_planning_msgs__msg__SensorTime__init(deva_planning_msgs__msg__SensorTime * msg)
{
  if (!msg) {
    return false;
  }
  // localization_header
  if (!std_msgs__msg__Header__init(&msg->localization_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // prediction_header
  if (!std_msgs__msg__Header__init(&msg->prediction_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // decision_header
  if (!std_msgs__msg__Header__init(&msg->decision_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // chassis_header
  if (!std_msgs__msg__Header__init(&msg->chassis_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // traffic_light_header
  if (!std_msgs__msg__Header__init(&msg->traffic_light_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // traffic_pole_header
  if (!std_msgs__msg__Header__init(&msg->traffic_pole_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // cone_header
  if (!std_msgs__msg__Header__init(&msg->cone_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // map_header
  if (!std_msgs__msg__Header__init(&msg->map_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // padmsg_header
  if (!std_msgs__msg__Header__init(&msg->padmsg_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // pull_over_header
  if (!std_msgs__msg__Header__init(&msg->pull_over_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // routing_header
  if (!std_msgs__msg__Header__init(&msg->routing_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // start_planning_header
  if (!std_msgs__msg__Header__init(&msg->start_planning_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // finish_planning_header
  if (!std_msgs__msg__Header__init(&msg->finish_planning_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // navigator_start_header
  if (!std_msgs__msg__Header__init(&msg->navigator_start_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  // navigator_end_header
  if (!std_msgs__msg__Header__init(&msg->navigator_end_header)) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs__msg__SensorTime__fini(deva_planning_msgs__msg__SensorTime * msg)
{
  if (!msg) {
    return;
  }
  // localization_header
  std_msgs__msg__Header__fini(&msg->localization_header);
  // prediction_header
  std_msgs__msg__Header__fini(&msg->prediction_header);
  // decision_header
  std_msgs__msg__Header__fini(&msg->decision_header);
  // chassis_header
  std_msgs__msg__Header__fini(&msg->chassis_header);
  // traffic_light_header
  std_msgs__msg__Header__fini(&msg->traffic_light_header);
  // traffic_pole_header
  std_msgs__msg__Header__fini(&msg->traffic_pole_header);
  // cone_header
  std_msgs__msg__Header__fini(&msg->cone_header);
  // map_header
  std_msgs__msg__Header__fini(&msg->map_header);
  // padmsg_header
  std_msgs__msg__Header__fini(&msg->padmsg_header);
  // pull_over_header
  std_msgs__msg__Header__fini(&msg->pull_over_header);
  // routing_header
  std_msgs__msg__Header__fini(&msg->routing_header);
  // start_planning_header
  std_msgs__msg__Header__fini(&msg->start_planning_header);
  // finish_planning_header
  std_msgs__msg__Header__fini(&msg->finish_planning_header);
  // navigator_start_header
  std_msgs__msg__Header__fini(&msg->navigator_start_header);
  // navigator_end_header
  std_msgs__msg__Header__fini(&msg->navigator_end_header);
}

bool
deva_planning_msgs__msg__SensorTime__are_equal(const deva_planning_msgs__msg__SensorTime * lhs, const deva_planning_msgs__msg__SensorTime * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // localization_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->localization_header), &(rhs->localization_header)))
  {
    return false;
  }
  // prediction_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->prediction_header), &(rhs->prediction_header)))
  {
    return false;
  }
  // decision_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->decision_header), &(rhs->decision_header)))
  {
    return false;
  }
  // chassis_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->chassis_header), &(rhs->chassis_header)))
  {
    return false;
  }
  // traffic_light_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->traffic_light_header), &(rhs->traffic_light_header)))
  {
    return false;
  }
  // traffic_pole_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->traffic_pole_header), &(rhs->traffic_pole_header)))
  {
    return false;
  }
  // cone_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->cone_header), &(rhs->cone_header)))
  {
    return false;
  }
  // map_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->map_header), &(rhs->map_header)))
  {
    return false;
  }
  // padmsg_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->padmsg_header), &(rhs->padmsg_header)))
  {
    return false;
  }
  // pull_over_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->pull_over_header), &(rhs->pull_over_header)))
  {
    return false;
  }
  // routing_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->routing_header), &(rhs->routing_header)))
  {
    return false;
  }
  // start_planning_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->start_planning_header), &(rhs->start_planning_header)))
  {
    return false;
  }
  // finish_planning_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->finish_planning_header), &(rhs->finish_planning_header)))
  {
    return false;
  }
  // navigator_start_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->navigator_start_header), &(rhs->navigator_start_header)))
  {
    return false;
  }
  // navigator_end_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->navigator_end_header), &(rhs->navigator_end_header)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs__msg__SensorTime__copy(
  const deva_planning_msgs__msg__SensorTime * input,
  deva_planning_msgs__msg__SensorTime * output)
{
  if (!input || !output) {
    return false;
  }
  // localization_header
  if (!std_msgs__msg__Header__copy(
      &(input->localization_header), &(output->localization_header)))
  {
    return false;
  }
  // prediction_header
  if (!std_msgs__msg__Header__copy(
      &(input->prediction_header), &(output->prediction_header)))
  {
    return false;
  }
  // decision_header
  if (!std_msgs__msg__Header__copy(
      &(input->decision_header), &(output->decision_header)))
  {
    return false;
  }
  // chassis_header
  if (!std_msgs__msg__Header__copy(
      &(input->chassis_header), &(output->chassis_header)))
  {
    return false;
  }
  // traffic_light_header
  if (!std_msgs__msg__Header__copy(
      &(input->traffic_light_header), &(output->traffic_light_header)))
  {
    return false;
  }
  // traffic_pole_header
  if (!std_msgs__msg__Header__copy(
      &(input->traffic_pole_header), &(output->traffic_pole_header)))
  {
    return false;
  }
  // cone_header
  if (!std_msgs__msg__Header__copy(
      &(input->cone_header), &(output->cone_header)))
  {
    return false;
  }
  // map_header
  if (!std_msgs__msg__Header__copy(
      &(input->map_header), &(output->map_header)))
  {
    return false;
  }
  // padmsg_header
  if (!std_msgs__msg__Header__copy(
      &(input->padmsg_header), &(output->padmsg_header)))
  {
    return false;
  }
  // pull_over_header
  if (!std_msgs__msg__Header__copy(
      &(input->pull_over_header), &(output->pull_over_header)))
  {
    return false;
  }
  // routing_header
  if (!std_msgs__msg__Header__copy(
      &(input->routing_header), &(output->routing_header)))
  {
    return false;
  }
  // start_planning_header
  if (!std_msgs__msg__Header__copy(
      &(input->start_planning_header), &(output->start_planning_header)))
  {
    return false;
  }
  // finish_planning_header
  if (!std_msgs__msg__Header__copy(
      &(input->finish_planning_header), &(output->finish_planning_header)))
  {
    return false;
  }
  // navigator_start_header
  if (!std_msgs__msg__Header__copy(
      &(input->navigator_start_header), &(output->navigator_start_header)))
  {
    return false;
  }
  // navigator_end_header
  if (!std_msgs__msg__Header__copy(
      &(input->navigator_end_header), &(output->navigator_end_header)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs__msg__SensorTime *
deva_planning_msgs__msg__SensorTime__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__SensorTime * msg = (deva_planning_msgs__msg__SensorTime *)allocator.allocate(sizeof(deva_planning_msgs__msg__SensorTime), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs__msg__SensorTime));
  bool success = deva_planning_msgs__msg__SensorTime__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs__msg__SensorTime__destroy(deva_planning_msgs__msg__SensorTime * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs__msg__SensorTime__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs__msg__SensorTime__Sequence__init(deva_planning_msgs__msg__SensorTime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__SensorTime * data = NULL;

  if (size) {
    data = (deva_planning_msgs__msg__SensorTime *)allocator.zero_allocate(size, sizeof(deva_planning_msgs__msg__SensorTime), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs__msg__SensorTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs__msg__SensorTime__fini(&data[i - 1]);
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
deva_planning_msgs__msg__SensorTime__Sequence__fini(deva_planning_msgs__msg__SensorTime__Sequence * array)
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
      deva_planning_msgs__msg__SensorTime__fini(&array->data[i]);
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

deva_planning_msgs__msg__SensorTime__Sequence *
deva_planning_msgs__msg__SensorTime__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__SensorTime__Sequence * array = (deva_planning_msgs__msg__SensorTime__Sequence *)allocator.allocate(sizeof(deva_planning_msgs__msg__SensorTime__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs__msg__SensorTime__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs__msg__SensorTime__Sequence__destroy(deva_planning_msgs__msg__SensorTime__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs__msg__SensorTime__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs__msg__SensorTime__Sequence__are_equal(const deva_planning_msgs__msg__SensorTime__Sequence * lhs, const deva_planning_msgs__msg__SensorTime__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs__msg__SensorTime__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs__msg__SensorTime__Sequence__copy(
  const deva_planning_msgs__msg__SensorTime__Sequence * input,
  deva_planning_msgs__msg__SensorTime__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs__msg__SensorTime);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs__msg__SensorTime * data =
      (deva_planning_msgs__msg__SensorTime *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs__msg__SensorTime__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs__msg__SensorTime__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs__msg__SensorTime__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
