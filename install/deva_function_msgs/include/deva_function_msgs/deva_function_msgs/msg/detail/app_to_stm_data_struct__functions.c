// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/APPToStmDataStruct.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_function_msgs__msg__APPToStmDataStruct__init(deva_function_msgs__msg__APPToStmDataStruct * msg)
{
  if (!msg) {
    return false;
  }
  // app_to_hpa_ctrl_cmd
  // mob_dev_avp_req
  // on_bd_chrgr_hndl_sts1
  // dc_chrgn_hndl_sts
  // occupy_mon_sts_drvr_sts
  // alrm_sts_alrm_failr
  // alrm_sts_alrm_st
  // alrm_sts_alrm_trg_src
  // alrm_sts_snsr_incln_failr
  // alrm_sts_snsr_intr_scanr_failr
  // telephone_sts
  // tr_lock_sts
  // trsm_park_lockd_trsm_park_lockd
  // twli_bri_raw_qf
  // twli_bri_raw_twli_bri_raw
  // rev
  return true;
}

void
deva_function_msgs__msg__APPToStmDataStruct__fini(deva_function_msgs__msg__APPToStmDataStruct * msg)
{
  if (!msg) {
    return;
  }
  // app_to_hpa_ctrl_cmd
  // mob_dev_avp_req
  // on_bd_chrgr_hndl_sts1
  // dc_chrgn_hndl_sts
  // occupy_mon_sts_drvr_sts
  // alrm_sts_alrm_failr
  // alrm_sts_alrm_st
  // alrm_sts_alrm_trg_src
  // alrm_sts_snsr_incln_failr
  // alrm_sts_snsr_intr_scanr_failr
  // telephone_sts
  // tr_lock_sts
  // trsm_park_lockd_trsm_park_lockd
  // twli_bri_raw_qf
  // twli_bri_raw_twli_bri_raw
  // rev
}

bool
deva_function_msgs__msg__APPToStmDataStruct__are_equal(const deva_function_msgs__msg__APPToStmDataStruct * lhs, const deva_function_msgs__msg__APPToStmDataStruct * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // app_to_hpa_ctrl_cmd
  if (lhs->app_to_hpa_ctrl_cmd != rhs->app_to_hpa_ctrl_cmd) {
    return false;
  }
  // mob_dev_avp_req
  if (lhs->mob_dev_avp_req != rhs->mob_dev_avp_req) {
    return false;
  }
  // on_bd_chrgr_hndl_sts1
  if (lhs->on_bd_chrgr_hndl_sts1 != rhs->on_bd_chrgr_hndl_sts1) {
    return false;
  }
  // dc_chrgn_hndl_sts
  if (lhs->dc_chrgn_hndl_sts != rhs->dc_chrgn_hndl_sts) {
    return false;
  }
  // occupy_mon_sts_drvr_sts
  if (lhs->occupy_mon_sts_drvr_sts != rhs->occupy_mon_sts_drvr_sts) {
    return false;
  }
  // alrm_sts_alrm_failr
  if (lhs->alrm_sts_alrm_failr != rhs->alrm_sts_alrm_failr) {
    return false;
  }
  // alrm_sts_alrm_st
  if (lhs->alrm_sts_alrm_st != rhs->alrm_sts_alrm_st) {
    return false;
  }
  // alrm_sts_alrm_trg_src
  if (lhs->alrm_sts_alrm_trg_src != rhs->alrm_sts_alrm_trg_src) {
    return false;
  }
  // alrm_sts_snsr_incln_failr
  if (lhs->alrm_sts_snsr_incln_failr != rhs->alrm_sts_snsr_incln_failr) {
    return false;
  }
  // alrm_sts_snsr_intr_scanr_failr
  if (lhs->alrm_sts_snsr_intr_scanr_failr != rhs->alrm_sts_snsr_intr_scanr_failr) {
    return false;
  }
  // telephone_sts
  if (lhs->telephone_sts != rhs->telephone_sts) {
    return false;
  }
  // tr_lock_sts
  if (lhs->tr_lock_sts != rhs->tr_lock_sts) {
    return false;
  }
  // trsm_park_lockd_trsm_park_lockd
  if (lhs->trsm_park_lockd_trsm_park_lockd != rhs->trsm_park_lockd_trsm_park_lockd) {
    return false;
  }
  // twli_bri_raw_qf
  if (lhs->twli_bri_raw_qf != rhs->twli_bri_raw_qf) {
    return false;
  }
  // twli_bri_raw_twli_bri_raw
  if (lhs->twli_bri_raw_twli_bri_raw != rhs->twli_bri_raw_twli_bri_raw) {
    return false;
  }
  // rev
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->rev[i] != rhs->rev[i]) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__APPToStmDataStruct__copy(
  const deva_function_msgs__msg__APPToStmDataStruct * input,
  deva_function_msgs__msg__APPToStmDataStruct * output)
{
  if (!input || !output) {
    return false;
  }
  // app_to_hpa_ctrl_cmd
  output->app_to_hpa_ctrl_cmd = input->app_to_hpa_ctrl_cmd;
  // mob_dev_avp_req
  output->mob_dev_avp_req = input->mob_dev_avp_req;
  // on_bd_chrgr_hndl_sts1
  output->on_bd_chrgr_hndl_sts1 = input->on_bd_chrgr_hndl_sts1;
  // dc_chrgn_hndl_sts
  output->dc_chrgn_hndl_sts = input->dc_chrgn_hndl_sts;
  // occupy_mon_sts_drvr_sts
  output->occupy_mon_sts_drvr_sts = input->occupy_mon_sts_drvr_sts;
  // alrm_sts_alrm_failr
  output->alrm_sts_alrm_failr = input->alrm_sts_alrm_failr;
  // alrm_sts_alrm_st
  output->alrm_sts_alrm_st = input->alrm_sts_alrm_st;
  // alrm_sts_alrm_trg_src
  output->alrm_sts_alrm_trg_src = input->alrm_sts_alrm_trg_src;
  // alrm_sts_snsr_incln_failr
  output->alrm_sts_snsr_incln_failr = input->alrm_sts_snsr_incln_failr;
  // alrm_sts_snsr_intr_scanr_failr
  output->alrm_sts_snsr_intr_scanr_failr = input->alrm_sts_snsr_intr_scanr_failr;
  // telephone_sts
  output->telephone_sts = input->telephone_sts;
  // tr_lock_sts
  output->tr_lock_sts = input->tr_lock_sts;
  // trsm_park_lockd_trsm_park_lockd
  output->trsm_park_lockd_trsm_park_lockd = input->trsm_park_lockd_trsm_park_lockd;
  // twli_bri_raw_qf
  output->twli_bri_raw_qf = input->twli_bri_raw_qf;
  // twli_bri_raw_twli_bri_raw
  output->twli_bri_raw_twli_bri_raw = input->twli_bri_raw_twli_bri_raw;
  // rev
  for (size_t i = 0; i < 8; ++i) {
    output->rev[i] = input->rev[i];
  }
  return true;
}

deva_function_msgs__msg__APPToStmDataStruct *
deva_function_msgs__msg__APPToStmDataStruct__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__APPToStmDataStruct * msg = (deva_function_msgs__msg__APPToStmDataStruct *)allocator.allocate(sizeof(deva_function_msgs__msg__APPToStmDataStruct), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__APPToStmDataStruct));
  bool success = deva_function_msgs__msg__APPToStmDataStruct__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__APPToStmDataStruct__destroy(deva_function_msgs__msg__APPToStmDataStruct * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__APPToStmDataStruct__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__APPToStmDataStruct__Sequence__init(deva_function_msgs__msg__APPToStmDataStruct__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__APPToStmDataStruct * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__APPToStmDataStruct *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__APPToStmDataStruct), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__APPToStmDataStruct__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__APPToStmDataStruct__fini(&data[i - 1]);
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
deva_function_msgs__msg__APPToStmDataStruct__Sequence__fini(deva_function_msgs__msg__APPToStmDataStruct__Sequence * array)
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
      deva_function_msgs__msg__APPToStmDataStruct__fini(&array->data[i]);
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

deva_function_msgs__msg__APPToStmDataStruct__Sequence *
deva_function_msgs__msg__APPToStmDataStruct__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__APPToStmDataStruct__Sequence * array = (deva_function_msgs__msg__APPToStmDataStruct__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__APPToStmDataStruct__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__APPToStmDataStruct__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__APPToStmDataStruct__Sequence__destroy(deva_function_msgs__msg__APPToStmDataStruct__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__APPToStmDataStruct__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__APPToStmDataStruct__Sequence__are_equal(const deva_function_msgs__msg__APPToStmDataStruct__Sequence * lhs, const deva_function_msgs__msg__APPToStmDataStruct__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__APPToStmDataStruct__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__APPToStmDataStruct__Sequence__copy(
  const deva_function_msgs__msg__APPToStmDataStruct__Sequence * input,
  deva_function_msgs__msg__APPToStmDataStruct__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__APPToStmDataStruct);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__APPToStmDataStruct * data =
      (deva_function_msgs__msg__APPToStmDataStruct *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__APPToStmDataStruct__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__APPToStmDataStruct__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__APPToStmDataStruct__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
