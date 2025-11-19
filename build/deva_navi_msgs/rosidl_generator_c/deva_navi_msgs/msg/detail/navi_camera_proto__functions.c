// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/NaviCameraProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/navi_camera_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `coord_3d`
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"
// Member `speed`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `sub_cameras`
#include "deva_navi_msgs/msg/detail/navi_sub_camera_proto__functions.h"

bool
deva_navi_msgs__msg__NaviCameraProto__init(deva_navi_msgs__msg__NaviCameraProto * msg)
{
  if (!msg) {
    return false;
  }
  // coord_3d
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__init(&msg->coord_3d)) {
    deva_navi_msgs__msg__NaviCameraProto__fini(msg);
    return false;
  }
  // type
  // distance
  // speed
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->speed, 0)) {
    deva_navi_msgs__msg__NaviCameraProto__fini(msg);
    return false;
  }
  // road_class
  // segment_index
  // link_index
  // distance_to_end
  // sub_cameras
  if (!deva_navi_msgs__msg__NaviSubCameraProto__Sequence__init(&msg->sub_cameras, 0)) {
    deva_navi_msgs__msg__NaviCameraProto__fini(msg);
    return false;
  }
  // penalty
  // id
  // is_new
  // is_hidden
  return true;
}

void
deva_navi_msgs__msg__NaviCameraProto__fini(deva_navi_msgs__msg__NaviCameraProto * msg)
{
  if (!msg) {
    return;
  }
  // coord_3d
  deva_navi_msgs__msg__Coord3DDoubleProto__fini(&msg->coord_3d);
  // type
  // distance
  // speed
  rosidl_runtime_c__int32__Sequence__fini(&msg->speed);
  // road_class
  // segment_index
  // link_index
  // distance_to_end
  // sub_cameras
  deva_navi_msgs__msg__NaviSubCameraProto__Sequence__fini(&msg->sub_cameras);
  // penalty
  // id
  // is_new
  // is_hidden
}

bool
deva_navi_msgs__msg__NaviCameraProto__are_equal(const deva_navi_msgs__msg__NaviCameraProto * lhs, const deva_navi_msgs__msg__NaviCameraProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // coord_3d
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__are_equal(
      &(lhs->coord_3d), &(rhs->coord_3d)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // road_class
  if (lhs->road_class != rhs->road_class) {
    return false;
  }
  // segment_index
  if (lhs->segment_index != rhs->segment_index) {
    return false;
  }
  // link_index
  if (lhs->link_index != rhs->link_index) {
    return false;
  }
  // distance_to_end
  if (lhs->distance_to_end != rhs->distance_to_end) {
    return false;
  }
  // sub_cameras
  if (!deva_navi_msgs__msg__NaviSubCameraProto__Sequence__are_equal(
      &(lhs->sub_cameras), &(rhs->sub_cameras)))
  {
    return false;
  }
  // penalty
  if (lhs->penalty != rhs->penalty) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // is_new
  if (lhs->is_new != rhs->is_new) {
    return false;
  }
  // is_hidden
  if (lhs->is_hidden != rhs->is_hidden) {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__NaviCameraProto__copy(
  const deva_navi_msgs__msg__NaviCameraProto * input,
  deva_navi_msgs__msg__NaviCameraProto * output)
{
  if (!input || !output) {
    return false;
  }
  // coord_3d
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__copy(
      &(input->coord_3d), &(output->coord_3d)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // distance
  output->distance = input->distance;
  // speed
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // road_class
  output->road_class = input->road_class;
  // segment_index
  output->segment_index = input->segment_index;
  // link_index
  output->link_index = input->link_index;
  // distance_to_end
  output->distance_to_end = input->distance_to_end;
  // sub_cameras
  if (!deva_navi_msgs__msg__NaviSubCameraProto__Sequence__copy(
      &(input->sub_cameras), &(output->sub_cameras)))
  {
    return false;
  }
  // penalty
  output->penalty = input->penalty;
  // id
  output->id = input->id;
  // is_new
  output->is_new = input->is_new;
  // is_hidden
  output->is_hidden = input->is_hidden;
  return true;
}

deva_navi_msgs__msg__NaviCameraProto *
deva_navi_msgs__msg__NaviCameraProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__NaviCameraProto * msg = (deva_navi_msgs__msg__NaviCameraProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__NaviCameraProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__NaviCameraProto));
  bool success = deva_navi_msgs__msg__NaviCameraProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__NaviCameraProto__destroy(deva_navi_msgs__msg__NaviCameraProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__NaviCameraProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__NaviCameraProto__Sequence__init(deva_navi_msgs__msg__NaviCameraProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__NaviCameraProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__NaviCameraProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__NaviCameraProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__NaviCameraProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__NaviCameraProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__NaviCameraProto__Sequence__fini(deva_navi_msgs__msg__NaviCameraProto__Sequence * array)
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
      deva_navi_msgs__msg__NaviCameraProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__NaviCameraProto__Sequence *
deva_navi_msgs__msg__NaviCameraProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__NaviCameraProto__Sequence * array = (deva_navi_msgs__msg__NaviCameraProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__NaviCameraProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__NaviCameraProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__NaviCameraProto__Sequence__destroy(deva_navi_msgs__msg__NaviCameraProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__NaviCameraProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__NaviCameraProto__Sequence__are_equal(const deva_navi_msgs__msg__NaviCameraProto__Sequence * lhs, const deva_navi_msgs__msg__NaviCameraProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__NaviCameraProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__NaviCameraProto__Sequence__copy(
  const deva_navi_msgs__msg__NaviCameraProto__Sequence * input,
  deva_navi_msgs__msg__NaviCameraProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__NaviCameraProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__NaviCameraProto * data =
      (deva_navi_msgs__msg__NaviCameraProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__NaviCameraProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__NaviCameraProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__NaviCameraProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
