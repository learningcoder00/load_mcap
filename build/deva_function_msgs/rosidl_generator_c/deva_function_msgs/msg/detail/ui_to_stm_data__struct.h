// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/UIToSTMData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__UI_TO_STM_DATA__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__UI_TO_STM_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'app_map_info_to_stm'
#include "deva_function_msgs/msg/detail/app_map_info_to_stm_struct__struct.h"
// Member 'app_to_stm_data'
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__struct.h"

/// Struct defined in msg/UIToSTMData in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__UIToSTMData
{
  deva_common_msgs__msg__Header header;
  uint8_t drvr_assc_sys_btn_push;
  uint8_t swt_disp_on_and_off_req;
  uint8_t nav_frnt_actv_sts;
  uint8_t ihu_fail;
  uint8_t scene_mod_seld;
  uint8_t other_ar_psd_req;
  uint8_t mob_dev_rpa_req_rspa_ctrl;
  uint8_t mob_dev_rpa_req_rpa_req;
  uint8_t mob_dev_rpa_req_rpa_out_mode_sub_t;
  uint8_t mob_dev_rpa_req_mob_dev_sts;
  uint8_t rem_straight_prkg_assi_seln_req;
  uint8_t prkg_touch_coorn_req_touch_eve_typ;
  uint16_t veh_spd_indcd_veh_spd_indcd;
  uint8_t sm_aut_prkg_slot_nr_req;
  uint8_t sm_prkg_in_or_out_and_cncl;
  uint8_t sm_prkg_intrpt_reld_btn;
  uint8_t sm_prkg_fct_swt;
  uint8_t sm_aut_actv_prkg_fct_swt;
  uint8_t full_screen_btn_push;
  uint8_t sm_sel_push_apa_info;
  uint8_t sm_hpa_soft_butn_enter_rq;
  uint8_t sm_map_build_rq;
  uint8_t sm_map_save_rq;
  uint8_t sm_map_select_id;
  uint8_t sm_drvr_assc_sys_park_mod;
  uint8_t map_build_sts;
  uint8_t aut_valt_prkg_map_src_req;
  uint8_t aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req;
  uint8_t aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req;
  uint8_t aut_valt_prkg_l2_btn_req_setting_voice_btn_req;
  uint8_t aut_valt_prkg_map_oper_req_map_type;
  uint8_t aut_valt_prkg_l1_btn_req;
  uint8_t aut_valt_prkg_experience_resp;
  uint8_t lo_spd_drvg_assi_sho_push_resp;
  uint8_t aut_valt_prkg_sho_dst_push_swt;
  uint8_t aut_valt_prkg_picture_upload_swt;
  uint8_t aut_valt_prkg_ins_btn_req;
  uint8_t aut_valt_prkg_swt;
  uint8_t prof_pen_sts1;
  uint8_t aut_valt_prkg_map_oper_req2_map_type2;
  uint32_t aut_valt_prkg_map_oper_req2_map_list1;
  uint32_t aut_valt_prkg_map_oper_req2_map_list2;
  uint32_t aut_valt_prkg_map_oper_req2_map_list3;
  uint32_t aut_valt_prkg_map_oper_req2_map_list4;
  uint8_t aut_valt_prkg_l2_pop_btn_req;
  uint8_t voice_active_adcu;
  uint8_t btn_tr_sts1;
  uint8_t btn_unlck_sts1;
  uint8_t btn_lock_sts1;
  uint8_t btn_tr_sts1_key_id;
  uint8_t btn_unlck_sts1_key_id;
  uint8_t btn_lock_sts1_key_id;
  uint8_t voice_ctrl_brk;
  uint8_t lo_spd_drvg_assi_swt;
  uint8_t prkg_frnt_or_re_select;
  uint8_t tracking_back_assi_swt;
  uint8_t prkg_emg_brk_sys_swt;
  uint8_t aut_prkg_voice_swt;
  uint8_t lsda_notif_push_req;
  uint8_t monr_sys_sts;
  uint8_t drvr_assc_wisdom_btn;
  uint8_t scenario_mod;
  uint8_t aut_prkg_voice_typ;
  uint8_t mai_setting;
  uint8_t aut_prkg_hand_slot_nr_req;
  uint8_t asy_aut_drv_ctrl_typ_dim_req;
  uint8_t hmi_drvr_sod_req_pilot;
  uint8_t drvr_crs_ctrl_fct_actv_req;
  uint8_t drvr_acc_fct_deactvn_req;
  uint8_t drvr_acc_rs_set_spd_req;
  float set_spd_for_crs_ctrl_fct_active;
  uint8_t acc_fusn_trfc_req;
  uint8_t crs_ctrl_ti_gap_adj_req;
  uint8_t ve_spd_indcd_unit;
  float veh_spd_indcd;
  uint8_t drv_mod_req;
  uint8_t cam_flts_sts_from_dhu;
  uint8_t drvr_dec_sts_from_dhu;
  uint8_t eye_gaze_zone;
  uint16_t eye_gaze_zone_time;
  uint8_t eye_on_road_from_dhu;
  float eye_open_from_dhu_eye_open_deg_le;
  float eye_open_from_dhu_eye_open_deg_ri;
  uint8_t eye_open_from_dhu_eye_open_le;
  uint8_t eye_open_from_dhu_eye_open_ri;
  uint8_t eye_open_from_dhu_eye_visible_le;
  uint8_t eye_open_from_dhu_eye_visible_ri;
  uint8_t eye_open_from_dhu_face_visible;
  uint8_t snsr_drvr_pfmnc_sts_from_dhu;
  uint8_t voice_brst_mod;
  uint8_t auto_lane_chg_style_sw_sts;
  uint8_t nop_cofm_of_lan_chag_onoff;
  uint8_t hmi_sod_lan_chg_switch;
  uint8_t hmi_drvr_sod_req_chg;
  uint8_t asy_noa_upgrade_switch;
  uint8_t sfty_hmi_ena;
  uint8_t nop_remind_typ_of_chg_lane_req;
  uint8_t drvr_lane_chg_aut_actv_sts;
  uint8_t auto_lane_chg_with_navi_sw_onoff;
  uint8_t nav_noa_status_change_req;
  uint8_t prkg_camera_store_req;
  uint8_t voice_ctrl_prk;
  uint8_t drift_prkg_req;
  uint8_t hmi_drvr_sod_req_cnoa_main_page;
  uint8_t hmi_drvr_sod_req_cnoa_lrng;
  uint8_t hmi_drvr_sod_req_finish_lrng;
  uint8_t hmi_cnoa_crs_swt_on_off;
  uint8_t hmi_cnoa_sod_lan_chg_swt;
  uint8_t hmi_cnoa_auto_lane_chg_style_sw_sts;
  uint8_t hmi_cnoa_lrng_swt_on_off;
  uint8_t hmi_drvr_sod_req_contns_lrng;
  uint8_t apa_custom_prkg_req;
  uint8_t exit_custom_prkg_req;
  int16_t cust_prk_slot_posn_angle_disp;
  int16_t cust_prk_slot_posn_end_x1;
  int16_t cust_prk_slot_posn_end_x2;
  int16_t cust_prk_slot_posn_end_y1;
  int16_t cust_prk_slot_posn_end_y2;
  int16_t cust_prk_slot_posn_start_x1;
  int16_t cust_prk_slot_posn_start_x2;
  int16_t cust_prk_slot_posn_start_y1;
  int16_t cust_prk_slot_posn_start_y2;
  uint8_t screem_oper;
  bool hpa_max_swt;
  uint8_t rpa_select_par_in;
  uint8_t frnt_and_re_prkg_in_swt;
  deva_function_msgs__msg__AppMapInfoToStmStruct app_map_info_to_stm;
  deva_function_msgs__msg__APPToStmDataStruct app_to_stm_data;
  uint8_t aut_prkg_hand_slot_nr_req_topo_slot_id;
  uint8_t aut_prkg_hand_slot_nr_req_topo_slot_status;
  uint8_t aut_prkg_select_entrance;
  uint8_t aut_valt_prkg_cls_pop;
  uint8_t aut_valt_prkg_cover_results;
  uint8_t aut_valt_prkg_select_d2d;
  int8_t aut_valt_prkg_topo_flr;
  uint8_t d2d_p_icon_clicked;
  uint8_t d2d_route_push_button_resp;
  uint8_t hmi_etc_traffic_sw_sts;
  uint8_t prkg_lrng_sts_hpa_lrng_sts;
  uint8_t prkg_slot_typ_select;
  uint8_t asy_aut_drvg_li_swt;
  uint32_t aut_valt_prkg_map_resp_map_id_list1;
  uint32_t aut_valt_prkg_map_resp_map_id_list2;
  uint32_t aut_valt_prkg_map_resp_map_id_list3;
  uint32_t aut_valt_prkg_map_resp_map_id_list4;
  uint8_t aut_valt_prkg_map_resp_map_id_result;
  uint32_t aut_valt_prkg_map_syncn_map_id_list1;
  uint32_t aut_valt_prkg_map_syncn_map_id_list2;
  uint32_t aut_valt_prkg_map_syncn_map_id_list3;
  uint32_t aut_valt_prkg_map_syncn_map_id_list4;
  uint8_t aut_valt_prkg_map_syncn_map_syncn;
} deva_function_msgs__msg__UIToSTMData;

// Struct for a sequence of deva_function_msgs__msg__UIToSTMData.
typedef struct deva_function_msgs__msg__UIToSTMData__Sequence
{
  deva_function_msgs__msg__UIToSTMData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__UIToSTMData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__UI_TO_STM_DATA__STRUCT_H_
