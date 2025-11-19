// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/VehicleReportData.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/vehicle_report_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `wheel_speed`
#include "deva_function_msgs/msg/detail/wheel_speed__functions.h"

bool
deva_function_msgs__msg__VehicleReportData__init(deva_function_msgs__msg__VehicleReportData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__VehicleReportData__fini(msg);
    return false;
  }
  // throttle
  // engine_rpm
  // vehicle_speed
  // vehicle_speed_valid
  // vehicle_speed_safe
  // wheel_speed
  if (!deva_function_msgs__msg__WheelSpeed__init(&msg->wheel_speed)) {
    deva_function_msgs__msg__VehicleReportData__fini(msg);
    return false;
  }
  // brake
  // steer_wheel_angle
  // steer_wheel_angle_valid
  // steer_wheel_velocity
  // steer_wheel_velocity_valid
  // son_roof_posn_sts
  // win_posn_sts_at_drvr
  // win_posn_sts_at_pass
  // win_posn_sts_at_re_le
  // win_posn_sts_at_re_ri
  // stop_li
  // seat_back_angle_row_first_drvr
  // extr_ltg_sts_hi_beam
  // extr_ltg_sts_lo_beam
  // indcr_sts
  // indcr_disp
  // yaw_rate
  // error_code
  // epb_status
  // gear
  // acc_lat
  // acc_lon
  // a_data_raw_safe_a_lat_qf
  // a_data_raw_safe_a_lgt_qf
  // ag_data_raw_safe_yaw_rate_qf
  // extr_ltg_sts_turn_indcr_le
  // extr_ltg_sts_turn_indcr_ri
  // brk_pedl_psd_brk_pedl_psd
  // brk_pedl_psd_brk_pedl_psd_qf
  // road_incln
  // stand_still_mgr_sts_for_hld1
  // rain_level
  // steer_whl_tq_addl
  // driver_steer_torque
  // door_drvr_sts
  // door_le_re_sts
  // door_pass_sts
  // door_ri_re_sts
  // mirr_fold_sts_at_drvr
  // mirr_fold_sts_at_pass
  // steer_wheel_angle_max
  // asy_actr_actv_for_lgt_ctrl
  // asy_a_lgt_actv_aft_lim
  // veh_spd_indcd
  // illumination
  // car_mode
  // usg_mode
  // temprature
  // veh_batt_u_sys_u
  // trip
  // power_level
  // pt_tq_set_safe_req
  // extr_ltg_sts_reverse_li
  // trlr_prsnt
  // tank_turn_mod_sts
  // crs_ctrl_ovr_dn
  // rear_wheel_steer_angle
  // pass_seat_sts2
  // whl_lock_status
  // tvc_not_avail_for_dpa
  // steer_ext_fct_sts_ext_fct_lower_lim_active
  // steer_ext_fct_sts_ext_fct_upper_lim_active
  // steer_ext_fct_sts_drvr_steer_ovrd
  // steer_ext_fct_sts_ext_fct_rate_lim_active
  // steer_ext_fct_sts_ext_safe_lim_active
  // steer_ext_fct_sts_lat_ag_req_not_in_range
  // steer_ext_fct_sts_lat_ctrl_req_not_in_range
  // pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  // pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  // steer_act_re_group_steer_act_re_sts
  // drvg_dir_des
  // pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  // pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  // pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  // pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  // tq_ass_addl
  // sapa_veh_mtn_st_veh_mtn_st
  return true;
}

void
deva_function_msgs__msg__VehicleReportData__fini(deva_function_msgs__msg__VehicleReportData * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // throttle
  // engine_rpm
  // vehicle_speed
  // vehicle_speed_valid
  // vehicle_speed_safe
  // wheel_speed
  deva_function_msgs__msg__WheelSpeed__fini(&msg->wheel_speed);
  // brake
  // steer_wheel_angle
  // steer_wheel_angle_valid
  // steer_wheel_velocity
  // steer_wheel_velocity_valid
  // son_roof_posn_sts
  // win_posn_sts_at_drvr
  // win_posn_sts_at_pass
  // win_posn_sts_at_re_le
  // win_posn_sts_at_re_ri
  // stop_li
  // seat_back_angle_row_first_drvr
  // extr_ltg_sts_hi_beam
  // extr_ltg_sts_lo_beam
  // indcr_sts
  // indcr_disp
  // yaw_rate
  // error_code
  // epb_status
  // gear
  // acc_lat
  // acc_lon
  // a_data_raw_safe_a_lat_qf
  // a_data_raw_safe_a_lgt_qf
  // ag_data_raw_safe_yaw_rate_qf
  // extr_ltg_sts_turn_indcr_le
  // extr_ltg_sts_turn_indcr_ri
  // brk_pedl_psd_brk_pedl_psd
  // brk_pedl_psd_brk_pedl_psd_qf
  // road_incln
  // stand_still_mgr_sts_for_hld1
  // rain_level
  // steer_whl_tq_addl
  // driver_steer_torque
  // door_drvr_sts
  // door_le_re_sts
  // door_pass_sts
  // door_ri_re_sts
  // mirr_fold_sts_at_drvr
  // mirr_fold_sts_at_pass
  // steer_wheel_angle_max
  // asy_actr_actv_for_lgt_ctrl
  // asy_a_lgt_actv_aft_lim
  // veh_spd_indcd
  // illumination
  // car_mode
  // usg_mode
  // temprature
  // veh_batt_u_sys_u
  // trip
  // power_level
  // pt_tq_set_safe_req
  // extr_ltg_sts_reverse_li
  // trlr_prsnt
  // tank_turn_mod_sts
  // crs_ctrl_ovr_dn
  // rear_wheel_steer_angle
  // pass_seat_sts2
  // whl_lock_status
  // tvc_not_avail_for_dpa
  // steer_ext_fct_sts_ext_fct_lower_lim_active
  // steer_ext_fct_sts_ext_fct_upper_lim_active
  // steer_ext_fct_sts_drvr_steer_ovrd
  // steer_ext_fct_sts_ext_fct_rate_lim_active
  // steer_ext_fct_sts_ext_safe_lim_active
  // steer_ext_fct_sts_lat_ag_req_not_in_range
  // steer_ext_fct_sts_lat_ctrl_req_not_in_range
  // pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  // pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  // steer_act_re_group_steer_act_re_sts
  // drvg_dir_des
  // pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  // pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  // pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  // pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  // tq_ass_addl
  // sapa_veh_mtn_st_veh_mtn_st
}

bool
deva_function_msgs__msg__VehicleReportData__are_equal(const deva_function_msgs__msg__VehicleReportData * lhs, const deva_function_msgs__msg__VehicleReportData * rhs)
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
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  // engine_rpm
  if (lhs->engine_rpm != rhs->engine_rpm) {
    return false;
  }
  // vehicle_speed
  if (lhs->vehicle_speed != rhs->vehicle_speed) {
    return false;
  }
  // vehicle_speed_valid
  if (lhs->vehicle_speed_valid != rhs->vehicle_speed_valid) {
    return false;
  }
  // vehicle_speed_safe
  if (lhs->vehicle_speed_safe != rhs->vehicle_speed_safe) {
    return false;
  }
  // wheel_speed
  if (!deva_function_msgs__msg__WheelSpeed__are_equal(
      &(lhs->wheel_speed), &(rhs->wheel_speed)))
  {
    return false;
  }
  // brake
  if (lhs->brake != rhs->brake) {
    return false;
  }
  // steer_wheel_angle
  if (lhs->steer_wheel_angle != rhs->steer_wheel_angle) {
    return false;
  }
  // steer_wheel_angle_valid
  if (lhs->steer_wheel_angle_valid != rhs->steer_wheel_angle_valid) {
    return false;
  }
  // steer_wheel_velocity
  if (lhs->steer_wheel_velocity != rhs->steer_wheel_velocity) {
    return false;
  }
  // steer_wheel_velocity_valid
  if (lhs->steer_wheel_velocity_valid != rhs->steer_wheel_velocity_valid) {
    return false;
  }
  // son_roof_posn_sts
  if (lhs->son_roof_posn_sts != rhs->son_roof_posn_sts) {
    return false;
  }
  // win_posn_sts_at_drvr
  if (lhs->win_posn_sts_at_drvr != rhs->win_posn_sts_at_drvr) {
    return false;
  }
  // win_posn_sts_at_pass
  if (lhs->win_posn_sts_at_pass != rhs->win_posn_sts_at_pass) {
    return false;
  }
  // win_posn_sts_at_re_le
  if (lhs->win_posn_sts_at_re_le != rhs->win_posn_sts_at_re_le) {
    return false;
  }
  // win_posn_sts_at_re_ri
  if (lhs->win_posn_sts_at_re_ri != rhs->win_posn_sts_at_re_ri) {
    return false;
  }
  // stop_li
  if (lhs->stop_li != rhs->stop_li) {
    return false;
  }
  // seat_back_angle_row_first_drvr
  if (lhs->seat_back_angle_row_first_drvr != rhs->seat_back_angle_row_first_drvr) {
    return false;
  }
  // extr_ltg_sts_hi_beam
  if (lhs->extr_ltg_sts_hi_beam != rhs->extr_ltg_sts_hi_beam) {
    return false;
  }
  // extr_ltg_sts_lo_beam
  if (lhs->extr_ltg_sts_lo_beam != rhs->extr_ltg_sts_lo_beam) {
    return false;
  }
  // indcr_sts
  if (lhs->indcr_sts != rhs->indcr_sts) {
    return false;
  }
  // indcr_disp
  if (lhs->indcr_disp != rhs->indcr_disp) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // epb_status
  if (lhs->epb_status != rhs->epb_status) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  // acc_lat
  if (lhs->acc_lat != rhs->acc_lat) {
    return false;
  }
  // acc_lon
  if (lhs->acc_lon != rhs->acc_lon) {
    return false;
  }
  // a_data_raw_safe_a_lat_qf
  if (lhs->a_data_raw_safe_a_lat_qf != rhs->a_data_raw_safe_a_lat_qf) {
    return false;
  }
  // a_data_raw_safe_a_lgt_qf
  if (lhs->a_data_raw_safe_a_lgt_qf != rhs->a_data_raw_safe_a_lgt_qf) {
    return false;
  }
  // ag_data_raw_safe_yaw_rate_qf
  if (lhs->ag_data_raw_safe_yaw_rate_qf != rhs->ag_data_raw_safe_yaw_rate_qf) {
    return false;
  }
  // extr_ltg_sts_turn_indcr_le
  if (lhs->extr_ltg_sts_turn_indcr_le != rhs->extr_ltg_sts_turn_indcr_le) {
    return false;
  }
  // extr_ltg_sts_turn_indcr_ri
  if (lhs->extr_ltg_sts_turn_indcr_ri != rhs->extr_ltg_sts_turn_indcr_ri) {
    return false;
  }
  // brk_pedl_psd_brk_pedl_psd
  if (lhs->brk_pedl_psd_brk_pedl_psd != rhs->brk_pedl_psd_brk_pedl_psd) {
    return false;
  }
  // brk_pedl_psd_brk_pedl_psd_qf
  if (lhs->brk_pedl_psd_brk_pedl_psd_qf != rhs->brk_pedl_psd_brk_pedl_psd_qf) {
    return false;
  }
  // road_incln
  if (lhs->road_incln != rhs->road_incln) {
    return false;
  }
  // stand_still_mgr_sts_for_hld1
  if (lhs->stand_still_mgr_sts_for_hld1 != rhs->stand_still_mgr_sts_for_hld1) {
    return false;
  }
  // rain_level
  if (lhs->rain_level != rhs->rain_level) {
    return false;
  }
  // steer_whl_tq_addl
  if (lhs->steer_whl_tq_addl != rhs->steer_whl_tq_addl) {
    return false;
  }
  // driver_steer_torque
  if (lhs->driver_steer_torque != rhs->driver_steer_torque) {
    return false;
  }
  // door_drvr_sts
  if (lhs->door_drvr_sts != rhs->door_drvr_sts) {
    return false;
  }
  // door_le_re_sts
  if (lhs->door_le_re_sts != rhs->door_le_re_sts) {
    return false;
  }
  // door_pass_sts
  if (lhs->door_pass_sts != rhs->door_pass_sts) {
    return false;
  }
  // door_ri_re_sts
  if (lhs->door_ri_re_sts != rhs->door_ri_re_sts) {
    return false;
  }
  // mirr_fold_sts_at_drvr
  if (lhs->mirr_fold_sts_at_drvr != rhs->mirr_fold_sts_at_drvr) {
    return false;
  }
  // mirr_fold_sts_at_pass
  if (lhs->mirr_fold_sts_at_pass != rhs->mirr_fold_sts_at_pass) {
    return false;
  }
  // steer_wheel_angle_max
  if (lhs->steer_wheel_angle_max != rhs->steer_wheel_angle_max) {
    return false;
  }
  // asy_actr_actv_for_lgt_ctrl
  if (lhs->asy_actr_actv_for_lgt_ctrl != rhs->asy_actr_actv_for_lgt_ctrl) {
    return false;
  }
  // asy_a_lgt_actv_aft_lim
  if (lhs->asy_a_lgt_actv_aft_lim != rhs->asy_a_lgt_actv_aft_lim) {
    return false;
  }
  // veh_spd_indcd
  if (lhs->veh_spd_indcd != rhs->veh_spd_indcd) {
    return false;
  }
  // illumination
  if (lhs->illumination != rhs->illumination) {
    return false;
  }
  // car_mode
  if (lhs->car_mode != rhs->car_mode) {
    return false;
  }
  // usg_mode
  if (lhs->usg_mode != rhs->usg_mode) {
    return false;
  }
  // temprature
  if (lhs->temprature != rhs->temprature) {
    return false;
  }
  // veh_batt_u_sys_u
  if (lhs->veh_batt_u_sys_u != rhs->veh_batt_u_sys_u) {
    return false;
  }
  // trip
  if (lhs->trip != rhs->trip) {
    return false;
  }
  // power_level
  if (lhs->power_level != rhs->power_level) {
    return false;
  }
  // pt_tq_set_safe_req
  if (lhs->pt_tq_set_safe_req != rhs->pt_tq_set_safe_req) {
    return false;
  }
  // extr_ltg_sts_reverse_li
  if (lhs->extr_ltg_sts_reverse_li != rhs->extr_ltg_sts_reverse_li) {
    return false;
  }
  // trlr_prsnt
  if (lhs->trlr_prsnt != rhs->trlr_prsnt) {
    return false;
  }
  // tank_turn_mod_sts
  if (lhs->tank_turn_mod_sts != rhs->tank_turn_mod_sts) {
    return false;
  }
  // crs_ctrl_ovr_dn
  if (lhs->crs_ctrl_ovr_dn != rhs->crs_ctrl_ovr_dn) {
    return false;
  }
  // rear_wheel_steer_angle
  if (lhs->rear_wheel_steer_angle != rhs->rear_wheel_steer_angle) {
    return false;
  }
  // pass_seat_sts2
  if (lhs->pass_seat_sts2 != rhs->pass_seat_sts2) {
    return false;
  }
  // whl_lock_status
  if (lhs->whl_lock_status != rhs->whl_lock_status) {
    return false;
  }
  // tvc_not_avail_for_dpa
  if (lhs->tvc_not_avail_for_dpa != rhs->tvc_not_avail_for_dpa) {
    return false;
  }
  // steer_ext_fct_sts_ext_fct_lower_lim_active
  if (lhs->steer_ext_fct_sts_ext_fct_lower_lim_active != rhs->steer_ext_fct_sts_ext_fct_lower_lim_active) {
    return false;
  }
  // steer_ext_fct_sts_ext_fct_upper_lim_active
  if (lhs->steer_ext_fct_sts_ext_fct_upper_lim_active != rhs->steer_ext_fct_sts_ext_fct_upper_lim_active) {
    return false;
  }
  // steer_ext_fct_sts_drvr_steer_ovrd
  if (lhs->steer_ext_fct_sts_drvr_steer_ovrd != rhs->steer_ext_fct_sts_drvr_steer_ovrd) {
    return false;
  }
  // steer_ext_fct_sts_ext_fct_rate_lim_active
  if (lhs->steer_ext_fct_sts_ext_fct_rate_lim_active != rhs->steer_ext_fct_sts_ext_fct_rate_lim_active) {
    return false;
  }
  // steer_ext_fct_sts_ext_safe_lim_active
  if (lhs->steer_ext_fct_sts_ext_safe_lim_active != rhs->steer_ext_fct_sts_ext_safe_lim_active) {
    return false;
  }
  // steer_ext_fct_sts_lat_ag_req_not_in_range
  if (lhs->steer_ext_fct_sts_lat_ag_req_not_in_range != rhs->steer_ext_fct_sts_lat_ag_req_not_in_range) {
    return false;
  }
  // steer_ext_fct_sts_lat_ctrl_req_not_in_range
  if (lhs->steer_ext_fct_sts_lat_ctrl_req_not_in_range != rhs->steer_ext_fct_sts_lat_ctrl_req_not_in_range) {
    return false;
  }
  // pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  if (lhs->pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act != rhs->pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act) {
    return false;
  }
  // pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  if (lhs->pt_tg_at_whl_re_act_pt_tq_at_axle_re_act != rhs->pt_tg_at_whl_re_act_pt_tq_at_axle_re_act) {
    return false;
  }
  // steer_act_re_group_steer_act_re_sts
  if (lhs->steer_act_re_group_steer_act_re_sts != rhs->steer_act_re_group_steer_act_re_sts) {
    return false;
  }
  // drvg_dir_des
  if (lhs->drvg_dir_des != rhs->drvg_dir_des) {
    return false;
  }
  // pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  if (lhs->pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act != rhs->pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act) {
    return false;
  }
  // pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  if (lhs->pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act != rhs->pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act) {
    return false;
  }
  // pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  if (lhs->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act != rhs->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act) {
    return false;
  }
  // pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  if (lhs->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act != rhs->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act) {
    return false;
  }
  // tq_ass_addl
  if (lhs->tq_ass_addl != rhs->tq_ass_addl) {
    return false;
  }
  // sapa_veh_mtn_st_veh_mtn_st
  if (lhs->sapa_veh_mtn_st_veh_mtn_st != rhs->sapa_veh_mtn_st_veh_mtn_st) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__VehicleReportData__copy(
  const deva_function_msgs__msg__VehicleReportData * input,
  deva_function_msgs__msg__VehicleReportData * output)
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
  // throttle
  output->throttle = input->throttle;
  // engine_rpm
  output->engine_rpm = input->engine_rpm;
  // vehicle_speed
  output->vehicle_speed = input->vehicle_speed;
  // vehicle_speed_valid
  output->vehicle_speed_valid = input->vehicle_speed_valid;
  // vehicle_speed_safe
  output->vehicle_speed_safe = input->vehicle_speed_safe;
  // wheel_speed
  if (!deva_function_msgs__msg__WheelSpeed__copy(
      &(input->wheel_speed), &(output->wheel_speed)))
  {
    return false;
  }
  // brake
  output->brake = input->brake;
  // steer_wheel_angle
  output->steer_wheel_angle = input->steer_wheel_angle;
  // steer_wheel_angle_valid
  output->steer_wheel_angle_valid = input->steer_wheel_angle_valid;
  // steer_wheel_velocity
  output->steer_wheel_velocity = input->steer_wheel_velocity;
  // steer_wheel_velocity_valid
  output->steer_wheel_velocity_valid = input->steer_wheel_velocity_valid;
  // son_roof_posn_sts
  output->son_roof_posn_sts = input->son_roof_posn_sts;
  // win_posn_sts_at_drvr
  output->win_posn_sts_at_drvr = input->win_posn_sts_at_drvr;
  // win_posn_sts_at_pass
  output->win_posn_sts_at_pass = input->win_posn_sts_at_pass;
  // win_posn_sts_at_re_le
  output->win_posn_sts_at_re_le = input->win_posn_sts_at_re_le;
  // win_posn_sts_at_re_ri
  output->win_posn_sts_at_re_ri = input->win_posn_sts_at_re_ri;
  // stop_li
  output->stop_li = input->stop_li;
  // seat_back_angle_row_first_drvr
  output->seat_back_angle_row_first_drvr = input->seat_back_angle_row_first_drvr;
  // extr_ltg_sts_hi_beam
  output->extr_ltg_sts_hi_beam = input->extr_ltg_sts_hi_beam;
  // extr_ltg_sts_lo_beam
  output->extr_ltg_sts_lo_beam = input->extr_ltg_sts_lo_beam;
  // indcr_sts
  output->indcr_sts = input->indcr_sts;
  // indcr_disp
  output->indcr_disp = input->indcr_disp;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // error_code
  output->error_code = input->error_code;
  // epb_status
  output->epb_status = input->epb_status;
  // gear
  output->gear = input->gear;
  // acc_lat
  output->acc_lat = input->acc_lat;
  // acc_lon
  output->acc_lon = input->acc_lon;
  // a_data_raw_safe_a_lat_qf
  output->a_data_raw_safe_a_lat_qf = input->a_data_raw_safe_a_lat_qf;
  // a_data_raw_safe_a_lgt_qf
  output->a_data_raw_safe_a_lgt_qf = input->a_data_raw_safe_a_lgt_qf;
  // ag_data_raw_safe_yaw_rate_qf
  output->ag_data_raw_safe_yaw_rate_qf = input->ag_data_raw_safe_yaw_rate_qf;
  // extr_ltg_sts_turn_indcr_le
  output->extr_ltg_sts_turn_indcr_le = input->extr_ltg_sts_turn_indcr_le;
  // extr_ltg_sts_turn_indcr_ri
  output->extr_ltg_sts_turn_indcr_ri = input->extr_ltg_sts_turn_indcr_ri;
  // brk_pedl_psd_brk_pedl_psd
  output->brk_pedl_psd_brk_pedl_psd = input->brk_pedl_psd_brk_pedl_psd;
  // brk_pedl_psd_brk_pedl_psd_qf
  output->brk_pedl_psd_brk_pedl_psd_qf = input->brk_pedl_psd_brk_pedl_psd_qf;
  // road_incln
  output->road_incln = input->road_incln;
  // stand_still_mgr_sts_for_hld1
  output->stand_still_mgr_sts_for_hld1 = input->stand_still_mgr_sts_for_hld1;
  // rain_level
  output->rain_level = input->rain_level;
  // steer_whl_tq_addl
  output->steer_whl_tq_addl = input->steer_whl_tq_addl;
  // driver_steer_torque
  output->driver_steer_torque = input->driver_steer_torque;
  // door_drvr_sts
  output->door_drvr_sts = input->door_drvr_sts;
  // door_le_re_sts
  output->door_le_re_sts = input->door_le_re_sts;
  // door_pass_sts
  output->door_pass_sts = input->door_pass_sts;
  // door_ri_re_sts
  output->door_ri_re_sts = input->door_ri_re_sts;
  // mirr_fold_sts_at_drvr
  output->mirr_fold_sts_at_drvr = input->mirr_fold_sts_at_drvr;
  // mirr_fold_sts_at_pass
  output->mirr_fold_sts_at_pass = input->mirr_fold_sts_at_pass;
  // steer_wheel_angle_max
  output->steer_wheel_angle_max = input->steer_wheel_angle_max;
  // asy_actr_actv_for_lgt_ctrl
  output->asy_actr_actv_for_lgt_ctrl = input->asy_actr_actv_for_lgt_ctrl;
  // asy_a_lgt_actv_aft_lim
  output->asy_a_lgt_actv_aft_lim = input->asy_a_lgt_actv_aft_lim;
  // veh_spd_indcd
  output->veh_spd_indcd = input->veh_spd_indcd;
  // illumination
  output->illumination = input->illumination;
  // car_mode
  output->car_mode = input->car_mode;
  // usg_mode
  output->usg_mode = input->usg_mode;
  // temprature
  output->temprature = input->temprature;
  // veh_batt_u_sys_u
  output->veh_batt_u_sys_u = input->veh_batt_u_sys_u;
  // trip
  output->trip = input->trip;
  // power_level
  output->power_level = input->power_level;
  // pt_tq_set_safe_req
  output->pt_tq_set_safe_req = input->pt_tq_set_safe_req;
  // extr_ltg_sts_reverse_li
  output->extr_ltg_sts_reverse_li = input->extr_ltg_sts_reverse_li;
  // trlr_prsnt
  output->trlr_prsnt = input->trlr_prsnt;
  // tank_turn_mod_sts
  output->tank_turn_mod_sts = input->tank_turn_mod_sts;
  // crs_ctrl_ovr_dn
  output->crs_ctrl_ovr_dn = input->crs_ctrl_ovr_dn;
  // rear_wheel_steer_angle
  output->rear_wheel_steer_angle = input->rear_wheel_steer_angle;
  // pass_seat_sts2
  output->pass_seat_sts2 = input->pass_seat_sts2;
  // whl_lock_status
  output->whl_lock_status = input->whl_lock_status;
  // tvc_not_avail_for_dpa
  output->tvc_not_avail_for_dpa = input->tvc_not_avail_for_dpa;
  // steer_ext_fct_sts_ext_fct_lower_lim_active
  output->steer_ext_fct_sts_ext_fct_lower_lim_active = input->steer_ext_fct_sts_ext_fct_lower_lim_active;
  // steer_ext_fct_sts_ext_fct_upper_lim_active
  output->steer_ext_fct_sts_ext_fct_upper_lim_active = input->steer_ext_fct_sts_ext_fct_upper_lim_active;
  // steer_ext_fct_sts_drvr_steer_ovrd
  output->steer_ext_fct_sts_drvr_steer_ovrd = input->steer_ext_fct_sts_drvr_steer_ovrd;
  // steer_ext_fct_sts_ext_fct_rate_lim_active
  output->steer_ext_fct_sts_ext_fct_rate_lim_active = input->steer_ext_fct_sts_ext_fct_rate_lim_active;
  // steer_ext_fct_sts_ext_safe_lim_active
  output->steer_ext_fct_sts_ext_safe_lim_active = input->steer_ext_fct_sts_ext_safe_lim_active;
  // steer_ext_fct_sts_lat_ag_req_not_in_range
  output->steer_ext_fct_sts_lat_ag_req_not_in_range = input->steer_ext_fct_sts_lat_ag_req_not_in_range;
  // steer_ext_fct_sts_lat_ctrl_req_not_in_range
  output->steer_ext_fct_sts_lat_ctrl_req_not_in_range = input->steer_ext_fct_sts_lat_ctrl_req_not_in_range;
  // pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  output->pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act = input->pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act;
  // pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  output->pt_tg_at_whl_re_act_pt_tq_at_axle_re_act = input->pt_tg_at_whl_re_act_pt_tq_at_axle_re_act;
  // steer_act_re_group_steer_act_re_sts
  output->steer_act_re_group_steer_act_re_sts = input->steer_act_re_group_steer_act_re_sts;
  // drvg_dir_des
  output->drvg_dir_des = input->drvg_dir_des;
  // pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  output->pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act = input->pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act;
  // pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  output->pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act = input->pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act;
  // pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  output->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act = input->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act;
  // pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  output->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act = input->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act;
  // tq_ass_addl
  output->tq_ass_addl = input->tq_ass_addl;
  // sapa_veh_mtn_st_veh_mtn_st
  output->sapa_veh_mtn_st_veh_mtn_st = input->sapa_veh_mtn_st_veh_mtn_st;
  return true;
}

deva_function_msgs__msg__VehicleReportData *
deva_function_msgs__msg__VehicleReportData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__VehicleReportData * msg = (deva_function_msgs__msg__VehicleReportData *)allocator.allocate(sizeof(deva_function_msgs__msg__VehicleReportData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__VehicleReportData));
  bool success = deva_function_msgs__msg__VehicleReportData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__VehicleReportData__destroy(deva_function_msgs__msg__VehicleReportData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__VehicleReportData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__VehicleReportData__Sequence__init(deva_function_msgs__msg__VehicleReportData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__VehicleReportData * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__VehicleReportData *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__VehicleReportData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__VehicleReportData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__VehicleReportData__fini(&data[i - 1]);
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
deva_function_msgs__msg__VehicleReportData__Sequence__fini(deva_function_msgs__msg__VehicleReportData__Sequence * array)
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
      deva_function_msgs__msg__VehicleReportData__fini(&array->data[i]);
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

deva_function_msgs__msg__VehicleReportData__Sequence *
deva_function_msgs__msg__VehicleReportData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__VehicleReportData__Sequence * array = (deva_function_msgs__msg__VehicleReportData__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__VehicleReportData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__VehicleReportData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__VehicleReportData__Sequence__destroy(deva_function_msgs__msg__VehicleReportData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__VehicleReportData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__VehicleReportData__Sequence__are_equal(const deva_function_msgs__msg__VehicleReportData__Sequence * lhs, const deva_function_msgs__msg__VehicleReportData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__VehicleReportData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__VehicleReportData__Sequence__copy(
  const deva_function_msgs__msg__VehicleReportData__Sequence * input,
  deva_function_msgs__msg__VehicleReportData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__VehicleReportData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__VehicleReportData * data =
      (deva_function_msgs__msg__VehicleReportData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__VehicleReportData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__VehicleReportData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__VehicleReportData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
