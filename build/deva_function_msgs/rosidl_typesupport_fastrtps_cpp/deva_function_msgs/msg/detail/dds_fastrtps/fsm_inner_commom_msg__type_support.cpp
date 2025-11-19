// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/FsmInnerCommomMsg.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/fsm_inner_commom_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/fsm_inner_commom_msg__struct.hpp"

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
  const deva_function_msgs::msg::FsmInnerCommomMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: asy_cnoa_crs_lan_chg_msg
  cdr << ros_message.asy_cnoa_crs_lan_chg_msg;
  // Member: set_spd_for_crs_ctrl_fct_active
  cdr << ros_message.set_spd_for_crs_ctrl_fct_active;
  // Member: asy_lane_chg_assist_sts
  cdr << ros_message.asy_lane_chg_assist_sts;
  // Member: indcr_sts
  cdr << ros_message.indcr_sts;
  // Member: asy_noa_takeover_sod
  cdr << ros_message.asy_noa_takeover_sod;
  // Member: hmi_drvr_sod_req_pilot
  cdr << ros_message.hmi_drvr_sod_req_pilot;
  // Member: drvr_crs_ctrl_fct_actv_req
  cdr << ros_message.drvr_crs_ctrl_fct_actv_req;
  // Member: asy_algt_indcr
  cdr << ros_message.asy_algt_indcr;
  // Member: ti_gap_set_for_lgt_ctrl
  cdr << ros_message.ti_gap_set_for_lgt_ctrl;
  // Member: drv_mod_req
  cdr << ros_message.drv_mod_req;
  // Member: drv_off_warn
  cdr << ros_message.drv_off_warn;
  // Member: asy_alat_indcr
  cdr << ros_message.asy_alat_indcr;
  // Member: asy_lgt_ctrl_take_over_req
  cdr << ros_message.asy_lgt_ctrl_take_over_req;
  // Member: ovrd_wrn_for_fst_actv
  cdr << ros_message.ovrd_wrn_for_fst_actv;
  // Member: asy_inform_for_drvr
  cdr << ros_message.asy_inform_for_drvr;
  // Member: cncl_warn_lgt_for_aut_drv
  cdr << ros_message.cncl_warn_lgt_for_aut_drv;
  // Member: avl_sts_for_long_aut_drv
  cdr << ros_message.avl_sts_for_long_aut_drv;
  // Member: asy_steer_apply_rqrd
  cdr << ros_message.asy_steer_apply_rqrd;
  // Member: asy_lan_chg_mesg
  cdr << ros_message.asy_lan_chg_mesg;
  // Member: asy_safe_stop_sts
  cdr << ros_message.asy_safe_stop_sts;
  // Member: asy_eyes_off_warn_rqrd
  cdr << ros_message.asy_eyes_off_warn_rqrd;
  // Member: asy_noa_remind_mesg
  cdr << ros_message.asy_noa_remind_mesg;
  // Member: asy_noa_takeover_mesg
  cdr << ros_message.asy_noa_takeover_mesg;
  // Member: asy_aut_drvg_avl
  cdr << ros_message.asy_aut_drvg_avl;
  // Member: asy_noa_actv_suggest
  cdr << ros_message.asy_noa_actv_suggest;
  // Member: cncl_warn_for_aut_drv
  cdr << ros_message.cncl_warn_for_aut_drv;
  // Member: asy_lat_deg_sts
  cdr << ros_message.asy_lat_deg_sts;
  // Member: asy_icc_max_warn_msg
  cdr << ros_message.asy_icc_max_warn_msg;
  // Member: asy_cnoa_takeover_warn_msg
  cdr << ros_message.asy_cnoa_takeover_warn_msg;
  // Member: asy_cnoa_crs_cross_intsec_msg
  cdr << ros_message.asy_cnoa_crs_cross_intsec_msg;
  // Member: asy_d2d_avl_rmn
  cdr << ros_message.asy_d2d_avl_rmn;
  // Member: asy_d2d_distan_msg
  cdr << ros_message.asy_d2d_distan_msg;
  // Member: asy_d2d_strt_to_end
  cdr << ros_message.asy_d2d_strt_to_end;
  // Member: asy_d2d_deactvd_reasn_mesg
  cdr << ros_message.asy_d2d_deactvd_reasn_mesg;
  // Member: asy_aut_emgy_steer_actv
  cdr << ros_message.asy_aut_emgy_steer_actv;
  // Member: asy_d2d_etc_distan_msg
  cdr << ros_message.asy_d2d_etc_distan_msg;
  // Member: asy_d2d_remind_msg
  cdr << ros_message.asy_d2d_remind_msg;
  // Member: disp_tsi_info_for_lgt_ctrl
  cdr << ros_message.disp_tsi_info_for_lgt_ctrl;
  // Member: disp_spd_set_for_lgt_ctrl
  cdr << ros_message.disp_spd_set_for_lgt_ctrl;
  // Member: ad_dim_light
  cdr << ros_message.ad_dim_light;
  // Member: asy_d2d_crs_dim_indcr
  cdr << ros_message.asy_d2d_crs_dim_indcr;
  // Member: asy_aut_drv_ctrl_typ_dim_req
  cdr << ros_message.asy_aut_drv_ctrl_typ_dim_req;
  // Member: ihu_set_disp_ad
  cdr << ros_message.ihu_set_disp_ad;
  // Member: aut_lane_chg_sts
  cdr << ros_message.aut_lane_chg_sts;
  // Member: ad_ctrl_mode
  cdr << ros_message.ad_ctrl_mode;
  // Member: hmi_drvr_sod_req_chg
  cdr << ros_message.hmi_drvr_sod_req_chg;
  // Member: cam_status0
  cdr << ros_message.cam_status0;
  // Member: frnt_side_cam_le_sts0
  cdr << ros_message.frnt_side_cam_le_sts0;
  // Member: frnt_side_cam_ri_sts0
  cdr << ros_message.frnt_side_cam_ri_sts0;
  // Member: re_side_cam_le_sts0
  cdr << ros_message.re_side_cam_le_sts0;
  // Member: re_side_cam_ri_sts0
  cdr << ros_message.re_side_cam_ri_sts0;
  // Member: hmi_re_cam_sts0
  cdr << ros_message.hmi_re_cam_sts0;
  // Member: asy_algt_sts
  cdr << ros_message.asy_algt_sts;
  // Member: hmi_auto_lane_chg_style
  cdr << ros_message.hmi_auto_lane_chg_style;
  // Member: trfc_jam_warn
  cdr << ros_message.trfc_jam_warn;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::FsmInnerCommomMsg & ros_message)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: asy_cnoa_crs_lan_chg_msg
  cdr >> ros_message.asy_cnoa_crs_lan_chg_msg;

  // Member: set_spd_for_crs_ctrl_fct_active
  cdr >> ros_message.set_spd_for_crs_ctrl_fct_active;

  // Member: asy_lane_chg_assist_sts
  cdr >> ros_message.asy_lane_chg_assist_sts;

  // Member: indcr_sts
  cdr >> ros_message.indcr_sts;

  // Member: asy_noa_takeover_sod
  cdr >> ros_message.asy_noa_takeover_sod;

  // Member: hmi_drvr_sod_req_pilot
  cdr >> ros_message.hmi_drvr_sod_req_pilot;

  // Member: drvr_crs_ctrl_fct_actv_req
  cdr >> ros_message.drvr_crs_ctrl_fct_actv_req;

  // Member: asy_algt_indcr
  cdr >> ros_message.asy_algt_indcr;

  // Member: ti_gap_set_for_lgt_ctrl
  cdr >> ros_message.ti_gap_set_for_lgt_ctrl;

  // Member: drv_mod_req
  cdr >> ros_message.drv_mod_req;

  // Member: drv_off_warn
  cdr >> ros_message.drv_off_warn;

  // Member: asy_alat_indcr
  cdr >> ros_message.asy_alat_indcr;

  // Member: asy_lgt_ctrl_take_over_req
  cdr >> ros_message.asy_lgt_ctrl_take_over_req;

  // Member: ovrd_wrn_for_fst_actv
  cdr >> ros_message.ovrd_wrn_for_fst_actv;

  // Member: asy_inform_for_drvr
  cdr >> ros_message.asy_inform_for_drvr;

  // Member: cncl_warn_lgt_for_aut_drv
  cdr >> ros_message.cncl_warn_lgt_for_aut_drv;

  // Member: avl_sts_for_long_aut_drv
  cdr >> ros_message.avl_sts_for_long_aut_drv;

  // Member: asy_steer_apply_rqrd
  cdr >> ros_message.asy_steer_apply_rqrd;

  // Member: asy_lan_chg_mesg
  cdr >> ros_message.asy_lan_chg_mesg;

  // Member: asy_safe_stop_sts
  cdr >> ros_message.asy_safe_stop_sts;

  // Member: asy_eyes_off_warn_rqrd
  cdr >> ros_message.asy_eyes_off_warn_rqrd;

  // Member: asy_noa_remind_mesg
  cdr >> ros_message.asy_noa_remind_mesg;

  // Member: asy_noa_takeover_mesg
  cdr >> ros_message.asy_noa_takeover_mesg;

  // Member: asy_aut_drvg_avl
  cdr >> ros_message.asy_aut_drvg_avl;

  // Member: asy_noa_actv_suggest
  cdr >> ros_message.asy_noa_actv_suggest;

  // Member: cncl_warn_for_aut_drv
  cdr >> ros_message.cncl_warn_for_aut_drv;

  // Member: asy_lat_deg_sts
  cdr >> ros_message.asy_lat_deg_sts;

  // Member: asy_icc_max_warn_msg
  cdr >> ros_message.asy_icc_max_warn_msg;

  // Member: asy_cnoa_takeover_warn_msg
  cdr >> ros_message.asy_cnoa_takeover_warn_msg;

  // Member: asy_cnoa_crs_cross_intsec_msg
  cdr >> ros_message.asy_cnoa_crs_cross_intsec_msg;

  // Member: asy_d2d_avl_rmn
  cdr >> ros_message.asy_d2d_avl_rmn;

  // Member: asy_d2d_distan_msg
  cdr >> ros_message.asy_d2d_distan_msg;

  // Member: asy_d2d_strt_to_end
  cdr >> ros_message.asy_d2d_strt_to_end;

  // Member: asy_d2d_deactvd_reasn_mesg
  cdr >> ros_message.asy_d2d_deactvd_reasn_mesg;

  // Member: asy_aut_emgy_steer_actv
  cdr >> ros_message.asy_aut_emgy_steer_actv;

  // Member: asy_d2d_etc_distan_msg
  cdr >> ros_message.asy_d2d_etc_distan_msg;

  // Member: asy_d2d_remind_msg
  cdr >> ros_message.asy_d2d_remind_msg;

  // Member: disp_tsi_info_for_lgt_ctrl
  cdr >> ros_message.disp_tsi_info_for_lgt_ctrl;

  // Member: disp_spd_set_for_lgt_ctrl
  cdr >> ros_message.disp_spd_set_for_lgt_ctrl;

  // Member: ad_dim_light
  cdr >> ros_message.ad_dim_light;

  // Member: asy_d2d_crs_dim_indcr
  cdr >> ros_message.asy_d2d_crs_dim_indcr;

  // Member: asy_aut_drv_ctrl_typ_dim_req
  cdr >> ros_message.asy_aut_drv_ctrl_typ_dim_req;

  // Member: ihu_set_disp_ad
  cdr >> ros_message.ihu_set_disp_ad;

  // Member: aut_lane_chg_sts
  cdr >> ros_message.aut_lane_chg_sts;

  // Member: ad_ctrl_mode
  cdr >> ros_message.ad_ctrl_mode;

  // Member: hmi_drvr_sod_req_chg
  cdr >> ros_message.hmi_drvr_sod_req_chg;

  // Member: cam_status0
  cdr >> ros_message.cam_status0;

  // Member: frnt_side_cam_le_sts0
  cdr >> ros_message.frnt_side_cam_le_sts0;

  // Member: frnt_side_cam_ri_sts0
  cdr >> ros_message.frnt_side_cam_ri_sts0;

  // Member: re_side_cam_le_sts0
  cdr >> ros_message.re_side_cam_le_sts0;

  // Member: re_side_cam_ri_sts0
  cdr >> ros_message.re_side_cam_ri_sts0;

  // Member: hmi_re_cam_sts0
  cdr >> ros_message.hmi_re_cam_sts0;

  // Member: asy_algt_sts
  cdr >> ros_message.asy_algt_sts;

  // Member: hmi_auto_lane_chg_style
  cdr >> ros_message.hmi_auto_lane_chg_style;

  // Member: trfc_jam_warn
  cdr >> ros_message.trfc_jam_warn;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::FsmInnerCommomMsg & ros_message,
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
  // Member: asy_cnoa_crs_lan_chg_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_lan_chg_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_spd_for_crs_ctrl_fct_active
  {
    size_t item_size = sizeof(ros_message.set_spd_for_crs_ctrl_fct_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lane_chg_assist_sts
  {
    size_t item_size = sizeof(ros_message.asy_lane_chg_assist_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: indcr_sts
  {
    size_t item_size = sizeof(ros_message.indcr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_takeover_sod
  {
    size_t item_size = sizeof(ros_message.asy_noa_takeover_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_drvr_sod_req_pilot
  {
    size_t item_size = sizeof(ros_message.hmi_drvr_sod_req_pilot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvr_crs_ctrl_fct_actv_req
  {
    size_t item_size = sizeof(ros_message.drvr_crs_ctrl_fct_actv_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_algt_indcr
  {
    size_t item_size = sizeof(ros_message.asy_algt_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ti_gap_set_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message.ti_gap_set_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drv_mod_req
  {
    size_t item_size = sizeof(ros_message.drv_mod_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drv_off_warn
  {
    size_t item_size = sizeof(ros_message.drv_off_warn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_alat_indcr
  {
    size_t item_size = sizeof(ros_message.asy_alat_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lgt_ctrl_take_over_req
  {
    size_t item_size = sizeof(ros_message.asy_lgt_ctrl_take_over_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ovrd_wrn_for_fst_actv
  {
    size_t item_size = sizeof(ros_message.ovrd_wrn_for_fst_actv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_inform_for_drvr
  {
    size_t item_size = sizeof(ros_message.asy_inform_for_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cncl_warn_lgt_for_aut_drv
  {
    size_t item_size = sizeof(ros_message.cncl_warn_lgt_for_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avl_sts_for_long_aut_drv
  {
    size_t item_size = sizeof(ros_message.avl_sts_for_long_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_steer_apply_rqrd
  {
    size_t item_size = sizeof(ros_message.asy_steer_apply_rqrd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lan_chg_mesg
  {
    size_t item_size = sizeof(ros_message.asy_lan_chg_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_safe_stop_sts
  {
    size_t item_size = sizeof(ros_message.asy_safe_stop_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_eyes_off_warn_rqrd
  {
    size_t item_size = sizeof(ros_message.asy_eyes_off_warn_rqrd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_remind_mesg
  {
    size_t item_size = sizeof(ros_message.asy_noa_remind_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_takeover_mesg
  {
    size_t item_size = sizeof(ros_message.asy_noa_takeover_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_aut_drvg_avl
  {
    size_t item_size = sizeof(ros_message.asy_aut_drvg_avl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_actv_suggest
  {
    size_t item_size = sizeof(ros_message.asy_noa_actv_suggest);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cncl_warn_for_aut_drv
  {
    size_t item_size = sizeof(ros_message.cncl_warn_for_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lat_deg_sts
  {
    size_t item_size = sizeof(ros_message.asy_lat_deg_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_icc_max_warn_msg
  {
    size_t item_size = sizeof(ros_message.asy_icc_max_warn_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_takeover_warn_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_takeover_warn_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_cross_intsec_msg
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_cross_intsec_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_avl_rmn
  {
    size_t item_size = sizeof(ros_message.asy_d2d_avl_rmn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_distan_msg
  {
    size_t item_size = sizeof(ros_message.asy_d2d_distan_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_strt_to_end
  {
    size_t item_size = sizeof(ros_message.asy_d2d_strt_to_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_deactvd_reasn_mesg
  {
    size_t item_size = sizeof(ros_message.asy_d2d_deactvd_reasn_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_aut_emgy_steer_actv
  {
    size_t item_size = sizeof(ros_message.asy_aut_emgy_steer_actv);
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
  // Member: ad_dim_light
  {
    size_t item_size = sizeof(ros_message.ad_dim_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_crs_dim_indcr
  {
    size_t item_size = sizeof(ros_message.asy_d2d_crs_dim_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_aut_drv_ctrl_typ_dim_req
  {
    size_t item_size = sizeof(ros_message.asy_aut_drv_ctrl_typ_dim_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ihu_set_disp_ad
  {
    size_t item_size = sizeof(ros_message.ihu_set_disp_ad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_lane_chg_sts
  {
    size_t item_size = sizeof(ros_message.aut_lane_chg_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad_ctrl_mode
  {
    size_t item_size = sizeof(ros_message.ad_ctrl_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_drvr_sod_req_chg
  {
    size_t item_size = sizeof(ros_message.hmi_drvr_sod_req_chg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_status0
  {
    size_t item_size = sizeof(ros_message.cam_status0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: frnt_side_cam_le_sts0
  {
    size_t item_size = sizeof(ros_message.frnt_side_cam_le_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: frnt_side_cam_ri_sts0
  {
    size_t item_size = sizeof(ros_message.frnt_side_cam_ri_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: re_side_cam_le_sts0
  {
    size_t item_size = sizeof(ros_message.re_side_cam_le_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: re_side_cam_ri_sts0
  {
    size_t item_size = sizeof(ros_message.re_side_cam_ri_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_re_cam_sts0
  {
    size_t item_size = sizeof(ros_message.hmi_re_cam_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_algt_sts
  {
    size_t item_size = sizeof(ros_message.asy_algt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_auto_lane_chg_style
  {
    size_t item_size = sizeof(ros_message.hmi_auto_lane_chg_style);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trfc_jam_warn
  {
    size_t item_size = sizeof(ros_message.trfc_jam_warn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
max_serialized_size_FsmInnerCommomMsg(
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

  // Member: asy_cnoa_crs_lan_chg_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_spd_for_crs_ctrl_fct_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: asy_lane_chg_assist_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: indcr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: asy_noa_takeover_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hmi_drvr_sod_req_pilot
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvr_crs_ctrl_fct_actv_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_algt_indcr
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

  // Member: drv_mod_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drv_off_warn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_alat_indcr
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

  // Member: ovrd_wrn_for_fst_actv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_inform_for_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cncl_warn_lgt_for_aut_drv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: avl_sts_for_long_aut_drv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_steer_apply_rqrd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_lan_chg_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_safe_stop_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: asy_eyes_off_warn_rqrd
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

  // Member: asy_noa_takeover_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_aut_drvg_avl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_actv_suggest
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

  // Member: asy_lat_deg_sts
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

  // Member: asy_cnoa_takeover_warn_msg
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

  // Member: asy_d2d_avl_rmn
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

  // Member: asy_d2d_strt_to_end
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

  // Member: asy_aut_emgy_steer_actv
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

  // Member: disp_tsi_info_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: disp_spd_set_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ad_dim_light
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_d2d_crs_dim_indcr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_aut_drv_ctrl_typ_dim_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ihu_set_disp_ad
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

  // Member: ad_ctrl_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_drvr_sod_req_chg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_status0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: frnt_side_cam_le_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: frnt_side_cam_ri_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: re_side_cam_le_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: re_side_cam_ri_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_re_cam_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_algt_sts
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

  // Member: trfc_jam_warn
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
    using DataType = deva_function_msgs::msg::FsmInnerCommomMsg;
    is_plain =
      (
      offsetof(DataType, trfc_jam_warn) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _FsmInnerCommomMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::FsmInnerCommomMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FsmInnerCommomMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::FsmInnerCommomMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FsmInnerCommomMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::FsmInnerCommomMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FsmInnerCommomMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FsmInnerCommomMsg(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FsmInnerCommomMsg__callbacks = {
  "deva_function_msgs::msg",
  "FsmInnerCommomMsg",
  _FsmInnerCommomMsg__cdr_serialize,
  _FsmInnerCommomMsg__cdr_deserialize,
  _FsmInnerCommomMsg__get_serialized_size,
  _FsmInnerCommomMsg__max_serialized_size
};

static rosidl_message_type_support_t _FsmInnerCommomMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FsmInnerCommomMsg__callbacks,
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
get_message_type_support_handle<deva_function_msgs::msg::FsmInnerCommomMsg>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_FsmInnerCommomMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, FsmInnerCommomMsg)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_FsmInnerCommomMsg__handle;
}

#ifdef __cplusplus
}
#endif
