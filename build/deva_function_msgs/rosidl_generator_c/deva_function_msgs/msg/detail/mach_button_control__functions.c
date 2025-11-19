// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/MachButtonControl.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/mach_button_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"

bool
deva_function_msgs__msg__MachButtonControl__init(deva_function_msgs__msg__MachButtonControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__MachButtonControl__fini(msg);
    return false;
  }
  // asy_a_lgt_sts_asy_a_lgt_sts
  // asy_cnoa_crs_lat_offs_anima_sts
  // drv_off_req_for_lgt_ctrl
  // asy_eyes_off_warn_rqrd
  // asy_eyes_off_warn_rqrd_sound
  // asy_first_ti_actvn
  // asy_noa_actv_suggest_sound
  // asy_inform_for_drvr
  // asy_lat_deg_sts
  // asy_inform_for_drvr_sound
  // asy_noa_actv_suggest
  // asy_noa_distan_msg
  // asy_noa_distan_msg_sound
  // asy_noa_sts
  // asy_steer_apply_rqrd_sound
  // asy_aut_drvg_avl_sound
  // asy_lan_chg_color_dsp
  // asy_lan_chg_mesg
  // asy_lan_chg_sod
  // asy_aut_emgy_steer_actv
  // brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv
  // cllsn_threat
  return true;
}

void
deva_function_msgs__msg__MachButtonControl__fini(deva_function_msgs__msg__MachButtonControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // asy_a_lgt_sts_asy_a_lgt_sts
  // asy_cnoa_crs_lat_offs_anima_sts
  // drv_off_req_for_lgt_ctrl
  // asy_eyes_off_warn_rqrd
  // asy_eyes_off_warn_rqrd_sound
  // asy_first_ti_actvn
  // asy_noa_actv_suggest_sound
  // asy_inform_for_drvr
  // asy_lat_deg_sts
  // asy_inform_for_drvr_sound
  // asy_noa_actv_suggest
  // asy_noa_distan_msg
  // asy_noa_distan_msg_sound
  // asy_noa_sts
  // asy_steer_apply_rqrd_sound
  // asy_aut_drvg_avl_sound
  // asy_lan_chg_color_dsp
  // asy_lan_chg_mesg
  // asy_lan_chg_sod
  // asy_aut_emgy_steer_actv
  // brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv
  // cllsn_threat
}

bool
deva_function_msgs__msg__MachButtonControl__are_equal(const deva_function_msgs__msg__MachButtonControl * lhs, const deva_function_msgs__msg__MachButtonControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // asy_a_lgt_sts_asy_a_lgt_sts
  if (lhs->asy_a_lgt_sts_asy_a_lgt_sts != rhs->asy_a_lgt_sts_asy_a_lgt_sts) {
    return false;
  }
  // asy_cnoa_crs_lat_offs_anima_sts
  if (lhs->asy_cnoa_crs_lat_offs_anima_sts != rhs->asy_cnoa_crs_lat_offs_anima_sts) {
    return false;
  }
  // drv_off_req_for_lgt_ctrl
  if (lhs->drv_off_req_for_lgt_ctrl != rhs->drv_off_req_for_lgt_ctrl) {
    return false;
  }
  // asy_eyes_off_warn_rqrd
  if (lhs->asy_eyes_off_warn_rqrd != rhs->asy_eyes_off_warn_rqrd) {
    return false;
  }
  // asy_eyes_off_warn_rqrd_sound
  if (lhs->asy_eyes_off_warn_rqrd_sound != rhs->asy_eyes_off_warn_rqrd_sound) {
    return false;
  }
  // asy_first_ti_actvn
  if (lhs->asy_first_ti_actvn != rhs->asy_first_ti_actvn) {
    return false;
  }
  // asy_noa_actv_suggest_sound
  if (lhs->asy_noa_actv_suggest_sound != rhs->asy_noa_actv_suggest_sound) {
    return false;
  }
  // asy_inform_for_drvr
  if (lhs->asy_inform_for_drvr != rhs->asy_inform_for_drvr) {
    return false;
  }
  // asy_lat_deg_sts
  if (lhs->asy_lat_deg_sts != rhs->asy_lat_deg_sts) {
    return false;
  }
  // asy_inform_for_drvr_sound
  if (lhs->asy_inform_for_drvr_sound != rhs->asy_inform_for_drvr_sound) {
    return false;
  }
  // asy_noa_actv_suggest
  if (lhs->asy_noa_actv_suggest != rhs->asy_noa_actv_suggest) {
    return false;
  }
  // asy_noa_distan_msg
  if (lhs->asy_noa_distan_msg != rhs->asy_noa_distan_msg) {
    return false;
  }
  // asy_noa_distan_msg_sound
  if (lhs->asy_noa_distan_msg_sound != rhs->asy_noa_distan_msg_sound) {
    return false;
  }
  // asy_noa_sts
  if (lhs->asy_noa_sts != rhs->asy_noa_sts) {
    return false;
  }
  // asy_steer_apply_rqrd_sound
  if (lhs->asy_steer_apply_rqrd_sound != rhs->asy_steer_apply_rqrd_sound) {
    return false;
  }
  // asy_aut_drvg_avl_sound
  if (lhs->asy_aut_drvg_avl_sound != rhs->asy_aut_drvg_avl_sound) {
    return false;
  }
  // asy_lan_chg_color_dsp
  if (lhs->asy_lan_chg_color_dsp != rhs->asy_lan_chg_color_dsp) {
    return false;
  }
  // asy_lan_chg_mesg
  if (lhs->asy_lan_chg_mesg != rhs->asy_lan_chg_mesg) {
    return false;
  }
  // asy_lan_chg_sod
  if (lhs->asy_lan_chg_sod != rhs->asy_lan_chg_sod) {
    return false;
  }
  // asy_aut_emgy_steer_actv
  if (lhs->asy_aut_emgy_steer_actv != rhs->asy_aut_emgy_steer_actv) {
    return false;
  }
  // brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv
  if (lhs->brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv != rhs->brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv) {
    return false;
  }
  // cllsn_threat
  if (lhs->cllsn_threat != rhs->cllsn_threat) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__MachButtonControl__copy(
  const deva_function_msgs__msg__MachButtonControl * input,
  deva_function_msgs__msg__MachButtonControl * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // asy_a_lgt_sts_asy_a_lgt_sts
  output->asy_a_lgt_sts_asy_a_lgt_sts = input->asy_a_lgt_sts_asy_a_lgt_sts;
  // asy_cnoa_crs_lat_offs_anima_sts
  output->asy_cnoa_crs_lat_offs_anima_sts = input->asy_cnoa_crs_lat_offs_anima_sts;
  // drv_off_req_for_lgt_ctrl
  output->drv_off_req_for_lgt_ctrl = input->drv_off_req_for_lgt_ctrl;
  // asy_eyes_off_warn_rqrd
  output->asy_eyes_off_warn_rqrd = input->asy_eyes_off_warn_rqrd;
  // asy_eyes_off_warn_rqrd_sound
  output->asy_eyes_off_warn_rqrd_sound = input->asy_eyes_off_warn_rqrd_sound;
  // asy_first_ti_actvn
  output->asy_first_ti_actvn = input->asy_first_ti_actvn;
  // asy_noa_actv_suggest_sound
  output->asy_noa_actv_suggest_sound = input->asy_noa_actv_suggest_sound;
  // asy_inform_for_drvr
  output->asy_inform_for_drvr = input->asy_inform_for_drvr;
  // asy_lat_deg_sts
  output->asy_lat_deg_sts = input->asy_lat_deg_sts;
  // asy_inform_for_drvr_sound
  output->asy_inform_for_drvr_sound = input->asy_inform_for_drvr_sound;
  // asy_noa_actv_suggest
  output->asy_noa_actv_suggest = input->asy_noa_actv_suggest;
  // asy_noa_distan_msg
  output->asy_noa_distan_msg = input->asy_noa_distan_msg;
  // asy_noa_distan_msg_sound
  output->asy_noa_distan_msg_sound = input->asy_noa_distan_msg_sound;
  // asy_noa_sts
  output->asy_noa_sts = input->asy_noa_sts;
  // asy_steer_apply_rqrd_sound
  output->asy_steer_apply_rqrd_sound = input->asy_steer_apply_rqrd_sound;
  // asy_aut_drvg_avl_sound
  output->asy_aut_drvg_avl_sound = input->asy_aut_drvg_avl_sound;
  // asy_lan_chg_color_dsp
  output->asy_lan_chg_color_dsp = input->asy_lan_chg_color_dsp;
  // asy_lan_chg_mesg
  output->asy_lan_chg_mesg = input->asy_lan_chg_mesg;
  // asy_lan_chg_sod
  output->asy_lan_chg_sod = input->asy_lan_chg_sod;
  // asy_aut_emgy_steer_actv
  output->asy_aut_emgy_steer_actv = input->asy_aut_emgy_steer_actv;
  // brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv
  output->brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv = input->brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv;
  // cllsn_threat
  output->cllsn_threat = input->cllsn_threat;
  return true;
}

deva_function_msgs__msg__MachButtonControl *
deva_function_msgs__msg__MachButtonControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachButtonControl * msg = (deva_function_msgs__msg__MachButtonControl *)allocator.allocate(sizeof(deva_function_msgs__msg__MachButtonControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__MachButtonControl));
  bool success = deva_function_msgs__msg__MachButtonControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__MachButtonControl__destroy(deva_function_msgs__msg__MachButtonControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__MachButtonControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__MachButtonControl__Sequence__init(deva_function_msgs__msg__MachButtonControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachButtonControl * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__MachButtonControl *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__MachButtonControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__MachButtonControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__MachButtonControl__fini(&data[i - 1]);
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
deva_function_msgs__msg__MachButtonControl__Sequence__fini(deva_function_msgs__msg__MachButtonControl__Sequence * array)
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
      deva_function_msgs__msg__MachButtonControl__fini(&array->data[i]);
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

deva_function_msgs__msg__MachButtonControl__Sequence *
deva_function_msgs__msg__MachButtonControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachButtonControl__Sequence * array = (deva_function_msgs__msg__MachButtonControl__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__MachButtonControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__MachButtonControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__MachButtonControl__Sequence__destroy(deva_function_msgs__msg__MachButtonControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__MachButtonControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__MachButtonControl__Sequence__are_equal(const deva_function_msgs__msg__MachButtonControl__Sequence * lhs, const deva_function_msgs__msg__MachButtonControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__MachButtonControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__MachButtonControl__Sequence__copy(
  const deva_function_msgs__msg__MachButtonControl__Sequence * input,
  deva_function_msgs__msg__MachButtonControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__MachButtonControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__MachButtonControl * data =
      (deva_function_msgs__msg__MachButtonControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__MachButtonControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__MachButtonControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__MachButtonControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
