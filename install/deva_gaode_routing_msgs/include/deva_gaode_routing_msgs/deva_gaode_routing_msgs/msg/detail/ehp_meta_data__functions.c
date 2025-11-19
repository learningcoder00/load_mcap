// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/EhpMetaData.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_gaode_routing_msgs__msg__EhpMetaData__init(deva_gaode_routing_msgs__msg__EhpMetaData * msg)
{
  if (!msg) {
    return false;
  }
  // meta_country_code
  // meta_map_provider
  // meta_msg_type
  // meta_hw_ver
  // meta_prot_ver_minor_sub
  // meta_prot_ver_major
  // meta_cyc_cnt
  // meta_region_code
  // meta_drv_side
  // meta_map_ver_year
  // meta_map_ver_qtr
  // meta_prot_ver_minor
  // meta_spd_units
  return true;
}

void
deva_gaode_routing_msgs__msg__EhpMetaData__fini(deva_gaode_routing_msgs__msg__EhpMetaData * msg)
{
  if (!msg) {
    return;
  }
  // meta_country_code
  // meta_map_provider
  // meta_msg_type
  // meta_hw_ver
  // meta_prot_ver_minor_sub
  // meta_prot_ver_major
  // meta_cyc_cnt
  // meta_region_code
  // meta_drv_side
  // meta_map_ver_year
  // meta_map_ver_qtr
  // meta_prot_ver_minor
  // meta_spd_units
}

bool
deva_gaode_routing_msgs__msg__EhpMetaData__are_equal(const deva_gaode_routing_msgs__msg__EhpMetaData * lhs, const deva_gaode_routing_msgs__msg__EhpMetaData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // meta_country_code
  if (lhs->meta_country_code != rhs->meta_country_code) {
    return false;
  }
  // meta_map_provider
  if (lhs->meta_map_provider != rhs->meta_map_provider) {
    return false;
  }
  // meta_msg_type
  if (lhs->meta_msg_type != rhs->meta_msg_type) {
    return false;
  }
  // meta_hw_ver
  if (lhs->meta_hw_ver != rhs->meta_hw_ver) {
    return false;
  }
  // meta_prot_ver_minor_sub
  if (lhs->meta_prot_ver_minor_sub != rhs->meta_prot_ver_minor_sub) {
    return false;
  }
  // meta_prot_ver_major
  if (lhs->meta_prot_ver_major != rhs->meta_prot_ver_major) {
    return false;
  }
  // meta_cyc_cnt
  if (lhs->meta_cyc_cnt != rhs->meta_cyc_cnt) {
    return false;
  }
  // meta_region_code
  if (lhs->meta_region_code != rhs->meta_region_code) {
    return false;
  }
  // meta_drv_side
  if (lhs->meta_drv_side != rhs->meta_drv_side) {
    return false;
  }
  // meta_map_ver_year
  if (lhs->meta_map_ver_year != rhs->meta_map_ver_year) {
    return false;
  }
  // meta_map_ver_qtr
  if (lhs->meta_map_ver_qtr != rhs->meta_map_ver_qtr) {
    return false;
  }
  // meta_prot_ver_minor
  if (lhs->meta_prot_ver_minor != rhs->meta_prot_ver_minor) {
    return false;
  }
  // meta_spd_units
  if (lhs->meta_spd_units != rhs->meta_spd_units) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__EhpMetaData__copy(
  const deva_gaode_routing_msgs__msg__EhpMetaData * input,
  deva_gaode_routing_msgs__msg__EhpMetaData * output)
{
  if (!input || !output) {
    return false;
  }
  // meta_country_code
  output->meta_country_code = input->meta_country_code;
  // meta_map_provider
  output->meta_map_provider = input->meta_map_provider;
  // meta_msg_type
  output->meta_msg_type = input->meta_msg_type;
  // meta_hw_ver
  output->meta_hw_ver = input->meta_hw_ver;
  // meta_prot_ver_minor_sub
  output->meta_prot_ver_minor_sub = input->meta_prot_ver_minor_sub;
  // meta_prot_ver_major
  output->meta_prot_ver_major = input->meta_prot_ver_major;
  // meta_cyc_cnt
  output->meta_cyc_cnt = input->meta_cyc_cnt;
  // meta_region_code
  output->meta_region_code = input->meta_region_code;
  // meta_drv_side
  output->meta_drv_side = input->meta_drv_side;
  // meta_map_ver_year
  output->meta_map_ver_year = input->meta_map_ver_year;
  // meta_map_ver_qtr
  output->meta_map_ver_qtr = input->meta_map_ver_qtr;
  // meta_prot_ver_minor
  output->meta_prot_ver_minor = input->meta_prot_ver_minor;
  // meta_spd_units
  output->meta_spd_units = input->meta_spd_units;
  return true;
}

deva_gaode_routing_msgs__msg__EhpMetaData *
deva_gaode_routing_msgs__msg__EhpMetaData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpMetaData * msg = (deva_gaode_routing_msgs__msg__EhpMetaData *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__EhpMetaData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__EhpMetaData));
  bool success = deva_gaode_routing_msgs__msg__EhpMetaData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__EhpMetaData__destroy(deva_gaode_routing_msgs__msg__EhpMetaData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__EhpMetaData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__EhpMetaData__Sequence__init(deva_gaode_routing_msgs__msg__EhpMetaData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpMetaData * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__EhpMetaData *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__EhpMetaData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__EhpMetaData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__EhpMetaData__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__EhpMetaData__Sequence__fini(deva_gaode_routing_msgs__msg__EhpMetaData__Sequence * array)
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
      deva_gaode_routing_msgs__msg__EhpMetaData__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__EhpMetaData__Sequence *
deva_gaode_routing_msgs__msg__EhpMetaData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpMetaData__Sequence * array = (deva_gaode_routing_msgs__msg__EhpMetaData__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__EhpMetaData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__EhpMetaData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__EhpMetaData__Sequence__destroy(deva_gaode_routing_msgs__msg__EhpMetaData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__EhpMetaData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__EhpMetaData__Sequence__are_equal(const deva_gaode_routing_msgs__msg__EhpMetaData__Sequence * lhs, const deva_gaode_routing_msgs__msg__EhpMetaData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__EhpMetaData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__EhpMetaData__Sequence__copy(
  const deva_gaode_routing_msgs__msg__EhpMetaData__Sequence * input,
  deva_gaode_routing_msgs__msg__EhpMetaData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__EhpMetaData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__EhpMetaData * data =
      (deva_gaode_routing_msgs__msg__EhpMetaData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__EhpMetaData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__EhpMetaData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__EhpMetaData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
