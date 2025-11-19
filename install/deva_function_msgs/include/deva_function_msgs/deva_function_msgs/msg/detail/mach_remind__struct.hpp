// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/MachRemind.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__MachRemind __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__MachRemind __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MachRemind_
{
  using Type = MachRemind_<ContainerAllocator>;

  explicit MachRemind_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->asy_cnoa_crs_actv_faild_voice = 0;
      this->asy_cnoa_crs_cross_intsec_voice = 0;
      this->asy_cnoa_crs_actv_voice = 0;
      this->asy_cnoa_crs_deactvd_voice = 0;
      this->asy_cnoa_crs_finshd_voice = 0;
      this->asy_cnoa_crs_offs_voice = 0;
      this->asy_cnoa_crs_rmn_voice = 0;
      this->asy_cnoa_hands_off_voice = 0;
      this->asy_cnoa_lrng_abort_voice = 0;
      this->asy_noa_avl_rmn_sound = 0;
      this->asy_cnoa_takeover_warn_voice = 0;
      this->asy_dece_remind_sound = 0;
      this->asy_drvr_sod_cfirm_cnoa_main_page = 0;
      this->asy_undertak_rmind_sound = 0;
      this->asy_warn_sod_for_aut_drv = 0;
      this->avl_sts_for_long_aut_drv = 0;
      this->too_many_cars = 0;
      this->drv_off_warn = 0;
      this->ad4_horn_warn = 0;
      this->hmi_auto_lane_chg_sts_for_asy_ai_asist_audio = 0;
      this->drv_off_mod = 0;
      this->asy_horn_warn_rqrd = 0;
      this->asy_cnoa_crs_avl_prompt = 0;
      this->asy_crs_sts_swil_indcr = 0;
      this->asy_d2d_avl_rmn_sod = 0;
      this->asy_d2d_deactvd_reasn_sod = 0;
      this->asy_d2d_etc_distan_sod = 0;
      this->asy_d2d_distan_sod = 0;
      this->asy_d2d_strt_to_end_sod = 0;
      this->asy_d2d_remind_sod = 0;
      this->asy_lane_chg_fail_type = 0;
      this->asy_req_lane_chg = 0;
      this->asy_noa_deactvd_reasn_sod = 0;
      this->asy_noa_remind_sod = 0;
      this->ad4_drvr_belt_warn = 0;
      this->asy_noa_takeover_sod = 0;
      this->ad4_drvr_belt_warn_for_bkp = 0;
      this->asy_lan_chg_sod_sec = 0;
      this->ad4_camera_heating_req = 0;
      this->ad_takeover_req_group_ad_takeover_msg = 0;
      this->ad_takeover_req_group_ad_takeover_audio = 0;
      this->ad_wipr_ctrl_req = 0;
      this->asy_noa_blt_fastn = 0;
      this->turn_indic_req_by_alca = 0;
      this->asy_lane_chg_assist_sts = 0;
      this->ad4_camera_heating_req_zcu = 0;
      this->asy_fct_lrng_mesg = 0;
      this->trfc_jam_warn = 0;
    }
  }

  explicit MachRemind_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->asy_cnoa_crs_actv_faild_voice = 0;
      this->asy_cnoa_crs_cross_intsec_voice = 0;
      this->asy_cnoa_crs_actv_voice = 0;
      this->asy_cnoa_crs_deactvd_voice = 0;
      this->asy_cnoa_crs_finshd_voice = 0;
      this->asy_cnoa_crs_offs_voice = 0;
      this->asy_cnoa_crs_rmn_voice = 0;
      this->asy_cnoa_hands_off_voice = 0;
      this->asy_cnoa_lrng_abort_voice = 0;
      this->asy_noa_avl_rmn_sound = 0;
      this->asy_cnoa_takeover_warn_voice = 0;
      this->asy_dece_remind_sound = 0;
      this->asy_drvr_sod_cfirm_cnoa_main_page = 0;
      this->asy_undertak_rmind_sound = 0;
      this->asy_warn_sod_for_aut_drv = 0;
      this->avl_sts_for_long_aut_drv = 0;
      this->too_many_cars = 0;
      this->drv_off_warn = 0;
      this->ad4_horn_warn = 0;
      this->hmi_auto_lane_chg_sts_for_asy_ai_asist_audio = 0;
      this->drv_off_mod = 0;
      this->asy_horn_warn_rqrd = 0;
      this->asy_cnoa_crs_avl_prompt = 0;
      this->asy_crs_sts_swil_indcr = 0;
      this->asy_d2d_avl_rmn_sod = 0;
      this->asy_d2d_deactvd_reasn_sod = 0;
      this->asy_d2d_etc_distan_sod = 0;
      this->asy_d2d_distan_sod = 0;
      this->asy_d2d_strt_to_end_sod = 0;
      this->asy_d2d_remind_sod = 0;
      this->asy_lane_chg_fail_type = 0;
      this->asy_req_lane_chg = 0;
      this->asy_noa_deactvd_reasn_sod = 0;
      this->asy_noa_remind_sod = 0;
      this->ad4_drvr_belt_warn = 0;
      this->asy_noa_takeover_sod = 0;
      this->ad4_drvr_belt_warn_for_bkp = 0;
      this->asy_lan_chg_sod_sec = 0;
      this->ad4_camera_heating_req = 0;
      this->ad_takeover_req_group_ad_takeover_msg = 0;
      this->ad_takeover_req_group_ad_takeover_audio = 0;
      this->ad_wipr_ctrl_req = 0;
      this->asy_noa_blt_fastn = 0;
      this->turn_indic_req_by_alca = 0;
      this->asy_lane_chg_assist_sts = 0;
      this->ad4_camera_heating_req_zcu = 0;
      this->asy_fct_lrng_mesg = 0;
      this->trfc_jam_warn = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _asy_cnoa_crs_actv_faild_voice_type =
    uint8_t;
  _asy_cnoa_crs_actv_faild_voice_type asy_cnoa_crs_actv_faild_voice;
  using _asy_cnoa_crs_cross_intsec_voice_type =
    uint8_t;
  _asy_cnoa_crs_cross_intsec_voice_type asy_cnoa_crs_cross_intsec_voice;
  using _asy_cnoa_crs_actv_voice_type =
    uint8_t;
  _asy_cnoa_crs_actv_voice_type asy_cnoa_crs_actv_voice;
  using _asy_cnoa_crs_deactvd_voice_type =
    uint8_t;
  _asy_cnoa_crs_deactvd_voice_type asy_cnoa_crs_deactvd_voice;
  using _asy_cnoa_crs_finshd_voice_type =
    uint8_t;
  _asy_cnoa_crs_finshd_voice_type asy_cnoa_crs_finshd_voice;
  using _asy_cnoa_crs_offs_voice_type =
    uint8_t;
  _asy_cnoa_crs_offs_voice_type asy_cnoa_crs_offs_voice;
  using _asy_cnoa_crs_rmn_voice_type =
    uint8_t;
  _asy_cnoa_crs_rmn_voice_type asy_cnoa_crs_rmn_voice;
  using _asy_cnoa_hands_off_voice_type =
    uint8_t;
  _asy_cnoa_hands_off_voice_type asy_cnoa_hands_off_voice;
  using _asy_cnoa_lrng_abort_voice_type =
    uint8_t;
  _asy_cnoa_lrng_abort_voice_type asy_cnoa_lrng_abort_voice;
  using _asy_noa_avl_rmn_sound_type =
    uint8_t;
  _asy_noa_avl_rmn_sound_type asy_noa_avl_rmn_sound;
  using _asy_cnoa_takeover_warn_voice_type =
    uint8_t;
  _asy_cnoa_takeover_warn_voice_type asy_cnoa_takeover_warn_voice;
  using _asy_dece_remind_sound_type =
    uint8_t;
  _asy_dece_remind_sound_type asy_dece_remind_sound;
  using _asy_drvr_sod_cfirm_cnoa_main_page_type =
    uint8_t;
  _asy_drvr_sod_cfirm_cnoa_main_page_type asy_drvr_sod_cfirm_cnoa_main_page;
  using _asy_undertak_rmind_sound_type =
    uint8_t;
  _asy_undertak_rmind_sound_type asy_undertak_rmind_sound;
  using _asy_warn_sod_for_aut_drv_type =
    uint8_t;
  _asy_warn_sod_for_aut_drv_type asy_warn_sod_for_aut_drv;
  using _avl_sts_for_long_aut_drv_type =
    uint8_t;
  _avl_sts_for_long_aut_drv_type avl_sts_for_long_aut_drv;
  using _too_many_cars_type =
    uint8_t;
  _too_many_cars_type too_many_cars;
  using _drv_off_warn_type =
    uint8_t;
  _drv_off_warn_type drv_off_warn;
  using _ad4_horn_warn_type =
    uint8_t;
  _ad4_horn_warn_type ad4_horn_warn;
  using _hmi_auto_lane_chg_sts_for_asy_ai_asist_audio_type =
    uint8_t;
  _hmi_auto_lane_chg_sts_for_asy_ai_asist_audio_type hmi_auto_lane_chg_sts_for_asy_ai_asist_audio;
  using _drv_off_mod_type =
    uint8_t;
  _drv_off_mod_type drv_off_mod;
  using _asy_horn_warn_rqrd_type =
    uint8_t;
  _asy_horn_warn_rqrd_type asy_horn_warn_rqrd;
  using _asy_cnoa_crs_avl_prompt_type =
    uint8_t;
  _asy_cnoa_crs_avl_prompt_type asy_cnoa_crs_avl_prompt;
  using _asy_crs_sts_swil_indcr_type =
    uint8_t;
  _asy_crs_sts_swil_indcr_type asy_crs_sts_swil_indcr;
  using _asy_d2d_avl_rmn_sod_type =
    uint8_t;
  _asy_d2d_avl_rmn_sod_type asy_d2d_avl_rmn_sod;
  using _asy_d2d_deactvd_reasn_sod_type =
    uint8_t;
  _asy_d2d_deactvd_reasn_sod_type asy_d2d_deactvd_reasn_sod;
  using _asy_d2d_etc_distan_sod_type =
    uint8_t;
  _asy_d2d_etc_distan_sod_type asy_d2d_etc_distan_sod;
  using _asy_d2d_distan_sod_type =
    uint8_t;
  _asy_d2d_distan_sod_type asy_d2d_distan_sod;
  using _asy_d2d_strt_to_end_sod_type =
    uint8_t;
  _asy_d2d_strt_to_end_sod_type asy_d2d_strt_to_end_sod;
  using _asy_d2d_remind_sod_type =
    uint8_t;
  _asy_d2d_remind_sod_type asy_d2d_remind_sod;
  using _asy_lane_chg_fail_type_type =
    uint8_t;
  _asy_lane_chg_fail_type_type asy_lane_chg_fail_type;
  using _asy_req_lane_chg_type =
    uint8_t;
  _asy_req_lane_chg_type asy_req_lane_chg;
  using _asy_noa_deactvd_reasn_sod_type =
    uint8_t;
  _asy_noa_deactvd_reasn_sod_type asy_noa_deactvd_reasn_sod;
  using _asy_noa_remind_sod_type =
    uint8_t;
  _asy_noa_remind_sod_type asy_noa_remind_sod;
  using _ad4_drvr_belt_warn_type =
    uint8_t;
  _ad4_drvr_belt_warn_type ad4_drvr_belt_warn;
  using _asy_noa_takeover_sod_type =
    uint8_t;
  _asy_noa_takeover_sod_type asy_noa_takeover_sod;
  using _ad4_drvr_belt_warn_for_bkp_type =
    uint8_t;
  _ad4_drvr_belt_warn_for_bkp_type ad4_drvr_belt_warn_for_bkp;
  using _asy_lan_chg_sod_sec_type =
    uint8_t;
  _asy_lan_chg_sod_sec_type asy_lan_chg_sod_sec;
  using _ad4_camera_heating_req_type =
    uint8_t;
  _ad4_camera_heating_req_type ad4_camera_heating_req;
  using _ad_takeover_req_group_ad_takeover_msg_type =
    uint8_t;
  _ad_takeover_req_group_ad_takeover_msg_type ad_takeover_req_group_ad_takeover_msg;
  using _ad_takeover_req_group_ad_takeover_audio_type =
    uint8_t;
  _ad_takeover_req_group_ad_takeover_audio_type ad_takeover_req_group_ad_takeover_audio;
  using _ad_wipr_ctrl_req_type =
    uint8_t;
  _ad_wipr_ctrl_req_type ad_wipr_ctrl_req;
  using _asy_noa_blt_fastn_type =
    uint8_t;
  _asy_noa_blt_fastn_type asy_noa_blt_fastn;
  using _turn_indic_req_by_alca_type =
    uint8_t;
  _turn_indic_req_by_alca_type turn_indic_req_by_alca;
  using _asy_lane_chg_assist_sts_type =
    uint8_t;
  _asy_lane_chg_assist_sts_type asy_lane_chg_assist_sts;
  using _ad4_camera_heating_req_zcu_type =
    uint8_t;
  _ad4_camera_heating_req_zcu_type ad4_camera_heating_req_zcu;
  using _asy_fct_lrng_mesg_type =
    uint8_t;
  _asy_fct_lrng_mesg_type asy_fct_lrng_mesg;
  using _trfc_jam_warn_type =
    uint8_t;
  _trfc_jam_warn_type trfc_jam_warn;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_actv_faild_voice(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_actv_faild_voice = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_cross_intsec_voice(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_cross_intsec_voice = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_actv_voice(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_actv_voice = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_deactvd_voice(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_deactvd_voice = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_finshd_voice(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_finshd_voice = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_offs_voice(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_offs_voice = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_rmn_voice(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_rmn_voice = _arg;
    return *this;
  }
  Type & set__asy_cnoa_hands_off_voice(
    const uint8_t & _arg)
  {
    this->asy_cnoa_hands_off_voice = _arg;
    return *this;
  }
  Type & set__asy_cnoa_lrng_abort_voice(
    const uint8_t & _arg)
  {
    this->asy_cnoa_lrng_abort_voice = _arg;
    return *this;
  }
  Type & set__asy_noa_avl_rmn_sound(
    const uint8_t & _arg)
  {
    this->asy_noa_avl_rmn_sound = _arg;
    return *this;
  }
  Type & set__asy_cnoa_takeover_warn_voice(
    const uint8_t & _arg)
  {
    this->asy_cnoa_takeover_warn_voice = _arg;
    return *this;
  }
  Type & set__asy_dece_remind_sound(
    const uint8_t & _arg)
  {
    this->asy_dece_remind_sound = _arg;
    return *this;
  }
  Type & set__asy_drvr_sod_cfirm_cnoa_main_page(
    const uint8_t & _arg)
  {
    this->asy_drvr_sod_cfirm_cnoa_main_page = _arg;
    return *this;
  }
  Type & set__asy_undertak_rmind_sound(
    const uint8_t & _arg)
  {
    this->asy_undertak_rmind_sound = _arg;
    return *this;
  }
  Type & set__asy_warn_sod_for_aut_drv(
    const uint8_t & _arg)
  {
    this->asy_warn_sod_for_aut_drv = _arg;
    return *this;
  }
  Type & set__avl_sts_for_long_aut_drv(
    const uint8_t & _arg)
  {
    this->avl_sts_for_long_aut_drv = _arg;
    return *this;
  }
  Type & set__too_many_cars(
    const uint8_t & _arg)
  {
    this->too_many_cars = _arg;
    return *this;
  }
  Type & set__drv_off_warn(
    const uint8_t & _arg)
  {
    this->drv_off_warn = _arg;
    return *this;
  }
  Type & set__ad4_horn_warn(
    const uint8_t & _arg)
  {
    this->ad4_horn_warn = _arg;
    return *this;
  }
  Type & set__hmi_auto_lane_chg_sts_for_asy_ai_asist_audio(
    const uint8_t & _arg)
  {
    this->hmi_auto_lane_chg_sts_for_asy_ai_asist_audio = _arg;
    return *this;
  }
  Type & set__drv_off_mod(
    const uint8_t & _arg)
  {
    this->drv_off_mod = _arg;
    return *this;
  }
  Type & set__asy_horn_warn_rqrd(
    const uint8_t & _arg)
  {
    this->asy_horn_warn_rqrd = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_avl_prompt(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_avl_prompt = _arg;
    return *this;
  }
  Type & set__asy_crs_sts_swil_indcr(
    const uint8_t & _arg)
  {
    this->asy_crs_sts_swil_indcr = _arg;
    return *this;
  }
  Type & set__asy_d2d_avl_rmn_sod(
    const uint8_t & _arg)
  {
    this->asy_d2d_avl_rmn_sod = _arg;
    return *this;
  }
  Type & set__asy_d2d_deactvd_reasn_sod(
    const uint8_t & _arg)
  {
    this->asy_d2d_deactvd_reasn_sod = _arg;
    return *this;
  }
  Type & set__asy_d2d_etc_distan_sod(
    const uint8_t & _arg)
  {
    this->asy_d2d_etc_distan_sod = _arg;
    return *this;
  }
  Type & set__asy_d2d_distan_sod(
    const uint8_t & _arg)
  {
    this->asy_d2d_distan_sod = _arg;
    return *this;
  }
  Type & set__asy_d2d_strt_to_end_sod(
    const uint8_t & _arg)
  {
    this->asy_d2d_strt_to_end_sod = _arg;
    return *this;
  }
  Type & set__asy_d2d_remind_sod(
    const uint8_t & _arg)
  {
    this->asy_d2d_remind_sod = _arg;
    return *this;
  }
  Type & set__asy_lane_chg_fail_type(
    const uint8_t & _arg)
  {
    this->asy_lane_chg_fail_type = _arg;
    return *this;
  }
  Type & set__asy_req_lane_chg(
    const uint8_t & _arg)
  {
    this->asy_req_lane_chg = _arg;
    return *this;
  }
  Type & set__asy_noa_deactvd_reasn_sod(
    const uint8_t & _arg)
  {
    this->asy_noa_deactvd_reasn_sod = _arg;
    return *this;
  }
  Type & set__asy_noa_remind_sod(
    const uint8_t & _arg)
  {
    this->asy_noa_remind_sod = _arg;
    return *this;
  }
  Type & set__ad4_drvr_belt_warn(
    const uint8_t & _arg)
  {
    this->ad4_drvr_belt_warn = _arg;
    return *this;
  }
  Type & set__asy_noa_takeover_sod(
    const uint8_t & _arg)
  {
    this->asy_noa_takeover_sod = _arg;
    return *this;
  }
  Type & set__ad4_drvr_belt_warn_for_bkp(
    const uint8_t & _arg)
  {
    this->ad4_drvr_belt_warn_for_bkp = _arg;
    return *this;
  }
  Type & set__asy_lan_chg_sod_sec(
    const uint8_t & _arg)
  {
    this->asy_lan_chg_sod_sec = _arg;
    return *this;
  }
  Type & set__ad4_camera_heating_req(
    const uint8_t & _arg)
  {
    this->ad4_camera_heating_req = _arg;
    return *this;
  }
  Type & set__ad_takeover_req_group_ad_takeover_msg(
    const uint8_t & _arg)
  {
    this->ad_takeover_req_group_ad_takeover_msg = _arg;
    return *this;
  }
  Type & set__ad_takeover_req_group_ad_takeover_audio(
    const uint8_t & _arg)
  {
    this->ad_takeover_req_group_ad_takeover_audio = _arg;
    return *this;
  }
  Type & set__ad_wipr_ctrl_req(
    const uint8_t & _arg)
  {
    this->ad_wipr_ctrl_req = _arg;
    return *this;
  }
  Type & set__asy_noa_blt_fastn(
    const uint8_t & _arg)
  {
    this->asy_noa_blt_fastn = _arg;
    return *this;
  }
  Type & set__turn_indic_req_by_alca(
    const uint8_t & _arg)
  {
    this->turn_indic_req_by_alca = _arg;
    return *this;
  }
  Type & set__asy_lane_chg_assist_sts(
    const uint8_t & _arg)
  {
    this->asy_lane_chg_assist_sts = _arg;
    return *this;
  }
  Type & set__ad4_camera_heating_req_zcu(
    const uint8_t & _arg)
  {
    this->ad4_camera_heating_req_zcu = _arg;
    return *this;
  }
  Type & set__asy_fct_lrng_mesg(
    const uint8_t & _arg)
  {
    this->asy_fct_lrng_mesg = _arg;
    return *this;
  }
  Type & set__trfc_jam_warn(
    const uint8_t & _arg)
  {
    this->trfc_jam_warn = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::MachRemind_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::MachRemind_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachRemind_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachRemind_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachRemind_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachRemind_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachRemind_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachRemind_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachRemind_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachRemind_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__MachRemind
    std::shared_ptr<deva_function_msgs::msg::MachRemind_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__MachRemind
    std::shared_ptr<deva_function_msgs::msg::MachRemind_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MachRemind_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->asy_cnoa_crs_actv_faild_voice != other.asy_cnoa_crs_actv_faild_voice) {
      return false;
    }
    if (this->asy_cnoa_crs_cross_intsec_voice != other.asy_cnoa_crs_cross_intsec_voice) {
      return false;
    }
    if (this->asy_cnoa_crs_actv_voice != other.asy_cnoa_crs_actv_voice) {
      return false;
    }
    if (this->asy_cnoa_crs_deactvd_voice != other.asy_cnoa_crs_deactvd_voice) {
      return false;
    }
    if (this->asy_cnoa_crs_finshd_voice != other.asy_cnoa_crs_finshd_voice) {
      return false;
    }
    if (this->asy_cnoa_crs_offs_voice != other.asy_cnoa_crs_offs_voice) {
      return false;
    }
    if (this->asy_cnoa_crs_rmn_voice != other.asy_cnoa_crs_rmn_voice) {
      return false;
    }
    if (this->asy_cnoa_hands_off_voice != other.asy_cnoa_hands_off_voice) {
      return false;
    }
    if (this->asy_cnoa_lrng_abort_voice != other.asy_cnoa_lrng_abort_voice) {
      return false;
    }
    if (this->asy_noa_avl_rmn_sound != other.asy_noa_avl_rmn_sound) {
      return false;
    }
    if (this->asy_cnoa_takeover_warn_voice != other.asy_cnoa_takeover_warn_voice) {
      return false;
    }
    if (this->asy_dece_remind_sound != other.asy_dece_remind_sound) {
      return false;
    }
    if (this->asy_drvr_sod_cfirm_cnoa_main_page != other.asy_drvr_sod_cfirm_cnoa_main_page) {
      return false;
    }
    if (this->asy_undertak_rmind_sound != other.asy_undertak_rmind_sound) {
      return false;
    }
    if (this->asy_warn_sod_for_aut_drv != other.asy_warn_sod_for_aut_drv) {
      return false;
    }
    if (this->avl_sts_for_long_aut_drv != other.avl_sts_for_long_aut_drv) {
      return false;
    }
    if (this->too_many_cars != other.too_many_cars) {
      return false;
    }
    if (this->drv_off_warn != other.drv_off_warn) {
      return false;
    }
    if (this->ad4_horn_warn != other.ad4_horn_warn) {
      return false;
    }
    if (this->hmi_auto_lane_chg_sts_for_asy_ai_asist_audio != other.hmi_auto_lane_chg_sts_for_asy_ai_asist_audio) {
      return false;
    }
    if (this->drv_off_mod != other.drv_off_mod) {
      return false;
    }
    if (this->asy_horn_warn_rqrd != other.asy_horn_warn_rqrd) {
      return false;
    }
    if (this->asy_cnoa_crs_avl_prompt != other.asy_cnoa_crs_avl_prompt) {
      return false;
    }
    if (this->asy_crs_sts_swil_indcr != other.asy_crs_sts_swil_indcr) {
      return false;
    }
    if (this->asy_d2d_avl_rmn_sod != other.asy_d2d_avl_rmn_sod) {
      return false;
    }
    if (this->asy_d2d_deactvd_reasn_sod != other.asy_d2d_deactvd_reasn_sod) {
      return false;
    }
    if (this->asy_d2d_etc_distan_sod != other.asy_d2d_etc_distan_sod) {
      return false;
    }
    if (this->asy_d2d_distan_sod != other.asy_d2d_distan_sod) {
      return false;
    }
    if (this->asy_d2d_strt_to_end_sod != other.asy_d2d_strt_to_end_sod) {
      return false;
    }
    if (this->asy_d2d_remind_sod != other.asy_d2d_remind_sod) {
      return false;
    }
    if (this->asy_lane_chg_fail_type != other.asy_lane_chg_fail_type) {
      return false;
    }
    if (this->asy_req_lane_chg != other.asy_req_lane_chg) {
      return false;
    }
    if (this->asy_noa_deactvd_reasn_sod != other.asy_noa_deactvd_reasn_sod) {
      return false;
    }
    if (this->asy_noa_remind_sod != other.asy_noa_remind_sod) {
      return false;
    }
    if (this->ad4_drvr_belt_warn != other.ad4_drvr_belt_warn) {
      return false;
    }
    if (this->asy_noa_takeover_sod != other.asy_noa_takeover_sod) {
      return false;
    }
    if (this->ad4_drvr_belt_warn_for_bkp != other.ad4_drvr_belt_warn_for_bkp) {
      return false;
    }
    if (this->asy_lan_chg_sod_sec != other.asy_lan_chg_sod_sec) {
      return false;
    }
    if (this->ad4_camera_heating_req != other.ad4_camera_heating_req) {
      return false;
    }
    if (this->ad_takeover_req_group_ad_takeover_msg != other.ad_takeover_req_group_ad_takeover_msg) {
      return false;
    }
    if (this->ad_takeover_req_group_ad_takeover_audio != other.ad_takeover_req_group_ad_takeover_audio) {
      return false;
    }
    if (this->ad_wipr_ctrl_req != other.ad_wipr_ctrl_req) {
      return false;
    }
    if (this->asy_noa_blt_fastn != other.asy_noa_blt_fastn) {
      return false;
    }
    if (this->turn_indic_req_by_alca != other.turn_indic_req_by_alca) {
      return false;
    }
    if (this->asy_lane_chg_assist_sts != other.asy_lane_chg_assist_sts) {
      return false;
    }
    if (this->ad4_camera_heating_req_zcu != other.ad4_camera_heating_req_zcu) {
      return false;
    }
    if (this->asy_fct_lrng_mesg != other.asy_fct_lrng_mesg) {
      return false;
    }
    if (this->trfc_jam_warn != other.trfc_jam_warn) {
      return false;
    }
    return true;
  }
  bool operator!=(const MachRemind_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MachRemind_

// alias to use template instance with default allocator
using MachRemind =
  deva_function_msgs::msg::MachRemind_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__STRUCT_HPP_
