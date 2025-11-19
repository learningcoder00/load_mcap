// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/UIToSTMData.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/ui_to_stm_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/ui_to_stm_data__struct.hpp"

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
bool cdr_serialize(
  const deva_function_msgs::msg::AppMapInfoToStmStruct &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_function_msgs::msg::AppMapInfoToStmStruct &);
size_t get_serialized_size(
  const deva_function_msgs::msg::AppMapInfoToStmStruct &,
  size_t current_alignment);
size_t
max_serialized_size_AppMapInfoToStmStruct(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_function_msgs

namespace deva_function_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_function_msgs::msg::APPToStmDataStruct &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_function_msgs::msg::APPToStmDataStruct &);
size_t get_serialized_size(
  const deva_function_msgs::msg::APPToStmDataStruct &,
  size_t current_alignment);
size_t
max_serialized_size_APPToStmDataStruct(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_function_msgs


namespace deva_function_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_serialize(
  const deva_function_msgs::msg::UIToSTMData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: drvr_assc_sys_btn_push
  cdr << ros_message.drvr_assc_sys_btn_push;
  // Member: swt_disp_on_and_off_req
  cdr << ros_message.swt_disp_on_and_off_req;
  // Member: nav_frnt_actv_sts
  cdr << ros_message.nav_frnt_actv_sts;
  // Member: ihu_fail
  cdr << ros_message.ihu_fail;
  // Member: scene_mod_seld
  cdr << ros_message.scene_mod_seld;
  // Member: other_ar_psd_req
  cdr << ros_message.other_ar_psd_req;
  // Member: mob_dev_rpa_req_rspa_ctrl
  cdr << ros_message.mob_dev_rpa_req_rspa_ctrl;
  // Member: mob_dev_rpa_req_rpa_req
  cdr << ros_message.mob_dev_rpa_req_rpa_req;
  // Member: mob_dev_rpa_req_rpa_out_mode_sub_t
  cdr << ros_message.mob_dev_rpa_req_rpa_out_mode_sub_t;
  // Member: mob_dev_rpa_req_mob_dev_sts
  cdr << ros_message.mob_dev_rpa_req_mob_dev_sts;
  // Member: rem_straight_prkg_assi_seln_req
  cdr << ros_message.rem_straight_prkg_assi_seln_req;
  // Member: prkg_touch_coorn_req_touch_eve_typ
  cdr << ros_message.prkg_touch_coorn_req_touch_eve_typ;
  // Member: veh_spd_indcd_veh_spd_indcd
  cdr << ros_message.veh_spd_indcd_veh_spd_indcd;
  // Member: sm_aut_prkg_slot_nr_req
  cdr << ros_message.sm_aut_prkg_slot_nr_req;
  // Member: sm_prkg_in_or_out_and_cncl
  cdr << ros_message.sm_prkg_in_or_out_and_cncl;
  // Member: sm_prkg_intrpt_reld_btn
  cdr << ros_message.sm_prkg_intrpt_reld_btn;
  // Member: sm_prkg_fct_swt
  cdr << ros_message.sm_prkg_fct_swt;
  // Member: sm_aut_actv_prkg_fct_swt
  cdr << ros_message.sm_aut_actv_prkg_fct_swt;
  // Member: full_screen_btn_push
  cdr << ros_message.full_screen_btn_push;
  // Member: sm_sel_push_apa_info
  cdr << ros_message.sm_sel_push_apa_info;
  // Member: sm_hpa_soft_butn_enter_rq
  cdr << ros_message.sm_hpa_soft_butn_enter_rq;
  // Member: sm_map_build_rq
  cdr << ros_message.sm_map_build_rq;
  // Member: sm_map_save_rq
  cdr << ros_message.sm_map_save_rq;
  // Member: sm_map_select_id
  cdr << ros_message.sm_map_select_id;
  // Member: sm_drvr_assc_sys_park_mod
  cdr << ros_message.sm_drvr_assc_sys_park_mod;
  // Member: map_build_sts
  cdr << ros_message.map_build_sts;
  // Member: aut_valt_prkg_map_src_req
  cdr << ros_message.aut_valt_prkg_map_src_req;
  // Member: aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  cdr << ros_message.aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req;
  // Member: aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  cdr << ros_message.aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req;
  // Member: aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  cdr << ros_message.aut_valt_prkg_l2_btn_req_setting_voice_btn_req;
  // Member: aut_valt_prkg_map_oper_req_map_type
  cdr << ros_message.aut_valt_prkg_map_oper_req_map_type;
  // Member: aut_valt_prkg_l1_btn_req
  cdr << ros_message.aut_valt_prkg_l1_btn_req;
  // Member: aut_valt_prkg_experience_resp
  cdr << ros_message.aut_valt_prkg_experience_resp;
  // Member: lo_spd_drvg_assi_sho_push_resp
  cdr << ros_message.lo_spd_drvg_assi_sho_push_resp;
  // Member: aut_valt_prkg_sho_dst_push_swt
  cdr << ros_message.aut_valt_prkg_sho_dst_push_swt;
  // Member: aut_valt_prkg_picture_upload_swt
  cdr << ros_message.aut_valt_prkg_picture_upload_swt;
  // Member: aut_valt_prkg_ins_btn_req
  cdr << ros_message.aut_valt_prkg_ins_btn_req;
  // Member: aut_valt_prkg_swt
  cdr << ros_message.aut_valt_prkg_swt;
  // Member: prof_pen_sts1
  cdr << ros_message.prof_pen_sts1;
  // Member: aut_valt_prkg_map_oper_req2_map_type2
  cdr << ros_message.aut_valt_prkg_map_oper_req2_map_type2;
  // Member: aut_valt_prkg_map_oper_req2_map_list1
  cdr << ros_message.aut_valt_prkg_map_oper_req2_map_list1;
  // Member: aut_valt_prkg_map_oper_req2_map_list2
  cdr << ros_message.aut_valt_prkg_map_oper_req2_map_list2;
  // Member: aut_valt_prkg_map_oper_req2_map_list3
  cdr << ros_message.aut_valt_prkg_map_oper_req2_map_list3;
  // Member: aut_valt_prkg_map_oper_req2_map_list4
  cdr << ros_message.aut_valt_prkg_map_oper_req2_map_list4;
  // Member: aut_valt_prkg_l2_pop_btn_req
  cdr << ros_message.aut_valt_prkg_l2_pop_btn_req;
  // Member: voice_active_adcu
  cdr << ros_message.voice_active_adcu;
  // Member: btn_tr_sts1
  cdr << ros_message.btn_tr_sts1;
  // Member: btn_unlck_sts1
  cdr << ros_message.btn_unlck_sts1;
  // Member: btn_lock_sts1
  cdr << ros_message.btn_lock_sts1;
  // Member: btn_tr_sts1_key_id
  cdr << ros_message.btn_tr_sts1_key_id;
  // Member: btn_unlck_sts1_key_id
  cdr << ros_message.btn_unlck_sts1_key_id;
  // Member: btn_lock_sts1_key_id
  cdr << ros_message.btn_lock_sts1_key_id;
  // Member: voice_ctrl_brk
  cdr << ros_message.voice_ctrl_brk;
  // Member: lo_spd_drvg_assi_swt
  cdr << ros_message.lo_spd_drvg_assi_swt;
  // Member: prkg_frnt_or_re_select
  cdr << ros_message.prkg_frnt_or_re_select;
  // Member: tracking_back_assi_swt
  cdr << ros_message.tracking_back_assi_swt;
  // Member: prkg_emg_brk_sys_swt
  cdr << ros_message.prkg_emg_brk_sys_swt;
  // Member: aut_prkg_voice_swt
  cdr << ros_message.aut_prkg_voice_swt;
  // Member: lsda_notif_push_req
  cdr << ros_message.lsda_notif_push_req;
  // Member: monr_sys_sts
  cdr << ros_message.monr_sys_sts;
  // Member: drvr_assc_wisdom_btn
  cdr << ros_message.drvr_assc_wisdom_btn;
  // Member: scenario_mod
  cdr << ros_message.scenario_mod;
  // Member: aut_prkg_voice_typ
  cdr << ros_message.aut_prkg_voice_typ;
  // Member: mai_setting
  cdr << ros_message.mai_setting;
  // Member: aut_prkg_hand_slot_nr_req
  cdr << ros_message.aut_prkg_hand_slot_nr_req;
  // Member: asy_aut_drv_ctrl_typ_dim_req
  cdr << ros_message.asy_aut_drv_ctrl_typ_dim_req;
  // Member: hmi_drvr_sod_req_pilot
  cdr << ros_message.hmi_drvr_sod_req_pilot;
  // Member: drvr_crs_ctrl_fct_actv_req
  cdr << ros_message.drvr_crs_ctrl_fct_actv_req;
  // Member: drvr_acc_fct_deactvn_req
  cdr << ros_message.drvr_acc_fct_deactvn_req;
  // Member: drvr_acc_rs_set_spd_req
  cdr << ros_message.drvr_acc_rs_set_spd_req;
  // Member: set_spd_for_crs_ctrl_fct_active
  cdr << ros_message.set_spd_for_crs_ctrl_fct_active;
  // Member: acc_fusn_trfc_req
  cdr << ros_message.acc_fusn_trfc_req;
  // Member: crs_ctrl_ti_gap_adj_req
  cdr << ros_message.crs_ctrl_ti_gap_adj_req;
  // Member: ve_spd_indcd_unit
  cdr << ros_message.ve_spd_indcd_unit;
  // Member: veh_spd_indcd
  cdr << ros_message.veh_spd_indcd;
  // Member: drv_mod_req
  cdr << ros_message.drv_mod_req;
  // Member: cam_flts_sts_from_dhu
  cdr << ros_message.cam_flts_sts_from_dhu;
  // Member: drvr_dec_sts_from_dhu
  cdr << ros_message.drvr_dec_sts_from_dhu;
  // Member: eye_gaze_zone
  cdr << ros_message.eye_gaze_zone;
  // Member: eye_gaze_zone_time
  cdr << ros_message.eye_gaze_zone_time;
  // Member: eye_on_road_from_dhu
  cdr << ros_message.eye_on_road_from_dhu;
  // Member: eye_open_from_dhu_eye_open_deg_le
  cdr << ros_message.eye_open_from_dhu_eye_open_deg_le;
  // Member: eye_open_from_dhu_eye_open_deg_ri
  cdr << ros_message.eye_open_from_dhu_eye_open_deg_ri;
  // Member: eye_open_from_dhu_eye_open_le
  cdr << ros_message.eye_open_from_dhu_eye_open_le;
  // Member: eye_open_from_dhu_eye_open_ri
  cdr << ros_message.eye_open_from_dhu_eye_open_ri;
  // Member: eye_open_from_dhu_eye_visible_le
  cdr << ros_message.eye_open_from_dhu_eye_visible_le;
  // Member: eye_open_from_dhu_eye_visible_ri
  cdr << ros_message.eye_open_from_dhu_eye_visible_ri;
  // Member: eye_open_from_dhu_face_visible
  cdr << ros_message.eye_open_from_dhu_face_visible;
  // Member: snsr_drvr_pfmnc_sts_from_dhu
  cdr << ros_message.snsr_drvr_pfmnc_sts_from_dhu;
  // Member: voice_brst_mod
  cdr << ros_message.voice_brst_mod;
  // Member: auto_lane_chg_style_sw_sts
  cdr << ros_message.auto_lane_chg_style_sw_sts;
  // Member: nop_cofm_of_lan_chag_onoff
  cdr << ros_message.nop_cofm_of_lan_chag_onoff;
  // Member: hmi_sod_lan_chg_switch
  cdr << ros_message.hmi_sod_lan_chg_switch;
  // Member: hmi_drvr_sod_req_chg
  cdr << ros_message.hmi_drvr_sod_req_chg;
  // Member: asy_noa_upgrade_switch
  cdr << ros_message.asy_noa_upgrade_switch;
  // Member: sfty_hmi_ena
  cdr << ros_message.sfty_hmi_ena;
  // Member: nop_remind_typ_of_chg_lane_req
  cdr << ros_message.nop_remind_typ_of_chg_lane_req;
  // Member: drvr_lane_chg_aut_actv_sts
  cdr << ros_message.drvr_lane_chg_aut_actv_sts;
  // Member: auto_lane_chg_with_navi_sw_onoff
  cdr << ros_message.auto_lane_chg_with_navi_sw_onoff;
  // Member: nav_noa_status_change_req
  cdr << ros_message.nav_noa_status_change_req;
  // Member: prkg_camera_store_req
  cdr << ros_message.prkg_camera_store_req;
  // Member: voice_ctrl_prk
  cdr << ros_message.voice_ctrl_prk;
  // Member: drift_prkg_req
  cdr << ros_message.drift_prkg_req;
  // Member: hmi_drvr_sod_req_cnoa_main_page
  cdr << ros_message.hmi_drvr_sod_req_cnoa_main_page;
  // Member: hmi_drvr_sod_req_cnoa_lrng
  cdr << ros_message.hmi_drvr_sod_req_cnoa_lrng;
  // Member: hmi_drvr_sod_req_finish_lrng
  cdr << ros_message.hmi_drvr_sod_req_finish_lrng;
  // Member: hmi_cnoa_crs_swt_on_off
  cdr << ros_message.hmi_cnoa_crs_swt_on_off;
  // Member: hmi_cnoa_sod_lan_chg_swt
  cdr << ros_message.hmi_cnoa_sod_lan_chg_swt;
  // Member: hmi_cnoa_auto_lane_chg_style_sw_sts
  cdr << ros_message.hmi_cnoa_auto_lane_chg_style_sw_sts;
  // Member: hmi_cnoa_lrng_swt_on_off
  cdr << ros_message.hmi_cnoa_lrng_swt_on_off;
  // Member: hmi_drvr_sod_req_contns_lrng
  cdr << ros_message.hmi_drvr_sod_req_contns_lrng;
  // Member: apa_custom_prkg_req
  cdr << ros_message.apa_custom_prkg_req;
  // Member: exit_custom_prkg_req
  cdr << ros_message.exit_custom_prkg_req;
  // Member: cust_prk_slot_posn_angle_disp
  cdr << ros_message.cust_prk_slot_posn_angle_disp;
  // Member: cust_prk_slot_posn_end_x1
  cdr << ros_message.cust_prk_slot_posn_end_x1;
  // Member: cust_prk_slot_posn_end_x2
  cdr << ros_message.cust_prk_slot_posn_end_x2;
  // Member: cust_prk_slot_posn_end_y1
  cdr << ros_message.cust_prk_slot_posn_end_y1;
  // Member: cust_prk_slot_posn_end_y2
  cdr << ros_message.cust_prk_slot_posn_end_y2;
  // Member: cust_prk_slot_posn_start_x1
  cdr << ros_message.cust_prk_slot_posn_start_x1;
  // Member: cust_prk_slot_posn_start_x2
  cdr << ros_message.cust_prk_slot_posn_start_x2;
  // Member: cust_prk_slot_posn_start_y1
  cdr << ros_message.cust_prk_slot_posn_start_y1;
  // Member: cust_prk_slot_posn_start_y2
  cdr << ros_message.cust_prk_slot_posn_start_y2;
  // Member: screem_oper
  cdr << ros_message.screem_oper;
  // Member: hpa_max_swt
  cdr << (ros_message.hpa_max_swt ? true : false);
  // Member: rpa_select_par_in
  cdr << ros_message.rpa_select_par_in;
  // Member: frnt_and_re_prkg_in_swt
  cdr << ros_message.frnt_and_re_prkg_in_swt;
  // Member: app_map_info_to_stm
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.app_map_info_to_stm,
    cdr);
  // Member: app_to_stm_data
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.app_to_stm_data,
    cdr);
  // Member: aut_prkg_hand_slot_nr_req_topo_slot_id
  cdr << ros_message.aut_prkg_hand_slot_nr_req_topo_slot_id;
  // Member: aut_prkg_hand_slot_nr_req_topo_slot_status
  cdr << ros_message.aut_prkg_hand_slot_nr_req_topo_slot_status;
  // Member: aut_prkg_select_entrance
  cdr << ros_message.aut_prkg_select_entrance;
  // Member: aut_valt_prkg_cls_pop
  cdr << ros_message.aut_valt_prkg_cls_pop;
  // Member: aut_valt_prkg_cover_results
  cdr << ros_message.aut_valt_prkg_cover_results;
  // Member: aut_valt_prkg_select_d2d
  cdr << ros_message.aut_valt_prkg_select_d2d;
  // Member: aut_valt_prkg_topo_flr
  cdr << ros_message.aut_valt_prkg_topo_flr;
  // Member: d2d_p_icon_clicked
  cdr << ros_message.d2d_p_icon_clicked;
  // Member: d2d_route_push_button_resp
  cdr << ros_message.d2d_route_push_button_resp;
  // Member: hmi_etc_traffic_sw_sts
  cdr << ros_message.hmi_etc_traffic_sw_sts;
  // Member: prkg_lrng_sts_hpa_lrng_sts
  cdr << ros_message.prkg_lrng_sts_hpa_lrng_sts;
  // Member: prkg_slot_typ_select
  cdr << ros_message.prkg_slot_typ_select;
  // Member: asy_aut_drvg_li_swt
  cdr << ros_message.asy_aut_drvg_li_swt;
  // Member: aut_valt_prkg_map_resp_map_id_list1
  cdr << ros_message.aut_valt_prkg_map_resp_map_id_list1;
  // Member: aut_valt_prkg_map_resp_map_id_list2
  cdr << ros_message.aut_valt_prkg_map_resp_map_id_list2;
  // Member: aut_valt_prkg_map_resp_map_id_list3
  cdr << ros_message.aut_valt_prkg_map_resp_map_id_list3;
  // Member: aut_valt_prkg_map_resp_map_id_list4
  cdr << ros_message.aut_valt_prkg_map_resp_map_id_list4;
  // Member: aut_valt_prkg_map_resp_map_id_result
  cdr << ros_message.aut_valt_prkg_map_resp_map_id_result;
  // Member: aut_valt_prkg_map_syncn_map_id_list1
  cdr << ros_message.aut_valt_prkg_map_syncn_map_id_list1;
  // Member: aut_valt_prkg_map_syncn_map_id_list2
  cdr << ros_message.aut_valt_prkg_map_syncn_map_id_list2;
  // Member: aut_valt_prkg_map_syncn_map_id_list3
  cdr << ros_message.aut_valt_prkg_map_syncn_map_id_list3;
  // Member: aut_valt_prkg_map_syncn_map_id_list4
  cdr << ros_message.aut_valt_prkg_map_syncn_map_id_list4;
  // Member: aut_valt_prkg_map_syncn_map_syncn
  cdr << ros_message.aut_valt_prkg_map_syncn_map_syncn;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::UIToSTMData & ros_message)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: drvr_assc_sys_btn_push
  cdr >> ros_message.drvr_assc_sys_btn_push;

  // Member: swt_disp_on_and_off_req
  cdr >> ros_message.swt_disp_on_and_off_req;

  // Member: nav_frnt_actv_sts
  cdr >> ros_message.nav_frnt_actv_sts;

  // Member: ihu_fail
  cdr >> ros_message.ihu_fail;

  // Member: scene_mod_seld
  cdr >> ros_message.scene_mod_seld;

  // Member: other_ar_psd_req
  cdr >> ros_message.other_ar_psd_req;

  // Member: mob_dev_rpa_req_rspa_ctrl
  cdr >> ros_message.mob_dev_rpa_req_rspa_ctrl;

  // Member: mob_dev_rpa_req_rpa_req
  cdr >> ros_message.mob_dev_rpa_req_rpa_req;

  // Member: mob_dev_rpa_req_rpa_out_mode_sub_t
  cdr >> ros_message.mob_dev_rpa_req_rpa_out_mode_sub_t;

  // Member: mob_dev_rpa_req_mob_dev_sts
  cdr >> ros_message.mob_dev_rpa_req_mob_dev_sts;

  // Member: rem_straight_prkg_assi_seln_req
  cdr >> ros_message.rem_straight_prkg_assi_seln_req;

  // Member: prkg_touch_coorn_req_touch_eve_typ
  cdr >> ros_message.prkg_touch_coorn_req_touch_eve_typ;

  // Member: veh_spd_indcd_veh_spd_indcd
  cdr >> ros_message.veh_spd_indcd_veh_spd_indcd;

  // Member: sm_aut_prkg_slot_nr_req
  cdr >> ros_message.sm_aut_prkg_slot_nr_req;

  // Member: sm_prkg_in_or_out_and_cncl
  cdr >> ros_message.sm_prkg_in_or_out_and_cncl;

  // Member: sm_prkg_intrpt_reld_btn
  cdr >> ros_message.sm_prkg_intrpt_reld_btn;

  // Member: sm_prkg_fct_swt
  cdr >> ros_message.sm_prkg_fct_swt;

  // Member: sm_aut_actv_prkg_fct_swt
  cdr >> ros_message.sm_aut_actv_prkg_fct_swt;

  // Member: full_screen_btn_push
  cdr >> ros_message.full_screen_btn_push;

  // Member: sm_sel_push_apa_info
  cdr >> ros_message.sm_sel_push_apa_info;

  // Member: sm_hpa_soft_butn_enter_rq
  cdr >> ros_message.sm_hpa_soft_butn_enter_rq;

  // Member: sm_map_build_rq
  cdr >> ros_message.sm_map_build_rq;

  // Member: sm_map_save_rq
  cdr >> ros_message.sm_map_save_rq;

  // Member: sm_map_select_id
  cdr >> ros_message.sm_map_select_id;

  // Member: sm_drvr_assc_sys_park_mod
  cdr >> ros_message.sm_drvr_assc_sys_park_mod;

  // Member: map_build_sts
  cdr >> ros_message.map_build_sts;

  // Member: aut_valt_prkg_map_src_req
  cdr >> ros_message.aut_valt_prkg_map_src_req;

  // Member: aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  cdr >> ros_message.aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req;

  // Member: aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  cdr >> ros_message.aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req;

  // Member: aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  cdr >> ros_message.aut_valt_prkg_l2_btn_req_setting_voice_btn_req;

  // Member: aut_valt_prkg_map_oper_req_map_type
  cdr >> ros_message.aut_valt_prkg_map_oper_req_map_type;

  // Member: aut_valt_prkg_l1_btn_req
  cdr >> ros_message.aut_valt_prkg_l1_btn_req;

  // Member: aut_valt_prkg_experience_resp
  cdr >> ros_message.aut_valt_prkg_experience_resp;

  // Member: lo_spd_drvg_assi_sho_push_resp
  cdr >> ros_message.lo_spd_drvg_assi_sho_push_resp;

  // Member: aut_valt_prkg_sho_dst_push_swt
  cdr >> ros_message.aut_valt_prkg_sho_dst_push_swt;

  // Member: aut_valt_prkg_picture_upload_swt
  cdr >> ros_message.aut_valt_prkg_picture_upload_swt;

  // Member: aut_valt_prkg_ins_btn_req
  cdr >> ros_message.aut_valt_prkg_ins_btn_req;

  // Member: aut_valt_prkg_swt
  cdr >> ros_message.aut_valt_prkg_swt;

  // Member: prof_pen_sts1
  cdr >> ros_message.prof_pen_sts1;

  // Member: aut_valt_prkg_map_oper_req2_map_type2
  cdr >> ros_message.aut_valt_prkg_map_oper_req2_map_type2;

  // Member: aut_valt_prkg_map_oper_req2_map_list1
  cdr >> ros_message.aut_valt_prkg_map_oper_req2_map_list1;

  // Member: aut_valt_prkg_map_oper_req2_map_list2
  cdr >> ros_message.aut_valt_prkg_map_oper_req2_map_list2;

  // Member: aut_valt_prkg_map_oper_req2_map_list3
  cdr >> ros_message.aut_valt_prkg_map_oper_req2_map_list3;

  // Member: aut_valt_prkg_map_oper_req2_map_list4
  cdr >> ros_message.aut_valt_prkg_map_oper_req2_map_list4;

  // Member: aut_valt_prkg_l2_pop_btn_req
  cdr >> ros_message.aut_valt_prkg_l2_pop_btn_req;

  // Member: voice_active_adcu
  cdr >> ros_message.voice_active_adcu;

  // Member: btn_tr_sts1
  cdr >> ros_message.btn_tr_sts1;

  // Member: btn_unlck_sts1
  cdr >> ros_message.btn_unlck_sts1;

  // Member: btn_lock_sts1
  cdr >> ros_message.btn_lock_sts1;

  // Member: btn_tr_sts1_key_id
  cdr >> ros_message.btn_tr_sts1_key_id;

  // Member: btn_unlck_sts1_key_id
  cdr >> ros_message.btn_unlck_sts1_key_id;

  // Member: btn_lock_sts1_key_id
  cdr >> ros_message.btn_lock_sts1_key_id;

  // Member: voice_ctrl_brk
  cdr >> ros_message.voice_ctrl_brk;

  // Member: lo_spd_drvg_assi_swt
  cdr >> ros_message.lo_spd_drvg_assi_swt;

  // Member: prkg_frnt_or_re_select
  cdr >> ros_message.prkg_frnt_or_re_select;

  // Member: tracking_back_assi_swt
  cdr >> ros_message.tracking_back_assi_swt;

  // Member: prkg_emg_brk_sys_swt
  cdr >> ros_message.prkg_emg_brk_sys_swt;

  // Member: aut_prkg_voice_swt
  cdr >> ros_message.aut_prkg_voice_swt;

  // Member: lsda_notif_push_req
  cdr >> ros_message.lsda_notif_push_req;

  // Member: monr_sys_sts
  cdr >> ros_message.monr_sys_sts;

  // Member: drvr_assc_wisdom_btn
  cdr >> ros_message.drvr_assc_wisdom_btn;

  // Member: scenario_mod
  cdr >> ros_message.scenario_mod;

  // Member: aut_prkg_voice_typ
  cdr >> ros_message.aut_prkg_voice_typ;

  // Member: mai_setting
  cdr >> ros_message.mai_setting;

  // Member: aut_prkg_hand_slot_nr_req
  cdr >> ros_message.aut_prkg_hand_slot_nr_req;

  // Member: asy_aut_drv_ctrl_typ_dim_req
  cdr >> ros_message.asy_aut_drv_ctrl_typ_dim_req;

  // Member: hmi_drvr_sod_req_pilot
  cdr >> ros_message.hmi_drvr_sod_req_pilot;

  // Member: drvr_crs_ctrl_fct_actv_req
  cdr >> ros_message.drvr_crs_ctrl_fct_actv_req;

  // Member: drvr_acc_fct_deactvn_req
  cdr >> ros_message.drvr_acc_fct_deactvn_req;

  // Member: drvr_acc_rs_set_spd_req
  cdr >> ros_message.drvr_acc_rs_set_spd_req;

  // Member: set_spd_for_crs_ctrl_fct_active
  cdr >> ros_message.set_spd_for_crs_ctrl_fct_active;

  // Member: acc_fusn_trfc_req
  cdr >> ros_message.acc_fusn_trfc_req;

  // Member: crs_ctrl_ti_gap_adj_req
  cdr >> ros_message.crs_ctrl_ti_gap_adj_req;

  // Member: ve_spd_indcd_unit
  cdr >> ros_message.ve_spd_indcd_unit;

  // Member: veh_spd_indcd
  cdr >> ros_message.veh_spd_indcd;

  // Member: drv_mod_req
  cdr >> ros_message.drv_mod_req;

  // Member: cam_flts_sts_from_dhu
  cdr >> ros_message.cam_flts_sts_from_dhu;

  // Member: drvr_dec_sts_from_dhu
  cdr >> ros_message.drvr_dec_sts_from_dhu;

  // Member: eye_gaze_zone
  cdr >> ros_message.eye_gaze_zone;

  // Member: eye_gaze_zone_time
  cdr >> ros_message.eye_gaze_zone_time;

  // Member: eye_on_road_from_dhu
  cdr >> ros_message.eye_on_road_from_dhu;

  // Member: eye_open_from_dhu_eye_open_deg_le
  cdr >> ros_message.eye_open_from_dhu_eye_open_deg_le;

  // Member: eye_open_from_dhu_eye_open_deg_ri
  cdr >> ros_message.eye_open_from_dhu_eye_open_deg_ri;

  // Member: eye_open_from_dhu_eye_open_le
  cdr >> ros_message.eye_open_from_dhu_eye_open_le;

  // Member: eye_open_from_dhu_eye_open_ri
  cdr >> ros_message.eye_open_from_dhu_eye_open_ri;

  // Member: eye_open_from_dhu_eye_visible_le
  cdr >> ros_message.eye_open_from_dhu_eye_visible_le;

  // Member: eye_open_from_dhu_eye_visible_ri
  cdr >> ros_message.eye_open_from_dhu_eye_visible_ri;

  // Member: eye_open_from_dhu_face_visible
  cdr >> ros_message.eye_open_from_dhu_face_visible;

  // Member: snsr_drvr_pfmnc_sts_from_dhu
  cdr >> ros_message.snsr_drvr_pfmnc_sts_from_dhu;

  // Member: voice_brst_mod
  cdr >> ros_message.voice_brst_mod;

  // Member: auto_lane_chg_style_sw_sts
  cdr >> ros_message.auto_lane_chg_style_sw_sts;

  // Member: nop_cofm_of_lan_chag_onoff
  cdr >> ros_message.nop_cofm_of_lan_chag_onoff;

  // Member: hmi_sod_lan_chg_switch
  cdr >> ros_message.hmi_sod_lan_chg_switch;

  // Member: hmi_drvr_sod_req_chg
  cdr >> ros_message.hmi_drvr_sod_req_chg;

  // Member: asy_noa_upgrade_switch
  cdr >> ros_message.asy_noa_upgrade_switch;

  // Member: sfty_hmi_ena
  cdr >> ros_message.sfty_hmi_ena;

  // Member: nop_remind_typ_of_chg_lane_req
  cdr >> ros_message.nop_remind_typ_of_chg_lane_req;

  // Member: drvr_lane_chg_aut_actv_sts
  cdr >> ros_message.drvr_lane_chg_aut_actv_sts;

  // Member: auto_lane_chg_with_navi_sw_onoff
  cdr >> ros_message.auto_lane_chg_with_navi_sw_onoff;

  // Member: nav_noa_status_change_req
  cdr >> ros_message.nav_noa_status_change_req;

  // Member: prkg_camera_store_req
  cdr >> ros_message.prkg_camera_store_req;

  // Member: voice_ctrl_prk
  cdr >> ros_message.voice_ctrl_prk;

  // Member: drift_prkg_req
  cdr >> ros_message.drift_prkg_req;

  // Member: hmi_drvr_sod_req_cnoa_main_page
  cdr >> ros_message.hmi_drvr_sod_req_cnoa_main_page;

  // Member: hmi_drvr_sod_req_cnoa_lrng
  cdr >> ros_message.hmi_drvr_sod_req_cnoa_lrng;

  // Member: hmi_drvr_sod_req_finish_lrng
  cdr >> ros_message.hmi_drvr_sod_req_finish_lrng;

  // Member: hmi_cnoa_crs_swt_on_off
  cdr >> ros_message.hmi_cnoa_crs_swt_on_off;

  // Member: hmi_cnoa_sod_lan_chg_swt
  cdr >> ros_message.hmi_cnoa_sod_lan_chg_swt;

  // Member: hmi_cnoa_auto_lane_chg_style_sw_sts
  cdr >> ros_message.hmi_cnoa_auto_lane_chg_style_sw_sts;

  // Member: hmi_cnoa_lrng_swt_on_off
  cdr >> ros_message.hmi_cnoa_lrng_swt_on_off;

  // Member: hmi_drvr_sod_req_contns_lrng
  cdr >> ros_message.hmi_drvr_sod_req_contns_lrng;

  // Member: apa_custom_prkg_req
  cdr >> ros_message.apa_custom_prkg_req;

  // Member: exit_custom_prkg_req
  cdr >> ros_message.exit_custom_prkg_req;

  // Member: cust_prk_slot_posn_angle_disp
  cdr >> ros_message.cust_prk_slot_posn_angle_disp;

  // Member: cust_prk_slot_posn_end_x1
  cdr >> ros_message.cust_prk_slot_posn_end_x1;

  // Member: cust_prk_slot_posn_end_x2
  cdr >> ros_message.cust_prk_slot_posn_end_x2;

  // Member: cust_prk_slot_posn_end_y1
  cdr >> ros_message.cust_prk_slot_posn_end_y1;

  // Member: cust_prk_slot_posn_end_y2
  cdr >> ros_message.cust_prk_slot_posn_end_y2;

  // Member: cust_prk_slot_posn_start_x1
  cdr >> ros_message.cust_prk_slot_posn_start_x1;

  // Member: cust_prk_slot_posn_start_x2
  cdr >> ros_message.cust_prk_slot_posn_start_x2;

  // Member: cust_prk_slot_posn_start_y1
  cdr >> ros_message.cust_prk_slot_posn_start_y1;

  // Member: cust_prk_slot_posn_start_y2
  cdr >> ros_message.cust_prk_slot_posn_start_y2;

  // Member: screem_oper
  cdr >> ros_message.screem_oper;

  // Member: hpa_max_swt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.hpa_max_swt = tmp ? true : false;
  }

  // Member: rpa_select_par_in
  cdr >> ros_message.rpa_select_par_in;

  // Member: frnt_and_re_prkg_in_swt
  cdr >> ros_message.frnt_and_re_prkg_in_swt;

  // Member: app_map_info_to_stm
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.app_map_info_to_stm);

  // Member: app_to_stm_data
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.app_to_stm_data);

  // Member: aut_prkg_hand_slot_nr_req_topo_slot_id
  cdr >> ros_message.aut_prkg_hand_slot_nr_req_topo_slot_id;

  // Member: aut_prkg_hand_slot_nr_req_topo_slot_status
  cdr >> ros_message.aut_prkg_hand_slot_nr_req_topo_slot_status;

  // Member: aut_prkg_select_entrance
  cdr >> ros_message.aut_prkg_select_entrance;

  // Member: aut_valt_prkg_cls_pop
  cdr >> ros_message.aut_valt_prkg_cls_pop;

  // Member: aut_valt_prkg_cover_results
  cdr >> ros_message.aut_valt_prkg_cover_results;

  // Member: aut_valt_prkg_select_d2d
  cdr >> ros_message.aut_valt_prkg_select_d2d;

  // Member: aut_valt_prkg_topo_flr
  cdr >> ros_message.aut_valt_prkg_topo_flr;

  // Member: d2d_p_icon_clicked
  cdr >> ros_message.d2d_p_icon_clicked;

  // Member: d2d_route_push_button_resp
  cdr >> ros_message.d2d_route_push_button_resp;

  // Member: hmi_etc_traffic_sw_sts
  cdr >> ros_message.hmi_etc_traffic_sw_sts;

  // Member: prkg_lrng_sts_hpa_lrng_sts
  cdr >> ros_message.prkg_lrng_sts_hpa_lrng_sts;

  // Member: prkg_slot_typ_select
  cdr >> ros_message.prkg_slot_typ_select;

  // Member: asy_aut_drvg_li_swt
  cdr >> ros_message.asy_aut_drvg_li_swt;

  // Member: aut_valt_prkg_map_resp_map_id_list1
  cdr >> ros_message.aut_valt_prkg_map_resp_map_id_list1;

  // Member: aut_valt_prkg_map_resp_map_id_list2
  cdr >> ros_message.aut_valt_prkg_map_resp_map_id_list2;

  // Member: aut_valt_prkg_map_resp_map_id_list3
  cdr >> ros_message.aut_valt_prkg_map_resp_map_id_list3;

  // Member: aut_valt_prkg_map_resp_map_id_list4
  cdr >> ros_message.aut_valt_prkg_map_resp_map_id_list4;

  // Member: aut_valt_prkg_map_resp_map_id_result
  cdr >> ros_message.aut_valt_prkg_map_resp_map_id_result;

  // Member: aut_valt_prkg_map_syncn_map_id_list1
  cdr >> ros_message.aut_valt_prkg_map_syncn_map_id_list1;

  // Member: aut_valt_prkg_map_syncn_map_id_list2
  cdr >> ros_message.aut_valt_prkg_map_syncn_map_id_list2;

  // Member: aut_valt_prkg_map_syncn_map_id_list3
  cdr >> ros_message.aut_valt_prkg_map_syncn_map_id_list3;

  // Member: aut_valt_prkg_map_syncn_map_id_list4
  cdr >> ros_message.aut_valt_prkg_map_syncn_map_id_list4;

  // Member: aut_valt_prkg_map_syncn_map_syncn
  cdr >> ros_message.aut_valt_prkg_map_syncn_map_syncn;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::UIToSTMData & ros_message,
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
  // Member: drvr_assc_sys_btn_push
  {
    size_t item_size = sizeof(ros_message.drvr_assc_sys_btn_push);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: swt_disp_on_and_off_req
  {
    size_t item_size = sizeof(ros_message.swt_disp_on_and_off_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nav_frnt_actv_sts
  {
    size_t item_size = sizeof(ros_message.nav_frnt_actv_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ihu_fail
  {
    size_t item_size = sizeof(ros_message.ihu_fail);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scene_mod_seld
  {
    size_t item_size = sizeof(ros_message.scene_mod_seld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: other_ar_psd_req
  {
    size_t item_size = sizeof(ros_message.other_ar_psd_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_rpa_req_rspa_ctrl
  {
    size_t item_size = sizeof(ros_message.mob_dev_rpa_req_rspa_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_rpa_req_rpa_req
  {
    size_t item_size = sizeof(ros_message.mob_dev_rpa_req_rpa_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    size_t item_size = sizeof(ros_message.mob_dev_rpa_req_rpa_out_mode_sub_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_rpa_req_mob_dev_sts
  {
    size_t item_size = sizeof(ros_message.mob_dev_rpa_req_mob_dev_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rem_straight_prkg_assi_seln_req
  {
    size_t item_size = sizeof(ros_message.rem_straight_prkg_assi_seln_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_touch_coorn_req_touch_eve_typ
  {
    size_t item_size = sizeof(ros_message.prkg_touch_coorn_req_touch_eve_typ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_spd_indcd_veh_spd_indcd
  {
    size_t item_size = sizeof(ros_message.veh_spd_indcd_veh_spd_indcd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_aut_prkg_slot_nr_req
  {
    size_t item_size = sizeof(ros_message.sm_aut_prkg_slot_nr_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_prkg_in_or_out_and_cncl
  {
    size_t item_size = sizeof(ros_message.sm_prkg_in_or_out_and_cncl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_prkg_intrpt_reld_btn
  {
    size_t item_size = sizeof(ros_message.sm_prkg_intrpt_reld_btn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_prkg_fct_swt
  {
    size_t item_size = sizeof(ros_message.sm_prkg_fct_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_aut_actv_prkg_fct_swt
  {
    size_t item_size = sizeof(ros_message.sm_aut_actv_prkg_fct_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: full_screen_btn_push
  {
    size_t item_size = sizeof(ros_message.full_screen_btn_push);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_sel_push_apa_info
  {
    size_t item_size = sizeof(ros_message.sm_sel_push_apa_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_hpa_soft_butn_enter_rq
  {
    size_t item_size = sizeof(ros_message.sm_hpa_soft_butn_enter_rq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_map_build_rq
  {
    size_t item_size = sizeof(ros_message.sm_map_build_rq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_map_save_rq
  {
    size_t item_size = sizeof(ros_message.sm_map_save_rq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_map_select_id
  {
    size_t item_size = sizeof(ros_message.sm_map_select_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_drvr_assc_sys_park_mod
  {
    size_t item_size = sizeof(ros_message.sm_drvr_assc_sys_park_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: map_build_sts
  {
    size_t item_size = sizeof(ros_message.map_build_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_src_req
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_src_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_l2_btn_req_setting_voice_btn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_oper_req_map_type
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_oper_req_map_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_l1_btn_req
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_l1_btn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_experience_resp
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_experience_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lo_spd_drvg_assi_sho_push_resp
  {
    size_t item_size = sizeof(ros_message.lo_spd_drvg_assi_sho_push_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_sho_dst_push_swt
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_sho_dst_push_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_picture_upload_swt
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_picture_upload_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_ins_btn_req
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_ins_btn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_swt
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prof_pen_sts1
  {
    size_t item_size = sizeof(ros_message.prof_pen_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_oper_req2_map_type2
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_oper_req2_map_type2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_oper_req2_map_list1
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_oper_req2_map_list1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_oper_req2_map_list2
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_oper_req2_map_list2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_oper_req2_map_list3
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_oper_req2_map_list3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_oper_req2_map_list4
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_oper_req2_map_list4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_l2_pop_btn_req
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_l2_pop_btn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voice_active_adcu
  {
    size_t item_size = sizeof(ros_message.voice_active_adcu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: btn_tr_sts1
  {
    size_t item_size = sizeof(ros_message.btn_tr_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: btn_unlck_sts1
  {
    size_t item_size = sizeof(ros_message.btn_unlck_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: btn_lock_sts1
  {
    size_t item_size = sizeof(ros_message.btn_lock_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: btn_tr_sts1_key_id
  {
    size_t item_size = sizeof(ros_message.btn_tr_sts1_key_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: btn_unlck_sts1_key_id
  {
    size_t item_size = sizeof(ros_message.btn_unlck_sts1_key_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: btn_lock_sts1_key_id
  {
    size_t item_size = sizeof(ros_message.btn_lock_sts1_key_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voice_ctrl_brk
  {
    size_t item_size = sizeof(ros_message.voice_ctrl_brk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lo_spd_drvg_assi_swt
  {
    size_t item_size = sizeof(ros_message.lo_spd_drvg_assi_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_frnt_or_re_select
  {
    size_t item_size = sizeof(ros_message.prkg_frnt_or_re_select);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tracking_back_assi_swt
  {
    size_t item_size = sizeof(ros_message.tracking_back_assi_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_emg_brk_sys_swt
  {
    size_t item_size = sizeof(ros_message.prkg_emg_brk_sys_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_prkg_voice_swt
  {
    size_t item_size = sizeof(ros_message.aut_prkg_voice_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lsda_notif_push_req
  {
    size_t item_size = sizeof(ros_message.lsda_notif_push_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: monr_sys_sts
  {
    size_t item_size = sizeof(ros_message.monr_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvr_assc_wisdom_btn
  {
    size_t item_size = sizeof(ros_message.drvr_assc_wisdom_btn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scenario_mod
  {
    size_t item_size = sizeof(ros_message.scenario_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_prkg_voice_typ
  {
    size_t item_size = sizeof(ros_message.aut_prkg_voice_typ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mai_setting
  {
    size_t item_size = sizeof(ros_message.mai_setting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_prkg_hand_slot_nr_req
  {
    size_t item_size = sizeof(ros_message.aut_prkg_hand_slot_nr_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_aut_drv_ctrl_typ_dim_req
  {
    size_t item_size = sizeof(ros_message.asy_aut_drv_ctrl_typ_dim_req);
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
  // Member: drvr_acc_fct_deactvn_req
  {
    size_t item_size = sizeof(ros_message.drvr_acc_fct_deactvn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvr_acc_rs_set_spd_req
  {
    size_t item_size = sizeof(ros_message.drvr_acc_rs_set_spd_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_spd_for_crs_ctrl_fct_active
  {
    size_t item_size = sizeof(ros_message.set_spd_for_crs_ctrl_fct_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_fusn_trfc_req
  {
    size_t item_size = sizeof(ros_message.acc_fusn_trfc_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crs_ctrl_ti_gap_adj_req
  {
    size_t item_size = sizeof(ros_message.crs_ctrl_ti_gap_adj_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ve_spd_indcd_unit
  {
    size_t item_size = sizeof(ros_message.ve_spd_indcd_unit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_spd_indcd
  {
    size_t item_size = sizeof(ros_message.veh_spd_indcd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drv_mod_req
  {
    size_t item_size = sizeof(ros_message.drv_mod_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_flts_sts_from_dhu
  {
    size_t item_size = sizeof(ros_message.cam_flts_sts_from_dhu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvr_dec_sts_from_dhu
  {
    size_t item_size = sizeof(ros_message.drvr_dec_sts_from_dhu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eye_gaze_zone
  {
    size_t item_size = sizeof(ros_message.eye_gaze_zone);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eye_gaze_zone_time
  {
    size_t item_size = sizeof(ros_message.eye_gaze_zone_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eye_on_road_from_dhu
  {
    size_t item_size = sizeof(ros_message.eye_on_road_from_dhu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eye_open_from_dhu_eye_open_deg_le
  {
    size_t item_size = sizeof(ros_message.eye_open_from_dhu_eye_open_deg_le);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eye_open_from_dhu_eye_open_deg_ri
  {
    size_t item_size = sizeof(ros_message.eye_open_from_dhu_eye_open_deg_ri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eye_open_from_dhu_eye_open_le
  {
    size_t item_size = sizeof(ros_message.eye_open_from_dhu_eye_open_le);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eye_open_from_dhu_eye_open_ri
  {
    size_t item_size = sizeof(ros_message.eye_open_from_dhu_eye_open_ri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eye_open_from_dhu_eye_visible_le
  {
    size_t item_size = sizeof(ros_message.eye_open_from_dhu_eye_visible_le);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eye_open_from_dhu_eye_visible_ri
  {
    size_t item_size = sizeof(ros_message.eye_open_from_dhu_eye_visible_ri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eye_open_from_dhu_face_visible
  {
    size_t item_size = sizeof(ros_message.eye_open_from_dhu_face_visible);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: snsr_drvr_pfmnc_sts_from_dhu
  {
    size_t item_size = sizeof(ros_message.snsr_drvr_pfmnc_sts_from_dhu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voice_brst_mod
  {
    size_t item_size = sizeof(ros_message.voice_brst_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_lane_chg_style_sw_sts
  {
    size_t item_size = sizeof(ros_message.auto_lane_chg_style_sw_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nop_cofm_of_lan_chag_onoff
  {
    size_t item_size = sizeof(ros_message.nop_cofm_of_lan_chag_onoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_sod_lan_chg_switch
  {
    size_t item_size = sizeof(ros_message.hmi_sod_lan_chg_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_drvr_sod_req_chg
  {
    size_t item_size = sizeof(ros_message.hmi_drvr_sod_req_chg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_upgrade_switch
  {
    size_t item_size = sizeof(ros_message.asy_noa_upgrade_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sfty_hmi_ena
  {
    size_t item_size = sizeof(ros_message.sfty_hmi_ena);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nop_remind_typ_of_chg_lane_req
  {
    size_t item_size = sizeof(ros_message.nop_remind_typ_of_chg_lane_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvr_lane_chg_aut_actv_sts
  {
    size_t item_size = sizeof(ros_message.drvr_lane_chg_aut_actv_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_lane_chg_with_navi_sw_onoff
  {
    size_t item_size = sizeof(ros_message.auto_lane_chg_with_navi_sw_onoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nav_noa_status_change_req
  {
    size_t item_size = sizeof(ros_message.nav_noa_status_change_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_camera_store_req
  {
    size_t item_size = sizeof(ros_message.prkg_camera_store_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voice_ctrl_prk
  {
    size_t item_size = sizeof(ros_message.voice_ctrl_prk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drift_prkg_req
  {
    size_t item_size = sizeof(ros_message.drift_prkg_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_drvr_sod_req_cnoa_main_page
  {
    size_t item_size = sizeof(ros_message.hmi_drvr_sod_req_cnoa_main_page);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_drvr_sod_req_cnoa_lrng
  {
    size_t item_size = sizeof(ros_message.hmi_drvr_sod_req_cnoa_lrng);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_drvr_sod_req_finish_lrng
  {
    size_t item_size = sizeof(ros_message.hmi_drvr_sod_req_finish_lrng);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_cnoa_crs_swt_on_off
  {
    size_t item_size = sizeof(ros_message.hmi_cnoa_crs_swt_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_cnoa_sod_lan_chg_swt
  {
    size_t item_size = sizeof(ros_message.hmi_cnoa_sod_lan_chg_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_cnoa_auto_lane_chg_style_sw_sts
  {
    size_t item_size = sizeof(ros_message.hmi_cnoa_auto_lane_chg_style_sw_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_cnoa_lrng_swt_on_off
  {
    size_t item_size = sizeof(ros_message.hmi_cnoa_lrng_swt_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_drvr_sod_req_contns_lrng
  {
    size_t item_size = sizeof(ros_message.hmi_drvr_sod_req_contns_lrng);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: apa_custom_prkg_req
  {
    size_t item_size = sizeof(ros_message.apa_custom_prkg_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exit_custom_prkg_req
  {
    size_t item_size = sizeof(ros_message.exit_custom_prkg_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cust_prk_slot_posn_angle_disp
  {
    size_t item_size = sizeof(ros_message.cust_prk_slot_posn_angle_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cust_prk_slot_posn_end_x1
  {
    size_t item_size = sizeof(ros_message.cust_prk_slot_posn_end_x1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cust_prk_slot_posn_end_x2
  {
    size_t item_size = sizeof(ros_message.cust_prk_slot_posn_end_x2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cust_prk_slot_posn_end_y1
  {
    size_t item_size = sizeof(ros_message.cust_prk_slot_posn_end_y1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cust_prk_slot_posn_end_y2
  {
    size_t item_size = sizeof(ros_message.cust_prk_slot_posn_end_y2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cust_prk_slot_posn_start_x1
  {
    size_t item_size = sizeof(ros_message.cust_prk_slot_posn_start_x1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cust_prk_slot_posn_start_x2
  {
    size_t item_size = sizeof(ros_message.cust_prk_slot_posn_start_x2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cust_prk_slot_posn_start_y1
  {
    size_t item_size = sizeof(ros_message.cust_prk_slot_posn_start_y1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cust_prk_slot_posn_start_y2
  {
    size_t item_size = sizeof(ros_message.cust_prk_slot_posn_start_y2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: screem_oper
  {
    size_t item_size = sizeof(ros_message.screem_oper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hpa_max_swt
  {
    size_t item_size = sizeof(ros_message.hpa_max_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rpa_select_par_in
  {
    size_t item_size = sizeof(ros_message.rpa_select_par_in);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: frnt_and_re_prkg_in_swt
  {
    size_t item_size = sizeof(ros_message.frnt_and_re_prkg_in_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: app_map_info_to_stm

  current_alignment +=
    deva_function_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.app_map_info_to_stm, current_alignment);
  // Member: app_to_stm_data

  current_alignment +=
    deva_function_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.app_to_stm_data, current_alignment);
  // Member: aut_prkg_hand_slot_nr_req_topo_slot_id
  {
    size_t item_size = sizeof(ros_message.aut_prkg_hand_slot_nr_req_topo_slot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_prkg_hand_slot_nr_req_topo_slot_status
  {
    size_t item_size = sizeof(ros_message.aut_prkg_hand_slot_nr_req_topo_slot_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_prkg_select_entrance
  {
    size_t item_size = sizeof(ros_message.aut_prkg_select_entrance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_cls_pop
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_cls_pop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_cover_results
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_cover_results);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_select_d2d
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_select_d2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_topo_flr
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_topo_flr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d2d_p_icon_clicked
  {
    size_t item_size = sizeof(ros_message.d2d_p_icon_clicked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d2d_route_push_button_resp
  {
    size_t item_size = sizeof(ros_message.d2d_route_push_button_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_etc_traffic_sw_sts
  {
    size_t item_size = sizeof(ros_message.hmi_etc_traffic_sw_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_lrng_sts_hpa_lrng_sts
  {
    size_t item_size = sizeof(ros_message.prkg_lrng_sts_hpa_lrng_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_slot_typ_select
  {
    size_t item_size = sizeof(ros_message.prkg_slot_typ_select);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_aut_drvg_li_swt
  {
    size_t item_size = sizeof(ros_message.asy_aut_drvg_li_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_resp_map_id_list1
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_resp_map_id_list1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_resp_map_id_list2
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_resp_map_id_list2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_resp_map_id_list3
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_resp_map_id_list3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_resp_map_id_list4
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_resp_map_id_list4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_resp_map_id_result
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_resp_map_id_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_syncn_map_id_list1
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_syncn_map_id_list1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_syncn_map_id_list2
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_syncn_map_id_list2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_syncn_map_id_list3
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_syncn_map_id_list3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_syncn_map_id_list4
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_syncn_map_id_list4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_syncn_map_syncn
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_syncn_map_syncn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
max_serialized_size_UIToSTMData(
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

  // Member: drvr_assc_sys_btn_push
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: swt_disp_on_and_off_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nav_frnt_actv_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ihu_fail
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: scene_mod_seld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: other_ar_psd_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_rpa_req_rspa_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_rpa_req_rpa_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_rpa_req_mob_dev_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rem_straight_prkg_assi_seln_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_touch_coorn_req_touch_eve_typ
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_spd_indcd_veh_spd_indcd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: sm_aut_prkg_slot_nr_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_prkg_in_or_out_and_cncl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_prkg_intrpt_reld_btn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_prkg_fct_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_aut_actv_prkg_fct_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: full_screen_btn_push
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_sel_push_apa_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_hpa_soft_butn_enter_rq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_map_build_rq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_map_save_rq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_map_select_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_drvr_assc_sys_park_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: map_build_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_map_src_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_map_oper_req_map_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_l1_btn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_experience_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lo_spd_drvg_assi_sho_push_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_sho_dst_push_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_picture_upload_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_ins_btn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prof_pen_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_map_oper_req2_map_type2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_map_oper_req2_map_list1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_oper_req2_map_list2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_oper_req2_map_list3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_oper_req2_map_list4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_l2_pop_btn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: voice_active_adcu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_tr_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_unlck_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_lock_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_tr_sts1_key_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_unlck_sts1_key_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_lock_sts1_key_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: voice_ctrl_brk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lo_spd_drvg_assi_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_frnt_or_re_select
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tracking_back_assi_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_emg_brk_sys_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_prkg_voice_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lsda_notif_push_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: monr_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvr_assc_wisdom_btn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: scenario_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_prkg_voice_typ
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mai_setting
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_prkg_hand_slot_nr_req
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

  // Member: drvr_acc_fct_deactvn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvr_acc_rs_set_spd_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: set_spd_for_crs_ctrl_fct_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: acc_fusn_trfc_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: crs_ctrl_ti_gap_adj_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ve_spd_indcd_unit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_spd_indcd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: drv_mod_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_flts_sts_from_dhu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvr_dec_sts_from_dhu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eye_gaze_zone
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eye_gaze_zone_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: eye_on_road_from_dhu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eye_open_from_dhu_eye_open_deg_le
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: eye_open_from_dhu_eye_open_deg_ri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: eye_open_from_dhu_eye_open_le
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eye_open_from_dhu_eye_open_ri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eye_open_from_dhu_eye_visible_le
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eye_open_from_dhu_eye_visible_ri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eye_open_from_dhu_face_visible
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: snsr_drvr_pfmnc_sts_from_dhu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: voice_brst_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: auto_lane_chg_style_sw_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nop_cofm_of_lan_chag_onoff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_sod_lan_chg_switch
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

  // Member: asy_noa_upgrade_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sfty_hmi_ena
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nop_remind_typ_of_chg_lane_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvr_lane_chg_aut_actv_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: auto_lane_chg_with_navi_sw_onoff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nav_noa_status_change_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_camera_store_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: voice_ctrl_prk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drift_prkg_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_drvr_sod_req_cnoa_main_page
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_drvr_sod_req_cnoa_lrng
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_drvr_sod_req_finish_lrng
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_cnoa_crs_swt_on_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_cnoa_sod_lan_chg_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_cnoa_auto_lane_chg_style_sw_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_cnoa_lrng_swt_on_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_drvr_sod_req_contns_lrng
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: apa_custom_prkg_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: exit_custom_prkg_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cust_prk_slot_posn_angle_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cust_prk_slot_posn_end_x1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cust_prk_slot_posn_end_x2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cust_prk_slot_posn_end_y1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cust_prk_slot_posn_end_y2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cust_prk_slot_posn_start_x1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cust_prk_slot_posn_start_x2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cust_prk_slot_posn_start_y1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cust_prk_slot_posn_start_y2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: screem_oper
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hpa_max_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rpa_select_par_in
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: frnt_and_re_prkg_in_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: app_map_info_to_stm
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_function_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AppMapInfoToStmStruct(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: app_to_stm_data
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_function_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_APPToStmDataStruct(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: aut_prkg_hand_slot_nr_req_topo_slot_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_prkg_hand_slot_nr_req_topo_slot_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_prkg_select_entrance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_cls_pop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_cover_results
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_select_d2d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_topo_flr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: d2d_p_icon_clicked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: d2d_route_push_button_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_etc_traffic_sw_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_lrng_sts_hpa_lrng_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_slot_typ_select
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_aut_drvg_li_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_map_resp_map_id_list1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_resp_map_id_list2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_resp_map_id_list3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_resp_map_id_list4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_resp_map_id_result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_map_syncn_map_id_list1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_syncn_map_id_list2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_syncn_map_id_list3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_syncn_map_id_list4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_syncn_map_syncn
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
    using DataType = deva_function_msgs::msg::UIToSTMData;
    is_plain =
      (
      offsetof(DataType, aut_valt_prkg_map_syncn_map_syncn) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _UIToSTMData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::UIToSTMData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UIToSTMData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::UIToSTMData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UIToSTMData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::UIToSTMData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UIToSTMData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_UIToSTMData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _UIToSTMData__callbacks = {
  "deva_function_msgs::msg",
  "UIToSTMData",
  _UIToSTMData__cdr_serialize,
  _UIToSTMData__cdr_deserialize,
  _UIToSTMData__get_serialized_size,
  _UIToSTMData__max_serialized_size
};

static rosidl_message_type_support_t _UIToSTMData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UIToSTMData__callbacks,
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
get_message_type_support_handle<deva_function_msgs::msg::UIToSTMData>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_UIToSTMData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, UIToSTMData)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_UIToSTMData__handle;
}

#ifdef __cplusplus
}
#endif
