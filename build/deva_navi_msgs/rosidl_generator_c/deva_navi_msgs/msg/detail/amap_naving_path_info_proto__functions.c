// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/AmapNavingPathInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/amap_naving_path_info_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `amap_path_info`
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__functions.h"

bool
deva_navi_msgs__msg__AmapNavingPathInfoProto__init(deva_navi_msgs__msg__AmapNavingPathInfoProto * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // amap_path_info
  if (!deva_navi_msgs__msg__AmapPathInfoProto__init(&msg->amap_path_info)) {
    deva_navi_msgs__msg__AmapNavingPathInfoProto__fini(msg);
    return false;
  }
  // timestamp
  return true;
}

void
deva_navi_msgs__msg__AmapNavingPathInfoProto__fini(deva_navi_msgs__msg__AmapNavingPathInfoProto * msg)
{
  if (!msg) {
    return;
  }
  // id
  // amap_path_info
  deva_navi_msgs__msg__AmapPathInfoProto__fini(&msg->amap_path_info);
  // timestamp
}

bool
deva_navi_msgs__msg__AmapNavingPathInfoProto__are_equal(const deva_navi_msgs__msg__AmapNavingPathInfoProto * lhs, const deva_navi_msgs__msg__AmapNavingPathInfoProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // amap_path_info
  if (!deva_navi_msgs__msg__AmapPathInfoProto__are_equal(
      &(lhs->amap_path_info), &(rhs->amap_path_info)))
  {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__AmapNavingPathInfoProto__copy(
  const deva_navi_msgs__msg__AmapNavingPathInfoProto * input,
  deva_navi_msgs__msg__AmapNavingPathInfoProto * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // amap_path_info
  if (!deva_navi_msgs__msg__AmapPathInfoProto__copy(
      &(input->amap_path_info), &(output->amap_path_info)))
  {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  return true;
}

deva_navi_msgs__msg__AmapNavingPathInfoProto *
deva_navi_msgs__msg__AmapNavingPathInfoProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__AmapNavingPathInfoProto * msg = (deva_navi_msgs__msg__AmapNavingPathInfoProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__AmapNavingPathInfoProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__AmapNavingPathInfoProto));
  bool success = deva_navi_msgs__msg__AmapNavingPathInfoProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__AmapNavingPathInfoProto__destroy(deva_navi_msgs__msg__AmapNavingPathInfoProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__AmapNavingPathInfoProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence__init(deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__AmapNavingPathInfoProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__AmapNavingPathInfoProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__AmapNavingPathInfoProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__AmapNavingPathInfoProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__AmapNavingPathInfoProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence__fini(deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence * array)
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
      deva_navi_msgs__msg__AmapNavingPathInfoProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence *
deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence * array = (deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence__destroy(deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence * lhs, const deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__AmapNavingPathInfoProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence * input,
  deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__AmapNavingPathInfoProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__AmapNavingPathInfoProto * data =
      (deva_navi_msgs__msg__AmapNavingPathInfoProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__AmapNavingPathInfoProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__AmapNavingPathInfoProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__AmapNavingPathInfoProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
