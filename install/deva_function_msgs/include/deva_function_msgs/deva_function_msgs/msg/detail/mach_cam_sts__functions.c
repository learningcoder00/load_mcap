// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/MachCamSts.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/mach_cam_sts__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"

bool
deva_function_msgs__msg__MachCamSts__init(deva_function_msgs__msg__MachCamSts * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__MachCamSts__fini(msg);
    return false;
  }
  // trip_reset_sync_req_msg_asdm
  // cam_sts_cam_cam_heatr_actv
  // cam_sts_cam_frnt_blkd1
  // cam_sts_cam_frnt_blkd2
  // cam_sts_cam_frnt_blkd3
  // cam_sts_cam_frnt_blkd4
  // cam_sts_cam_frnt_blkd5
  // cam_sts_cam_frnt_blkd6
  // cam_sts_cam_frnt_blkd7
  // cam_sts_cam_frnt_blkd8
  // cam_sts_cam_frnt_cal_not_strtd
  // cam_sts_cam_miss_com
  // cam_status0
  // hmi_re_cam_sts0
  // frnt_side_cam_le_sts0
  // frnt_side_cam_ri_sts0
  // re_side_cam_le_sts0
  // re_side_cam_ri_sts0
  return true;
}

void
deva_function_msgs__msg__MachCamSts__fini(deva_function_msgs__msg__MachCamSts * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // trip_reset_sync_req_msg_asdm
  // cam_sts_cam_cam_heatr_actv
  // cam_sts_cam_frnt_blkd1
  // cam_sts_cam_frnt_blkd2
  // cam_sts_cam_frnt_blkd3
  // cam_sts_cam_frnt_blkd4
  // cam_sts_cam_frnt_blkd5
  // cam_sts_cam_frnt_blkd6
  // cam_sts_cam_frnt_blkd7
  // cam_sts_cam_frnt_blkd8
  // cam_sts_cam_frnt_cal_not_strtd
  // cam_sts_cam_miss_com
  // cam_status0
  // hmi_re_cam_sts0
  // frnt_side_cam_le_sts0
  // frnt_side_cam_ri_sts0
  // re_side_cam_le_sts0
  // re_side_cam_ri_sts0
}

bool
deva_function_msgs__msg__MachCamSts__are_equal(const deva_function_msgs__msg__MachCamSts * lhs, const deva_function_msgs__msg__MachCamSts * rhs)
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
  // trip_reset_sync_req_msg_asdm
  if (lhs->trip_reset_sync_req_msg_asdm != rhs->trip_reset_sync_req_msg_asdm) {
    return false;
  }
  // cam_sts_cam_cam_heatr_actv
  if (lhs->cam_sts_cam_cam_heatr_actv != rhs->cam_sts_cam_cam_heatr_actv) {
    return false;
  }
  // cam_sts_cam_frnt_blkd1
  if (lhs->cam_sts_cam_frnt_blkd1 != rhs->cam_sts_cam_frnt_blkd1) {
    return false;
  }
  // cam_sts_cam_frnt_blkd2
  if (lhs->cam_sts_cam_frnt_blkd2 != rhs->cam_sts_cam_frnt_blkd2) {
    return false;
  }
  // cam_sts_cam_frnt_blkd3
  if (lhs->cam_sts_cam_frnt_blkd3 != rhs->cam_sts_cam_frnt_blkd3) {
    return false;
  }
  // cam_sts_cam_frnt_blkd4
  if (lhs->cam_sts_cam_frnt_blkd4 != rhs->cam_sts_cam_frnt_blkd4) {
    return false;
  }
  // cam_sts_cam_frnt_blkd5
  if (lhs->cam_sts_cam_frnt_blkd5 != rhs->cam_sts_cam_frnt_blkd5) {
    return false;
  }
  // cam_sts_cam_frnt_blkd6
  if (lhs->cam_sts_cam_frnt_blkd6 != rhs->cam_sts_cam_frnt_blkd6) {
    return false;
  }
  // cam_sts_cam_frnt_blkd7
  if (lhs->cam_sts_cam_frnt_blkd7 != rhs->cam_sts_cam_frnt_blkd7) {
    return false;
  }
  // cam_sts_cam_frnt_blkd8
  if (lhs->cam_sts_cam_frnt_blkd8 != rhs->cam_sts_cam_frnt_blkd8) {
    return false;
  }
  // cam_sts_cam_frnt_cal_not_strtd
  if (lhs->cam_sts_cam_frnt_cal_not_strtd != rhs->cam_sts_cam_frnt_cal_not_strtd) {
    return false;
  }
  // cam_sts_cam_miss_com
  if (lhs->cam_sts_cam_miss_com != rhs->cam_sts_cam_miss_com) {
    return false;
  }
  // cam_status0
  if (lhs->cam_status0 != rhs->cam_status0) {
    return false;
  }
  // hmi_re_cam_sts0
  if (lhs->hmi_re_cam_sts0 != rhs->hmi_re_cam_sts0) {
    return false;
  }
  // frnt_side_cam_le_sts0
  if (lhs->frnt_side_cam_le_sts0 != rhs->frnt_side_cam_le_sts0) {
    return false;
  }
  // frnt_side_cam_ri_sts0
  if (lhs->frnt_side_cam_ri_sts0 != rhs->frnt_side_cam_ri_sts0) {
    return false;
  }
  // re_side_cam_le_sts0
  if (lhs->re_side_cam_le_sts0 != rhs->re_side_cam_le_sts0) {
    return false;
  }
  // re_side_cam_ri_sts0
  if (lhs->re_side_cam_ri_sts0 != rhs->re_side_cam_ri_sts0) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__MachCamSts__copy(
  const deva_function_msgs__msg__MachCamSts * input,
  deva_function_msgs__msg__MachCamSts * output)
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
  // trip_reset_sync_req_msg_asdm
  output->trip_reset_sync_req_msg_asdm = input->trip_reset_sync_req_msg_asdm;
  // cam_sts_cam_cam_heatr_actv
  output->cam_sts_cam_cam_heatr_actv = input->cam_sts_cam_cam_heatr_actv;
  // cam_sts_cam_frnt_blkd1
  output->cam_sts_cam_frnt_blkd1 = input->cam_sts_cam_frnt_blkd1;
  // cam_sts_cam_frnt_blkd2
  output->cam_sts_cam_frnt_blkd2 = input->cam_sts_cam_frnt_blkd2;
  // cam_sts_cam_frnt_blkd3
  output->cam_sts_cam_frnt_blkd3 = input->cam_sts_cam_frnt_blkd3;
  // cam_sts_cam_frnt_blkd4
  output->cam_sts_cam_frnt_blkd4 = input->cam_sts_cam_frnt_blkd4;
  // cam_sts_cam_frnt_blkd5
  output->cam_sts_cam_frnt_blkd5 = input->cam_sts_cam_frnt_blkd5;
  // cam_sts_cam_frnt_blkd6
  output->cam_sts_cam_frnt_blkd6 = input->cam_sts_cam_frnt_blkd6;
  // cam_sts_cam_frnt_blkd7
  output->cam_sts_cam_frnt_blkd7 = input->cam_sts_cam_frnt_blkd7;
  // cam_sts_cam_frnt_blkd8
  output->cam_sts_cam_frnt_blkd8 = input->cam_sts_cam_frnt_blkd8;
  // cam_sts_cam_frnt_cal_not_strtd
  output->cam_sts_cam_frnt_cal_not_strtd = input->cam_sts_cam_frnt_cal_not_strtd;
  // cam_sts_cam_miss_com
  output->cam_sts_cam_miss_com = input->cam_sts_cam_miss_com;
  // cam_status0
  output->cam_status0 = input->cam_status0;
  // hmi_re_cam_sts0
  output->hmi_re_cam_sts0 = input->hmi_re_cam_sts0;
  // frnt_side_cam_le_sts0
  output->frnt_side_cam_le_sts0 = input->frnt_side_cam_le_sts0;
  // frnt_side_cam_ri_sts0
  output->frnt_side_cam_ri_sts0 = input->frnt_side_cam_ri_sts0;
  // re_side_cam_le_sts0
  output->re_side_cam_le_sts0 = input->re_side_cam_le_sts0;
  // re_side_cam_ri_sts0
  output->re_side_cam_ri_sts0 = input->re_side_cam_ri_sts0;
  return true;
}

deva_function_msgs__msg__MachCamSts *
deva_function_msgs__msg__MachCamSts__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachCamSts * msg = (deva_function_msgs__msg__MachCamSts *)allocator.allocate(sizeof(deva_function_msgs__msg__MachCamSts), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__MachCamSts));
  bool success = deva_function_msgs__msg__MachCamSts__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__MachCamSts__destroy(deva_function_msgs__msg__MachCamSts * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__MachCamSts__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__MachCamSts__Sequence__init(deva_function_msgs__msg__MachCamSts__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachCamSts * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__MachCamSts *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__MachCamSts), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__MachCamSts__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__MachCamSts__fini(&data[i - 1]);
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
deva_function_msgs__msg__MachCamSts__Sequence__fini(deva_function_msgs__msg__MachCamSts__Sequence * array)
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
      deva_function_msgs__msg__MachCamSts__fini(&array->data[i]);
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

deva_function_msgs__msg__MachCamSts__Sequence *
deva_function_msgs__msg__MachCamSts__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachCamSts__Sequence * array = (deva_function_msgs__msg__MachCamSts__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__MachCamSts__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__MachCamSts__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__MachCamSts__Sequence__destroy(deva_function_msgs__msg__MachCamSts__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__MachCamSts__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__MachCamSts__Sequence__are_equal(const deva_function_msgs__msg__MachCamSts__Sequence * lhs, const deva_function_msgs__msg__MachCamSts__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__MachCamSts__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__MachCamSts__Sequence__copy(
  const deva_function_msgs__msg__MachCamSts__Sequence * input,
  deva_function_msgs__msg__MachCamSts__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__MachCamSts);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__MachCamSts * data =
      (deva_function_msgs__msg__MachCamSts *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__MachCamSts__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__MachCamSts__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__MachCamSts__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
