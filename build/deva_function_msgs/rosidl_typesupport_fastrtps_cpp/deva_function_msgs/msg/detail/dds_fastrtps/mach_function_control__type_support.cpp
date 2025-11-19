// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/MachFunctionControl.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/mach_function_control__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/mach_function_control__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace deva_common_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_common_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_common_msgs::msg::Header &);
size_t get_serialized_size(
  const deva_common_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_common_msgs


namespace deva_function_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_serialize(
  const deva_function_msgs::msg::MachFunctionControl & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: asy_aut_drvg_avl
  cdr << ros_message.asy_aut_drvg_avl;
  // Member: asy_lat_offst_sts
  cdr << ros_message.asy_lat_offst_sts;
  // Member: asy_noa_degrade_msg
  cdr << ros_message.asy_noa_degrade_msg;
  // Member: lane_chg_aut_info_for_asy_hi_way
  cdr << ros_message.lane_chg_aut_info_for_asy_hi_way;
  // Member: lane_chg_aut_sts_for_asy_hi_way
  cdr << ros_message.lane_chg_aut_sts_for_asy_hi_way;
  // Member: ti_gap_set_for_lgt_ctrl
  cdr << ros_message.ti_gap_set_for_lgt_ctrl;
  // Member: asy_lgt_ctrl_take_over_req
  cdr << ros_message.asy_lgt_ctrl_take_over_req;
  // Member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  cdr << ros_message.steer_tq_addl_for_ema_steer_tq_addl_for_ema;
  // Member: strt_req_of_lgt_ctrl_for_prpsn
  cdr << ros_message.strt_req_of_lgt_ctrl_for_prpsn;
  // Member: asy_noa_deactvd_reasn_mesg
  cdr << ros_message.asy_noa_deactvd_reasn_mesg;
  // Member: asy_noa_remind_mesg
  cdr << ros_message.asy_noa_remind_mesg;
  // Member: asy_high_beam_flash_warn_rqrd
  cdr << ros_message.asy_high_beam_flash_warn_rqrd;
  // Member: asy_noa_takeover_mesg
  cdr << ros_message.asy_noa_takeover_mesg;
  // Member: asy_fast_lane_swt_sts
  cdr << ros_message.asy_fast_lane_swt_sts;
  // Member: asy_cnoa_auto_lane_chg_style
  cdr << ros_message.asy_cnoa_auto_lane_chg_style;
  // Member: asy_cnoa_crs_actv_faild_msg
  cdr << ros_message.asy_cnoa_crs_actv_faild_msg;
  // Member: asy_cnoa_crs_cross_intsec_msg
  cdr << ros_message.asy_cnoa_crs_cross_intsec_msg;
  // Member: asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  cdr << ros_message.asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg;
  // Member: asy_cnoa_crs_finshd_msg
  cdr << ros_message.asy_cnoa_crs_finshd_msg;
  // Member: asy_cnoa_crs_ind_ti_gap_msg
  cdr << ros_message.asy_cnoa_crs_ind_ti_gap_msg;
  // Member: asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  cdr << ros_message.asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg;
  // Member: asy_cnoa_crs_actv_msg
  cdr << ros_message.asy_cnoa_crs_actv_msg;
  // Member: asy_cnoa_crs_off_odddistan
  cdr << ros_message.asy_cnoa_crs_off_odddistan;
  // Member: asy_cnoa_crs_sts
  cdr << ros_message.asy_cnoa_crs_sts;
  // Member: asy_cnoa_game_fail_type
  cdr << ros_message.asy_cnoa_game_fail_type;
  // Member: asy_cnoa_game_reason
  cdr << ros_message.asy_cnoa_game_reason;
  // Member: asy_cnoa_crs_sts_csd_msg
  cdr << ros_message.asy_cnoa_crs_sts_csd_msg;
  // Member: asy_cnoa_crs_swt_on_off
  cdr << ros_message.asy_cnoa_crs_swt_on_off;
  // Member: asy_cnoa_crs_swt_sts
  cdr << ros_message.asy_cnoa_crs_swt_sts;
  // Member: asy_cnoa_data_download_faild_msg
  cdr << ros_message.asy_cnoa_data_download_faild_msg;
  // Member: asy_cnoa_crs_offs_msg
  cdr << ros_message.asy_cnoa_crs_offs_msg;
  // Member: asy_cnoa_crs_rmn_msg
  cdr << ros_message.asy_cnoa_crs_rmn_msg;
  // Member: asy_cnoa_sod_lane_chg_swt
  cdr << ros_message.asy_cnoa_sod_lane_chg_swt;
  // Member: asy_cnoa_lrng_prmpt_msg
  cdr << ros_message.asy_cnoa_lrng_prmpt_msg;
  // Member: asy_cnoa_lrng_swt_on_off
  cdr << ros_message.asy_cnoa_lrng_swt_on_off;
  // Member: asy_cnoa_lrng_swt_sts
  cdr << ros_message.asy_cnoa_lrng_swt_sts;
  // Member: asy_cnoa_takeover_warn_msg
  cdr << ros_message.asy_cnoa_takeover_warn_msg;
  // Member: asy_cnoa_turn_fail_type
  cdr << ros_message.asy_cnoa_turn_fail_type;
  // Member: asy_cnoa_turn_sts
  cdr << ros_message.asy_cnoa_turn_sts;
  // Member: asy_noa_tar_spd_offs
  cdr << ros_message.asy_noa_tar_spd_offs;
  // Member: asy_noa_avl_rmn
  cdr << ros_message.asy_noa_avl_rmn;
  // Member: asy_aut_lane_chg_swt_sts
  cdr << ros_message.asy_aut_lane_chg_swt_sts;
  // Member: stop_req_of_lgt_ctrl_for_prpsn
  cdr << ros_message.stop_req_of_lgt_ctrl_for_prpsn;
  // Member: ad_theme_disp
  cdr << ros_message.ad_theme_disp;
  // Member: cncl_warn_for_aut_drv
  cdr << ros_message.cncl_warn_for_aut_drv;
  // Member: disp_tsi_info_for_lgt_ctrl
  cdr << ros_message.disp_tsi_info_for_lgt_ctrl;
  // Member: disp_spd_set_for_lgt_ctrl
  cdr << ros_message.disp_spd_set_for_lgt_ctrl;
  // Member: hmi_nop_cofm_of_lan_chag
  cdr << ros_message.hmi_nop_cofm_of_lan_chag;
  // Member: ad4_lane_chg_for_e2e
  cdr << ros_message.ad4_lane_chg_for_e2e;
  // Member: hwa_leading_point_valid
  cdr << ros_message.hwa_leading_point_valid;
  // Member: hwa_leading_point_center_y
  cdr << ros_message.hwa_leading_point_center_y;
  // Member: hwa_leading_point_center_x
  cdr << ros_message.hwa_leading_point_center_x;
  // Member: ad4_turn_indic_req_req
  cdr << ros_message.ad4_turn_indic_req_req;
  // Member: ad4_unavl_sts_for_e2e
  cdr << ros_message.ad4_unavl_sts_for_e2e;
  // Member: ad4_warn_sts_for_e2e
  cdr << ros_message.ad4_warn_sts_for_e2e;
  // Member: ad4_win_open_req
  cdr << ros_message.ad4_win_open_req;
  // Member: ad_ctrl_mode_ad_ctrl_mode
  cdr << ros_message.ad_ctrl_mode_ad_ctrl_mode;
  // Member: ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  cdr << ros_message.ad4_drv_off_req_for_lgt_ctrl_drv_off_req;
  // Member: asy_dece_remind
  cdr << ros_message.asy_dece_remind;
  // Member: asy_lat_offs_swt_sts
  cdr << ros_message.asy_lat_offs_swt_sts;
  // Member: asy_undertak_on_off_sts
  cdr << ros_message.asy_undertak_on_off_sts;
  // Member: asy_undertak_rmind
  cdr << ros_message.asy_undertak_rmind;
  // Member: asy_warn_mesg_for_aut_drv
  cdr << ros_message.asy_warn_mesg_for_aut_drv;
  // Member: lgt_fusn_trfc_sgn
  cdr << ros_message.lgt_fusn_trfc_sgn;
  // Member: drvg_ast_on_sys_sts
  cdr << ros_message.drvg_ast_on_sys_sts;
  // Member: asy_d2d_avl_rmn
  cdr << ros_message.asy_d2d_avl_rmn;
  // Member: asy_d2d_deactvd_reasn_mesg
  cdr << ros_message.asy_d2d_deactvd_reasn_mesg;
  // Member: asy_d2d_distan_msg
  cdr << ros_message.asy_d2d_distan_msg;
  // Member: asy_d2d_etc_distan_msg
  cdr << ros_message.asy_d2d_etc_distan_msg;
  // Member: asy_d2d_remind_msg
  cdr << ros_message.asy_d2d_remind_msg;
  // Member: asy_etc_traffic_sw_sts
  cdr << ros_message.asy_etc_traffic_sw_sts;
  // Member: asy_d2d_strt_to_end
  cdr << ros_message.asy_d2d_strt_to_end;
  // Member: asy_safe_stop_sts
  cdr << ros_message.asy_safe_stop_sts;
  // Member: asy_sod_lane_chg_switch
  cdr << ros_message.asy_sod_lane_chg_switch;
  // Member: avl_sts_for_long_aut_drv_sound
  cdr << ros_message.avl_sts_for_long_aut_drv_sound;
  // Member: asy_sod_pilot_cfirm
  cdr << ros_message.asy_sod_pilot_cfirm;
  // Member: cncl_warn_for_aut_drv_sound
  cdr << ros_message.cncl_warn_for_aut_drv_sound;
  // Member: cncl_warn_lgt_for_aut_drv_sound
  cdr << ros_message.cncl_warn_lgt_for_aut_drv_sound;
  // Member: hmi_auto_lane_chg_style
  cdr << ros_message.hmi_auto_lane_chg_style;
  // Member: hmi_lane_chg_info
  cdr << ros_message.hmi_lane_chg_info;
  // Member: ovrd_wrn_for_fst_actv
  cdr << ros_message.ovrd_wrn_for_fst_actv;
  // Member: ad4_frt_lamp_req
  cdr << ros_message.ad4_frt_lamp_req;
  // Member: ad4_rear_fog_lamp_req
  cdr << ros_message.ad4_rear_fog_lamp_req;
  // Member: ad4_res_req_for_e2e
  cdr << ros_message.ad4_res_req_for_e2e;
  // Member: ad4_trunk_ctrl_req
  cdr << ros_message.ad4_trunk_ctrl_req;
  // Member: acc_fusn_trfc_sgn
  cdr << ros_message.acc_fusn_trfc_sgn;
  // Member: asy_sfty_fct_sts_to_edraccfct_sts
  cdr << ros_message.asy_sfty_fct_sts_to_edraccfct_sts;
  // Member: asy_sfty_fct_sts_to_edracsfb1_fct_sts
  cdr << ros_message.asy_sfty_fct_sts_to_edracsfb1_fct_sts;
  // Member: asy_sfty_fct_sts_to_edracsfb2_fct_sts
  cdr << ros_message.asy_sfty_fct_sts_to_edracsfb2_fct_sts;
  // Member: asy_sfty_fct_sts_to_edracsfc_fct_sts
  cdr << ros_message.asy_sfty_fct_sts_to_edracsfc_fct_sts;
  // Member: asy_sfty_fct_sts_to_edracsfd_fct_sts
  cdr << ros_message.asy_sfty_fct_sts_to_edracsfd_fct_sts;
  // Member: asy_sfty_fct_sts_to_edracsfe_fct_sts
  cdr << ros_message.asy_sfty_fct_sts_to_edracsfe_fct_sts;
  // Member: asy_cnoa_crs_csd_indcr
  cdr << ros_message.asy_cnoa_crs_csd_indcr;
  // Member: asy_cnoa_crs_hud_indcr
  cdr << ros_message.asy_cnoa_crs_hud_indcr;
  // Member: asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  cdr << ros_message.asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr;
  // Member: asy_emgy_manoeuvre_aid_sts
  cdr << ros_message.asy_emgy_manoeuvre_aid_sts;
  // Member: asy_fctn_ihbt_by_trlr
  cdr << ros_message.asy_fctn_ihbt_by_trlr;
  // Member: asy_icc_max_warn_msg
  cdr << ros_message.asy_icc_max_warn_msg;
  // Member: asy_sfty_hwl_req
  cdr << ros_message.asy_sfty_hwl_req;
  // Member: aut_lane_chg_sts
  cdr << ros_message.aut_lane_chg_sts;
  // Member: cllsn_aid_post_ema
  cdr << ros_message.cllsn_aid_post_ema;
  // Member: lane_chg_aut_actv_sts
  cdr << ros_message.lane_chg_aut_actv_sts;
  // Member: cam_sts_cam_cam_frnt_cal_not_cmpl
  cdr << ros_message.cam_sts_cam_cam_frnt_cal_not_cmpl;
  // Member: asy_cnoa_lane_chg_assist_sts
  cdr << ros_message.asy_cnoa_lane_chg_assist_sts;
  // Member: asy_cnoa_lane_chg_fail_type
  cdr << ros_message.asy_cnoa_lane_chg_fail_type;
  // Member: aut_cnoa_lane_chg_sts
  cdr << ros_message.aut_cnoa_lane_chg_sts;
  // Member: asy_cnoa_req_lane_chg
  cdr << ros_message.asy_cnoa_req_lane_chg;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::MachFunctionControl & ros_message)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: asy_aut_drvg_avl
  cdr >> ros_message.asy_aut_drvg_avl;

  // Member: asy_lat_offst_sts
  cdr >> ros_message.asy_lat_offst_sts;

  // Member: asy_noa_degrade_msg
  cdr >> ros_message.asy_noa_degrade_msg;

  // Member: lane_chg_aut_info_for_asy_hi_way
  cdr >> ros_message.lane_chg_aut_info_for_asy_hi_way;

  // Member: lane_chg_aut_sts_for_asy_hi_way
  cdr >> ros_message.lane_chg_aut_sts_for_asy_hi_way;

  // Member: ti_gap_set_for_lgt_ctrl
  cdr >> ros_message.ti_gap_set_for_lgt_ctrl;

  // Member: asy_lgt_ctrl_take_over_req
  cdr >> ros_message.asy_lgt_ctrl_take_over_req;

  // Member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  cdr >> ros_message.steer_tq_addl_for_ema_steer_tq_addl_for_ema;

  // Member: strt_req_of_lgt_ctrl_for_prpsn
  cdr >> ros_message.strt_req_of_lgt_ctrl_for_prpsn;

  // Member: asy_noa_deactvd_reasn_mesg
  cdr >> ros_message.asy_noa_deactvd_reasn_mesg;

  // Member: asy_noa_remind_mesg
  cdr >> ros_message.asy_noa_remind_mesg;

  // Member: asy_high_beam_flash_warn_rqrd
  cdr >> ros_message.asy_high_beam_flash_warn_rqrd;

  // Member: asy_noa_takeover_mesg
  cdr >> ros_message.asy_noa_takeover_mesg;

  // Member: asy_fast_lane_swt_sts
  cdr >> ros_message.asy_fast_lane_swt_sts;

  // Member: asy_cnoa_auto_lane_chg_style
  cdr >> ros_message.asy_cnoa_auto_lane_chg_style;

  // Member: asy_cnoa_crs_actv_faild_msg
  cdr >> ros_message.asy_cnoa_crs_actv_faild_msg;

  // Member: asy_cnoa_crs_cross_intsec_msg
  cdr >> ros_message.asy_cnoa_crs_cross_intsec_msg;

  // Member: asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  cdr >> ros_message.asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg;

  // Member: asy_cnoa_crs_finshd_msg
  cdr >> ros_message.asy_cnoa_crs_finshd_msg;

  // Member: asy_cnoa_crs_ind_ti_gap_msg
  cdr >> ros_message.asy_cnoa_crs_ind_ti_gap_msg;

  // Member: asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  cdr >> ros_message.asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg;

  // Member: asy_cnoa_crs_actv_msg
  cdr >> ros_message.asy_cnoa_crs_actv_msg;

  // Member: asy_cnoa_crs_off_odddistan
  cdr >> ros_message.asy_cnoa_crs_off_odddistan;

  // Member: asy_cnoa_crs_sts
  cdr >> ros_message.asy_cnoa_crs_sts;

  // Member: asy_cnoa_game_fail_type
  cdr >> ros_message.asy_cnoa_game_fail_type;

  // Member: asy_cnoa_game_reason
  cdr >> ros_message.asy_cnoa_game_reason;

  // Member: asy_cnoa_crs_sts_csd_msg
  cdr >> ros_message.asy_cnoa_crs_sts_csd_msg;

  // Member: asy_cnoa_crs_swt_on_off
  cdr >> ros_message.asy_cnoa_crs_swt_on_off;

  // Member: asy_cnoa_crs_swt_sts
  cdr >> ros_message.asy_cnoa_crs_swt_sts;

  // Member: asy_cnoa_data_download_faild_msg
  cdr >> ros_message.asy_cnoa_data_download_faild_msg;

  // Member: asy_cnoa_crs_offs_msg
  cdr >> ros_message.asy_cnoa_crs_offs_msg;

  // Member: asy_cnoa_crs_rmn_msg
  cdr >> ros_message.asy_cnoa_crs_rmn_msg;

  // Member: asy_cnoa_sod_lane_chg_swt
  cdr >> ros_message.asy_cnoa_sod_lane_chg_swt;

  // Member: asy_cnoa_lrng_prmpt_msg
  cdr >> ros_message.asy_cnoa_lrng_prmpt_msg;

  // Member: asy_cnoa_lrng_swt_on_off
  cdr >> ros_message.asy_cnoa_lrng_swt_on_off;

  // Member: asy_cnoa_lrng_swt_sts
  cdr >> ros_message.asy_cnoa_lrng_swt_sts;

  // Member: asy_cnoa_takeover_warn_msg
  cdr >> ros_message.asy_cnoa_takeover_warn_msg;

  // Member: asy_cnoa_turn_fail_type
  cdr >> ros_message.asy_cnoa_turn_fail_type;

  // Member: asy_cnoa_turn_sts
  cdr >> ros_message.asy_cnoa_turn_sts;

  // Member: asy_noa_tar_spd_offs
  cdr >> ros_message.asy_noa_tar_spd_offs;

  // Member: asy_noa_avl_rmn
  cdr >> ros_message.asy_noa_avl_rmn;

  // Member: asy_aut_lane_chg_swt_sts
  cdr >> ros_message.asy_aut_lane_chg_swt_sts;

  // Member: stop_req_of_lgt_ctrl_for_prpsn
  cdr >> ros_message.stop_req_of_lgt_ctrl_for_prpsn;

  // Member: ad_theme_disp
  cdr >> ros_message.ad_theme_disp;

  // Member: cncl_warn_for_aut_drv
  cdr >> ros_message.cncl_warn_for_aut_drv;

  // Member: disp_tsi_info_for_lgt_ctrl
  cdr >> ros_message.disp_tsi_info_for_lgt_ctrl;

  // Member: disp_spd_set_for_lgt_ctrl
  cdr >> ros_message.disp_spd_set_for_lgt_ctrl;

  // Member: hmi_nop_cofm_of_lan_chag
  cdr >> ros_message.hmi_nop_cofm_of_lan_chag;

  // Member: ad4_lane_chg_for_e2e
  cdr >> ros_message.ad4_lane_chg_for_e2e;

  // Member: hwa_leading_point_valid
  cdr >> ros_message.hwa_leading_point_valid;

  // Member: hwa_leading_point_center_y
  cdr >> ros_message.hwa_leading_point_center_y;

  // Member: hwa_leading_point_center_x
  cdr >> ros_message.hwa_leading_point_center_x;

  // Member: ad4_turn_indic_req_req
  cdr >> ros_message.ad4_turn_indic_req_req;

  // Member: ad4_unavl_sts_for_e2e
  cdr >> ros_message.ad4_unavl_sts_for_e2e;

  // Member: ad4_warn_sts_for_e2e
  cdr >> ros_message.ad4_warn_sts_for_e2e;

  // Member: ad4_win_open_req
  cdr >> ros_message.ad4_win_open_req;

  // Member: ad_ctrl_mode_ad_ctrl_mode
  cdr >> ros_message.ad_ctrl_mode_ad_ctrl_mode;

  // Member: ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  cdr >> ros_message.ad4_drv_off_req_for_lgt_ctrl_drv_off_req;

  // Member: asy_dece_remind
  cdr >> ros_message.asy_dece_remind;

  // Member: asy_lat_offs_swt_sts
  cdr >> ros_message.asy_lat_offs_swt_sts;

  // Member: asy_undertak_on_off_sts
  cdr >> ros_message.asy_undertak_on_off_sts;

  // Member: asy_undertak_rmind
  cdr >> ros_message.asy_undertak_rmind;

  // Member: asy_warn_mesg_for_aut_drv
  cdr >> ros_message.asy_warn_mesg_for_aut_drv;

  // Member: lgt_fusn_trfc_sgn
  cdr >> ros_message.lgt_fusn_trfc_sgn;

  // Member: drvg_ast_on_sys_sts
  cdr >> ros_message.drvg_ast_on_sys_sts;

  // Member: asy_d2d_avl_rmn
  cdr >> ros_message.asy_d2d_avl_rmn;

  // Member: asy_d2d_deactvd_reasn_mesg
  cdr >> ros_message.asy_d2d_deactvd_reasn_mesg;

  // Member: asy_d2d_distan_msg
  cdr >> ros_message.asy_d2d_distan_msg;

  // Member: asy_d2d_etc_distan_msg
  cdr >> ros_message.asy_d2d_etc_distan_msg;

  // Member: asy_d2d_remind_msg
  cdr >> ros_message.asy_d2d_remind_msg;

  // Member: asy_etc_traffic_sw_sts
  cdr >> ros_message.asy_etc_traffic_sw_sts;

  // Member: asy_d2d_strt_to_end
  cdr >> ros_message.asy_d2d_strt_to_end;

  // Member: asy_safe_stop_sts
  cdr >> ros_message.asy_safe_stop_sts;

  // Member: asy_sod_lane_chg_switch
  cdr >> ros_message.asy_sod_lane_chg_switch;

  // Member: avl_sts_for_long_aut_drv_sound
  cdr >> ros_message.avl_sts_for_long_aut_drv_sound;

  // Member: asy_sod_pilot_cfirm
  cdr >> ros_message.asy_sod_pilot_cfirm;

  // Member: cncl_warn_for_aut_drv_sound
  cdr >> ros_message.cncl_warn_for_aut_drv_sound;

  // Member: cncl_warn_lgt_for_aut_drv_sound
  cdr >> ros_message.cncl_warn_lgt_for_aut_drv_sound;

  // Member: hmi_auto_lane_chg_style
  cdr >> ros_message.hmi_auto_lane_chg_style;

  // Member: hmi_lane_chg_info
  cdr >> ros_message.hmi_lane_chg_info;

  // Member: ovrd_wrn_for_fst_actv
  cdr >> ros_message.ovrd_wrn_for_fst_actv;

  // Member: ad4_frt_lamp_req
  cdr >> ros_message.ad4_frt_lamp_req;

  // Member: ad4_rear_fog_lamp_req
  cdr >> ros_message.ad4_rear_fog_lamp_req;

  // Member: ad4_res_req_for_e2e
  cdr >> ros_message.ad4_res_req_for_e2e;

  // Member: ad4_trunk_ctrl_req
  cdr >> ros_message.ad4_trunk_ctrl_req;

  // Member: acc_fusn_trfc_sgn
  cdr >> ros_message.acc_fusn_trfc_sgn;

  // Member: asy_sfty_fct_sts_to_edraccfct_sts
  cdr >> ros_message.asy_sfty_fct_sts_to_edraccfct_sts;

  // Member: asy_sfty_fct_sts_to_edracsfb1_fct_sts
  cdr >> ros_message.asy_sfty_fct_sts_to_edracsfb1_fct_sts;

  // Member: asy_sfty_fct_sts_to_edracsfb2_fct_sts
  cdr >> ros_message.asy_sfty_fct_sts_to_edracsfb2_fct_sts;

  // Member: asy_sfty_fct_sts_to_edracsfc_fct_sts
  cdr >> ros_message.asy_sfty_fct_sts_to_edracsfc_fct_sts;

  // Member: asy_sfty_fct_sts_to_edracsfd_fct_sts
  cdr >> ros_message.asy_sfty_fct_sts_to_edracsfd_fct_sts;

  // Member: asy_sfty_fct_sts_to_edracsfe_fct_sts
  cdr >> ros_message.asy_sfty_fct_sts_to_edracsfe_fct_sts;

  // Member: asy_cnoa_crs_csd_indcr
  cdr >> ros_message.asy_cnoa_crs_csd_indcr;

  // Member: asy_cnoa_crs_hud_indcr
  cdr >> ros_message.asy_cnoa_crs_hud_indcr;

  // Member: asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  cdr >> ros_message.asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr;

  // Member: asy_emgy_manoeuvre_aid_sts
  cdr >> ros_message.asy_emgy_manoeuvre_aid_sts;

  // Member: asy_fctn_ihbt_by_trlr
  cdr >> ros_message.asy_fctn_ihbt_by_trlr;

  // Member: asy_icc_max_warn_msg
  cdr >> ros_message.asy_icc_max_warn_msg;

  // Member: asy_sfty_hwl_req
  cdr >> ros_message.asy_sfty_hwl_req;

  // Member: aut_lane_chg_sts
  cdr >> ros_message.aut_lane_chg_sts;

  // Member: cllsn_aid_post_ema
  cdr >> ros_message.cllsn_aid_post_ema;

  // Member: lane_chg_aut_actv_sts
  cdr >> ros_message.lane_chg_aut_actv_sts;

  // Member: cam_sts_cam_cam_frnt_cal_not_cmpl
  cdr >> ros_message.cam_sts_cam_cam_frnt_cal_not_cmpl;

  // Member: asy_cnoa_lane_chg_assist_sts
  cdr >> ros_message.asy_cnoa_lane_chg_assist_sts;

  // Member: asy_cnoa_lane_chg_fail_type
  cdr >> ros_message.asy_cnoa_lane_chg_fail_type;

  // Member: aut_cnoa_lane_chg_sts
  cdr >> ros_message.aut_cnoa_lane_chg_sts;

  // Member: asy_cnoa_req_lane_chg
  cdr >> ros_message.asy_cnoa_req_lane_chg;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::MachFunctionControl & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    deva_common_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: asy_aut_drvg_avl
  {
    size_t item_size = sizeof(ros_message.asy_aut_drvg_avl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lat_offst_sts
  {
    size_t item_size = sizeof(ros_message.asy_lat_offst_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_degrade_msg
  {
    size_t item_size = sizeof(ros_message.asy_noa_degrade_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_chg_aut_info_for_asy_hi_way
  {
    size_t item_size = sizeof(ros_message.lane_chg_aut_info_for_asy_hi_way);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_chg_aut_sts_for_asy_hi_way
  {
    size_t item_size = sizeof(ros_message.lane_chg_aut_sts_for_asy_hi_way);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ti_gap_set_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message.ti_gap_set_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lgt_ctrl_take_over_req
  {
    size_t item_size = sizeof(ros_message.asy_lgt_ctrl_take_over_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    size_t item_size = sizeof(ros_message.steer_tq_addl_for_ema_steer_tq_addl_for_ema);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: strt_req_of_lgt_ctrl_for_prpsn
  {
    size_t item_size = sizeof(ros_message.strt_req_of_lgt_ctrl_for_prpsn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_deactvd_reasn_mesg
  {
    size_t item_size = sizeof(ros_message.asy_noa_deactvd_reasn_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_remind_mesg
  {
    size_t item_size = sizeof(ros_message.asy_noa_remind_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_high_beam_flash_warn_rqrd
  {
    size_t item_size = sizeof(ros_message.asy_high_beam_flash_warn_rqrd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_takeover_mesg
  {
    size_t item_size = sizeof(ros_message.asy_noa_takeover_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_fast_lane_swt_sts
  {
    size_t item_size = sizeof(ros_message.asy_fast_lane_swt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_auto_lane_chg_style
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_auto_lane_chg_style);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_actv_faild_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_actv_faild_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_cross_intsec_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_cross_intsec_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_finshd_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_finshd_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_ind_ti_gap_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_ind_ti_gap_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_actv_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_actv_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_off_odddistan
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_off_odddistan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_sts
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_game_fail_type
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_game_fail_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_game_reason
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_game_reason);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_sts_csd_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_sts_csd_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_swt_on_off
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_swt_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_swt_sts
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_swt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_data_download_faild_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_data_download_faild_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_offs_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_offs_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_rmn_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_rmn_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_sod_lane_chg_swt
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_sod_lane_chg_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_lrng_prmpt_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_lrng_prmpt_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_lrng_swt_on_off
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_lrng_swt_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_lrng_swt_sts
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_lrng_swt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_takeover_warn_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_takeover_warn_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_turn_fail_type
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_turn_fail_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_turn_sts
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_turn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_tar_spd_offs
  {
    size_t item_size = sizeof(ros_message.asy_noa_tar_spd_offs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_avl_rmn
  {
    size_t item_size = sizeof(ros_message.asy_noa_avl_rmn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_aut_lane_chg_swt_sts
  {
    size_t item_size = sizeof(ros_message.asy_aut_lane_chg_swt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stop_req_of_lgt_ctrl_for_prpsn
  {
    size_t item_size = sizeof(ros_message.stop_req_of_lgt_ctrl_for_prpsn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad_theme_disp
  {
    size_t item_size = sizeof(ros_message.ad_theme_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cncl_warn_for_aut_drv
  {
    size_t item_size = sizeof(ros_message.cncl_warn_for_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: disp_tsi_info_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message.disp_tsi_info_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: disp_spd_set_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message.disp_spd_set_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_nop_cofm_of_lan_chag
  {
    size_t item_size = sizeof(ros_message.hmi_nop_cofm_of_lan_chag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_lane_chg_for_e2e
  {
    size_t item_size = sizeof(ros_message.ad4_lane_chg_for_e2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hwa_leading_point_valid
  {
    size_t item_size = sizeof(ros_message.hwa_leading_point_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hwa_leading_point_center_y
  {
    size_t item_size = sizeof(ros_message.hwa_leading_point_center_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hwa_leading_point_center_x
  {
    size_t item_size = sizeof(ros_message.hwa_leading_point_center_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_turn_indic_req_req
  {
    size_t item_size = sizeof(ros_message.ad4_turn_indic_req_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_unavl_sts_for_e2e
  {
    size_t item_size = sizeof(ros_message.ad4_unavl_sts_for_e2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_warn_sts_for_e2e
  {
    size_t item_size = sizeof(ros_message.ad4_warn_sts_for_e2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_win_open_req
  {
    size_t item_size = sizeof(ros_message.ad4_win_open_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad_ctrl_mode_ad_ctrl_mode
  {
    size_t item_size = sizeof(ros_message.ad_ctrl_mode_ad_ctrl_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  {
    size_t item_size = sizeof(ros_message.ad4_drv_off_req_for_lgt_ctrl_drv_off_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_dece_remind
  {
    size_t item_size = sizeof(ros_message.asy_dece_remind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lat_offs_swt_sts
  {
    size_t item_size = sizeof(ros_message.asy_lat_offs_swt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_undertak_on_off_sts
  {
    size_t item_size = sizeof(ros_message.asy_undertak_on_off_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_undertak_rmind
  {
    size_t item_size = sizeof(ros_message.asy_undertak_rmind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_warn_mesg_for_aut_drv
  {
    size_t item_size = sizeof(ros_message.asy_warn_mesg_for_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lgt_fusn_trfc_sgn
  {
    size_t item_size = sizeof(ros_message.lgt_fusn_trfc_sgn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvg_ast_on_sys_sts
  {
    size_t item_size = sizeof(ros_message.drvg_ast_on_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_avl_rmn
  {
    size_t item_size = sizeof(ros_message.asy_d2d_avl_rmn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_deactvd_reasn_mesg
  {
    size_t item_size = sizeof(ros_message.asy_d2d_deactvd_reasn_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_distan_msg
  {
    size_t item_size = sizeof(ros_message.asy_d2d_distan_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_etc_distan_msg
  {
    size_t item_size = sizeof(ros_message.asy_d2d_etc_distan_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_remind_msg
  {
    size_t item_size = sizeof(ros_message.asy_d2d_remind_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_etc_traffic_sw_sts
  {
    size_t item_size = sizeof(ros_message.asy_etc_traffic_sw_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_strt_to_end
  {
    size_t item_size = sizeof(ros_message.asy_d2d_strt_to_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_safe_stop_sts
  {
    size_t item_size = sizeof(ros_message.asy_safe_stop_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_sod_lane_chg_switch
  {
    size_t item_size = sizeof(ros_message.asy_sod_lane_chg_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avl_sts_for_long_aut_drv_sound
  {
    size_t item_size = sizeof(ros_message.avl_sts_for_long_aut_drv_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_sod_pilot_cfirm
  {
    size_t item_size = sizeof(ros_message.asy_sod_pilot_cfirm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cncl_warn_for_aut_drv_sound
  {
    size_t item_size = sizeof(ros_message.cncl_warn_for_aut_drv_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cncl_warn_lgt_for_aut_drv_sound
  {
    size_t item_size = sizeof(ros_message.cncl_warn_lgt_for_aut_drv_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_auto_lane_chg_style
  {
    size_t item_size = sizeof(ros_message.hmi_auto_lane_chg_style);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_lane_chg_info
  {
    size_t item_size = sizeof(ros_message.hmi_lane_chg_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ovrd_wrn_for_fst_actv
  {
    size_t item_size = sizeof(ros_message.ovrd_wrn_for_fst_actv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_frt_lamp_req
  {
    size_t item_size = sizeof(ros_message.ad4_frt_lamp_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_rear_fog_lamp_req
  {
    size_t item_size = sizeof(ros_message.ad4_rear_fog_lamp_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_res_req_for_e2e
  {
    size_t item_size = sizeof(ros_message.ad4_res_req_for_e2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_trunk_ctrl_req
  {
    size_t item_size = sizeof(ros_message.ad4_trunk_ctrl_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_fusn_trfc_sgn
  {
    size_t item_size = sizeof(ros_message.acc_fusn_trfc_sgn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_sfty_fct_sts_to_edraccfct_sts
  {
    size_t item_size = sizeof(ros_message.asy_sfty_fct_sts_to_edraccfct_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_sfty_fct_sts_to_edracsfb1_fct_sts
  {
    size_t item_size = sizeof(ros_message.asy_sfty_fct_sts_to_edracsfb1_fct_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_sfty_fct_sts_to_edracsfb2_fct_sts
  {
    size_t item_size = sizeof(ros_message.asy_sfty_fct_sts_to_edracsfb2_fct_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_sfty_fct_sts_to_edracsfc_fct_sts
  {
    size_t item_size = sizeof(ros_message.asy_sfty_fct_sts_to_edracsfc_fct_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_sfty_fct_sts_to_edracsfd_fct_sts
  {
    size_t item_size = sizeof(ros_message.asy_sfty_fct_sts_to_edracsfd_fct_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_sfty_fct_sts_to_edracsfe_fct_sts
  {
    size_t item_size = sizeof(ros_message.asy_sfty_fct_sts_to_edracsfe_fct_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_csd_indcr
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_csd_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_hud_indcr
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_hud_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_emgy_manoeuvre_aid_sts
  {
    size_t item_size = sizeof(ros_message.asy_emgy_manoeuvre_aid_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_fctn_ihbt_by_trlr
  {
    size_t item_size = sizeof(ros_message.asy_fctn_ihbt_by_trlr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_icc_max_warn_msg
  {
    size_t item_size = sizeof(ros_message.asy_icc_max_warn_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_sfty_hwl_req
  {
    size_t item_size = sizeof(ros_message.asy_sfty_hwl_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_lane_chg_sts
  {
    size_t item_size = sizeof(ros_message.aut_lane_chg_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cllsn_aid_post_ema
  {
    size_t item_size = sizeof(ros_message.cllsn_aid_post_ema);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_chg_aut_actv_sts
  {
    size_t item_size = sizeof(ros_message.lane_chg_aut_actv_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_sts_cam_cam_frnt_cal_not_cmpl
  {
    size_t item_size = sizeof(ros_message.cam_sts_cam_cam_frnt_cal_not_cmpl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_lane_chg_assist_sts
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_lane_chg_assist_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_lane_chg_fail_type
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_lane_chg_fail_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_cnoa_lane_chg_sts
  {
    size_t item_size = sizeof(ros_message.aut_cnoa_lane_chg_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_req_lane_chg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_req_lane_chg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
max_serialized_size_MachFunctionControl(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_common_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: asy_aut_drvg_avl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_lat_offst_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_degrade_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_chg_aut_info_for_asy_hi_way
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_chg_aut_sts_for_asy_hi_way
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ti_gap_set_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_lgt_ctrl_take_over_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: strt_req_of_lgt_ctrl_for_prpsn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_deactvd_reasn_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_remind_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_high_beam_flash_warn_rqrd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_takeover_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_fast_lane_swt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_auto_lane_chg_style
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_actv_faild_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_cross_intsec_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_finshd_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_ind_ti_gap_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_actv_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_off_odddistan
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: asy_cnoa_crs_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_game_fail_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_game_reason
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_sts_csd_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_swt_on_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_swt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_data_download_faild_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_offs_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_rmn_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_sod_lane_chg_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_lrng_prmpt_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_lrng_swt_on_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_lrng_swt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_takeover_warn_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_turn_fail_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_turn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_tar_spd_offs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_avl_rmn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_aut_lane_chg_swt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stop_req_of_lgt_ctrl_for_prpsn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad_theme_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cncl_warn_for_aut_drv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: disp_tsi_info_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: disp_spd_set_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: hmi_nop_cofm_of_lan_chag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad4_lane_chg_for_e2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hwa_leading_point_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hwa_leading_point_center_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hwa_leading_point_center_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ad4_turn_indic_req_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad4_unavl_sts_for_e2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad4_warn_sts_for_e2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad4_win_open_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad_ctrl_mode_ad_ctrl_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_dece_remind
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_lat_offs_swt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_undertak_on_off_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_undertak_rmind
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_warn_mesg_for_aut_drv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lgt_fusn_trfc_sgn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvg_ast_on_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_d2d_avl_rmn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_d2d_deactvd_reasn_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_d2d_distan_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_d2d_etc_distan_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_d2d_remind_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_etc_traffic_sw_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_d2d_strt_to_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_safe_stop_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_sod_lane_chg_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: avl_sts_for_long_aut_drv_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_sod_pilot_cfirm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cncl_warn_for_aut_drv_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cncl_warn_lgt_for_aut_drv_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_auto_lane_chg_style
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_lane_chg_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ovrd_wrn_for_fst_actv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad4_frt_lamp_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad4_rear_fog_lamp_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad4_res_req_for_e2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad4_trunk_ctrl_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acc_fusn_trfc_sgn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_sfty_fct_sts_to_edraccfct_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_sfty_fct_sts_to_edracsfb1_fct_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_sfty_fct_sts_to_edracsfb2_fct_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_sfty_fct_sts_to_edracsfc_fct_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_sfty_fct_sts_to_edracsfd_fct_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_sfty_fct_sts_to_edracsfe_fct_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_csd_indcr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_hud_indcr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_emgy_manoeuvre_aid_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_fctn_ihbt_by_trlr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_icc_max_warn_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_sfty_hwl_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_lane_chg_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cllsn_aid_post_ema
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_chg_aut_actv_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_sts_cam_cam_frnt_cal_not_cmpl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_lane_chg_assist_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_lane_chg_fail_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_cnoa_lane_chg_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_req_lane_chg
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
    using DataType = deva_function_msgs::msg::MachFunctionControl;
    is_plain =
      (
      offsetof(DataType, asy_cnoa_req_lane_chg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MachFunctionControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::MachFunctionControl *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MachFunctionControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::MachFunctionControl *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MachFunctionControl__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::MachFunctionControl *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MachFunctionControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MachFunctionControl(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MachFunctionControl__callbacks = {
  "deva_function_msgs::msg",
  "MachFunctionControl",
  _MachFunctionControl__cdr_serialize,
  _MachFunctionControl__cdr_deserialize,
  _MachFunctionControl__get_serialized_size,
  _MachFunctionControl__max_serialized_size
};

static rosidl_message_type_support_t _MachFunctionControl__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MachFunctionControl__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_function_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_function_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_function_msgs::msg::MachFunctionControl>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_MachFunctionControl__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, MachFunctionControl)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_MachFunctionControl__handle;
}

#ifdef __cplusplus
}
#endif
