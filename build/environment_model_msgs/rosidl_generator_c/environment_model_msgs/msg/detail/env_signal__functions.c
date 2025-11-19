// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/EnvSignal.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/env_signal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `polygen`
// Member `virtual_brake_point`
#include "environment_model_msgs/msg/detail/vec3d__functions.h"

bool
environment_model_msgs__msg__EnvSignal__init(environment_model_msgs__msg__EnvSignal * msg)
{
  if (!msg) {
    return false;
  }
  // enum_color
  // remain_time
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    environment_model_msgs__msg__EnvSignal__fini(msg);
    return false;
  }
  // enum_shape_type
  // polygen
  if (!environment_model_msgs__msg__Vec3d__Sequence__init(&msg->polygen, 0)) {
    environment_model_msgs__msg__EnvSignal__fini(msg);
    return false;
  }
  // virtual_brake_point
  if (!environment_model_msgs__msg__Vec3d__Sequence__init(&msg->virtual_brake_point, 0)) {
    environment_model_msgs__msg__EnvSignal__fini(msg);
    return false;
  }
  // blink
  // block
  return true;
}

void
environment_model_msgs__msg__EnvSignal__fini(environment_model_msgs__msg__EnvSignal * msg)
{
  if (!msg) {
    return;
  }
  // enum_color
  // remain_time
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // enum_shape_type
  // polygen
  environment_model_msgs__msg__Vec3d__Sequence__fini(&msg->polygen);
  // virtual_brake_point
  environment_model_msgs__msg__Vec3d__Sequence__fini(&msg->virtual_brake_point);
  // blink
  // block
}

bool
environment_model_msgs__msg__EnvSignal__are_equal(const environment_model_msgs__msg__EnvSignal * lhs, const environment_model_msgs__msg__EnvSignal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enum_color
  if (lhs->enum_color != rhs->enum_color) {
    return false;
  }
  // remain_time
  if (lhs->remain_time != rhs->remain_time) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // enum_shape_type
  if (lhs->enum_shape_type != rhs->enum_shape_type) {
    return false;
  }
  // polygen
  if (!environment_model_msgs__msg__Vec3d__Sequence__are_equal(
      &(lhs->polygen), &(rhs->polygen)))
  {
    return false;
  }
  // virtual_brake_point
  if (!environment_model_msgs__msg__Vec3d__Sequence__are_equal(
      &(lhs->virtual_brake_point), &(rhs->virtual_brake_point)))
  {
    return false;
  }
  // blink
  if (lhs->blink != rhs->blink) {
    return false;
  }
  // block
  if (lhs->block != rhs->block) {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__EnvSignal__copy(
  const environment_model_msgs__msg__EnvSignal * input,
  environment_model_msgs__msg__EnvSignal * output)
{
  if (!input || !output) {
    return false;
  }
  // enum_color
  output->enum_color = input->enum_color;
  // remain_time
  output->remain_time = input->remain_time;
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // enum_shape_type
  output->enum_shape_type = input->enum_shape_type;
  // polygen
  if (!environment_model_msgs__msg__Vec3d__Sequence__copy(
      &(input->polygen), &(output->polygen)))
  {
    return false;
  }
  // virtual_brake_point
  if (!environment_model_msgs__msg__Vec3d__Sequence__copy(
      &(input->virtual_brake_point), &(output->virtual_brake_point)))
  {
    return false;
  }
  // blink
  output->blink = input->blink;
  // block
  output->block = input->block;
  return true;
}

environment_model_msgs__msg__EnvSignal *
environment_model_msgs__msg__EnvSignal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvSignal * msg = (environment_model_msgs__msg__EnvSignal *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvSignal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__EnvSignal));
  bool success = environment_model_msgs__msg__EnvSignal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__EnvSignal__destroy(environment_model_msgs__msg__EnvSignal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__EnvSignal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__EnvSignal__Sequence__init(environment_model_msgs__msg__EnvSignal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvSignal * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__EnvSignal *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__EnvSignal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__EnvSignal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__EnvSignal__fini(&data[i - 1]);
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
environment_model_msgs__msg__EnvSignal__Sequence__fini(environment_model_msgs__msg__EnvSignal__Sequence * array)
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
      environment_model_msgs__msg__EnvSignal__fini(&array->data[i]);
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

environment_model_msgs__msg__EnvSignal__Sequence *
environment_model_msgs__msg__EnvSignal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvSignal__Sequence * array = (environment_model_msgs__msg__EnvSignal__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvSignal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__EnvSignal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__EnvSignal__Sequence__destroy(environment_model_msgs__msg__EnvSignal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__EnvSignal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__EnvSignal__Sequence__are_equal(const environment_model_msgs__msg__EnvSignal__Sequence * lhs, const environment_model_msgs__msg__EnvSignal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__EnvSignal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__EnvSignal__Sequence__copy(
  const environment_model_msgs__msg__EnvSignal__Sequence * input,
  environment_model_msgs__msg__EnvSignal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__EnvSignal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__EnvSignal * data =
      (environment_model_msgs__msg__EnvSignal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__EnvSignal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__EnvSignal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__EnvSignal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
