// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/ChannelLaneMarking.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/channel_lane_marking__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `marking_equation_vec`
#include "deva_common_msgs/msg/detail/equation_curve__functions.h"
// Member `marking_type_vec`
#include "deva_map_msgs/msg/detail/channel_marking_type__functions.h"
// Member `marking_point_vec`
#include "deva_common_msgs/msg/detail/point2d__functions.h"

bool
deva_map_msgs__msg__ChannelLaneMarking__init(deva_map_msgs__msg__ChannelLaneMarking * msg)
{
  if (!msg) {
    return false;
  }
  // available
  // perception_lane_id
  // marking_equation_vec
  if (!deva_common_msgs__msg__EquationCurve__Sequence__init(&msg->marking_equation_vec, 0)) {
    deva_map_msgs__msg__ChannelLaneMarking__fini(msg);
    return false;
  }
  // marking_type_vec
  if (!deva_map_msgs__msg__ChannelMarkingType__Sequence__init(&msg->marking_type_vec, 0)) {
    deva_map_msgs__msg__ChannelLaneMarking__fini(msg);
    return false;
  }
  // marking_point_vec
  if (!deva_common_msgs__msg__Point2d__Sequence__init(&msg->marking_point_vec, 0)) {
    deva_map_msgs__msg__ChannelLaneMarking__fini(msg);
    return false;
  }
  return true;
}

void
deva_map_msgs__msg__ChannelLaneMarking__fini(deva_map_msgs__msg__ChannelLaneMarking * msg)
{
  if (!msg) {
    return;
  }
  // available
  // perception_lane_id
  // marking_equation_vec
  deva_common_msgs__msg__EquationCurve__Sequence__fini(&msg->marking_equation_vec);
  // marking_type_vec
  deva_map_msgs__msg__ChannelMarkingType__Sequence__fini(&msg->marking_type_vec);
  // marking_point_vec
  deva_common_msgs__msg__Point2d__Sequence__fini(&msg->marking_point_vec);
}

bool
deva_map_msgs__msg__ChannelLaneMarking__are_equal(const deva_map_msgs__msg__ChannelLaneMarking * lhs, const deva_map_msgs__msg__ChannelLaneMarking * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // available
  if (lhs->available != rhs->available) {
    return false;
  }
  // perception_lane_id
  if (lhs->perception_lane_id != rhs->perception_lane_id) {
    return false;
  }
  // marking_equation_vec
  if (!deva_common_msgs__msg__EquationCurve__Sequence__are_equal(
      &(lhs->marking_equation_vec), &(rhs->marking_equation_vec)))
  {
    return false;
  }
  // marking_type_vec
  if (!deva_map_msgs__msg__ChannelMarkingType__Sequence__are_equal(
      &(lhs->marking_type_vec), &(rhs->marking_type_vec)))
  {
    return false;
  }
  // marking_point_vec
  if (!deva_common_msgs__msg__Point2d__Sequence__are_equal(
      &(lhs->marking_point_vec), &(rhs->marking_point_vec)))
  {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__ChannelLaneMarking__copy(
  const deva_map_msgs__msg__ChannelLaneMarking * input,
  deva_map_msgs__msg__ChannelLaneMarking * output)
{
  if (!input || !output) {
    return false;
  }
  // available
  output->available = input->available;
  // perception_lane_id
  output->perception_lane_id = input->perception_lane_id;
  // marking_equation_vec
  if (!deva_common_msgs__msg__EquationCurve__Sequence__copy(
      &(input->marking_equation_vec), &(output->marking_equation_vec)))
  {
    return false;
  }
  // marking_type_vec
  if (!deva_map_msgs__msg__ChannelMarkingType__Sequence__copy(
      &(input->marking_type_vec), &(output->marking_type_vec)))
  {
    return false;
  }
  // marking_point_vec
  if (!deva_common_msgs__msg__Point2d__Sequence__copy(
      &(input->marking_point_vec), &(output->marking_point_vec)))
  {
    return false;
  }
  return true;
}

deva_map_msgs__msg__ChannelLaneMarking *
deva_map_msgs__msg__ChannelLaneMarking__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ChannelLaneMarking * msg = (deva_map_msgs__msg__ChannelLaneMarking *)allocator.allocate(sizeof(deva_map_msgs__msg__ChannelLaneMarking), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__ChannelLaneMarking));
  bool success = deva_map_msgs__msg__ChannelLaneMarking__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__ChannelLaneMarking__destroy(deva_map_msgs__msg__ChannelLaneMarking * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__ChannelLaneMarking__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__ChannelLaneMarking__Sequence__init(deva_map_msgs__msg__ChannelLaneMarking__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ChannelLaneMarking * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__ChannelLaneMarking *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__ChannelLaneMarking), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__ChannelLaneMarking__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__ChannelLaneMarking__fini(&data[i - 1]);
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
deva_map_msgs__msg__ChannelLaneMarking__Sequence__fini(deva_map_msgs__msg__ChannelLaneMarking__Sequence * array)
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
      deva_map_msgs__msg__ChannelLaneMarking__fini(&array->data[i]);
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

deva_map_msgs__msg__ChannelLaneMarking__Sequence *
deva_map_msgs__msg__ChannelLaneMarking__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ChannelLaneMarking__Sequence * array = (deva_map_msgs__msg__ChannelLaneMarking__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__ChannelLaneMarking__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__ChannelLaneMarking__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__ChannelLaneMarking__Sequence__destroy(deva_map_msgs__msg__ChannelLaneMarking__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__ChannelLaneMarking__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__ChannelLaneMarking__Sequence__are_equal(const deva_map_msgs__msg__ChannelLaneMarking__Sequence * lhs, const deva_map_msgs__msg__ChannelLaneMarking__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__ChannelLaneMarking__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__ChannelLaneMarking__Sequence__copy(
  const deva_map_msgs__msg__ChannelLaneMarking__Sequence * input,
  deva_map_msgs__msg__ChannelLaneMarking__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__ChannelLaneMarking);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__ChannelLaneMarking * data =
      (deva_map_msgs__msg__ChannelLaneMarking *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__ChannelLaneMarking__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__ChannelLaneMarking__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__ChannelLaneMarking__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
