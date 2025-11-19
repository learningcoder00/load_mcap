// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/UIToSTMData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__UI_TO_STM_DATA__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__UI_TO_STM_DATA__STRUCT_HPP_

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
// Member 'app_map_info_to_stm'
#include "deva_function_msgs/msg/detail/app_map_info_to_stm_struct__struct.hpp"
// Member 'app_to_stm_data'
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__UIToSTMData __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__UIToSTMData __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UIToSTMData_
{
  using Type = UIToSTMData_<ContainerAllocator>;

  explicit UIToSTMData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    app_map_info_to_stm(_init),
    app_to_stm_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drvr_assc_sys_btn_push = 0;
      this->swt_disp_on_and_off_req = 0;
      this->nav_frnt_actv_sts = 0;
      this->ihu_fail = 0;
      this->scene_mod_seld = 0;
      this->other_ar_psd_req = 0;
      this->mob_dev_rpa_req_rspa_ctrl = 0;
      this->mob_dev_rpa_req_rpa_req = 0;
      this->mob_dev_rpa_req_rpa_out_mode_sub_t = 0;
      this->mob_dev_rpa_req_mob_dev_sts = 0;
      this->rem_straight_prkg_assi_seln_req = 0;
      this->prkg_touch_coorn_req_touch_eve_typ = 0;
      this->veh_spd_indcd_veh_spd_indcd = 0;
      this->sm_aut_prkg_slot_nr_req = 0;
      this->sm_prkg_in_or_out_and_cncl = 0;
      this->sm_prkg_intrpt_reld_btn = 0;
      this->sm_prkg_fct_swt = 0;
      this->sm_aut_actv_prkg_fct_swt = 0;
      this->full_screen_btn_push = 0;
      this->sm_sel_push_apa_info = 0;
      this->sm_hpa_soft_butn_enter_rq = 0;
      this->sm_map_build_rq = 0;
      this->sm_map_save_rq = 0;
      this->sm_map_select_id = 0;
      this->sm_drvr_assc_sys_park_mod = 0;
      this->map_build_sts = 0;
      this->aut_valt_prkg_map_src_req = 0;
      this->aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req = 0;
      this->aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req = 0;
      this->aut_valt_prkg_l2_btn_req_setting_voice_btn_req = 0;
      this->aut_valt_prkg_map_oper_req_map_type = 0;
      this->aut_valt_prkg_l1_btn_req = 0;
      this->aut_valt_prkg_experience_resp = 0;
      this->lo_spd_drvg_assi_sho_push_resp = 0;
      this->aut_valt_prkg_sho_dst_push_swt = 0;
      this->aut_valt_prkg_picture_upload_swt = 0;
      this->aut_valt_prkg_ins_btn_req = 0;
      this->aut_valt_prkg_swt = 0;
      this->prof_pen_sts1 = 0;
      this->aut_valt_prkg_map_oper_req2_map_type2 = 0;
      this->aut_valt_prkg_map_oper_req2_map_list1 = 0ul;
      this->aut_valt_prkg_map_oper_req2_map_list2 = 0ul;
      this->aut_valt_prkg_map_oper_req2_map_list3 = 0ul;
      this->aut_valt_prkg_map_oper_req2_map_list4 = 0ul;
      this->aut_valt_prkg_l2_pop_btn_req = 0;
      this->voice_active_adcu = 0;
      this->btn_tr_sts1 = 0;
      this->btn_unlck_sts1 = 0;
      this->btn_lock_sts1 = 0;
      this->btn_tr_sts1_key_id = 0;
      this->btn_unlck_sts1_key_id = 0;
      this->btn_lock_sts1_key_id = 0;
      this->voice_ctrl_brk = 0;
      this->lo_spd_drvg_assi_swt = 0;
      this->prkg_frnt_or_re_select = 0;
      this->tracking_back_assi_swt = 0;
      this->prkg_emg_brk_sys_swt = 0;
      this->aut_prkg_voice_swt = 0;
      this->lsda_notif_push_req = 0;
      this->monr_sys_sts = 0;
      this->drvr_assc_wisdom_btn = 0;
      this->scenario_mod = 0;
      this->aut_prkg_voice_typ = 0;
      this->mai_setting = 0;
      this->aut_prkg_hand_slot_nr_req = 0;
      this->asy_aut_drv_ctrl_typ_dim_req = 0;
      this->hmi_drvr_sod_req_pilot = 0;
      this->drvr_crs_ctrl_fct_actv_req = 0;
      this->drvr_acc_fct_deactvn_req = 0;
      this->drvr_acc_rs_set_spd_req = 0;
      this->set_spd_for_crs_ctrl_fct_active = 0.0f;
      this->acc_fusn_trfc_req = 0;
      this->crs_ctrl_ti_gap_adj_req = 0;
      this->ve_spd_indcd_unit = 0;
      this->veh_spd_indcd = 0.0f;
      this->drv_mod_req = 0;
      this->cam_flts_sts_from_dhu = 0;
      this->drvr_dec_sts_from_dhu = 0;
      this->eye_gaze_zone = 0;
      this->eye_gaze_zone_time = 0;
      this->eye_on_road_from_dhu = 0;
      this->eye_open_from_dhu_eye_open_deg_le = 0.0f;
      this->eye_open_from_dhu_eye_open_deg_ri = 0.0f;
      this->eye_open_from_dhu_eye_open_le = 0;
      this->eye_open_from_dhu_eye_open_ri = 0;
      this->eye_open_from_dhu_eye_visible_le = 0;
      this->eye_open_from_dhu_eye_visible_ri = 0;
      this->eye_open_from_dhu_face_visible = 0;
      this->snsr_drvr_pfmnc_sts_from_dhu = 0;
      this->voice_brst_mod = 0;
      this->auto_lane_chg_style_sw_sts = 0;
      this->nop_cofm_of_lan_chag_onoff = 0;
      this->hmi_sod_lan_chg_switch = 0;
      this->hmi_drvr_sod_req_chg = 0;
      this->asy_noa_upgrade_switch = 0;
      this->sfty_hmi_ena = 0;
      this->nop_remind_typ_of_chg_lane_req = 0;
      this->drvr_lane_chg_aut_actv_sts = 0;
      this->auto_lane_chg_with_navi_sw_onoff = 0;
      this->nav_noa_status_change_req = 0;
      this->prkg_camera_store_req = 0;
      this->voice_ctrl_prk = 0;
      this->drift_prkg_req = 0;
      this->hmi_drvr_sod_req_cnoa_main_page = 0;
      this->hmi_drvr_sod_req_cnoa_lrng = 0;
      this->hmi_drvr_sod_req_finish_lrng = 0;
      this->hmi_cnoa_crs_swt_on_off = 0;
      this->hmi_cnoa_sod_lan_chg_swt = 0;
      this->hmi_cnoa_auto_lane_chg_style_sw_sts = 0;
      this->hmi_cnoa_lrng_swt_on_off = 0;
      this->hmi_drvr_sod_req_contns_lrng = 0;
      this->apa_custom_prkg_req = 0;
      this->exit_custom_prkg_req = 0;
      this->cust_prk_slot_posn_angle_disp = 0;
      this->cust_prk_slot_posn_end_x1 = 0;
      this->cust_prk_slot_posn_end_x2 = 0;
      this->cust_prk_slot_posn_end_y1 = 0;
      this->cust_prk_slot_posn_end_y2 = 0;
      this->cust_prk_slot_posn_start_x1 = 0;
      this->cust_prk_slot_posn_start_x2 = 0;
      this->cust_prk_slot_posn_start_y1 = 0;
      this->cust_prk_slot_posn_start_y2 = 0;
      this->screem_oper = 0;
      this->hpa_max_swt = false;
      this->rpa_select_par_in = 0;
      this->frnt_and_re_prkg_in_swt = 0;
      this->aut_prkg_hand_slot_nr_req_topo_slot_id = 0;
      this->aut_prkg_hand_slot_nr_req_topo_slot_status = 0;
      this->aut_prkg_select_entrance = 0;
      this->aut_valt_prkg_cls_pop = 0;
      this->aut_valt_prkg_cover_results = 0;
      this->aut_valt_prkg_select_d2d = 0;
      this->aut_valt_prkg_topo_flr = 0;
      this->d2d_p_icon_clicked = 0;
      this->d2d_route_push_button_resp = 0;
      this->hmi_etc_traffic_sw_sts = 0;
      this->prkg_lrng_sts_hpa_lrng_sts = 0;
      this->prkg_slot_typ_select = 0;
      this->asy_aut_drvg_li_swt = 0;
      this->aut_valt_prkg_map_resp_map_id_list1 = 0ul;
      this->aut_valt_prkg_map_resp_map_id_list2 = 0ul;
      this->aut_valt_prkg_map_resp_map_id_list3 = 0ul;
      this->aut_valt_prkg_map_resp_map_id_list4 = 0ul;
      this->aut_valt_prkg_map_resp_map_id_result = 0;
      this->aut_valt_prkg_map_syncn_map_id_list1 = 0ul;
      this->aut_valt_prkg_map_syncn_map_id_list2 = 0ul;
      this->aut_valt_prkg_map_syncn_map_id_list3 = 0ul;
      this->aut_valt_prkg_map_syncn_map_id_list4 = 0ul;
      this->aut_valt_prkg_map_syncn_map_syncn = 0;
    }
  }

  explicit UIToSTMData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    app_map_info_to_stm(_alloc, _init),
    app_to_stm_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drvr_assc_sys_btn_push = 0;
      this->swt_disp_on_and_off_req = 0;
      this->nav_frnt_actv_sts = 0;
      this->ihu_fail = 0;
      this->scene_mod_seld = 0;
      this->other_ar_psd_req = 0;
      this->mob_dev_rpa_req_rspa_ctrl = 0;
      this->mob_dev_rpa_req_rpa_req = 0;
      this->mob_dev_rpa_req_rpa_out_mode_sub_t = 0;
      this->mob_dev_rpa_req_mob_dev_sts = 0;
      this->rem_straight_prkg_assi_seln_req = 0;
      this->prkg_touch_coorn_req_touch_eve_typ = 0;
      this->veh_spd_indcd_veh_spd_indcd = 0;
      this->sm_aut_prkg_slot_nr_req = 0;
      this->sm_prkg_in_or_out_and_cncl = 0;
      this->sm_prkg_intrpt_reld_btn = 0;
      this->sm_prkg_fct_swt = 0;
      this->sm_aut_actv_prkg_fct_swt = 0;
      this->full_screen_btn_push = 0;
      this->sm_sel_push_apa_info = 0;
      this->sm_hpa_soft_butn_enter_rq = 0;
      this->sm_map_build_rq = 0;
      this->sm_map_save_rq = 0;
      this->sm_map_select_id = 0;
      this->sm_drvr_assc_sys_park_mod = 0;
      this->map_build_sts = 0;
      this->aut_valt_prkg_map_src_req = 0;
      this->aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req = 0;
      this->aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req = 0;
      this->aut_valt_prkg_l2_btn_req_setting_voice_btn_req = 0;
      this->aut_valt_prkg_map_oper_req_map_type = 0;
      this->aut_valt_prkg_l1_btn_req = 0;
      this->aut_valt_prkg_experience_resp = 0;
      this->lo_spd_drvg_assi_sho_push_resp = 0;
      this->aut_valt_prkg_sho_dst_push_swt = 0;
      this->aut_valt_prkg_picture_upload_swt = 0;
      this->aut_valt_prkg_ins_btn_req = 0;
      this->aut_valt_prkg_swt = 0;
      this->prof_pen_sts1 = 0;
      this->aut_valt_prkg_map_oper_req2_map_type2 = 0;
      this->aut_valt_prkg_map_oper_req2_map_list1 = 0ul;
      this->aut_valt_prkg_map_oper_req2_map_list2 = 0ul;
      this->aut_valt_prkg_map_oper_req2_map_list3 = 0ul;
      this->aut_valt_prkg_map_oper_req2_map_list4 = 0ul;
      this->aut_valt_prkg_l2_pop_btn_req = 0;
      this->voice_active_adcu = 0;
      this->btn_tr_sts1 = 0;
      this->btn_unlck_sts1 = 0;
      this->btn_lock_sts1 = 0;
      this->btn_tr_sts1_key_id = 0;
      this->btn_unlck_sts1_key_id = 0;
      this->btn_lock_sts1_key_id = 0;
      this->voice_ctrl_brk = 0;
      this->lo_spd_drvg_assi_swt = 0;
      this->prkg_frnt_or_re_select = 0;
      this->tracking_back_assi_swt = 0;
      this->prkg_emg_brk_sys_swt = 0;
      this->aut_prkg_voice_swt = 0;
      this->lsda_notif_push_req = 0;
      this->monr_sys_sts = 0;
      this->drvr_assc_wisdom_btn = 0;
      this->scenario_mod = 0;
      this->aut_prkg_voice_typ = 0;
      this->mai_setting = 0;
      this->aut_prkg_hand_slot_nr_req = 0;
      this->asy_aut_drv_ctrl_typ_dim_req = 0;
      this->hmi_drvr_sod_req_pilot = 0;
      this->drvr_crs_ctrl_fct_actv_req = 0;
      this->drvr_acc_fct_deactvn_req = 0;
      this->drvr_acc_rs_set_spd_req = 0;
      this->set_spd_for_crs_ctrl_fct_active = 0.0f;
      this->acc_fusn_trfc_req = 0;
      this->crs_ctrl_ti_gap_adj_req = 0;
      this->ve_spd_indcd_unit = 0;
      this->veh_spd_indcd = 0.0f;
      this->drv_mod_req = 0;
      this->cam_flts_sts_from_dhu = 0;
      this->drvr_dec_sts_from_dhu = 0;
      this->eye_gaze_zone = 0;
      this->eye_gaze_zone_time = 0;
      this->eye_on_road_from_dhu = 0;
      this->eye_open_from_dhu_eye_open_deg_le = 0.0f;
      this->eye_open_from_dhu_eye_open_deg_ri = 0.0f;
      this->eye_open_from_dhu_eye_open_le = 0;
      this->eye_open_from_dhu_eye_open_ri = 0;
      this->eye_open_from_dhu_eye_visible_le = 0;
      this->eye_open_from_dhu_eye_visible_ri = 0;
      this->eye_open_from_dhu_face_visible = 0;
      this->snsr_drvr_pfmnc_sts_from_dhu = 0;
      this->voice_brst_mod = 0;
      this->auto_lane_chg_style_sw_sts = 0;
      this->nop_cofm_of_lan_chag_onoff = 0;
      this->hmi_sod_lan_chg_switch = 0;
      this->hmi_drvr_sod_req_chg = 0;
      this->asy_noa_upgrade_switch = 0;
      this->sfty_hmi_ena = 0;
      this->nop_remind_typ_of_chg_lane_req = 0;
      this->drvr_lane_chg_aut_actv_sts = 0;
      this->auto_lane_chg_with_navi_sw_onoff = 0;
      this->nav_noa_status_change_req = 0;
      this->prkg_camera_store_req = 0;
      this->voice_ctrl_prk = 0;
      this->drift_prkg_req = 0;
      this->hmi_drvr_sod_req_cnoa_main_page = 0;
      this->hmi_drvr_sod_req_cnoa_lrng = 0;
      this->hmi_drvr_sod_req_finish_lrng = 0;
      this->hmi_cnoa_crs_swt_on_off = 0;
      this->hmi_cnoa_sod_lan_chg_swt = 0;
      this->hmi_cnoa_auto_lane_chg_style_sw_sts = 0;
      this->hmi_cnoa_lrng_swt_on_off = 0;
      this->hmi_drvr_sod_req_contns_lrng = 0;
      this->apa_custom_prkg_req = 0;
      this->exit_custom_prkg_req = 0;
      this->cust_prk_slot_posn_angle_disp = 0;
      this->cust_prk_slot_posn_end_x1 = 0;
      this->cust_prk_slot_posn_end_x2 = 0;
      this->cust_prk_slot_posn_end_y1 = 0;
      this->cust_prk_slot_posn_end_y2 = 0;
      this->cust_prk_slot_posn_start_x1 = 0;
      this->cust_prk_slot_posn_start_x2 = 0;
      this->cust_prk_slot_posn_start_y1 = 0;
      this->cust_prk_slot_posn_start_y2 = 0;
      this->screem_oper = 0;
      this->hpa_max_swt = false;
      this->rpa_select_par_in = 0;
      this->frnt_and_re_prkg_in_swt = 0;
      this->aut_prkg_hand_slot_nr_req_topo_slot_id = 0;
      this->aut_prkg_hand_slot_nr_req_topo_slot_status = 0;
      this->aut_prkg_select_entrance = 0;
      this->aut_valt_prkg_cls_pop = 0;
      this->aut_valt_prkg_cover_results = 0;
      this->aut_valt_prkg_select_d2d = 0;
      this->aut_valt_prkg_topo_flr = 0;
      this->d2d_p_icon_clicked = 0;
      this->d2d_route_push_button_resp = 0;
      this->hmi_etc_traffic_sw_sts = 0;
      this->prkg_lrng_sts_hpa_lrng_sts = 0;
      this->prkg_slot_typ_select = 0;
      this->asy_aut_drvg_li_swt = 0;
      this->aut_valt_prkg_map_resp_map_id_list1 = 0ul;
      this->aut_valt_prkg_map_resp_map_id_list2 = 0ul;
      this->aut_valt_prkg_map_resp_map_id_list3 = 0ul;
      this->aut_valt_prkg_map_resp_map_id_list4 = 0ul;
      this->aut_valt_prkg_map_resp_map_id_result = 0;
      this->aut_valt_prkg_map_syncn_map_id_list1 = 0ul;
      this->aut_valt_prkg_map_syncn_map_id_list2 = 0ul;
      this->aut_valt_prkg_map_syncn_map_id_list3 = 0ul;
      this->aut_valt_prkg_map_syncn_map_id_list4 = 0ul;
      this->aut_valt_prkg_map_syncn_map_syncn = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _drvr_assc_sys_btn_push_type =
    uint8_t;
  _drvr_assc_sys_btn_push_type drvr_assc_sys_btn_push;
  using _swt_disp_on_and_off_req_type =
    uint8_t;
  _swt_disp_on_and_off_req_type swt_disp_on_and_off_req;
  using _nav_frnt_actv_sts_type =
    uint8_t;
  _nav_frnt_actv_sts_type nav_frnt_actv_sts;
  using _ihu_fail_type =
    uint8_t;
  _ihu_fail_type ihu_fail;
  using _scene_mod_seld_type =
    uint8_t;
  _scene_mod_seld_type scene_mod_seld;
  using _other_ar_psd_req_type =
    uint8_t;
  _other_ar_psd_req_type other_ar_psd_req;
  using _mob_dev_rpa_req_rspa_ctrl_type =
    uint8_t;
  _mob_dev_rpa_req_rspa_ctrl_type mob_dev_rpa_req_rspa_ctrl;
  using _mob_dev_rpa_req_rpa_req_type =
    uint8_t;
  _mob_dev_rpa_req_rpa_req_type mob_dev_rpa_req_rpa_req;
  using _mob_dev_rpa_req_rpa_out_mode_sub_t_type =
    uint8_t;
  _mob_dev_rpa_req_rpa_out_mode_sub_t_type mob_dev_rpa_req_rpa_out_mode_sub_t;
  using _mob_dev_rpa_req_mob_dev_sts_type =
    uint8_t;
  _mob_dev_rpa_req_mob_dev_sts_type mob_dev_rpa_req_mob_dev_sts;
  using _rem_straight_prkg_assi_seln_req_type =
    uint8_t;
  _rem_straight_prkg_assi_seln_req_type rem_straight_prkg_assi_seln_req;
  using _prkg_touch_coorn_req_touch_eve_typ_type =
    uint8_t;
  _prkg_touch_coorn_req_touch_eve_typ_type prkg_touch_coorn_req_touch_eve_typ;
  using _veh_spd_indcd_veh_spd_indcd_type =
    uint16_t;
  _veh_spd_indcd_veh_spd_indcd_type veh_spd_indcd_veh_spd_indcd;
  using _sm_aut_prkg_slot_nr_req_type =
    uint8_t;
  _sm_aut_prkg_slot_nr_req_type sm_aut_prkg_slot_nr_req;
  using _sm_prkg_in_or_out_and_cncl_type =
    uint8_t;
  _sm_prkg_in_or_out_and_cncl_type sm_prkg_in_or_out_and_cncl;
  using _sm_prkg_intrpt_reld_btn_type =
    uint8_t;
  _sm_prkg_intrpt_reld_btn_type sm_prkg_intrpt_reld_btn;
  using _sm_prkg_fct_swt_type =
    uint8_t;
  _sm_prkg_fct_swt_type sm_prkg_fct_swt;
  using _sm_aut_actv_prkg_fct_swt_type =
    uint8_t;
  _sm_aut_actv_prkg_fct_swt_type sm_aut_actv_prkg_fct_swt;
  using _full_screen_btn_push_type =
    uint8_t;
  _full_screen_btn_push_type full_screen_btn_push;
  using _sm_sel_push_apa_info_type =
    uint8_t;
  _sm_sel_push_apa_info_type sm_sel_push_apa_info;
  using _sm_hpa_soft_butn_enter_rq_type =
    uint8_t;
  _sm_hpa_soft_butn_enter_rq_type sm_hpa_soft_butn_enter_rq;
  using _sm_map_build_rq_type =
    uint8_t;
  _sm_map_build_rq_type sm_map_build_rq;
  using _sm_map_save_rq_type =
    uint8_t;
  _sm_map_save_rq_type sm_map_save_rq;
  using _sm_map_select_id_type =
    uint8_t;
  _sm_map_select_id_type sm_map_select_id;
  using _sm_drvr_assc_sys_park_mod_type =
    uint8_t;
  _sm_drvr_assc_sys_park_mod_type sm_drvr_assc_sys_park_mod;
  using _map_build_sts_type =
    uint8_t;
  _map_build_sts_type map_build_sts;
  using _aut_valt_prkg_map_src_req_type =
    uint8_t;
  _aut_valt_prkg_map_src_req_type aut_valt_prkg_map_src_req;
  using _aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req_type =
    uint8_t;
  _aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req_type aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req;
  using _aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req_type =
    uint8_t;
  _aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req_type aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req;
  using _aut_valt_prkg_l2_btn_req_setting_voice_btn_req_type =
    uint8_t;
  _aut_valt_prkg_l2_btn_req_setting_voice_btn_req_type aut_valt_prkg_l2_btn_req_setting_voice_btn_req;
  using _aut_valt_prkg_map_oper_req_map_type_type =
    uint8_t;
  _aut_valt_prkg_map_oper_req_map_type_type aut_valt_prkg_map_oper_req_map_type;
  using _aut_valt_prkg_l1_btn_req_type =
    uint8_t;
  _aut_valt_prkg_l1_btn_req_type aut_valt_prkg_l1_btn_req;
  using _aut_valt_prkg_experience_resp_type =
    uint8_t;
  _aut_valt_prkg_experience_resp_type aut_valt_prkg_experience_resp;
  using _lo_spd_drvg_assi_sho_push_resp_type =
    uint8_t;
  _lo_spd_drvg_assi_sho_push_resp_type lo_spd_drvg_assi_sho_push_resp;
  using _aut_valt_prkg_sho_dst_push_swt_type =
    uint8_t;
  _aut_valt_prkg_sho_dst_push_swt_type aut_valt_prkg_sho_dst_push_swt;
  using _aut_valt_prkg_picture_upload_swt_type =
    uint8_t;
  _aut_valt_prkg_picture_upload_swt_type aut_valt_prkg_picture_upload_swt;
  using _aut_valt_prkg_ins_btn_req_type =
    uint8_t;
  _aut_valt_prkg_ins_btn_req_type aut_valt_prkg_ins_btn_req;
  using _aut_valt_prkg_swt_type =
    uint8_t;
  _aut_valt_prkg_swt_type aut_valt_prkg_swt;
  using _prof_pen_sts1_type =
    uint8_t;
  _prof_pen_sts1_type prof_pen_sts1;
  using _aut_valt_prkg_map_oper_req2_map_type2_type =
    uint8_t;
  _aut_valt_prkg_map_oper_req2_map_type2_type aut_valt_prkg_map_oper_req2_map_type2;
  using _aut_valt_prkg_map_oper_req2_map_list1_type =
    uint32_t;
  _aut_valt_prkg_map_oper_req2_map_list1_type aut_valt_prkg_map_oper_req2_map_list1;
  using _aut_valt_prkg_map_oper_req2_map_list2_type =
    uint32_t;
  _aut_valt_prkg_map_oper_req2_map_list2_type aut_valt_prkg_map_oper_req2_map_list2;
  using _aut_valt_prkg_map_oper_req2_map_list3_type =
    uint32_t;
  _aut_valt_prkg_map_oper_req2_map_list3_type aut_valt_prkg_map_oper_req2_map_list3;
  using _aut_valt_prkg_map_oper_req2_map_list4_type =
    uint32_t;
  _aut_valt_prkg_map_oper_req2_map_list4_type aut_valt_prkg_map_oper_req2_map_list4;
  using _aut_valt_prkg_l2_pop_btn_req_type =
    uint8_t;
  _aut_valt_prkg_l2_pop_btn_req_type aut_valt_prkg_l2_pop_btn_req;
  using _voice_active_adcu_type =
    uint8_t;
  _voice_active_adcu_type voice_active_adcu;
  using _btn_tr_sts1_type =
    uint8_t;
  _btn_tr_sts1_type btn_tr_sts1;
  using _btn_unlck_sts1_type =
    uint8_t;
  _btn_unlck_sts1_type btn_unlck_sts1;
  using _btn_lock_sts1_type =
    uint8_t;
  _btn_lock_sts1_type btn_lock_sts1;
  using _btn_tr_sts1_key_id_type =
    uint8_t;
  _btn_tr_sts1_key_id_type btn_tr_sts1_key_id;
  using _btn_unlck_sts1_key_id_type =
    uint8_t;
  _btn_unlck_sts1_key_id_type btn_unlck_sts1_key_id;
  using _btn_lock_sts1_key_id_type =
    uint8_t;
  _btn_lock_sts1_key_id_type btn_lock_sts1_key_id;
  using _voice_ctrl_brk_type =
    uint8_t;
  _voice_ctrl_brk_type voice_ctrl_brk;
  using _lo_spd_drvg_assi_swt_type =
    uint8_t;
  _lo_spd_drvg_assi_swt_type lo_spd_drvg_assi_swt;
  using _prkg_frnt_or_re_select_type =
    uint8_t;
  _prkg_frnt_or_re_select_type prkg_frnt_or_re_select;
  using _tracking_back_assi_swt_type =
    uint8_t;
  _tracking_back_assi_swt_type tracking_back_assi_swt;
  using _prkg_emg_brk_sys_swt_type =
    uint8_t;
  _prkg_emg_brk_sys_swt_type prkg_emg_brk_sys_swt;
  using _aut_prkg_voice_swt_type =
    uint8_t;
  _aut_prkg_voice_swt_type aut_prkg_voice_swt;
  using _lsda_notif_push_req_type =
    uint8_t;
  _lsda_notif_push_req_type lsda_notif_push_req;
  using _monr_sys_sts_type =
    uint8_t;
  _monr_sys_sts_type monr_sys_sts;
  using _drvr_assc_wisdom_btn_type =
    uint8_t;
  _drvr_assc_wisdom_btn_type drvr_assc_wisdom_btn;
  using _scenario_mod_type =
    uint8_t;
  _scenario_mod_type scenario_mod;
  using _aut_prkg_voice_typ_type =
    uint8_t;
  _aut_prkg_voice_typ_type aut_prkg_voice_typ;
  using _mai_setting_type =
    uint8_t;
  _mai_setting_type mai_setting;
  using _aut_prkg_hand_slot_nr_req_type =
    uint8_t;
  _aut_prkg_hand_slot_nr_req_type aut_prkg_hand_slot_nr_req;
  using _asy_aut_drv_ctrl_typ_dim_req_type =
    uint8_t;
  _asy_aut_drv_ctrl_typ_dim_req_type asy_aut_drv_ctrl_typ_dim_req;
  using _hmi_drvr_sod_req_pilot_type =
    uint8_t;
  _hmi_drvr_sod_req_pilot_type hmi_drvr_sod_req_pilot;
  using _drvr_crs_ctrl_fct_actv_req_type =
    uint8_t;
  _drvr_crs_ctrl_fct_actv_req_type drvr_crs_ctrl_fct_actv_req;
  using _drvr_acc_fct_deactvn_req_type =
    uint8_t;
  _drvr_acc_fct_deactvn_req_type drvr_acc_fct_deactvn_req;
  using _drvr_acc_rs_set_spd_req_type =
    uint8_t;
  _drvr_acc_rs_set_spd_req_type drvr_acc_rs_set_spd_req;
  using _set_spd_for_crs_ctrl_fct_active_type =
    float;
  _set_spd_for_crs_ctrl_fct_active_type set_spd_for_crs_ctrl_fct_active;
  using _acc_fusn_trfc_req_type =
    uint8_t;
  _acc_fusn_trfc_req_type acc_fusn_trfc_req;
  using _crs_ctrl_ti_gap_adj_req_type =
    uint8_t;
  _crs_ctrl_ti_gap_adj_req_type crs_ctrl_ti_gap_adj_req;
  using _ve_spd_indcd_unit_type =
    uint8_t;
  _ve_spd_indcd_unit_type ve_spd_indcd_unit;
  using _veh_spd_indcd_type =
    float;
  _veh_spd_indcd_type veh_spd_indcd;
  using _drv_mod_req_type =
    uint8_t;
  _drv_mod_req_type drv_mod_req;
  using _cam_flts_sts_from_dhu_type =
    uint8_t;
  _cam_flts_sts_from_dhu_type cam_flts_sts_from_dhu;
  using _drvr_dec_sts_from_dhu_type =
    uint8_t;
  _drvr_dec_sts_from_dhu_type drvr_dec_sts_from_dhu;
  using _eye_gaze_zone_type =
    uint8_t;
  _eye_gaze_zone_type eye_gaze_zone;
  using _eye_gaze_zone_time_type =
    uint16_t;
  _eye_gaze_zone_time_type eye_gaze_zone_time;
  using _eye_on_road_from_dhu_type =
    uint8_t;
  _eye_on_road_from_dhu_type eye_on_road_from_dhu;
  using _eye_open_from_dhu_eye_open_deg_le_type =
    float;
  _eye_open_from_dhu_eye_open_deg_le_type eye_open_from_dhu_eye_open_deg_le;
  using _eye_open_from_dhu_eye_open_deg_ri_type =
    float;
  _eye_open_from_dhu_eye_open_deg_ri_type eye_open_from_dhu_eye_open_deg_ri;
  using _eye_open_from_dhu_eye_open_le_type =
    uint8_t;
  _eye_open_from_dhu_eye_open_le_type eye_open_from_dhu_eye_open_le;
  using _eye_open_from_dhu_eye_open_ri_type =
    uint8_t;
  _eye_open_from_dhu_eye_open_ri_type eye_open_from_dhu_eye_open_ri;
  using _eye_open_from_dhu_eye_visible_le_type =
    uint8_t;
  _eye_open_from_dhu_eye_visible_le_type eye_open_from_dhu_eye_visible_le;
  using _eye_open_from_dhu_eye_visible_ri_type =
    uint8_t;
  _eye_open_from_dhu_eye_visible_ri_type eye_open_from_dhu_eye_visible_ri;
  using _eye_open_from_dhu_face_visible_type =
    uint8_t;
  _eye_open_from_dhu_face_visible_type eye_open_from_dhu_face_visible;
  using _snsr_drvr_pfmnc_sts_from_dhu_type =
    uint8_t;
  _snsr_drvr_pfmnc_sts_from_dhu_type snsr_drvr_pfmnc_sts_from_dhu;
  using _voice_brst_mod_type =
    uint8_t;
  _voice_brst_mod_type voice_brst_mod;
  using _auto_lane_chg_style_sw_sts_type =
    uint8_t;
  _auto_lane_chg_style_sw_sts_type auto_lane_chg_style_sw_sts;
  using _nop_cofm_of_lan_chag_onoff_type =
    uint8_t;
  _nop_cofm_of_lan_chag_onoff_type nop_cofm_of_lan_chag_onoff;
  using _hmi_sod_lan_chg_switch_type =
    uint8_t;
  _hmi_sod_lan_chg_switch_type hmi_sod_lan_chg_switch;
  using _hmi_drvr_sod_req_chg_type =
    uint8_t;
  _hmi_drvr_sod_req_chg_type hmi_drvr_sod_req_chg;
  using _asy_noa_upgrade_switch_type =
    uint8_t;
  _asy_noa_upgrade_switch_type asy_noa_upgrade_switch;
  using _sfty_hmi_ena_type =
    uint8_t;
  _sfty_hmi_ena_type sfty_hmi_ena;
  using _nop_remind_typ_of_chg_lane_req_type =
    uint8_t;
  _nop_remind_typ_of_chg_lane_req_type nop_remind_typ_of_chg_lane_req;
  using _drvr_lane_chg_aut_actv_sts_type =
    uint8_t;
  _drvr_lane_chg_aut_actv_sts_type drvr_lane_chg_aut_actv_sts;
  using _auto_lane_chg_with_navi_sw_onoff_type =
    uint8_t;
  _auto_lane_chg_with_navi_sw_onoff_type auto_lane_chg_with_navi_sw_onoff;
  using _nav_noa_status_change_req_type =
    uint8_t;
  _nav_noa_status_change_req_type nav_noa_status_change_req;
  using _prkg_camera_store_req_type =
    uint8_t;
  _prkg_camera_store_req_type prkg_camera_store_req;
  using _voice_ctrl_prk_type =
    uint8_t;
  _voice_ctrl_prk_type voice_ctrl_prk;
  using _drift_prkg_req_type =
    uint8_t;
  _drift_prkg_req_type drift_prkg_req;
  using _hmi_drvr_sod_req_cnoa_main_page_type =
    uint8_t;
  _hmi_drvr_sod_req_cnoa_main_page_type hmi_drvr_sod_req_cnoa_main_page;
  using _hmi_drvr_sod_req_cnoa_lrng_type =
    uint8_t;
  _hmi_drvr_sod_req_cnoa_lrng_type hmi_drvr_sod_req_cnoa_lrng;
  using _hmi_drvr_sod_req_finish_lrng_type =
    uint8_t;
  _hmi_drvr_sod_req_finish_lrng_type hmi_drvr_sod_req_finish_lrng;
  using _hmi_cnoa_crs_swt_on_off_type =
    uint8_t;
  _hmi_cnoa_crs_swt_on_off_type hmi_cnoa_crs_swt_on_off;
  using _hmi_cnoa_sod_lan_chg_swt_type =
    uint8_t;
  _hmi_cnoa_sod_lan_chg_swt_type hmi_cnoa_sod_lan_chg_swt;
  using _hmi_cnoa_auto_lane_chg_style_sw_sts_type =
    uint8_t;
  _hmi_cnoa_auto_lane_chg_style_sw_sts_type hmi_cnoa_auto_lane_chg_style_sw_sts;
  using _hmi_cnoa_lrng_swt_on_off_type =
    uint8_t;
  _hmi_cnoa_lrng_swt_on_off_type hmi_cnoa_lrng_swt_on_off;
  using _hmi_drvr_sod_req_contns_lrng_type =
    uint8_t;
  _hmi_drvr_sod_req_contns_lrng_type hmi_drvr_sod_req_contns_lrng;
  using _apa_custom_prkg_req_type =
    uint8_t;
  _apa_custom_prkg_req_type apa_custom_prkg_req;
  using _exit_custom_prkg_req_type =
    uint8_t;
  _exit_custom_prkg_req_type exit_custom_prkg_req;
  using _cust_prk_slot_posn_angle_disp_type =
    int16_t;
  _cust_prk_slot_posn_angle_disp_type cust_prk_slot_posn_angle_disp;
  using _cust_prk_slot_posn_end_x1_type =
    int16_t;
  _cust_prk_slot_posn_end_x1_type cust_prk_slot_posn_end_x1;
  using _cust_prk_slot_posn_end_x2_type =
    int16_t;
  _cust_prk_slot_posn_end_x2_type cust_prk_slot_posn_end_x2;
  using _cust_prk_slot_posn_end_y1_type =
    int16_t;
  _cust_prk_slot_posn_end_y1_type cust_prk_slot_posn_end_y1;
  using _cust_prk_slot_posn_end_y2_type =
    int16_t;
  _cust_prk_slot_posn_end_y2_type cust_prk_slot_posn_end_y2;
  using _cust_prk_slot_posn_start_x1_type =
    int16_t;
  _cust_prk_slot_posn_start_x1_type cust_prk_slot_posn_start_x1;
  using _cust_prk_slot_posn_start_x2_type =
    int16_t;
  _cust_prk_slot_posn_start_x2_type cust_prk_slot_posn_start_x2;
  using _cust_prk_slot_posn_start_y1_type =
    int16_t;
  _cust_prk_slot_posn_start_y1_type cust_prk_slot_posn_start_y1;
  using _cust_prk_slot_posn_start_y2_type =
    int16_t;
  _cust_prk_slot_posn_start_y2_type cust_prk_slot_posn_start_y2;
  using _screem_oper_type =
    uint8_t;
  _screem_oper_type screem_oper;
  using _hpa_max_swt_type =
    bool;
  _hpa_max_swt_type hpa_max_swt;
  using _rpa_select_par_in_type =
    uint8_t;
  _rpa_select_par_in_type rpa_select_par_in;
  using _frnt_and_re_prkg_in_swt_type =
    uint8_t;
  _frnt_and_re_prkg_in_swt_type frnt_and_re_prkg_in_swt;
  using _app_map_info_to_stm_type =
    deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator>;
  _app_map_info_to_stm_type app_map_info_to_stm;
  using _app_to_stm_data_type =
    deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator>;
  _app_to_stm_data_type app_to_stm_data;
  using _aut_prkg_hand_slot_nr_req_topo_slot_id_type =
    uint8_t;
  _aut_prkg_hand_slot_nr_req_topo_slot_id_type aut_prkg_hand_slot_nr_req_topo_slot_id;
  using _aut_prkg_hand_slot_nr_req_topo_slot_status_type =
    uint8_t;
  _aut_prkg_hand_slot_nr_req_topo_slot_status_type aut_prkg_hand_slot_nr_req_topo_slot_status;
  using _aut_prkg_select_entrance_type =
    uint8_t;
  _aut_prkg_select_entrance_type aut_prkg_select_entrance;
  using _aut_valt_prkg_cls_pop_type =
    uint8_t;
  _aut_valt_prkg_cls_pop_type aut_valt_prkg_cls_pop;
  using _aut_valt_prkg_cover_results_type =
    uint8_t;
  _aut_valt_prkg_cover_results_type aut_valt_prkg_cover_results;
  using _aut_valt_prkg_select_d2d_type =
    uint8_t;
  _aut_valt_prkg_select_d2d_type aut_valt_prkg_select_d2d;
  using _aut_valt_prkg_topo_flr_type =
    int8_t;
  _aut_valt_prkg_topo_flr_type aut_valt_prkg_topo_flr;
  using _d2d_p_icon_clicked_type =
    uint8_t;
  _d2d_p_icon_clicked_type d2d_p_icon_clicked;
  using _d2d_route_push_button_resp_type =
    uint8_t;
  _d2d_route_push_button_resp_type d2d_route_push_button_resp;
  using _hmi_etc_traffic_sw_sts_type =
    uint8_t;
  _hmi_etc_traffic_sw_sts_type hmi_etc_traffic_sw_sts;
  using _prkg_lrng_sts_hpa_lrng_sts_type =
    uint8_t;
  _prkg_lrng_sts_hpa_lrng_sts_type prkg_lrng_sts_hpa_lrng_sts;
  using _prkg_slot_typ_select_type =
    uint8_t;
  _prkg_slot_typ_select_type prkg_slot_typ_select;
  using _asy_aut_drvg_li_swt_type =
    uint8_t;
  _asy_aut_drvg_li_swt_type asy_aut_drvg_li_swt;
  using _aut_valt_prkg_map_resp_map_id_list1_type =
    uint32_t;
  _aut_valt_prkg_map_resp_map_id_list1_type aut_valt_prkg_map_resp_map_id_list1;
  using _aut_valt_prkg_map_resp_map_id_list2_type =
    uint32_t;
  _aut_valt_prkg_map_resp_map_id_list2_type aut_valt_prkg_map_resp_map_id_list2;
  using _aut_valt_prkg_map_resp_map_id_list3_type =
    uint32_t;
  _aut_valt_prkg_map_resp_map_id_list3_type aut_valt_prkg_map_resp_map_id_list3;
  using _aut_valt_prkg_map_resp_map_id_list4_type =
    uint32_t;
  _aut_valt_prkg_map_resp_map_id_list4_type aut_valt_prkg_map_resp_map_id_list4;
  using _aut_valt_prkg_map_resp_map_id_result_type =
    uint8_t;
  _aut_valt_prkg_map_resp_map_id_result_type aut_valt_prkg_map_resp_map_id_result;
  using _aut_valt_prkg_map_syncn_map_id_list1_type =
    uint32_t;
  _aut_valt_prkg_map_syncn_map_id_list1_type aut_valt_prkg_map_syncn_map_id_list1;
  using _aut_valt_prkg_map_syncn_map_id_list2_type =
    uint32_t;
  _aut_valt_prkg_map_syncn_map_id_list2_type aut_valt_prkg_map_syncn_map_id_list2;
  using _aut_valt_prkg_map_syncn_map_id_list3_type =
    uint32_t;
  _aut_valt_prkg_map_syncn_map_id_list3_type aut_valt_prkg_map_syncn_map_id_list3;
  using _aut_valt_prkg_map_syncn_map_id_list4_type =
    uint32_t;
  _aut_valt_prkg_map_syncn_map_id_list4_type aut_valt_prkg_map_syncn_map_id_list4;
  using _aut_valt_prkg_map_syncn_map_syncn_type =
    uint8_t;
  _aut_valt_prkg_map_syncn_map_syncn_type aut_valt_prkg_map_syncn_map_syncn;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__drvr_assc_sys_btn_push(
    const uint8_t & _arg)
  {
    this->drvr_assc_sys_btn_push = _arg;
    return *this;
  }
  Type & set__swt_disp_on_and_off_req(
    const uint8_t & _arg)
  {
    this->swt_disp_on_and_off_req = _arg;
    return *this;
  }
  Type & set__nav_frnt_actv_sts(
    const uint8_t & _arg)
  {
    this->nav_frnt_actv_sts = _arg;
    return *this;
  }
  Type & set__ihu_fail(
    const uint8_t & _arg)
  {
    this->ihu_fail = _arg;
    return *this;
  }
  Type & set__scene_mod_seld(
    const uint8_t & _arg)
  {
    this->scene_mod_seld = _arg;
    return *this;
  }
  Type & set__other_ar_psd_req(
    const uint8_t & _arg)
  {
    this->other_ar_psd_req = _arg;
    return *this;
  }
  Type & set__mob_dev_rpa_req_rspa_ctrl(
    const uint8_t & _arg)
  {
    this->mob_dev_rpa_req_rspa_ctrl = _arg;
    return *this;
  }
  Type & set__mob_dev_rpa_req_rpa_req(
    const uint8_t & _arg)
  {
    this->mob_dev_rpa_req_rpa_req = _arg;
    return *this;
  }
  Type & set__mob_dev_rpa_req_rpa_out_mode_sub_t(
    const uint8_t & _arg)
  {
    this->mob_dev_rpa_req_rpa_out_mode_sub_t = _arg;
    return *this;
  }
  Type & set__mob_dev_rpa_req_mob_dev_sts(
    const uint8_t & _arg)
  {
    this->mob_dev_rpa_req_mob_dev_sts = _arg;
    return *this;
  }
  Type & set__rem_straight_prkg_assi_seln_req(
    const uint8_t & _arg)
  {
    this->rem_straight_prkg_assi_seln_req = _arg;
    return *this;
  }
  Type & set__prkg_touch_coorn_req_touch_eve_typ(
    const uint8_t & _arg)
  {
    this->prkg_touch_coorn_req_touch_eve_typ = _arg;
    return *this;
  }
  Type & set__veh_spd_indcd_veh_spd_indcd(
    const uint16_t & _arg)
  {
    this->veh_spd_indcd_veh_spd_indcd = _arg;
    return *this;
  }
  Type & set__sm_aut_prkg_slot_nr_req(
    const uint8_t & _arg)
  {
    this->sm_aut_prkg_slot_nr_req = _arg;
    return *this;
  }
  Type & set__sm_prkg_in_or_out_and_cncl(
    const uint8_t & _arg)
  {
    this->sm_prkg_in_or_out_and_cncl = _arg;
    return *this;
  }
  Type & set__sm_prkg_intrpt_reld_btn(
    const uint8_t & _arg)
  {
    this->sm_prkg_intrpt_reld_btn = _arg;
    return *this;
  }
  Type & set__sm_prkg_fct_swt(
    const uint8_t & _arg)
  {
    this->sm_prkg_fct_swt = _arg;
    return *this;
  }
  Type & set__sm_aut_actv_prkg_fct_swt(
    const uint8_t & _arg)
  {
    this->sm_aut_actv_prkg_fct_swt = _arg;
    return *this;
  }
  Type & set__full_screen_btn_push(
    const uint8_t & _arg)
  {
    this->full_screen_btn_push = _arg;
    return *this;
  }
  Type & set__sm_sel_push_apa_info(
    const uint8_t & _arg)
  {
    this->sm_sel_push_apa_info = _arg;
    return *this;
  }
  Type & set__sm_hpa_soft_butn_enter_rq(
    const uint8_t & _arg)
  {
    this->sm_hpa_soft_butn_enter_rq = _arg;
    return *this;
  }
  Type & set__sm_map_build_rq(
    const uint8_t & _arg)
  {
    this->sm_map_build_rq = _arg;
    return *this;
  }
  Type & set__sm_map_save_rq(
    const uint8_t & _arg)
  {
    this->sm_map_save_rq = _arg;
    return *this;
  }
  Type & set__sm_map_select_id(
    const uint8_t & _arg)
  {
    this->sm_map_select_id = _arg;
    return *this;
  }
  Type & set__sm_drvr_assc_sys_park_mod(
    const uint8_t & _arg)
  {
    this->sm_drvr_assc_sys_park_mod = _arg;
    return *this;
  }
  Type & set__map_build_sts(
    const uint8_t & _arg)
  {
    this->map_build_sts = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_src_req(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_map_src_req = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_l2_btn_req_setting_voice_btn_req(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_l2_btn_req_setting_voice_btn_req = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_oper_req_map_type(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_map_oper_req_map_type = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_l1_btn_req(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_l1_btn_req = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_experience_resp(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_experience_resp = _arg;
    return *this;
  }
  Type & set__lo_spd_drvg_assi_sho_push_resp(
    const uint8_t & _arg)
  {
    this->lo_spd_drvg_assi_sho_push_resp = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_sho_dst_push_swt(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_sho_dst_push_swt = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_picture_upload_swt(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_picture_upload_swt = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_ins_btn_req(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_ins_btn_req = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_swt(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_swt = _arg;
    return *this;
  }
  Type & set__prof_pen_sts1(
    const uint8_t & _arg)
  {
    this->prof_pen_sts1 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_oper_req2_map_type2(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_map_oper_req2_map_type2 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_oper_req2_map_list1(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_oper_req2_map_list1 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_oper_req2_map_list2(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_oper_req2_map_list2 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_oper_req2_map_list3(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_oper_req2_map_list3 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_oper_req2_map_list4(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_oper_req2_map_list4 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_l2_pop_btn_req(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_l2_pop_btn_req = _arg;
    return *this;
  }
  Type & set__voice_active_adcu(
    const uint8_t & _arg)
  {
    this->voice_active_adcu = _arg;
    return *this;
  }
  Type & set__btn_tr_sts1(
    const uint8_t & _arg)
  {
    this->btn_tr_sts1 = _arg;
    return *this;
  }
  Type & set__btn_unlck_sts1(
    const uint8_t & _arg)
  {
    this->btn_unlck_sts1 = _arg;
    return *this;
  }
  Type & set__btn_lock_sts1(
    const uint8_t & _arg)
  {
    this->btn_lock_sts1 = _arg;
    return *this;
  }
  Type & set__btn_tr_sts1_key_id(
    const uint8_t & _arg)
  {
    this->btn_tr_sts1_key_id = _arg;
    return *this;
  }
  Type & set__btn_unlck_sts1_key_id(
    const uint8_t & _arg)
  {
    this->btn_unlck_sts1_key_id = _arg;
    return *this;
  }
  Type & set__btn_lock_sts1_key_id(
    const uint8_t & _arg)
  {
    this->btn_lock_sts1_key_id = _arg;
    return *this;
  }
  Type & set__voice_ctrl_brk(
    const uint8_t & _arg)
  {
    this->voice_ctrl_brk = _arg;
    return *this;
  }
  Type & set__lo_spd_drvg_assi_swt(
    const uint8_t & _arg)
  {
    this->lo_spd_drvg_assi_swt = _arg;
    return *this;
  }
  Type & set__prkg_frnt_or_re_select(
    const uint8_t & _arg)
  {
    this->prkg_frnt_or_re_select = _arg;
    return *this;
  }
  Type & set__tracking_back_assi_swt(
    const uint8_t & _arg)
  {
    this->tracking_back_assi_swt = _arg;
    return *this;
  }
  Type & set__prkg_emg_brk_sys_swt(
    const uint8_t & _arg)
  {
    this->prkg_emg_brk_sys_swt = _arg;
    return *this;
  }
  Type & set__aut_prkg_voice_swt(
    const uint8_t & _arg)
  {
    this->aut_prkg_voice_swt = _arg;
    return *this;
  }
  Type & set__lsda_notif_push_req(
    const uint8_t & _arg)
  {
    this->lsda_notif_push_req = _arg;
    return *this;
  }
  Type & set__monr_sys_sts(
    const uint8_t & _arg)
  {
    this->monr_sys_sts = _arg;
    return *this;
  }
  Type & set__drvr_assc_wisdom_btn(
    const uint8_t & _arg)
  {
    this->drvr_assc_wisdom_btn = _arg;
    return *this;
  }
  Type & set__scenario_mod(
    const uint8_t & _arg)
  {
    this->scenario_mod = _arg;
    return *this;
  }
  Type & set__aut_prkg_voice_typ(
    const uint8_t & _arg)
  {
    this->aut_prkg_voice_typ = _arg;
    return *this;
  }
  Type & set__mai_setting(
    const uint8_t & _arg)
  {
    this->mai_setting = _arg;
    return *this;
  }
  Type & set__aut_prkg_hand_slot_nr_req(
    const uint8_t & _arg)
  {
    this->aut_prkg_hand_slot_nr_req = _arg;
    return *this;
  }
  Type & set__asy_aut_drv_ctrl_typ_dim_req(
    const uint8_t & _arg)
  {
    this->asy_aut_drv_ctrl_typ_dim_req = _arg;
    return *this;
  }
  Type & set__hmi_drvr_sod_req_pilot(
    const uint8_t & _arg)
  {
    this->hmi_drvr_sod_req_pilot = _arg;
    return *this;
  }
  Type & set__drvr_crs_ctrl_fct_actv_req(
    const uint8_t & _arg)
  {
    this->drvr_crs_ctrl_fct_actv_req = _arg;
    return *this;
  }
  Type & set__drvr_acc_fct_deactvn_req(
    const uint8_t & _arg)
  {
    this->drvr_acc_fct_deactvn_req = _arg;
    return *this;
  }
  Type & set__drvr_acc_rs_set_spd_req(
    const uint8_t & _arg)
  {
    this->drvr_acc_rs_set_spd_req = _arg;
    return *this;
  }
  Type & set__set_spd_for_crs_ctrl_fct_active(
    const float & _arg)
  {
    this->set_spd_for_crs_ctrl_fct_active = _arg;
    return *this;
  }
  Type & set__acc_fusn_trfc_req(
    const uint8_t & _arg)
  {
    this->acc_fusn_trfc_req = _arg;
    return *this;
  }
  Type & set__crs_ctrl_ti_gap_adj_req(
    const uint8_t & _arg)
  {
    this->crs_ctrl_ti_gap_adj_req = _arg;
    return *this;
  }
  Type & set__ve_spd_indcd_unit(
    const uint8_t & _arg)
  {
    this->ve_spd_indcd_unit = _arg;
    return *this;
  }
  Type & set__veh_spd_indcd(
    const float & _arg)
  {
    this->veh_spd_indcd = _arg;
    return *this;
  }
  Type & set__drv_mod_req(
    const uint8_t & _arg)
  {
    this->drv_mod_req = _arg;
    return *this;
  }
  Type & set__cam_flts_sts_from_dhu(
    const uint8_t & _arg)
  {
    this->cam_flts_sts_from_dhu = _arg;
    return *this;
  }
  Type & set__drvr_dec_sts_from_dhu(
    const uint8_t & _arg)
  {
    this->drvr_dec_sts_from_dhu = _arg;
    return *this;
  }
  Type & set__eye_gaze_zone(
    const uint8_t & _arg)
  {
    this->eye_gaze_zone = _arg;
    return *this;
  }
  Type & set__eye_gaze_zone_time(
    const uint16_t & _arg)
  {
    this->eye_gaze_zone_time = _arg;
    return *this;
  }
  Type & set__eye_on_road_from_dhu(
    const uint8_t & _arg)
  {
    this->eye_on_road_from_dhu = _arg;
    return *this;
  }
  Type & set__eye_open_from_dhu_eye_open_deg_le(
    const float & _arg)
  {
    this->eye_open_from_dhu_eye_open_deg_le = _arg;
    return *this;
  }
  Type & set__eye_open_from_dhu_eye_open_deg_ri(
    const float & _arg)
  {
    this->eye_open_from_dhu_eye_open_deg_ri = _arg;
    return *this;
  }
  Type & set__eye_open_from_dhu_eye_open_le(
    const uint8_t & _arg)
  {
    this->eye_open_from_dhu_eye_open_le = _arg;
    return *this;
  }
  Type & set__eye_open_from_dhu_eye_open_ri(
    const uint8_t & _arg)
  {
    this->eye_open_from_dhu_eye_open_ri = _arg;
    return *this;
  }
  Type & set__eye_open_from_dhu_eye_visible_le(
    const uint8_t & _arg)
  {
    this->eye_open_from_dhu_eye_visible_le = _arg;
    return *this;
  }
  Type & set__eye_open_from_dhu_eye_visible_ri(
    const uint8_t & _arg)
  {
    this->eye_open_from_dhu_eye_visible_ri = _arg;
    return *this;
  }
  Type & set__eye_open_from_dhu_face_visible(
    const uint8_t & _arg)
  {
    this->eye_open_from_dhu_face_visible = _arg;
    return *this;
  }
  Type & set__snsr_drvr_pfmnc_sts_from_dhu(
    const uint8_t & _arg)
  {
    this->snsr_drvr_pfmnc_sts_from_dhu = _arg;
    return *this;
  }
  Type & set__voice_brst_mod(
    const uint8_t & _arg)
  {
    this->voice_brst_mod = _arg;
    return *this;
  }
  Type & set__auto_lane_chg_style_sw_sts(
    const uint8_t & _arg)
  {
    this->auto_lane_chg_style_sw_sts = _arg;
    return *this;
  }
  Type & set__nop_cofm_of_lan_chag_onoff(
    const uint8_t & _arg)
  {
    this->nop_cofm_of_lan_chag_onoff = _arg;
    return *this;
  }
  Type & set__hmi_sod_lan_chg_switch(
    const uint8_t & _arg)
  {
    this->hmi_sod_lan_chg_switch = _arg;
    return *this;
  }
  Type & set__hmi_drvr_sod_req_chg(
    const uint8_t & _arg)
  {
    this->hmi_drvr_sod_req_chg = _arg;
    return *this;
  }
  Type & set__asy_noa_upgrade_switch(
    const uint8_t & _arg)
  {
    this->asy_noa_upgrade_switch = _arg;
    return *this;
  }
  Type & set__sfty_hmi_ena(
    const uint8_t & _arg)
  {
    this->sfty_hmi_ena = _arg;
    return *this;
  }
  Type & set__nop_remind_typ_of_chg_lane_req(
    const uint8_t & _arg)
  {
    this->nop_remind_typ_of_chg_lane_req = _arg;
    return *this;
  }
  Type & set__drvr_lane_chg_aut_actv_sts(
    const uint8_t & _arg)
  {
    this->drvr_lane_chg_aut_actv_sts = _arg;
    return *this;
  }
  Type & set__auto_lane_chg_with_navi_sw_onoff(
    const uint8_t & _arg)
  {
    this->auto_lane_chg_with_navi_sw_onoff = _arg;
    return *this;
  }
  Type & set__nav_noa_status_change_req(
    const uint8_t & _arg)
  {
    this->nav_noa_status_change_req = _arg;
    return *this;
  }
  Type & set__prkg_camera_store_req(
    const uint8_t & _arg)
  {
    this->prkg_camera_store_req = _arg;
    return *this;
  }
  Type & set__voice_ctrl_prk(
    const uint8_t & _arg)
  {
    this->voice_ctrl_prk = _arg;
    return *this;
  }
  Type & set__drift_prkg_req(
    const uint8_t & _arg)
  {
    this->drift_prkg_req = _arg;
    return *this;
  }
  Type & set__hmi_drvr_sod_req_cnoa_main_page(
    const uint8_t & _arg)
  {
    this->hmi_drvr_sod_req_cnoa_main_page = _arg;
    return *this;
  }
  Type & set__hmi_drvr_sod_req_cnoa_lrng(
    const uint8_t & _arg)
  {
    this->hmi_drvr_sod_req_cnoa_lrng = _arg;
    return *this;
  }
  Type & set__hmi_drvr_sod_req_finish_lrng(
    const uint8_t & _arg)
  {
    this->hmi_drvr_sod_req_finish_lrng = _arg;
    return *this;
  }
  Type & set__hmi_cnoa_crs_swt_on_off(
    const uint8_t & _arg)
  {
    this->hmi_cnoa_crs_swt_on_off = _arg;
    return *this;
  }
  Type & set__hmi_cnoa_sod_lan_chg_swt(
    const uint8_t & _arg)
  {
    this->hmi_cnoa_sod_lan_chg_swt = _arg;
    return *this;
  }
  Type & set__hmi_cnoa_auto_lane_chg_style_sw_sts(
    const uint8_t & _arg)
  {
    this->hmi_cnoa_auto_lane_chg_style_sw_sts = _arg;
    return *this;
  }
  Type & set__hmi_cnoa_lrng_swt_on_off(
    const uint8_t & _arg)
  {
    this->hmi_cnoa_lrng_swt_on_off = _arg;
    return *this;
  }
  Type & set__hmi_drvr_sod_req_contns_lrng(
    const uint8_t & _arg)
  {
    this->hmi_drvr_sod_req_contns_lrng = _arg;
    return *this;
  }
  Type & set__apa_custom_prkg_req(
    const uint8_t & _arg)
  {
    this->apa_custom_prkg_req = _arg;
    return *this;
  }
  Type & set__exit_custom_prkg_req(
    const uint8_t & _arg)
  {
    this->exit_custom_prkg_req = _arg;
    return *this;
  }
  Type & set__cust_prk_slot_posn_angle_disp(
    const int16_t & _arg)
  {
    this->cust_prk_slot_posn_angle_disp = _arg;
    return *this;
  }
  Type & set__cust_prk_slot_posn_end_x1(
    const int16_t & _arg)
  {
    this->cust_prk_slot_posn_end_x1 = _arg;
    return *this;
  }
  Type & set__cust_prk_slot_posn_end_x2(
    const int16_t & _arg)
  {
    this->cust_prk_slot_posn_end_x2 = _arg;
    return *this;
  }
  Type & set__cust_prk_slot_posn_end_y1(
    const int16_t & _arg)
  {
    this->cust_prk_slot_posn_end_y1 = _arg;
    return *this;
  }
  Type & set__cust_prk_slot_posn_end_y2(
    const int16_t & _arg)
  {
    this->cust_prk_slot_posn_end_y2 = _arg;
    return *this;
  }
  Type & set__cust_prk_slot_posn_start_x1(
    const int16_t & _arg)
  {
    this->cust_prk_slot_posn_start_x1 = _arg;
    return *this;
  }
  Type & set__cust_prk_slot_posn_start_x2(
    const int16_t & _arg)
  {
    this->cust_prk_slot_posn_start_x2 = _arg;
    return *this;
  }
  Type & set__cust_prk_slot_posn_start_y1(
    const int16_t & _arg)
  {
    this->cust_prk_slot_posn_start_y1 = _arg;
    return *this;
  }
  Type & set__cust_prk_slot_posn_start_y2(
    const int16_t & _arg)
  {
    this->cust_prk_slot_posn_start_y2 = _arg;
    return *this;
  }
  Type & set__screem_oper(
    const uint8_t & _arg)
  {
    this->screem_oper = _arg;
    return *this;
  }
  Type & set__hpa_max_swt(
    const bool & _arg)
  {
    this->hpa_max_swt = _arg;
    return *this;
  }
  Type & set__rpa_select_par_in(
    const uint8_t & _arg)
  {
    this->rpa_select_par_in = _arg;
    return *this;
  }
  Type & set__frnt_and_re_prkg_in_swt(
    const uint8_t & _arg)
  {
    this->frnt_and_re_prkg_in_swt = _arg;
    return *this;
  }
  Type & set__app_map_info_to_stm(
    const deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator> & _arg)
  {
    this->app_map_info_to_stm = _arg;
    return *this;
  }
  Type & set__app_to_stm_data(
    const deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator> & _arg)
  {
    this->app_to_stm_data = _arg;
    return *this;
  }
  Type & set__aut_prkg_hand_slot_nr_req_topo_slot_id(
    const uint8_t & _arg)
  {
    this->aut_prkg_hand_slot_nr_req_topo_slot_id = _arg;
    return *this;
  }
  Type & set__aut_prkg_hand_slot_nr_req_topo_slot_status(
    const uint8_t & _arg)
  {
    this->aut_prkg_hand_slot_nr_req_topo_slot_status = _arg;
    return *this;
  }
  Type & set__aut_prkg_select_entrance(
    const uint8_t & _arg)
  {
    this->aut_prkg_select_entrance = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_cls_pop(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_cls_pop = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_cover_results(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_cover_results = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_select_d2d(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_select_d2d = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_topo_flr(
    const int8_t & _arg)
  {
    this->aut_valt_prkg_topo_flr = _arg;
    return *this;
  }
  Type & set__d2d_p_icon_clicked(
    const uint8_t & _arg)
  {
    this->d2d_p_icon_clicked = _arg;
    return *this;
  }
  Type & set__d2d_route_push_button_resp(
    const uint8_t & _arg)
  {
    this->d2d_route_push_button_resp = _arg;
    return *this;
  }
  Type & set__hmi_etc_traffic_sw_sts(
    const uint8_t & _arg)
  {
    this->hmi_etc_traffic_sw_sts = _arg;
    return *this;
  }
  Type & set__prkg_lrng_sts_hpa_lrng_sts(
    const uint8_t & _arg)
  {
    this->prkg_lrng_sts_hpa_lrng_sts = _arg;
    return *this;
  }
  Type & set__prkg_slot_typ_select(
    const uint8_t & _arg)
  {
    this->prkg_slot_typ_select = _arg;
    return *this;
  }
  Type & set__asy_aut_drvg_li_swt(
    const uint8_t & _arg)
  {
    this->asy_aut_drvg_li_swt = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_resp_map_id_list1(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_resp_map_id_list1 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_resp_map_id_list2(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_resp_map_id_list2 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_resp_map_id_list3(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_resp_map_id_list3 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_resp_map_id_list4(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_resp_map_id_list4 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_resp_map_id_result(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_map_resp_map_id_result = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_syncn_map_id_list1(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_syncn_map_id_list1 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_syncn_map_id_list2(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_syncn_map_id_list2 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_syncn_map_id_list3(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_syncn_map_id_list3 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_syncn_map_id_list4(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_syncn_map_id_list4 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_syncn_map_syncn(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_map_syncn_map_syncn = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::UIToSTMData_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::UIToSTMData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::UIToSTMData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::UIToSTMData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::UIToSTMData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::UIToSTMData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::UIToSTMData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::UIToSTMData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::UIToSTMData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::UIToSTMData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__UIToSTMData
    std::shared_ptr<deva_function_msgs::msg::UIToSTMData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__UIToSTMData
    std::shared_ptr<deva_function_msgs::msg::UIToSTMData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UIToSTMData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->drvr_assc_sys_btn_push != other.drvr_assc_sys_btn_push) {
      return false;
    }
    if (this->swt_disp_on_and_off_req != other.swt_disp_on_and_off_req) {
      return false;
    }
    if (this->nav_frnt_actv_sts != other.nav_frnt_actv_sts) {
      return false;
    }
    if (this->ihu_fail != other.ihu_fail) {
      return false;
    }
    if (this->scene_mod_seld != other.scene_mod_seld) {
      return false;
    }
    if (this->other_ar_psd_req != other.other_ar_psd_req) {
      return false;
    }
    if (this->mob_dev_rpa_req_rspa_ctrl != other.mob_dev_rpa_req_rspa_ctrl) {
      return false;
    }
    if (this->mob_dev_rpa_req_rpa_req != other.mob_dev_rpa_req_rpa_req) {
      return false;
    }
    if (this->mob_dev_rpa_req_rpa_out_mode_sub_t != other.mob_dev_rpa_req_rpa_out_mode_sub_t) {
      return false;
    }
    if (this->mob_dev_rpa_req_mob_dev_sts != other.mob_dev_rpa_req_mob_dev_sts) {
      return false;
    }
    if (this->rem_straight_prkg_assi_seln_req != other.rem_straight_prkg_assi_seln_req) {
      return false;
    }
    if (this->prkg_touch_coorn_req_touch_eve_typ != other.prkg_touch_coorn_req_touch_eve_typ) {
      return false;
    }
    if (this->veh_spd_indcd_veh_spd_indcd != other.veh_spd_indcd_veh_spd_indcd) {
      return false;
    }
    if (this->sm_aut_prkg_slot_nr_req != other.sm_aut_prkg_slot_nr_req) {
      return false;
    }
    if (this->sm_prkg_in_or_out_and_cncl != other.sm_prkg_in_or_out_and_cncl) {
      return false;
    }
    if (this->sm_prkg_intrpt_reld_btn != other.sm_prkg_intrpt_reld_btn) {
      return false;
    }
    if (this->sm_prkg_fct_swt != other.sm_prkg_fct_swt) {
      return false;
    }
    if (this->sm_aut_actv_prkg_fct_swt != other.sm_aut_actv_prkg_fct_swt) {
      return false;
    }
    if (this->full_screen_btn_push != other.full_screen_btn_push) {
      return false;
    }
    if (this->sm_sel_push_apa_info != other.sm_sel_push_apa_info) {
      return false;
    }
    if (this->sm_hpa_soft_butn_enter_rq != other.sm_hpa_soft_butn_enter_rq) {
      return false;
    }
    if (this->sm_map_build_rq != other.sm_map_build_rq) {
      return false;
    }
    if (this->sm_map_save_rq != other.sm_map_save_rq) {
      return false;
    }
    if (this->sm_map_select_id != other.sm_map_select_id) {
      return false;
    }
    if (this->sm_drvr_assc_sys_park_mod != other.sm_drvr_assc_sys_park_mod) {
      return false;
    }
    if (this->map_build_sts != other.map_build_sts) {
      return false;
    }
    if (this->aut_valt_prkg_map_src_req != other.aut_valt_prkg_map_src_req) {
      return false;
    }
    if (this->aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req != other.aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req) {
      return false;
    }
    if (this->aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req != other.aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req) {
      return false;
    }
    if (this->aut_valt_prkg_l2_btn_req_setting_voice_btn_req != other.aut_valt_prkg_l2_btn_req_setting_voice_btn_req) {
      return false;
    }
    if (this->aut_valt_prkg_map_oper_req_map_type != other.aut_valt_prkg_map_oper_req_map_type) {
      return false;
    }
    if (this->aut_valt_prkg_l1_btn_req != other.aut_valt_prkg_l1_btn_req) {
      return false;
    }
    if (this->aut_valt_prkg_experience_resp != other.aut_valt_prkg_experience_resp) {
      return false;
    }
    if (this->lo_spd_drvg_assi_sho_push_resp != other.lo_spd_drvg_assi_sho_push_resp) {
      return false;
    }
    if (this->aut_valt_prkg_sho_dst_push_swt != other.aut_valt_prkg_sho_dst_push_swt) {
      return false;
    }
    if (this->aut_valt_prkg_picture_upload_swt != other.aut_valt_prkg_picture_upload_swt) {
      return false;
    }
    if (this->aut_valt_prkg_ins_btn_req != other.aut_valt_prkg_ins_btn_req) {
      return false;
    }
    if (this->aut_valt_prkg_swt != other.aut_valt_prkg_swt) {
      return false;
    }
    if (this->prof_pen_sts1 != other.prof_pen_sts1) {
      return false;
    }
    if (this->aut_valt_prkg_map_oper_req2_map_type2 != other.aut_valt_prkg_map_oper_req2_map_type2) {
      return false;
    }
    if (this->aut_valt_prkg_map_oper_req2_map_list1 != other.aut_valt_prkg_map_oper_req2_map_list1) {
      return false;
    }
    if (this->aut_valt_prkg_map_oper_req2_map_list2 != other.aut_valt_prkg_map_oper_req2_map_list2) {
      return false;
    }
    if (this->aut_valt_prkg_map_oper_req2_map_list3 != other.aut_valt_prkg_map_oper_req2_map_list3) {
      return false;
    }
    if (this->aut_valt_prkg_map_oper_req2_map_list4 != other.aut_valt_prkg_map_oper_req2_map_list4) {
      return false;
    }
    if (this->aut_valt_prkg_l2_pop_btn_req != other.aut_valt_prkg_l2_pop_btn_req) {
      return false;
    }
    if (this->voice_active_adcu != other.voice_active_adcu) {
      return false;
    }
    if (this->btn_tr_sts1 != other.btn_tr_sts1) {
      return false;
    }
    if (this->btn_unlck_sts1 != other.btn_unlck_sts1) {
      return false;
    }
    if (this->btn_lock_sts1 != other.btn_lock_sts1) {
      return false;
    }
    if (this->btn_tr_sts1_key_id != other.btn_tr_sts1_key_id) {
      return false;
    }
    if (this->btn_unlck_sts1_key_id != other.btn_unlck_sts1_key_id) {
      return false;
    }
    if (this->btn_lock_sts1_key_id != other.btn_lock_sts1_key_id) {
      return false;
    }
    if (this->voice_ctrl_brk != other.voice_ctrl_brk) {
      return false;
    }
    if (this->lo_spd_drvg_assi_swt != other.lo_spd_drvg_assi_swt) {
      return false;
    }
    if (this->prkg_frnt_or_re_select != other.prkg_frnt_or_re_select) {
      return false;
    }
    if (this->tracking_back_assi_swt != other.tracking_back_assi_swt) {
      return false;
    }
    if (this->prkg_emg_brk_sys_swt != other.prkg_emg_brk_sys_swt) {
      return false;
    }
    if (this->aut_prkg_voice_swt != other.aut_prkg_voice_swt) {
      return false;
    }
    if (this->lsda_notif_push_req != other.lsda_notif_push_req) {
      return false;
    }
    if (this->monr_sys_sts != other.monr_sys_sts) {
      return false;
    }
    if (this->drvr_assc_wisdom_btn != other.drvr_assc_wisdom_btn) {
      return false;
    }
    if (this->scenario_mod != other.scenario_mod) {
      return false;
    }
    if (this->aut_prkg_voice_typ != other.aut_prkg_voice_typ) {
      return false;
    }
    if (this->mai_setting != other.mai_setting) {
      return false;
    }
    if (this->aut_prkg_hand_slot_nr_req != other.aut_prkg_hand_slot_nr_req) {
      return false;
    }
    if (this->asy_aut_drv_ctrl_typ_dim_req != other.asy_aut_drv_ctrl_typ_dim_req) {
      return false;
    }
    if (this->hmi_drvr_sod_req_pilot != other.hmi_drvr_sod_req_pilot) {
      return false;
    }
    if (this->drvr_crs_ctrl_fct_actv_req != other.drvr_crs_ctrl_fct_actv_req) {
      return false;
    }
    if (this->drvr_acc_fct_deactvn_req != other.drvr_acc_fct_deactvn_req) {
      return false;
    }
    if (this->drvr_acc_rs_set_spd_req != other.drvr_acc_rs_set_spd_req) {
      return false;
    }
    if (this->set_spd_for_crs_ctrl_fct_active != other.set_spd_for_crs_ctrl_fct_active) {
      return false;
    }
    if (this->acc_fusn_trfc_req != other.acc_fusn_trfc_req) {
      return false;
    }
    if (this->crs_ctrl_ti_gap_adj_req != other.crs_ctrl_ti_gap_adj_req) {
      return false;
    }
    if (this->ve_spd_indcd_unit != other.ve_spd_indcd_unit) {
      return false;
    }
    if (this->veh_spd_indcd != other.veh_spd_indcd) {
      return false;
    }
    if (this->drv_mod_req != other.drv_mod_req) {
      return false;
    }
    if (this->cam_flts_sts_from_dhu != other.cam_flts_sts_from_dhu) {
      return false;
    }
    if (this->drvr_dec_sts_from_dhu != other.drvr_dec_sts_from_dhu) {
      return false;
    }
    if (this->eye_gaze_zone != other.eye_gaze_zone) {
      return false;
    }
    if (this->eye_gaze_zone_time != other.eye_gaze_zone_time) {
      return false;
    }
    if (this->eye_on_road_from_dhu != other.eye_on_road_from_dhu) {
      return false;
    }
    if (this->eye_open_from_dhu_eye_open_deg_le != other.eye_open_from_dhu_eye_open_deg_le) {
      return false;
    }
    if (this->eye_open_from_dhu_eye_open_deg_ri != other.eye_open_from_dhu_eye_open_deg_ri) {
      return false;
    }
    if (this->eye_open_from_dhu_eye_open_le != other.eye_open_from_dhu_eye_open_le) {
      return false;
    }
    if (this->eye_open_from_dhu_eye_open_ri != other.eye_open_from_dhu_eye_open_ri) {
      return false;
    }
    if (this->eye_open_from_dhu_eye_visible_le != other.eye_open_from_dhu_eye_visible_le) {
      return false;
    }
    if (this->eye_open_from_dhu_eye_visible_ri != other.eye_open_from_dhu_eye_visible_ri) {
      return false;
    }
    if (this->eye_open_from_dhu_face_visible != other.eye_open_from_dhu_face_visible) {
      return false;
    }
    if (this->snsr_drvr_pfmnc_sts_from_dhu != other.snsr_drvr_pfmnc_sts_from_dhu) {
      return false;
    }
    if (this->voice_brst_mod != other.voice_brst_mod) {
      return false;
    }
    if (this->auto_lane_chg_style_sw_sts != other.auto_lane_chg_style_sw_sts) {
      return false;
    }
    if (this->nop_cofm_of_lan_chag_onoff != other.nop_cofm_of_lan_chag_onoff) {
      return false;
    }
    if (this->hmi_sod_lan_chg_switch != other.hmi_sod_lan_chg_switch) {
      return false;
    }
    if (this->hmi_drvr_sod_req_chg != other.hmi_drvr_sod_req_chg) {
      return false;
    }
    if (this->asy_noa_upgrade_switch != other.asy_noa_upgrade_switch) {
      return false;
    }
    if (this->sfty_hmi_ena != other.sfty_hmi_ena) {
      return false;
    }
    if (this->nop_remind_typ_of_chg_lane_req != other.nop_remind_typ_of_chg_lane_req) {
      return false;
    }
    if (this->drvr_lane_chg_aut_actv_sts != other.drvr_lane_chg_aut_actv_sts) {
      return false;
    }
    if (this->auto_lane_chg_with_navi_sw_onoff != other.auto_lane_chg_with_navi_sw_onoff) {
      return false;
    }
    if (this->nav_noa_status_change_req != other.nav_noa_status_change_req) {
      return false;
    }
    if (this->prkg_camera_store_req != other.prkg_camera_store_req) {
      return false;
    }
    if (this->voice_ctrl_prk != other.voice_ctrl_prk) {
      return false;
    }
    if (this->drift_prkg_req != other.drift_prkg_req) {
      return false;
    }
    if (this->hmi_drvr_sod_req_cnoa_main_page != other.hmi_drvr_sod_req_cnoa_main_page) {
      return false;
    }
    if (this->hmi_drvr_sod_req_cnoa_lrng != other.hmi_drvr_sod_req_cnoa_lrng) {
      return false;
    }
    if (this->hmi_drvr_sod_req_finish_lrng != other.hmi_drvr_sod_req_finish_lrng) {
      return false;
    }
    if (this->hmi_cnoa_crs_swt_on_off != other.hmi_cnoa_crs_swt_on_off) {
      return false;
    }
    if (this->hmi_cnoa_sod_lan_chg_swt != other.hmi_cnoa_sod_lan_chg_swt) {
      return false;
    }
    if (this->hmi_cnoa_auto_lane_chg_style_sw_sts != other.hmi_cnoa_auto_lane_chg_style_sw_sts) {
      return false;
    }
    if (this->hmi_cnoa_lrng_swt_on_off != other.hmi_cnoa_lrng_swt_on_off) {
      return false;
    }
    if (this->hmi_drvr_sod_req_contns_lrng != other.hmi_drvr_sod_req_contns_lrng) {
      return false;
    }
    if (this->apa_custom_prkg_req != other.apa_custom_prkg_req) {
      return false;
    }
    if (this->exit_custom_prkg_req != other.exit_custom_prkg_req) {
      return false;
    }
    if (this->cust_prk_slot_posn_angle_disp != other.cust_prk_slot_posn_angle_disp) {
      return false;
    }
    if (this->cust_prk_slot_posn_end_x1 != other.cust_prk_slot_posn_end_x1) {
      return false;
    }
    if (this->cust_prk_slot_posn_end_x2 != other.cust_prk_slot_posn_end_x2) {
      return false;
    }
    if (this->cust_prk_slot_posn_end_y1 != other.cust_prk_slot_posn_end_y1) {
      return false;
    }
    if (this->cust_prk_slot_posn_end_y2 != other.cust_prk_slot_posn_end_y2) {
      return false;
    }
    if (this->cust_prk_slot_posn_start_x1 != other.cust_prk_slot_posn_start_x1) {
      return false;
    }
    if (this->cust_prk_slot_posn_start_x2 != other.cust_prk_slot_posn_start_x2) {
      return false;
    }
    if (this->cust_prk_slot_posn_start_y1 != other.cust_prk_slot_posn_start_y1) {
      return false;
    }
    if (this->cust_prk_slot_posn_start_y2 != other.cust_prk_slot_posn_start_y2) {
      return false;
    }
    if (this->screem_oper != other.screem_oper) {
      return false;
    }
    if (this->hpa_max_swt != other.hpa_max_swt) {
      return false;
    }
    if (this->rpa_select_par_in != other.rpa_select_par_in) {
      return false;
    }
    if (this->frnt_and_re_prkg_in_swt != other.frnt_and_re_prkg_in_swt) {
      return false;
    }
    if (this->app_map_info_to_stm != other.app_map_info_to_stm) {
      return false;
    }
    if (this->app_to_stm_data != other.app_to_stm_data) {
      return false;
    }
    if (this->aut_prkg_hand_slot_nr_req_topo_slot_id != other.aut_prkg_hand_slot_nr_req_topo_slot_id) {
      return false;
    }
    if (this->aut_prkg_hand_slot_nr_req_topo_slot_status != other.aut_prkg_hand_slot_nr_req_topo_slot_status) {
      return false;
    }
    if (this->aut_prkg_select_entrance != other.aut_prkg_select_entrance) {
      return false;
    }
    if (this->aut_valt_prkg_cls_pop != other.aut_valt_prkg_cls_pop) {
      return false;
    }
    if (this->aut_valt_prkg_cover_results != other.aut_valt_prkg_cover_results) {
      return false;
    }
    if (this->aut_valt_prkg_select_d2d != other.aut_valt_prkg_select_d2d) {
      return false;
    }
    if (this->aut_valt_prkg_topo_flr != other.aut_valt_prkg_topo_flr) {
      return false;
    }
    if (this->d2d_p_icon_clicked != other.d2d_p_icon_clicked) {
      return false;
    }
    if (this->d2d_route_push_button_resp != other.d2d_route_push_button_resp) {
      return false;
    }
    if (this->hmi_etc_traffic_sw_sts != other.hmi_etc_traffic_sw_sts) {
      return false;
    }
    if (this->prkg_lrng_sts_hpa_lrng_sts != other.prkg_lrng_sts_hpa_lrng_sts) {
      return false;
    }
    if (this->prkg_slot_typ_select != other.prkg_slot_typ_select) {
      return false;
    }
    if (this->asy_aut_drvg_li_swt != other.asy_aut_drvg_li_swt) {
      return false;
    }
    if (this->aut_valt_prkg_map_resp_map_id_list1 != other.aut_valt_prkg_map_resp_map_id_list1) {
      return false;
    }
    if (this->aut_valt_prkg_map_resp_map_id_list2 != other.aut_valt_prkg_map_resp_map_id_list2) {
      return false;
    }
    if (this->aut_valt_prkg_map_resp_map_id_list3 != other.aut_valt_prkg_map_resp_map_id_list3) {
      return false;
    }
    if (this->aut_valt_prkg_map_resp_map_id_list4 != other.aut_valt_prkg_map_resp_map_id_list4) {
      return false;
    }
    if (this->aut_valt_prkg_map_resp_map_id_result != other.aut_valt_prkg_map_resp_map_id_result) {
      return false;
    }
    if (this->aut_valt_prkg_map_syncn_map_id_list1 != other.aut_valt_prkg_map_syncn_map_id_list1) {
      return false;
    }
    if (this->aut_valt_prkg_map_syncn_map_id_list2 != other.aut_valt_prkg_map_syncn_map_id_list2) {
      return false;
    }
    if (this->aut_valt_prkg_map_syncn_map_id_list3 != other.aut_valt_prkg_map_syncn_map_id_list3) {
      return false;
    }
    if (this->aut_valt_prkg_map_syncn_map_id_list4 != other.aut_valt_prkg_map_syncn_map_id_list4) {
      return false;
    }
    if (this->aut_valt_prkg_map_syncn_map_syncn != other.aut_valt_prkg_map_syncn_map_syncn) {
      return false;
    }
    return true;
  }
  bool operator!=(const UIToSTMData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UIToSTMData_

// alias to use template instance with default allocator
using UIToSTMData =
  deva_function_msgs::msg::UIToSTMData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__UI_TO_STM_DATA__STRUCT_HPP_
