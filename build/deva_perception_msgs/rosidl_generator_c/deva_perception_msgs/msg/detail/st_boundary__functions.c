// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/STBoundary.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/st_boundary__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `equation_curves`
// Member `extend_equation_curve`
#include "deva_common_msgs/msg/detail/equation_curve__functions.h"
// Member `disperse_curve`
// Member `extend_disperse_curve`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `lane_type`
#include "deva_perception_msgs/msg/detail/lane_type__functions.h"

bool
deva_perception_msgs__msg__STBoundary__init(deva_perception_msgs__msg__STBoundary * msg)
{
  if (!msg) {
    return false;
  }
  // has_equation
  // equation_curves
  if (!deva_common_msgs__msg__EquationCurve__Sequence__init(&msg->equation_curves, 0)) {
    deva_perception_msgs__msg__STBoundary__fini(msg);
    return false;
  }
  // has_disperse
  // disperse_curve
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->disperse_curve, 0)) {
    deva_perception_msgs__msg__STBoundary__fini(msg);
    return false;
  }
  // has_extend_equation
  // extend_equation_curve
  if (!deva_common_msgs__msg__EquationCurve__init(&msg->extend_equation_curve)) {
    deva_perception_msgs__msg__STBoundary__fini(msg);
    return false;
  }
  // has_extend_disperse
  // extend_disperse_curve
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->extend_disperse_curve, 0)) {
    deva_perception_msgs__msg__STBoundary__fini(msg);
    return false;
  }
  // lane_type
  if (!deva_perception_msgs__msg__LaneType__Sequence__init(&msg->lane_type, 0)) {
    deva_perception_msgs__msg__STBoundary__fini(msg);
    return false;
  }
  // position
  // id
  // left_id
  // right_id
  // confidence
  // reserve
  // global_track_id
  return true;
}

void
deva_perception_msgs__msg__STBoundary__fini(deva_perception_msgs__msg__STBoundary * msg)
{
  if (!msg) {
    return;
  }
  // has_equation
  // equation_curves
  deva_common_msgs__msg__EquationCurve__Sequence__fini(&msg->equation_curves);
  // has_disperse
  // disperse_curve
  geometry_msgs__msg__Point__Sequence__fini(&msg->disperse_curve);
  // has_extend_equation
  // extend_equation_curve
  deva_common_msgs__msg__EquationCurve__fini(&msg->extend_equation_curve);
  // has_extend_disperse
  // extend_disperse_curve
  geometry_msgs__msg__Point__Sequence__fini(&msg->extend_disperse_curve);
  // lane_type
  deva_perception_msgs__msg__LaneType__Sequence__fini(&msg->lane_type);
  // position
  // id
  // left_id
  // right_id
  // confidence
  // reserve
  // global_track_id
}

bool
deva_perception_msgs__msg__STBoundary__are_equal(const deva_perception_msgs__msg__STBoundary * lhs, const deva_perception_msgs__msg__STBoundary * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // has_equation
  if (lhs->has_equation != rhs->has_equation) {
    return false;
  }
  // equation_curves
  if (!deva_common_msgs__msg__EquationCurve__Sequence__are_equal(
      &(lhs->equation_curves), &(rhs->equation_curves)))
  {
    return false;
  }
  // has_disperse
  if (lhs->has_disperse != rhs->has_disperse) {
    return false;
  }
  // disperse_curve
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->disperse_curve), &(rhs->disperse_curve)))
  {
    return false;
  }
  // has_extend_equation
  if (lhs->has_extend_equation != rhs->has_extend_equation) {
    return false;
  }
  // extend_equation_curve
  if (!deva_common_msgs__msg__EquationCurve__are_equal(
      &(lhs->extend_equation_curve), &(rhs->extend_equation_curve)))
  {
    return false;
  }
  // has_extend_disperse
  if (lhs->has_extend_disperse != rhs->has_extend_disperse) {
    return false;
  }
  // extend_disperse_curve
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->extend_disperse_curve), &(rhs->extend_disperse_curve)))
  {
    return false;
  }
  // lane_type
  if (!deva_perception_msgs__msg__LaneType__Sequence__are_equal(
      &(lhs->lane_type), &(rhs->lane_type)))
  {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // left_id
  if (lhs->left_id != rhs->left_id) {
    return false;
  }
  // right_id
  if (lhs->right_id != rhs->right_id) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // reserve
  if (lhs->reserve != rhs->reserve) {
    return false;
  }
  // global_track_id
  if (lhs->global_track_id != rhs->global_track_id) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__STBoundary__copy(
  const deva_perception_msgs__msg__STBoundary * input,
  deva_perception_msgs__msg__STBoundary * output)
{
  if (!input || !output) {
    return false;
  }
  // has_equation
  output->has_equation = input->has_equation;
  // equation_curves
  if (!deva_common_msgs__msg__EquationCurve__Sequence__copy(
      &(input->equation_curves), &(output->equation_curves)))
  {
    return false;
  }
  // has_disperse
  output->has_disperse = input->has_disperse;
  // disperse_curve
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->disperse_curve), &(output->disperse_curve)))
  {
    return false;
  }
  // has_extend_equation
  output->has_extend_equation = input->has_extend_equation;
  // extend_equation_curve
  if (!deva_common_msgs__msg__EquationCurve__copy(
      &(input->extend_equation_curve), &(output->extend_equation_curve)))
  {
    return false;
  }
  // has_extend_disperse
  output->has_extend_disperse = input->has_extend_disperse;
  // extend_disperse_curve
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->extend_disperse_curve), &(output->extend_disperse_curve)))
  {
    return false;
  }
  // lane_type
  if (!deva_perception_msgs__msg__LaneType__Sequence__copy(
      &(input->lane_type), &(output->lane_type)))
  {
    return false;
  }
  // position
  output->position = input->position;
  // id
  output->id = input->id;
  // left_id
  output->left_id = input->left_id;
  // right_id
  output->right_id = input->right_id;
  // confidence
  output->confidence = input->confidence;
  // reserve
  output->reserve = input->reserve;
  // global_track_id
  output->global_track_id = input->global_track_id;
  return true;
}

deva_perception_msgs__msg__STBoundary *
deva_perception_msgs__msg__STBoundary__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__STBoundary * msg = (deva_perception_msgs__msg__STBoundary *)allocator.allocate(sizeof(deva_perception_msgs__msg__STBoundary), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__STBoundary));
  bool success = deva_perception_msgs__msg__STBoundary__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__STBoundary__destroy(deva_perception_msgs__msg__STBoundary * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__STBoundary__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__STBoundary__Sequence__init(deva_perception_msgs__msg__STBoundary__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__STBoundary * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__STBoundary *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__STBoundary), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__STBoundary__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__STBoundary__fini(&data[i - 1]);
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
deva_perception_msgs__msg__STBoundary__Sequence__fini(deva_perception_msgs__msg__STBoundary__Sequence * array)
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
      deva_perception_msgs__msg__STBoundary__fini(&array->data[i]);
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

deva_perception_msgs__msg__STBoundary__Sequence *
deva_perception_msgs__msg__STBoundary__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__STBoundary__Sequence * array = (deva_perception_msgs__msg__STBoundary__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__STBoundary__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__STBoundary__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__STBoundary__Sequence__destroy(deva_perception_msgs__msg__STBoundary__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__STBoundary__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__STBoundary__Sequence__are_equal(const deva_perception_msgs__msg__STBoundary__Sequence * lhs, const deva_perception_msgs__msg__STBoundary__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__STBoundary__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__STBoundary__Sequence__copy(
  const deva_perception_msgs__msg__STBoundary__Sequence * input,
  deva_perception_msgs__msg__STBoundary__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__STBoundary);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__STBoundary * data =
      (deva_perception_msgs__msg__STBoundary *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__STBoundary__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__STBoundary__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__STBoundary__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
