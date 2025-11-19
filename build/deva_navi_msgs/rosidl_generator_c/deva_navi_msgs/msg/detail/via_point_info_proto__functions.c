// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/ViaPointInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/via_point_info_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `show`
// Member `projective`
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"
// Member `poi_name`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_navi_msgs__msg__ViaPointInfoProto__init(deva_navi_msgs__msg__ViaPointInfoProto * msg)
{
  if (!msg) {
    return false;
  }
  // segment_idx
  // direction
  // show
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__init(&msg->show)) {
    deva_navi_msgs__msg__ViaPointInfoProto__fini(msg);
    return false;
  }
  // projective
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__init(&msg->projective)) {
    deva_navi_msgs__msg__ViaPointInfoProto__fini(msg);
    return false;
  }
  // poi_name
  if (!rosidl_runtime_c__String__init(&msg->poi_name)) {
    deva_navi_msgs__msg__ViaPointInfoProto__fini(msg);
    return false;
  }
  return true;
}

void
deva_navi_msgs__msg__ViaPointInfoProto__fini(deva_navi_msgs__msg__ViaPointInfoProto * msg)
{
  if (!msg) {
    return;
  }
  // segment_idx
  // direction
  // show
  deva_navi_msgs__msg__Coord3DDoubleProto__fini(&msg->show);
  // projective
  deva_navi_msgs__msg__Coord3DDoubleProto__fini(&msg->projective);
  // poi_name
  rosidl_runtime_c__String__fini(&msg->poi_name);
}

bool
deva_navi_msgs__msg__ViaPointInfoProto__are_equal(const deva_navi_msgs__msg__ViaPointInfoProto * lhs, const deva_navi_msgs__msg__ViaPointInfoProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // segment_idx
  if (lhs->segment_idx != rhs->segment_idx) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // show
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__are_equal(
      &(lhs->show), &(rhs->show)))
  {
    return false;
  }
  // projective
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__are_equal(
      &(lhs->projective), &(rhs->projective)))
  {
    return false;
  }
  // poi_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->poi_name), &(rhs->poi_name)))
  {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__ViaPointInfoProto__copy(
  const deva_navi_msgs__msg__ViaPointInfoProto * input,
  deva_navi_msgs__msg__ViaPointInfoProto * output)
{
  if (!input || !output) {
    return false;
  }
  // segment_idx
  output->segment_idx = input->segment_idx;
  // direction
  output->direction = input->direction;
  // show
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__copy(
      &(input->show), &(output->show)))
  {
    return false;
  }
  // projective
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__copy(
      &(input->projective), &(output->projective)))
  {
    return false;
  }
  // poi_name
  if (!rosidl_runtime_c__String__copy(
      &(input->poi_name), &(output->poi_name)))
  {
    return false;
  }
  return true;
}

deva_navi_msgs__msg__ViaPointInfoProto *
deva_navi_msgs__msg__ViaPointInfoProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__ViaPointInfoProto * msg = (deva_navi_msgs__msg__ViaPointInfoProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__ViaPointInfoProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__ViaPointInfoProto));
  bool success = deva_navi_msgs__msg__ViaPointInfoProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__ViaPointInfoProto__destroy(deva_navi_msgs__msg__ViaPointInfoProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__ViaPointInfoProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__ViaPointInfoProto__Sequence__init(deva_navi_msgs__msg__ViaPointInfoProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__ViaPointInfoProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__ViaPointInfoProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__ViaPointInfoProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__ViaPointInfoProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__ViaPointInfoProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__ViaPointInfoProto__Sequence__fini(deva_navi_msgs__msg__ViaPointInfoProto__Sequence * array)
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
      deva_navi_msgs__msg__ViaPointInfoProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__ViaPointInfoProto__Sequence *
deva_navi_msgs__msg__ViaPointInfoProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__ViaPointInfoProto__Sequence * array = (deva_navi_msgs__msg__ViaPointInfoProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__ViaPointInfoProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__ViaPointInfoProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__ViaPointInfoProto__Sequence__destroy(deva_navi_msgs__msg__ViaPointInfoProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__ViaPointInfoProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__ViaPointInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__ViaPointInfoProto__Sequence * lhs, const deva_navi_msgs__msg__ViaPointInfoProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__ViaPointInfoProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__ViaPointInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__ViaPointInfoProto__Sequence * input,
  deva_navi_msgs__msg__ViaPointInfoProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__ViaPointInfoProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__ViaPointInfoProto * data =
      (deva_navi_msgs__msg__ViaPointInfoProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__ViaPointInfoProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__ViaPointInfoProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__ViaPointInfoProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
