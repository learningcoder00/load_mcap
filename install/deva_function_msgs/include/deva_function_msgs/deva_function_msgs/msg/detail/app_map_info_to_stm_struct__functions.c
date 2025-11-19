// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/AppMapInfoToStmStruct.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/app_map_info_to_stm_struct__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_function_msgs__msg__AppMapInfoToStmStruct__init(deva_function_msgs__msg__AppMapInfoToStmStruct * msg)
{
  if (!msg) {
    return false;
  }
  // route_id
  // aut_valt_prkg_map_upload_use_map_type2
  // aut_valt_prkg_map_upload_use_map_list1
  // aut_valt_prkg_map_upload_use_map_list2
  // aut_valt_prkg_map_upload_use_map_list3
  // aut_valt_prkg_map_upload_use_map_list4
  return true;
}

void
deva_function_msgs__msg__AppMapInfoToStmStruct__fini(deva_function_msgs__msg__AppMapInfoToStmStruct * msg)
{
  if (!msg) {
    return;
  }
  // route_id
  // aut_valt_prkg_map_upload_use_map_type2
  // aut_valt_prkg_map_upload_use_map_list1
  // aut_valt_prkg_map_upload_use_map_list2
  // aut_valt_prkg_map_upload_use_map_list3
  // aut_valt_prkg_map_upload_use_map_list4
}

bool
deva_function_msgs__msg__AppMapInfoToStmStruct__are_equal(const deva_function_msgs__msg__AppMapInfoToStmStruct * lhs, const deva_function_msgs__msg__AppMapInfoToStmStruct * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // route_id
  if (lhs->route_id != rhs->route_id) {
    return false;
  }
  // aut_valt_prkg_map_upload_use_map_type2
  if (lhs->aut_valt_prkg_map_upload_use_map_type2 != rhs->aut_valt_prkg_map_upload_use_map_type2) {
    return false;
  }
  // aut_valt_prkg_map_upload_use_map_list1
  if (lhs->aut_valt_prkg_map_upload_use_map_list1 != rhs->aut_valt_prkg_map_upload_use_map_list1) {
    return false;
  }
  // aut_valt_prkg_map_upload_use_map_list2
  if (lhs->aut_valt_prkg_map_upload_use_map_list2 != rhs->aut_valt_prkg_map_upload_use_map_list2) {
    return false;
  }
  // aut_valt_prkg_map_upload_use_map_list3
  if (lhs->aut_valt_prkg_map_upload_use_map_list3 != rhs->aut_valt_prkg_map_upload_use_map_list3) {
    return false;
  }
  // aut_valt_prkg_map_upload_use_map_list4
  if (lhs->aut_valt_prkg_map_upload_use_map_list4 != rhs->aut_valt_prkg_map_upload_use_map_list4) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__AppMapInfoToStmStruct__copy(
  const deva_function_msgs__msg__AppMapInfoToStmStruct * input,
  deva_function_msgs__msg__AppMapInfoToStmStruct * output)
{
  if (!input || !output) {
    return false;
  }
  // route_id
  output->route_id = input->route_id;
  // aut_valt_prkg_map_upload_use_map_type2
  output->aut_valt_prkg_map_upload_use_map_type2 = input->aut_valt_prkg_map_upload_use_map_type2;
  // aut_valt_prkg_map_upload_use_map_list1
  output->aut_valt_prkg_map_upload_use_map_list1 = input->aut_valt_prkg_map_upload_use_map_list1;
  // aut_valt_prkg_map_upload_use_map_list2
  output->aut_valt_prkg_map_upload_use_map_list2 = input->aut_valt_prkg_map_upload_use_map_list2;
  // aut_valt_prkg_map_upload_use_map_list3
  output->aut_valt_prkg_map_upload_use_map_list3 = input->aut_valt_prkg_map_upload_use_map_list3;
  // aut_valt_prkg_map_upload_use_map_list4
  output->aut_valt_prkg_map_upload_use_map_list4 = input->aut_valt_prkg_map_upload_use_map_list4;
  return true;
}

deva_function_msgs__msg__AppMapInfoToStmStruct *
deva_function_msgs__msg__AppMapInfoToStmStruct__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__AppMapInfoToStmStruct * msg = (deva_function_msgs__msg__AppMapInfoToStmStruct *)allocator.allocate(sizeof(deva_function_msgs__msg__AppMapInfoToStmStruct), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__AppMapInfoToStmStruct));
  bool success = deva_function_msgs__msg__AppMapInfoToStmStruct__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__AppMapInfoToStmStruct__destroy(deva_function_msgs__msg__AppMapInfoToStmStruct * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__AppMapInfoToStmStruct__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence__init(deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__AppMapInfoToStmStruct * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__AppMapInfoToStmStruct *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__AppMapInfoToStmStruct), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__AppMapInfoToStmStruct__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__AppMapInfoToStmStruct__fini(&data[i - 1]);
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
deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence__fini(deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence * array)
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
      deva_function_msgs__msg__AppMapInfoToStmStruct__fini(&array->data[i]);
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

deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence *
deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence * array = (deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence__destroy(deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence__are_equal(const deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence * lhs, const deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__AppMapInfoToStmStruct__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence__copy(
  const deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence * input,
  deva_function_msgs__msg__AppMapInfoToStmStruct__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__AppMapInfoToStmStruct);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__AppMapInfoToStmStruct * data =
      (deva_function_msgs__msg__AppMapInfoToStmStruct *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__AppMapInfoToStmStruct__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__AppMapInfoToStmStruct__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__AppMapInfoToStmStruct__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
