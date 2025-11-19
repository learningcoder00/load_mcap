// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_function_msgs:msg/MachFunctionControl.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/mach_function_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_function_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_function_msgs/msg/detail/mach_function_control__struct.h"
#include "deva_function_msgs/msg/detail/mach_function_control__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "deva_common_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
size_t get_serialized_size_deva_common_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
size_t max_serialized_size_deva_common_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header)();


using _MachFunctionControl__ros_msg_type = deva_function_msgs__msg__MachFunctionControl;

static bool _MachFunctionControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MachFunctionControl__ros_msg_type * ros_message = static_cast<const _MachFunctionControl__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: asy_aut_drvg_avl
  {
    cdr << ros_message->asy_aut_drvg_avl;
  }

  // Field name: asy_lat_offst_sts
  {
    cdr << ros_message->asy_lat_offst_sts;
  }

  // Field name: asy_noa_degrade_msg
  {
    cdr << ros_message->asy_noa_degrade_msg;
  }

  // Field name: lane_chg_aut_info_for_asy_hi_way
  {
    cdr << ros_message->lane_chg_aut_info_for_asy_hi_way;
  }

  // Field name: lane_chg_aut_sts_for_asy_hi_way
  {
    cdr << ros_message->lane_chg_aut_sts_for_asy_hi_way;
  }

  // Field name: ti_gap_set_for_lgt_ctrl
  {
    cdr << ros_message->ti_gap_set_for_lgt_ctrl;
  }

  // Field name: asy_lgt_ctrl_take_over_req
  {
    cdr << ros_message->asy_lgt_ctrl_take_over_req;
  }

  // Field name: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    cdr << ros_message->steer_tq_addl_for_ema_steer_tq_addl_for_ema;
  }

  // Field name: strt_req_of_lgt_ctrl_for_prpsn
  {
    cdr << ros_message->strt_req_of_lgt_ctrl_for_prpsn;
  }

  // Field name: asy_noa_deactvd_reasn_mesg
  {
    cdr << ros_message->asy_noa_deactvd_reasn_mesg;
  }

  // Field name: asy_noa_remind_mesg
  {
    cdr << ros_message->asy_noa_remind_mesg;
  }

  // Field name: asy_high_beam_flash_warn_rqrd
  {
    cdr << ros_message->asy_high_beam_flash_warn_rqrd;
  }

  // Field name: asy_noa_takeover_mesg
  {
    cdr << ros_message->asy_noa_takeover_mesg;
  }

  // Field name: asy_fast_lane_swt_sts
  {
    cdr << ros_message->asy_fast_lane_swt_sts;
  }

  // Field name: asy_cnoa_auto_lane_chg_style
  {
    cdr << ros_message->asy_cnoa_auto_lane_chg_style;
  }

  // Field name: asy_cnoa_crs_actv_faild_msg
  {
    cdr << ros_message->asy_cnoa_crs_actv_faild_msg;
  }

  // Field name: asy_cnoa_crs_cross_intsec_msg
  {
    cdr << ros_message->asy_cnoa_crs_cross_intsec_msg;
  }

  // Field name: asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  {
    cdr << ros_message->asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg;
  }

  // Field name: asy_cnoa_crs_finshd_msg
  {
    cdr << ros_message->asy_cnoa_crs_finshd_msg;
  }

  // Field name: asy_cnoa_crs_ind_ti_gap_msg
  {
    cdr << ros_message->asy_cnoa_crs_ind_ti_gap_msg;
  }

  // Field name: asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  {
    cdr << ros_message->asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg;
  }

  // Field name: asy_cnoa_crs_actv_msg
  {
    cdr << ros_message->asy_cnoa_crs_actv_msg;
  }

  // Field name: asy_cnoa_crs_off_odddistan
  {
    cdr << ros_message->asy_cnoa_crs_off_odddistan;
  }

  // Field name: asy_cnoa_crs_sts
  {
    cdr << ros_message->asy_cnoa_crs_sts;
  }

  // Field name: asy_cnoa_game_fail_type
  {
    cdr << ros_message->asy_cnoa_game_fail_type;
  }

  // Field name: asy_cnoa_game_reason
  {
    cdr << ros_message->asy_cnoa_game_reason;
  }

  // Field name: asy_cnoa_crs_sts_csd_msg
  {
    cdr << ros_message->asy_cnoa_crs_sts_csd_msg;
  }

  // Field name: asy_cnoa_crs_swt_on_off
  {
    cdr << ros_message->asy_cnoa_crs_swt_on_off;
  }

  // Field name: asy_cnoa_crs_swt_sts
  {
    cdr << ros_message->asy_cnoa_crs_swt_sts;
  }

  // Field name: asy_cnoa_data_download_faild_msg
  {
    cdr << ros_message->asy_cnoa_data_download_faild_msg;
  }

  // Field name: asy_cnoa_crs_offs_msg
  {
    cdr << ros_message->asy_cnoa_crs_offs_msg;
  }

  // Field name: asy_cnoa_crs_rmn_msg
  {
    cdr << ros_message->asy_cnoa_crs_rmn_msg;
  }

  // Field name: asy_cnoa_sod_lane_chg_swt
  {
    cdr << ros_message->asy_cnoa_sod_lane_chg_swt;
  }

  // Field name: asy_cnoa_lrng_prmpt_msg
  {
    cdr << ros_message->asy_cnoa_lrng_prmpt_msg;
  }

  // Field name: asy_cnoa_lrng_swt_on_off
  {
    cdr << ros_message->asy_cnoa_lrng_swt_on_off;
  }

  // Field name: asy_cnoa_lrng_swt_sts
  {
    cdr << ros_message->asy_cnoa_lrng_swt_sts;
  }

  // Field name: asy_cnoa_takeover_warn_msg
  {
    cdr << ros_message->asy_cnoa_takeover_warn_msg;
  }

  // Field name: asy_cnoa_turn_fail_type
  {
    cdr << ros_message->asy_cnoa_turn_fail_type;
  }

  // Field name: asy_cnoa_turn_sts
  {
    cdr << ros_message->asy_cnoa_turn_sts;
  }

  // Field name: asy_noa_tar_spd_offs
  {
    cdr << ros_message->asy_noa_tar_spd_offs;
  }

  // Field name: asy_noa_avl_rmn
  {
    cdr << ros_message->asy_noa_avl_rmn;
  }

  // Field name: asy_aut_lane_chg_swt_sts
  {
    cdr << ros_message->asy_aut_lane_chg_swt_sts;
  }

  // Field name: stop_req_of_lgt_ctrl_for_prpsn
  {
    cdr << ros_message->stop_req_of_lgt_ctrl_for_prpsn;
  }

  // Field name: ad_theme_disp
  {
    cdr << ros_message->ad_theme_disp;
  }

  // Field name: cncl_warn_for_aut_drv
  {
    cdr << ros_message->cncl_warn_for_aut_drv;
  }

  // Field name: disp_tsi_info_for_lgt_ctrl
  {
    cdr << ros_message->disp_tsi_info_for_lgt_ctrl;
  }

  // Field name: disp_spd_set_for_lgt_ctrl
  {
    cdr << ros_message->disp_spd_set_for_lgt_ctrl;
  }

  // Field name: hmi_nop_cofm_of_lan_chag
  {
    cdr << ros_message->hmi_nop_cofm_of_lan_chag;
  }

  // Field name: ad4_lane_chg_for_e2e
  {
    cdr << ros_message->ad4_lane_chg_for_e2e;
  }

  // Field name: hwa_leading_point_valid
  {
    cdr << ros_message->hwa_leading_point_valid;
  }

  // Field name: hwa_leading_point_center_y
  {
    cdr << ros_message->hwa_leading_point_center_y;
  }

  // Field name: hwa_leading_point_center_x
  {
    cdr << ros_message->hwa_leading_point_center_x;
  }

  // Field name: ad4_turn_indic_req_req
  {
    cdr << ros_message->ad4_turn_indic_req_req;
  }

  // Field name: ad4_unavl_sts_for_e2e
  {
    cdr << ros_message->ad4_unavl_sts_for_e2e;
  }

  // Field name: ad4_warn_sts_for_e2e
  {
    cdr << ros_message->ad4_warn_sts_for_e2e;
  }

  // Field name: ad4_win_open_req
  {
    cdr << ros_message->ad4_win_open_req;
  }

  // Field name: ad_ctrl_mode_ad_ctrl_mode
  {
    cdr << ros_message->ad_ctrl_mode_ad_ctrl_mode;
  }

  // Field name: ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  {
    cdr << ros_message->ad4_drv_off_req_for_lgt_ctrl_drv_off_req;
  }

  // Field name: asy_dece_remind
  {
    cdr << ros_message->asy_dece_remind;
  }

  // Field name: asy_lat_offs_swt_sts
  {
    cdr << ros_message->asy_lat_offs_swt_sts;
  }

  // Field name: asy_undertak_on_off_sts
  {
    cdr << ros_message->asy_undertak_on_off_sts;
  }

  // Field name: asy_undertak_rmind
  {
    cdr << ros_message->asy_undertak_rmind;
  }

  // Field name: asy_warn_mesg_for_aut_drv
  {
    cdr << ros_message->asy_warn_mesg_for_aut_drv;
  }

  // Field name: lgt_fusn_trfc_sgn
  {
    cdr << ros_message->lgt_fusn_trfc_sgn;
  }

  // Field name: drvg_ast_on_sys_sts
  {
    cdr << ros_message->drvg_ast_on_sys_sts;
  }

  // Field name: asy_d2d_avl_rmn
  {
    cdr << ros_message->asy_d2d_avl_rmn;
  }

  // Field name: asy_d2d_deactvd_reasn_mesg
  {
    cdr << ros_message->asy_d2d_deactvd_reasn_mesg;
  }

  // Field name: asy_d2d_distan_msg
  {
    cdr << ros_message->asy_d2d_distan_msg;
  }

  // Field name: asy_d2d_etc_distan_msg
  {
    cdr << ros_message->asy_d2d_etc_distan_msg;
  }

  // Field name: asy_d2d_remind_msg
  {
    cdr << ros_message->asy_d2d_remind_msg;
  }

  // Field name: asy_etc_traffic_sw_sts
  {
    cdr << ros_message->asy_etc_traffic_sw_sts;
  }

  // Field name: asy_d2d_strt_to_end
  {
    cdr << ros_message->asy_d2d_strt_to_end;
  }

  // Field name: asy_safe_stop_sts
  {
    cdr << ros_message->asy_safe_stop_sts;
  }

  // Field name: asy_sod_lane_chg_switch
  {
    cdr << ros_message->asy_sod_lane_chg_switch;
  }

  // Field name: avl_sts_for_long_aut_drv_sound
  {
    cdr << ros_message->avl_sts_for_long_aut_drv_sound;
  }

  // Field name: asy_sod_pilot_cfirm
  {
    cdr << ros_message->asy_sod_pilot_cfirm;
  }

  // Field name: cncl_warn_for_aut_drv_sound
  {
    cdr << ros_message->cncl_warn_for_aut_drv_sound;
  }

  // Field name: cncl_warn_lgt_for_aut_drv_sound
  {
    cdr << ros_message->cncl_warn_lgt_for_aut_drv_sound;
  }

  // Field name: hmi_auto_lane_chg_style
  {
    cdr << ros_message->hmi_auto_lane_chg_style;
  }

  // Field name: hmi_lane_chg_info
  {
    cdr << ros_message->hmi_lane_chg_info;
  }

  // Field name: ovrd_wrn_for_fst_actv
  {
    cdr << ros_message->ovrd_wrn_for_fst_actv;
  }

  // Field name: ad4_frt_lamp_req
  {
    cdr << ros_message->ad4_frt_lamp_req;
  }

  // Field name: ad4_rear_fog_lamp_req
  {
    cdr << ros_message->ad4_rear_fog_lamp_req;
  }

  // Field name: ad4_res_req_for_e2e
  {
    cdr << ros_message->ad4_res_req_for_e2e;
  }

  // Field name: ad4_trunk_ctrl_req
  {
    cdr << ros_message->ad4_trunk_ctrl_req;
  }

  // Field name: acc_fusn_trfc_sgn
  {
    cdr << ros_message->acc_fusn_trfc_sgn;
  }

  // Field name: asy_sfty_fct_sts_to_edraccfct_sts
  {
    cdr << ros_message->asy_sfty_fct_sts_to_edraccfct_sts;
  }

  // Field name: asy_sfty_fct_sts_to_edracsfb1_fct_sts
  {
    cdr << ros_message->asy_sfty_fct_sts_to_edracsfb1_fct_sts;
  }

  // Field name: asy_sfty_fct_sts_to_edracsfb2_fct_sts
  {
    cdr << ros_message->asy_sfty_fct_sts_to_edracsfb2_fct_sts;
  }

  // Field name: asy_sfty_fct_sts_to_edracsfc_fct_sts
  {
    cdr << ros_message->asy_sfty_fct_sts_to_edracsfc_fct_sts;
  }

  // Field name: asy_sfty_fct_sts_to_edracsfd_fct_sts
  {
    cdr << ros_message->asy_sfty_fct_sts_to_edracsfd_fct_sts;
  }

  // Field name: asy_sfty_fct_sts_to_edracsfe_fct_sts
  {
    cdr << ros_message->asy_sfty_fct_sts_to_edracsfe_fct_sts;
  }

  // Field name: asy_cnoa_crs_csd_indcr
  {
    cdr << ros_message->asy_cnoa_crs_csd_indcr;
  }

  // Field name: asy_cnoa_crs_hud_indcr
  {
    cdr << ros_message->asy_cnoa_crs_hud_indcr;
  }

  // Field name: asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  {
    cdr << ros_message->asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr;
  }

  // Field name: asy_emgy_manoeuvre_aid_sts
  {
    cdr << ros_message->asy_emgy_manoeuvre_aid_sts;
  }

  // Field name: asy_fctn_ihbt_by_trlr
  {
    cdr << ros_message->asy_fctn_ihbt_by_trlr;
  }

  // Field name: asy_icc_max_warn_msg
  {
    cdr << ros_message->asy_icc_max_warn_msg;
  }

  // Field name: asy_sfty_hwl_req
  {
    cdr << ros_message->asy_sfty_hwl_req;
  }

  // Field name: aut_lane_chg_sts
  {
    cdr << ros_message->aut_lane_chg_sts;
  }

  // Field name: cllsn_aid_post_ema
  {
    cdr << ros_message->cllsn_aid_post_ema;
  }

  // Field name: lane_chg_aut_actv_sts
  {
    cdr << ros_message->lane_chg_aut_actv_sts;
  }

  // Field name: cam_sts_cam_cam_frnt_cal_not_cmpl
  {
    cdr << ros_message->cam_sts_cam_cam_frnt_cal_not_cmpl;
  }

  // Field name: asy_cnoa_lane_chg_assist_sts
  {
    cdr << ros_message->asy_cnoa_lane_chg_assist_sts;
  }

  // Field name: asy_cnoa_lane_chg_fail_type
  {
    cdr << ros_message->asy_cnoa_lane_chg_fail_type;
  }

  // Field name: aut_cnoa_lane_chg_sts
  {
    cdr << ros_message->aut_cnoa_lane_chg_sts;
  }

  // Field name: asy_cnoa_req_lane_chg
  {
    cdr << ros_message->asy_cnoa_req_lane_chg;
  }

  return true;
}

static bool _MachFunctionControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MachFunctionControl__ros_msg_type * ros_message = static_cast<_MachFunctionControl__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: asy_aut_drvg_avl
  {
    cdr >> ros_message->asy_aut_drvg_avl;
  }

  // Field name: asy_lat_offst_sts
  {
    cdr >> ros_message->asy_lat_offst_sts;
  }

  // Field name: asy_noa_degrade_msg
  {
    cdr >> ros_message->asy_noa_degrade_msg;
  }

  // Field name: lane_chg_aut_info_for_asy_hi_way
  {
    cdr >> ros_message->lane_chg_aut_info_for_asy_hi_way;
  }

  // Field name: lane_chg_aut_sts_for_asy_hi_way
  {
    cdr >> ros_message->lane_chg_aut_sts_for_asy_hi_way;
  }

  // Field name: ti_gap_set_for_lgt_ctrl
  {
    cdr >> ros_message->ti_gap_set_for_lgt_ctrl;
  }

  // Field name: asy_lgt_ctrl_take_over_req
  {
    cdr >> ros_message->asy_lgt_ctrl_take_over_req;
  }

  // Field name: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    cdr >> ros_message->steer_tq_addl_for_ema_steer_tq_addl_for_ema;
  }

  // Field name: strt_req_of_lgt_ctrl_for_prpsn
  {
    cdr >> ros_message->strt_req_of_lgt_ctrl_for_prpsn;
  }

  // Field name: asy_noa_deactvd_reasn_mesg
  {
    cdr >> ros_message->asy_noa_deactvd_reasn_mesg;
  }

  // Field name: asy_noa_remind_mesg
  {
    cdr >> ros_message->asy_noa_remind_mesg;
  }

  // Field name: asy_high_beam_flash_warn_rqrd
  {
    cdr >> ros_message->asy_high_beam_flash_warn_rqrd;
  }

  // Field name: asy_noa_takeover_mesg
  {
    cdr >> ros_message->asy_noa_takeover_mesg;
  }

  // Field name: asy_fast_lane_swt_sts
  {
    cdr >> ros_message->asy_fast_lane_swt_sts;
  }

  // Field name: asy_cnoa_auto_lane_chg_style
  {
    cdr >> ros_message->asy_cnoa_auto_lane_chg_style;
  }

  // Field name: asy_cnoa_crs_actv_faild_msg
  {
    cdr >> ros_message->asy_cnoa_crs_actv_faild_msg;
  }

  // Field name: asy_cnoa_crs_cross_intsec_msg
  {
    cdr >> ros_message->asy_cnoa_crs_cross_intsec_msg;
  }

  // Field name: asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  {
    cdr >> ros_message->asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg;
  }

  // Field name: asy_cnoa_crs_finshd_msg
  {
    cdr >> ros_message->asy_cnoa_crs_finshd_msg;
  }

  // Field name: asy_cnoa_crs_ind_ti_gap_msg
  {
    cdr >> ros_message->asy_cnoa_crs_ind_ti_gap_msg;
  }

  // Field name: asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  {
    cdr >> ros_message->asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg;
  }

  // Field name: asy_cnoa_crs_actv_msg
  {
    cdr >> ros_message->asy_cnoa_crs_actv_msg;
  }

  // Field name: asy_cnoa_crs_off_odddistan
  {
    cdr >> ros_message->asy_cnoa_crs_off_odddistan;
  }

  // Field name: asy_cnoa_crs_sts
  {
    cdr >> ros_message->asy_cnoa_crs_sts;
  }

  // Field name: asy_cnoa_game_fail_type
  {
    cdr >> ros_message->asy_cnoa_game_fail_type;
  }

  // Field name: asy_cnoa_game_reason
  {
    cdr >> ros_message->asy_cnoa_game_reason;
  }

  // Field name: asy_cnoa_crs_sts_csd_msg
  {
    cdr >> ros_message->asy_cnoa_crs_sts_csd_msg;
  }

  // Field name: asy_cnoa_crs_swt_on_off
  {
    cdr >> ros_message->asy_cnoa_crs_swt_on_off;
  }

  // Field name: asy_cnoa_crs_swt_sts
  {
    cdr >> ros_message->asy_cnoa_crs_swt_sts;
  }

  // Field name: asy_cnoa_data_download_faild_msg
  {
    cdr >> ros_message->asy_cnoa_data_download_faild_msg;
  }

  // Field name: asy_cnoa_crs_offs_msg
  {
    cdr >> ros_message->asy_cnoa_crs_offs_msg;
  }

  // Field name: asy_cnoa_crs_rmn_msg
  {
    cdr >> ros_message->asy_cnoa_crs_rmn_msg;
  }

  // Field name: asy_cnoa_sod_lane_chg_swt
  {
    cdr >> ros_message->asy_cnoa_sod_lane_chg_swt;
  }

  // Field name: asy_cnoa_lrng_prmpt_msg
  {
    cdr >> ros_message->asy_cnoa_lrng_prmpt_msg;
  }

  // Field name: asy_cnoa_lrng_swt_on_off
  {
    cdr >> ros_message->asy_cnoa_lrng_swt_on_off;
  }

  // Field name: asy_cnoa_lrng_swt_sts
  {
    cdr >> ros_message->asy_cnoa_lrng_swt_sts;
  }

  // Field name: asy_cnoa_takeover_warn_msg
  {
    cdr >> ros_message->asy_cnoa_takeover_warn_msg;
  }

  // Field name: asy_cnoa_turn_fail_type
  {
    cdr >> ros_message->asy_cnoa_turn_fail_type;
  }

  // Field name: asy_cnoa_turn_sts
  {
    cdr >> ros_message->asy_cnoa_turn_sts;
  }

  // Field name: asy_noa_tar_spd_offs
  {
    cdr >> ros_message->asy_noa_tar_spd_offs;
  }

  // Field name: asy_noa_avl_rmn
  {
    cdr >> ros_message->asy_noa_avl_rmn;
  }

  // Field name: asy_aut_lane_chg_swt_sts
  {
    cdr >> ros_message->asy_aut_lane_chg_swt_sts;
  }

  // Field name: stop_req_of_lgt_ctrl_for_prpsn
  {
    cdr >> ros_message->stop_req_of_lgt_ctrl_for_prpsn;
  }

  // Field name: ad_theme_disp
  {
    cdr >> ros_message->ad_theme_disp;
  }

  // Field name: cncl_warn_for_aut_drv
  {
    cdr >> ros_message->cncl_warn_for_aut_drv;
  }

  // Field name: disp_tsi_info_for_lgt_ctrl
  {
    cdr >> ros_message->disp_tsi_info_for_lgt_ctrl;
  }

  // Field name: disp_spd_set_for_lgt_ctrl
  {
    cdr >> ros_message->disp_spd_set_for_lgt_ctrl;
  }

  // Field name: hmi_nop_cofm_of_lan_chag
  {
    cdr >> ros_message->hmi_nop_cofm_of_lan_chag;
  }

  // Field name: ad4_lane_chg_for_e2e
  {
    cdr >> ros_message->ad4_lane_chg_for_e2e;
  }

  // Field name: hwa_leading_point_valid
  {
    cdr >> ros_message->hwa_leading_point_valid;
  }

  // Field name: hwa_leading_point_center_y
  {
    cdr >> ros_message->hwa_leading_point_center_y;
  }

  // Field name: hwa_leading_point_center_x
  {
    cdr >> ros_message->hwa_leading_point_center_x;
  }

  // Field name: ad4_turn_indic_req_req
  {
    cdr >> ros_message->ad4_turn_indic_req_req;
  }

  // Field name: ad4_unavl_sts_for_e2e
  {
    cdr >> ros_message->ad4_unavl_sts_for_e2e;
  }

  // Field name: ad4_warn_sts_for_e2e
  {
    cdr >> ros_message->ad4_warn_sts_for_e2e;
  }

  // Field name: ad4_win_open_req
  {
    cdr >> ros_message->ad4_win_open_req;
  }

  // Field name: ad_ctrl_mode_ad_ctrl_mode
  {
    cdr >> ros_message->ad_ctrl_mode_ad_ctrl_mode;
  }

  // Field name: ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  {
    cdr >> ros_message->ad4_drv_off_req_for_lgt_ctrl_drv_off_req;
  }

  // Field name: asy_dece_remind
  {
    cdr >> ros_message->asy_dece_remind;
  }

  // Field name: asy_lat_offs_swt_sts
  {
    cdr >> ros_message->asy_lat_offs_swt_sts;
  }

  // Field name: asy_undertak_on_off_sts
  {
    cdr >> ros_message->asy_undertak_on_off_sts;
  }

  // Field name: asy_undertak_rmind
  {
    cdr >> ros_message->asy_undertak_rmind;
  }

  // Field name: asy_warn_mesg_for_aut_drv
  {
    cdr >> ros_message->asy_warn_mesg_for_aut_drv;
  }

  // Field name: lgt_fusn_trfc_sgn
  {
    cdr >> ros_message->lgt_fusn_trfc_sgn;
  }

  // Field name: drvg_ast_on_sys_sts
  {
    cdr >> ros_message->drvg_ast_on_sys_sts;
  }

  // Field name: asy_d2d_avl_rmn
  {
    cdr >> ros_message->asy_d2d_avl_rmn;
  }

  // Field name: asy_d2d_deactvd_reasn_mesg
  {
    cdr >> ros_message->asy_d2d_deactvd_reasn_mesg;
  }

  // Field name: asy_d2d_distan_msg
  {
    cdr >> ros_message->asy_d2d_distan_msg;
  }

  // Field name: asy_d2d_etc_distan_msg
  {
    cdr >> ros_message->asy_d2d_etc_distan_msg;
  }

  // Field name: asy_d2d_remind_msg
  {
    cdr >> ros_message->asy_d2d_remind_msg;
  }

  // Field name: asy_etc_traffic_sw_sts
  {
    cdr >> ros_message->asy_etc_traffic_sw_sts;
  }

  // Field name: asy_d2d_strt_to_end
  {
    cdr >> ros_message->asy_d2d_strt_to_end;
  }

  // Field name: asy_safe_stop_sts
  {
    cdr >> ros_message->asy_safe_stop_sts;
  }

  // Field name: asy_sod_lane_chg_switch
  {
    cdr >> ros_message->asy_sod_lane_chg_switch;
  }

  // Field name: avl_sts_for_long_aut_drv_sound
  {
    cdr >> ros_message->avl_sts_for_long_aut_drv_sound;
  }

  // Field name: asy_sod_pilot_cfirm
  {
    cdr >> ros_message->asy_sod_pilot_cfirm;
  }

  // Field name: cncl_warn_for_aut_drv_sound
  {
    cdr >> ros_message->cncl_warn_for_aut_drv_sound;
  }

  // Field name: cncl_warn_lgt_for_aut_drv_sound
  {
    cdr >> ros_message->cncl_warn_lgt_for_aut_drv_sound;
  }

  // Field name: hmi_auto_lane_chg_style
  {
    cdr >> ros_message->hmi_auto_lane_chg_style;
  }

  // Field name: hmi_lane_chg_info
  {
    cdr >> ros_message->hmi_lane_chg_info;
  }

  // Field name: ovrd_wrn_for_fst_actv
  {
    cdr >> ros_message->ovrd_wrn_for_fst_actv;
  }

  // Field name: ad4_frt_lamp_req
  {
    cdr >> ros_message->ad4_frt_lamp_req;
  }

  // Field name: ad4_rear_fog_lamp_req
  {
    cdr >> ros_message->ad4_rear_fog_lamp_req;
  }

  // Field name: ad4_res_req_for_e2e
  {
    cdr >> ros_message->ad4_res_req_for_e2e;
  }

  // Field name: ad4_trunk_ctrl_req
  {
    cdr >> ros_message->ad4_trunk_ctrl_req;
  }

  // Field name: acc_fusn_trfc_sgn
  {
    cdr >> ros_message->acc_fusn_trfc_sgn;
  }

  // Field name: asy_sfty_fct_sts_to_edraccfct_sts
  {
    cdr >> ros_message->asy_sfty_fct_sts_to_edraccfct_sts;
  }

  // Field name: asy_sfty_fct_sts_to_edracsfb1_fct_sts
  {
    cdr >> ros_message->asy_sfty_fct_sts_to_edracsfb1_fct_sts;
  }

  // Field name: asy_sfty_fct_sts_to_edracsfb2_fct_sts
  {
    cdr >> ros_message->asy_sfty_fct_sts_to_edracsfb2_fct_sts;
  }

  // Field name: asy_sfty_fct_sts_to_edracsfc_fct_sts
  {
    cdr >> ros_message->asy_sfty_fct_sts_to_edracsfc_fct_sts;
  }

  // Field name: asy_sfty_fct_sts_to_edracsfd_fct_sts
  {
    cdr >> ros_message->asy_sfty_fct_sts_to_edracsfd_fct_sts;
  }

  // Field name: asy_sfty_fct_sts_to_edracsfe_fct_sts
  {
    cdr >> ros_message->asy_sfty_fct_sts_to_edracsfe_fct_sts;
  }

  // Field name: asy_cnoa_crs_csd_indcr
  {
    cdr >> ros_message->asy_cnoa_crs_csd_indcr;
  }

  // Field name: asy_cnoa_crs_hud_indcr
  {
    cdr >> ros_message->asy_cnoa_crs_hud_indcr;
  }

  // Field name: asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  {
    cdr >> ros_message->asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr;
  }

  // Field name: asy_emgy_manoeuvre_aid_sts
  {
    cdr >> ros_message->asy_emgy_manoeuvre_aid_sts;
  }

  // Field name: asy_fctn_ihbt_by_trlr
  {
    cdr >> ros_message->asy_fctn_ihbt_by_trlr;
  }

  // Field name: asy_icc_max_warn_msg
  {
    cdr >> ros_message->asy_icc_max_warn_msg;
  }

  // Field name: asy_sfty_hwl_req
  {
    cdr >> ros_message->asy_sfty_hwl_req;
  }

  // Field name: aut_lane_chg_sts
  {
    cdr >> ros_message->aut_lane_chg_sts;
  }

  // Field name: cllsn_aid_post_ema
  {
    cdr >> ros_message->cllsn_aid_post_ema;
  }

  // Field name: lane_chg_aut_actv_sts
  {
    cdr >> ros_message->lane_chg_aut_actv_sts;
  }

  // Field name: cam_sts_cam_cam_frnt_cal_not_cmpl
  {
    cdr >> ros_message->cam_sts_cam_cam_frnt_cal_not_cmpl;
  }

  // Field name: asy_cnoa_lane_chg_assist_sts
  {
    cdr >> ros_message->asy_cnoa_lane_chg_assist_sts;
  }

  // Field name: asy_cnoa_lane_chg_fail_type
  {
    cdr >> ros_message->asy_cnoa_lane_chg_fail_type;
  }

  // Field name: aut_cnoa_lane_chg_sts
  {
    cdr >> ros_message->aut_cnoa_lane_chg_sts;
  }

  // Field name: asy_cnoa_req_lane_chg
  {
    cdr >> ros_message->asy_cnoa_req_lane_chg;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t get_serialized_size_deva_function_msgs__msg__MachFunctionControl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MachFunctionControl__ros_msg_type * ros_message = static_cast<const _MachFunctionControl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name asy_aut_drvg_avl
  {
    size_t item_size = sizeof(ros_message->asy_aut_drvg_avl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_lat_offst_sts
  {
    size_t item_size = sizeof(ros_message->asy_lat_offst_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_degrade_msg
  {
    size_t item_size = sizeof(ros_message->asy_noa_degrade_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_chg_aut_info_for_asy_hi_way
  {
    size_t item_size = sizeof(ros_message->lane_chg_aut_info_for_asy_hi_way);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_chg_aut_sts_for_asy_hi_way
  {
    size_t item_size = sizeof(ros_message->lane_chg_aut_sts_for_asy_hi_way);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ti_gap_set_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message->ti_gap_set_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_lgt_ctrl_take_over_req
  {
    size_t item_size = sizeof(ros_message->asy_lgt_ctrl_take_over_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    size_t item_size = sizeof(ros_message->steer_tq_addl_for_ema_steer_tq_addl_for_ema);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name strt_req_of_lgt_ctrl_for_prpsn
  {
    size_t item_size = sizeof(ros_message->strt_req_of_lgt_ctrl_for_prpsn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_deactvd_reasn_mesg
  {
    size_t item_size = sizeof(ros_message->asy_noa_deactvd_reasn_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_remind_mesg
  {
    size_t item_size = sizeof(ros_message->asy_noa_remind_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_high_beam_flash_warn_rqrd
  {
    size_t item_size = sizeof(ros_message->asy_high_beam_flash_warn_rqrd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_takeover_mesg
  {
    size_t item_size = sizeof(ros_message->asy_noa_takeover_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_fast_lane_swt_sts
  {
    size_t item_size = sizeof(ros_message->asy_fast_lane_swt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_auto_lane_chg_style
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_auto_lane_chg_style);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_actv_faild_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_actv_faild_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_cross_intsec_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_cross_intsec_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_finshd_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_finshd_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_ind_ti_gap_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_ind_ti_gap_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_actv_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_actv_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_off_odddistan
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_off_odddistan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_sts
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_game_fail_type
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_game_fail_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_game_reason
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_game_reason);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_sts_csd_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_sts_csd_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_swt_on_off
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_swt_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_swt_sts
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_swt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_data_download_faild_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_data_download_faild_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_offs_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_offs_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_rmn_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_rmn_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_sod_lane_chg_swt
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_sod_lane_chg_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_lrng_prmpt_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_lrng_prmpt_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_lrng_swt_on_off
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_lrng_swt_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_lrng_swt_sts
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_lrng_swt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_takeover_warn_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_takeover_warn_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_turn_fail_type
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_turn_fail_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_turn_sts
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_turn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_tar_spd_offs
  {
    size_t item_size = sizeof(ros_message->asy_noa_tar_spd_offs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_avl_rmn
  {
    size_t item_size = sizeof(ros_message->asy_noa_avl_rmn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_aut_lane_chg_swt_sts
  {
    size_t item_size = sizeof(ros_message->asy_aut_lane_chg_swt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop_req_of_lgt_ctrl_for_prpsn
  {
    size_t item_size = sizeof(ros_message->stop_req_of_lgt_ctrl_for_prpsn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad_theme_disp
  {
    size_t item_size = sizeof(ros_message->ad_theme_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cncl_warn_for_aut_drv
  {
    size_t item_size = sizeof(ros_message->cncl_warn_for_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disp_tsi_info_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message->disp_tsi_info_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disp_spd_set_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message->disp_spd_set_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_nop_cofm_of_lan_chag
  {
    size_t item_size = sizeof(ros_message->hmi_nop_cofm_of_lan_chag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_lane_chg_for_e2e
  {
    size_t item_size = sizeof(ros_message->ad4_lane_chg_for_e2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hwa_leading_point_valid
  {
    size_t item_size = sizeof(ros_message->hwa_leading_point_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hwa_leading_point_center_y
  {
    size_t item_size = sizeof(ros_message->hwa_leading_point_center_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hwa_leading_point_center_x
  {
    size_t item_size = sizeof(ros_message->hwa_leading_point_center_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_turn_indic_req_req
  {
    size_t item_size = sizeof(ros_message->ad4_turn_indic_req_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_unavl_sts_for_e2e
  {
    size_t item_size = sizeof(ros_message->ad4_unavl_sts_for_e2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_warn_sts_for_e2e
  {
    size_t item_size = sizeof(ros_message->ad4_warn_sts_for_e2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_win_open_req
  {
    size_t item_size = sizeof(ros_message->ad4_win_open_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad_ctrl_mode_ad_ctrl_mode
  {
    size_t item_size = sizeof(ros_message->ad_ctrl_mode_ad_ctrl_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  {
    size_t item_size = sizeof(ros_message->ad4_drv_off_req_for_lgt_ctrl_drv_off_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_dece_remind
  {
    size_t item_size = sizeof(ros_message->asy_dece_remind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_lat_offs_swt_sts
  {
    size_t item_size = sizeof(ros_message->asy_lat_offs_swt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_undertak_on_off_sts
  {
    size_t item_size = sizeof(ros_message->asy_undertak_on_off_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_undertak_rmind
  {
    size_t item_size = sizeof(ros_message->asy_undertak_rmind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_warn_mesg_for_aut_drv
  {
    size_t item_size = sizeof(ros_message->asy_warn_mesg_for_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lgt_fusn_trfc_sgn
  {
    size_t item_size = sizeof(ros_message->lgt_fusn_trfc_sgn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvg_ast_on_sys_sts
  {
    size_t item_size = sizeof(ros_message->drvg_ast_on_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_avl_rmn
  {
    size_t item_size = sizeof(ros_message->asy_d2d_avl_rmn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_deactvd_reasn_mesg
  {
    size_t item_size = sizeof(ros_message->asy_d2d_deactvd_reasn_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_distan_msg
  {
    size_t item_size = sizeof(ros_message->asy_d2d_distan_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_etc_distan_msg
  {
    size_t item_size = sizeof(ros_message->asy_d2d_etc_distan_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_remind_msg
  {
    size_t item_size = sizeof(ros_message->asy_d2d_remind_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_etc_traffic_sw_sts
  {
    size_t item_size = sizeof(ros_message->asy_etc_traffic_sw_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_strt_to_end
  {
    size_t item_size = sizeof(ros_message->asy_d2d_strt_to_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_safe_stop_sts
  {
    size_t item_size = sizeof(ros_message->asy_safe_stop_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_sod_lane_chg_switch
  {
    size_t item_size = sizeof(ros_message->asy_sod_lane_chg_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avl_sts_for_long_aut_drv_sound
  {
    size_t item_size = sizeof(ros_message->avl_sts_for_long_aut_drv_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_sod_pilot_cfirm
  {
    size_t item_size = sizeof(ros_message->asy_sod_pilot_cfirm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cncl_warn_for_aut_drv_sound
  {
    size_t item_size = sizeof(ros_message->cncl_warn_for_aut_drv_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cncl_warn_lgt_for_aut_drv_sound
  {
    size_t item_size = sizeof(ros_message->cncl_warn_lgt_for_aut_drv_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_auto_lane_chg_style
  {
    size_t item_size = sizeof(ros_message->hmi_auto_lane_chg_style);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_lane_chg_info
  {
    size_t item_size = sizeof(ros_message->hmi_lane_chg_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ovrd_wrn_for_fst_actv
  {
    size_t item_size = sizeof(ros_message->ovrd_wrn_for_fst_actv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_frt_lamp_req
  {
    size_t item_size = sizeof(ros_message->ad4_frt_lamp_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_rear_fog_lamp_req
  {
    size_t item_size = sizeof(ros_message->ad4_rear_fog_lamp_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_res_req_for_e2e
  {
    size_t item_size = sizeof(ros_message->ad4_res_req_for_e2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_trunk_ctrl_req
  {
    size_t item_size = sizeof(ros_message->ad4_trunk_ctrl_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_fusn_trfc_sgn
  {
    size_t item_size = sizeof(ros_message->acc_fusn_trfc_sgn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_sfty_fct_sts_to_edraccfct_sts
  {
    size_t item_size = sizeof(ros_message->asy_sfty_fct_sts_to_edraccfct_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_sfty_fct_sts_to_edracsfb1_fct_sts
  {
    size_t item_size = sizeof(ros_message->asy_sfty_fct_sts_to_edracsfb1_fct_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_sfty_fct_sts_to_edracsfb2_fct_sts
  {
    size_t item_size = sizeof(ros_message->asy_sfty_fct_sts_to_edracsfb2_fct_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_sfty_fct_sts_to_edracsfc_fct_sts
  {
    size_t item_size = sizeof(ros_message->asy_sfty_fct_sts_to_edracsfc_fct_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_sfty_fct_sts_to_edracsfd_fct_sts
  {
    size_t item_size = sizeof(ros_message->asy_sfty_fct_sts_to_edracsfd_fct_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_sfty_fct_sts_to_edracsfe_fct_sts
  {
    size_t item_size = sizeof(ros_message->asy_sfty_fct_sts_to_edracsfe_fct_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_csd_indcr
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_csd_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_hud_indcr
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_hud_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_emgy_manoeuvre_aid_sts
  {
    size_t item_size = sizeof(ros_message->asy_emgy_manoeuvre_aid_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_fctn_ihbt_by_trlr
  {
    size_t item_size = sizeof(ros_message->asy_fctn_ihbt_by_trlr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_icc_max_warn_msg
  {
    size_t item_size = sizeof(ros_message->asy_icc_max_warn_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_sfty_hwl_req
  {
    size_t item_size = sizeof(ros_message->asy_sfty_hwl_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_lane_chg_sts
  {
    size_t item_size = sizeof(ros_message->aut_lane_chg_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cllsn_aid_post_ema
  {
    size_t item_size = sizeof(ros_message->cllsn_aid_post_ema);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_chg_aut_actv_sts
  {
    size_t item_size = sizeof(ros_message->lane_chg_aut_actv_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_sts_cam_cam_frnt_cal_not_cmpl
  {
    size_t item_size = sizeof(ros_message->cam_sts_cam_cam_frnt_cal_not_cmpl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_lane_chg_assist_sts
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_lane_chg_assist_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_lane_chg_fail_type
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_lane_chg_fail_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_cnoa_lane_chg_sts
  {
    size_t item_size = sizeof(ros_message->aut_cnoa_lane_chg_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_req_lane_chg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_req_lane_chg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MachFunctionControl__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_function_msgs__msg__MachFunctionControl(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t max_serialized_size_deva_function_msgs__msg__MachFunctionControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: asy_aut_drvg_avl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_lat_offst_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_degrade_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_chg_aut_info_for_asy_hi_way
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_chg_aut_sts_for_asy_hi_way
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ti_gap_set_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_lgt_ctrl_take_over_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: strt_req_of_lgt_ctrl_for_prpsn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_deactvd_reasn_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_remind_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_high_beam_flash_warn_rqrd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_takeover_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_fast_lane_swt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_auto_lane_chg_style
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_actv_faild_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_cross_intsec_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_finshd_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_ind_ti_gap_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_actv_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_off_odddistan
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: asy_cnoa_crs_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_game_fail_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_game_reason
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_sts_csd_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_swt_on_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_swt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_data_download_faild_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_offs_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_rmn_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_sod_lane_chg_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_lrng_prmpt_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_lrng_swt_on_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_lrng_swt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_takeover_warn_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_turn_fail_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_turn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_tar_spd_offs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_avl_rmn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_aut_lane_chg_swt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stop_req_of_lgt_ctrl_for_prpsn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad_theme_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cncl_warn_for_aut_drv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disp_tsi_info_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disp_spd_set_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hmi_nop_cofm_of_lan_chag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad4_lane_chg_for_e2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hwa_leading_point_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hwa_leading_point_center_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hwa_leading_point_center_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ad4_turn_indic_req_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad4_unavl_sts_for_e2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad4_warn_sts_for_e2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad4_win_open_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad_ctrl_mode_ad_ctrl_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_dece_remind
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_lat_offs_swt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_undertak_on_off_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_undertak_rmind
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_warn_mesg_for_aut_drv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lgt_fusn_trfc_sgn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvg_ast_on_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_avl_rmn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_deactvd_reasn_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_distan_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_etc_distan_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_remind_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_etc_traffic_sw_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_strt_to_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_safe_stop_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_sod_lane_chg_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: avl_sts_for_long_aut_drv_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_sod_pilot_cfirm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cncl_warn_for_aut_drv_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cncl_warn_lgt_for_aut_drv_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_auto_lane_chg_style
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_lane_chg_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ovrd_wrn_for_fst_actv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad4_frt_lamp_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad4_rear_fog_lamp_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad4_res_req_for_e2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad4_trunk_ctrl_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acc_fusn_trfc_sgn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_sfty_fct_sts_to_edraccfct_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_sfty_fct_sts_to_edracsfb1_fct_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_sfty_fct_sts_to_edracsfb2_fct_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_sfty_fct_sts_to_edracsfc_fct_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_sfty_fct_sts_to_edracsfd_fct_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_sfty_fct_sts_to_edracsfe_fct_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_csd_indcr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_hud_indcr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_emgy_manoeuvre_aid_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_fctn_ihbt_by_trlr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_icc_max_warn_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_sfty_hwl_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_lane_chg_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cllsn_aid_post_ema
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_chg_aut_actv_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cam_sts_cam_cam_frnt_cal_not_cmpl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_lane_chg_assist_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_lane_chg_fail_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_cnoa_lane_chg_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_req_lane_chg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_function_msgs__msg__MachFunctionControl;
    is_plain =
      (
      offsetof(DataType, asy_cnoa_req_lane_chg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MachFunctionControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_function_msgs__msg__MachFunctionControl(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MachFunctionControl = {
  "deva_function_msgs::msg",
  "MachFunctionControl",
  _MachFunctionControl__cdr_serialize,
  _MachFunctionControl__cdr_deserialize,
  _MachFunctionControl__get_serialized_size,
  _MachFunctionControl__max_serialized_size
};

static rosidl_message_type_support_t _MachFunctionControl__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MachFunctionControl,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, MachFunctionControl)() {
  return &_MachFunctionControl__type_support;
}

#if defined(__cplusplus)
}
#endif
