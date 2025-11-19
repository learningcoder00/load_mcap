// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/E2eAdbArray.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/e2e_adb_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `e2e_adb_veh_obj`
#include "deva_perception_msgs/msg/detail/e2e_adb__functions.h"
// Member `e2e_adb_traffic_sign`
#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__functions.h"

bool
deva_perception_msgs__msg__E2eAdbArray__init(deva_perception_msgs__msg__E2eAdbArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__E2eAdbArray__fini(msg);
    return false;
  }
  // pre_crash_front_data_closing_velocity
  // pre_crash_front_data_object_class
  // pre_crash_front_data_overlap
  // pre_crash_front_data_time_to_impact
  // lit_area
  // camera_sts_for_ahbc
  // too_many_cars
  // e2e_adb_veh_obj
  if (!deva_perception_msgs__msg__E2eAdb__Sequence__init(&msg->e2e_adb_veh_obj, 0)) {
    deva_perception_msgs__msg__E2eAdbArray__fini(msg);
    return false;
  }
  // e2e_adb_traffic_sign
  if (!deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__init(&msg->e2e_adb_traffic_sign, 0)) {
    deva_perception_msgs__msg__E2eAdbArray__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__E2eAdbArray__fini(deva_perception_msgs__msg__E2eAdbArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pre_crash_front_data_closing_velocity
  // pre_crash_front_data_object_class
  // pre_crash_front_data_overlap
  // pre_crash_front_data_time_to_impact
  // lit_area
  // camera_sts_for_ahbc
  // too_many_cars
  // e2e_adb_veh_obj
  deva_perception_msgs__msg__E2eAdb__Sequence__fini(&msg->e2e_adb_veh_obj);
  // e2e_adb_traffic_sign
  deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__fini(&msg->e2e_adb_traffic_sign);
}

bool
deva_perception_msgs__msg__E2eAdbArray__are_equal(const deva_perception_msgs__msg__E2eAdbArray * lhs, const deva_perception_msgs__msg__E2eAdbArray * rhs)
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
  // pre_crash_front_data_closing_velocity
  if (lhs->pre_crash_front_data_closing_velocity != rhs->pre_crash_front_data_closing_velocity) {
    return false;
  }
  // pre_crash_front_data_object_class
  if (lhs->pre_crash_front_data_object_class != rhs->pre_crash_front_data_object_class) {
    return false;
  }
  // pre_crash_front_data_overlap
  if (lhs->pre_crash_front_data_overlap != rhs->pre_crash_front_data_overlap) {
    return false;
  }
  // pre_crash_front_data_time_to_impact
  if (lhs->pre_crash_front_data_time_to_impact != rhs->pre_crash_front_data_time_to_impact) {
    return false;
  }
  // lit_area
  if (lhs->lit_area != rhs->lit_area) {
    return false;
  }
  // camera_sts_for_ahbc
  if (lhs->camera_sts_for_ahbc != rhs->camera_sts_for_ahbc) {
    return false;
  }
  // too_many_cars
  if (lhs->too_many_cars != rhs->too_many_cars) {
    return false;
  }
  // e2e_adb_veh_obj
  if (!deva_perception_msgs__msg__E2eAdb__Sequence__are_equal(
      &(lhs->e2e_adb_veh_obj), &(rhs->e2e_adb_veh_obj)))
  {
    return false;
  }
  // e2e_adb_traffic_sign
  if (!deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__are_equal(
      &(lhs->e2e_adb_traffic_sign), &(rhs->e2e_adb_traffic_sign)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__E2eAdbArray__copy(
  const deva_perception_msgs__msg__E2eAdbArray * input,
  deva_perception_msgs__msg__E2eAdbArray * output)
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
  // pre_crash_front_data_closing_velocity
  output->pre_crash_front_data_closing_velocity = input->pre_crash_front_data_closing_velocity;
  // pre_crash_front_data_object_class
  output->pre_crash_front_data_object_class = input->pre_crash_front_data_object_class;
  // pre_crash_front_data_overlap
  output->pre_crash_front_data_overlap = input->pre_crash_front_data_overlap;
  // pre_crash_front_data_time_to_impact
  output->pre_crash_front_data_time_to_impact = input->pre_crash_front_data_time_to_impact;
  // lit_area
  output->lit_area = input->lit_area;
  // camera_sts_for_ahbc
  output->camera_sts_for_ahbc = input->camera_sts_for_ahbc;
  // too_many_cars
  output->too_many_cars = input->too_many_cars;
  // e2e_adb_veh_obj
  if (!deva_perception_msgs__msg__E2eAdb__Sequence__copy(
      &(input->e2e_adb_veh_obj), &(output->e2e_adb_veh_obj)))
  {
    return false;
  }
  // e2e_adb_traffic_sign
  if (!deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__copy(
      &(input->e2e_adb_traffic_sign), &(output->e2e_adb_traffic_sign)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__E2eAdbArray *
deva_perception_msgs__msg__E2eAdbArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eAdbArray * msg = (deva_perception_msgs__msg__E2eAdbArray *)allocator.allocate(sizeof(deva_perception_msgs__msg__E2eAdbArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__E2eAdbArray));
  bool success = deva_perception_msgs__msg__E2eAdbArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__E2eAdbArray__destroy(deva_perception_msgs__msg__E2eAdbArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__E2eAdbArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__E2eAdbArray__Sequence__init(deva_perception_msgs__msg__E2eAdbArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eAdbArray * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__E2eAdbArray *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__E2eAdbArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__E2eAdbArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__E2eAdbArray__fini(&data[i - 1]);
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
deva_perception_msgs__msg__E2eAdbArray__Sequence__fini(deva_perception_msgs__msg__E2eAdbArray__Sequence * array)
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
      deva_perception_msgs__msg__E2eAdbArray__fini(&array->data[i]);
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

deva_perception_msgs__msg__E2eAdbArray__Sequence *
deva_perception_msgs__msg__E2eAdbArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eAdbArray__Sequence * array = (deva_perception_msgs__msg__E2eAdbArray__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__E2eAdbArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__E2eAdbArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__E2eAdbArray__Sequence__destroy(deva_perception_msgs__msg__E2eAdbArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__E2eAdbArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__E2eAdbArray__Sequence__are_equal(const deva_perception_msgs__msg__E2eAdbArray__Sequence * lhs, const deva_perception_msgs__msg__E2eAdbArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__E2eAdbArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__E2eAdbArray__Sequence__copy(
  const deva_perception_msgs__msg__E2eAdbArray__Sequence * input,
  deva_perception_msgs__msg__E2eAdbArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__E2eAdbArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__E2eAdbArray * data =
      (deva_perception_msgs__msg__E2eAdbArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__E2eAdbArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__E2eAdbArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__E2eAdbArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
