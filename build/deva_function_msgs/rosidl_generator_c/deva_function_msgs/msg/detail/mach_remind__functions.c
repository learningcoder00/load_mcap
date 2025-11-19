// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/MachRemind.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/mach_remind__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"

bool
deva_function_msgs__msg__MachRemind__init(deva_function_msgs__msg__MachRemind * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__MachRemind__fini(msg);
    return false;
  }
  // asy_cnoa_crs_actv_faild_voice
  // asy_cnoa_crs_cross_intsec_voice
  // asy_cnoa_crs_actv_voice
  // asy_cnoa_crs_deactvd_voice
  // asy_cnoa_crs_finshd_voice
  // asy_cnoa_crs_offs_voice
  // asy_cnoa_crs_rmn_voice
  // asy_cnoa_hands_off_voice
  // asy_cnoa_lrng_abort_voice
  // asy_noa_avl_rmn_sound
  // asy_cnoa_takeover_warn_voice
  // asy_dece_remind_sound
  // asy_drvr_sod_cfirm_cnoa_main_page
  // asy_undertak_rmind_sound
  // asy_warn_sod_for_aut_drv
  // avl_sts_for_long_aut_drv
  // too_many_cars
  // drv_off_warn
  // ad4_horn_warn
  // hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  // drv_off_mod
  // asy_horn_warn_rqrd
  // asy_cnoa_crs_avl_prompt
  // asy_crs_sts_swil_indcr
  // asy_d2d_avl_rmn_sod
  // asy_d2d_deactvd_reasn_sod
  // asy_d2d_etc_distan_sod
  // asy_d2d_distan_sod
  // asy_d2d_strt_to_end_sod
  // asy_d2d_remind_sod
  // asy_lane_chg_fail_type
  // asy_req_lane_chg
  // asy_noa_deactvd_reasn_sod
  // asy_noa_remind_sod
  // ad4_drvr_belt_warn
  // asy_noa_takeover_sod
  // ad4_drvr_belt_warn_for_bkp
  // asy_lan_chg_sod_sec
  // ad4_camera_heating_req
  // ad_takeover_req_group_ad_takeover_msg
  // ad_takeover_req_group_ad_takeover_audio
  // ad_wipr_ctrl_req
  // asy_noa_blt_fastn
  // turn_indic_req_by_alca
  // asy_lane_chg_assist_sts
  // ad4_camera_heating_req_zcu
  // asy_fct_lrng_mesg
  // trfc_jam_warn
  return true;
}

void
deva_function_msgs__msg__MachRemind__fini(deva_function_msgs__msg__MachRemind * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // asy_cnoa_crs_actv_faild_voice
  // asy_cnoa_crs_cross_intsec_voice
  // asy_cnoa_crs_actv_voice
  // asy_cnoa_crs_deactvd_voice
  // asy_cnoa_crs_finshd_voice
  // asy_cnoa_crs_offs_voice
  // asy_cnoa_crs_rmn_voice
  // asy_cnoa_hands_off_voice
  // asy_cnoa_lrng_abort_voice
  // asy_noa_avl_rmn_sound
  // asy_cnoa_takeover_warn_voice
  // asy_dece_remind_sound
  // asy_drvr_sod_cfirm_cnoa_main_page
  // asy_undertak_rmind_sound
  // asy_warn_sod_for_aut_drv
  // avl_sts_for_long_aut_drv
  // too_many_cars
  // drv_off_warn
  // ad4_horn_warn
  // hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  // drv_off_mod
  // asy_horn_warn_rqrd
  // asy_cnoa_crs_avl_prompt
  // asy_crs_sts_swil_indcr
  // asy_d2d_avl_rmn_sod
  // asy_d2d_deactvd_reasn_sod
  // asy_d2d_etc_distan_sod
  // asy_d2d_distan_sod
  // asy_d2d_strt_to_end_sod
  // asy_d2d_remind_sod
  // asy_lane_chg_fail_type
  // asy_req_lane_chg
  // asy_noa_deactvd_reasn_sod
  // asy_noa_remind_sod
  // ad4_drvr_belt_warn
  // asy_noa_takeover_sod
  // ad4_drvr_belt_warn_for_bkp
  // asy_lan_chg_sod_sec
  // ad4_camera_heating_req
  // ad_takeover_req_group_ad_takeover_msg
  // ad_takeover_req_group_ad_takeover_audio
  // ad_wipr_ctrl_req
  // asy_noa_blt_fastn
  // turn_indic_req_by_alca
  // asy_lane_chg_assist_sts
  // ad4_camera_heating_req_zcu
  // asy_fct_lrng_mesg
  // trfc_jam_warn
}

bool
deva_function_msgs__msg__MachRemind__are_equal(const deva_function_msgs__msg__MachRemind * lhs, const deva_function_msgs__msg__MachRemind * rhs)
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
  // asy_cnoa_crs_actv_faild_voice
  if (lhs->asy_cnoa_crs_actv_faild_voice != rhs->asy_cnoa_crs_actv_faild_voice) {
    return false;
  }
  // asy_cnoa_crs_cross_intsec_voice
  if (lhs->asy_cnoa_crs_cross_intsec_voice != rhs->asy_cnoa_crs_cross_intsec_voice) {
    return false;
  }
  // asy_cnoa_crs_actv_voice
  if (lhs->asy_cnoa_crs_actv_voice != rhs->asy_cnoa_crs_actv_voice) {
    return false;
  }
  // asy_cnoa_crs_deactvd_voice
  if (lhs->asy_cnoa_crs_deactvd_voice != rhs->asy_cnoa_crs_deactvd_voice) {
    return false;
  }
  // asy_cnoa_crs_finshd_voice
  if (lhs->asy_cnoa_crs_finshd_voice != rhs->asy_cnoa_crs_finshd_voice) {
    return false;
  }
  // asy_cnoa_crs_offs_voice
  if (lhs->asy_cnoa_crs_offs_voice != rhs->asy_cnoa_crs_offs_voice) {
    return false;
  }
  // asy_cnoa_crs_rmn_voice
  if (lhs->asy_cnoa_crs_rmn_voice != rhs->asy_cnoa_crs_rmn_voice) {
    return false;
  }
  // asy_cnoa_hands_off_voice
  if (lhs->asy_cnoa_hands_off_voice != rhs->asy_cnoa_hands_off_voice) {
    return false;
  }
  // asy_cnoa_lrng_abort_voice
  if (lhs->asy_cnoa_lrng_abort_voice != rhs->asy_cnoa_lrng_abort_voice) {
    return false;
  }
  // asy_noa_avl_rmn_sound
  if (lhs->asy_noa_avl_rmn_sound != rhs->asy_noa_avl_rmn_sound) {
    return false;
  }
  // asy_cnoa_takeover_warn_voice
  if (lhs->asy_cnoa_takeover_warn_voice != rhs->asy_cnoa_takeover_warn_voice) {
    return false;
  }
  // asy_dece_remind_sound
  if (lhs->asy_dece_remind_sound != rhs->asy_dece_remind_sound) {
    return false;
  }
  // asy_drvr_sod_cfirm_cnoa_main_page
  if (lhs->asy_drvr_sod_cfirm_cnoa_main_page != rhs->asy_drvr_sod_cfirm_cnoa_main_page) {
    return false;
  }
  // asy_undertak_rmind_sound
  if (lhs->asy_undertak_rmind_sound != rhs->asy_undertak_rmind_sound) {
    return false;
  }
  // asy_warn_sod_for_aut_drv
  if (lhs->asy_warn_sod_for_aut_drv != rhs->asy_warn_sod_for_aut_drv) {
    return false;
  }
  // avl_sts_for_long_aut_drv
  if (lhs->avl_sts_for_long_aut_drv != rhs->avl_sts_for_long_aut_drv) {
    return false;
  }
  // too_many_cars
  if (lhs->too_many_cars != rhs->too_many_cars) {
    return false;
  }
  // drv_off_warn
  if (lhs->drv_off_warn != rhs->drv_off_warn) {
    return false;
  }
  // ad4_horn_warn
  if (lhs->ad4_horn_warn != rhs->ad4_horn_warn) {
    return false;
  }
  // hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  if (lhs->hmi_auto_lane_chg_sts_for_asy_ai_asist_audio != rhs->hmi_auto_lane_chg_sts_for_asy_ai_asist_audio) {
    return false;
  }
  // drv_off_mod
  if (lhs->drv_off_mod != rhs->drv_off_mod) {
    return false;
  }
  // asy_horn_warn_rqrd
  if (lhs->asy_horn_warn_rqrd != rhs->asy_horn_warn_rqrd) {
    return false;
  }
  // asy_cnoa_crs_avl_prompt
  if (lhs->asy_cnoa_crs_avl_prompt != rhs->asy_cnoa_crs_avl_prompt) {
    return false;
  }
  // asy_crs_sts_swil_indcr
  if (lhs->asy_crs_sts_swil_indcr != rhs->asy_crs_sts_swil_indcr) {
    return false;
  }
  // asy_d2d_avl_rmn_sod
  if (lhs->asy_d2d_avl_rmn_sod != rhs->asy_d2d_avl_rmn_sod) {
    return false;
  }
  // asy_d2d_deactvd_reasn_sod
  if (lhs->asy_d2d_deactvd_reasn_sod != rhs->asy_d2d_deactvd_reasn_sod) {
    return false;
  }
  // asy_d2d_etc_distan_sod
  if (lhs->asy_d2d_etc_distan_sod != rhs->asy_d2d_etc_distan_sod) {
    return false;
  }
  // asy_d2d_distan_sod
  if (lhs->asy_d2d_distan_sod != rhs->asy_d2d_distan_sod) {
    return false;
  }
  // asy_d2d_strt_to_end_sod
  if (lhs->asy_d2d_strt_to_end_sod != rhs->asy_d2d_strt_to_end_sod) {
    return false;
  }
  // asy_d2d_remind_sod
  if (lhs->asy_d2d_remind_sod != rhs->asy_d2d_remind_sod) {
    return false;
  }
  // asy_lane_chg_fail_type
  if (lhs->asy_lane_chg_fail_type != rhs->asy_lane_chg_fail_type) {
    return false;
  }
  // asy_req_lane_chg
  if (lhs->asy_req_lane_chg != rhs->asy_req_lane_chg) {
    return false;
  }
  // asy_noa_deactvd_reasn_sod
  if (lhs->asy_noa_deactvd_reasn_sod != rhs->asy_noa_deactvd_reasn_sod) {
    return false;
  }
  // asy_noa_remind_sod
  if (lhs->asy_noa_remind_sod != rhs->asy_noa_remind_sod) {
    return false;
  }
  // ad4_drvr_belt_warn
  if (lhs->ad4_drvr_belt_warn != rhs->ad4_drvr_belt_warn) {
    return false;
  }
  // asy_noa_takeover_sod
  if (lhs->asy_noa_takeover_sod != rhs->asy_noa_takeover_sod) {
    return false;
  }
  // ad4_drvr_belt_warn_for_bkp
  if (lhs->ad4_drvr_belt_warn_for_bkp != rhs->ad4_drvr_belt_warn_for_bkp) {
    return false;
  }
  // asy_lan_chg_sod_sec
  if (lhs->asy_lan_chg_sod_sec != rhs->asy_lan_chg_sod_sec) {
    return false;
  }
  // ad4_camera_heating_req
  if (lhs->ad4_camera_heating_req != rhs->ad4_camera_heating_req) {
    return false;
  }
  // ad_takeover_req_group_ad_takeover_msg
  if (lhs->ad_takeover_req_group_ad_takeover_msg != rhs->ad_takeover_req_group_ad_takeover_msg) {
    return false;
  }
  // ad_takeover_req_group_ad_takeover_audio
  if (lhs->ad_takeover_req_group_ad_takeover_audio != rhs->ad_takeover_req_group_ad_takeover_audio) {
    return false;
  }
  // ad_wipr_ctrl_req
  if (lhs->ad_wipr_ctrl_req != rhs->ad_wipr_ctrl_req) {
    return false;
  }
  // asy_noa_blt_fastn
  if (lhs->asy_noa_blt_fastn != rhs->asy_noa_blt_fastn) {
    return false;
  }
  // turn_indic_req_by_alca
  if (lhs->turn_indic_req_by_alca != rhs->turn_indic_req_by_alca) {
    return false;
  }
  // asy_lane_chg_assist_sts
  if (lhs->asy_lane_chg_assist_sts != rhs->asy_lane_chg_assist_sts) {
    return false;
  }
  // ad4_camera_heating_req_zcu
  if (lhs->ad4_camera_heating_req_zcu != rhs->ad4_camera_heating_req_zcu) {
    return false;
  }
  // asy_fct_lrng_mesg
  if (lhs->asy_fct_lrng_mesg != rhs->asy_fct_lrng_mesg) {
    return false;
  }
  // trfc_jam_warn
  if (lhs->trfc_jam_warn != rhs->trfc_jam_warn) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__MachRemind__copy(
  const deva_function_msgs__msg__MachRemind * input,
  deva_function_msgs__msg__MachRemind * output)
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
  // asy_cnoa_crs_actv_faild_voice
  output->asy_cnoa_crs_actv_faild_voice = input->asy_cnoa_crs_actv_faild_voice;
  // asy_cnoa_crs_cross_intsec_voice
  output->asy_cnoa_crs_cross_intsec_voice = input->asy_cnoa_crs_cross_intsec_voice;
  // asy_cnoa_crs_actv_voice
  output->asy_cnoa_crs_actv_voice = input->asy_cnoa_crs_actv_voice;
  // asy_cnoa_crs_deactvd_voice
  output->asy_cnoa_crs_deactvd_voice = input->asy_cnoa_crs_deactvd_voice;
  // asy_cnoa_crs_finshd_voice
  output->asy_cnoa_crs_finshd_voice = input->asy_cnoa_crs_finshd_voice;
  // asy_cnoa_crs_offs_voice
  output->asy_cnoa_crs_offs_voice = input->asy_cnoa_crs_offs_voice;
  // asy_cnoa_crs_rmn_voice
  output->asy_cnoa_crs_rmn_voice = input->asy_cnoa_crs_rmn_voice;
  // asy_cnoa_hands_off_voice
  output->asy_cnoa_hands_off_voice = input->asy_cnoa_hands_off_voice;
  // asy_cnoa_lrng_abort_voice
  output->asy_cnoa_lrng_abort_voice = input->asy_cnoa_lrng_abort_voice;
  // asy_noa_avl_rmn_sound
  output->asy_noa_avl_rmn_sound = input->asy_noa_avl_rmn_sound;
  // asy_cnoa_takeover_warn_voice
  output->asy_cnoa_takeover_warn_voice = input->asy_cnoa_takeover_warn_voice;
  // asy_dece_remind_sound
  output->asy_dece_remind_sound = input->asy_dece_remind_sound;
  // asy_drvr_sod_cfirm_cnoa_main_page
  output->asy_drvr_sod_cfirm_cnoa_main_page = input->asy_drvr_sod_cfirm_cnoa_main_page;
  // asy_undertak_rmind_sound
  output->asy_undertak_rmind_sound = input->asy_undertak_rmind_sound;
  // asy_warn_sod_for_aut_drv
  output->asy_warn_sod_for_aut_drv = input->asy_warn_sod_for_aut_drv;
  // avl_sts_for_long_aut_drv
  output->avl_sts_for_long_aut_drv = input->avl_sts_for_long_aut_drv;
  // too_many_cars
  output->too_many_cars = input->too_many_cars;
  // drv_off_warn
  output->drv_off_warn = input->drv_off_warn;
  // ad4_horn_warn
  output->ad4_horn_warn = input->ad4_horn_warn;
  // hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  output->hmi_auto_lane_chg_sts_for_asy_ai_asist_audio = input->hmi_auto_lane_chg_sts_for_asy_ai_asist_audio;
  // drv_off_mod
  output->drv_off_mod = input->drv_off_mod;
  // asy_horn_warn_rqrd
  output->asy_horn_warn_rqrd = input->asy_horn_warn_rqrd;
  // asy_cnoa_crs_avl_prompt
  output->asy_cnoa_crs_avl_prompt = input->asy_cnoa_crs_avl_prompt;
  // asy_crs_sts_swil_indcr
  output->asy_crs_sts_swil_indcr = input->asy_crs_sts_swil_indcr;
  // asy_d2d_avl_rmn_sod
  output->asy_d2d_avl_rmn_sod = input->asy_d2d_avl_rmn_sod;
  // asy_d2d_deactvd_reasn_sod
  output->asy_d2d_deactvd_reasn_sod = input->asy_d2d_deactvd_reasn_sod;
  // asy_d2d_etc_distan_sod
  output->asy_d2d_etc_distan_sod = input->asy_d2d_etc_distan_sod;
  // asy_d2d_distan_sod
  output->asy_d2d_distan_sod = input->asy_d2d_distan_sod;
  // asy_d2d_strt_to_end_sod
  output->asy_d2d_strt_to_end_sod = input->asy_d2d_strt_to_end_sod;
  // asy_d2d_remind_sod
  output->asy_d2d_remind_sod = input->asy_d2d_remind_sod;
  // asy_lane_chg_fail_type
  output->asy_lane_chg_fail_type = input->asy_lane_chg_fail_type;
  // asy_req_lane_chg
  output->asy_req_lane_chg = input->asy_req_lane_chg;
  // asy_noa_deactvd_reasn_sod
  output->asy_noa_deactvd_reasn_sod = input->asy_noa_deactvd_reasn_sod;
  // asy_noa_remind_sod
  output->asy_noa_remind_sod = input->asy_noa_remind_sod;
  // ad4_drvr_belt_warn
  output->ad4_drvr_belt_warn = input->ad4_drvr_belt_warn;
  // asy_noa_takeover_sod
  output->asy_noa_takeover_sod = input->asy_noa_takeover_sod;
  // ad4_drvr_belt_warn_for_bkp
  output->ad4_drvr_belt_warn_for_bkp = input->ad4_drvr_belt_warn_for_bkp;
  // asy_lan_chg_sod_sec
  output->asy_lan_chg_sod_sec = input->asy_lan_chg_sod_sec;
  // ad4_camera_heating_req
  output->ad4_camera_heating_req = input->ad4_camera_heating_req;
  // ad_takeover_req_group_ad_takeover_msg
  output->ad_takeover_req_group_ad_takeover_msg = input->ad_takeover_req_group_ad_takeover_msg;
  // ad_takeover_req_group_ad_takeover_audio
  output->ad_takeover_req_group_ad_takeover_audio = input->ad_takeover_req_group_ad_takeover_audio;
  // ad_wipr_ctrl_req
  output->ad_wipr_ctrl_req = input->ad_wipr_ctrl_req;
  // asy_noa_blt_fastn
  output->asy_noa_blt_fastn = input->asy_noa_blt_fastn;
  // turn_indic_req_by_alca
  output->turn_indic_req_by_alca = input->turn_indic_req_by_alca;
  // asy_lane_chg_assist_sts
  output->asy_lane_chg_assist_sts = input->asy_lane_chg_assist_sts;
  // ad4_camera_heating_req_zcu
  output->ad4_camera_heating_req_zcu = input->ad4_camera_heating_req_zcu;
  // asy_fct_lrng_mesg
  output->asy_fct_lrng_mesg = input->asy_fct_lrng_mesg;
  // trfc_jam_warn
  output->trfc_jam_warn = input->trfc_jam_warn;
  return true;
}

deva_function_msgs__msg__MachRemind *
deva_function_msgs__msg__MachRemind__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachRemind * msg = (deva_function_msgs__msg__MachRemind *)allocator.allocate(sizeof(deva_function_msgs__msg__MachRemind), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__MachRemind));
  bool success = deva_function_msgs__msg__MachRemind__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__MachRemind__destroy(deva_function_msgs__msg__MachRemind * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__MachRemind__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__MachRemind__Sequence__init(deva_function_msgs__msg__MachRemind__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachRemind * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__MachRemind *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__MachRemind), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__MachRemind__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__MachRemind__fini(&data[i - 1]);
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
deva_function_msgs__msg__MachRemind__Sequence__fini(deva_function_msgs__msg__MachRemind__Sequence * array)
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
      deva_function_msgs__msg__MachRemind__fini(&array->data[i]);
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

deva_function_msgs__msg__MachRemind__Sequence *
deva_function_msgs__msg__MachRemind__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachRemind__Sequence * array = (deva_function_msgs__msg__MachRemind__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__MachRemind__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__MachRemind__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__MachRemind__Sequence__destroy(deva_function_msgs__msg__MachRemind__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__MachRemind__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__MachRemind__Sequence__are_equal(const deva_function_msgs__msg__MachRemind__Sequence * lhs, const deva_function_msgs__msg__MachRemind__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__MachRemind__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__MachRemind__Sequence__copy(
  const deva_function_msgs__msg__MachRemind__Sequence * input,
  deva_function_msgs__msg__MachRemind__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__MachRemind);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__MachRemind * data =
      (deva_function_msgs__msg__MachRemind *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__MachRemind__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__MachRemind__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__MachRemind__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
