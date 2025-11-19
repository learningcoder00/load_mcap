// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_ads_msgs:msg/AdsMarkerArray.idl
// generated code does not contain a copyright notice
#include "deva_ads_msgs/msg/detail/ads_marker_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `uuid`
// Member `classes`
#include "rosidl_runtime_c/string_functions.h"
// Member `color`
#include "std_msgs/msg/detail/color_rgba__functions.h"
// Member `markers`
#include "deva_ads_msgs/msg/detail/ads_marker__functions.h"

bool
deva_ads_msgs__msg__AdsMarkerArray__init(deva_ads_msgs__msg__AdsMarkerArray * msg)
{
  if (!msg) {
    return false;
  }
  // uuid
  if (!rosidl_runtime_c__String__init(&msg->uuid)) {
    deva_ads_msgs__msg__AdsMarkerArray__fini(msg);
    return false;
  }
  // classes
  if (!rosidl_runtime_c__String__init(&msg->classes)) {
    deva_ads_msgs__msg__AdsMarkerArray__fini(msg);
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__init(&msg->color)) {
    deva_ads_msgs__msg__AdsMarkerArray__fini(msg);
    return false;
  }
  // width
  // height
  // markers
  if (!deva_ads_msgs__msg__AdsMarker__Sequence__init(&msg->markers, 0)) {
    deva_ads_msgs__msg__AdsMarkerArray__fini(msg);
    return false;
  }
  return true;
}

void
deva_ads_msgs__msg__AdsMarkerArray__fini(deva_ads_msgs__msg__AdsMarkerArray * msg)
{
  if (!msg) {
    return;
  }
  // uuid
  rosidl_runtime_c__String__fini(&msg->uuid);
  // classes
  rosidl_runtime_c__String__fini(&msg->classes);
  // color
  std_msgs__msg__ColorRGBA__fini(&msg->color);
  // width
  // height
  // markers
  deva_ads_msgs__msg__AdsMarker__Sequence__fini(&msg->markers);
}

bool
deva_ads_msgs__msg__AdsMarkerArray__are_equal(const deva_ads_msgs__msg__AdsMarkerArray * lhs, const deva_ads_msgs__msg__AdsMarkerArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uuid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uuid), &(rhs->uuid)))
  {
    return false;
  }
  // classes
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->classes), &(rhs->classes)))
  {
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__are_equal(
      &(lhs->color), &(rhs->color)))
  {
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
  // markers
  if (!deva_ads_msgs__msg__AdsMarker__Sequence__are_equal(
      &(lhs->markers), &(rhs->markers)))
  {
    return false;
  }
  return true;
}

bool
deva_ads_msgs__msg__AdsMarkerArray__copy(
  const deva_ads_msgs__msg__AdsMarkerArray * input,
  deva_ads_msgs__msg__AdsMarkerArray * output)
{
  if (!input || !output) {
    return false;
  }
  // uuid
  if (!rosidl_runtime_c__String__copy(
      &(input->uuid), &(output->uuid)))
  {
    return false;
  }
  // classes
  if (!rosidl_runtime_c__String__copy(
      &(input->classes), &(output->classes)))
  {
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // markers
  if (!deva_ads_msgs__msg__AdsMarker__Sequence__copy(
      &(input->markers), &(output->markers)))
  {
    return false;
  }
  return true;
}

deva_ads_msgs__msg__AdsMarkerArray *
deva_ads_msgs__msg__AdsMarkerArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_ads_msgs__msg__AdsMarkerArray * msg = (deva_ads_msgs__msg__AdsMarkerArray *)allocator.allocate(sizeof(deva_ads_msgs__msg__AdsMarkerArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_ads_msgs__msg__AdsMarkerArray));
  bool success = deva_ads_msgs__msg__AdsMarkerArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_ads_msgs__msg__AdsMarkerArray__destroy(deva_ads_msgs__msg__AdsMarkerArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_ads_msgs__msg__AdsMarkerArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_ads_msgs__msg__AdsMarkerArray__Sequence__init(deva_ads_msgs__msg__AdsMarkerArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_ads_msgs__msg__AdsMarkerArray * data = NULL;

  if (size) {
    data = (deva_ads_msgs__msg__AdsMarkerArray *)allocator.zero_allocate(size, sizeof(deva_ads_msgs__msg__AdsMarkerArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_ads_msgs__msg__AdsMarkerArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_ads_msgs__msg__AdsMarkerArray__fini(&data[i - 1]);
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
deva_ads_msgs__msg__AdsMarkerArray__Sequence__fini(deva_ads_msgs__msg__AdsMarkerArray__Sequence * array)
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
      deva_ads_msgs__msg__AdsMarkerArray__fini(&array->data[i]);
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

deva_ads_msgs__msg__AdsMarkerArray__Sequence *
deva_ads_msgs__msg__AdsMarkerArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_ads_msgs__msg__AdsMarkerArray__Sequence * array = (deva_ads_msgs__msg__AdsMarkerArray__Sequence *)allocator.allocate(sizeof(deva_ads_msgs__msg__AdsMarkerArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_ads_msgs__msg__AdsMarkerArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_ads_msgs__msg__AdsMarkerArray__Sequence__destroy(deva_ads_msgs__msg__AdsMarkerArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_ads_msgs__msg__AdsMarkerArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_ads_msgs__msg__AdsMarkerArray__Sequence__are_equal(const deva_ads_msgs__msg__AdsMarkerArray__Sequence * lhs, const deva_ads_msgs__msg__AdsMarkerArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_ads_msgs__msg__AdsMarkerArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_ads_msgs__msg__AdsMarkerArray__Sequence__copy(
  const deva_ads_msgs__msg__AdsMarkerArray__Sequence * input,
  deva_ads_msgs__msg__AdsMarkerArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_ads_msgs__msg__AdsMarkerArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_ads_msgs__msg__AdsMarkerArray * data =
      (deva_ads_msgs__msg__AdsMarkerArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_ads_msgs__msg__AdsMarkerArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_ads_msgs__msg__AdsMarkerArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_ads_msgs__msg__AdsMarkerArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
