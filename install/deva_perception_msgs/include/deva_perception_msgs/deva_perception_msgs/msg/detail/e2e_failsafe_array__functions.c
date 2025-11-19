// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/E2eFailsafeArray.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/e2e_failsafe_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `e2e_failsafe_array`
#include "deva_perception_msgs/msg/detail/e2e_failsafe__functions.h"

bool
deva_perception_msgs__msg__E2eFailsafeArray__init(deva_perception_msgs__msg__E2eFailsafeArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__E2eFailsafeArray__fini(msg);
    return false;
  }
  // index
  // e2e_failsafe_array
  if (!deva_perception_msgs__msg__E2eFailsafe__Sequence__init(&msg->e2e_failsafe_array, 0)) {
    deva_perception_msgs__msg__E2eFailsafeArray__fini(msg);
    return false;
  }
  // sum_result
  // lit_area
  // scenes_driving_type
  // scenes_time_type
  // scenes_is_occlusion_type
  // scenes_is_glare_occlusion_type
  // scenes_is_tunnel_type
  // scenes_weather_type
  // scenes_road_state_type
  // scenes_wind_shield_occlusion_type
  return true;
}

void
deva_perception_msgs__msg__E2eFailsafeArray__fini(deva_perception_msgs__msg__E2eFailsafeArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // index
  // e2e_failsafe_array
  deva_perception_msgs__msg__E2eFailsafe__Sequence__fini(&msg->e2e_failsafe_array);
  // sum_result
  // lit_area
  // scenes_driving_type
  // scenes_time_type
  // scenes_is_occlusion_type
  // scenes_is_glare_occlusion_type
  // scenes_is_tunnel_type
  // scenes_weather_type
  // scenes_road_state_type
  // scenes_wind_shield_occlusion_type
}

bool
deva_perception_msgs__msg__E2eFailsafeArray__are_equal(const deva_perception_msgs__msg__E2eFailsafeArray * lhs, const deva_perception_msgs__msg__E2eFailsafeArray * rhs)
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
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // e2e_failsafe_array
  if (!deva_perception_msgs__msg__E2eFailsafe__Sequence__are_equal(
      &(lhs->e2e_failsafe_array), &(rhs->e2e_failsafe_array)))
  {
    return false;
  }
  // sum_result
  if (lhs->sum_result != rhs->sum_result) {
    return false;
  }
  // lit_area
  if (lhs->lit_area != rhs->lit_area) {
    return false;
  }
  // scenes_driving_type
  if (lhs->scenes_driving_type != rhs->scenes_driving_type) {
    return false;
  }
  // scenes_time_type
  if (lhs->scenes_time_type != rhs->scenes_time_type) {
    return false;
  }
  // scenes_is_occlusion_type
  if (lhs->scenes_is_occlusion_type != rhs->scenes_is_occlusion_type) {
    return false;
  }
  // scenes_is_glare_occlusion_type
  if (lhs->scenes_is_glare_occlusion_type != rhs->scenes_is_glare_occlusion_type) {
    return false;
  }
  // scenes_is_tunnel_type
  if (lhs->scenes_is_tunnel_type != rhs->scenes_is_tunnel_type) {
    return false;
  }
  // scenes_weather_type
  if (lhs->scenes_weather_type != rhs->scenes_weather_type) {
    return false;
  }
  // scenes_road_state_type
  if (lhs->scenes_road_state_type != rhs->scenes_road_state_type) {
    return false;
  }
  // scenes_wind_shield_occlusion_type
  if (lhs->scenes_wind_shield_occlusion_type != rhs->scenes_wind_shield_occlusion_type) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__E2eFailsafeArray__copy(
  const deva_perception_msgs__msg__E2eFailsafeArray * input,
  deva_perception_msgs__msg__E2eFailsafeArray * output)
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
  // index
  output->index = input->index;
  // e2e_failsafe_array
  if (!deva_perception_msgs__msg__E2eFailsafe__Sequence__copy(
      &(input->e2e_failsafe_array), &(output->e2e_failsafe_array)))
  {
    return false;
  }
  // sum_result
  output->sum_result = input->sum_result;
  // lit_area
  output->lit_area = input->lit_area;
  // scenes_driving_type
  output->scenes_driving_type = input->scenes_driving_type;
  // scenes_time_type
  output->scenes_time_type = input->scenes_time_type;
  // scenes_is_occlusion_type
  output->scenes_is_occlusion_type = input->scenes_is_occlusion_type;
  // scenes_is_glare_occlusion_type
  output->scenes_is_glare_occlusion_type = input->scenes_is_glare_occlusion_type;
  // scenes_is_tunnel_type
  output->scenes_is_tunnel_type = input->scenes_is_tunnel_type;
  // scenes_weather_type
  output->scenes_weather_type = input->scenes_weather_type;
  // scenes_road_state_type
  output->scenes_road_state_type = input->scenes_road_state_type;
  // scenes_wind_shield_occlusion_type
  output->scenes_wind_shield_occlusion_type = input->scenes_wind_shield_occlusion_type;
  return true;
}

deva_perception_msgs__msg__E2eFailsafeArray *
deva_perception_msgs__msg__E2eFailsafeArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eFailsafeArray * msg = (deva_perception_msgs__msg__E2eFailsafeArray *)allocator.allocate(sizeof(deva_perception_msgs__msg__E2eFailsafeArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__E2eFailsafeArray));
  bool success = deva_perception_msgs__msg__E2eFailsafeArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__E2eFailsafeArray__destroy(deva_perception_msgs__msg__E2eFailsafeArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__E2eFailsafeArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__E2eFailsafeArray__Sequence__init(deva_perception_msgs__msg__E2eFailsafeArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eFailsafeArray * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__E2eFailsafeArray *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__E2eFailsafeArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__E2eFailsafeArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__E2eFailsafeArray__fini(&data[i - 1]);
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
deva_perception_msgs__msg__E2eFailsafeArray__Sequence__fini(deva_perception_msgs__msg__E2eFailsafeArray__Sequence * array)
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
      deva_perception_msgs__msg__E2eFailsafeArray__fini(&array->data[i]);
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

deva_perception_msgs__msg__E2eFailsafeArray__Sequence *
deva_perception_msgs__msg__E2eFailsafeArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eFailsafeArray__Sequence * array = (deva_perception_msgs__msg__E2eFailsafeArray__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__E2eFailsafeArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__E2eFailsafeArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__E2eFailsafeArray__Sequence__destroy(deva_perception_msgs__msg__E2eFailsafeArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__E2eFailsafeArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__E2eFailsafeArray__Sequence__are_equal(const deva_perception_msgs__msg__E2eFailsafeArray__Sequence * lhs, const deva_perception_msgs__msg__E2eFailsafeArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__E2eFailsafeArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__E2eFailsafeArray__Sequence__copy(
  const deva_perception_msgs__msg__E2eFailsafeArray__Sequence * input,
  deva_perception_msgs__msg__E2eFailsafeArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__E2eFailsafeArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__E2eFailsafeArray * data =
      (deva_perception_msgs__msg__E2eFailsafeArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__E2eFailsafeArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__E2eFailsafeArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__E2eFailsafeArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
