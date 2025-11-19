// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/WebVocalRecMsg.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/web_vocal_rec_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `voice_content`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_gaode_routing_msgs__msg__WebVocalRecMsg__init(deva_gaode_routing_msgs__msg__WebVocalRecMsg * msg)
{
  if (!msg) {
    return false;
  }
  // sequence_num
  // road_type
  // conor_type
  // lane_num
  // distance
  // voice_content
  if (!rosidl_runtime_c__String__init(&msg->voice_content)) {
    deva_gaode_routing_msgs__msg__WebVocalRecMsg__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__WebVocalRecMsg__fini(deva_gaode_routing_msgs__msg__WebVocalRecMsg * msg)
{
  if (!msg) {
    return;
  }
  // sequence_num
  // road_type
  // conor_type
  // lane_num
  // distance
  // voice_content
  rosidl_runtime_c__String__fini(&msg->voice_content);
}

bool
deva_gaode_routing_msgs__msg__WebVocalRecMsg__are_equal(const deva_gaode_routing_msgs__msg__WebVocalRecMsg * lhs, const deva_gaode_routing_msgs__msg__WebVocalRecMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sequence_num
  if (lhs->sequence_num != rhs->sequence_num) {
    return false;
  }
  // road_type
  if (lhs->road_type != rhs->road_type) {
    return false;
  }
  // conor_type
  if (lhs->conor_type != rhs->conor_type) {
    return false;
  }
  // lane_num
  if (lhs->lane_num != rhs->lane_num) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // voice_content
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->voice_content), &(rhs->voice_content)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebVocalRecMsg__copy(
  const deva_gaode_routing_msgs__msg__WebVocalRecMsg * input,
  deva_gaode_routing_msgs__msg__WebVocalRecMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // sequence_num
  output->sequence_num = input->sequence_num;
  // road_type
  output->road_type = input->road_type;
  // conor_type
  output->conor_type = input->conor_type;
  // lane_num
  output->lane_num = input->lane_num;
  // distance
  output->distance = input->distance;
  // voice_content
  if (!rosidl_runtime_c__String__copy(
      &(input->voice_content), &(output->voice_content)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__WebVocalRecMsg *
deva_gaode_routing_msgs__msg__WebVocalRecMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebVocalRecMsg * msg = (deva_gaode_routing_msgs__msg__WebVocalRecMsg *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebVocalRecMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__WebVocalRecMsg));
  bool success = deva_gaode_routing_msgs__msg__WebVocalRecMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__WebVocalRecMsg__destroy(deva_gaode_routing_msgs__msg__WebVocalRecMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__WebVocalRecMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence__init(deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebVocalRecMsg * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__WebVocalRecMsg *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__WebVocalRecMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__WebVocalRecMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__WebVocalRecMsg__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence__fini(deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence * array)
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
      deva_gaode_routing_msgs__msg__WebVocalRecMsg__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence *
deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence * array = (deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence__destroy(deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence__are_equal(const deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence * lhs, const deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebVocalRecMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence__copy(
  const deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence * input,
  deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__WebVocalRecMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__WebVocalRecMsg * data =
      (deva_gaode_routing_msgs__msg__WebVocalRecMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__WebVocalRecMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__WebVocalRecMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebVocalRecMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
