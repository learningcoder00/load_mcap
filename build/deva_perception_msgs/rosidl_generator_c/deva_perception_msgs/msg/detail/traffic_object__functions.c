// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/TrafficObject.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/traffic_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `region`
// Member `new_h_region`
// Member `bind_ramp_region`
#include "deva_perception_msgs/msg/detail/traffic_region__functions.h"
// Member `status`
#include "deva_perception_msgs/msg/detail/traffic_status__functions.h"

bool
deva_perception_msgs__msg__TrafficObject__init(deva_perception_msgs__msg__TrafficObject * msg)
{
  if (!msg) {
    return false;
  }
  // class_idx
  // det_is_focus_light
  // sign_appx_type
  // region
  if (!deva_perception_msgs__msg__TrafficRegion__init(&msg->region)) {
    deva_perception_msgs__msg__TrafficObject__fini(msg);
    return false;
  }
  // new_h_region
  if (!deva_perception_msgs__msg__TrafficRegion__init(&msg->new_h_region)) {
    deva_perception_msgs__msg__TrafficObject__fini(msg);
    return false;
  }
  // status
  for (size_t i = 0; i < 4; ++i) {
    if (!deva_perception_msgs__msg__TrafficStatus__init(&msg->status[i])) {
      deva_perception_msgs__msg__TrafficObject__fini(msg);
      return false;
    }
  }
  // f120_ori_color
  // f120_ori_color_light_type
  // color
  // origin_color
  // light_type
  // origin_light_type
  // count_down
  // orig_count_down
  // has_count_down
  // ori_has_count_down
  // f120_origin_sign_type
  // origin_sign_type
  // sign_type
  // sign_confidence
  // digit_confidence
  // digit_type
  // digit_class_idx
  // ego_x
  // ego_y
  // ego_z
  // ramp_confidence
  // is_ramp
  // origin_is_ramp
  // is_ramp_from_41
  // is_ramp_double_checked
  // pole
  // is_rechecked_ramp
  // rechecked_ramp_score
  // bind_ramp_region
  if (!deva_perception_msgs__msg__TrafficRegion__init(&msg->bind_ramp_region)) {
    deva_perception_msgs__msg__TrafficObject__fini(msg);
    return false;
  }
  // ego_x_out
  // is_recheck_result
  // model_depth
  // tl_oriention
  return true;
}

void
deva_perception_msgs__msg__TrafficObject__fini(deva_perception_msgs__msg__TrafficObject * msg)
{
  if (!msg) {
    return;
  }
  // class_idx
  // det_is_focus_light
  // sign_appx_type
  // region
  deva_perception_msgs__msg__TrafficRegion__fini(&msg->region);
  // new_h_region
  deva_perception_msgs__msg__TrafficRegion__fini(&msg->new_h_region);
  // status
  for (size_t i = 0; i < 4; ++i) {
    deva_perception_msgs__msg__TrafficStatus__fini(&msg->status[i]);
  }
  // f120_ori_color
  // f120_ori_color_light_type
  // color
  // origin_color
  // light_type
  // origin_light_type
  // count_down
  // orig_count_down
  // has_count_down
  // ori_has_count_down
  // f120_origin_sign_type
  // origin_sign_type
  // sign_type
  // sign_confidence
  // digit_confidence
  // digit_type
  // digit_class_idx
  // ego_x
  // ego_y
  // ego_z
  // ramp_confidence
  // is_ramp
  // origin_is_ramp
  // is_ramp_from_41
  // is_ramp_double_checked
  // pole
  // is_rechecked_ramp
  // rechecked_ramp_score
  // bind_ramp_region
  deva_perception_msgs__msg__TrafficRegion__fini(&msg->bind_ramp_region);
  // ego_x_out
  // is_recheck_result
  // model_depth
  // tl_oriention
}

bool
deva_perception_msgs__msg__TrafficObject__are_equal(const deva_perception_msgs__msg__TrafficObject * lhs, const deva_perception_msgs__msg__TrafficObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // class_idx
  if (lhs->class_idx != rhs->class_idx) {
    return false;
  }
  // det_is_focus_light
  if (lhs->det_is_focus_light != rhs->det_is_focus_light) {
    return false;
  }
  // sign_appx_type
  if (lhs->sign_appx_type != rhs->sign_appx_type) {
    return false;
  }
  // region
  if (!deva_perception_msgs__msg__TrafficRegion__are_equal(
      &(lhs->region), &(rhs->region)))
  {
    return false;
  }
  // new_h_region
  if (!deva_perception_msgs__msg__TrafficRegion__are_equal(
      &(lhs->new_h_region), &(rhs->new_h_region)))
  {
    return false;
  }
  // status
  for (size_t i = 0; i < 4; ++i) {
    if (!deva_perception_msgs__msg__TrafficStatus__are_equal(
        &(lhs->status[i]), &(rhs->status[i])))
    {
      return false;
    }
  }
  // f120_ori_color
  if (lhs->f120_ori_color != rhs->f120_ori_color) {
    return false;
  }
  // f120_ori_color_light_type
  if (lhs->f120_ori_color_light_type != rhs->f120_ori_color_light_type) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // origin_color
  if (lhs->origin_color != rhs->origin_color) {
    return false;
  }
  // light_type
  if (lhs->light_type != rhs->light_type) {
    return false;
  }
  // origin_light_type
  if (lhs->origin_light_type != rhs->origin_light_type) {
    return false;
  }
  // count_down
  if (lhs->count_down != rhs->count_down) {
    return false;
  }
  // orig_count_down
  if (lhs->orig_count_down != rhs->orig_count_down) {
    return false;
  }
  // has_count_down
  if (lhs->has_count_down != rhs->has_count_down) {
    return false;
  }
  // ori_has_count_down
  if (lhs->ori_has_count_down != rhs->ori_has_count_down) {
    return false;
  }
  // f120_origin_sign_type
  if (lhs->f120_origin_sign_type != rhs->f120_origin_sign_type) {
    return false;
  }
  // origin_sign_type
  if (lhs->origin_sign_type != rhs->origin_sign_type) {
    return false;
  }
  // sign_type
  if (lhs->sign_type != rhs->sign_type) {
    return false;
  }
  // sign_confidence
  if (lhs->sign_confidence != rhs->sign_confidence) {
    return false;
  }
  // digit_confidence
  if (lhs->digit_confidence != rhs->digit_confidence) {
    return false;
  }
  // digit_type
  if (lhs->digit_type != rhs->digit_type) {
    return false;
  }
  // digit_class_idx
  if (lhs->digit_class_idx != rhs->digit_class_idx) {
    return false;
  }
  // ego_x
  if (lhs->ego_x != rhs->ego_x) {
    return false;
  }
  // ego_y
  if (lhs->ego_y != rhs->ego_y) {
    return false;
  }
  // ego_z
  if (lhs->ego_z != rhs->ego_z) {
    return false;
  }
  // ramp_confidence
  if (lhs->ramp_confidence != rhs->ramp_confidence) {
    return false;
  }
  // is_ramp
  if (lhs->is_ramp != rhs->is_ramp) {
    return false;
  }
  // origin_is_ramp
  if (lhs->origin_is_ramp != rhs->origin_is_ramp) {
    return false;
  }
  // is_ramp_from_41
  if (lhs->is_ramp_from_41 != rhs->is_ramp_from_41) {
    return false;
  }
  // is_ramp_double_checked
  if (lhs->is_ramp_double_checked != rhs->is_ramp_double_checked) {
    return false;
  }
  // pole
  if (lhs->pole != rhs->pole) {
    return false;
  }
  // is_rechecked_ramp
  if (lhs->is_rechecked_ramp != rhs->is_rechecked_ramp) {
    return false;
  }
  // rechecked_ramp_score
  if (lhs->rechecked_ramp_score != rhs->rechecked_ramp_score) {
    return false;
  }
  // bind_ramp_region
  if (!deva_perception_msgs__msg__TrafficRegion__are_equal(
      &(lhs->bind_ramp_region), &(rhs->bind_ramp_region)))
  {
    return false;
  }
  // ego_x_out
  if (lhs->ego_x_out != rhs->ego_x_out) {
    return false;
  }
  // is_recheck_result
  if (lhs->is_recheck_result != rhs->is_recheck_result) {
    return false;
  }
  // model_depth
  if (lhs->model_depth != rhs->model_depth) {
    return false;
  }
  // tl_oriention
  if (lhs->tl_oriention != rhs->tl_oriention) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__TrafficObject__copy(
  const deva_perception_msgs__msg__TrafficObject * input,
  deva_perception_msgs__msg__TrafficObject * output)
{
  if (!input || !output) {
    return false;
  }
  // class_idx
  output->class_idx = input->class_idx;
  // det_is_focus_light
  output->det_is_focus_light = input->det_is_focus_light;
  // sign_appx_type
  output->sign_appx_type = input->sign_appx_type;
  // region
  if (!deva_perception_msgs__msg__TrafficRegion__copy(
      &(input->region), &(output->region)))
  {
    return false;
  }
  // new_h_region
  if (!deva_perception_msgs__msg__TrafficRegion__copy(
      &(input->new_h_region), &(output->new_h_region)))
  {
    return false;
  }
  // status
  for (size_t i = 0; i < 4; ++i) {
    if (!deva_perception_msgs__msg__TrafficStatus__copy(
        &(input->status[i]), &(output->status[i])))
    {
      return false;
    }
  }
  // f120_ori_color
  output->f120_ori_color = input->f120_ori_color;
  // f120_ori_color_light_type
  output->f120_ori_color_light_type = input->f120_ori_color_light_type;
  // color
  output->color = input->color;
  // origin_color
  output->origin_color = input->origin_color;
  // light_type
  output->light_type = input->light_type;
  // origin_light_type
  output->origin_light_type = input->origin_light_type;
  // count_down
  output->count_down = input->count_down;
  // orig_count_down
  output->orig_count_down = input->orig_count_down;
  // has_count_down
  output->has_count_down = input->has_count_down;
  // ori_has_count_down
  output->ori_has_count_down = input->ori_has_count_down;
  // f120_origin_sign_type
  output->f120_origin_sign_type = input->f120_origin_sign_type;
  // origin_sign_type
  output->origin_sign_type = input->origin_sign_type;
  // sign_type
  output->sign_type = input->sign_type;
  // sign_confidence
  output->sign_confidence = input->sign_confidence;
  // digit_confidence
  output->digit_confidence = input->digit_confidence;
  // digit_type
  output->digit_type = input->digit_type;
  // digit_class_idx
  output->digit_class_idx = input->digit_class_idx;
  // ego_x
  output->ego_x = input->ego_x;
  // ego_y
  output->ego_y = input->ego_y;
  // ego_z
  output->ego_z = input->ego_z;
  // ramp_confidence
  output->ramp_confidence = input->ramp_confidence;
  // is_ramp
  output->is_ramp = input->is_ramp;
  // origin_is_ramp
  output->origin_is_ramp = input->origin_is_ramp;
  // is_ramp_from_41
  output->is_ramp_from_41 = input->is_ramp_from_41;
  // is_ramp_double_checked
  output->is_ramp_double_checked = input->is_ramp_double_checked;
  // pole
  output->pole = input->pole;
  // is_rechecked_ramp
  output->is_rechecked_ramp = input->is_rechecked_ramp;
  // rechecked_ramp_score
  output->rechecked_ramp_score = input->rechecked_ramp_score;
  // bind_ramp_region
  if (!deva_perception_msgs__msg__TrafficRegion__copy(
      &(input->bind_ramp_region), &(output->bind_ramp_region)))
  {
    return false;
  }
  // ego_x_out
  output->ego_x_out = input->ego_x_out;
  // is_recheck_result
  output->is_recheck_result = input->is_recheck_result;
  // model_depth
  output->model_depth = input->model_depth;
  // tl_oriention
  output->tl_oriention = input->tl_oriention;
  return true;
}

deva_perception_msgs__msg__TrafficObject *
deva_perception_msgs__msg__TrafficObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__TrafficObject * msg = (deva_perception_msgs__msg__TrafficObject *)allocator.allocate(sizeof(deva_perception_msgs__msg__TrafficObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__TrafficObject));
  bool success = deva_perception_msgs__msg__TrafficObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__TrafficObject__destroy(deva_perception_msgs__msg__TrafficObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__TrafficObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__TrafficObject__Sequence__init(deva_perception_msgs__msg__TrafficObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__TrafficObject * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__TrafficObject *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__TrafficObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__TrafficObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__TrafficObject__fini(&data[i - 1]);
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
deva_perception_msgs__msg__TrafficObject__Sequence__fini(deva_perception_msgs__msg__TrafficObject__Sequence * array)
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
      deva_perception_msgs__msg__TrafficObject__fini(&array->data[i]);
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

deva_perception_msgs__msg__TrafficObject__Sequence *
deva_perception_msgs__msg__TrafficObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__TrafficObject__Sequence * array = (deva_perception_msgs__msg__TrafficObject__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__TrafficObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__TrafficObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__TrafficObject__Sequence__destroy(deva_perception_msgs__msg__TrafficObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__TrafficObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__TrafficObject__Sequence__are_equal(const deva_perception_msgs__msg__TrafficObject__Sequence * lhs, const deva_perception_msgs__msg__TrafficObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__TrafficObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__TrafficObject__Sequence__copy(
  const deva_perception_msgs__msg__TrafficObject__Sequence * input,
  deva_perception_msgs__msg__TrafficObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__TrafficObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__TrafficObject * data =
      (deva_perception_msgs__msg__TrafficObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__TrafficObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__TrafficObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__TrafficObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
