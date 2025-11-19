// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/RVDynamicObstacle.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `world_info`
#include "deva_perception_msgs/msg/detail/dynamic_obst_world_space_info__functions.h"
// Member `full_bbox`
// Member `tail_bbox`
#include "deva_common_msgs/msg/detail/bounding_box2d__functions.h"

bool
deva_perception_msgs__msg__RVDynamicObstacle__init(deva_perception_msgs__msg__RVDynamicObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // life_time
  // time_stamp
  // conf
  // age
  // select_level
  // id
  // mapped_type
  // world_info
  if (!deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__init(&msg->world_info)) {
    deva_perception_msgs__msg__RVDynamicObstacle__fini(msg);
    return false;
  }
  // full_bbox
  if (!deva_common_msgs__msg__BoundingBox2d__init(&msg->full_bbox)) {
    deva_perception_msgs__msg__RVDynamicObstacle__fini(msg);
    return false;
  }
  // tail_bbox
  if (!deva_common_msgs__msg__BoundingBox2d__init(&msg->tail_bbox)) {
    deva_perception_msgs__msg__RVDynamicObstacle__fini(msg);
    return false;
  }
  // full_occ_score
  // full_trunc_score
  // obj_source
  return true;
}

void
deva_perception_msgs__msg__RVDynamicObstacle__fini(deva_perception_msgs__msg__RVDynamicObstacle * msg)
{
  if (!msg) {
    return;
  }
  // life_time
  // time_stamp
  // conf
  // age
  // select_level
  // id
  // mapped_type
  // world_info
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(&msg->world_info);
  // full_bbox
  deva_common_msgs__msg__BoundingBox2d__fini(&msg->full_bbox);
  // tail_bbox
  deva_common_msgs__msg__BoundingBox2d__fini(&msg->tail_bbox);
  // full_occ_score
  // full_trunc_score
  // obj_source
}

bool
deva_perception_msgs__msg__RVDynamicObstacle__are_equal(const deva_perception_msgs__msg__RVDynamicObstacle * lhs, const deva_perception_msgs__msg__RVDynamicObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // life_time
  if (lhs->life_time != rhs->life_time) {
    return false;
  }
  // time_stamp
  if (lhs->time_stamp != rhs->time_stamp) {
    return false;
  }
  // conf
  if (lhs->conf != rhs->conf) {
    return false;
  }
  // age
  if (lhs->age != rhs->age) {
    return false;
  }
  // select_level
  if (lhs->select_level != rhs->select_level) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // mapped_type
  if (lhs->mapped_type != rhs->mapped_type) {
    return false;
  }
  // world_info
  if (!deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__are_equal(
      &(lhs->world_info), &(rhs->world_info)))
  {
    return false;
  }
  // full_bbox
  if (!deva_common_msgs__msg__BoundingBox2d__are_equal(
      &(lhs->full_bbox), &(rhs->full_bbox)))
  {
    return false;
  }
  // tail_bbox
  if (!deva_common_msgs__msg__BoundingBox2d__are_equal(
      &(lhs->tail_bbox), &(rhs->tail_bbox)))
  {
    return false;
  }
  // full_occ_score
  if (lhs->full_occ_score != rhs->full_occ_score) {
    return false;
  }
  // full_trunc_score
  if (lhs->full_trunc_score != rhs->full_trunc_score) {
    return false;
  }
  // obj_source
  if (lhs->obj_source != rhs->obj_source) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__RVDynamicObstacle__copy(
  const deva_perception_msgs__msg__RVDynamicObstacle * input,
  deva_perception_msgs__msg__RVDynamicObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // life_time
  output->life_time = input->life_time;
  // time_stamp
  output->time_stamp = input->time_stamp;
  // conf
  output->conf = input->conf;
  // age
  output->age = input->age;
  // select_level
  output->select_level = input->select_level;
  // id
  output->id = input->id;
  // mapped_type
  output->mapped_type = input->mapped_type;
  // world_info
  if (!deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__copy(
      &(input->world_info), &(output->world_info)))
  {
    return false;
  }
  // full_bbox
  if (!deva_common_msgs__msg__BoundingBox2d__copy(
      &(input->full_bbox), &(output->full_bbox)))
  {
    return false;
  }
  // tail_bbox
  if (!deva_common_msgs__msg__BoundingBox2d__copy(
      &(input->tail_bbox), &(output->tail_bbox)))
  {
    return false;
  }
  // full_occ_score
  output->full_occ_score = input->full_occ_score;
  // full_trunc_score
  output->full_trunc_score = input->full_trunc_score;
  // obj_source
  output->obj_source = input->obj_source;
  return true;
}

deva_perception_msgs__msg__RVDynamicObstacle *
deva_perception_msgs__msg__RVDynamicObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RVDynamicObstacle * msg = (deva_perception_msgs__msg__RVDynamicObstacle *)allocator.allocate(sizeof(deva_perception_msgs__msg__RVDynamicObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__RVDynamicObstacle));
  bool success = deva_perception_msgs__msg__RVDynamicObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__RVDynamicObstacle__destroy(deva_perception_msgs__msg__RVDynamicObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__RVDynamicObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__RVDynamicObstacle__Sequence__init(deva_perception_msgs__msg__RVDynamicObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RVDynamicObstacle * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__RVDynamicObstacle *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__RVDynamicObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__RVDynamicObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__RVDynamicObstacle__fini(&data[i - 1]);
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
deva_perception_msgs__msg__RVDynamicObstacle__Sequence__fini(deva_perception_msgs__msg__RVDynamicObstacle__Sequence * array)
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
      deva_perception_msgs__msg__RVDynamicObstacle__fini(&array->data[i]);
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

deva_perception_msgs__msg__RVDynamicObstacle__Sequence *
deva_perception_msgs__msg__RVDynamicObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RVDynamicObstacle__Sequence * array = (deva_perception_msgs__msg__RVDynamicObstacle__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__RVDynamicObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__RVDynamicObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__RVDynamicObstacle__Sequence__destroy(deva_perception_msgs__msg__RVDynamicObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__RVDynamicObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__RVDynamicObstacle__Sequence__are_equal(const deva_perception_msgs__msg__RVDynamicObstacle__Sequence * lhs, const deva_perception_msgs__msg__RVDynamicObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__RVDynamicObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__RVDynamicObstacle__Sequence__copy(
  const deva_perception_msgs__msg__RVDynamicObstacle__Sequence * input,
  deva_perception_msgs__msg__RVDynamicObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__RVDynamicObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__RVDynamicObstacle * data =
      (deva_perception_msgs__msg__RVDynamicObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__RVDynamicObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__RVDynamicObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__RVDynamicObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
