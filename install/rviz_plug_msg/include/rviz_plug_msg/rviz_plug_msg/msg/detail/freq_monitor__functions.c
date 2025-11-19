// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rviz_plug_msg:msg/FreqMonitor.idl
// generated code does not contain a copyright notice
#include "rviz_plug_msg/msg/detail/freq_monitor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `topic_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `freqs`
// Member `min_thresholds`
// Member `max_thresholds`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rviz_plug_msg__msg__FreqMonitor__init(rviz_plug_msg__msg__FreqMonitor * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rviz_plug_msg__msg__FreqMonitor__fini(msg);
    return false;
  }
  // valid_length
  // topic_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->topic_names, 0)) {
    rviz_plug_msg__msg__FreqMonitor__fini(msg);
    return false;
  }
  // freqs
  if (!rosidl_runtime_c__double__Sequence__init(&msg->freqs, 0)) {
    rviz_plug_msg__msg__FreqMonitor__fini(msg);
    return false;
  }
  // min_thresholds
  if (!rosidl_runtime_c__double__Sequence__init(&msg->min_thresholds, 0)) {
    rviz_plug_msg__msg__FreqMonitor__fini(msg);
    return false;
  }
  // max_thresholds
  if (!rosidl_runtime_c__double__Sequence__init(&msg->max_thresholds, 0)) {
    rviz_plug_msg__msg__FreqMonitor__fini(msg);
    return false;
  }
  return true;
}

void
rviz_plug_msg__msg__FreqMonitor__fini(rviz_plug_msg__msg__FreqMonitor * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // valid_length
  // topic_names
  rosidl_runtime_c__String__Sequence__fini(&msg->topic_names);
  // freqs
  rosidl_runtime_c__double__Sequence__fini(&msg->freqs);
  // min_thresholds
  rosidl_runtime_c__double__Sequence__fini(&msg->min_thresholds);
  // max_thresholds
  rosidl_runtime_c__double__Sequence__fini(&msg->max_thresholds);
}

bool
rviz_plug_msg__msg__FreqMonitor__are_equal(const rviz_plug_msg__msg__FreqMonitor * lhs, const rviz_plug_msg__msg__FreqMonitor * rhs)
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
  // valid_length
  if (lhs->valid_length != rhs->valid_length) {
    return false;
  }
  // topic_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->topic_names), &(rhs->topic_names)))
  {
    return false;
  }
  // freqs
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->freqs), &(rhs->freqs)))
  {
    return false;
  }
  // min_thresholds
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->min_thresholds), &(rhs->min_thresholds)))
  {
    return false;
  }
  // max_thresholds
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->max_thresholds), &(rhs->max_thresholds)))
  {
    return false;
  }
  return true;
}

bool
rviz_plug_msg__msg__FreqMonitor__copy(
  const rviz_plug_msg__msg__FreqMonitor * input,
  rviz_plug_msg__msg__FreqMonitor * output)
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
  // valid_length
  output->valid_length = input->valid_length;
  // topic_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->topic_names), &(output->topic_names)))
  {
    return false;
  }
  // freqs
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->freqs), &(output->freqs)))
  {
    return false;
  }
  // min_thresholds
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->min_thresholds), &(output->min_thresholds)))
  {
    return false;
  }
  // max_thresholds
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->max_thresholds), &(output->max_thresholds)))
  {
    return false;
  }
  return true;
}

rviz_plug_msg__msg__FreqMonitor *
rviz_plug_msg__msg__FreqMonitor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__FreqMonitor * msg = (rviz_plug_msg__msg__FreqMonitor *)allocator.allocate(sizeof(rviz_plug_msg__msg__FreqMonitor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rviz_plug_msg__msg__FreqMonitor));
  bool success = rviz_plug_msg__msg__FreqMonitor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rviz_plug_msg__msg__FreqMonitor__destroy(rviz_plug_msg__msg__FreqMonitor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rviz_plug_msg__msg__FreqMonitor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rviz_plug_msg__msg__FreqMonitor__Sequence__init(rviz_plug_msg__msg__FreqMonitor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__FreqMonitor * data = NULL;

  if (size) {
    data = (rviz_plug_msg__msg__FreqMonitor *)allocator.zero_allocate(size, sizeof(rviz_plug_msg__msg__FreqMonitor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rviz_plug_msg__msg__FreqMonitor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rviz_plug_msg__msg__FreqMonitor__fini(&data[i - 1]);
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
rviz_plug_msg__msg__FreqMonitor__Sequence__fini(rviz_plug_msg__msg__FreqMonitor__Sequence * array)
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
      rviz_plug_msg__msg__FreqMonitor__fini(&array->data[i]);
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

rviz_plug_msg__msg__FreqMonitor__Sequence *
rviz_plug_msg__msg__FreqMonitor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_plug_msg__msg__FreqMonitor__Sequence * array = (rviz_plug_msg__msg__FreqMonitor__Sequence *)allocator.allocate(sizeof(rviz_plug_msg__msg__FreqMonitor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rviz_plug_msg__msg__FreqMonitor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rviz_plug_msg__msg__FreqMonitor__Sequence__destroy(rviz_plug_msg__msg__FreqMonitor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rviz_plug_msg__msg__FreqMonitor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rviz_plug_msg__msg__FreqMonitor__Sequence__are_equal(const rviz_plug_msg__msg__FreqMonitor__Sequence * lhs, const rviz_plug_msg__msg__FreqMonitor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rviz_plug_msg__msg__FreqMonitor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rviz_plug_msg__msg__FreqMonitor__Sequence__copy(
  const rviz_plug_msg__msg__FreqMonitor__Sequence * input,
  rviz_plug_msg__msg__FreqMonitor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rviz_plug_msg__msg__FreqMonitor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rviz_plug_msg__msg__FreqMonitor * data =
      (rviz_plug_msg__msg__FreqMonitor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rviz_plug_msg__msg__FreqMonitor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rviz_plug_msg__msg__FreqMonitor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rviz_plug_msg__msg__FreqMonitor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
