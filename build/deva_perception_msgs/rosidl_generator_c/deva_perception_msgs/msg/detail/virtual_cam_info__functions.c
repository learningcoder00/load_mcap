// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/VirtualCamInfo.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/virtual_cam_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cam_name`
// Member `distort_model`
#include "rosidl_runtime_c/string_functions.h"
// Member `resolution`
// Member `ori_intrinsic`
// Member `vir_intrinsic`
// Member `ori_extrinsic`
// Member `vir_extrinsic`
// Member `mapx`
// Member `mapy`
// Member `pinhole_intrinsic`
// Member `crops`
// Member `input_size`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_perception_msgs__msg__VirtualCamInfo__init(deva_perception_msgs__msg__VirtualCamInfo * msg)
{
  if (!msg) {
    return false;
  }
  // cam_name
  if (!rosidl_runtime_c__String__init(&msg->cam_name)) {
    deva_perception_msgs__msg__VirtualCamInfo__fini(msg);
    return false;
  }
  // resolution
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->resolution, 0)) {
    deva_perception_msgs__msg__VirtualCamInfo__fini(msg);
    return false;
  }
  // distort_model
  if (!rosidl_runtime_c__String__init(&msg->distort_model)) {
    deva_perception_msgs__msg__VirtualCamInfo__fini(msg);
    return false;
  }
  // ori_intrinsic
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ori_intrinsic, 0)) {
    deva_perception_msgs__msg__VirtualCamInfo__fini(msg);
    return false;
  }
  // vir_intrinsic
  if (!rosidl_runtime_c__float__Sequence__init(&msg->vir_intrinsic, 0)) {
    deva_perception_msgs__msg__VirtualCamInfo__fini(msg);
    return false;
  }
  // ori_extrinsic
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ori_extrinsic, 0)) {
    deva_perception_msgs__msg__VirtualCamInfo__fini(msg);
    return false;
  }
  // vir_extrinsic
  if (!rosidl_runtime_c__float__Sequence__init(&msg->vir_extrinsic, 0)) {
    deva_perception_msgs__msg__VirtualCamInfo__fini(msg);
    return false;
  }
  // mapx
  if (!rosidl_runtime_c__float__Sequence__init(&msg->mapx, 0)) {
    deva_perception_msgs__msg__VirtualCamInfo__fini(msg);
    return false;
  }
  // mapy
  if (!rosidl_runtime_c__float__Sequence__init(&msg->mapy, 0)) {
    deva_perception_msgs__msg__VirtualCamInfo__fini(msg);
    return false;
  }
  // pinhole_intrinsic
  if (!rosidl_runtime_c__float__Sequence__init(&msg->pinhole_intrinsic, 0)) {
    deva_perception_msgs__msg__VirtualCamInfo__fini(msg);
    return false;
  }
  // crops
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->crops, 0)) {
    deva_perception_msgs__msg__VirtualCamInfo__fini(msg);
    return false;
  }
  // input_size
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->input_size, 0)) {
    deva_perception_msgs__msg__VirtualCamInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__VirtualCamInfo__fini(deva_perception_msgs__msg__VirtualCamInfo * msg)
{
  if (!msg) {
    return;
  }
  // cam_name
  rosidl_runtime_c__String__fini(&msg->cam_name);
  // resolution
  rosidl_runtime_c__int32__Sequence__fini(&msg->resolution);
  // distort_model
  rosidl_runtime_c__String__fini(&msg->distort_model);
  // ori_intrinsic
  rosidl_runtime_c__float__Sequence__fini(&msg->ori_intrinsic);
  // vir_intrinsic
  rosidl_runtime_c__float__Sequence__fini(&msg->vir_intrinsic);
  // ori_extrinsic
  rosidl_runtime_c__float__Sequence__fini(&msg->ori_extrinsic);
  // vir_extrinsic
  rosidl_runtime_c__float__Sequence__fini(&msg->vir_extrinsic);
  // mapx
  rosidl_runtime_c__float__Sequence__fini(&msg->mapx);
  // mapy
  rosidl_runtime_c__float__Sequence__fini(&msg->mapy);
  // pinhole_intrinsic
  rosidl_runtime_c__float__Sequence__fini(&msg->pinhole_intrinsic);
  // crops
  rosidl_runtime_c__int32__Sequence__fini(&msg->crops);
  // input_size
  rosidl_runtime_c__int32__Sequence__fini(&msg->input_size);
}

bool
deva_perception_msgs__msg__VirtualCamInfo__are_equal(const deva_perception_msgs__msg__VirtualCamInfo * lhs, const deva_perception_msgs__msg__VirtualCamInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cam_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cam_name), &(rhs->cam_name)))
  {
    return false;
  }
  // resolution
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->resolution), &(rhs->resolution)))
  {
    return false;
  }
  // distort_model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->distort_model), &(rhs->distort_model)))
  {
    return false;
  }
  // ori_intrinsic
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->ori_intrinsic), &(rhs->ori_intrinsic)))
  {
    return false;
  }
  // vir_intrinsic
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->vir_intrinsic), &(rhs->vir_intrinsic)))
  {
    return false;
  }
  // ori_extrinsic
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->ori_extrinsic), &(rhs->ori_extrinsic)))
  {
    return false;
  }
  // vir_extrinsic
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->vir_extrinsic), &(rhs->vir_extrinsic)))
  {
    return false;
  }
  // mapx
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->mapx), &(rhs->mapx)))
  {
    return false;
  }
  // mapy
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->mapy), &(rhs->mapy)))
  {
    return false;
  }
  // pinhole_intrinsic
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->pinhole_intrinsic), &(rhs->pinhole_intrinsic)))
  {
    return false;
  }
  // crops
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->crops), &(rhs->crops)))
  {
    return false;
  }
  // input_size
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->input_size), &(rhs->input_size)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__VirtualCamInfo__copy(
  const deva_perception_msgs__msg__VirtualCamInfo * input,
  deva_perception_msgs__msg__VirtualCamInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // cam_name
  if (!rosidl_runtime_c__String__copy(
      &(input->cam_name), &(output->cam_name)))
  {
    return false;
  }
  // resolution
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->resolution), &(output->resolution)))
  {
    return false;
  }
  // distort_model
  if (!rosidl_runtime_c__String__copy(
      &(input->distort_model), &(output->distort_model)))
  {
    return false;
  }
  // ori_intrinsic
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->ori_intrinsic), &(output->ori_intrinsic)))
  {
    return false;
  }
  // vir_intrinsic
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->vir_intrinsic), &(output->vir_intrinsic)))
  {
    return false;
  }
  // ori_extrinsic
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->ori_extrinsic), &(output->ori_extrinsic)))
  {
    return false;
  }
  // vir_extrinsic
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->vir_extrinsic), &(output->vir_extrinsic)))
  {
    return false;
  }
  // mapx
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->mapx), &(output->mapx)))
  {
    return false;
  }
  // mapy
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->mapy), &(output->mapy)))
  {
    return false;
  }
  // pinhole_intrinsic
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->pinhole_intrinsic), &(output->pinhole_intrinsic)))
  {
    return false;
  }
  // crops
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->crops), &(output->crops)))
  {
    return false;
  }
  // input_size
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->input_size), &(output->input_size)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__VirtualCamInfo *
deva_perception_msgs__msg__VirtualCamInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__VirtualCamInfo * msg = (deva_perception_msgs__msg__VirtualCamInfo *)allocator.allocate(sizeof(deva_perception_msgs__msg__VirtualCamInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__VirtualCamInfo));
  bool success = deva_perception_msgs__msg__VirtualCamInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__VirtualCamInfo__destroy(deva_perception_msgs__msg__VirtualCamInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__VirtualCamInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__VirtualCamInfo__Sequence__init(deva_perception_msgs__msg__VirtualCamInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__VirtualCamInfo * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__VirtualCamInfo *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__VirtualCamInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__VirtualCamInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__VirtualCamInfo__fini(&data[i - 1]);
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
deva_perception_msgs__msg__VirtualCamInfo__Sequence__fini(deva_perception_msgs__msg__VirtualCamInfo__Sequence * array)
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
      deva_perception_msgs__msg__VirtualCamInfo__fini(&array->data[i]);
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

deva_perception_msgs__msg__VirtualCamInfo__Sequence *
deva_perception_msgs__msg__VirtualCamInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__VirtualCamInfo__Sequence * array = (deva_perception_msgs__msg__VirtualCamInfo__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__VirtualCamInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__VirtualCamInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__VirtualCamInfo__Sequence__destroy(deva_perception_msgs__msg__VirtualCamInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__VirtualCamInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__VirtualCamInfo__Sequence__are_equal(const deva_perception_msgs__msg__VirtualCamInfo__Sequence * lhs, const deva_perception_msgs__msg__VirtualCamInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__VirtualCamInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__VirtualCamInfo__Sequence__copy(
  const deva_perception_msgs__msg__VirtualCamInfo__Sequence * input,
  deva_perception_msgs__msg__VirtualCamInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__VirtualCamInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__VirtualCamInfo * data =
      (deva_perception_msgs__msg__VirtualCamInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__VirtualCamInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__VirtualCamInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__VirtualCamInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
