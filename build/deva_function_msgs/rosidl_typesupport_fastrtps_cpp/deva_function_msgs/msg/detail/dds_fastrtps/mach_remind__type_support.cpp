// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/MachRemind.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/mach_remind__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/mach_remind__struct.hpp"

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
  const deva_function_msgs::msg::MachRemind & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: asy_cnoa_crs_actv_faild_voice
  cdr << ros_message.asy_cnoa_crs_actv_faild_voice;
  // Member: asy_cnoa_crs_cross_intsec_voice
  cdr << ros_message.asy_cnoa_crs_cross_intsec_voice;
  // Member: asy_cnoa_crs_actv_voice
  cdr << ros_message.asy_cnoa_crs_actv_voice;
  // Member: asy_cnoa_crs_deactvd_voice
  cdr << ros_message.asy_cnoa_crs_deactvd_voice;
  // Member: asy_cnoa_crs_finshd_voice
  cdr << ros_message.asy_cnoa_crs_finshd_voice;
  // Member: asy_cnoa_crs_offs_voice
  cdr << ros_message.asy_cnoa_crs_offs_voice;
  // Member: asy_cnoa_crs_rmn_voice
  cdr << ros_message.asy_cnoa_crs_rmn_voice;
  // Member: asy_cnoa_hands_off_voice
  cdr << ros_message.asy_cnoa_hands_off_voice;
  // Member: asy_cnoa_lrng_abort_voice
  cdr << ros_message.asy_cnoa_lrng_abort_voice;
  // Member: asy_noa_avl_rmn_sound
  cdr << ros_message.asy_noa_avl_rmn_sound;
  // Member: asy_cnoa_takeover_warn_voice
  cdr << ros_message.asy_cnoa_takeover_warn_voice;
  // Member: asy_dece_remind_sound
  cdr << ros_message.asy_dece_remind_sound;
  // Member: asy_drvr_sod_cfirm_cnoa_main_page
  cdr << ros_message.asy_drvr_sod_cfirm_cnoa_main_page;
  // Member: asy_undertak_rmind_sound
  cdr << ros_message.asy_undertak_rmind_sound;
  // Member: asy_warn_sod_for_aut_drv
  cdr << ros_message.asy_warn_sod_for_aut_drv;
  // Member: avl_sts_for_long_aut_drv
  cdr << ros_message.avl_sts_for_long_aut_drv;
  // Member: too_many_cars
  cdr << ros_message.too_many_cars;
  // Member: drv_off_warn
  cdr << ros_message.drv_off_warn;
  // Member: ad4_horn_warn
  cdr << ros_message.ad4_horn_warn;
  // Member: hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  cdr << ros_message.hmi_auto_lane_chg_sts_for_asy_ai_asist_audio;
  // Member: drv_off_mod
  cdr << ros_message.drv_off_mod;
  // Member: asy_horn_warn_rqrd
  cdr << ros_message.asy_horn_warn_rqrd;
  // Member: asy_cnoa_crs_avl_prompt
  cdr << ros_message.asy_cnoa_crs_avl_prompt;
  // Member: asy_crs_sts_swil_indcr
  cdr << ros_message.asy_crs_sts_swil_indcr;
  // Member: asy_d2d_avl_rmn_sod
  cdr << ros_message.asy_d2d_avl_rmn_sod;
  // Member: asy_d2d_deactvd_reasn_sod
  cdr << ros_message.asy_d2d_deactvd_reasn_sod;
  // Member: asy_d2d_etc_distan_sod
  cdr << ros_message.asy_d2d_etc_distan_sod;
  // Member: asy_d2d_distan_sod
  cdr << ros_message.asy_d2d_distan_sod;
  // Member: asy_d2d_strt_to_end_sod
  cdr << ros_message.asy_d2d_strt_to_end_sod;
  // Member: asy_d2d_remind_sod
  cdr << ros_message.asy_d2d_remind_sod;
  // Member: asy_lane_chg_fail_type
  cdr << ros_message.asy_lane_chg_fail_type;
  // Member: asy_req_lane_chg
  cdr << ros_message.asy_req_lane_chg;
  // Member: asy_noa_deactvd_reasn_sod
  cdr << ros_message.asy_noa_deactvd_reasn_sod;
  // Member: asy_noa_remind_sod
  cdr << ros_message.asy_noa_remind_sod;
  // Member: ad4_drvr_belt_warn
  cdr << ros_message.ad4_drvr_belt_warn;
  // Member: asy_noa_takeover_sod
  cdr << ros_message.asy_noa_takeover_sod;
  // Member: ad4_drvr_belt_warn_for_bkp
  cdr << ros_message.ad4_drvr_belt_warn_for_bkp;
  // Member: asy_lan_chg_sod_sec
  cdr << ros_message.asy_lan_chg_sod_sec;
  // Member: ad4_camera_heating_req
  cdr << ros_message.ad4_camera_heating_req;
  // Member: ad_takeover_req_group_ad_takeover_msg
  cdr << ros_message.ad_takeover_req_group_ad_takeover_msg;
  // Member: ad_takeover_req_group_ad_takeover_audio
  cdr << ros_message.ad_takeover_req_group_ad_takeover_audio;
  // Member: ad_wipr_ctrl_req
  cdr << ros_message.ad_wipr_ctrl_req;
  // Member: asy_noa_blt_fastn
  cdr << ros_message.asy_noa_blt_fastn;
  // Member: turn_indic_req_by_alca
  cdr << ros_message.turn_indic_req_by_alca;
  // Member: asy_lane_chg_assist_sts
  cdr << ros_message.asy_lane_chg_assist_sts;
  // Member: ad4_camera_heating_req_zcu
  cdr << ros_message.ad4_camera_heating_req_zcu;
  // Member: asy_fct_lrng_mesg
  cdr << ros_message.asy_fct_lrng_mesg;
  // Member: trfc_jam_warn
  cdr << ros_message.trfc_jam_warn;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::MachRemind & ros_message)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: asy_cnoa_crs_actv_faild_voice
  cdr >> ros_message.asy_cnoa_crs_actv_faild_voice;

  // Member: asy_cnoa_crs_cross_intsec_voice
  cdr >> ros_message.asy_cnoa_crs_cross_intsec_voice;

  // Member: asy_cnoa_crs_actv_voice
  cdr >> ros_message.asy_cnoa_crs_actv_voice;

  // Member: asy_cnoa_crs_deactvd_voice
  cdr >> ros_message.asy_cnoa_crs_deactvd_voice;

  // Member: asy_cnoa_crs_finshd_voice
  cdr >> ros_message.asy_cnoa_crs_finshd_voice;

  // Member: asy_cnoa_crs_offs_voice
  cdr >> ros_message.asy_cnoa_crs_offs_voice;

  // Member: asy_cnoa_crs_rmn_voice
  cdr >> ros_message.asy_cnoa_crs_rmn_voice;

  // Member: asy_cnoa_hands_off_voice
  cdr >> ros_message.asy_cnoa_hands_off_voice;

  // Member: asy_cnoa_lrng_abort_voice
  cdr >> ros_message.asy_cnoa_lrng_abort_voice;

  // Member: asy_noa_avl_rmn_sound
  cdr >> ros_message.asy_noa_avl_rmn_sound;

  // Member: asy_cnoa_takeover_warn_voice
  cdr >> ros_message.asy_cnoa_takeover_warn_voice;

  // Member: asy_dece_remind_sound
  cdr >> ros_message.asy_dece_remind_sound;

  // Member: asy_drvr_sod_cfirm_cnoa_main_page
  cdr >> ros_message.asy_drvr_sod_cfirm_cnoa_main_page;

  // Member: asy_undertak_rmind_sound
  cdr >> ros_message.asy_undertak_rmind_sound;

  // Member: asy_warn_sod_for_aut_drv
  cdr >> ros_message.asy_warn_sod_for_aut_drv;

  // Member: avl_sts_for_long_aut_drv
  cdr >> ros_message.avl_sts_for_long_aut_drv;

  // Member: too_many_cars
  cdr >> ros_message.too_many_cars;

  // Member: drv_off_warn
  cdr >> ros_message.drv_off_warn;

  // Member: ad4_horn_warn
  cdr >> ros_message.ad4_horn_warn;

  // Member: hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  cdr >> ros_message.hmi_auto_lane_chg_sts_for_asy_ai_asist_audio;

  // Member: drv_off_mod
  cdr >> ros_message.drv_off_mod;

  // Member: asy_horn_warn_rqrd
  cdr >> ros_message.asy_horn_warn_rqrd;

  // Member: asy_cnoa_crs_avl_prompt
  cdr >> ros_message.asy_cnoa_crs_avl_prompt;

  // Member: asy_crs_sts_swil_indcr
  cdr >> ros_message.asy_crs_sts_swil_indcr;

  // Member: asy_d2d_avl_rmn_sod
  cdr >> ros_message.asy_d2d_avl_rmn_sod;

  // Member: asy_d2d_deactvd_reasn_sod
  cdr >> ros_message.asy_d2d_deactvd_reasn_sod;

  // Member: asy_d2d_etc_distan_sod
  cdr >> ros_message.asy_d2d_etc_distan_sod;

  // Member: asy_d2d_distan_sod
  cdr >> ros_message.asy_d2d_distan_sod;

  // Member: asy_d2d_strt_to_end_sod
  cdr >> ros_message.asy_d2d_strt_to_end_sod;

  // Member: asy_d2d_remind_sod
  cdr >> ros_message.asy_d2d_remind_sod;

  // Member: asy_lane_chg_fail_type
  cdr >> ros_message.asy_lane_chg_fail_type;

  // Member: asy_req_lane_chg
  cdr >> ros_message.asy_req_lane_chg;

  // Member: asy_noa_deactvd_reasn_sod
  cdr >> ros_message.asy_noa_deactvd_reasn_sod;

  // Member: asy_noa_remind_sod
  cdr >> ros_message.asy_noa_remind_sod;

  // Member: ad4_drvr_belt_warn
  cdr >> ros_message.ad4_drvr_belt_warn;

  // Member: asy_noa_takeover_sod
  cdr >> ros_message.asy_noa_takeover_sod;

  // Member: ad4_drvr_belt_warn_for_bkp
  cdr >> ros_message.ad4_drvr_belt_warn_for_bkp;

  // Member: asy_lan_chg_sod_sec
  cdr >> ros_message.asy_lan_chg_sod_sec;

  // Member: ad4_camera_heating_req
  cdr >> ros_message.ad4_camera_heating_req;

  // Member: ad_takeover_req_group_ad_takeover_msg
  cdr >> ros_message.ad_takeover_req_group_ad_takeover_msg;

  // Member: ad_takeover_req_group_ad_takeover_audio
  cdr >> ros_message.ad_takeover_req_group_ad_takeover_audio;

  // Member: ad_wipr_ctrl_req
  cdr >> ros_message.ad_wipr_ctrl_req;

  // Member: asy_noa_blt_fastn
  cdr >> ros_message.asy_noa_blt_fastn;

  // Member: turn_indic_req_by_alca
  cdr >> ros_message.turn_indic_req_by_alca;

  // Member: asy_lane_chg_assist_sts
  cdr >> ros_message.asy_lane_chg_assist_sts;

  // Member: ad4_camera_heating_req_zcu
  cdr >> ros_message.ad4_camera_heating_req_zcu;

  // Member: asy_fct_lrng_mesg
  cdr >> ros_message.asy_fct_lrng_mesg;

  // Member: trfc_jam_warn
  cdr >> ros_message.trfc_jam_warn;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::MachRemind & ros_message,
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
  // Member: asy_cnoa_crs_actv_faild_voice
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_actv_faild_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_cross_intsec_voice
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_cross_intsec_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_actv_voice
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_actv_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_deactvd_voice
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_deactvd_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_finshd_voice
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_finshd_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_offs_voice
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_offs_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_rmn_voice
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_rmn_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_hands_off_voice
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_hands_off_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_lrng_abort_voice
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_lrng_abort_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_avl_rmn_sound
  {
    size_t item_size = sizeof(ros_message.asy_noa_avl_rmn_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_takeover_warn_voice
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_takeover_warn_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_dece_remind_sound
  {
    size_t item_size = sizeof(ros_message.asy_dece_remind_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_drvr_sod_cfirm_cnoa_main_page
  {
    size_t item_size = sizeof(ros_message.asy_drvr_sod_cfirm_cnoa_main_page);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_undertak_rmind_sound
  {
    size_t item_size = sizeof(ros_message.asy_undertak_rmind_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_warn_sod_for_aut_drv
  {
    size_t item_size = sizeof(ros_message.asy_warn_sod_for_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avl_sts_for_long_aut_drv
  {
    size_t item_size = sizeof(ros_message.avl_sts_for_long_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: too_many_cars
  {
    size_t item_size = sizeof(ros_message.too_many_cars);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drv_off_warn
  {
    size_t item_size = sizeof(ros_message.drv_off_warn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_horn_warn
  {
    size_t item_size = sizeof(ros_message.ad4_horn_warn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  {
    size_t item_size = sizeof(ros_message.hmi_auto_lane_chg_sts_for_asy_ai_asist_audio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drv_off_mod
  {
    size_t item_size = sizeof(ros_message.drv_off_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_horn_warn_rqrd
  {
    size_t item_size = sizeof(ros_message.asy_horn_warn_rqrd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_avl_prompt
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_avl_prompt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_crs_sts_swil_indcr
  {
    size_t item_size = sizeof(ros_message.asy_crs_sts_swil_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_avl_rmn_sod
  {
    size_t item_size = sizeof(ros_message.asy_d2d_avl_rmn_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_deactvd_reasn_sod
  {
    size_t item_size = sizeof(ros_message.asy_d2d_deactvd_reasn_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_etc_distan_sod
  {
    size_t item_size = sizeof(ros_message.asy_d2d_etc_distan_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_distan_sod
  {
    size_t item_size = sizeof(ros_message.asy_d2d_distan_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_strt_to_end_sod
  {
    size_t item_size = sizeof(ros_message.asy_d2d_strt_to_end_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_d2d_remind_sod
  {
    size_t item_size = sizeof(ros_message.asy_d2d_remind_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lane_chg_fail_type
  {
    size_t item_size = sizeof(ros_message.asy_lane_chg_fail_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_req_lane_chg
  {
    size_t item_size = sizeof(ros_message.asy_req_lane_chg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_deactvd_reasn_sod
  {
    size_t item_size = sizeof(ros_message.asy_noa_deactvd_reasn_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_remind_sod
  {
    size_t item_size = sizeof(ros_message.asy_noa_remind_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_drvr_belt_warn
  {
    size_t item_size = sizeof(ros_message.ad4_drvr_belt_warn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_takeover_sod
  {
    size_t item_size = sizeof(ros_message.asy_noa_takeover_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_drvr_belt_warn_for_bkp
  {
    size_t item_size = sizeof(ros_message.ad4_drvr_belt_warn_for_bkp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lan_chg_sod_sec
  {
    size_t item_size = sizeof(ros_message.asy_lan_chg_sod_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_camera_heating_req
  {
    size_t item_size = sizeof(ros_message.ad4_camera_heating_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad_takeover_req_group_ad_takeover_msg
  {
    size_t item_size = sizeof(ros_message.ad_takeover_req_group_ad_takeover_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad_takeover_req_group_ad_takeover_audio
  {
    size_t item_size = sizeof(ros_message.ad_takeover_req_group_ad_takeover_audio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad_wipr_ctrl_req
  {
    size_t item_size = sizeof(ros_message.ad_wipr_ctrl_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_blt_fastn
  {
    size_t item_size = sizeof(ros_message.asy_noa_blt_fastn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_indic_req_by_alca
  {
    size_t item_size = sizeof(ros_message.turn_indic_req_by_alca);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lane_chg_assist_sts
  {
    size_t item_size = sizeof(ros_message.asy_lane_chg_assist_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad4_camera_heating_req_zcu
  {
    size_t item_size = sizeof(ros_message.ad4_camera_heating_req_zcu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_fct_lrng_mesg
  {
    size_t item_size = sizeof(ros_message.asy_fct_lrng_mesg);
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
max_serialized_size_MachRemind(
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

  // Member: asy_cnoa_crs_actv_faild_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_cross_intsec_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_actv_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_deactvd_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_finshd_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_offs_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_rmn_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_hands_off_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_lrng_abort_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_avl_rmn_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_takeover_warn_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_dece_remind_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_drvr_sod_cfirm_cnoa_main_page
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_undertak_rmind_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_warn_sod_for_aut_drv
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

  // Member: too_many_cars
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

  // Member: ad4_horn_warn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drv_off_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_horn_warn_rqrd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_avl_prompt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_crs_sts_swil_indcr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_d2d_avl_rmn_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_d2d_deactvd_reasn_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_d2d_etc_distan_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_d2d_distan_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_d2d_strt_to_end_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_d2d_remind_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_lane_chg_fail_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_req_lane_chg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_deactvd_reasn_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_remind_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad4_drvr_belt_warn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_takeover_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad4_drvr_belt_warn_for_bkp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_lan_chg_sod_sec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad4_camera_heating_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad_takeover_req_group_ad_takeover_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad_takeover_req_group_ad_takeover_audio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad_wipr_ctrl_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_blt_fastn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_indic_req_by_alca
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_lane_chg_assist_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad4_camera_heating_req_zcu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_fct_lrng_mesg
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
    using DataType = deva_function_msgs::msg::MachRemind;
    is_plain =
      (
      offsetof(DataType, trfc_jam_warn) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MachRemind__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::MachRemind *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MachRemind__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::MachRemind *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MachRemind__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::MachRemind *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MachRemind__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MachRemind(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MachRemind__callbacks = {
  "deva_function_msgs::msg",
  "MachRemind",
  _MachRemind__cdr_serialize,
  _MachRemind__cdr_deserialize,
  _MachRemind__get_serialized_size,
  _MachRemind__max_serialized_size
};

static rosidl_message_type_support_t _MachRemind__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MachRemind__callbacks,
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
get_message_type_support_handle<deva_function_msgs::msg::MachRemind>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_MachRemind__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, MachRemind)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_MachRemind__handle;
}

#ifdef __cplusplus
}
#endif
