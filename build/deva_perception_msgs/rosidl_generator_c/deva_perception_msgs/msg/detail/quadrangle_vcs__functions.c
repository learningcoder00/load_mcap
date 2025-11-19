// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/QuadrangleVcs.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_perception_msgs__msg__QuadrangleVcs__init(deva_perception_msgs__msg__QuadrangleVcs * msg)
{
  if (!msg) {
    return false;
  }
  // leftuppointx
  // leftuppointy
  // leftuppointz
  // rightuppointx
  // rightuppointy
  // rightuppointz
  // rightdownpointx
  // rightdownpointy
  // rightdownpointz
  // leftdownpointx
  // leftdownpointy
  // leftdownpointz
  return true;
}

void
deva_perception_msgs__msg__QuadrangleVcs__fini(deva_perception_msgs__msg__QuadrangleVcs * msg)
{
  if (!msg) {
    return;
  }
  // leftuppointx
  // leftuppointy
  // leftuppointz
  // rightuppointx
  // rightuppointy
  // rightuppointz
  // rightdownpointx
  // rightdownpointy
  // rightdownpointz
  // leftdownpointx
  // leftdownpointy
  // leftdownpointz
}

bool
deva_perception_msgs__msg__QuadrangleVcs__are_equal(const deva_perception_msgs__msg__QuadrangleVcs * lhs, const deva_perception_msgs__msg__QuadrangleVcs * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // leftuppointx
  if (lhs->leftuppointx != rhs->leftuppointx) {
    return false;
  }
  // leftuppointy
  if (lhs->leftuppointy != rhs->leftuppointy) {
    return false;
  }
  // leftuppointz
  if (lhs->leftuppointz != rhs->leftuppointz) {
    return false;
  }
  // rightuppointx
  if (lhs->rightuppointx != rhs->rightuppointx) {
    return false;
  }
  // rightuppointy
  if (lhs->rightuppointy != rhs->rightuppointy) {
    return false;
  }
  // rightuppointz
  if (lhs->rightuppointz != rhs->rightuppointz) {
    return false;
  }
  // rightdownpointx
  if (lhs->rightdownpointx != rhs->rightdownpointx) {
    return false;
  }
  // rightdownpointy
  if (lhs->rightdownpointy != rhs->rightdownpointy) {
    return false;
  }
  // rightdownpointz
  if (lhs->rightdownpointz != rhs->rightdownpointz) {
    return false;
  }
  // leftdownpointx
  if (lhs->leftdownpointx != rhs->leftdownpointx) {
    return false;
  }
  // leftdownpointy
  if (lhs->leftdownpointy != rhs->leftdownpointy) {
    return false;
  }
  // leftdownpointz
  if (lhs->leftdownpointz != rhs->leftdownpointz) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__QuadrangleVcs__copy(
  const deva_perception_msgs__msg__QuadrangleVcs * input,
  deva_perception_msgs__msg__QuadrangleVcs * output)
{
  if (!input || !output) {
    return false;
  }
  // leftuppointx
  output->leftuppointx = input->leftuppointx;
  // leftuppointy
  output->leftuppointy = input->leftuppointy;
  // leftuppointz
  output->leftuppointz = input->leftuppointz;
  // rightuppointx
  output->rightuppointx = input->rightuppointx;
  // rightuppointy
  output->rightuppointy = input->rightuppointy;
  // rightuppointz
  output->rightuppointz = input->rightuppointz;
  // rightdownpointx
  output->rightdownpointx = input->rightdownpointx;
  // rightdownpointy
  output->rightdownpointy = input->rightdownpointy;
  // rightdownpointz
  output->rightdownpointz = input->rightdownpointz;
  // leftdownpointx
  output->leftdownpointx = input->leftdownpointx;
  // leftdownpointy
  output->leftdownpointy = input->leftdownpointy;
  // leftdownpointz
  output->leftdownpointz = input->leftdownpointz;
  return true;
}

deva_perception_msgs__msg__QuadrangleVcs *
deva_perception_msgs__msg__QuadrangleVcs__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__QuadrangleVcs * msg = (deva_perception_msgs__msg__QuadrangleVcs *)allocator.allocate(sizeof(deva_perception_msgs__msg__QuadrangleVcs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__QuadrangleVcs));
  bool success = deva_perception_msgs__msg__QuadrangleVcs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__QuadrangleVcs__destroy(deva_perception_msgs__msg__QuadrangleVcs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__QuadrangleVcs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__QuadrangleVcs__Sequence__init(deva_perception_msgs__msg__QuadrangleVcs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__QuadrangleVcs * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__QuadrangleVcs *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__QuadrangleVcs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__QuadrangleVcs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__QuadrangleVcs__fini(&data[i - 1]);
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
deva_perception_msgs__msg__QuadrangleVcs__Sequence__fini(deva_perception_msgs__msg__QuadrangleVcs__Sequence * array)
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
      deva_perception_msgs__msg__QuadrangleVcs__fini(&array->data[i]);
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

deva_perception_msgs__msg__QuadrangleVcs__Sequence *
deva_perception_msgs__msg__QuadrangleVcs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__QuadrangleVcs__Sequence * array = (deva_perception_msgs__msg__QuadrangleVcs__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__QuadrangleVcs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__QuadrangleVcs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__QuadrangleVcs__Sequence__destroy(deva_perception_msgs__msg__QuadrangleVcs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__QuadrangleVcs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__QuadrangleVcs__Sequence__are_equal(const deva_perception_msgs__msg__QuadrangleVcs__Sequence * lhs, const deva_perception_msgs__msg__QuadrangleVcs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__QuadrangleVcs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__QuadrangleVcs__Sequence__copy(
  const deva_perception_msgs__msg__QuadrangleVcs__Sequence * input,
  deva_perception_msgs__msg__QuadrangleVcs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__QuadrangleVcs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__QuadrangleVcs * data =
      (deva_perception_msgs__msg__QuadrangleVcs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__QuadrangleVcs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__QuadrangleVcs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__QuadrangleVcs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
