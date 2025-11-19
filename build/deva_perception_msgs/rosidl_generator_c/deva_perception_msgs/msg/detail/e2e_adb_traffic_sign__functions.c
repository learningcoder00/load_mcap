// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/E2eAdbTrafficSign.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
deva_perception_msgs__msg__E2eAdbTrafficSign__init(deva_perception_msgs__msg__E2eAdbTrafficSign * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__E2eAdbTrafficSign__fini(msg);
    return false;
  }
  // traffic_sign_for_adb_adb_trk_info
  // traffic_sign_for_adb_adb_abs_dist
  // traffic_sign_for_adb_adb_vert_ag_bot
  // traffic_sign_for_adb_adb_vert_ag_top
  // traffic_sign_for_adb_adb_hozl_ag_le
  // traffic_sign_for_adb_adb_hozl_ag_ri
  // traffic_sign_for_adb_adb_detd_qly
  return true;
}

void
deva_perception_msgs__msg__E2eAdbTrafficSign__fini(deva_perception_msgs__msg__E2eAdbTrafficSign * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // traffic_sign_for_adb_adb_trk_info
  // traffic_sign_for_adb_adb_abs_dist
  // traffic_sign_for_adb_adb_vert_ag_bot
  // traffic_sign_for_adb_adb_vert_ag_top
  // traffic_sign_for_adb_adb_hozl_ag_le
  // traffic_sign_for_adb_adb_hozl_ag_ri
  // traffic_sign_for_adb_adb_detd_qly
}

bool
deva_perception_msgs__msg__E2eAdbTrafficSign__are_equal(const deva_perception_msgs__msg__E2eAdbTrafficSign * lhs, const deva_perception_msgs__msg__E2eAdbTrafficSign * rhs)
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
  // traffic_sign_for_adb_adb_trk_info
  if (lhs->traffic_sign_for_adb_adb_trk_info != rhs->traffic_sign_for_adb_adb_trk_info) {
    return false;
  }
  // traffic_sign_for_adb_adb_abs_dist
  if (lhs->traffic_sign_for_adb_adb_abs_dist != rhs->traffic_sign_for_adb_adb_abs_dist) {
    return false;
  }
  // traffic_sign_for_adb_adb_vert_ag_bot
  if (lhs->traffic_sign_for_adb_adb_vert_ag_bot != rhs->traffic_sign_for_adb_adb_vert_ag_bot) {
    return false;
  }
  // traffic_sign_for_adb_adb_vert_ag_top
  if (lhs->traffic_sign_for_adb_adb_vert_ag_top != rhs->traffic_sign_for_adb_adb_vert_ag_top) {
    return false;
  }
  // traffic_sign_for_adb_adb_hozl_ag_le
  if (lhs->traffic_sign_for_adb_adb_hozl_ag_le != rhs->traffic_sign_for_adb_adb_hozl_ag_le) {
    return false;
  }
  // traffic_sign_for_adb_adb_hozl_ag_ri
  if (lhs->traffic_sign_for_adb_adb_hozl_ag_ri != rhs->traffic_sign_for_adb_adb_hozl_ag_ri) {
    return false;
  }
  // traffic_sign_for_adb_adb_detd_qly
  if (lhs->traffic_sign_for_adb_adb_detd_qly != rhs->traffic_sign_for_adb_adb_detd_qly) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__E2eAdbTrafficSign__copy(
  const deva_perception_msgs__msg__E2eAdbTrafficSign * input,
  deva_perception_msgs__msg__E2eAdbTrafficSign * output)
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
  // traffic_sign_for_adb_adb_trk_info
  output->traffic_sign_for_adb_adb_trk_info = input->traffic_sign_for_adb_adb_trk_info;
  // traffic_sign_for_adb_adb_abs_dist
  output->traffic_sign_for_adb_adb_abs_dist = input->traffic_sign_for_adb_adb_abs_dist;
  // traffic_sign_for_adb_adb_vert_ag_bot
  output->traffic_sign_for_adb_adb_vert_ag_bot = input->traffic_sign_for_adb_adb_vert_ag_bot;
  // traffic_sign_for_adb_adb_vert_ag_top
  output->traffic_sign_for_adb_adb_vert_ag_top = input->traffic_sign_for_adb_adb_vert_ag_top;
  // traffic_sign_for_adb_adb_hozl_ag_le
  output->traffic_sign_for_adb_adb_hozl_ag_le = input->traffic_sign_for_adb_adb_hozl_ag_le;
  // traffic_sign_for_adb_adb_hozl_ag_ri
  output->traffic_sign_for_adb_adb_hozl_ag_ri = input->traffic_sign_for_adb_adb_hozl_ag_ri;
  // traffic_sign_for_adb_adb_detd_qly
  output->traffic_sign_for_adb_adb_detd_qly = input->traffic_sign_for_adb_adb_detd_qly;
  return true;
}

deva_perception_msgs__msg__E2eAdbTrafficSign *
deva_perception_msgs__msg__E2eAdbTrafficSign__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eAdbTrafficSign * msg = (deva_perception_msgs__msg__E2eAdbTrafficSign *)allocator.allocate(sizeof(deva_perception_msgs__msg__E2eAdbTrafficSign), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__E2eAdbTrafficSign));
  bool success = deva_perception_msgs__msg__E2eAdbTrafficSign__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__E2eAdbTrafficSign__destroy(deva_perception_msgs__msg__E2eAdbTrafficSign * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__E2eAdbTrafficSign__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__init(deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eAdbTrafficSign * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__E2eAdbTrafficSign *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__E2eAdbTrafficSign), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__E2eAdbTrafficSign__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__E2eAdbTrafficSign__fini(&data[i - 1]);
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
deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__fini(deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence * array)
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
      deva_perception_msgs__msg__E2eAdbTrafficSign__fini(&array->data[i]);
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

deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence *
deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence * array = (deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__destroy(deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__are_equal(const deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence * lhs, const deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__E2eAdbTrafficSign__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__copy(
  const deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence * input,
  deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__E2eAdbTrafficSign);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__E2eAdbTrafficSign * data =
      (deva_perception_msgs__msg__E2eAdbTrafficSign *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__E2eAdbTrafficSign__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__E2eAdbTrafficSign__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__E2eAdbTrafficSign__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
