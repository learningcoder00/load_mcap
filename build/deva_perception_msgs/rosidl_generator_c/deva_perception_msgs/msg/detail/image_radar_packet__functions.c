// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/ImageRadarPacket.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/image_radar_packet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_perception_msgs__msg__ImageRadarPacket__init(deva_perception_msgs__msg__ImageRadarPacket * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deva_perception_msgs__msg__ImageRadarPacket__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    deva_perception_msgs__msg__ImageRadarPacket__fini(msg);
    return false;
  }
  // size
  // type
  // is_bigendian
  return true;
}

void
deva_perception_msgs__msg__ImageRadarPacket__fini(deva_perception_msgs__msg__ImageRadarPacket * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
  // size
  // type
  // is_bigendian
}

bool
deva_perception_msgs__msg__ImageRadarPacket__are_equal(const deva_perception_msgs__msg__ImageRadarPacket * lhs, const deva_perception_msgs__msg__ImageRadarPacket * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // is_bigendian
  if (lhs->is_bigendian != rhs->is_bigendian) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__ImageRadarPacket__copy(
  const deva_perception_msgs__msg__ImageRadarPacket * input,
  deva_perception_msgs__msg__ImageRadarPacket * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // size
  output->size = input->size;
  // type
  output->type = input->type;
  // is_bigendian
  output->is_bigendian = input->is_bigendian;
  return true;
}

deva_perception_msgs__msg__ImageRadarPacket *
deva_perception_msgs__msg__ImageRadarPacket__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ImageRadarPacket * msg = (deva_perception_msgs__msg__ImageRadarPacket *)allocator.allocate(sizeof(deva_perception_msgs__msg__ImageRadarPacket), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__ImageRadarPacket));
  bool success = deva_perception_msgs__msg__ImageRadarPacket__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__ImageRadarPacket__destroy(deva_perception_msgs__msg__ImageRadarPacket * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__ImageRadarPacket__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__ImageRadarPacket__Sequence__init(deva_perception_msgs__msg__ImageRadarPacket__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ImageRadarPacket * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__ImageRadarPacket *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__ImageRadarPacket), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__ImageRadarPacket__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__ImageRadarPacket__fini(&data[i - 1]);
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
deva_perception_msgs__msg__ImageRadarPacket__Sequence__fini(deva_perception_msgs__msg__ImageRadarPacket__Sequence * array)
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
      deva_perception_msgs__msg__ImageRadarPacket__fini(&array->data[i]);
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

deva_perception_msgs__msg__ImageRadarPacket__Sequence *
deva_perception_msgs__msg__ImageRadarPacket__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ImageRadarPacket__Sequence * array = (deva_perception_msgs__msg__ImageRadarPacket__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__ImageRadarPacket__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__ImageRadarPacket__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__ImageRadarPacket__Sequence__destroy(deva_perception_msgs__msg__ImageRadarPacket__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__ImageRadarPacket__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__ImageRadarPacket__Sequence__are_equal(const deva_perception_msgs__msg__ImageRadarPacket__Sequence * lhs, const deva_perception_msgs__msg__ImageRadarPacket__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__ImageRadarPacket__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__ImageRadarPacket__Sequence__copy(
  const deva_perception_msgs__msg__ImageRadarPacket__Sequence * input,
  deva_perception_msgs__msg__ImageRadarPacket__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__ImageRadarPacket);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__ImageRadarPacket * data =
      (deva_perception_msgs__msg__ImageRadarPacket *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__ImageRadarPacket__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__ImageRadarPacket__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__ImageRadarPacket__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
