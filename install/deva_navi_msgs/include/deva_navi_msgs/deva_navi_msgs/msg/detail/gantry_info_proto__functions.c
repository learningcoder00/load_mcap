// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/GantryInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/gantry_info_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `num`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_navi_msgs__msg__GantryInfoProto__init(deva_navi_msgs__msg__GantryInfoProto * msg)
{
  if (!msg) {
    return false;
  }
  // flag
  // type
  // dist_end
  // num
  if (!rosidl_runtime_c__String__init(&msg->num)) {
    deva_navi_msgs__msg__GantryInfoProto__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    deva_navi_msgs__msg__GantryInfoProto__fini(msg);
    return false;
  }
  return true;
}

void
deva_navi_msgs__msg__GantryInfoProto__fini(deva_navi_msgs__msg__GantryInfoProto * msg)
{
  if (!msg) {
    return;
  }
  // flag
  // type
  // dist_end
  // num
  rosidl_runtime_c__String__fini(&msg->num);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
deva_navi_msgs__msg__GantryInfoProto__are_equal(const deva_navi_msgs__msg__GantryInfoProto * lhs, const deva_navi_msgs__msg__GantryInfoProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // flag
  if (lhs->flag != rhs->flag) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // dist_end
  if (lhs->dist_end != rhs->dist_end) {
    return false;
  }
  // num
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->num), &(rhs->num)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__GantryInfoProto__copy(
  const deva_navi_msgs__msg__GantryInfoProto * input,
  deva_navi_msgs__msg__GantryInfoProto * output)
{
  if (!input || !output) {
    return false;
  }
  // flag
  output->flag = input->flag;
  // type
  output->type = input->type;
  // dist_end
  output->dist_end = input->dist_end;
  // num
  if (!rosidl_runtime_c__String__copy(
      &(input->num), &(output->num)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

deva_navi_msgs__msg__GantryInfoProto *
deva_navi_msgs__msg__GantryInfoProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__GantryInfoProto * msg = (deva_navi_msgs__msg__GantryInfoProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__GantryInfoProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__GantryInfoProto));
  bool success = deva_navi_msgs__msg__GantryInfoProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__GantryInfoProto__destroy(deva_navi_msgs__msg__GantryInfoProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__GantryInfoProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__GantryInfoProto__Sequence__init(deva_navi_msgs__msg__GantryInfoProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__GantryInfoProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__GantryInfoProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__GantryInfoProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__GantryInfoProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__GantryInfoProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__GantryInfoProto__Sequence__fini(deva_navi_msgs__msg__GantryInfoProto__Sequence * array)
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
      deva_navi_msgs__msg__GantryInfoProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__GantryInfoProto__Sequence *
deva_navi_msgs__msg__GantryInfoProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__GantryInfoProto__Sequence * array = (deva_navi_msgs__msg__GantryInfoProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__GantryInfoProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__GantryInfoProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__GantryInfoProto__Sequence__destroy(deva_navi_msgs__msg__GantryInfoProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__GantryInfoProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__GantryInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__GantryInfoProto__Sequence * lhs, const deva_navi_msgs__msg__GantryInfoProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__GantryInfoProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__GantryInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__GantryInfoProto__Sequence * input,
  deva_navi_msgs__msg__GantryInfoProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__GantryInfoProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__GantryInfoProto * data =
      (deva_navi_msgs__msg__GantryInfoProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__GantryInfoProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__GantryInfoProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__GantryInfoProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
