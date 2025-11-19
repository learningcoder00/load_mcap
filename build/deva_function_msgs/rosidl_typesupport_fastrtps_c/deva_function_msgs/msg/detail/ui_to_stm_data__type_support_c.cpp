// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_function_msgs:msg/UIToSTMData.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/ui_to_stm_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_function_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_function_msgs/msg/detail/ui_to_stm_data__struct.h"
#include "deva_function_msgs/msg/detail/ui_to_stm_data__functions.h"
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
#include "deva_function_msgs/msg/detail/app_map_info_to_stm_struct__functions.h"  // app_map_info_to_stm
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__functions.h"  // app_to_stm_data

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
size_t get_serialized_size_deva_function_msgs__msg__APPToStmDataStruct(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_function_msgs__msg__APPToStmDataStruct(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, APPToStmDataStruct)();
size_t get_serialized_size_deva_function_msgs__msg__AppMapInfoToStmStruct(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_function_msgs__msg__AppMapInfoToStmStruct(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, AppMapInfoToStmStruct)();


using _UIToSTMData__ros_msg_type = deva_function_msgs__msg__UIToSTMData;

static bool _UIToSTMData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UIToSTMData__ros_msg_type * ros_message = static_cast<const _UIToSTMData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: drvr_assc_sys_btn_push
  {
    cdr << ros_message->drvr_assc_sys_btn_push;
  }

  // Field name: swt_disp_on_and_off_req
  {
    cdr << ros_message->swt_disp_on_and_off_req;
  }

  // Field name: nav_frnt_actv_sts
  {
    cdr << ros_message->nav_frnt_actv_sts;
  }

  // Field name: ihu_fail
  {
    cdr << ros_message->ihu_fail;
  }

  // Field name: scene_mod_seld
  {
    cdr << ros_message->scene_mod_seld;
  }

  // Field name: other_ar_psd_req
  {
    cdr << ros_message->other_ar_psd_req;
  }

  // Field name: mob_dev_rpa_req_rspa_ctrl
  {
    cdr << ros_message->mob_dev_rpa_req_rspa_ctrl;
  }

  // Field name: mob_dev_rpa_req_rpa_req
  {
    cdr << ros_message->mob_dev_rpa_req_rpa_req;
  }

  // Field name: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    cdr << ros_message->mob_dev_rpa_req_rpa_out_mode_sub_t;
  }

  // Field name: mob_dev_rpa_req_mob_dev_sts
  {
    cdr << ros_message->mob_dev_rpa_req_mob_dev_sts;
  }

  // Field name: rem_straight_prkg_assi_seln_req
  {
    cdr << ros_message->rem_straight_prkg_assi_seln_req;
  }

  // Field name: prkg_touch_coorn_req_touch_eve_typ
  {
    cdr << ros_message->prkg_touch_coorn_req_touch_eve_typ;
  }

  // Field name: veh_spd_indcd_veh_spd_indcd
  {
    cdr << ros_message->veh_spd_indcd_veh_spd_indcd;
  }

  // Field name: sm_aut_prkg_slot_nr_req
  {
    cdr << ros_message->sm_aut_prkg_slot_nr_req;
  }

  // Field name: sm_prkg_in_or_out_and_cncl
  {
    cdr << ros_message->sm_prkg_in_or_out_and_cncl;
  }

  // Field name: sm_prkg_intrpt_reld_btn
  {
    cdr << ros_message->sm_prkg_intrpt_reld_btn;
  }

  // Field name: sm_prkg_fct_swt
  {
    cdr << ros_message->sm_prkg_fct_swt;
  }

  // Field name: sm_aut_actv_prkg_fct_swt
  {
    cdr << ros_message->sm_aut_actv_prkg_fct_swt;
  }

  // Field name: full_screen_btn_push
  {
    cdr << ros_message->full_screen_btn_push;
  }

  // Field name: sm_sel_push_apa_info
  {
    cdr << ros_message->sm_sel_push_apa_info;
  }

  // Field name: sm_hpa_soft_butn_enter_rq
  {
    cdr << ros_message->sm_hpa_soft_butn_enter_rq;
  }

  // Field name: sm_map_build_rq
  {
    cdr << ros_message->sm_map_build_rq;
  }

  // Field name: sm_map_save_rq
  {
    cdr << ros_message->sm_map_save_rq;
  }

  // Field name: sm_map_select_id
  {
    cdr << ros_message->sm_map_select_id;
  }

  // Field name: sm_drvr_assc_sys_park_mod
  {
    cdr << ros_message->sm_drvr_assc_sys_park_mod;
  }

  // Field name: map_build_sts
  {
    cdr << ros_message->map_build_sts;
  }

  // Field name: aut_valt_prkg_map_src_req
  {
    cdr << ros_message->aut_valt_prkg_map_src_req;
  }

  // Field name: aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  {
    cdr << ros_message->aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req;
  }

  // Field name: aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  {
    cdr << ros_message->aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req;
  }

  // Field name: aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  {
    cdr << ros_message->aut_valt_prkg_l2_btn_req_setting_voice_btn_req;
  }

  // Field name: aut_valt_prkg_map_oper_req_map_type
  {
    cdr << ros_message->aut_valt_prkg_map_oper_req_map_type;
  }

  // Field name: aut_valt_prkg_l1_btn_req
  {
    cdr << ros_message->aut_valt_prkg_l1_btn_req;
  }

  // Field name: aut_valt_prkg_experience_resp
  {
    cdr << ros_message->aut_valt_prkg_experience_resp;
  }

  // Field name: lo_spd_drvg_assi_sho_push_resp
  {
    cdr << ros_message->lo_spd_drvg_assi_sho_push_resp;
  }

  // Field name: aut_valt_prkg_sho_dst_push_swt
  {
    cdr << ros_message->aut_valt_prkg_sho_dst_push_swt;
  }

  // Field name: aut_valt_prkg_picture_upload_swt
  {
    cdr << ros_message->aut_valt_prkg_picture_upload_swt;
  }

  // Field name: aut_valt_prkg_ins_btn_req
  {
    cdr << ros_message->aut_valt_prkg_ins_btn_req;
  }

  // Field name: aut_valt_prkg_swt
  {
    cdr << ros_message->aut_valt_prkg_swt;
  }

  // Field name: prof_pen_sts1
  {
    cdr << ros_message->prof_pen_sts1;
  }

  // Field name: aut_valt_prkg_map_oper_req2_map_type2
  {
    cdr << ros_message->aut_valt_prkg_map_oper_req2_map_type2;
  }

  // Field name: aut_valt_prkg_map_oper_req2_map_list1
  {
    cdr << ros_message->aut_valt_prkg_map_oper_req2_map_list1;
  }

  // Field name: aut_valt_prkg_map_oper_req2_map_list2
  {
    cdr << ros_message->aut_valt_prkg_map_oper_req2_map_list2;
  }

  // Field name: aut_valt_prkg_map_oper_req2_map_list3
  {
    cdr << ros_message->aut_valt_prkg_map_oper_req2_map_list3;
  }

  // Field name: aut_valt_prkg_map_oper_req2_map_list4
  {
    cdr << ros_message->aut_valt_prkg_map_oper_req2_map_list4;
  }

  // Field name: aut_valt_prkg_l2_pop_btn_req
  {
    cdr << ros_message->aut_valt_prkg_l2_pop_btn_req;
  }

  // Field name: voice_active_adcu
  {
    cdr << ros_message->voice_active_adcu;
  }

  // Field name: btn_tr_sts1
  {
    cdr << ros_message->btn_tr_sts1;
  }

  // Field name: btn_unlck_sts1
  {
    cdr << ros_message->btn_unlck_sts1;
  }

  // Field name: btn_lock_sts1
  {
    cdr << ros_message->btn_lock_sts1;
  }

  // Field name: btn_tr_sts1_key_id
  {
    cdr << ros_message->btn_tr_sts1_key_id;
  }

  // Field name: btn_unlck_sts1_key_id
  {
    cdr << ros_message->btn_unlck_sts1_key_id;
  }

  // Field name: btn_lock_sts1_key_id
  {
    cdr << ros_message->btn_lock_sts1_key_id;
  }

  // Field name: voice_ctrl_brk
  {
    cdr << ros_message->voice_ctrl_brk;
  }

  // Field name: lo_spd_drvg_assi_swt
  {
    cdr << ros_message->lo_spd_drvg_assi_swt;
  }

  // Field name: prkg_frnt_or_re_select
  {
    cdr << ros_message->prkg_frnt_or_re_select;
  }

  // Field name: tracking_back_assi_swt
  {
    cdr << ros_message->tracking_back_assi_swt;
  }

  // Field name: prkg_emg_brk_sys_swt
  {
    cdr << ros_message->prkg_emg_brk_sys_swt;
  }

  // Field name: aut_prkg_voice_swt
  {
    cdr << ros_message->aut_prkg_voice_swt;
  }

  // Field name: lsda_notif_push_req
  {
    cdr << ros_message->lsda_notif_push_req;
  }

  // Field name: monr_sys_sts
  {
    cdr << ros_message->monr_sys_sts;
  }

  // Field name: drvr_assc_wisdom_btn
  {
    cdr << ros_message->drvr_assc_wisdom_btn;
  }

  // Field name: scenario_mod
  {
    cdr << ros_message->scenario_mod;
  }

  // Field name: aut_prkg_voice_typ
  {
    cdr << ros_message->aut_prkg_voice_typ;
  }

  // Field name: mai_setting
  {
    cdr << ros_message->mai_setting;
  }

  // Field name: aut_prkg_hand_slot_nr_req
  {
    cdr << ros_message->aut_prkg_hand_slot_nr_req;
  }

  // Field name: asy_aut_drv_ctrl_typ_dim_req
  {
    cdr << ros_message->asy_aut_drv_ctrl_typ_dim_req;
  }

  // Field name: hmi_drvr_sod_req_pilot
  {
    cdr << ros_message->hmi_drvr_sod_req_pilot;
  }

  // Field name: drvr_crs_ctrl_fct_actv_req
  {
    cdr << ros_message->drvr_crs_ctrl_fct_actv_req;
  }

  // Field name: drvr_acc_fct_deactvn_req
  {
    cdr << ros_message->drvr_acc_fct_deactvn_req;
  }

  // Field name: drvr_acc_rs_set_spd_req
  {
    cdr << ros_message->drvr_acc_rs_set_spd_req;
  }

  // Field name: set_spd_for_crs_ctrl_fct_active
  {
    cdr << ros_message->set_spd_for_crs_ctrl_fct_active;
  }

  // Field name: acc_fusn_trfc_req
  {
    cdr << ros_message->acc_fusn_trfc_req;
  }

  // Field name: crs_ctrl_ti_gap_adj_req
  {
    cdr << ros_message->crs_ctrl_ti_gap_adj_req;
  }

  // Field name: ve_spd_indcd_unit
  {
    cdr << ros_message->ve_spd_indcd_unit;
  }

  // Field name: veh_spd_indcd
  {
    cdr << ros_message->veh_spd_indcd;
  }

  // Field name: drv_mod_req
  {
    cdr << ros_message->drv_mod_req;
  }

  // Field name: cam_flts_sts_from_dhu
  {
    cdr << ros_message->cam_flts_sts_from_dhu;
  }

  // Field name: drvr_dec_sts_from_dhu
  {
    cdr << ros_message->drvr_dec_sts_from_dhu;
  }

  // Field name: eye_gaze_zone
  {
    cdr << ros_message->eye_gaze_zone;
  }

  // Field name: eye_gaze_zone_time
  {
    cdr << ros_message->eye_gaze_zone_time;
  }

  // Field name: eye_on_road_from_dhu
  {
    cdr << ros_message->eye_on_road_from_dhu;
  }

  // Field name: eye_open_from_dhu_eye_open_deg_le
  {
    cdr << ros_message->eye_open_from_dhu_eye_open_deg_le;
  }

  // Field name: eye_open_from_dhu_eye_open_deg_ri
  {
    cdr << ros_message->eye_open_from_dhu_eye_open_deg_ri;
  }

  // Field name: eye_open_from_dhu_eye_open_le
  {
    cdr << ros_message->eye_open_from_dhu_eye_open_le;
  }

  // Field name: eye_open_from_dhu_eye_open_ri
  {
    cdr << ros_message->eye_open_from_dhu_eye_open_ri;
  }

  // Field name: eye_open_from_dhu_eye_visible_le
  {
    cdr << ros_message->eye_open_from_dhu_eye_visible_le;
  }

  // Field name: eye_open_from_dhu_eye_visible_ri
  {
    cdr << ros_message->eye_open_from_dhu_eye_visible_ri;
  }

  // Field name: eye_open_from_dhu_face_visible
  {
    cdr << ros_message->eye_open_from_dhu_face_visible;
  }

  // Field name: snsr_drvr_pfmnc_sts_from_dhu
  {
    cdr << ros_message->snsr_drvr_pfmnc_sts_from_dhu;
  }

  // Field name: voice_brst_mod
  {
    cdr << ros_message->voice_brst_mod;
  }

  // Field name: auto_lane_chg_style_sw_sts
  {
    cdr << ros_message->auto_lane_chg_style_sw_sts;
  }

  // Field name: nop_cofm_of_lan_chag_onoff
  {
    cdr << ros_message->nop_cofm_of_lan_chag_onoff;
  }

  // Field name: hmi_sod_lan_chg_switch
  {
    cdr << ros_message->hmi_sod_lan_chg_switch;
  }

  // Field name: hmi_drvr_sod_req_chg
  {
    cdr << ros_message->hmi_drvr_sod_req_chg;
  }

  // Field name: asy_noa_upgrade_switch
  {
    cdr << ros_message->asy_noa_upgrade_switch;
  }

  // Field name: sfty_hmi_ena
  {
    cdr << ros_message->sfty_hmi_ena;
  }

  // Field name: nop_remind_typ_of_chg_lane_req
  {
    cdr << ros_message->nop_remind_typ_of_chg_lane_req;
  }

  // Field name: drvr_lane_chg_aut_actv_sts
  {
    cdr << ros_message->drvr_lane_chg_aut_actv_sts;
  }

  // Field name: auto_lane_chg_with_navi_sw_onoff
  {
    cdr << ros_message->auto_lane_chg_with_navi_sw_onoff;
  }

  // Field name: nav_noa_status_change_req
  {
    cdr << ros_message->nav_noa_status_change_req;
  }

  // Field name: prkg_camera_store_req
  {
    cdr << ros_message->prkg_camera_store_req;
  }

  // Field name: voice_ctrl_prk
  {
    cdr << ros_message->voice_ctrl_prk;
  }

  // Field name: drift_prkg_req
  {
    cdr << ros_message->drift_prkg_req;
  }

  // Field name: hmi_drvr_sod_req_cnoa_main_page
  {
    cdr << ros_message->hmi_drvr_sod_req_cnoa_main_page;
  }

  // Field name: hmi_drvr_sod_req_cnoa_lrng
  {
    cdr << ros_message->hmi_drvr_sod_req_cnoa_lrng;
  }

  // Field name: hmi_drvr_sod_req_finish_lrng
  {
    cdr << ros_message->hmi_drvr_sod_req_finish_lrng;
  }

  // Field name: hmi_cnoa_crs_swt_on_off
  {
    cdr << ros_message->hmi_cnoa_crs_swt_on_off;
  }

  // Field name: hmi_cnoa_sod_lan_chg_swt
  {
    cdr << ros_message->hmi_cnoa_sod_lan_chg_swt;
  }

  // Field name: hmi_cnoa_auto_lane_chg_style_sw_sts
  {
    cdr << ros_message->hmi_cnoa_auto_lane_chg_style_sw_sts;
  }

  // Field name: hmi_cnoa_lrng_swt_on_off
  {
    cdr << ros_message->hmi_cnoa_lrng_swt_on_off;
  }

  // Field name: hmi_drvr_sod_req_contns_lrng
  {
    cdr << ros_message->hmi_drvr_sod_req_contns_lrng;
  }

  // Field name: apa_custom_prkg_req
  {
    cdr << ros_message->apa_custom_prkg_req;
  }

  // Field name: exit_custom_prkg_req
  {
    cdr << ros_message->exit_custom_prkg_req;
  }

  // Field name: cust_prk_slot_posn_angle_disp
  {
    cdr << ros_message->cust_prk_slot_posn_angle_disp;
  }

  // Field name: cust_prk_slot_posn_end_x1
  {
    cdr << ros_message->cust_prk_slot_posn_end_x1;
  }

  // Field name: cust_prk_slot_posn_end_x2
  {
    cdr << ros_message->cust_prk_slot_posn_end_x2;
  }

  // Field name: cust_prk_slot_posn_end_y1
  {
    cdr << ros_message->cust_prk_slot_posn_end_y1;
  }

  // Field name: cust_prk_slot_posn_end_y2
  {
    cdr << ros_message->cust_prk_slot_posn_end_y2;
  }

  // Field name: cust_prk_slot_posn_start_x1
  {
    cdr << ros_message->cust_prk_slot_posn_start_x1;
  }

  // Field name: cust_prk_slot_posn_start_x2
  {
    cdr << ros_message->cust_prk_slot_posn_start_x2;
  }

  // Field name: cust_prk_slot_posn_start_y1
  {
    cdr << ros_message->cust_prk_slot_posn_start_y1;
  }

  // Field name: cust_prk_slot_posn_start_y2
  {
    cdr << ros_message->cust_prk_slot_posn_start_y2;
  }

  // Field name: screem_oper
  {
    cdr << ros_message->screem_oper;
  }

  // Field name: hpa_max_swt
  {
    cdr << (ros_message->hpa_max_swt ? true : false);
  }

  // Field name: rpa_select_par_in
  {
    cdr << ros_message->rpa_select_par_in;
  }

  // Field name: frnt_and_re_prkg_in_swt
  {
    cdr << ros_message->frnt_and_re_prkg_in_swt;
  }

  // Field name: app_map_info_to_stm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, AppMapInfoToStmStruct
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->app_map_info_to_stm, cdr))
    {
      return false;
    }
  }

  // Field name: app_to_stm_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, APPToStmDataStruct
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->app_to_stm_data, cdr))
    {
      return false;
    }
  }

  // Field name: aut_prkg_hand_slot_nr_req_topo_slot_id
  {
    cdr << ros_message->aut_prkg_hand_slot_nr_req_topo_slot_id;
  }

  // Field name: aut_prkg_hand_slot_nr_req_topo_slot_status
  {
    cdr << ros_message->aut_prkg_hand_slot_nr_req_topo_slot_status;
  }

  // Field name: aut_prkg_select_entrance
  {
    cdr << ros_message->aut_prkg_select_entrance;
  }

  // Field name: aut_valt_prkg_cls_pop
  {
    cdr << ros_message->aut_valt_prkg_cls_pop;
  }

  // Field name: aut_valt_prkg_cover_results
  {
    cdr << ros_message->aut_valt_prkg_cover_results;
  }

  // Field name: aut_valt_prkg_select_d2d
  {
    cdr << ros_message->aut_valt_prkg_select_d2d;
  }

  // Field name: aut_valt_prkg_topo_flr
  {
    cdr << ros_message->aut_valt_prkg_topo_flr;
  }

  // Field name: d2d_p_icon_clicked
  {
    cdr << ros_message->d2d_p_icon_clicked;
  }

  // Field name: d2d_route_push_button_resp
  {
    cdr << ros_message->d2d_route_push_button_resp;
  }

  // Field name: hmi_etc_traffic_sw_sts
  {
    cdr << ros_message->hmi_etc_traffic_sw_sts;
  }

  // Field name: prkg_lrng_sts_hpa_lrng_sts
  {
    cdr << ros_message->prkg_lrng_sts_hpa_lrng_sts;
  }

  // Field name: prkg_slot_typ_select
  {
    cdr << ros_message->prkg_slot_typ_select;
  }

  // Field name: asy_aut_drvg_li_swt
  {
    cdr << ros_message->asy_aut_drvg_li_swt;
  }

  // Field name: aut_valt_prkg_map_resp_map_id_list1
  {
    cdr << ros_message->aut_valt_prkg_map_resp_map_id_list1;
  }

  // Field name: aut_valt_prkg_map_resp_map_id_list2
  {
    cdr << ros_message->aut_valt_prkg_map_resp_map_id_list2;
  }

  // Field name: aut_valt_prkg_map_resp_map_id_list3
  {
    cdr << ros_message->aut_valt_prkg_map_resp_map_id_list3;
  }

  // Field name: aut_valt_prkg_map_resp_map_id_list4
  {
    cdr << ros_message->aut_valt_prkg_map_resp_map_id_list4;
  }

  // Field name: aut_valt_prkg_map_resp_map_id_result
  {
    cdr << ros_message->aut_valt_prkg_map_resp_map_id_result;
  }

  // Field name: aut_valt_prkg_map_syncn_map_id_list1
  {
    cdr << ros_message->aut_valt_prkg_map_syncn_map_id_list1;
  }

  // Field name: aut_valt_prkg_map_syncn_map_id_list2
  {
    cdr << ros_message->aut_valt_prkg_map_syncn_map_id_list2;
  }

  // Field name: aut_valt_prkg_map_syncn_map_id_list3
  {
    cdr << ros_message->aut_valt_prkg_map_syncn_map_id_list3;
  }

  // Field name: aut_valt_prkg_map_syncn_map_id_list4
  {
    cdr << ros_message->aut_valt_prkg_map_syncn_map_id_list4;
  }

  // Field name: aut_valt_prkg_map_syncn_map_syncn
  {
    cdr << ros_message->aut_valt_prkg_map_syncn_map_syncn;
  }

  return true;
}

static bool _UIToSTMData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UIToSTMData__ros_msg_type * ros_message = static_cast<_UIToSTMData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: drvr_assc_sys_btn_push
  {
    cdr >> ros_message->drvr_assc_sys_btn_push;
  }

  // Field name: swt_disp_on_and_off_req
  {
    cdr >> ros_message->swt_disp_on_and_off_req;
  }

  // Field name: nav_frnt_actv_sts
  {
    cdr >> ros_message->nav_frnt_actv_sts;
  }

  // Field name: ihu_fail
  {
    cdr >> ros_message->ihu_fail;
  }

  // Field name: scene_mod_seld
  {
    cdr >> ros_message->scene_mod_seld;
  }

  // Field name: other_ar_psd_req
  {
    cdr >> ros_message->other_ar_psd_req;
  }

  // Field name: mob_dev_rpa_req_rspa_ctrl
  {
    cdr >> ros_message->mob_dev_rpa_req_rspa_ctrl;
  }

  // Field name: mob_dev_rpa_req_rpa_req
  {
    cdr >> ros_message->mob_dev_rpa_req_rpa_req;
  }

  // Field name: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    cdr >> ros_message->mob_dev_rpa_req_rpa_out_mode_sub_t;
  }

  // Field name: mob_dev_rpa_req_mob_dev_sts
  {
    cdr >> ros_message->mob_dev_rpa_req_mob_dev_sts;
  }

  // Field name: rem_straight_prkg_assi_seln_req
  {
    cdr >> ros_message->rem_straight_prkg_assi_seln_req;
  }

  // Field name: prkg_touch_coorn_req_touch_eve_typ
  {
    cdr >> ros_message->prkg_touch_coorn_req_touch_eve_typ;
  }

  // Field name: veh_spd_indcd_veh_spd_indcd
  {
    cdr >> ros_message->veh_spd_indcd_veh_spd_indcd;
  }

  // Field name: sm_aut_prkg_slot_nr_req
  {
    cdr >> ros_message->sm_aut_prkg_slot_nr_req;
  }

  // Field name: sm_prkg_in_or_out_and_cncl
  {
    cdr >> ros_message->sm_prkg_in_or_out_and_cncl;
  }

  // Field name: sm_prkg_intrpt_reld_btn
  {
    cdr >> ros_message->sm_prkg_intrpt_reld_btn;
  }

  // Field name: sm_prkg_fct_swt
  {
    cdr >> ros_message->sm_prkg_fct_swt;
  }

  // Field name: sm_aut_actv_prkg_fct_swt
  {
    cdr >> ros_message->sm_aut_actv_prkg_fct_swt;
  }

  // Field name: full_screen_btn_push
  {
    cdr >> ros_message->full_screen_btn_push;
  }

  // Field name: sm_sel_push_apa_info
  {
    cdr >> ros_message->sm_sel_push_apa_info;
  }

  // Field name: sm_hpa_soft_butn_enter_rq
  {
    cdr >> ros_message->sm_hpa_soft_butn_enter_rq;
  }

  // Field name: sm_map_build_rq
  {
    cdr >> ros_message->sm_map_build_rq;
  }

  // Field name: sm_map_save_rq
  {
    cdr >> ros_message->sm_map_save_rq;
  }

  // Field name: sm_map_select_id
  {
    cdr >> ros_message->sm_map_select_id;
  }

  // Field name: sm_drvr_assc_sys_park_mod
  {
    cdr >> ros_message->sm_drvr_assc_sys_park_mod;
  }

  // Field name: map_build_sts
  {
    cdr >> ros_message->map_build_sts;
  }

  // Field name: aut_valt_prkg_map_src_req
  {
    cdr >> ros_message->aut_valt_prkg_map_src_req;
  }

  // Field name: aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  {
    cdr >> ros_message->aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req;
  }

  // Field name: aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  {
    cdr >> ros_message->aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req;
  }

  // Field name: aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  {
    cdr >> ros_message->aut_valt_prkg_l2_btn_req_setting_voice_btn_req;
  }

  // Field name: aut_valt_prkg_map_oper_req_map_type
  {
    cdr >> ros_message->aut_valt_prkg_map_oper_req_map_type;
  }

  // Field name: aut_valt_prkg_l1_btn_req
  {
    cdr >> ros_message->aut_valt_prkg_l1_btn_req;
  }

  // Field name: aut_valt_prkg_experience_resp
  {
    cdr >> ros_message->aut_valt_prkg_experience_resp;
  }

  // Field name: lo_spd_drvg_assi_sho_push_resp
  {
    cdr >> ros_message->lo_spd_drvg_assi_sho_push_resp;
  }

  // Field name: aut_valt_prkg_sho_dst_push_swt
  {
    cdr >> ros_message->aut_valt_prkg_sho_dst_push_swt;
  }

  // Field name: aut_valt_prkg_picture_upload_swt
  {
    cdr >> ros_message->aut_valt_prkg_picture_upload_swt;
  }

  // Field name: aut_valt_prkg_ins_btn_req
  {
    cdr >> ros_message->aut_valt_prkg_ins_btn_req;
  }

  // Field name: aut_valt_prkg_swt
  {
    cdr >> ros_message->aut_valt_prkg_swt;
  }

  // Field name: prof_pen_sts1
  {
    cdr >> ros_message->prof_pen_sts1;
  }

  // Field name: aut_valt_prkg_map_oper_req2_map_type2
  {
    cdr >> ros_message->aut_valt_prkg_map_oper_req2_map_type2;
  }

  // Field name: aut_valt_prkg_map_oper_req2_map_list1
  {
    cdr >> ros_message->aut_valt_prkg_map_oper_req2_map_list1;
  }

  // Field name: aut_valt_prkg_map_oper_req2_map_list2
  {
    cdr >> ros_message->aut_valt_prkg_map_oper_req2_map_list2;
  }

  // Field name: aut_valt_prkg_map_oper_req2_map_list3
  {
    cdr >> ros_message->aut_valt_prkg_map_oper_req2_map_list3;
  }

  // Field name: aut_valt_prkg_map_oper_req2_map_list4
  {
    cdr >> ros_message->aut_valt_prkg_map_oper_req2_map_list4;
  }

  // Field name: aut_valt_prkg_l2_pop_btn_req
  {
    cdr >> ros_message->aut_valt_prkg_l2_pop_btn_req;
  }

  // Field name: voice_active_adcu
  {
    cdr >> ros_message->voice_active_adcu;
  }

  // Field name: btn_tr_sts1
  {
    cdr >> ros_message->btn_tr_sts1;
  }

  // Field name: btn_unlck_sts1
  {
    cdr >> ros_message->btn_unlck_sts1;
  }

  // Field name: btn_lock_sts1
  {
    cdr >> ros_message->btn_lock_sts1;
  }

  // Field name: btn_tr_sts1_key_id
  {
    cdr >> ros_message->btn_tr_sts1_key_id;
  }

  // Field name: btn_unlck_sts1_key_id
  {
    cdr >> ros_message->btn_unlck_sts1_key_id;
  }

  // Field name: btn_lock_sts1_key_id
  {
    cdr >> ros_message->btn_lock_sts1_key_id;
  }

  // Field name: voice_ctrl_brk
  {
    cdr >> ros_message->voice_ctrl_brk;
  }

  // Field name: lo_spd_drvg_assi_swt
  {
    cdr >> ros_message->lo_spd_drvg_assi_swt;
  }

  // Field name: prkg_frnt_or_re_select
  {
    cdr >> ros_message->prkg_frnt_or_re_select;
  }

  // Field name: tracking_back_assi_swt
  {
    cdr >> ros_message->tracking_back_assi_swt;
  }

  // Field name: prkg_emg_brk_sys_swt
  {
    cdr >> ros_message->prkg_emg_brk_sys_swt;
  }

  // Field name: aut_prkg_voice_swt
  {
    cdr >> ros_message->aut_prkg_voice_swt;
  }

  // Field name: lsda_notif_push_req
  {
    cdr >> ros_message->lsda_notif_push_req;
  }

  // Field name: monr_sys_sts
  {
    cdr >> ros_message->monr_sys_sts;
  }

  // Field name: drvr_assc_wisdom_btn
  {
    cdr >> ros_message->drvr_assc_wisdom_btn;
  }

  // Field name: scenario_mod
  {
    cdr >> ros_message->scenario_mod;
  }

  // Field name: aut_prkg_voice_typ
  {
    cdr >> ros_message->aut_prkg_voice_typ;
  }

  // Field name: mai_setting
  {
    cdr >> ros_message->mai_setting;
  }

  // Field name: aut_prkg_hand_slot_nr_req
  {
    cdr >> ros_message->aut_prkg_hand_slot_nr_req;
  }

  // Field name: asy_aut_drv_ctrl_typ_dim_req
  {
    cdr >> ros_message->asy_aut_drv_ctrl_typ_dim_req;
  }

  // Field name: hmi_drvr_sod_req_pilot
  {
    cdr >> ros_message->hmi_drvr_sod_req_pilot;
  }

  // Field name: drvr_crs_ctrl_fct_actv_req
  {
    cdr >> ros_message->drvr_crs_ctrl_fct_actv_req;
  }

  // Field name: drvr_acc_fct_deactvn_req
  {
    cdr >> ros_message->drvr_acc_fct_deactvn_req;
  }

  // Field name: drvr_acc_rs_set_spd_req
  {
    cdr >> ros_message->drvr_acc_rs_set_spd_req;
  }

  // Field name: set_spd_for_crs_ctrl_fct_active
  {
    cdr >> ros_message->set_spd_for_crs_ctrl_fct_active;
  }

  // Field name: acc_fusn_trfc_req
  {
    cdr >> ros_message->acc_fusn_trfc_req;
  }

  // Field name: crs_ctrl_ti_gap_adj_req
  {
    cdr >> ros_message->crs_ctrl_ti_gap_adj_req;
  }

  // Field name: ve_spd_indcd_unit
  {
    cdr >> ros_message->ve_spd_indcd_unit;
  }

  // Field name: veh_spd_indcd
  {
    cdr >> ros_message->veh_spd_indcd;
  }

  // Field name: drv_mod_req
  {
    cdr >> ros_message->drv_mod_req;
  }

  // Field name: cam_flts_sts_from_dhu
  {
    cdr >> ros_message->cam_flts_sts_from_dhu;
  }

  // Field name: drvr_dec_sts_from_dhu
  {
    cdr >> ros_message->drvr_dec_sts_from_dhu;
  }

  // Field name: eye_gaze_zone
  {
    cdr >> ros_message->eye_gaze_zone;
  }

  // Field name: eye_gaze_zone_time
  {
    cdr >> ros_message->eye_gaze_zone_time;
  }

  // Field name: eye_on_road_from_dhu
  {
    cdr >> ros_message->eye_on_road_from_dhu;
  }

  // Field name: eye_open_from_dhu_eye_open_deg_le
  {
    cdr >> ros_message->eye_open_from_dhu_eye_open_deg_le;
  }

  // Field name: eye_open_from_dhu_eye_open_deg_ri
  {
    cdr >> ros_message->eye_open_from_dhu_eye_open_deg_ri;
  }

  // Field name: eye_open_from_dhu_eye_open_le
  {
    cdr >> ros_message->eye_open_from_dhu_eye_open_le;
  }

  // Field name: eye_open_from_dhu_eye_open_ri
  {
    cdr >> ros_message->eye_open_from_dhu_eye_open_ri;
  }

  // Field name: eye_open_from_dhu_eye_visible_le
  {
    cdr >> ros_message->eye_open_from_dhu_eye_visible_le;
  }

  // Field name: eye_open_from_dhu_eye_visible_ri
  {
    cdr >> ros_message->eye_open_from_dhu_eye_visible_ri;
  }

  // Field name: eye_open_from_dhu_face_visible
  {
    cdr >> ros_message->eye_open_from_dhu_face_visible;
  }

  // Field name: snsr_drvr_pfmnc_sts_from_dhu
  {
    cdr >> ros_message->snsr_drvr_pfmnc_sts_from_dhu;
  }

  // Field name: voice_brst_mod
  {
    cdr >> ros_message->voice_brst_mod;
  }

  // Field name: auto_lane_chg_style_sw_sts
  {
    cdr >> ros_message->auto_lane_chg_style_sw_sts;
  }

  // Field name: nop_cofm_of_lan_chag_onoff
  {
    cdr >> ros_message->nop_cofm_of_lan_chag_onoff;
  }

  // Field name: hmi_sod_lan_chg_switch
  {
    cdr >> ros_message->hmi_sod_lan_chg_switch;
  }

  // Field name: hmi_drvr_sod_req_chg
  {
    cdr >> ros_message->hmi_drvr_sod_req_chg;
  }

  // Field name: asy_noa_upgrade_switch
  {
    cdr >> ros_message->asy_noa_upgrade_switch;
  }

  // Field name: sfty_hmi_ena
  {
    cdr >> ros_message->sfty_hmi_ena;
  }

  // Field name: nop_remind_typ_of_chg_lane_req
  {
    cdr >> ros_message->nop_remind_typ_of_chg_lane_req;
  }

  // Field name: drvr_lane_chg_aut_actv_sts
  {
    cdr >> ros_message->drvr_lane_chg_aut_actv_sts;
  }

  // Field name: auto_lane_chg_with_navi_sw_onoff
  {
    cdr >> ros_message->auto_lane_chg_with_navi_sw_onoff;
  }

  // Field name: nav_noa_status_change_req
  {
    cdr >> ros_message->nav_noa_status_change_req;
  }

  // Field name: prkg_camera_store_req
  {
    cdr >> ros_message->prkg_camera_store_req;
  }

  // Field name: voice_ctrl_prk
  {
    cdr >> ros_message->voice_ctrl_prk;
  }

  // Field name: drift_prkg_req
  {
    cdr >> ros_message->drift_prkg_req;
  }

  // Field name: hmi_drvr_sod_req_cnoa_main_page
  {
    cdr >> ros_message->hmi_drvr_sod_req_cnoa_main_page;
  }

  // Field name: hmi_drvr_sod_req_cnoa_lrng
  {
    cdr >> ros_message->hmi_drvr_sod_req_cnoa_lrng;
  }

  // Field name: hmi_drvr_sod_req_finish_lrng
  {
    cdr >> ros_message->hmi_drvr_sod_req_finish_lrng;
  }

  // Field name: hmi_cnoa_crs_swt_on_off
  {
    cdr >> ros_message->hmi_cnoa_crs_swt_on_off;
  }

  // Field name: hmi_cnoa_sod_lan_chg_swt
  {
    cdr >> ros_message->hmi_cnoa_sod_lan_chg_swt;
  }

  // Field name: hmi_cnoa_auto_lane_chg_style_sw_sts
  {
    cdr >> ros_message->hmi_cnoa_auto_lane_chg_style_sw_sts;
  }

  // Field name: hmi_cnoa_lrng_swt_on_off
  {
    cdr >> ros_message->hmi_cnoa_lrng_swt_on_off;
  }

  // Field name: hmi_drvr_sod_req_contns_lrng
  {
    cdr >> ros_message->hmi_drvr_sod_req_contns_lrng;
  }

  // Field name: apa_custom_prkg_req
  {
    cdr >> ros_message->apa_custom_prkg_req;
  }

  // Field name: exit_custom_prkg_req
  {
    cdr >> ros_message->exit_custom_prkg_req;
  }

  // Field name: cust_prk_slot_posn_angle_disp
  {
    cdr >> ros_message->cust_prk_slot_posn_angle_disp;
  }

  // Field name: cust_prk_slot_posn_end_x1
  {
    cdr >> ros_message->cust_prk_slot_posn_end_x1;
  }

  // Field name: cust_prk_slot_posn_end_x2
  {
    cdr >> ros_message->cust_prk_slot_posn_end_x2;
  }

  // Field name: cust_prk_slot_posn_end_y1
  {
    cdr >> ros_message->cust_prk_slot_posn_end_y1;
  }

  // Field name: cust_prk_slot_posn_end_y2
  {
    cdr >> ros_message->cust_prk_slot_posn_end_y2;
  }

  // Field name: cust_prk_slot_posn_start_x1
  {
    cdr >> ros_message->cust_prk_slot_posn_start_x1;
  }

  // Field name: cust_prk_slot_posn_start_x2
  {
    cdr >> ros_message->cust_prk_slot_posn_start_x2;
  }

  // Field name: cust_prk_slot_posn_start_y1
  {
    cdr >> ros_message->cust_prk_slot_posn_start_y1;
  }

  // Field name: cust_prk_slot_posn_start_y2
  {
    cdr >> ros_message->cust_prk_slot_posn_start_y2;
  }

  // Field name: screem_oper
  {
    cdr >> ros_message->screem_oper;
  }

  // Field name: hpa_max_swt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hpa_max_swt = tmp ? true : false;
  }

  // Field name: rpa_select_par_in
  {
    cdr >> ros_message->rpa_select_par_in;
  }

  // Field name: frnt_and_re_prkg_in_swt
  {
    cdr >> ros_message->frnt_and_re_prkg_in_swt;
  }

  // Field name: app_map_info_to_stm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, AppMapInfoToStmStruct
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->app_map_info_to_stm))
    {
      return false;
    }
  }

  // Field name: app_to_stm_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, APPToStmDataStruct
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->app_to_stm_data))
    {
      return false;
    }
  }

  // Field name: aut_prkg_hand_slot_nr_req_topo_slot_id
  {
    cdr >> ros_message->aut_prkg_hand_slot_nr_req_topo_slot_id;
  }

  // Field name: aut_prkg_hand_slot_nr_req_topo_slot_status
  {
    cdr >> ros_message->aut_prkg_hand_slot_nr_req_topo_slot_status;
  }

  // Field name: aut_prkg_select_entrance
  {
    cdr >> ros_message->aut_prkg_select_entrance;
  }

  // Field name: aut_valt_prkg_cls_pop
  {
    cdr >> ros_message->aut_valt_prkg_cls_pop;
  }

  // Field name: aut_valt_prkg_cover_results
  {
    cdr >> ros_message->aut_valt_prkg_cover_results;
  }

  // Field name: aut_valt_prkg_select_d2d
  {
    cdr >> ros_message->aut_valt_prkg_select_d2d;
  }

  // Field name: aut_valt_prkg_topo_flr
  {
    cdr >> ros_message->aut_valt_prkg_topo_flr;
  }

  // Field name: d2d_p_icon_clicked
  {
    cdr >> ros_message->d2d_p_icon_clicked;
  }

  // Field name: d2d_route_push_button_resp
  {
    cdr >> ros_message->d2d_route_push_button_resp;
  }

  // Field name: hmi_etc_traffic_sw_sts
  {
    cdr >> ros_message->hmi_etc_traffic_sw_sts;
  }

  // Field name: prkg_lrng_sts_hpa_lrng_sts
  {
    cdr >> ros_message->prkg_lrng_sts_hpa_lrng_sts;
  }

  // Field name: prkg_slot_typ_select
  {
    cdr >> ros_message->prkg_slot_typ_select;
  }

  // Field name: asy_aut_drvg_li_swt
  {
    cdr >> ros_message->asy_aut_drvg_li_swt;
  }

  // Field name: aut_valt_prkg_map_resp_map_id_list1
  {
    cdr >> ros_message->aut_valt_prkg_map_resp_map_id_list1;
  }

  // Field name: aut_valt_prkg_map_resp_map_id_list2
  {
    cdr >> ros_message->aut_valt_prkg_map_resp_map_id_list2;
  }

  // Field name: aut_valt_prkg_map_resp_map_id_list3
  {
    cdr >> ros_message->aut_valt_prkg_map_resp_map_id_list3;
  }

  // Field name: aut_valt_prkg_map_resp_map_id_list4
  {
    cdr >> ros_message->aut_valt_prkg_map_resp_map_id_list4;
  }

  // Field name: aut_valt_prkg_map_resp_map_id_result
  {
    cdr >> ros_message->aut_valt_prkg_map_resp_map_id_result;
  }

  // Field name: aut_valt_prkg_map_syncn_map_id_list1
  {
    cdr >> ros_message->aut_valt_prkg_map_syncn_map_id_list1;
  }

  // Field name: aut_valt_prkg_map_syncn_map_id_list2
  {
    cdr >> ros_message->aut_valt_prkg_map_syncn_map_id_list2;
  }

  // Field name: aut_valt_prkg_map_syncn_map_id_list3
  {
    cdr >> ros_message->aut_valt_prkg_map_syncn_map_id_list3;
  }

  // Field name: aut_valt_prkg_map_syncn_map_id_list4
  {
    cdr >> ros_message->aut_valt_prkg_map_syncn_map_id_list4;
  }

  // Field name: aut_valt_prkg_map_syncn_map_syncn
  {
    cdr >> ros_message->aut_valt_prkg_map_syncn_map_syncn;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t get_serialized_size_deva_function_msgs__msg__UIToSTMData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UIToSTMData__ros_msg_type * ros_message = static_cast<const _UIToSTMData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name drvr_assc_sys_btn_push
  {
    size_t item_size = sizeof(ros_message->drvr_assc_sys_btn_push);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name swt_disp_on_and_off_req
  {
    size_t item_size = sizeof(ros_message->swt_disp_on_and_off_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nav_frnt_actv_sts
  {
    size_t item_size = sizeof(ros_message->nav_frnt_actv_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ihu_fail
  {
    size_t item_size = sizeof(ros_message->ihu_fail);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scene_mod_seld
  {
    size_t item_size = sizeof(ros_message->scene_mod_seld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name other_ar_psd_req
  {
    size_t item_size = sizeof(ros_message->other_ar_psd_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_rpa_req_rspa_ctrl
  {
    size_t item_size = sizeof(ros_message->mob_dev_rpa_req_rspa_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_rpa_req_rpa_req
  {
    size_t item_size = sizeof(ros_message->mob_dev_rpa_req_rpa_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    size_t item_size = sizeof(ros_message->mob_dev_rpa_req_rpa_out_mode_sub_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_rpa_req_mob_dev_sts
  {
    size_t item_size = sizeof(ros_message->mob_dev_rpa_req_mob_dev_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rem_straight_prkg_assi_seln_req
  {
    size_t item_size = sizeof(ros_message->rem_straight_prkg_assi_seln_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_touch_coorn_req_touch_eve_typ
  {
    size_t item_size = sizeof(ros_message->prkg_touch_coorn_req_touch_eve_typ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_spd_indcd_veh_spd_indcd
  {
    size_t item_size = sizeof(ros_message->veh_spd_indcd_veh_spd_indcd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_aut_prkg_slot_nr_req
  {
    size_t item_size = sizeof(ros_message->sm_aut_prkg_slot_nr_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_prkg_in_or_out_and_cncl
  {
    size_t item_size = sizeof(ros_message->sm_prkg_in_or_out_and_cncl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_prkg_intrpt_reld_btn
  {
    size_t item_size = sizeof(ros_message->sm_prkg_intrpt_reld_btn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_prkg_fct_swt
  {
    size_t item_size = sizeof(ros_message->sm_prkg_fct_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_aut_actv_prkg_fct_swt
  {
    size_t item_size = sizeof(ros_message->sm_aut_actv_prkg_fct_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name full_screen_btn_push
  {
    size_t item_size = sizeof(ros_message->full_screen_btn_push);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_sel_push_apa_info
  {
    size_t item_size = sizeof(ros_message->sm_sel_push_apa_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_hpa_soft_butn_enter_rq
  {
    size_t item_size = sizeof(ros_message->sm_hpa_soft_butn_enter_rq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_map_build_rq
  {
    size_t item_size = sizeof(ros_message->sm_map_build_rq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_map_save_rq
  {
    size_t item_size = sizeof(ros_message->sm_map_save_rq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_map_select_id
  {
    size_t item_size = sizeof(ros_message->sm_map_select_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_drvr_assc_sys_park_mod
  {
    size_t item_size = sizeof(ros_message->sm_drvr_assc_sys_park_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name map_build_sts
  {
    size_t item_size = sizeof(ros_message->map_build_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_src_req
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_src_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_l2_btn_req_setting_voice_btn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_oper_req_map_type
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_oper_req_map_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_l1_btn_req
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_l1_btn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_experience_resp
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_experience_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lo_spd_drvg_assi_sho_push_resp
  {
    size_t item_size = sizeof(ros_message->lo_spd_drvg_assi_sho_push_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_sho_dst_push_swt
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_sho_dst_push_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_picture_upload_swt
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_picture_upload_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_ins_btn_req
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_ins_btn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_swt
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_pen_sts1
  {
    size_t item_size = sizeof(ros_message->prof_pen_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_oper_req2_map_type2
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_oper_req2_map_type2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_oper_req2_map_list1
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_oper_req2_map_list1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_oper_req2_map_list2
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_oper_req2_map_list2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_oper_req2_map_list3
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_oper_req2_map_list3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_oper_req2_map_list4
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_oper_req2_map_list4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_l2_pop_btn_req
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_l2_pop_btn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voice_active_adcu
  {
    size_t item_size = sizeof(ros_message->voice_active_adcu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name btn_tr_sts1
  {
    size_t item_size = sizeof(ros_message->btn_tr_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name btn_unlck_sts1
  {
    size_t item_size = sizeof(ros_message->btn_unlck_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name btn_lock_sts1
  {
    size_t item_size = sizeof(ros_message->btn_lock_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name btn_tr_sts1_key_id
  {
    size_t item_size = sizeof(ros_message->btn_tr_sts1_key_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name btn_unlck_sts1_key_id
  {
    size_t item_size = sizeof(ros_message->btn_unlck_sts1_key_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name btn_lock_sts1_key_id
  {
    size_t item_size = sizeof(ros_message->btn_lock_sts1_key_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voice_ctrl_brk
  {
    size_t item_size = sizeof(ros_message->voice_ctrl_brk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lo_spd_drvg_assi_swt
  {
    size_t item_size = sizeof(ros_message->lo_spd_drvg_assi_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_frnt_or_re_select
  {
    size_t item_size = sizeof(ros_message->prkg_frnt_or_re_select);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tracking_back_assi_swt
  {
    size_t item_size = sizeof(ros_message->tracking_back_assi_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_emg_brk_sys_swt
  {
    size_t item_size = sizeof(ros_message->prkg_emg_brk_sys_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_prkg_voice_swt
  {
    size_t item_size = sizeof(ros_message->aut_prkg_voice_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lsda_notif_push_req
  {
    size_t item_size = sizeof(ros_message->lsda_notif_push_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name monr_sys_sts
  {
    size_t item_size = sizeof(ros_message->monr_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_assc_wisdom_btn
  {
    size_t item_size = sizeof(ros_message->drvr_assc_wisdom_btn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scenario_mod
  {
    size_t item_size = sizeof(ros_message->scenario_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_prkg_voice_typ
  {
    size_t item_size = sizeof(ros_message->aut_prkg_voice_typ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mai_setting
  {
    size_t item_size = sizeof(ros_message->mai_setting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_prkg_hand_slot_nr_req
  {
    size_t item_size = sizeof(ros_message->aut_prkg_hand_slot_nr_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_aut_drv_ctrl_typ_dim_req
  {
    size_t item_size = sizeof(ros_message->asy_aut_drv_ctrl_typ_dim_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_drvr_sod_req_pilot
  {
    size_t item_size = sizeof(ros_message->hmi_drvr_sod_req_pilot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_crs_ctrl_fct_actv_req
  {
    size_t item_size = sizeof(ros_message->drvr_crs_ctrl_fct_actv_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_acc_fct_deactvn_req
  {
    size_t item_size = sizeof(ros_message->drvr_acc_fct_deactvn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_acc_rs_set_spd_req
  {
    size_t item_size = sizeof(ros_message->drvr_acc_rs_set_spd_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_spd_for_crs_ctrl_fct_active
  {
    size_t item_size = sizeof(ros_message->set_spd_for_crs_ctrl_fct_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_fusn_trfc_req
  {
    size_t item_size = sizeof(ros_message->acc_fusn_trfc_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crs_ctrl_ti_gap_adj_req
  {
    size_t item_size = sizeof(ros_message->crs_ctrl_ti_gap_adj_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ve_spd_indcd_unit
  {
    size_t item_size = sizeof(ros_message->ve_spd_indcd_unit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_spd_indcd
  {
    size_t item_size = sizeof(ros_message->veh_spd_indcd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drv_mod_req
  {
    size_t item_size = sizeof(ros_message->drv_mod_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_flts_sts_from_dhu
  {
    size_t item_size = sizeof(ros_message->cam_flts_sts_from_dhu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_dec_sts_from_dhu
  {
    size_t item_size = sizeof(ros_message->drvr_dec_sts_from_dhu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eye_gaze_zone
  {
    size_t item_size = sizeof(ros_message->eye_gaze_zone);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eye_gaze_zone_time
  {
    size_t item_size = sizeof(ros_message->eye_gaze_zone_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eye_on_road_from_dhu
  {
    size_t item_size = sizeof(ros_message->eye_on_road_from_dhu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eye_open_from_dhu_eye_open_deg_le
  {
    size_t item_size = sizeof(ros_message->eye_open_from_dhu_eye_open_deg_le);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eye_open_from_dhu_eye_open_deg_ri
  {
    size_t item_size = sizeof(ros_message->eye_open_from_dhu_eye_open_deg_ri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eye_open_from_dhu_eye_open_le
  {
    size_t item_size = sizeof(ros_message->eye_open_from_dhu_eye_open_le);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eye_open_from_dhu_eye_open_ri
  {
    size_t item_size = sizeof(ros_message->eye_open_from_dhu_eye_open_ri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eye_open_from_dhu_eye_visible_le
  {
    size_t item_size = sizeof(ros_message->eye_open_from_dhu_eye_visible_le);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eye_open_from_dhu_eye_visible_ri
  {
    size_t item_size = sizeof(ros_message->eye_open_from_dhu_eye_visible_ri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eye_open_from_dhu_face_visible
  {
    size_t item_size = sizeof(ros_message->eye_open_from_dhu_face_visible);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name snsr_drvr_pfmnc_sts_from_dhu
  {
    size_t item_size = sizeof(ros_message->snsr_drvr_pfmnc_sts_from_dhu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voice_brst_mod
  {
    size_t item_size = sizeof(ros_message->voice_brst_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_lane_chg_style_sw_sts
  {
    size_t item_size = sizeof(ros_message->auto_lane_chg_style_sw_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nop_cofm_of_lan_chag_onoff
  {
    size_t item_size = sizeof(ros_message->nop_cofm_of_lan_chag_onoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_sod_lan_chg_switch
  {
    size_t item_size = sizeof(ros_message->hmi_sod_lan_chg_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_drvr_sod_req_chg
  {
    size_t item_size = sizeof(ros_message->hmi_drvr_sod_req_chg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_upgrade_switch
  {
    size_t item_size = sizeof(ros_message->asy_noa_upgrade_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sfty_hmi_ena
  {
    size_t item_size = sizeof(ros_message->sfty_hmi_ena);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nop_remind_typ_of_chg_lane_req
  {
    size_t item_size = sizeof(ros_message->nop_remind_typ_of_chg_lane_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_lane_chg_aut_actv_sts
  {
    size_t item_size = sizeof(ros_message->drvr_lane_chg_aut_actv_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_lane_chg_with_navi_sw_onoff
  {
    size_t item_size = sizeof(ros_message->auto_lane_chg_with_navi_sw_onoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nav_noa_status_change_req
  {
    size_t item_size = sizeof(ros_message->nav_noa_status_change_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_camera_store_req
  {
    size_t item_size = sizeof(ros_message->prkg_camera_store_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voice_ctrl_prk
  {
    size_t item_size = sizeof(ros_message->voice_ctrl_prk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drift_prkg_req
  {
    size_t item_size = sizeof(ros_message->drift_prkg_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_drvr_sod_req_cnoa_main_page
  {
    size_t item_size = sizeof(ros_message->hmi_drvr_sod_req_cnoa_main_page);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_drvr_sod_req_cnoa_lrng
  {
    size_t item_size = sizeof(ros_message->hmi_drvr_sod_req_cnoa_lrng);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_drvr_sod_req_finish_lrng
  {
    size_t item_size = sizeof(ros_message->hmi_drvr_sod_req_finish_lrng);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_cnoa_crs_swt_on_off
  {
    size_t item_size = sizeof(ros_message->hmi_cnoa_crs_swt_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_cnoa_sod_lan_chg_swt
  {
    size_t item_size = sizeof(ros_message->hmi_cnoa_sod_lan_chg_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_cnoa_auto_lane_chg_style_sw_sts
  {
    size_t item_size = sizeof(ros_message->hmi_cnoa_auto_lane_chg_style_sw_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_cnoa_lrng_swt_on_off
  {
    size_t item_size = sizeof(ros_message->hmi_cnoa_lrng_swt_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_drvr_sod_req_contns_lrng
  {
    size_t item_size = sizeof(ros_message->hmi_drvr_sod_req_contns_lrng);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name apa_custom_prkg_req
  {
    size_t item_size = sizeof(ros_message->apa_custom_prkg_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name exit_custom_prkg_req
  {
    size_t item_size = sizeof(ros_message->exit_custom_prkg_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cust_prk_slot_posn_angle_disp
  {
    size_t item_size = sizeof(ros_message->cust_prk_slot_posn_angle_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cust_prk_slot_posn_end_x1
  {
    size_t item_size = sizeof(ros_message->cust_prk_slot_posn_end_x1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cust_prk_slot_posn_end_x2
  {
    size_t item_size = sizeof(ros_message->cust_prk_slot_posn_end_x2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cust_prk_slot_posn_end_y1
  {
    size_t item_size = sizeof(ros_message->cust_prk_slot_posn_end_y1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cust_prk_slot_posn_end_y2
  {
    size_t item_size = sizeof(ros_message->cust_prk_slot_posn_end_y2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cust_prk_slot_posn_start_x1
  {
    size_t item_size = sizeof(ros_message->cust_prk_slot_posn_start_x1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cust_prk_slot_posn_start_x2
  {
    size_t item_size = sizeof(ros_message->cust_prk_slot_posn_start_x2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cust_prk_slot_posn_start_y1
  {
    size_t item_size = sizeof(ros_message->cust_prk_slot_posn_start_y1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cust_prk_slot_posn_start_y2
  {
    size_t item_size = sizeof(ros_message->cust_prk_slot_posn_start_y2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name screem_oper
  {
    size_t item_size = sizeof(ros_message->screem_oper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hpa_max_swt
  {
    size_t item_size = sizeof(ros_message->hpa_max_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rpa_select_par_in
  {
    size_t item_size = sizeof(ros_message->rpa_select_par_in);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frnt_and_re_prkg_in_swt
  {
    size_t item_size = sizeof(ros_message->frnt_and_re_prkg_in_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name app_map_info_to_stm

  current_alignment += get_serialized_size_deva_function_msgs__msg__AppMapInfoToStmStruct(
    &(ros_message->app_map_info_to_stm), current_alignment);
  // field.name app_to_stm_data

  current_alignment += get_serialized_size_deva_function_msgs__msg__APPToStmDataStruct(
    &(ros_message->app_to_stm_data), current_alignment);
  // field.name aut_prkg_hand_slot_nr_req_topo_slot_id
  {
    size_t item_size = sizeof(ros_message->aut_prkg_hand_slot_nr_req_topo_slot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_prkg_hand_slot_nr_req_topo_slot_status
  {
    size_t item_size = sizeof(ros_message->aut_prkg_hand_slot_nr_req_topo_slot_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_prkg_select_entrance
  {
    size_t item_size = sizeof(ros_message->aut_prkg_select_entrance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_cls_pop
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_cls_pop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_cover_results
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_cover_results);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_select_d2d
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_select_d2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_topo_flr
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_topo_flr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d2d_p_icon_clicked
  {
    size_t item_size = sizeof(ros_message->d2d_p_icon_clicked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d2d_route_push_button_resp
  {
    size_t item_size = sizeof(ros_message->d2d_route_push_button_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_etc_traffic_sw_sts
  {
    size_t item_size = sizeof(ros_message->hmi_etc_traffic_sw_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_lrng_sts_hpa_lrng_sts
  {
    size_t item_size = sizeof(ros_message->prkg_lrng_sts_hpa_lrng_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_slot_typ_select
  {
    size_t item_size = sizeof(ros_message->prkg_slot_typ_select);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_aut_drvg_li_swt
  {
    size_t item_size = sizeof(ros_message->asy_aut_drvg_li_swt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_resp_map_id_list1
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_resp_map_id_list1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_resp_map_id_list2
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_resp_map_id_list2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_resp_map_id_list3
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_resp_map_id_list3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_resp_map_id_list4
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_resp_map_id_list4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_resp_map_id_result
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_resp_map_id_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_syncn_map_id_list1
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_syncn_map_id_list1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_syncn_map_id_list2
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_syncn_map_id_list2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_syncn_map_id_list3
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_syncn_map_id_list3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_syncn_map_id_list4
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_syncn_map_id_list4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_valt_prkg_map_syncn_map_syncn
  {
    size_t item_size = sizeof(ros_message->aut_valt_prkg_map_syncn_map_syncn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UIToSTMData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_function_msgs__msg__UIToSTMData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t max_serialized_size_deva_function_msgs__msg__UIToSTMData(
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
  // member: drvr_assc_sys_btn_push
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: swt_disp_on_and_off_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nav_frnt_actv_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ihu_fail
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: scene_mod_seld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: other_ar_psd_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_rpa_req_rspa_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_rpa_req_rpa_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_rpa_req_mob_dev_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rem_straight_prkg_assi_seln_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_touch_coorn_req_touch_eve_typ
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_spd_indcd_veh_spd_indcd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sm_aut_prkg_slot_nr_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_prkg_in_or_out_and_cncl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_prkg_intrpt_reld_btn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_prkg_fct_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_aut_actv_prkg_fct_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: full_screen_btn_push
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_sel_push_apa_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_hpa_soft_butn_enter_rq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_map_build_rq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_map_save_rq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_map_select_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_drvr_assc_sys_park_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: map_build_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_map_src_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_map_oper_req_map_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_l1_btn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_experience_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lo_spd_drvg_assi_sho_push_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_sho_dst_push_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_picture_upload_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_ins_btn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prof_pen_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_map_oper_req2_map_type2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_map_oper_req2_map_list1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aut_valt_prkg_map_oper_req2_map_list2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aut_valt_prkg_map_oper_req2_map_list3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aut_valt_prkg_map_oper_req2_map_list4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aut_valt_prkg_l2_pop_btn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: voice_active_adcu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: btn_tr_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: btn_unlck_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: btn_lock_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: btn_tr_sts1_key_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: btn_unlck_sts1_key_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: btn_lock_sts1_key_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: voice_ctrl_brk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lo_spd_drvg_assi_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_frnt_or_re_select
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tracking_back_assi_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_emg_brk_sys_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_prkg_voice_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lsda_notif_push_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: monr_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvr_assc_wisdom_btn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: scenario_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_prkg_voice_typ
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mai_setting
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_prkg_hand_slot_nr_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_aut_drv_ctrl_typ_dim_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_drvr_sod_req_pilot
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvr_crs_ctrl_fct_actv_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvr_acc_fct_deactvn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvr_acc_rs_set_spd_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: set_spd_for_crs_ctrl_fct_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_fusn_trfc_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: crs_ctrl_ti_gap_adj_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ve_spd_indcd_unit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_spd_indcd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: drv_mod_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cam_flts_sts_from_dhu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvr_dec_sts_from_dhu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eye_gaze_zone
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eye_gaze_zone_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: eye_on_road_from_dhu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eye_open_from_dhu_eye_open_deg_le
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: eye_open_from_dhu_eye_open_deg_ri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: eye_open_from_dhu_eye_open_le
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eye_open_from_dhu_eye_open_ri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eye_open_from_dhu_eye_visible_le
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eye_open_from_dhu_eye_visible_ri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eye_open_from_dhu_face_visible
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: snsr_drvr_pfmnc_sts_from_dhu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: voice_brst_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_lane_chg_style_sw_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nop_cofm_of_lan_chag_onoff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_sod_lan_chg_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_drvr_sod_req_chg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_upgrade_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sfty_hmi_ena
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nop_remind_typ_of_chg_lane_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvr_lane_chg_aut_actv_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_lane_chg_with_navi_sw_onoff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nav_noa_status_change_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_camera_store_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: voice_ctrl_prk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drift_prkg_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_drvr_sod_req_cnoa_main_page
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_drvr_sod_req_cnoa_lrng
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_drvr_sod_req_finish_lrng
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_cnoa_crs_swt_on_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_cnoa_sod_lan_chg_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_cnoa_auto_lane_chg_style_sw_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_cnoa_lrng_swt_on_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_drvr_sod_req_contns_lrng
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: apa_custom_prkg_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: exit_custom_prkg_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cust_prk_slot_posn_angle_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cust_prk_slot_posn_end_x1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cust_prk_slot_posn_end_x2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cust_prk_slot_posn_end_y1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cust_prk_slot_posn_end_y2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cust_prk_slot_posn_start_x1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cust_prk_slot_posn_start_x2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cust_prk_slot_posn_start_y1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cust_prk_slot_posn_start_y2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: screem_oper
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hpa_max_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rpa_select_par_in
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: frnt_and_re_prkg_in_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: app_map_info_to_stm
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_function_msgs__msg__AppMapInfoToStmStruct(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: app_to_stm_data
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_function_msgs__msg__APPToStmDataStruct(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: aut_prkg_hand_slot_nr_req_topo_slot_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_prkg_hand_slot_nr_req_topo_slot_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_prkg_select_entrance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_cls_pop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_cover_results
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_select_d2d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_topo_flr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: d2d_p_icon_clicked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: d2d_route_push_button_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_etc_traffic_sw_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_lrng_sts_hpa_lrng_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_slot_typ_select
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_aut_drvg_li_swt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_map_resp_map_id_list1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aut_valt_prkg_map_resp_map_id_list2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aut_valt_prkg_map_resp_map_id_list3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aut_valt_prkg_map_resp_map_id_list4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aut_valt_prkg_map_resp_map_id_result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_valt_prkg_map_syncn_map_id_list1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aut_valt_prkg_map_syncn_map_id_list2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aut_valt_prkg_map_syncn_map_id_list3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aut_valt_prkg_map_syncn_map_id_list4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aut_valt_prkg_map_syncn_map_syncn
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
    using DataType = deva_function_msgs__msg__UIToSTMData;
    is_plain =
      (
      offsetof(DataType, aut_valt_prkg_map_syncn_map_syncn) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _UIToSTMData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_function_msgs__msg__UIToSTMData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UIToSTMData = {
  "deva_function_msgs::msg",
  "UIToSTMData",
  _UIToSTMData__cdr_serialize,
  _UIToSTMData__cdr_deserialize,
  _UIToSTMData__get_serialized_size,
  _UIToSTMData__max_serialized_size
};

static rosidl_message_type_support_t _UIToSTMData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UIToSTMData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, UIToSTMData)() {
  return &_UIToSTMData__type_support;
}

#if defined(__cplusplus)
}
#endif
