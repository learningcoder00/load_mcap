// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/QuadrangleImg.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/quadrangle_img__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_perception_msgs__msg__QuadrangleImg__init(deva_perception_msgs__msg__QuadrangleImg * msg)
{
  if (!msg) {
    return false;
  }
  // imglupointposu
  // imglupointposv
  // imgrupointposu
  // imgrupointposv
  // imgrdpointposu
  // imgrdpointposv
  // imgldpointposu
  // imgldpointposv
  return true;
}

void
deva_perception_msgs__msg__QuadrangleImg__fini(deva_perception_msgs__msg__QuadrangleImg * msg)
{
  if (!msg) {
    return;
  }
  // imglupointposu
  // imglupointposv
  // imgrupointposu
  // imgrupointposv
  // imgrdpointposu
  // imgrdpointposv
  // imgldpointposu
  // imgldpointposv
}

bool
deva_perception_msgs__msg__QuadrangleImg__are_equal(const deva_perception_msgs__msg__QuadrangleImg * lhs, const deva_perception_msgs__msg__QuadrangleImg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // imglupointposu
  if (lhs->imglupointposu != rhs->imglupointposu) {
    return false;
  }
  // imglupointposv
  if (lhs->imglupointposv != rhs->imglupointposv) {
    return false;
  }
  // imgrupointposu
  if (lhs->imgrupointposu != rhs->imgrupointposu) {
    return false;
  }
  // imgrupointposv
  if (lhs->imgrupointposv != rhs->imgrupointposv) {
    return false;
  }
  // imgrdpointposu
  if (lhs->imgrdpointposu != rhs->imgrdpointposu) {
    return false;
  }
  // imgrdpointposv
  if (lhs->imgrdpointposv != rhs->imgrdpointposv) {
    return false;
  }
  // imgldpointposu
  if (lhs->imgldpointposu != rhs->imgldpointposu) {
    return false;
  }
  // imgldpointposv
  if (lhs->imgldpointposv != rhs->imgldpointposv) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__QuadrangleImg__copy(
  const deva_perception_msgs__msg__QuadrangleImg * input,
  deva_perception_msgs__msg__QuadrangleImg * output)
{
  if (!input || !output) {
    return false;
  }
  // imglupointposu
  output->imglupointposu = input->imglupointposu;
  // imglupointposv
  output->imglupointposv = input->imglupointposv;
  // imgrupointposu
  output->imgrupointposu = input->imgrupointposu;
  // imgrupointposv
  output->imgrupointposv = input->imgrupointposv;
  // imgrdpointposu
  output->imgrdpointposu = input->imgrdpointposu;
  // imgrdpointposv
  output->imgrdpointposv = input->imgrdpointposv;
  // imgldpointposu
  output->imgldpointposu = input->imgldpointposu;
  // imgldpointposv
  output->imgldpointposv = input->imgldpointposv;
  return true;
}

deva_perception_msgs__msg__QuadrangleImg *
deva_perception_msgs__msg__QuadrangleImg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__QuadrangleImg * msg = (deva_perception_msgs__msg__QuadrangleImg *)allocator.allocate(sizeof(deva_perception_msgs__msg__QuadrangleImg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__QuadrangleImg));
  bool success = deva_perception_msgs__msg__QuadrangleImg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__QuadrangleImg__destroy(deva_perception_msgs__msg__QuadrangleImg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__QuadrangleImg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__QuadrangleImg__Sequence__init(deva_perception_msgs__msg__QuadrangleImg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__QuadrangleImg * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__QuadrangleImg *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__QuadrangleImg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__QuadrangleImg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__QuadrangleImg__fini(&data[i - 1]);
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
deva_perception_msgs__msg__QuadrangleImg__Sequence__fini(deva_perception_msgs__msg__QuadrangleImg__Sequence * array)
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
      deva_perception_msgs__msg__QuadrangleImg__fini(&array->data[i]);
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

deva_perception_msgs__msg__QuadrangleImg__Sequence *
deva_perception_msgs__msg__QuadrangleImg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__QuadrangleImg__Sequence * array = (deva_perception_msgs__msg__QuadrangleImg__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__QuadrangleImg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__QuadrangleImg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__QuadrangleImg__Sequence__destroy(deva_perception_msgs__msg__QuadrangleImg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__QuadrangleImg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__QuadrangleImg__Sequence__are_equal(const deva_perception_msgs__msg__QuadrangleImg__Sequence * lhs, const deva_perception_msgs__msg__QuadrangleImg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__QuadrangleImg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__QuadrangleImg__Sequence__copy(
  const deva_perception_msgs__msg__QuadrangleImg__Sequence * input,
  deva_perception_msgs__msg__QuadrangleImg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__QuadrangleImg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__QuadrangleImg * data =
      (deva_perception_msgs__msg__QuadrangleImg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__QuadrangleImg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__QuadrangleImg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__QuadrangleImg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
