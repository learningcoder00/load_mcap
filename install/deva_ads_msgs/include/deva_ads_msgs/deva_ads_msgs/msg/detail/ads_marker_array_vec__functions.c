// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_ads_msgs:msg/AdsMarkerArrayVec.idl
// generated code does not contain a copyright notice
#include "deva_ads_msgs/msg/detail/ads_marker_array_vec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `stream`
#include "rosidl_runtime_c/string_functions.h"
// Member `ads_marker_arrays`
#include "deva_ads_msgs/msg/detail/ads_marker_array__functions.h"

bool
deva_ads_msgs__msg__AdsMarkerArrayVec__init(deva_ads_msgs__msg__AdsMarkerArrayVec * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_ads_msgs__msg__AdsMarkerArrayVec__fini(msg);
    return false;
  }
  // stream
  if (!rosidl_runtime_c__String__init(&msg->stream)) {
    deva_ads_msgs__msg__AdsMarkerArrayVec__fini(msg);
    return false;
  }
  // marker_type
  // ads_marker_arrays
  if (!deva_ads_msgs__msg__AdsMarkerArray__Sequence__init(&msg->ads_marker_arrays, 0)) {
    deva_ads_msgs__msg__AdsMarkerArrayVec__fini(msg);
    return false;
  }
  return true;
}

void
deva_ads_msgs__msg__AdsMarkerArrayVec__fini(deva_ads_msgs__msg__AdsMarkerArrayVec * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // stream
  rosidl_runtime_c__String__fini(&msg->stream);
  // marker_type
  // ads_marker_arrays
  deva_ads_msgs__msg__AdsMarkerArray__Sequence__fini(&msg->ads_marker_arrays);
}

bool
deva_ads_msgs__msg__AdsMarkerArrayVec__are_equal(const deva_ads_msgs__msg__AdsMarkerArrayVec * lhs, const deva_ads_msgs__msg__AdsMarkerArrayVec * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // stream
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->stream), &(rhs->stream)))
  {
    return false;
  }
  // marker_type
  if (lhs->marker_type != rhs->marker_type) {
    return false;
  }
  // ads_marker_arrays
  if (!deva_ads_msgs__msg__AdsMarkerArray__Sequence__are_equal(
      &(lhs->ads_marker_arrays), &(rhs->ads_marker_arrays)))
  {
    return false;
  }
  return true;
}

bool
deva_ads_msgs__msg__AdsMarkerArrayVec__copy(
  const deva_ads_msgs__msg__AdsMarkerArrayVec * input,
  deva_ads_msgs__msg__AdsMarkerArrayVec * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // stream
  if (!rosidl_runtime_c__String__copy(
      &(input->stream), &(output->stream)))
  {
    return false;
  }
  // marker_type
  output->marker_type = input->marker_type;
  // ads_marker_arrays
  if (!deva_ads_msgs__msg__AdsMarkerArray__Sequence__copy(
      &(input->ads_marker_arrays), &(output->ads_marker_arrays)))
  {
    return false;
  }
  return true;
}

deva_ads_msgs__msg__AdsMarkerArrayVec *
deva_ads_msgs__msg__AdsMarkerArrayVec__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_ads_msgs__msg__AdsMarkerArrayVec * msg = (deva_ads_msgs__msg__AdsMarkerArrayVec *)allocator.allocate(sizeof(deva_ads_msgs__msg__AdsMarkerArrayVec), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_ads_msgs__msg__AdsMarkerArrayVec));
  bool success = deva_ads_msgs__msg__AdsMarkerArrayVec__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_ads_msgs__msg__AdsMarkerArrayVec__destroy(deva_ads_msgs__msg__AdsMarkerArrayVec * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_ads_msgs__msg__AdsMarkerArrayVec__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__init(deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_ads_msgs__msg__AdsMarkerArrayVec * data = NULL;

  if (size) {
    data = (deva_ads_msgs__msg__AdsMarkerArrayVec *)allocator.zero_allocate(size, sizeof(deva_ads_msgs__msg__AdsMarkerArrayVec), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_ads_msgs__msg__AdsMarkerArrayVec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_ads_msgs__msg__AdsMarkerArrayVec__fini(&data[i - 1]);
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
deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__fini(deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * array)
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
      deva_ads_msgs__msg__AdsMarkerArrayVec__fini(&array->data[i]);
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

deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence *
deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * array = (deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence *)allocator.allocate(sizeof(deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__destroy(deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__are_equal(const deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * lhs, const deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_ads_msgs__msg__AdsMarkerArrayVec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence__copy(
  const deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * input,
  deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_ads_msgs__msg__AdsMarkerArrayVec);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_ads_msgs__msg__AdsMarkerArrayVec * data =
      (deva_ads_msgs__msg__AdsMarkerArrayVec *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_ads_msgs__msg__AdsMarkerArrayVec__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_ads_msgs__msg__AdsMarkerArrayVec__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_ads_msgs__msg__AdsMarkerArrayVec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
