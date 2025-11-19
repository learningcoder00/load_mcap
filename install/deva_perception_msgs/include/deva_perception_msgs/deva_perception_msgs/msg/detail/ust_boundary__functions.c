// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/USTBoundary.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/ust_boundary__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `line_segments`
#include "deva_perception_msgs/msg/detail/edge_line_segment__functions.h"
// Member `equation_curves`
#include "deva_perception_msgs/msg/detail/edge_equation_curve__functions.h"
// Member `disperse_curves`
#include "deva_perception_msgs/msg/detail/edge_disperse_curve__functions.h"
// Member `corner_points`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `waylink`
#include "deva_perception_msgs/msg/detail/way_link__functions.h"

bool
deva_perception_msgs__msg__USTBoundary__init(deva_perception_msgs__msg__USTBoundary * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // type
  // segment_type
  // line_segments
  if (!deva_perception_msgs__msg__EdgeLineSegment__Sequence__init(&msg->line_segments, 0)) {
    deva_perception_msgs__msg__USTBoundary__fini(msg);
    return false;
  }
  // equation_curves
  if (!deva_perception_msgs__msg__EdgeEquationCurve__Sequence__init(&msg->equation_curves, 0)) {
    deva_perception_msgs__msg__USTBoundary__fini(msg);
    return false;
  }
  // disperse_curves
  if (!deva_perception_msgs__msg__EdgeDisperseCurve__Sequence__init(&msg->disperse_curves, 0)) {
    deva_perception_msgs__msg__USTBoundary__fini(msg);
    return false;
  }
  // corner_points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->corner_points, 0)) {
    deva_perception_msgs__msg__USTBoundary__fini(msg);
    return false;
  }
  // waylink
  if (!deva_perception_msgs__msg__WayLink__init(&msg->waylink)) {
    deva_perception_msgs__msg__USTBoundary__fini(msg);
    return false;
  }
  // is_stable_tracked
  return true;
}

void
deva_perception_msgs__msg__USTBoundary__fini(deva_perception_msgs__msg__USTBoundary * msg)
{
  if (!msg) {
    return;
  }
  // id
  // type
  // segment_type
  // line_segments
  deva_perception_msgs__msg__EdgeLineSegment__Sequence__fini(&msg->line_segments);
  // equation_curves
  deva_perception_msgs__msg__EdgeEquationCurve__Sequence__fini(&msg->equation_curves);
  // disperse_curves
  deva_perception_msgs__msg__EdgeDisperseCurve__Sequence__fini(&msg->disperse_curves);
  // corner_points
  geometry_msgs__msg__Point__Sequence__fini(&msg->corner_points);
  // waylink
  deva_perception_msgs__msg__WayLink__fini(&msg->waylink);
  // is_stable_tracked
}

bool
deva_perception_msgs__msg__USTBoundary__are_equal(const deva_perception_msgs__msg__USTBoundary * lhs, const deva_perception_msgs__msg__USTBoundary * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // segment_type
  if (lhs->segment_type != rhs->segment_type) {
    return false;
  }
  // line_segments
  if (!deva_perception_msgs__msg__EdgeLineSegment__Sequence__are_equal(
      &(lhs->line_segments), &(rhs->line_segments)))
  {
    return false;
  }
  // equation_curves
  if (!deva_perception_msgs__msg__EdgeEquationCurve__Sequence__are_equal(
      &(lhs->equation_curves), &(rhs->equation_curves)))
  {
    return false;
  }
  // disperse_curves
  if (!deva_perception_msgs__msg__EdgeDisperseCurve__Sequence__are_equal(
      &(lhs->disperse_curves), &(rhs->disperse_curves)))
  {
    return false;
  }
  // corner_points
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->corner_points), &(rhs->corner_points)))
  {
    return false;
  }
  // waylink
  if (!deva_perception_msgs__msg__WayLink__are_equal(
      &(lhs->waylink), &(rhs->waylink)))
  {
    return false;
  }
  // is_stable_tracked
  if (lhs->is_stable_tracked != rhs->is_stable_tracked) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__USTBoundary__copy(
  const deva_perception_msgs__msg__USTBoundary * input,
  deva_perception_msgs__msg__USTBoundary * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // type
  output->type = input->type;
  // segment_type
  output->segment_type = input->segment_type;
  // line_segments
  if (!deva_perception_msgs__msg__EdgeLineSegment__Sequence__copy(
      &(input->line_segments), &(output->line_segments)))
  {
    return false;
  }
  // equation_curves
  if (!deva_perception_msgs__msg__EdgeEquationCurve__Sequence__copy(
      &(input->equation_curves), &(output->equation_curves)))
  {
    return false;
  }
  // disperse_curves
  if (!deva_perception_msgs__msg__EdgeDisperseCurve__Sequence__copy(
      &(input->disperse_curves), &(output->disperse_curves)))
  {
    return false;
  }
  // corner_points
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->corner_points), &(output->corner_points)))
  {
    return false;
  }
  // waylink
  if (!deva_perception_msgs__msg__WayLink__copy(
      &(input->waylink), &(output->waylink)))
  {
    return false;
  }
  // is_stable_tracked
  output->is_stable_tracked = input->is_stable_tracked;
  return true;
}

deva_perception_msgs__msg__USTBoundary *
deva_perception_msgs__msg__USTBoundary__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__USTBoundary * msg = (deva_perception_msgs__msg__USTBoundary *)allocator.allocate(sizeof(deva_perception_msgs__msg__USTBoundary), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__USTBoundary));
  bool success = deva_perception_msgs__msg__USTBoundary__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__USTBoundary__destroy(deva_perception_msgs__msg__USTBoundary * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__USTBoundary__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__USTBoundary__Sequence__init(deva_perception_msgs__msg__USTBoundary__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__USTBoundary * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__USTBoundary *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__USTBoundary), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__USTBoundary__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__USTBoundary__fini(&data[i - 1]);
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
deva_perception_msgs__msg__USTBoundary__Sequence__fini(deva_perception_msgs__msg__USTBoundary__Sequence * array)
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
      deva_perception_msgs__msg__USTBoundary__fini(&array->data[i]);
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

deva_perception_msgs__msg__USTBoundary__Sequence *
deva_perception_msgs__msg__USTBoundary__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__USTBoundary__Sequence * array = (deva_perception_msgs__msg__USTBoundary__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__USTBoundary__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__USTBoundary__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__USTBoundary__Sequence__destroy(deva_perception_msgs__msg__USTBoundary__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__USTBoundary__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__USTBoundary__Sequence__are_equal(const deva_perception_msgs__msg__USTBoundary__Sequence * lhs, const deva_perception_msgs__msg__USTBoundary__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__USTBoundary__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__USTBoundary__Sequence__copy(
  const deva_perception_msgs__msg__USTBoundary__Sequence * input,
  deva_perception_msgs__msg__USTBoundary__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__USTBoundary);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__USTBoundary * data =
      (deva_perception_msgs__msg__USTBoundary *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__USTBoundary__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__USTBoundary__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__USTBoundary__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
