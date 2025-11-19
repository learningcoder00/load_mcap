// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_localization_msgs:msg/GnssBestPose.idl
// generated code does not contain a copyright notice
#include "deva_localization_msgs/msg/detail/gnss_best_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `solution_status`
// Member `position_type`
// Member `datum_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `linear_velocity`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
deva_localization_msgs__msg__GnssBestPose__init(deva_localization_msgs__msg__GnssBestPose * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_localization_msgs__msg__GnssBestPose__fini(msg);
    return false;
  }
  // solution_status
  if (!rosidl_runtime_c__String__init(&msg->solution_status)) {
    deva_localization_msgs__msg__GnssBestPose__fini(msg);
    return false;
  }
  // position_type
  if (!rosidl_runtime_c__String__init(&msg->position_type)) {
    deva_localization_msgs__msg__GnssBestPose__fini(msg);
    return false;
  }
  // lat
  // lon
  // height_msl
  // undulation
  // datum_id
  if (!rosidl_runtime_c__String__init(&msg->datum_id)) {
    deva_localization_msgs__msg__GnssBestPose__fini(msg);
    return false;
  }
  // lat_sigma
  // lon_sigma
  // height_sigma
  // diff_age
  // solution_age
  // num_satellites_tracked
  // num_satellites_used_in_solution
  // num_gps_and_glonass_l1_used_in_solution
  // num_gps_and_glonass_l1_and_l2_used_in_solution
  // extended_solution_status
  // gps_glonass_used_mask
  // galileo_beidou_used_mask
  // linear_velocity
  if (!geometry_msgs__msg__Point__init(&msg->linear_velocity)) {
    deva_localization_msgs__msg__GnssBestPose__fini(msg);
    return false;
  }
  // velocity_latency
  return true;
}

void
deva_localization_msgs__msg__GnssBestPose__fini(deva_localization_msgs__msg__GnssBestPose * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // solution_status
  rosidl_runtime_c__String__fini(&msg->solution_status);
  // position_type
  rosidl_runtime_c__String__fini(&msg->position_type);
  // lat
  // lon
  // height_msl
  // undulation
  // datum_id
  rosidl_runtime_c__String__fini(&msg->datum_id);
  // lat_sigma
  // lon_sigma
  // height_sigma
  // diff_age
  // solution_age
  // num_satellites_tracked
  // num_satellites_used_in_solution
  // num_gps_and_glonass_l1_used_in_solution
  // num_gps_and_glonass_l1_and_l2_used_in_solution
  // extended_solution_status
  // gps_glonass_used_mask
  // galileo_beidou_used_mask
  // linear_velocity
  geometry_msgs__msg__Point__fini(&msg->linear_velocity);
  // velocity_latency
}

bool
deva_localization_msgs__msg__GnssBestPose__are_equal(const deva_localization_msgs__msg__GnssBestPose * lhs, const deva_localization_msgs__msg__GnssBestPose * rhs)
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
  // solution_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->solution_status), &(rhs->solution_status)))
  {
    return false;
  }
  // position_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->position_type), &(rhs->position_type)))
  {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // height_msl
  if (lhs->height_msl != rhs->height_msl) {
    return false;
  }
  // undulation
  if (lhs->undulation != rhs->undulation) {
    return false;
  }
  // datum_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->datum_id), &(rhs->datum_id)))
  {
    return false;
  }
  // lat_sigma
  if (lhs->lat_sigma != rhs->lat_sigma) {
    return false;
  }
  // lon_sigma
  if (lhs->lon_sigma != rhs->lon_sigma) {
    return false;
  }
  // height_sigma
  if (lhs->height_sigma != rhs->height_sigma) {
    return false;
  }
  // diff_age
  if (lhs->diff_age != rhs->diff_age) {
    return false;
  }
  // solution_age
  if (lhs->solution_age != rhs->solution_age) {
    return false;
  }
  // num_satellites_tracked
  if (lhs->num_satellites_tracked != rhs->num_satellites_tracked) {
    return false;
  }
  // num_satellites_used_in_solution
  if (lhs->num_satellites_used_in_solution != rhs->num_satellites_used_in_solution) {
    return false;
  }
  // num_gps_and_glonass_l1_used_in_solution
  if (lhs->num_gps_and_glonass_l1_used_in_solution != rhs->num_gps_and_glonass_l1_used_in_solution) {
    return false;
  }
  // num_gps_and_glonass_l1_and_l2_used_in_solution
  if (lhs->num_gps_and_glonass_l1_and_l2_used_in_solution != rhs->num_gps_and_glonass_l1_and_l2_used_in_solution) {
    return false;
  }
  // extended_solution_status
  if (lhs->extended_solution_status != rhs->extended_solution_status) {
    return false;
  }
  // gps_glonass_used_mask
  if (lhs->gps_glonass_used_mask != rhs->gps_glonass_used_mask) {
    return false;
  }
  // galileo_beidou_used_mask
  if (lhs->galileo_beidou_used_mask != rhs->galileo_beidou_used_mask) {
    return false;
  }
  // linear_velocity
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->linear_velocity), &(rhs->linear_velocity)))
  {
    return false;
  }
  // velocity_latency
  if (lhs->velocity_latency != rhs->velocity_latency) {
    return false;
  }
  return true;
}

bool
deva_localization_msgs__msg__GnssBestPose__copy(
  const deva_localization_msgs__msg__GnssBestPose * input,
  deva_localization_msgs__msg__GnssBestPose * output)
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
  // solution_status
  if (!rosidl_runtime_c__String__copy(
      &(input->solution_status), &(output->solution_status)))
  {
    return false;
  }
  // position_type
  if (!rosidl_runtime_c__String__copy(
      &(input->position_type), &(output->position_type)))
  {
    return false;
  }
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // height_msl
  output->height_msl = input->height_msl;
  // undulation
  output->undulation = input->undulation;
  // datum_id
  if (!rosidl_runtime_c__String__copy(
      &(input->datum_id), &(output->datum_id)))
  {
    return false;
  }
  // lat_sigma
  output->lat_sigma = input->lat_sigma;
  // lon_sigma
  output->lon_sigma = input->lon_sigma;
  // height_sigma
  output->height_sigma = input->height_sigma;
  // diff_age
  output->diff_age = input->diff_age;
  // solution_age
  output->solution_age = input->solution_age;
  // num_satellites_tracked
  output->num_satellites_tracked = input->num_satellites_tracked;
  // num_satellites_used_in_solution
  output->num_satellites_used_in_solution = input->num_satellites_used_in_solution;
  // num_gps_and_glonass_l1_used_in_solution
  output->num_gps_and_glonass_l1_used_in_solution = input->num_gps_and_glonass_l1_used_in_solution;
  // num_gps_and_glonass_l1_and_l2_used_in_solution
  output->num_gps_and_glonass_l1_and_l2_used_in_solution = input->num_gps_and_glonass_l1_and_l2_used_in_solution;
  // extended_solution_status
  output->extended_solution_status = input->extended_solution_status;
  // gps_glonass_used_mask
  output->gps_glonass_used_mask = input->gps_glonass_used_mask;
  // galileo_beidou_used_mask
  output->galileo_beidou_used_mask = input->galileo_beidou_used_mask;
  // linear_velocity
  if (!geometry_msgs__msg__Point__copy(
      &(input->linear_velocity), &(output->linear_velocity)))
  {
    return false;
  }
  // velocity_latency
  output->velocity_latency = input->velocity_latency;
  return true;
}

deva_localization_msgs__msg__GnssBestPose *
deva_localization_msgs__msg__GnssBestPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_localization_msgs__msg__GnssBestPose * msg = (deva_localization_msgs__msg__GnssBestPose *)allocator.allocate(sizeof(deva_localization_msgs__msg__GnssBestPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_localization_msgs__msg__GnssBestPose));
  bool success = deva_localization_msgs__msg__GnssBestPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_localization_msgs__msg__GnssBestPose__destroy(deva_localization_msgs__msg__GnssBestPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_localization_msgs__msg__GnssBestPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_localization_msgs__msg__GnssBestPose__Sequence__init(deva_localization_msgs__msg__GnssBestPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_localization_msgs__msg__GnssBestPose * data = NULL;

  if (size) {
    data = (deva_localization_msgs__msg__GnssBestPose *)allocator.zero_allocate(size, sizeof(deva_localization_msgs__msg__GnssBestPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_localization_msgs__msg__GnssBestPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_localization_msgs__msg__GnssBestPose__fini(&data[i - 1]);
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
deva_localization_msgs__msg__GnssBestPose__Sequence__fini(deva_localization_msgs__msg__GnssBestPose__Sequence * array)
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
      deva_localization_msgs__msg__GnssBestPose__fini(&array->data[i]);
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

deva_localization_msgs__msg__GnssBestPose__Sequence *
deva_localization_msgs__msg__GnssBestPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_localization_msgs__msg__GnssBestPose__Sequence * array = (deva_localization_msgs__msg__GnssBestPose__Sequence *)allocator.allocate(sizeof(deva_localization_msgs__msg__GnssBestPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_localization_msgs__msg__GnssBestPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_localization_msgs__msg__GnssBestPose__Sequence__destroy(deva_localization_msgs__msg__GnssBestPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_localization_msgs__msg__GnssBestPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_localization_msgs__msg__GnssBestPose__Sequence__are_equal(const deva_localization_msgs__msg__GnssBestPose__Sequence * lhs, const deva_localization_msgs__msg__GnssBestPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_localization_msgs__msg__GnssBestPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_localization_msgs__msg__GnssBestPose__Sequence__copy(
  const deva_localization_msgs__msg__GnssBestPose__Sequence * input,
  deva_localization_msgs__msg__GnssBestPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_localization_msgs__msg__GnssBestPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_localization_msgs__msg__GnssBestPose * data =
      (deva_localization_msgs__msg__GnssBestPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_localization_msgs__msg__GnssBestPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_localization_msgs__msg__GnssBestPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_localization_msgs__msg__GnssBestPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
