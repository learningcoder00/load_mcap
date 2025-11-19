// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/LocalMap.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/local_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `map_version`
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"
// Member `st_map`
#include "deva_map_msgs/msg/detail/st_local_map__functions.h"
// Member `ust_map`
#include "deva_perception_msgs/msg/detail/ust_boundary__functions.h"
// Member `avp_map`
#include "deva_map_msgs/msg/detail/avp_local_map__functions.h"
// Member `sensor_header`
#include "deva_map_msgs/msg/detail/local_map_header__functions.h"

bool
deva_map_msgs__msg__LocalMap__init(deva_map_msgs__msg__LocalMap * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_map_msgs__msg__LocalMap__fini(msg);
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__init(&msg->map_version)) {
    deva_map_msgs__msg__LocalMap__fini(msg);
    return false;
  }
  // error_code
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    deva_map_msgs__msg__LocalMap__fini(msg);
    return false;
  }
  // map_mode
  // is_localization_mode
  // st_map
  if (!deva_map_msgs__msg__STLocalMap__init(&msg->st_map)) {
    deva_map_msgs__msg__LocalMap__fini(msg);
    return false;
  }
  // ust_map
  if (!deva_perception_msgs__msg__USTBoundary__Sequence__init(&msg->ust_map, 0)) {
    deva_map_msgs__msg__LocalMap__fini(msg);
    return false;
  }
  // avp_map
  if (!deva_map_msgs__msg__AvpLocalMap__init(&msg->avp_map)) {
    deva_map_msgs__msg__LocalMap__fini(msg);
    return false;
  }
  // sensor_header
  if (!deva_map_msgs__msg__LocalMapHeader__init(&msg->sensor_header)) {
    deva_map_msgs__msg__LocalMap__fini(msg);
    return false;
  }
  return true;
}

void
deva_map_msgs__msg__LocalMap__fini(deva_map_msgs__msg__LocalMap * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // map_version
  rosidl_runtime_c__String__fini(&msg->map_version);
  // error_code
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
  // map_mode
  // is_localization_mode
  // st_map
  deva_map_msgs__msg__STLocalMap__fini(&msg->st_map);
  // ust_map
  deva_perception_msgs__msg__USTBoundary__Sequence__fini(&msg->ust_map);
  // avp_map
  deva_map_msgs__msg__AvpLocalMap__fini(&msg->avp_map);
  // sensor_header
  deva_map_msgs__msg__LocalMapHeader__fini(&msg->sensor_header);
}

bool
deva_map_msgs__msg__LocalMap__are_equal(const deva_map_msgs__msg__LocalMap * lhs, const deva_map_msgs__msg__LocalMap * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_version), &(rhs->map_version)))
  {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  // map_mode
  if (lhs->map_mode != rhs->map_mode) {
    return false;
  }
  // is_localization_mode
  if (lhs->is_localization_mode != rhs->is_localization_mode) {
    return false;
  }
  // st_map
  if (!deva_map_msgs__msg__STLocalMap__are_equal(
      &(lhs->st_map), &(rhs->st_map)))
  {
    return false;
  }
  // ust_map
  if (!deva_perception_msgs__msg__USTBoundary__Sequence__are_equal(
      &(lhs->ust_map), &(rhs->ust_map)))
  {
    return false;
  }
  // avp_map
  if (!deva_map_msgs__msg__AvpLocalMap__are_equal(
      &(lhs->avp_map), &(rhs->avp_map)))
  {
    return false;
  }
  // sensor_header
  if (!deva_map_msgs__msg__LocalMapHeader__are_equal(
      &(lhs->sensor_header), &(rhs->sensor_header)))
  {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__LocalMap__copy(
  const deva_map_msgs__msg__LocalMap * input,
  deva_map_msgs__msg__LocalMap * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__copy(
      &(input->map_version), &(output->map_version)))
  {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  // map_mode
  output->map_mode = input->map_mode;
  // is_localization_mode
  output->is_localization_mode = input->is_localization_mode;
  // st_map
  if (!deva_map_msgs__msg__STLocalMap__copy(
      &(input->st_map), &(output->st_map)))
  {
    return false;
  }
  // ust_map
  if (!deva_perception_msgs__msg__USTBoundary__Sequence__copy(
      &(input->ust_map), &(output->ust_map)))
  {
    return false;
  }
  // avp_map
  if (!deva_map_msgs__msg__AvpLocalMap__copy(
      &(input->avp_map), &(output->avp_map)))
  {
    return false;
  }
  // sensor_header
  if (!deva_map_msgs__msg__LocalMapHeader__copy(
      &(input->sensor_header), &(output->sensor_header)))
  {
    return false;
  }
  return true;
}

deva_map_msgs__msg__LocalMap *
deva_map_msgs__msg__LocalMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__LocalMap * msg = (deva_map_msgs__msg__LocalMap *)allocator.allocate(sizeof(deva_map_msgs__msg__LocalMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__LocalMap));
  bool success = deva_map_msgs__msg__LocalMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__LocalMap__destroy(deva_map_msgs__msg__LocalMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__LocalMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__LocalMap__Sequence__init(deva_map_msgs__msg__LocalMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__LocalMap * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__LocalMap *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__LocalMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__LocalMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__LocalMap__fini(&data[i - 1]);
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
deva_map_msgs__msg__LocalMap__Sequence__fini(deva_map_msgs__msg__LocalMap__Sequence * array)
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
      deva_map_msgs__msg__LocalMap__fini(&array->data[i]);
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

deva_map_msgs__msg__LocalMap__Sequence *
deva_map_msgs__msg__LocalMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__LocalMap__Sequence * array = (deva_map_msgs__msg__LocalMap__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__LocalMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__LocalMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__LocalMap__Sequence__destroy(deva_map_msgs__msg__LocalMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__LocalMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__LocalMap__Sequence__are_equal(const deva_map_msgs__msg__LocalMap__Sequence * lhs, const deva_map_msgs__msg__LocalMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__LocalMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__LocalMap__Sequence__copy(
  const deva_map_msgs__msg__LocalMap__Sequence * input,
  deva_map_msgs__msg__LocalMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__LocalMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__LocalMap * data =
      (deva_map_msgs__msg__LocalMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__LocalMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__LocalMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__LocalMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
