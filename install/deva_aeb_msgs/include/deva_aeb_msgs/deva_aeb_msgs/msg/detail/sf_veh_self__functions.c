// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFVehSelf.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_veh_self__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFVehSelf__init(deva_aeb_msgs__msg__SFVehSelf * msg)
{
  if (!msg) {
    return false;
  }
  // vlgt
  // vlgtcmpfac
  // algt
  // algtraw
  // alatraw
  // yawrate
  // yawrateraw
  // posnlgtdelta
  // posnlatdelta
  // agdirdelta
  return true;
}

void
deva_aeb_msgs__msg__SFVehSelf__fini(deva_aeb_msgs__msg__SFVehSelf * msg)
{
  if (!msg) {
    return;
  }
  // vlgt
  // vlgtcmpfac
  // algt
  // algtraw
  // alatraw
  // yawrate
  // yawrateraw
  // posnlgtdelta
  // posnlatdelta
  // agdirdelta
}

bool
deva_aeb_msgs__msg__SFVehSelf__are_equal(const deva_aeb_msgs__msg__SFVehSelf * lhs, const deva_aeb_msgs__msg__SFVehSelf * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vlgt
  if (lhs->vlgt != rhs->vlgt) {
    return false;
  }
  // vlgtcmpfac
  if (lhs->vlgtcmpfac != rhs->vlgtcmpfac) {
    return false;
  }
  // algt
  if (lhs->algt != rhs->algt) {
    return false;
  }
  // algtraw
  if (lhs->algtraw != rhs->algtraw) {
    return false;
  }
  // alatraw
  if (lhs->alatraw != rhs->alatraw) {
    return false;
  }
  // yawrate
  if (lhs->yawrate != rhs->yawrate) {
    return false;
  }
  // yawrateraw
  if (lhs->yawrateraw != rhs->yawrateraw) {
    return false;
  }
  // posnlgtdelta
  if (lhs->posnlgtdelta != rhs->posnlgtdelta) {
    return false;
  }
  // posnlatdelta
  if (lhs->posnlatdelta != rhs->posnlatdelta) {
    return false;
  }
  // agdirdelta
  if (lhs->agdirdelta != rhs->agdirdelta) {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFVehSelf__copy(
  const deva_aeb_msgs__msg__SFVehSelf * input,
  deva_aeb_msgs__msg__SFVehSelf * output)
{
  if (!input || !output) {
    return false;
  }
  // vlgt
  output->vlgt = input->vlgt;
  // vlgtcmpfac
  output->vlgtcmpfac = input->vlgtcmpfac;
  // algt
  output->algt = input->algt;
  // algtraw
  output->algtraw = input->algtraw;
  // alatraw
  output->alatraw = input->alatraw;
  // yawrate
  output->yawrate = input->yawrate;
  // yawrateraw
  output->yawrateraw = input->yawrateraw;
  // posnlgtdelta
  output->posnlgtdelta = input->posnlgtdelta;
  // posnlatdelta
  output->posnlatdelta = input->posnlatdelta;
  // agdirdelta
  output->agdirdelta = input->agdirdelta;
  return true;
}

deva_aeb_msgs__msg__SFVehSelf *
deva_aeb_msgs__msg__SFVehSelf__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFVehSelf * msg = (deva_aeb_msgs__msg__SFVehSelf *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFVehSelf), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFVehSelf));
  bool success = deva_aeb_msgs__msg__SFVehSelf__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFVehSelf__destroy(deva_aeb_msgs__msg__SFVehSelf * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFVehSelf__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFVehSelf__Sequence__init(deva_aeb_msgs__msg__SFVehSelf__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFVehSelf * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFVehSelf *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFVehSelf), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFVehSelf__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFVehSelf__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFVehSelf__Sequence__fini(deva_aeb_msgs__msg__SFVehSelf__Sequence * array)
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
      deva_aeb_msgs__msg__SFVehSelf__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFVehSelf__Sequence *
deva_aeb_msgs__msg__SFVehSelf__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFVehSelf__Sequence * array = (deva_aeb_msgs__msg__SFVehSelf__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFVehSelf__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFVehSelf__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFVehSelf__Sequence__destroy(deva_aeb_msgs__msg__SFVehSelf__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFVehSelf__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFVehSelf__Sequence__are_equal(const deva_aeb_msgs__msg__SFVehSelf__Sequence * lhs, const deva_aeb_msgs__msg__SFVehSelf__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFVehSelf__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFVehSelf__Sequence__copy(
  const deva_aeb_msgs__msg__SFVehSelf__Sequence * input,
  deva_aeb_msgs__msg__SFVehSelf__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFVehSelf);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFVehSelf * data =
      (deva_aeb_msgs__msg__SFVehSelf *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFVehSelf__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFVehSelf__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFVehSelf__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
