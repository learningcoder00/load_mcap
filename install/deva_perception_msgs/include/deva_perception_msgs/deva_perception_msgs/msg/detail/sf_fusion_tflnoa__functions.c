// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/SFFusionTFLNOA.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `region`
// Member `f120_region`
// Member `f30_region`
#include "deva_perception_msgs/msg/detail/traffic_region__functions.h"
// Member `tflquadranglevcs`
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__functions.h"
// Member `tflquadrangleimg`
#include "deva_perception_msgs/msg/detail/quadrangle_img__functions.h"

bool
deva_perception_msgs__msg__SFFusionTFLNOA__init(deva_perception_msgs__msg__SFFusionTFLNOA * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // lifetime
  // relevancy
  // type
  // color
  // cycle_time
  // number
  // confi
  // flashstatus
  // background
  // reserved
  // poslgt
  // poslat
  // height
  // region
  if (!deva_perception_msgs__msg__TrafficRegion__init(&msg->region)) {
    deva_perception_msgs__msg__SFFusionTFLNOA__fini(msg);
    return false;
  }
  // tflquadranglevcs
  if (!deva_perception_msgs__msg__QuadrangleVcs__init(&msg->tflquadranglevcs)) {
    deva_perception_msgs__msg__SFFusionTFLNOA__fini(msg);
    return false;
  }
  // tflquadrangleimg
  if (!deva_perception_msgs__msg__QuadrangleImg__init(&msg->tflquadrangleimg)) {
    deva_perception_msgs__msg__SFFusionTFLNOA__fini(msg);
    return false;
  }
  // utmx
  // utmy
  // utmz
  // type_list
  // color_list
  // blocked
  // has_count_down
  // light_num
  // focus
  // pole
  // sync_from_track_id
  // source
  // f120_region
  if (!deva_perception_msgs__msg__TrafficRegion__init(&msg->f120_region)) {
    deva_perception_msgs__msg__SFFusionTFLNOA__fini(msg);
    return false;
  }
  // f30_region
  if (!deva_perception_msgs__msg__TrafficRegion__init(&msg->f30_region)) {
    deva_perception_msgs__msg__SFFusionTFLNOA__fini(msg);
    return false;
  }
  // i_back1
  // i_back2
  // i_back3
  // f_back1
  // f_back2
  // f_back3
  return true;
}

void
deva_perception_msgs__msg__SFFusionTFLNOA__fini(deva_perception_msgs__msg__SFFusionTFLNOA * msg)
{
  if (!msg) {
    return;
  }
  // id
  // lifetime
  // relevancy
  // type
  // color
  // cycle_time
  // number
  // confi
  // flashstatus
  // background
  // reserved
  // poslgt
  // poslat
  // height
  // region
  deva_perception_msgs__msg__TrafficRegion__fini(&msg->region);
  // tflquadranglevcs
  deva_perception_msgs__msg__QuadrangleVcs__fini(&msg->tflquadranglevcs);
  // tflquadrangleimg
  deva_perception_msgs__msg__QuadrangleImg__fini(&msg->tflquadrangleimg);
  // utmx
  // utmy
  // utmz
  // type_list
  // color_list
  // blocked
  // has_count_down
  // light_num
  // focus
  // pole
  // sync_from_track_id
  // source
  // f120_region
  deva_perception_msgs__msg__TrafficRegion__fini(&msg->f120_region);
  // f30_region
  deva_perception_msgs__msg__TrafficRegion__fini(&msg->f30_region);
  // i_back1
  // i_back2
  // i_back3
  // f_back1
  // f_back2
  // f_back3
}

bool
deva_perception_msgs__msg__SFFusionTFLNOA__are_equal(const deva_perception_msgs__msg__SFFusionTFLNOA * lhs, const deva_perception_msgs__msg__SFFusionTFLNOA * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // lifetime
  if (lhs->lifetime != rhs->lifetime) {
    return false;
  }
  // relevancy
  if (lhs->relevancy != rhs->relevancy) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // cycle_time
  if (lhs->cycle_time != rhs->cycle_time) {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  // confi
  if (lhs->confi != rhs->confi) {
    return false;
  }
  // flashstatus
  if (lhs->flashstatus != rhs->flashstatus) {
    return false;
  }
  // background
  if (lhs->background != rhs->background) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // poslgt
  if (lhs->poslgt != rhs->poslgt) {
    return false;
  }
  // poslat
  if (lhs->poslat != rhs->poslat) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // region
  if (!deva_perception_msgs__msg__TrafficRegion__are_equal(
      &(lhs->region), &(rhs->region)))
  {
    return false;
  }
  // tflquadranglevcs
  if (!deva_perception_msgs__msg__QuadrangleVcs__are_equal(
      &(lhs->tflquadranglevcs), &(rhs->tflquadranglevcs)))
  {
    return false;
  }
  // tflquadrangleimg
  if (!deva_perception_msgs__msg__QuadrangleImg__are_equal(
      &(lhs->tflquadrangleimg), &(rhs->tflquadrangleimg)))
  {
    return false;
  }
  // utmx
  if (lhs->utmx != rhs->utmx) {
    return false;
  }
  // utmy
  if (lhs->utmy != rhs->utmy) {
    return false;
  }
  // utmz
  if (lhs->utmz != rhs->utmz) {
    return false;
  }
  // type_list
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->type_list[i] != rhs->type_list[i]) {
      return false;
    }
  }
  // color_list
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->color_list[i] != rhs->color_list[i]) {
      return false;
    }
  }
  // blocked
  if (lhs->blocked != rhs->blocked) {
    return false;
  }
  // has_count_down
  if (lhs->has_count_down != rhs->has_count_down) {
    return false;
  }
  // light_num
  if (lhs->light_num != rhs->light_num) {
    return false;
  }
  // focus
  if (lhs->focus != rhs->focus) {
    return false;
  }
  // pole
  if (lhs->pole != rhs->pole) {
    return false;
  }
  // sync_from_track_id
  if (lhs->sync_from_track_id != rhs->sync_from_track_id) {
    return false;
  }
  // source
  if (lhs->source != rhs->source) {
    return false;
  }
  // f120_region
  if (!deva_perception_msgs__msg__TrafficRegion__are_equal(
      &(lhs->f120_region), &(rhs->f120_region)))
  {
    return false;
  }
  // f30_region
  if (!deva_perception_msgs__msg__TrafficRegion__are_equal(
      &(lhs->f30_region), &(rhs->f30_region)))
  {
    return false;
  }
  // i_back1
  if (lhs->i_back1 != rhs->i_back1) {
    return false;
  }
  // i_back2
  if (lhs->i_back2 != rhs->i_back2) {
    return false;
  }
  // i_back3
  if (lhs->i_back3 != rhs->i_back3) {
    return false;
  }
  // f_back1
  if (lhs->f_back1 != rhs->f_back1) {
    return false;
  }
  // f_back2
  if (lhs->f_back2 != rhs->f_back2) {
    return false;
  }
  // f_back3
  if (lhs->f_back3 != rhs->f_back3) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__SFFusionTFLNOA__copy(
  const deva_perception_msgs__msg__SFFusionTFLNOA * input,
  deva_perception_msgs__msg__SFFusionTFLNOA * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // lifetime
  output->lifetime = input->lifetime;
  // relevancy
  output->relevancy = input->relevancy;
  // type
  output->type = input->type;
  // color
  output->color = input->color;
  // cycle_time
  output->cycle_time = input->cycle_time;
  // number
  output->number = input->number;
  // confi
  output->confi = input->confi;
  // flashstatus
  output->flashstatus = input->flashstatus;
  // background
  output->background = input->background;
  // reserved
  output->reserved = input->reserved;
  // poslgt
  output->poslgt = input->poslgt;
  // poslat
  output->poslat = input->poslat;
  // height
  output->height = input->height;
  // region
  if (!deva_perception_msgs__msg__TrafficRegion__copy(
      &(input->region), &(output->region)))
  {
    return false;
  }
  // tflquadranglevcs
  if (!deva_perception_msgs__msg__QuadrangleVcs__copy(
      &(input->tflquadranglevcs), &(output->tflquadranglevcs)))
  {
    return false;
  }
  // tflquadrangleimg
  if (!deva_perception_msgs__msg__QuadrangleImg__copy(
      &(input->tflquadrangleimg), &(output->tflquadrangleimg)))
  {
    return false;
  }
  // utmx
  output->utmx = input->utmx;
  // utmy
  output->utmy = input->utmy;
  // utmz
  output->utmz = input->utmz;
  // type_list
  for (size_t i = 0; i < 4; ++i) {
    output->type_list[i] = input->type_list[i];
  }
  // color_list
  for (size_t i = 0; i < 4; ++i) {
    output->color_list[i] = input->color_list[i];
  }
  // blocked
  output->blocked = input->blocked;
  // has_count_down
  output->has_count_down = input->has_count_down;
  // light_num
  output->light_num = input->light_num;
  // focus
  output->focus = input->focus;
  // pole
  output->pole = input->pole;
  // sync_from_track_id
  output->sync_from_track_id = input->sync_from_track_id;
  // source
  output->source = input->source;
  // f120_region
  if (!deva_perception_msgs__msg__TrafficRegion__copy(
      &(input->f120_region), &(output->f120_region)))
  {
    return false;
  }
  // f30_region
  if (!deva_perception_msgs__msg__TrafficRegion__copy(
      &(input->f30_region), &(output->f30_region)))
  {
    return false;
  }
  // i_back1
  output->i_back1 = input->i_back1;
  // i_back2
  output->i_back2 = input->i_back2;
  // i_back3
  output->i_back3 = input->i_back3;
  // f_back1
  output->f_back1 = input->f_back1;
  // f_back2
  output->f_back2 = input->f_back2;
  // f_back3
  output->f_back3 = input->f_back3;
  return true;
}

deva_perception_msgs__msg__SFFusionTFLNOA *
deva_perception_msgs__msg__SFFusionTFLNOA__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SFFusionTFLNOA * msg = (deva_perception_msgs__msg__SFFusionTFLNOA *)allocator.allocate(sizeof(deva_perception_msgs__msg__SFFusionTFLNOA), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__SFFusionTFLNOA));
  bool success = deva_perception_msgs__msg__SFFusionTFLNOA__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__SFFusionTFLNOA__destroy(deva_perception_msgs__msg__SFFusionTFLNOA * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__SFFusionTFLNOA__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__init(deva_perception_msgs__msg__SFFusionTFLNOA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SFFusionTFLNOA * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__SFFusionTFLNOA *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__SFFusionTFLNOA), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__SFFusionTFLNOA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__SFFusionTFLNOA__fini(&data[i - 1]);
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
deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__fini(deva_perception_msgs__msg__SFFusionTFLNOA__Sequence * array)
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
      deva_perception_msgs__msg__SFFusionTFLNOA__fini(&array->data[i]);
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

deva_perception_msgs__msg__SFFusionTFLNOA__Sequence *
deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SFFusionTFLNOA__Sequence * array = (deva_perception_msgs__msg__SFFusionTFLNOA__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__SFFusionTFLNOA__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__destroy(deva_perception_msgs__msg__SFFusionTFLNOA__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__are_equal(const deva_perception_msgs__msg__SFFusionTFLNOA__Sequence * lhs, const deva_perception_msgs__msg__SFFusionTFLNOA__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTFLNOA__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__copy(
  const deva_perception_msgs__msg__SFFusionTFLNOA__Sequence * input,
  deva_perception_msgs__msg__SFFusionTFLNOA__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__SFFusionTFLNOA);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__SFFusionTFLNOA * data =
      (deva_perception_msgs__msg__SFFusionTFLNOA *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__SFFusionTFLNOA__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__SFFusionTFLNOA__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTFLNOA__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
