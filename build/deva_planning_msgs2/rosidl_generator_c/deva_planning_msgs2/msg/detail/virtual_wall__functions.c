// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/VirtualWall.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/virtual_wall__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_planning_msgs2__msg__VirtualWall__init(deva_planning_msgs2__msg__VirtualWall * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    deva_planning_msgs2__msg__VirtualWall__fini(msg);
    return false;
  }
  // x_center
  // y_center
  // z_center
  // theta
  // width
  // height
  // length
  return true;
}

void
deva_planning_msgs2__msg__VirtualWall__fini(deva_planning_msgs2__msg__VirtualWall * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // x_center
  // y_center
  // z_center
  // theta
  // width
  // height
  // length
}

bool
deva_planning_msgs2__msg__VirtualWall__are_equal(const deva_planning_msgs2__msg__VirtualWall * lhs, const deva_planning_msgs2__msg__VirtualWall * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // x_center
  if (lhs->x_center != rhs->x_center) {
    return false;
  }
  // y_center
  if (lhs->y_center != rhs->y_center) {
    return false;
  }
  // z_center
  if (lhs->z_center != rhs->z_center) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__VirtualWall__copy(
  const deva_planning_msgs2__msg__VirtualWall * input,
  deva_planning_msgs2__msg__VirtualWall * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // x_center
  output->x_center = input->x_center;
  // y_center
  output->y_center = input->y_center;
  // z_center
  output->z_center = input->z_center;
  // theta
  output->theta = input->theta;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // length
  output->length = input->length;
  return true;
}

deva_planning_msgs2__msg__VirtualWall *
deva_planning_msgs2__msg__VirtualWall__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__VirtualWall * msg = (deva_planning_msgs2__msg__VirtualWall *)allocator.allocate(sizeof(deva_planning_msgs2__msg__VirtualWall), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__VirtualWall));
  bool success = deva_planning_msgs2__msg__VirtualWall__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__VirtualWall__destroy(deva_planning_msgs2__msg__VirtualWall * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__VirtualWall__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__VirtualWall__Sequence__init(deva_planning_msgs2__msg__VirtualWall__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__VirtualWall * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__VirtualWall *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__VirtualWall), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__VirtualWall__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__VirtualWall__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__VirtualWall__Sequence__fini(deva_planning_msgs2__msg__VirtualWall__Sequence * array)
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
      deva_planning_msgs2__msg__VirtualWall__fini(&array->data[i]);
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

deva_planning_msgs2__msg__VirtualWall__Sequence *
deva_planning_msgs2__msg__VirtualWall__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__VirtualWall__Sequence * array = (deva_planning_msgs2__msg__VirtualWall__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__VirtualWall__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__VirtualWall__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__VirtualWall__Sequence__destroy(deva_planning_msgs2__msg__VirtualWall__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__VirtualWall__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__VirtualWall__Sequence__are_equal(const deva_planning_msgs2__msg__VirtualWall__Sequence * lhs, const deva_planning_msgs2__msg__VirtualWall__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__VirtualWall__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__VirtualWall__Sequence__copy(
  const deva_planning_msgs2__msg__VirtualWall__Sequence * input,
  deva_planning_msgs2__msg__VirtualWall__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__VirtualWall);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__VirtualWall * data =
      (deva_planning_msgs2__msg__VirtualWall *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__VirtualWall__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__VirtualWall__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__VirtualWall__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
