// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/AvpNavigationPlanningDebugInfo.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/avp_navigation_planning_debug_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
// Member `planning_header`
// Member `prediction_header`
// Member `localization_header`
// Member `chassis_header`
// Member `avp_local_map_header`
// Member `perception_map_header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `avp_debug_info`
#include "deva_planning_msgs2/msg/detail/avp_debug_info__functions.h"
// Member `nav_openspace_debug_info`
#include "deva_planning_msgs2/msg/detail/nav_openspace_debug_info__functions.h"

bool
deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__init(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(msg);
    return false;
  }
  // planning_header
  if (!std_msgs__msg__Header__init(&msg->planning_header)) {
    deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(msg);
    return false;
  }
  // prediction_header
  if (!std_msgs__msg__Header__init(&msg->prediction_header)) {
    deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(msg);
    return false;
  }
  // localization_header
  if (!std_msgs__msg__Header__init(&msg->localization_header)) {
    deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(msg);
    return false;
  }
  // chassis_header
  if (!std_msgs__msg__Header__init(&msg->chassis_header)) {
    deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(msg);
    return false;
  }
  // avp_local_map_header
  if (!std_msgs__msg__Header__init(&msg->avp_local_map_header)) {
    deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(msg);
    return false;
  }
  // perception_map_header
  if (!std_msgs__msg__Header__init(&msg->perception_map_header)) {
    deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(msg);
    return false;
  }
  // avp_debug_info
  if (!deva_planning_msgs2__msg__AvpDebugInfo__init(&msg->avp_debug_info)) {
    deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(msg);
    return false;
  }
  // nav_openspace_debug_info
  if (!deva_planning_msgs2__msg__NavOpenspaceDebugInfo__init(&msg->nav_openspace_debug_info)) {
    deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // planning_header
  std_msgs__msg__Header__fini(&msg->planning_header);
  // prediction_header
  std_msgs__msg__Header__fini(&msg->prediction_header);
  // localization_header
  std_msgs__msg__Header__fini(&msg->localization_header);
  // chassis_header
  std_msgs__msg__Header__fini(&msg->chassis_header);
  // avp_local_map_header
  std_msgs__msg__Header__fini(&msg->avp_local_map_header);
  // perception_map_header
  std_msgs__msg__Header__fini(&msg->perception_map_header);
  // avp_debug_info
  deva_planning_msgs2__msg__AvpDebugInfo__fini(&msg->avp_debug_info);
  // nav_openspace_debug_info
  deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(&msg->nav_openspace_debug_info);
}

bool
deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__are_equal(const deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo * lhs, const deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo * rhs)
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
  // planning_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->planning_header), &(rhs->planning_header)))
  {
    return false;
  }
  // prediction_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->prediction_header), &(rhs->prediction_header)))
  {
    return false;
  }
  // localization_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->localization_header), &(rhs->localization_header)))
  {
    return false;
  }
  // chassis_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->chassis_header), &(rhs->chassis_header)))
  {
    return false;
  }
  // avp_local_map_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->avp_local_map_header), &(rhs->avp_local_map_header)))
  {
    return false;
  }
  // perception_map_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->perception_map_header), &(rhs->perception_map_header)))
  {
    return false;
  }
  // avp_debug_info
  if (!deva_planning_msgs2__msg__AvpDebugInfo__are_equal(
      &(lhs->avp_debug_info), &(rhs->avp_debug_info)))
  {
    return false;
  }
  // nav_openspace_debug_info
  if (!deva_planning_msgs2__msg__NavOpenspaceDebugInfo__are_equal(
      &(lhs->nav_openspace_debug_info), &(rhs->nav_openspace_debug_info)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__copy(
  const deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo * input,
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo * output)
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
  // planning_header
  if (!std_msgs__msg__Header__copy(
      &(input->planning_header), &(output->planning_header)))
  {
    return false;
  }
  // prediction_header
  if (!std_msgs__msg__Header__copy(
      &(input->prediction_header), &(output->prediction_header)))
  {
    return false;
  }
  // localization_header
  if (!std_msgs__msg__Header__copy(
      &(input->localization_header), &(output->localization_header)))
  {
    return false;
  }
  // chassis_header
  if (!std_msgs__msg__Header__copy(
      &(input->chassis_header), &(output->chassis_header)))
  {
    return false;
  }
  // avp_local_map_header
  if (!std_msgs__msg__Header__copy(
      &(input->avp_local_map_header), &(output->avp_local_map_header)))
  {
    return false;
  }
  // perception_map_header
  if (!std_msgs__msg__Header__copy(
      &(input->perception_map_header), &(output->perception_map_header)))
  {
    return false;
  }
  // avp_debug_info
  if (!deva_planning_msgs2__msg__AvpDebugInfo__copy(
      &(input->avp_debug_info), &(output->avp_debug_info)))
  {
    return false;
  }
  // nav_openspace_debug_info
  if (!deva_planning_msgs2__msg__NavOpenspaceDebugInfo__copy(
      &(input->nav_openspace_debug_info), &(output->nav_openspace_debug_info)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo *
deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo * msg = (deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo *)allocator.allocate(sizeof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo));
  bool success = deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__destroy(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence__init(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence__fini(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence * array)
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
      deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(&array->data[i]);
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

deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence *
deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence * array = (deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence__destroy(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence__are_equal(const deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence * lhs, const deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence__copy(
  const deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence * input,
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo * data =
      (deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
