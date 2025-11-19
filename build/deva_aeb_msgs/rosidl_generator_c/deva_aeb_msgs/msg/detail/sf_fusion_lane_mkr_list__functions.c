// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFFusionLaneMkrList.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `clsle`
// Member `clsri`
#include "deva_aeb_msgs/msg/detail/lane_fst_info__functions.h"
// Member `secclsle`
// Member `secclsri`
// Member `thiclsle`
// Member `thiclsri`
#include "deva_aeb_msgs/msg/detail/lane_sec_info__functions.h"
// Member `rearclsle`
// Member `rearclsri`
// Member `rearsecclsle`
// Member `rearsecclsri`
// Member `rearthiclsle`
// Member `rearthiclsri`
#include "deva_aeb_msgs/msg/detail/rear_lane_info__functions.h"

bool
deva_aeb_msgs__msg__SFFusionLaneMkrList__init(deva_aeb_msgs__msg__SFFusionLaneMkrList * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // framenum
  // lanechg
  // reserved
  // distostopline
  // clsle
  if (!deva_aeb_msgs__msg__LaneFstInfo__init(&msg->clsle)) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(msg);
    return false;
  }
  // clsri
  if (!deva_aeb_msgs__msg__LaneFstInfo__init(&msg->clsri)) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(msg);
    return false;
  }
  // secclsle
  if (!deva_aeb_msgs__msg__LaneSecInfo__init(&msg->secclsle)) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(msg);
    return false;
  }
  // secclsri
  if (!deva_aeb_msgs__msg__LaneSecInfo__init(&msg->secclsri)) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(msg);
    return false;
  }
  // thiclsle
  if (!deva_aeb_msgs__msg__LaneSecInfo__init(&msg->thiclsle)) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(msg);
    return false;
  }
  // thiclsri
  if (!deva_aeb_msgs__msg__LaneSecInfo__init(&msg->thiclsri)) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(msg);
    return false;
  }
  // rearclsle
  if (!deva_aeb_msgs__msg__RearLaneInfo__init(&msg->rearclsle)) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(msg);
    return false;
  }
  // rearclsri
  if (!deva_aeb_msgs__msg__RearLaneInfo__init(&msg->rearclsri)) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(msg);
    return false;
  }
  // rearsecclsle
  if (!deva_aeb_msgs__msg__RearLaneInfo__init(&msg->rearsecclsle)) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(msg);
    return false;
  }
  // rearsecclsri
  if (!deva_aeb_msgs__msg__RearLaneInfo__init(&msg->rearsecclsri)) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(msg);
    return false;
  }
  // rearthiclsle
  if (!deva_aeb_msgs__msg__RearLaneInfo__init(&msg->rearthiclsle)) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(msg);
    return false;
  }
  // rearthiclsri
  if (!deva_aeb_msgs__msg__RearLaneInfo__init(&msg->rearthiclsri)) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(msg);
    return false;
  }
  // isambiguouslinepatternleft
  // isambiguouslinepatternright
  // cmpforvisnyaw
  return true;
}

void
deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(deva_aeb_msgs__msg__SFFusionLaneMkrList * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // framenum
  // lanechg
  // reserved
  // distostopline
  // clsle
  deva_aeb_msgs__msg__LaneFstInfo__fini(&msg->clsle);
  // clsri
  deva_aeb_msgs__msg__LaneFstInfo__fini(&msg->clsri);
  // secclsle
  deva_aeb_msgs__msg__LaneSecInfo__fini(&msg->secclsle);
  // secclsri
  deva_aeb_msgs__msg__LaneSecInfo__fini(&msg->secclsri);
  // thiclsle
  deva_aeb_msgs__msg__LaneSecInfo__fini(&msg->thiclsle);
  // thiclsri
  deva_aeb_msgs__msg__LaneSecInfo__fini(&msg->thiclsri);
  // rearclsle
  deva_aeb_msgs__msg__RearLaneInfo__fini(&msg->rearclsle);
  // rearclsri
  deva_aeb_msgs__msg__RearLaneInfo__fini(&msg->rearclsri);
  // rearsecclsle
  deva_aeb_msgs__msg__RearLaneInfo__fini(&msg->rearsecclsle);
  // rearsecclsri
  deva_aeb_msgs__msg__RearLaneInfo__fini(&msg->rearsecclsri);
  // rearthiclsle
  deva_aeb_msgs__msg__RearLaneInfo__fini(&msg->rearthiclsle);
  // rearthiclsri
  deva_aeb_msgs__msg__RearLaneInfo__fini(&msg->rearthiclsri);
  // isambiguouslinepatternleft
  // isambiguouslinepatternright
  // cmpforvisnyaw
}

bool
deva_aeb_msgs__msg__SFFusionLaneMkrList__are_equal(const deva_aeb_msgs__msg__SFFusionLaneMkrList * lhs, const deva_aeb_msgs__msg__SFFusionLaneMkrList * rhs)
{
  if (!lhs || !rhs) {
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
  // lanechg
  if (lhs->lanechg != rhs->lanechg) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // distostopline
  if (lhs->distostopline != rhs->distostopline) {
    return false;
  }
  // clsle
  if (!deva_aeb_msgs__msg__LaneFstInfo__are_equal(
      &(lhs->clsle), &(rhs->clsle)))
  {
    return false;
  }
  // clsri
  if (!deva_aeb_msgs__msg__LaneFstInfo__are_equal(
      &(lhs->clsri), &(rhs->clsri)))
  {
    return false;
  }
  // secclsle
  if (!deva_aeb_msgs__msg__LaneSecInfo__are_equal(
      &(lhs->secclsle), &(rhs->secclsle)))
  {
    return false;
  }
  // secclsri
  if (!deva_aeb_msgs__msg__LaneSecInfo__are_equal(
      &(lhs->secclsri), &(rhs->secclsri)))
  {
    return false;
  }
  // thiclsle
  if (!deva_aeb_msgs__msg__LaneSecInfo__are_equal(
      &(lhs->thiclsle), &(rhs->thiclsle)))
  {
    return false;
  }
  // thiclsri
  if (!deva_aeb_msgs__msg__LaneSecInfo__are_equal(
      &(lhs->thiclsri), &(rhs->thiclsri)))
  {
    return false;
  }
  // rearclsle
  if (!deva_aeb_msgs__msg__RearLaneInfo__are_equal(
      &(lhs->rearclsle), &(rhs->rearclsle)))
  {
    return false;
  }
  // rearclsri
  if (!deva_aeb_msgs__msg__RearLaneInfo__are_equal(
      &(lhs->rearclsri), &(rhs->rearclsri)))
  {
    return false;
  }
  // rearsecclsle
  if (!deva_aeb_msgs__msg__RearLaneInfo__are_equal(
      &(lhs->rearsecclsle), &(rhs->rearsecclsle)))
  {
    return false;
  }
  // rearsecclsri
  if (!deva_aeb_msgs__msg__RearLaneInfo__are_equal(
      &(lhs->rearsecclsri), &(rhs->rearsecclsri)))
  {
    return false;
  }
  // rearthiclsle
  if (!deva_aeb_msgs__msg__RearLaneInfo__are_equal(
      &(lhs->rearthiclsle), &(rhs->rearthiclsle)))
  {
    return false;
  }
  // rearthiclsri
  if (!deva_aeb_msgs__msg__RearLaneInfo__are_equal(
      &(lhs->rearthiclsri), &(rhs->rearthiclsri)))
  {
    return false;
  }
  // isambiguouslinepatternleft
  if (lhs->isambiguouslinepatternleft != rhs->isambiguouslinepatternleft) {
    return false;
  }
  // isambiguouslinepatternright
  if (lhs->isambiguouslinepatternright != rhs->isambiguouslinepatternright) {
    return false;
  }
  // cmpforvisnyaw
  if (lhs->cmpforvisnyaw != rhs->cmpforvisnyaw) {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFFusionLaneMkrList__copy(
  const deva_aeb_msgs__msg__SFFusionLaneMkrList * input,
  deva_aeb_msgs__msg__SFFusionLaneMkrList * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // framenum
  output->framenum = input->framenum;
  // lanechg
  output->lanechg = input->lanechg;
  // reserved
  output->reserved = input->reserved;
  // distostopline
  output->distostopline = input->distostopline;
  // clsle
  if (!deva_aeb_msgs__msg__LaneFstInfo__copy(
      &(input->clsle), &(output->clsle)))
  {
    return false;
  }
  // clsri
  if (!deva_aeb_msgs__msg__LaneFstInfo__copy(
      &(input->clsri), &(output->clsri)))
  {
    return false;
  }
  // secclsle
  if (!deva_aeb_msgs__msg__LaneSecInfo__copy(
      &(input->secclsle), &(output->secclsle)))
  {
    return false;
  }
  // secclsri
  if (!deva_aeb_msgs__msg__LaneSecInfo__copy(
      &(input->secclsri), &(output->secclsri)))
  {
    return false;
  }
  // thiclsle
  if (!deva_aeb_msgs__msg__LaneSecInfo__copy(
      &(input->thiclsle), &(output->thiclsle)))
  {
    return false;
  }
  // thiclsri
  if (!deva_aeb_msgs__msg__LaneSecInfo__copy(
      &(input->thiclsri), &(output->thiclsri)))
  {
    return false;
  }
  // rearclsle
  if (!deva_aeb_msgs__msg__RearLaneInfo__copy(
      &(input->rearclsle), &(output->rearclsle)))
  {
    return false;
  }
  // rearclsri
  if (!deva_aeb_msgs__msg__RearLaneInfo__copy(
      &(input->rearclsri), &(output->rearclsri)))
  {
    return false;
  }
  // rearsecclsle
  if (!deva_aeb_msgs__msg__RearLaneInfo__copy(
      &(input->rearsecclsle), &(output->rearsecclsle)))
  {
    return false;
  }
  // rearsecclsri
  if (!deva_aeb_msgs__msg__RearLaneInfo__copy(
      &(input->rearsecclsri), &(output->rearsecclsri)))
  {
    return false;
  }
  // rearthiclsle
  if (!deva_aeb_msgs__msg__RearLaneInfo__copy(
      &(input->rearthiclsle), &(output->rearthiclsle)))
  {
    return false;
  }
  // rearthiclsri
  if (!deva_aeb_msgs__msg__RearLaneInfo__copy(
      &(input->rearthiclsri), &(output->rearthiclsri)))
  {
    return false;
  }
  // isambiguouslinepatternleft
  output->isambiguouslinepatternleft = input->isambiguouslinepatternleft;
  // isambiguouslinepatternright
  output->isambiguouslinepatternright = input->isambiguouslinepatternright;
  // cmpforvisnyaw
  output->cmpforvisnyaw = input->cmpforvisnyaw;
  return true;
}

deva_aeb_msgs__msg__SFFusionLaneMkrList *
deva_aeb_msgs__msg__SFFusionLaneMkrList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionLaneMkrList * msg = (deva_aeb_msgs__msg__SFFusionLaneMkrList *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFFusionLaneMkrList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFFusionLaneMkrList));
  bool success = deva_aeb_msgs__msg__SFFusionLaneMkrList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFFusionLaneMkrList__destroy(deva_aeb_msgs__msg__SFFusionLaneMkrList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence__init(deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionLaneMkrList * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFFusionLaneMkrList *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFFusionLaneMkrList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFFusionLaneMkrList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence__fini(deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence * array)
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
      deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence *
deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence * array = (deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence__destroy(deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence__are_equal(const deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence * lhs, const deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFFusionLaneMkrList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence__copy(
  const deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence * input,
  deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFFusionLaneMkrList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFFusionLaneMkrList * data =
      (deva_aeb_msgs__msg__SFFusionLaneMkrList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFFusionLaneMkrList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFFusionLaneMkrList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
