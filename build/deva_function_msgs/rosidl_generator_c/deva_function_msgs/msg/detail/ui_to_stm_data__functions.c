// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/UIToSTMData.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/ui_to_stm_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `app_map_info_to_stm`
#include "deva_function_msgs/msg/detail/app_map_info_to_stm_struct__functions.h"
// Member `app_to_stm_data`
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__functions.h"

bool
deva_function_msgs__msg__UIToSTMData__init(deva_function_msgs__msg__UIToSTMData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__UIToSTMData__fini(msg);
    return false;
  }
  // drvr_assc_sys_btn_push
  // swt_disp_on_and_off_req
  // nav_frnt_actv_sts
  // ihu_fail
  // scene_mod_seld
  // other_ar_psd_req
  // mob_dev_rpa_req_rspa_ctrl
  // mob_dev_rpa_req_rpa_req
  // mob_dev_rpa_req_rpa_out_mode_sub_t
  // mob_dev_rpa_req_mob_dev_sts
  // rem_straight_prkg_assi_seln_req
  // prkg_touch_coorn_req_touch_eve_typ
  // veh_spd_indcd_veh_spd_indcd
  // sm_aut_prkg_slot_nr_req
  // sm_prkg_in_or_out_and_cncl
  // sm_prkg_intrpt_reld_btn
  // sm_prkg_fct_swt
  // sm_aut_actv_prkg_fct_swt
  // full_screen_btn_push
  // sm_sel_push_apa_info
  // sm_hpa_soft_butn_enter_rq
  // sm_map_build_rq
  // sm_map_save_rq
  // sm_map_select_id
  // sm_drvr_assc_sys_park_mod
  // map_build_sts
  // aut_valt_prkg_map_src_req
  // aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  // aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  // aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  // aut_valt_prkg_map_oper_req_map_type
  // aut_valt_prkg_l1_btn_req
  // aut_valt_prkg_experience_resp
  // lo_spd_drvg_assi_sho_push_resp
  // aut_valt_prkg_sho_dst_push_swt
  // aut_valt_prkg_picture_upload_swt
  // aut_valt_prkg_ins_btn_req
  // aut_valt_prkg_swt
  // prof_pen_sts1
  // aut_valt_prkg_map_oper_req2_map_type2
  // aut_valt_prkg_map_oper_req2_map_list1
  // aut_valt_prkg_map_oper_req2_map_list2
  // aut_valt_prkg_map_oper_req2_map_list3
  // aut_valt_prkg_map_oper_req2_map_list4
  // aut_valt_prkg_l2_pop_btn_req
  // voice_active_adcu
  // btn_tr_sts1
  // btn_unlck_sts1
  // btn_lock_sts1
  // btn_tr_sts1_key_id
  // btn_unlck_sts1_key_id
  // btn_lock_sts1_key_id
  // voice_ctrl_brk
  // lo_spd_drvg_assi_swt
  // prkg_frnt_or_re_select
  // tracking_back_assi_swt
  // prkg_emg_brk_sys_swt
  // aut_prkg_voice_swt
  // lsda_notif_push_req
  // monr_sys_sts
  // drvr_assc_wisdom_btn
  // scenario_mod
  // aut_prkg_voice_typ
  // mai_setting
  // aut_prkg_hand_slot_nr_req
  // asy_aut_drv_ctrl_typ_dim_req
  // hmi_drvr_sod_req_pilot
  // drvr_crs_ctrl_fct_actv_req
  // drvr_acc_fct_deactvn_req
  // drvr_acc_rs_set_spd_req
  // set_spd_for_crs_ctrl_fct_active
  // acc_fusn_trfc_req
  // crs_ctrl_ti_gap_adj_req
  // ve_spd_indcd_unit
  // veh_spd_indcd
  // drv_mod_req
  // cam_flts_sts_from_dhu
  // drvr_dec_sts_from_dhu
  // eye_gaze_zone
  // eye_gaze_zone_time
  // eye_on_road_from_dhu
  // eye_open_from_dhu_eye_open_deg_le
  // eye_open_from_dhu_eye_open_deg_ri
  // eye_open_from_dhu_eye_open_le
  // eye_open_from_dhu_eye_open_ri
  // eye_open_from_dhu_eye_visible_le
  // eye_open_from_dhu_eye_visible_ri
  // eye_open_from_dhu_face_visible
  // snsr_drvr_pfmnc_sts_from_dhu
  // voice_brst_mod
  // auto_lane_chg_style_sw_sts
  // nop_cofm_of_lan_chag_onoff
  // hmi_sod_lan_chg_switch
  // hmi_drvr_sod_req_chg
  // asy_noa_upgrade_switch
  // sfty_hmi_ena
  // nop_remind_typ_of_chg_lane_req
  // drvr_lane_chg_aut_actv_sts
  // auto_lane_chg_with_navi_sw_onoff
  // nav_noa_status_change_req
  // prkg_camera_store_req
  // voice_ctrl_prk
  // drift_prkg_req
  // hmi_drvr_sod_req_cnoa_main_page
  // hmi_drvr_sod_req_cnoa_lrng
  // hmi_drvr_sod_req_finish_lrng
  // hmi_cnoa_crs_swt_on_off
  // hmi_cnoa_sod_lan_chg_swt
  // hmi_cnoa_auto_lane_chg_style_sw_sts
  // hmi_cnoa_lrng_swt_on_off
  // hmi_drvr_sod_req_contns_lrng
  // apa_custom_prkg_req
  // exit_custom_prkg_req
  // cust_prk_slot_posn_angle_disp
  // cust_prk_slot_posn_end_x1
  // cust_prk_slot_posn_end_x2
  // cust_prk_slot_posn_end_y1
  // cust_prk_slot_posn_end_y2
  // cust_prk_slot_posn_start_x1
  // cust_prk_slot_posn_start_x2
  // cust_prk_slot_posn_start_y1
  // cust_prk_slot_posn_start_y2
  // screem_oper
  // hpa_max_swt
  // rpa_select_par_in
  // frnt_and_re_prkg_in_swt
  // app_map_info_to_stm
  if (!deva_function_msgs__msg__AppMapInfoToStmStruct__init(&msg->app_map_info_to_stm)) {
    deva_function_msgs__msg__UIToSTMData__fini(msg);
    return false;
  }
  // app_to_stm_data
  if (!deva_function_msgs__msg__APPToStmDataStruct__init(&msg->app_to_stm_data)) {
    deva_function_msgs__msg__UIToSTMData__fini(msg);
    return false;
  }
  // aut_prkg_hand_slot_nr_req_topo_slot_id
  // aut_prkg_hand_slot_nr_req_topo_slot_status
  // aut_prkg_select_entrance
  // aut_valt_prkg_cls_pop
  // aut_valt_prkg_cover_results
  // aut_valt_prkg_select_d2d
  // aut_valt_prkg_topo_flr
  // d2d_p_icon_clicked
  // d2d_route_push_button_resp
  // hmi_etc_traffic_sw_sts
  // prkg_lrng_sts_hpa_lrng_sts
  // prkg_slot_typ_select
  // asy_aut_drvg_li_swt
  // aut_valt_prkg_map_resp_map_id_list1
  // aut_valt_prkg_map_resp_map_id_list2
  // aut_valt_prkg_map_resp_map_id_list3
  // aut_valt_prkg_map_resp_map_id_list4
  // aut_valt_prkg_map_resp_map_id_result
  // aut_valt_prkg_map_syncn_map_id_list1
  // aut_valt_prkg_map_syncn_map_id_list2
  // aut_valt_prkg_map_syncn_map_id_list3
  // aut_valt_prkg_map_syncn_map_id_list4
  // aut_valt_prkg_map_syncn_map_syncn
  return true;
}

void
deva_function_msgs__msg__UIToSTMData__fini(deva_function_msgs__msg__UIToSTMData * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // drvr_assc_sys_btn_push
  // swt_disp_on_and_off_req
  // nav_frnt_actv_sts
  // ihu_fail
  // scene_mod_seld
  // other_ar_psd_req
  // mob_dev_rpa_req_rspa_ctrl
  // mob_dev_rpa_req_rpa_req
  // mob_dev_rpa_req_rpa_out_mode_sub_t
  // mob_dev_rpa_req_mob_dev_sts
  // rem_straight_prkg_assi_seln_req
  // prkg_touch_coorn_req_touch_eve_typ
  // veh_spd_indcd_veh_spd_indcd
  // sm_aut_prkg_slot_nr_req
  // sm_prkg_in_or_out_and_cncl
  // sm_prkg_intrpt_reld_btn
  // sm_prkg_fct_swt
  // sm_aut_actv_prkg_fct_swt
  // full_screen_btn_push
  // sm_sel_push_apa_info
  // sm_hpa_soft_butn_enter_rq
  // sm_map_build_rq
  // sm_map_save_rq
  // sm_map_select_id
  // sm_drvr_assc_sys_park_mod
  // map_build_sts
  // aut_valt_prkg_map_src_req
  // aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  // aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  // aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  // aut_valt_prkg_map_oper_req_map_type
  // aut_valt_prkg_l1_btn_req
  // aut_valt_prkg_experience_resp
  // lo_spd_drvg_assi_sho_push_resp
  // aut_valt_prkg_sho_dst_push_swt
  // aut_valt_prkg_picture_upload_swt
  // aut_valt_prkg_ins_btn_req
  // aut_valt_prkg_swt
  // prof_pen_sts1
  // aut_valt_prkg_map_oper_req2_map_type2
  // aut_valt_prkg_map_oper_req2_map_list1
  // aut_valt_prkg_map_oper_req2_map_list2
  // aut_valt_prkg_map_oper_req2_map_list3
  // aut_valt_prkg_map_oper_req2_map_list4
  // aut_valt_prkg_l2_pop_btn_req
  // voice_active_adcu
  // btn_tr_sts1
  // btn_unlck_sts1
  // btn_lock_sts1
  // btn_tr_sts1_key_id
  // btn_unlck_sts1_key_id
  // btn_lock_sts1_key_id
  // voice_ctrl_brk
  // lo_spd_drvg_assi_swt
  // prkg_frnt_or_re_select
  // tracking_back_assi_swt
  // prkg_emg_brk_sys_swt
  // aut_prkg_voice_swt
  // lsda_notif_push_req
  // monr_sys_sts
  // drvr_assc_wisdom_btn
  // scenario_mod
  // aut_prkg_voice_typ
  // mai_setting
  // aut_prkg_hand_slot_nr_req
  // asy_aut_drv_ctrl_typ_dim_req
  // hmi_drvr_sod_req_pilot
  // drvr_crs_ctrl_fct_actv_req
  // drvr_acc_fct_deactvn_req
  // drvr_acc_rs_set_spd_req
  // set_spd_for_crs_ctrl_fct_active
  // acc_fusn_trfc_req
  // crs_ctrl_ti_gap_adj_req
  // ve_spd_indcd_unit
  // veh_spd_indcd
  // drv_mod_req
  // cam_flts_sts_from_dhu
  // drvr_dec_sts_from_dhu
  // eye_gaze_zone
  // eye_gaze_zone_time
  // eye_on_road_from_dhu
  // eye_open_from_dhu_eye_open_deg_le
  // eye_open_from_dhu_eye_open_deg_ri
  // eye_open_from_dhu_eye_open_le
  // eye_open_from_dhu_eye_open_ri
  // eye_open_from_dhu_eye_visible_le
  // eye_open_from_dhu_eye_visible_ri
  // eye_open_from_dhu_face_visible
  // snsr_drvr_pfmnc_sts_from_dhu
  // voice_brst_mod
  // auto_lane_chg_style_sw_sts
  // nop_cofm_of_lan_chag_onoff
  // hmi_sod_lan_chg_switch
  // hmi_drvr_sod_req_chg
  // asy_noa_upgrade_switch
  // sfty_hmi_ena
  // nop_remind_typ_of_chg_lane_req
  // drvr_lane_chg_aut_actv_sts
  // auto_lane_chg_with_navi_sw_onoff
  // nav_noa_status_change_req
  // prkg_camera_store_req
  // voice_ctrl_prk
  // drift_prkg_req
  // hmi_drvr_sod_req_cnoa_main_page
  // hmi_drvr_sod_req_cnoa_lrng
  // hmi_drvr_sod_req_finish_lrng
  // hmi_cnoa_crs_swt_on_off
  // hmi_cnoa_sod_lan_chg_swt
  // hmi_cnoa_auto_lane_chg_style_sw_sts
  // hmi_cnoa_lrng_swt_on_off
  // hmi_drvr_sod_req_contns_lrng
  // apa_custom_prkg_req
  // exit_custom_prkg_req
  // cust_prk_slot_posn_angle_disp
  // cust_prk_slot_posn_end_x1
  // cust_prk_slot_posn_end_x2
  // cust_prk_slot_posn_end_y1
  // cust_prk_slot_posn_end_y2
  // cust_prk_slot_posn_start_x1
  // cust_prk_slot_posn_start_x2
  // cust_prk_slot_posn_start_y1
  // cust_prk_slot_posn_start_y2
  // screem_oper
  // hpa_max_swt
  // rpa_select_par_in
  // frnt_and_re_prkg_in_swt
  // app_map_info_to_stm
  deva_function_msgs__msg__AppMapInfoToStmStruct__fini(&msg->app_map_info_to_stm);
  // app_to_stm_data
  deva_function_msgs__msg__APPToStmDataStruct__fini(&msg->app_to_stm_data);
  // aut_prkg_hand_slot_nr_req_topo_slot_id
  // aut_prkg_hand_slot_nr_req_topo_slot_status
  // aut_prkg_select_entrance
  // aut_valt_prkg_cls_pop
  // aut_valt_prkg_cover_results
  // aut_valt_prkg_select_d2d
  // aut_valt_prkg_topo_flr
  // d2d_p_icon_clicked
  // d2d_route_push_button_resp
  // hmi_etc_traffic_sw_sts
  // prkg_lrng_sts_hpa_lrng_sts
  // prkg_slot_typ_select
  // asy_aut_drvg_li_swt
  // aut_valt_prkg_map_resp_map_id_list1
  // aut_valt_prkg_map_resp_map_id_list2
  // aut_valt_prkg_map_resp_map_id_list3
  // aut_valt_prkg_map_resp_map_id_list4
  // aut_valt_prkg_map_resp_map_id_result
  // aut_valt_prkg_map_syncn_map_id_list1
  // aut_valt_prkg_map_syncn_map_id_list2
  // aut_valt_prkg_map_syncn_map_id_list3
  // aut_valt_prkg_map_syncn_map_id_list4
  // aut_valt_prkg_map_syncn_map_syncn
}

bool
deva_function_msgs__msg__UIToSTMData__are_equal(const deva_function_msgs__msg__UIToSTMData * lhs, const deva_function_msgs__msg__UIToSTMData * rhs)
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
  // drvr_assc_sys_btn_push
  if (lhs->drvr_assc_sys_btn_push != rhs->drvr_assc_sys_btn_push) {
    return false;
  }
  // swt_disp_on_and_off_req
  if (lhs->swt_disp_on_and_off_req != rhs->swt_disp_on_and_off_req) {
    return false;
  }
  // nav_frnt_actv_sts
  if (lhs->nav_frnt_actv_sts != rhs->nav_frnt_actv_sts) {
    return false;
  }
  // ihu_fail
  if (lhs->ihu_fail != rhs->ihu_fail) {
    return false;
  }
  // scene_mod_seld
  if (lhs->scene_mod_seld != rhs->scene_mod_seld) {
    return false;
  }
  // other_ar_psd_req
  if (lhs->other_ar_psd_req != rhs->other_ar_psd_req) {
    return false;
  }
  // mob_dev_rpa_req_rspa_ctrl
  if (lhs->mob_dev_rpa_req_rspa_ctrl != rhs->mob_dev_rpa_req_rspa_ctrl) {
    return false;
  }
  // mob_dev_rpa_req_rpa_req
  if (lhs->mob_dev_rpa_req_rpa_req != rhs->mob_dev_rpa_req_rpa_req) {
    return false;
  }
  // mob_dev_rpa_req_rpa_out_mode_sub_t
  if (lhs->mob_dev_rpa_req_rpa_out_mode_sub_t != rhs->mob_dev_rpa_req_rpa_out_mode_sub_t) {
    return false;
  }
  // mob_dev_rpa_req_mob_dev_sts
  if (lhs->mob_dev_rpa_req_mob_dev_sts != rhs->mob_dev_rpa_req_mob_dev_sts) {
    return false;
  }
  // rem_straight_prkg_assi_seln_req
  if (lhs->rem_straight_prkg_assi_seln_req != rhs->rem_straight_prkg_assi_seln_req) {
    return false;
  }
  // prkg_touch_coorn_req_touch_eve_typ
  if (lhs->prkg_touch_coorn_req_touch_eve_typ != rhs->prkg_touch_coorn_req_touch_eve_typ) {
    return false;
  }
  // veh_spd_indcd_veh_spd_indcd
  if (lhs->veh_spd_indcd_veh_spd_indcd != rhs->veh_spd_indcd_veh_spd_indcd) {
    return false;
  }
  // sm_aut_prkg_slot_nr_req
  if (lhs->sm_aut_prkg_slot_nr_req != rhs->sm_aut_prkg_slot_nr_req) {
    return false;
  }
  // sm_prkg_in_or_out_and_cncl
  if (lhs->sm_prkg_in_or_out_and_cncl != rhs->sm_prkg_in_or_out_and_cncl) {
    return false;
  }
  // sm_prkg_intrpt_reld_btn
  if (lhs->sm_prkg_intrpt_reld_btn != rhs->sm_prkg_intrpt_reld_btn) {
    return false;
  }
  // sm_prkg_fct_swt
  if (lhs->sm_prkg_fct_swt != rhs->sm_prkg_fct_swt) {
    return false;
  }
  // sm_aut_actv_prkg_fct_swt
  if (lhs->sm_aut_actv_prkg_fct_swt != rhs->sm_aut_actv_prkg_fct_swt) {
    return false;
  }
  // full_screen_btn_push
  if (lhs->full_screen_btn_push != rhs->full_screen_btn_push) {
    return false;
  }
  // sm_sel_push_apa_info
  if (lhs->sm_sel_push_apa_info != rhs->sm_sel_push_apa_info) {
    return false;
  }
  // sm_hpa_soft_butn_enter_rq
  if (lhs->sm_hpa_soft_butn_enter_rq != rhs->sm_hpa_soft_butn_enter_rq) {
    return false;
  }
  // sm_map_build_rq
  if (lhs->sm_map_build_rq != rhs->sm_map_build_rq) {
    return false;
  }
  // sm_map_save_rq
  if (lhs->sm_map_save_rq != rhs->sm_map_save_rq) {
    return false;
  }
  // sm_map_select_id
  if (lhs->sm_map_select_id != rhs->sm_map_select_id) {
    return false;
  }
  // sm_drvr_assc_sys_park_mod
  if (lhs->sm_drvr_assc_sys_park_mod != rhs->sm_drvr_assc_sys_park_mod) {
    return false;
  }
  // map_build_sts
  if (lhs->map_build_sts != rhs->map_build_sts) {
    return false;
  }
  // aut_valt_prkg_map_src_req
  if (lhs->aut_valt_prkg_map_src_req != rhs->aut_valt_prkg_map_src_req) {
    return false;
  }
  // aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  if (lhs->aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req != rhs->aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req) {
    return false;
  }
  // aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  if (lhs->aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req != rhs->aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req) {
    return false;
  }
  // aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  if (lhs->aut_valt_prkg_l2_btn_req_setting_voice_btn_req != rhs->aut_valt_prkg_l2_btn_req_setting_voice_btn_req) {
    return false;
  }
  // aut_valt_prkg_map_oper_req_map_type
  if (lhs->aut_valt_prkg_map_oper_req_map_type != rhs->aut_valt_prkg_map_oper_req_map_type) {
    return false;
  }
  // aut_valt_prkg_l1_btn_req
  if (lhs->aut_valt_prkg_l1_btn_req != rhs->aut_valt_prkg_l1_btn_req) {
    return false;
  }
  // aut_valt_prkg_experience_resp
  if (lhs->aut_valt_prkg_experience_resp != rhs->aut_valt_prkg_experience_resp) {
    return false;
  }
  // lo_spd_drvg_assi_sho_push_resp
  if (lhs->lo_spd_drvg_assi_sho_push_resp != rhs->lo_spd_drvg_assi_sho_push_resp) {
    return false;
  }
  // aut_valt_prkg_sho_dst_push_swt
  if (lhs->aut_valt_prkg_sho_dst_push_swt != rhs->aut_valt_prkg_sho_dst_push_swt) {
    return false;
  }
  // aut_valt_prkg_picture_upload_swt
  if (lhs->aut_valt_prkg_picture_upload_swt != rhs->aut_valt_prkg_picture_upload_swt) {
    return false;
  }
  // aut_valt_prkg_ins_btn_req
  if (lhs->aut_valt_prkg_ins_btn_req != rhs->aut_valt_prkg_ins_btn_req) {
    return false;
  }
  // aut_valt_prkg_swt
  if (lhs->aut_valt_prkg_swt != rhs->aut_valt_prkg_swt) {
    return false;
  }
  // prof_pen_sts1
  if (lhs->prof_pen_sts1 != rhs->prof_pen_sts1) {
    return false;
  }
  // aut_valt_prkg_map_oper_req2_map_type2
  if (lhs->aut_valt_prkg_map_oper_req2_map_type2 != rhs->aut_valt_prkg_map_oper_req2_map_type2) {
    return false;
  }
  // aut_valt_prkg_map_oper_req2_map_list1
  if (lhs->aut_valt_prkg_map_oper_req2_map_list1 != rhs->aut_valt_prkg_map_oper_req2_map_list1) {
    return false;
  }
  // aut_valt_prkg_map_oper_req2_map_list2
  if (lhs->aut_valt_prkg_map_oper_req2_map_list2 != rhs->aut_valt_prkg_map_oper_req2_map_list2) {
    return false;
  }
  // aut_valt_prkg_map_oper_req2_map_list3
  if (lhs->aut_valt_prkg_map_oper_req2_map_list3 != rhs->aut_valt_prkg_map_oper_req2_map_list3) {
    return false;
  }
  // aut_valt_prkg_map_oper_req2_map_list4
  if (lhs->aut_valt_prkg_map_oper_req2_map_list4 != rhs->aut_valt_prkg_map_oper_req2_map_list4) {
    return false;
  }
  // aut_valt_prkg_l2_pop_btn_req
  if (lhs->aut_valt_prkg_l2_pop_btn_req != rhs->aut_valt_prkg_l2_pop_btn_req) {
    return false;
  }
  // voice_active_adcu
  if (lhs->voice_active_adcu != rhs->voice_active_adcu) {
    return false;
  }
  // btn_tr_sts1
  if (lhs->btn_tr_sts1 != rhs->btn_tr_sts1) {
    return false;
  }
  // btn_unlck_sts1
  if (lhs->btn_unlck_sts1 != rhs->btn_unlck_sts1) {
    return false;
  }
  // btn_lock_sts1
  if (lhs->btn_lock_sts1 != rhs->btn_lock_sts1) {
    return false;
  }
  // btn_tr_sts1_key_id
  if (lhs->btn_tr_sts1_key_id != rhs->btn_tr_sts1_key_id) {
    return false;
  }
  // btn_unlck_sts1_key_id
  if (lhs->btn_unlck_sts1_key_id != rhs->btn_unlck_sts1_key_id) {
    return false;
  }
  // btn_lock_sts1_key_id
  if (lhs->btn_lock_sts1_key_id != rhs->btn_lock_sts1_key_id) {
    return false;
  }
  // voice_ctrl_brk
  if (lhs->voice_ctrl_brk != rhs->voice_ctrl_brk) {
    return false;
  }
  // lo_spd_drvg_assi_swt
  if (lhs->lo_spd_drvg_assi_swt != rhs->lo_spd_drvg_assi_swt) {
    return false;
  }
  // prkg_frnt_or_re_select
  if (lhs->prkg_frnt_or_re_select != rhs->prkg_frnt_or_re_select) {
    return false;
  }
  // tracking_back_assi_swt
  if (lhs->tracking_back_assi_swt != rhs->tracking_back_assi_swt) {
    return false;
  }
  // prkg_emg_brk_sys_swt
  if (lhs->prkg_emg_brk_sys_swt != rhs->prkg_emg_brk_sys_swt) {
    return false;
  }
  // aut_prkg_voice_swt
  if (lhs->aut_prkg_voice_swt != rhs->aut_prkg_voice_swt) {
    return false;
  }
  // lsda_notif_push_req
  if (lhs->lsda_notif_push_req != rhs->lsda_notif_push_req) {
    return false;
  }
  // monr_sys_sts
  if (lhs->monr_sys_sts != rhs->monr_sys_sts) {
    return false;
  }
  // drvr_assc_wisdom_btn
  if (lhs->drvr_assc_wisdom_btn != rhs->drvr_assc_wisdom_btn) {
    return false;
  }
  // scenario_mod
  if (lhs->scenario_mod != rhs->scenario_mod) {
    return false;
  }
  // aut_prkg_voice_typ
  if (lhs->aut_prkg_voice_typ != rhs->aut_prkg_voice_typ) {
    return false;
  }
  // mai_setting
  if (lhs->mai_setting != rhs->mai_setting) {
    return false;
  }
  // aut_prkg_hand_slot_nr_req
  if (lhs->aut_prkg_hand_slot_nr_req != rhs->aut_prkg_hand_slot_nr_req) {
    return false;
  }
  // asy_aut_drv_ctrl_typ_dim_req
  if (lhs->asy_aut_drv_ctrl_typ_dim_req != rhs->asy_aut_drv_ctrl_typ_dim_req) {
    return false;
  }
  // hmi_drvr_sod_req_pilot
  if (lhs->hmi_drvr_sod_req_pilot != rhs->hmi_drvr_sod_req_pilot) {
    return false;
  }
  // drvr_crs_ctrl_fct_actv_req
  if (lhs->drvr_crs_ctrl_fct_actv_req != rhs->drvr_crs_ctrl_fct_actv_req) {
    return false;
  }
  // drvr_acc_fct_deactvn_req
  if (lhs->drvr_acc_fct_deactvn_req != rhs->drvr_acc_fct_deactvn_req) {
    return false;
  }
  // drvr_acc_rs_set_spd_req
  if (lhs->drvr_acc_rs_set_spd_req != rhs->drvr_acc_rs_set_spd_req) {
    return false;
  }
  // set_spd_for_crs_ctrl_fct_active
  if (lhs->set_spd_for_crs_ctrl_fct_active != rhs->set_spd_for_crs_ctrl_fct_active) {
    return false;
  }
  // acc_fusn_trfc_req
  if (lhs->acc_fusn_trfc_req != rhs->acc_fusn_trfc_req) {
    return false;
  }
  // crs_ctrl_ti_gap_adj_req
  if (lhs->crs_ctrl_ti_gap_adj_req != rhs->crs_ctrl_ti_gap_adj_req) {
    return false;
  }
  // ve_spd_indcd_unit
  if (lhs->ve_spd_indcd_unit != rhs->ve_spd_indcd_unit) {
    return false;
  }
  // veh_spd_indcd
  if (lhs->veh_spd_indcd != rhs->veh_spd_indcd) {
    return false;
  }
  // drv_mod_req
  if (lhs->drv_mod_req != rhs->drv_mod_req) {
    return false;
  }
  // cam_flts_sts_from_dhu
  if (lhs->cam_flts_sts_from_dhu != rhs->cam_flts_sts_from_dhu) {
    return false;
  }
  // drvr_dec_sts_from_dhu
  if (lhs->drvr_dec_sts_from_dhu != rhs->drvr_dec_sts_from_dhu) {
    return false;
  }
  // eye_gaze_zone
  if (lhs->eye_gaze_zone != rhs->eye_gaze_zone) {
    return false;
  }
  // eye_gaze_zone_time
  if (lhs->eye_gaze_zone_time != rhs->eye_gaze_zone_time) {
    return false;
  }
  // eye_on_road_from_dhu
  if (lhs->eye_on_road_from_dhu != rhs->eye_on_road_from_dhu) {
    return false;
  }
  // eye_open_from_dhu_eye_open_deg_le
  if (lhs->eye_open_from_dhu_eye_open_deg_le != rhs->eye_open_from_dhu_eye_open_deg_le) {
    return false;
  }
  // eye_open_from_dhu_eye_open_deg_ri
  if (lhs->eye_open_from_dhu_eye_open_deg_ri != rhs->eye_open_from_dhu_eye_open_deg_ri) {
    return false;
  }
  // eye_open_from_dhu_eye_open_le
  if (lhs->eye_open_from_dhu_eye_open_le != rhs->eye_open_from_dhu_eye_open_le) {
    return false;
  }
  // eye_open_from_dhu_eye_open_ri
  if (lhs->eye_open_from_dhu_eye_open_ri != rhs->eye_open_from_dhu_eye_open_ri) {
    return false;
  }
  // eye_open_from_dhu_eye_visible_le
  if (lhs->eye_open_from_dhu_eye_visible_le != rhs->eye_open_from_dhu_eye_visible_le) {
    return false;
  }
  // eye_open_from_dhu_eye_visible_ri
  if (lhs->eye_open_from_dhu_eye_visible_ri != rhs->eye_open_from_dhu_eye_visible_ri) {
    return false;
  }
  // eye_open_from_dhu_face_visible
  if (lhs->eye_open_from_dhu_face_visible != rhs->eye_open_from_dhu_face_visible) {
    return false;
  }
  // snsr_drvr_pfmnc_sts_from_dhu
  if (lhs->snsr_drvr_pfmnc_sts_from_dhu != rhs->snsr_drvr_pfmnc_sts_from_dhu) {
    return false;
  }
  // voice_brst_mod
  if (lhs->voice_brst_mod != rhs->voice_brst_mod) {
    return false;
  }
  // auto_lane_chg_style_sw_sts
  if (lhs->auto_lane_chg_style_sw_sts != rhs->auto_lane_chg_style_sw_sts) {
    return false;
  }
  // nop_cofm_of_lan_chag_onoff
  if (lhs->nop_cofm_of_lan_chag_onoff != rhs->nop_cofm_of_lan_chag_onoff) {
    return false;
  }
  // hmi_sod_lan_chg_switch
  if (lhs->hmi_sod_lan_chg_switch != rhs->hmi_sod_lan_chg_switch) {
    return false;
  }
  // hmi_drvr_sod_req_chg
  if (lhs->hmi_drvr_sod_req_chg != rhs->hmi_drvr_sod_req_chg) {
    return false;
  }
  // asy_noa_upgrade_switch
  if (lhs->asy_noa_upgrade_switch != rhs->asy_noa_upgrade_switch) {
    return false;
  }
  // sfty_hmi_ena
  if (lhs->sfty_hmi_ena != rhs->sfty_hmi_ena) {
    return false;
  }
  // nop_remind_typ_of_chg_lane_req
  if (lhs->nop_remind_typ_of_chg_lane_req != rhs->nop_remind_typ_of_chg_lane_req) {
    return false;
  }
  // drvr_lane_chg_aut_actv_sts
  if (lhs->drvr_lane_chg_aut_actv_sts != rhs->drvr_lane_chg_aut_actv_sts) {
    return false;
  }
  // auto_lane_chg_with_navi_sw_onoff
  if (lhs->auto_lane_chg_with_navi_sw_onoff != rhs->auto_lane_chg_with_navi_sw_onoff) {
    return false;
  }
  // nav_noa_status_change_req
  if (lhs->nav_noa_status_change_req != rhs->nav_noa_status_change_req) {
    return false;
  }
  // prkg_camera_store_req
  if (lhs->prkg_camera_store_req != rhs->prkg_camera_store_req) {
    return false;
  }
  // voice_ctrl_prk
  if (lhs->voice_ctrl_prk != rhs->voice_ctrl_prk) {
    return false;
  }
  // drift_prkg_req
  if (lhs->drift_prkg_req != rhs->drift_prkg_req) {
    return false;
  }
  // hmi_drvr_sod_req_cnoa_main_page
  if (lhs->hmi_drvr_sod_req_cnoa_main_page != rhs->hmi_drvr_sod_req_cnoa_main_page) {
    return false;
  }
  // hmi_drvr_sod_req_cnoa_lrng
  if (lhs->hmi_drvr_sod_req_cnoa_lrng != rhs->hmi_drvr_sod_req_cnoa_lrng) {
    return false;
  }
  // hmi_drvr_sod_req_finish_lrng
  if (lhs->hmi_drvr_sod_req_finish_lrng != rhs->hmi_drvr_sod_req_finish_lrng) {
    return false;
  }
  // hmi_cnoa_crs_swt_on_off
  if (lhs->hmi_cnoa_crs_swt_on_off != rhs->hmi_cnoa_crs_swt_on_off) {
    return false;
  }
  // hmi_cnoa_sod_lan_chg_swt
  if (lhs->hmi_cnoa_sod_lan_chg_swt != rhs->hmi_cnoa_sod_lan_chg_swt) {
    return false;
  }
  // hmi_cnoa_auto_lane_chg_style_sw_sts
  if (lhs->hmi_cnoa_auto_lane_chg_style_sw_sts != rhs->hmi_cnoa_auto_lane_chg_style_sw_sts) {
    return false;
  }
  // hmi_cnoa_lrng_swt_on_off
  if (lhs->hmi_cnoa_lrng_swt_on_off != rhs->hmi_cnoa_lrng_swt_on_off) {
    return false;
  }
  // hmi_drvr_sod_req_contns_lrng
  if (lhs->hmi_drvr_sod_req_contns_lrng != rhs->hmi_drvr_sod_req_contns_lrng) {
    return false;
  }
  // apa_custom_prkg_req
  if (lhs->apa_custom_prkg_req != rhs->apa_custom_prkg_req) {
    return false;
  }
  // exit_custom_prkg_req
  if (lhs->exit_custom_prkg_req != rhs->exit_custom_prkg_req) {
    return false;
  }
  // cust_prk_slot_posn_angle_disp
  if (lhs->cust_prk_slot_posn_angle_disp != rhs->cust_prk_slot_posn_angle_disp) {
    return false;
  }
  // cust_prk_slot_posn_end_x1
  if (lhs->cust_prk_slot_posn_end_x1 != rhs->cust_prk_slot_posn_end_x1) {
    return false;
  }
  // cust_prk_slot_posn_end_x2
  if (lhs->cust_prk_slot_posn_end_x2 != rhs->cust_prk_slot_posn_end_x2) {
    return false;
  }
  // cust_prk_slot_posn_end_y1
  if (lhs->cust_prk_slot_posn_end_y1 != rhs->cust_prk_slot_posn_end_y1) {
    return false;
  }
  // cust_prk_slot_posn_end_y2
  if (lhs->cust_prk_slot_posn_end_y2 != rhs->cust_prk_slot_posn_end_y2) {
    return false;
  }
  // cust_prk_slot_posn_start_x1
  if (lhs->cust_prk_slot_posn_start_x1 != rhs->cust_prk_slot_posn_start_x1) {
    return false;
  }
  // cust_prk_slot_posn_start_x2
  if (lhs->cust_prk_slot_posn_start_x2 != rhs->cust_prk_slot_posn_start_x2) {
    return false;
  }
  // cust_prk_slot_posn_start_y1
  if (lhs->cust_prk_slot_posn_start_y1 != rhs->cust_prk_slot_posn_start_y1) {
    return false;
  }
  // cust_prk_slot_posn_start_y2
  if (lhs->cust_prk_slot_posn_start_y2 != rhs->cust_prk_slot_posn_start_y2) {
    return false;
  }
  // screem_oper
  if (lhs->screem_oper != rhs->screem_oper) {
    return false;
  }
  // hpa_max_swt
  if (lhs->hpa_max_swt != rhs->hpa_max_swt) {
    return false;
  }
  // rpa_select_par_in
  if (lhs->rpa_select_par_in != rhs->rpa_select_par_in) {
    return false;
  }
  // frnt_and_re_prkg_in_swt
  if (lhs->frnt_and_re_prkg_in_swt != rhs->frnt_and_re_prkg_in_swt) {
    return false;
  }
  // app_map_info_to_stm
  if (!deva_function_msgs__msg__AppMapInfoToStmStruct__are_equal(
      &(lhs->app_map_info_to_stm), &(rhs->app_map_info_to_stm)))
  {
    return false;
  }
  // app_to_stm_data
  if (!deva_function_msgs__msg__APPToStmDataStruct__are_equal(
      &(lhs->app_to_stm_data), &(rhs->app_to_stm_data)))
  {
    return false;
  }
  // aut_prkg_hand_slot_nr_req_topo_slot_id
  if (lhs->aut_prkg_hand_slot_nr_req_topo_slot_id != rhs->aut_prkg_hand_slot_nr_req_topo_slot_id) {
    return false;
  }
  // aut_prkg_hand_slot_nr_req_topo_slot_status
  if (lhs->aut_prkg_hand_slot_nr_req_topo_slot_status != rhs->aut_prkg_hand_slot_nr_req_topo_slot_status) {
    return false;
  }
  // aut_prkg_select_entrance
  if (lhs->aut_prkg_select_entrance != rhs->aut_prkg_select_entrance) {
    return false;
  }
  // aut_valt_prkg_cls_pop
  if (lhs->aut_valt_prkg_cls_pop != rhs->aut_valt_prkg_cls_pop) {
    return false;
  }
  // aut_valt_prkg_cover_results
  if (lhs->aut_valt_prkg_cover_results != rhs->aut_valt_prkg_cover_results) {
    return false;
  }
  // aut_valt_prkg_select_d2d
  if (lhs->aut_valt_prkg_select_d2d != rhs->aut_valt_prkg_select_d2d) {
    return false;
  }
  // aut_valt_prkg_topo_flr
  if (lhs->aut_valt_prkg_topo_flr != rhs->aut_valt_prkg_topo_flr) {
    return false;
  }
  // d2d_p_icon_clicked
  if (lhs->d2d_p_icon_clicked != rhs->d2d_p_icon_clicked) {
    return false;
  }
  // d2d_route_push_button_resp
  if (lhs->d2d_route_push_button_resp != rhs->d2d_route_push_button_resp) {
    return false;
  }
  // hmi_etc_traffic_sw_sts
  if (lhs->hmi_etc_traffic_sw_sts != rhs->hmi_etc_traffic_sw_sts) {
    return false;
  }
  // prkg_lrng_sts_hpa_lrng_sts
  if (lhs->prkg_lrng_sts_hpa_lrng_sts != rhs->prkg_lrng_sts_hpa_lrng_sts) {
    return false;
  }
  // prkg_slot_typ_select
  if (lhs->prkg_slot_typ_select != rhs->prkg_slot_typ_select) {
    return false;
  }
  // asy_aut_drvg_li_swt
  if (lhs->asy_aut_drvg_li_swt != rhs->asy_aut_drvg_li_swt) {
    return false;
  }
  // aut_valt_prkg_map_resp_map_id_list1
  if (lhs->aut_valt_prkg_map_resp_map_id_list1 != rhs->aut_valt_prkg_map_resp_map_id_list1) {
    return false;
  }
  // aut_valt_prkg_map_resp_map_id_list2
  if (lhs->aut_valt_prkg_map_resp_map_id_list2 != rhs->aut_valt_prkg_map_resp_map_id_list2) {
    return false;
  }
  // aut_valt_prkg_map_resp_map_id_list3
  if (lhs->aut_valt_prkg_map_resp_map_id_list3 != rhs->aut_valt_prkg_map_resp_map_id_list3) {
    return false;
  }
  // aut_valt_prkg_map_resp_map_id_list4
  if (lhs->aut_valt_prkg_map_resp_map_id_list4 != rhs->aut_valt_prkg_map_resp_map_id_list4) {
    return false;
  }
  // aut_valt_prkg_map_resp_map_id_result
  if (lhs->aut_valt_prkg_map_resp_map_id_result != rhs->aut_valt_prkg_map_resp_map_id_result) {
    return false;
  }
  // aut_valt_prkg_map_syncn_map_id_list1
  if (lhs->aut_valt_prkg_map_syncn_map_id_list1 != rhs->aut_valt_prkg_map_syncn_map_id_list1) {
    return false;
  }
  // aut_valt_prkg_map_syncn_map_id_list2
  if (lhs->aut_valt_prkg_map_syncn_map_id_list2 != rhs->aut_valt_prkg_map_syncn_map_id_list2) {
    return false;
  }
  // aut_valt_prkg_map_syncn_map_id_list3
  if (lhs->aut_valt_prkg_map_syncn_map_id_list3 != rhs->aut_valt_prkg_map_syncn_map_id_list3) {
    return false;
  }
  // aut_valt_prkg_map_syncn_map_id_list4
  if (lhs->aut_valt_prkg_map_syncn_map_id_list4 != rhs->aut_valt_prkg_map_syncn_map_id_list4) {
    return false;
  }
  // aut_valt_prkg_map_syncn_map_syncn
  if (lhs->aut_valt_prkg_map_syncn_map_syncn != rhs->aut_valt_prkg_map_syncn_map_syncn) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__UIToSTMData__copy(
  const deva_function_msgs__msg__UIToSTMData * input,
  deva_function_msgs__msg__UIToSTMData * output)
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
  // drvr_assc_sys_btn_push
  output->drvr_assc_sys_btn_push = input->drvr_assc_sys_btn_push;
  // swt_disp_on_and_off_req
  output->swt_disp_on_and_off_req = input->swt_disp_on_and_off_req;
  // nav_frnt_actv_sts
  output->nav_frnt_actv_sts = input->nav_frnt_actv_sts;
  // ihu_fail
  output->ihu_fail = input->ihu_fail;
  // scene_mod_seld
  output->scene_mod_seld = input->scene_mod_seld;
  // other_ar_psd_req
  output->other_ar_psd_req = input->other_ar_psd_req;
  // mob_dev_rpa_req_rspa_ctrl
  output->mob_dev_rpa_req_rspa_ctrl = input->mob_dev_rpa_req_rspa_ctrl;
  // mob_dev_rpa_req_rpa_req
  output->mob_dev_rpa_req_rpa_req = input->mob_dev_rpa_req_rpa_req;
  // mob_dev_rpa_req_rpa_out_mode_sub_t
  output->mob_dev_rpa_req_rpa_out_mode_sub_t = input->mob_dev_rpa_req_rpa_out_mode_sub_t;
  // mob_dev_rpa_req_mob_dev_sts
  output->mob_dev_rpa_req_mob_dev_sts = input->mob_dev_rpa_req_mob_dev_sts;
  // rem_straight_prkg_assi_seln_req
  output->rem_straight_prkg_assi_seln_req = input->rem_straight_prkg_assi_seln_req;
  // prkg_touch_coorn_req_touch_eve_typ
  output->prkg_touch_coorn_req_touch_eve_typ = input->prkg_touch_coorn_req_touch_eve_typ;
  // veh_spd_indcd_veh_spd_indcd
  output->veh_spd_indcd_veh_spd_indcd = input->veh_spd_indcd_veh_spd_indcd;
  // sm_aut_prkg_slot_nr_req
  output->sm_aut_prkg_slot_nr_req = input->sm_aut_prkg_slot_nr_req;
  // sm_prkg_in_or_out_and_cncl
  output->sm_prkg_in_or_out_and_cncl = input->sm_prkg_in_or_out_and_cncl;
  // sm_prkg_intrpt_reld_btn
  output->sm_prkg_intrpt_reld_btn = input->sm_prkg_intrpt_reld_btn;
  // sm_prkg_fct_swt
  output->sm_prkg_fct_swt = input->sm_prkg_fct_swt;
  // sm_aut_actv_prkg_fct_swt
  output->sm_aut_actv_prkg_fct_swt = input->sm_aut_actv_prkg_fct_swt;
  // full_screen_btn_push
  output->full_screen_btn_push = input->full_screen_btn_push;
  // sm_sel_push_apa_info
  output->sm_sel_push_apa_info = input->sm_sel_push_apa_info;
  // sm_hpa_soft_butn_enter_rq
  output->sm_hpa_soft_butn_enter_rq = input->sm_hpa_soft_butn_enter_rq;
  // sm_map_build_rq
  output->sm_map_build_rq = input->sm_map_build_rq;
  // sm_map_save_rq
  output->sm_map_save_rq = input->sm_map_save_rq;
  // sm_map_select_id
  output->sm_map_select_id = input->sm_map_select_id;
  // sm_drvr_assc_sys_park_mod
  output->sm_drvr_assc_sys_park_mod = input->sm_drvr_assc_sys_park_mod;
  // map_build_sts
  output->map_build_sts = input->map_build_sts;
  // aut_valt_prkg_map_src_req
  output->aut_valt_prkg_map_src_req = input->aut_valt_prkg_map_src_req;
  // aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  output->aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req = input->aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req;
  // aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  output->aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req = input->aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req;
  // aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  output->aut_valt_prkg_l2_btn_req_setting_voice_btn_req = input->aut_valt_prkg_l2_btn_req_setting_voice_btn_req;
  // aut_valt_prkg_map_oper_req_map_type
  output->aut_valt_prkg_map_oper_req_map_type = input->aut_valt_prkg_map_oper_req_map_type;
  // aut_valt_prkg_l1_btn_req
  output->aut_valt_prkg_l1_btn_req = input->aut_valt_prkg_l1_btn_req;
  // aut_valt_prkg_experience_resp
  output->aut_valt_prkg_experience_resp = input->aut_valt_prkg_experience_resp;
  // lo_spd_drvg_assi_sho_push_resp
  output->lo_spd_drvg_assi_sho_push_resp = input->lo_spd_drvg_assi_sho_push_resp;
  // aut_valt_prkg_sho_dst_push_swt
  output->aut_valt_prkg_sho_dst_push_swt = input->aut_valt_prkg_sho_dst_push_swt;
  // aut_valt_prkg_picture_upload_swt
  output->aut_valt_prkg_picture_upload_swt = input->aut_valt_prkg_picture_upload_swt;
  // aut_valt_prkg_ins_btn_req
  output->aut_valt_prkg_ins_btn_req = input->aut_valt_prkg_ins_btn_req;
  // aut_valt_prkg_swt
  output->aut_valt_prkg_swt = input->aut_valt_prkg_swt;
  // prof_pen_sts1
  output->prof_pen_sts1 = input->prof_pen_sts1;
  // aut_valt_prkg_map_oper_req2_map_type2
  output->aut_valt_prkg_map_oper_req2_map_type2 = input->aut_valt_prkg_map_oper_req2_map_type2;
  // aut_valt_prkg_map_oper_req2_map_list1
  output->aut_valt_prkg_map_oper_req2_map_list1 = input->aut_valt_prkg_map_oper_req2_map_list1;
  // aut_valt_prkg_map_oper_req2_map_list2
  output->aut_valt_prkg_map_oper_req2_map_list2 = input->aut_valt_prkg_map_oper_req2_map_list2;
  // aut_valt_prkg_map_oper_req2_map_list3
  output->aut_valt_prkg_map_oper_req2_map_list3 = input->aut_valt_prkg_map_oper_req2_map_list3;
  // aut_valt_prkg_map_oper_req2_map_list4
  output->aut_valt_prkg_map_oper_req2_map_list4 = input->aut_valt_prkg_map_oper_req2_map_list4;
  // aut_valt_prkg_l2_pop_btn_req
  output->aut_valt_prkg_l2_pop_btn_req = input->aut_valt_prkg_l2_pop_btn_req;
  // voice_active_adcu
  output->voice_active_adcu = input->voice_active_adcu;
  // btn_tr_sts1
  output->btn_tr_sts1 = input->btn_tr_sts1;
  // btn_unlck_sts1
  output->btn_unlck_sts1 = input->btn_unlck_sts1;
  // btn_lock_sts1
  output->btn_lock_sts1 = input->btn_lock_sts1;
  // btn_tr_sts1_key_id
  output->btn_tr_sts1_key_id = input->btn_tr_sts1_key_id;
  // btn_unlck_sts1_key_id
  output->btn_unlck_sts1_key_id = input->btn_unlck_sts1_key_id;
  // btn_lock_sts1_key_id
  output->btn_lock_sts1_key_id = input->btn_lock_sts1_key_id;
  // voice_ctrl_brk
  output->voice_ctrl_brk = input->voice_ctrl_brk;
  // lo_spd_drvg_assi_swt
  output->lo_spd_drvg_assi_swt = input->lo_spd_drvg_assi_swt;
  // prkg_frnt_or_re_select
  output->prkg_frnt_or_re_select = input->prkg_frnt_or_re_select;
  // tracking_back_assi_swt
  output->tracking_back_assi_swt = input->tracking_back_assi_swt;
  // prkg_emg_brk_sys_swt
  output->prkg_emg_brk_sys_swt = input->prkg_emg_brk_sys_swt;
  // aut_prkg_voice_swt
  output->aut_prkg_voice_swt = input->aut_prkg_voice_swt;
  // lsda_notif_push_req
  output->lsda_notif_push_req = input->lsda_notif_push_req;
  // monr_sys_sts
  output->monr_sys_sts = input->monr_sys_sts;
  // drvr_assc_wisdom_btn
  output->drvr_assc_wisdom_btn = input->drvr_assc_wisdom_btn;
  // scenario_mod
  output->scenario_mod = input->scenario_mod;
  // aut_prkg_voice_typ
  output->aut_prkg_voice_typ = input->aut_prkg_voice_typ;
  // mai_setting
  output->mai_setting = input->mai_setting;
  // aut_prkg_hand_slot_nr_req
  output->aut_prkg_hand_slot_nr_req = input->aut_prkg_hand_slot_nr_req;
  // asy_aut_drv_ctrl_typ_dim_req
  output->asy_aut_drv_ctrl_typ_dim_req = input->asy_aut_drv_ctrl_typ_dim_req;
  // hmi_drvr_sod_req_pilot
  output->hmi_drvr_sod_req_pilot = input->hmi_drvr_sod_req_pilot;
  // drvr_crs_ctrl_fct_actv_req
  output->drvr_crs_ctrl_fct_actv_req = input->drvr_crs_ctrl_fct_actv_req;
  // drvr_acc_fct_deactvn_req
  output->drvr_acc_fct_deactvn_req = input->drvr_acc_fct_deactvn_req;
  // drvr_acc_rs_set_spd_req
  output->drvr_acc_rs_set_spd_req = input->drvr_acc_rs_set_spd_req;
  // set_spd_for_crs_ctrl_fct_active
  output->set_spd_for_crs_ctrl_fct_active = input->set_spd_for_crs_ctrl_fct_active;
  // acc_fusn_trfc_req
  output->acc_fusn_trfc_req = input->acc_fusn_trfc_req;
  // crs_ctrl_ti_gap_adj_req
  output->crs_ctrl_ti_gap_adj_req = input->crs_ctrl_ti_gap_adj_req;
  // ve_spd_indcd_unit
  output->ve_spd_indcd_unit = input->ve_spd_indcd_unit;
  // veh_spd_indcd
  output->veh_spd_indcd = input->veh_spd_indcd;
  // drv_mod_req
  output->drv_mod_req = input->drv_mod_req;
  // cam_flts_sts_from_dhu
  output->cam_flts_sts_from_dhu = input->cam_flts_sts_from_dhu;
  // drvr_dec_sts_from_dhu
  output->drvr_dec_sts_from_dhu = input->drvr_dec_sts_from_dhu;
  // eye_gaze_zone
  output->eye_gaze_zone = input->eye_gaze_zone;
  // eye_gaze_zone_time
  output->eye_gaze_zone_time = input->eye_gaze_zone_time;
  // eye_on_road_from_dhu
  output->eye_on_road_from_dhu = input->eye_on_road_from_dhu;
  // eye_open_from_dhu_eye_open_deg_le
  output->eye_open_from_dhu_eye_open_deg_le = input->eye_open_from_dhu_eye_open_deg_le;
  // eye_open_from_dhu_eye_open_deg_ri
  output->eye_open_from_dhu_eye_open_deg_ri = input->eye_open_from_dhu_eye_open_deg_ri;
  // eye_open_from_dhu_eye_open_le
  output->eye_open_from_dhu_eye_open_le = input->eye_open_from_dhu_eye_open_le;
  // eye_open_from_dhu_eye_open_ri
  output->eye_open_from_dhu_eye_open_ri = input->eye_open_from_dhu_eye_open_ri;
  // eye_open_from_dhu_eye_visible_le
  output->eye_open_from_dhu_eye_visible_le = input->eye_open_from_dhu_eye_visible_le;
  // eye_open_from_dhu_eye_visible_ri
  output->eye_open_from_dhu_eye_visible_ri = input->eye_open_from_dhu_eye_visible_ri;
  // eye_open_from_dhu_face_visible
  output->eye_open_from_dhu_face_visible = input->eye_open_from_dhu_face_visible;
  // snsr_drvr_pfmnc_sts_from_dhu
  output->snsr_drvr_pfmnc_sts_from_dhu = input->snsr_drvr_pfmnc_sts_from_dhu;
  // voice_brst_mod
  output->voice_brst_mod = input->voice_brst_mod;
  // auto_lane_chg_style_sw_sts
  output->auto_lane_chg_style_sw_sts = input->auto_lane_chg_style_sw_sts;
  // nop_cofm_of_lan_chag_onoff
  output->nop_cofm_of_lan_chag_onoff = input->nop_cofm_of_lan_chag_onoff;
  // hmi_sod_lan_chg_switch
  output->hmi_sod_lan_chg_switch = input->hmi_sod_lan_chg_switch;
  // hmi_drvr_sod_req_chg
  output->hmi_drvr_sod_req_chg = input->hmi_drvr_sod_req_chg;
  // asy_noa_upgrade_switch
  output->asy_noa_upgrade_switch = input->asy_noa_upgrade_switch;
  // sfty_hmi_ena
  output->sfty_hmi_ena = input->sfty_hmi_ena;
  // nop_remind_typ_of_chg_lane_req
  output->nop_remind_typ_of_chg_lane_req = input->nop_remind_typ_of_chg_lane_req;
  // drvr_lane_chg_aut_actv_sts
  output->drvr_lane_chg_aut_actv_sts = input->drvr_lane_chg_aut_actv_sts;
  // auto_lane_chg_with_navi_sw_onoff
  output->auto_lane_chg_with_navi_sw_onoff = input->auto_lane_chg_with_navi_sw_onoff;
  // nav_noa_status_change_req
  output->nav_noa_status_change_req = input->nav_noa_status_change_req;
  // prkg_camera_store_req
  output->prkg_camera_store_req = input->prkg_camera_store_req;
  // voice_ctrl_prk
  output->voice_ctrl_prk = input->voice_ctrl_prk;
  // drift_prkg_req
  output->drift_prkg_req = input->drift_prkg_req;
  // hmi_drvr_sod_req_cnoa_main_page
  output->hmi_drvr_sod_req_cnoa_main_page = input->hmi_drvr_sod_req_cnoa_main_page;
  // hmi_drvr_sod_req_cnoa_lrng
  output->hmi_drvr_sod_req_cnoa_lrng = input->hmi_drvr_sod_req_cnoa_lrng;
  // hmi_drvr_sod_req_finish_lrng
  output->hmi_drvr_sod_req_finish_lrng = input->hmi_drvr_sod_req_finish_lrng;
  // hmi_cnoa_crs_swt_on_off
  output->hmi_cnoa_crs_swt_on_off = input->hmi_cnoa_crs_swt_on_off;
  // hmi_cnoa_sod_lan_chg_swt
  output->hmi_cnoa_sod_lan_chg_swt = input->hmi_cnoa_sod_lan_chg_swt;
  // hmi_cnoa_auto_lane_chg_style_sw_sts
  output->hmi_cnoa_auto_lane_chg_style_sw_sts = input->hmi_cnoa_auto_lane_chg_style_sw_sts;
  // hmi_cnoa_lrng_swt_on_off
  output->hmi_cnoa_lrng_swt_on_off = input->hmi_cnoa_lrng_swt_on_off;
  // hmi_drvr_sod_req_contns_lrng
  output->hmi_drvr_sod_req_contns_lrng = input->hmi_drvr_sod_req_contns_lrng;
  // apa_custom_prkg_req
  output->apa_custom_prkg_req = input->apa_custom_prkg_req;
  // exit_custom_prkg_req
  output->exit_custom_prkg_req = input->exit_custom_prkg_req;
  // cust_prk_slot_posn_angle_disp
  output->cust_prk_slot_posn_angle_disp = input->cust_prk_slot_posn_angle_disp;
  // cust_prk_slot_posn_end_x1
  output->cust_prk_slot_posn_end_x1 = input->cust_prk_slot_posn_end_x1;
  // cust_prk_slot_posn_end_x2
  output->cust_prk_slot_posn_end_x2 = input->cust_prk_slot_posn_end_x2;
  // cust_prk_slot_posn_end_y1
  output->cust_prk_slot_posn_end_y1 = input->cust_prk_slot_posn_end_y1;
  // cust_prk_slot_posn_end_y2
  output->cust_prk_slot_posn_end_y2 = input->cust_prk_slot_posn_end_y2;
  // cust_prk_slot_posn_start_x1
  output->cust_prk_slot_posn_start_x1 = input->cust_prk_slot_posn_start_x1;
  // cust_prk_slot_posn_start_x2
  output->cust_prk_slot_posn_start_x2 = input->cust_prk_slot_posn_start_x2;
  // cust_prk_slot_posn_start_y1
  output->cust_prk_slot_posn_start_y1 = input->cust_prk_slot_posn_start_y1;
  // cust_prk_slot_posn_start_y2
  output->cust_prk_slot_posn_start_y2 = input->cust_prk_slot_posn_start_y2;
  // screem_oper
  output->screem_oper = input->screem_oper;
  // hpa_max_swt
  output->hpa_max_swt = input->hpa_max_swt;
  // rpa_select_par_in
  output->rpa_select_par_in = input->rpa_select_par_in;
  // frnt_and_re_prkg_in_swt
  output->frnt_and_re_prkg_in_swt = input->frnt_and_re_prkg_in_swt;
  // app_map_info_to_stm
  if (!deva_function_msgs__msg__AppMapInfoToStmStruct__copy(
      &(input->app_map_info_to_stm), &(output->app_map_info_to_stm)))
  {
    return false;
  }
  // app_to_stm_data
  if (!deva_function_msgs__msg__APPToStmDataStruct__copy(
      &(input->app_to_stm_data), &(output->app_to_stm_data)))
  {
    return false;
  }
  // aut_prkg_hand_slot_nr_req_topo_slot_id
  output->aut_prkg_hand_slot_nr_req_topo_slot_id = input->aut_prkg_hand_slot_nr_req_topo_slot_id;
  // aut_prkg_hand_slot_nr_req_topo_slot_status
  output->aut_prkg_hand_slot_nr_req_topo_slot_status = input->aut_prkg_hand_slot_nr_req_topo_slot_status;
  // aut_prkg_select_entrance
  output->aut_prkg_select_entrance = input->aut_prkg_select_entrance;
  // aut_valt_prkg_cls_pop
  output->aut_valt_prkg_cls_pop = input->aut_valt_prkg_cls_pop;
  // aut_valt_prkg_cover_results
  output->aut_valt_prkg_cover_results = input->aut_valt_prkg_cover_results;
  // aut_valt_prkg_select_d2d
  output->aut_valt_prkg_select_d2d = input->aut_valt_prkg_select_d2d;
  // aut_valt_prkg_topo_flr
  output->aut_valt_prkg_topo_flr = input->aut_valt_prkg_topo_flr;
  // d2d_p_icon_clicked
  output->d2d_p_icon_clicked = input->d2d_p_icon_clicked;
  // d2d_route_push_button_resp
  output->d2d_route_push_button_resp = input->d2d_route_push_button_resp;
  // hmi_etc_traffic_sw_sts
  output->hmi_etc_traffic_sw_sts = input->hmi_etc_traffic_sw_sts;
  // prkg_lrng_sts_hpa_lrng_sts
  output->prkg_lrng_sts_hpa_lrng_sts = input->prkg_lrng_sts_hpa_lrng_sts;
  // prkg_slot_typ_select
  output->prkg_slot_typ_select = input->prkg_slot_typ_select;
  // asy_aut_drvg_li_swt
  output->asy_aut_drvg_li_swt = input->asy_aut_drvg_li_swt;
  // aut_valt_prkg_map_resp_map_id_list1
  output->aut_valt_prkg_map_resp_map_id_list1 = input->aut_valt_prkg_map_resp_map_id_list1;
  // aut_valt_prkg_map_resp_map_id_list2
  output->aut_valt_prkg_map_resp_map_id_list2 = input->aut_valt_prkg_map_resp_map_id_list2;
  // aut_valt_prkg_map_resp_map_id_list3
  output->aut_valt_prkg_map_resp_map_id_list3 = input->aut_valt_prkg_map_resp_map_id_list3;
  // aut_valt_prkg_map_resp_map_id_list4
  output->aut_valt_prkg_map_resp_map_id_list4 = input->aut_valt_prkg_map_resp_map_id_list4;
  // aut_valt_prkg_map_resp_map_id_result
  output->aut_valt_prkg_map_resp_map_id_result = input->aut_valt_prkg_map_resp_map_id_result;
  // aut_valt_prkg_map_syncn_map_id_list1
  output->aut_valt_prkg_map_syncn_map_id_list1 = input->aut_valt_prkg_map_syncn_map_id_list1;
  // aut_valt_prkg_map_syncn_map_id_list2
  output->aut_valt_prkg_map_syncn_map_id_list2 = input->aut_valt_prkg_map_syncn_map_id_list2;
  // aut_valt_prkg_map_syncn_map_id_list3
  output->aut_valt_prkg_map_syncn_map_id_list3 = input->aut_valt_prkg_map_syncn_map_id_list3;
  // aut_valt_prkg_map_syncn_map_id_list4
  output->aut_valt_prkg_map_syncn_map_id_list4 = input->aut_valt_prkg_map_syncn_map_id_list4;
  // aut_valt_prkg_map_syncn_map_syncn
  output->aut_valt_prkg_map_syncn_map_syncn = input->aut_valt_prkg_map_syncn_map_syncn;
  return true;
}

deva_function_msgs__msg__UIToSTMData *
deva_function_msgs__msg__UIToSTMData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__UIToSTMData * msg = (deva_function_msgs__msg__UIToSTMData *)allocator.allocate(sizeof(deva_function_msgs__msg__UIToSTMData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__UIToSTMData));
  bool success = deva_function_msgs__msg__UIToSTMData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__UIToSTMData__destroy(deva_function_msgs__msg__UIToSTMData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__UIToSTMData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__UIToSTMData__Sequence__init(deva_function_msgs__msg__UIToSTMData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__UIToSTMData * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__UIToSTMData *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__UIToSTMData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__UIToSTMData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__UIToSTMData__fini(&data[i - 1]);
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
deva_function_msgs__msg__UIToSTMData__Sequence__fini(deva_function_msgs__msg__UIToSTMData__Sequence * array)
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
      deva_function_msgs__msg__UIToSTMData__fini(&array->data[i]);
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

deva_function_msgs__msg__UIToSTMData__Sequence *
deva_function_msgs__msg__UIToSTMData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__UIToSTMData__Sequence * array = (deva_function_msgs__msg__UIToSTMData__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__UIToSTMData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__UIToSTMData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__UIToSTMData__Sequence__destroy(deva_function_msgs__msg__UIToSTMData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__UIToSTMData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__UIToSTMData__Sequence__are_equal(const deva_function_msgs__msg__UIToSTMData__Sequence * lhs, const deva_function_msgs__msg__UIToSTMData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__UIToSTMData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__UIToSTMData__Sequence__copy(
  const deva_function_msgs__msg__UIToSTMData__Sequence * input,
  deva_function_msgs__msg__UIToSTMData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__UIToSTMData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__UIToSTMData * data =
      (deva_function_msgs__msg__UIToSTMData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__UIToSTMData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__UIToSTMData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__UIToSTMData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
