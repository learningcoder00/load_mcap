// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFObjPpty.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFObjPpty__init(deva_aeb_msgs__msg__SFObjPpty * msg)
{
  if (!msg) {
    return false;
  }
  // idn
  // sts
  // mdlofmtn
  // trfcsceno
  // cllsnmtgtnbybrkgprimqly
  // cllsnmtgtnbybrkgsecqly
  // cllsnwarnfwdqly
  // trfcjamassiqly
  // dstlatfrommidoflaneselfqly
  // emgylanekeepaidposnqly
  // fusnsrc
  // posnlgtstdde
  // posnlatstdde
  // agdirstdde
  // spdstdde
  // astdde
  // reserved
  // visnid
  return true;
}

void
deva_aeb_msgs__msg__SFObjPpty__fini(deva_aeb_msgs__msg__SFObjPpty * msg)
{
  if (!msg) {
    return;
  }
  // idn
  // sts
  // mdlofmtn
  // trfcsceno
  // cllsnmtgtnbybrkgprimqly
  // cllsnmtgtnbybrkgsecqly
  // cllsnwarnfwdqly
  // trfcjamassiqly
  // dstlatfrommidoflaneselfqly
  // emgylanekeepaidposnqly
  // fusnsrc
  // posnlgtstdde
  // posnlatstdde
  // agdirstdde
  // spdstdde
  // astdde
  // reserved
  // visnid
}

bool
deva_aeb_msgs__msg__SFObjPpty__are_equal(const deva_aeb_msgs__msg__SFObjPpty * lhs, const deva_aeb_msgs__msg__SFObjPpty * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // idn
  if (lhs->idn != rhs->idn) {
    return false;
  }
  // sts
  if (lhs->sts != rhs->sts) {
    return false;
  }
  // mdlofmtn
  if (lhs->mdlofmtn != rhs->mdlofmtn) {
    return false;
  }
  // trfcsceno
  if (lhs->trfcsceno != rhs->trfcsceno) {
    return false;
  }
  // cllsnmtgtnbybrkgprimqly
  if (lhs->cllsnmtgtnbybrkgprimqly != rhs->cllsnmtgtnbybrkgprimqly) {
    return false;
  }
  // cllsnmtgtnbybrkgsecqly
  if (lhs->cllsnmtgtnbybrkgsecqly != rhs->cllsnmtgtnbybrkgsecqly) {
    return false;
  }
  // cllsnwarnfwdqly
  if (lhs->cllsnwarnfwdqly != rhs->cllsnwarnfwdqly) {
    return false;
  }
  // trfcjamassiqly
  if (lhs->trfcjamassiqly != rhs->trfcjamassiqly) {
    return false;
  }
  // dstlatfrommidoflaneselfqly
  if (lhs->dstlatfrommidoflaneselfqly != rhs->dstlatfrommidoflaneselfqly) {
    return false;
  }
  // emgylanekeepaidposnqly
  if (lhs->emgylanekeepaidposnqly != rhs->emgylanekeepaidposnqly) {
    return false;
  }
  // fusnsrc
  if (lhs->fusnsrc != rhs->fusnsrc) {
    return false;
  }
  // posnlgtstdde
  if (lhs->posnlgtstdde != rhs->posnlgtstdde) {
    return false;
  }
  // posnlatstdde
  if (lhs->posnlatstdde != rhs->posnlatstdde) {
    return false;
  }
  // agdirstdde
  if (lhs->agdirstdde != rhs->agdirstdde) {
    return false;
  }
  // spdstdde
  if (lhs->spdstdde != rhs->spdstdde) {
    return false;
  }
  // astdde
  if (lhs->astdde != rhs->astdde) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // visnid
  if (lhs->visnid != rhs->visnid) {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFObjPpty__copy(
  const deva_aeb_msgs__msg__SFObjPpty * input,
  deva_aeb_msgs__msg__SFObjPpty * output)
{
  if (!input || !output) {
    return false;
  }
  // idn
  output->idn = input->idn;
  // sts
  output->sts = input->sts;
  // mdlofmtn
  output->mdlofmtn = input->mdlofmtn;
  // trfcsceno
  output->trfcsceno = input->trfcsceno;
  // cllsnmtgtnbybrkgprimqly
  output->cllsnmtgtnbybrkgprimqly = input->cllsnmtgtnbybrkgprimqly;
  // cllsnmtgtnbybrkgsecqly
  output->cllsnmtgtnbybrkgsecqly = input->cllsnmtgtnbybrkgsecqly;
  // cllsnwarnfwdqly
  output->cllsnwarnfwdqly = input->cllsnwarnfwdqly;
  // trfcjamassiqly
  output->trfcjamassiqly = input->trfcjamassiqly;
  // dstlatfrommidoflaneselfqly
  output->dstlatfrommidoflaneselfqly = input->dstlatfrommidoflaneselfqly;
  // emgylanekeepaidposnqly
  output->emgylanekeepaidposnqly = input->emgylanekeepaidposnqly;
  // fusnsrc
  output->fusnsrc = input->fusnsrc;
  // posnlgtstdde
  output->posnlgtstdde = input->posnlgtstdde;
  // posnlatstdde
  output->posnlatstdde = input->posnlatstdde;
  // agdirstdde
  output->agdirstdde = input->agdirstdde;
  // spdstdde
  output->spdstdde = input->spdstdde;
  // astdde
  output->astdde = input->astdde;
  // reserved
  output->reserved = input->reserved;
  // visnid
  output->visnid = input->visnid;
  return true;
}

deva_aeb_msgs__msg__SFObjPpty *
deva_aeb_msgs__msg__SFObjPpty__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFObjPpty * msg = (deva_aeb_msgs__msg__SFObjPpty *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFObjPpty), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFObjPpty));
  bool success = deva_aeb_msgs__msg__SFObjPpty__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFObjPpty__destroy(deva_aeb_msgs__msg__SFObjPpty * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFObjPpty__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFObjPpty__Sequence__init(deva_aeb_msgs__msg__SFObjPpty__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFObjPpty * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFObjPpty *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFObjPpty), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFObjPpty__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFObjPpty__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFObjPpty__Sequence__fini(deva_aeb_msgs__msg__SFObjPpty__Sequence * array)
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
      deva_aeb_msgs__msg__SFObjPpty__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFObjPpty__Sequence *
deva_aeb_msgs__msg__SFObjPpty__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFObjPpty__Sequence * array = (deva_aeb_msgs__msg__SFObjPpty__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFObjPpty__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFObjPpty__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFObjPpty__Sequence__destroy(deva_aeb_msgs__msg__SFObjPpty__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFObjPpty__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFObjPpty__Sequence__are_equal(const deva_aeb_msgs__msg__SFObjPpty__Sequence * lhs, const deva_aeb_msgs__msg__SFObjPpty__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFObjPpty__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFObjPpty__Sequence__copy(
  const deva_aeb_msgs__msg__SFObjPpty__Sequence * input,
  deva_aeb_msgs__msg__SFObjPpty__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFObjPpty);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFObjPpty * data =
      (deva_aeb_msgs__msg__SFObjPpty *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFObjPpty__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFObjPpty__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFObjPpty__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
