// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/EnvObject.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/env_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `polygen`
#include "environment_model_msgs/msg/detail/vec3d__functions.h"

bool
environment_model_msgs__msg__EnvObject__init(environment_model_msgs__msg__EnvObject * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    environment_model_msgs__msg__EnvObject__fini(msg);
    return false;
  }
  // enum_object_type
  // polygen
  if (!environment_model_msgs__msg__Vec3d__Sequence__init(&msg->polygen, 0)) {
    environment_model_msgs__msg__EnvObject__fini(msg);
    return false;
  }
  return true;
}

void
environment_model_msgs__msg__EnvObject__fini(environment_model_msgs__msg__EnvObject * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // enum_object_type
  // polygen
  environment_model_msgs__msg__Vec3d__Sequence__fini(&msg->polygen);
}

bool
environment_model_msgs__msg__EnvObject__are_equal(const environment_model_msgs__msg__EnvObject * lhs, const environment_model_msgs__msg__EnvObject * rhs)
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
  // enum_object_type
  if (lhs->enum_object_type != rhs->enum_object_type) {
    return false;
  }
  // polygen
  if (!environment_model_msgs__msg__Vec3d__Sequence__are_equal(
      &(lhs->polygen), &(rhs->polygen)))
  {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__EnvObject__copy(
  const environment_model_msgs__msg__EnvObject * input,
  environment_model_msgs__msg__EnvObject * output)
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
  // enum_object_type
  output->enum_object_type = input->enum_object_type;
  // polygen
  if (!environment_model_msgs__msg__Vec3d__Sequence__copy(
      &(input->polygen), &(output->polygen)))
  {
    return false;
  }
  return true;
}

environment_model_msgs__msg__EnvObject *
environment_model_msgs__msg__EnvObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvObject * msg = (environment_model_msgs__msg__EnvObject *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__EnvObject));
  bool success = environment_model_msgs__msg__EnvObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__EnvObject__destroy(environment_model_msgs__msg__EnvObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__EnvObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__EnvObject__Sequence__init(environment_model_msgs__msg__EnvObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvObject * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__EnvObject *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__EnvObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__EnvObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__EnvObject__fini(&data[i - 1]);
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
environment_model_msgs__msg__EnvObject__Sequence__fini(environment_model_msgs__msg__EnvObject__Sequence * array)
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
      environment_model_msgs__msg__EnvObject__fini(&array->data[i]);
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

environment_model_msgs__msg__EnvObject__Sequence *
environment_model_msgs__msg__EnvObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvObject__Sequence * array = (environment_model_msgs__msg__EnvObject__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__EnvObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__EnvObject__Sequence__destroy(environment_model_msgs__msg__EnvObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__EnvObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__EnvObject__Sequence__are_equal(const environment_model_msgs__msg__EnvObject__Sequence * lhs, const environment_model_msgs__msg__EnvObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__EnvObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__EnvObject__Sequence__copy(
  const environment_model_msgs__msg__EnvObject__Sequence * input,
  environment_model_msgs__msg__EnvObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__EnvObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__EnvObject * data =
      (environment_model_msgs__msg__EnvObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__EnvObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__EnvObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__EnvObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
