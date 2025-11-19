// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/SFFusionTFLListNOA.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/sf_fusion_tfl_list_noa__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `tfllist`
// Member `tfllist_all`
#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__functions.h"
// Member `pop_tfllist`
#include "deva_perception_msgs/msg/detail/po_ptflnoa__functions.h"
// Member `pop_fs_tfllist`
#include "deva_perception_msgs/msg/detail/po_p_fusion_tflnoa__functions.h"
// Member `e2e_traffic_det_maps`
#include "deva_perception_msgs/msg/detail/e2e_traffic_det_pair__functions.h"
// Member `tracked_traffic_e2e_stable_maps`
#include "deva_perception_msgs/msg/detail/traffic_e2e_stable_pair__functions.h"
// Member `rount_info`
#include "deva_perception_msgs/msg/detail/traffic_rount__functions.h"

bool
deva_perception_msgs__msg__SFFusionTFLListNOA__init(deva_perception_msgs__msg__SFFusionTFLListNOA * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__SFFusionTFLListNOA__fini(msg);
    return false;
  }
  // timestamp
  // framenum
  // tflcount
  // reserved
  // tfllist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTFLNOA__init(&msg->tfllist[i])) {
      deva_perception_msgs__msg__SFFusionTFLListNOA__fini(msg);
      return false;
    }
  }
  // validsize
  // tfllist_all
  if (!deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__init(&msg->tfllist_all, 0)) {
    deva_perception_msgs__msg__SFFusionTFLListNOA__fini(msg);
    return false;
  }
  // all_validsize
  // pop_tfllist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_perception_msgs__msg__PoPTFLNOA__init(&msg->pop_tfllist[i])) {
      deva_perception_msgs__msg__SFFusionTFLListNOA__fini(msg);
      return false;
    }
  }
  // pop_lightnum
  // pop_fs_tfllist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_perception_msgs__msg__PoPFusionTFLNOA__init(&msg->pop_fs_tfllist[i])) {
      deva_perception_msgs__msg__SFFusionTFLListNOA__fini(msg);
      return false;
    }
  }
  // pop_fs_lightnum
  // e2e_traffic_det_maps
  if (!deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__init(&msg->e2e_traffic_det_maps, 0)) {
    deva_perception_msgs__msg__SFFusionTFLListNOA__fini(msg);
    return false;
  }
  // tracked_traffic_e2e_stable_maps
  if (!deva_perception_msgs__msg__TrafficE2eStablePair__Sequence__init(&msg->tracked_traffic_e2e_stable_maps, 0)) {
    deva_perception_msgs__msg__SFFusionTFLListNOA__fini(msg);
    return false;
  }
  // tracked_traffic_e2ebc
  // tracked_traffic_e2ebc_stable
  // rount_info
  if (!deva_perception_msgs__msg__TrafficRount__init(&msg->rount_info)) {
    deva_perception_msgs__msg__SFFusionTFLListNOA__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__SFFusionTFLListNOA__fini(deva_perception_msgs__msg__SFFusionTFLListNOA * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // timestamp
  // framenum
  // tflcount
  // reserved
  // tfllist
  for (size_t i = 0; i < 8; ++i) {
    deva_perception_msgs__msg__SFFusionTFLNOA__fini(&msg->tfllist[i]);
  }
  // validsize
  // tfllist_all
  deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__fini(&msg->tfllist_all);
  // all_validsize
  // pop_tfllist
  for (size_t i = 0; i < 8; ++i) {
    deva_perception_msgs__msg__PoPTFLNOA__fini(&msg->pop_tfllist[i]);
  }
  // pop_lightnum
  // pop_fs_tfllist
  for (size_t i = 0; i < 8; ++i) {
    deva_perception_msgs__msg__PoPFusionTFLNOA__fini(&msg->pop_fs_tfllist[i]);
  }
  // pop_fs_lightnum
  // e2e_traffic_det_maps
  deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__fini(&msg->e2e_traffic_det_maps);
  // tracked_traffic_e2e_stable_maps
  deva_perception_msgs__msg__TrafficE2eStablePair__Sequence__fini(&msg->tracked_traffic_e2e_stable_maps);
  // tracked_traffic_e2ebc
  // tracked_traffic_e2ebc_stable
  // rount_info
  deva_perception_msgs__msg__TrafficRount__fini(&msg->rount_info);
}

bool
deva_perception_msgs__msg__SFFusionTFLListNOA__are_equal(const deva_perception_msgs__msg__SFFusionTFLListNOA * lhs, const deva_perception_msgs__msg__SFFusionTFLListNOA * rhs)
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
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // framenum
  if (lhs->framenum != rhs->framenum) {
    return false;
  }
  // tflcount
  if (lhs->tflcount != rhs->tflcount) {
    return false;
  }
  // reserved
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->reserved[i] != rhs->reserved[i]) {
      return false;
    }
  }
  // tfllist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTFLNOA__are_equal(
        &(lhs->tfllist[i]), &(rhs->tfllist[i])))
    {
      return false;
    }
  }
  // validsize
  if (lhs->validsize != rhs->validsize) {
    return false;
  }
  // tfllist_all
  if (!deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__are_equal(
      &(lhs->tfllist_all), &(rhs->tfllist_all)))
  {
    return false;
  }
  // all_validsize
  if (lhs->all_validsize != rhs->all_validsize) {
    return false;
  }
  // pop_tfllist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_perception_msgs__msg__PoPTFLNOA__are_equal(
        &(lhs->pop_tfllist[i]), &(rhs->pop_tfllist[i])))
    {
      return false;
    }
  }
  // pop_lightnum
  if (lhs->pop_lightnum != rhs->pop_lightnum) {
    return false;
  }
  // pop_fs_tfllist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_perception_msgs__msg__PoPFusionTFLNOA__are_equal(
        &(lhs->pop_fs_tfllist[i]), &(rhs->pop_fs_tfllist[i])))
    {
      return false;
    }
  }
  // pop_fs_lightnum
  if (lhs->pop_fs_lightnum != rhs->pop_fs_lightnum) {
    return false;
  }
  // e2e_traffic_det_maps
  if (!deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__are_equal(
      &(lhs->e2e_traffic_det_maps), &(rhs->e2e_traffic_det_maps)))
  {
    return false;
  }
  // tracked_traffic_e2e_stable_maps
  if (!deva_perception_msgs__msg__TrafficE2eStablePair__Sequence__are_equal(
      &(lhs->tracked_traffic_e2e_stable_maps), &(rhs->tracked_traffic_e2e_stable_maps)))
  {
    return false;
  }
  // tracked_traffic_e2ebc
  if (lhs->tracked_traffic_e2ebc != rhs->tracked_traffic_e2ebc) {
    return false;
  }
  // tracked_traffic_e2ebc_stable
  if (lhs->tracked_traffic_e2ebc_stable != rhs->tracked_traffic_e2ebc_stable) {
    return false;
  }
  // rount_info
  if (!deva_perception_msgs__msg__TrafficRount__are_equal(
      &(lhs->rount_info), &(rhs->rount_info)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__SFFusionTFLListNOA__copy(
  const deva_perception_msgs__msg__SFFusionTFLListNOA * input,
  deva_perception_msgs__msg__SFFusionTFLListNOA * output)
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
  // timestamp
  output->timestamp = input->timestamp;
  // framenum
  output->framenum = input->framenum;
  // tflcount
  output->tflcount = input->tflcount;
  // reserved
  for (size_t i = 0; i < 2; ++i) {
    output->reserved[i] = input->reserved[i];
  }
  // tfllist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTFLNOA__copy(
        &(input->tfllist[i]), &(output->tfllist[i])))
    {
      return false;
    }
  }
  // validsize
  output->validsize = input->validsize;
  // tfllist_all
  if (!deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__copy(
      &(input->tfllist_all), &(output->tfllist_all)))
  {
    return false;
  }
  // all_validsize
  output->all_validsize = input->all_validsize;
  // pop_tfllist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_perception_msgs__msg__PoPTFLNOA__copy(
        &(input->pop_tfllist[i]), &(output->pop_tfllist[i])))
    {
      return false;
    }
  }
  // pop_lightnum
  output->pop_lightnum = input->pop_lightnum;
  // pop_fs_tfllist
  for (size_t i = 0; i < 8; ++i) {
    if (!deva_perception_msgs__msg__PoPFusionTFLNOA__copy(
        &(input->pop_fs_tfllist[i]), &(output->pop_fs_tfllist[i])))
    {
      return false;
    }
  }
  // pop_fs_lightnum
  output->pop_fs_lightnum = input->pop_fs_lightnum;
  // e2e_traffic_det_maps
  if (!deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__copy(
      &(input->e2e_traffic_det_maps), &(output->e2e_traffic_det_maps)))
  {
    return false;
  }
  // tracked_traffic_e2e_stable_maps
  if (!deva_perception_msgs__msg__TrafficE2eStablePair__Sequence__copy(
      &(input->tracked_traffic_e2e_stable_maps), &(output->tracked_traffic_e2e_stable_maps)))
  {
    return false;
  }
  // tracked_traffic_e2ebc
  output->tracked_traffic_e2ebc = input->tracked_traffic_e2ebc;
  // tracked_traffic_e2ebc_stable
  output->tracked_traffic_e2ebc_stable = input->tracked_traffic_e2ebc_stable;
  // rount_info
  if (!deva_perception_msgs__msg__TrafficRount__copy(
      &(input->rount_info), &(output->rount_info)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__SFFusionTFLListNOA *
deva_perception_msgs__msg__SFFusionTFLListNOA__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SFFusionTFLListNOA * msg = (deva_perception_msgs__msg__SFFusionTFLListNOA *)allocator.allocate(sizeof(deva_perception_msgs__msg__SFFusionTFLListNOA), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__SFFusionTFLListNOA));
  bool success = deva_perception_msgs__msg__SFFusionTFLListNOA__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__SFFusionTFLListNOA__destroy(deva_perception_msgs__msg__SFFusionTFLListNOA * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__SFFusionTFLListNOA__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence__init(deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SFFusionTFLListNOA * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__SFFusionTFLListNOA *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__SFFusionTFLListNOA), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__SFFusionTFLListNOA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__SFFusionTFLListNOA__fini(&data[i - 1]);
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
deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence__fini(deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence * array)
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
      deva_perception_msgs__msg__SFFusionTFLListNOA__fini(&array->data[i]);
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

deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence *
deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence * array = (deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence__destroy(deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence__are_equal(const deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence * lhs, const deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTFLListNOA__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence__copy(
  const deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence * input,
  deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__SFFusionTFLListNOA);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__SFFusionTFLListNOA * data =
      (deva_perception_msgs__msg__SFFusionTFLListNOA *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__SFFusionTFLListNOA__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__SFFusionTFLListNOA__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTFLListNOA__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
