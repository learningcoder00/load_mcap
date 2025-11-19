// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/VehicleReportData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__VEHICLE_REPORT_DATA__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__VEHICLE_REPORT_DATA__STRUCT_HPP_

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
// Member 'wheel_speed'
#include "deva_function_msgs/msg/detail/wheel_speed__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__VehicleReportData __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__VehicleReportData __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleReportData_
{
  using Type = VehicleReportData_<ContainerAllocator>;

  explicit VehicleReportData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    wheel_speed(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0f;
      this->engine_rpm = 0.0f;
      this->vehicle_speed = 0.0f;
      this->vehicle_speed_valid = 0;
      this->vehicle_speed_safe = 0.0f;
      this->brake = 0.0f;
      this->steer_wheel_angle = 0.0f;
      this->steer_wheel_angle_valid = 0;
      this->steer_wheel_velocity = 0.0f;
      this->steer_wheel_velocity_valid = 0;
      this->son_roof_posn_sts = 0;
      this->win_posn_sts_at_drvr = 0;
      this->win_posn_sts_at_pass = 0;
      this->win_posn_sts_at_re_le = 0;
      this->win_posn_sts_at_re_ri = 0;
      this->stop_li = 0;
      this->seat_back_angle_row_first_drvr = 0.0f;
      this->extr_ltg_sts_hi_beam = 0;
      this->extr_ltg_sts_lo_beam = 0;
      this->indcr_sts = 0;
      this->indcr_disp = 0;
      this->yaw_rate = 0.0f;
      this->error_code = 0;
      this->epb_status = 0;
      this->gear = 0;
      this->acc_lat = 0.0f;
      this->acc_lon = 0.0f;
      this->a_data_raw_safe_a_lat_qf = 0;
      this->a_data_raw_safe_a_lgt_qf = 0;
      this->ag_data_raw_safe_yaw_rate_qf = 0;
      this->extr_ltg_sts_turn_indcr_le = 0;
      this->extr_ltg_sts_turn_indcr_ri = 0;
      this->brk_pedl_psd_brk_pedl_psd = 0;
      this->brk_pedl_psd_brk_pedl_psd_qf = 0;
      this->road_incln = 0.0f;
      this->stand_still_mgr_sts_for_hld1 = 0;
      this->rain_level = 0;
      this->steer_whl_tq_addl = 0.0f;
      this->driver_steer_torque = 0.0f;
      this->door_drvr_sts = 0;
      this->door_le_re_sts = 0;
      this->door_pass_sts = 0;
      this->door_ri_re_sts = 0;
      this->mirr_fold_sts_at_drvr = 0;
      this->mirr_fold_sts_at_pass = 0;
      this->steer_wheel_angle_max = 0.0f;
      this->asy_actr_actv_for_lgt_ctrl = 0;
      this->asy_a_lgt_actv_aft_lim = 0.0f;
      this->veh_spd_indcd = 0.0f;
      this->illumination = 0;
      this->car_mode = 0;
      this->usg_mode = 0;
      this->temprature = 0.0f;
      this->veh_batt_u_sys_u = 0.0f;
      this->trip = 0ul;
      this->power_level = 0;
      this->pt_tq_set_safe_req = 0;
      this->extr_ltg_sts_reverse_li = 0;
      this->trlr_prsnt = 0;
      this->tank_turn_mod_sts = 0;
      this->crs_ctrl_ovr_dn = 0;
      this->rear_wheel_steer_angle = 0;
      this->pass_seat_sts2 = 0;
      this->whl_lock_status = 0;
      this->tvc_not_avail_for_dpa = 0;
      this->steer_ext_fct_sts_ext_fct_lower_lim_active = 0;
      this->steer_ext_fct_sts_ext_fct_upper_lim_active = 0;
      this->steer_ext_fct_sts_drvr_steer_ovrd = 0;
      this->steer_ext_fct_sts_ext_fct_rate_lim_active = 0;
      this->steer_ext_fct_sts_ext_safe_lim_active = 0;
      this->steer_ext_fct_sts_lat_ag_req_not_in_range = 0;
      this->steer_ext_fct_sts_lat_ctrl_req_not_in_range = 0;
      this->pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act = 0;
      this->pt_tg_at_whl_re_act_pt_tq_at_axle_re_act = 0;
      this->steer_act_re_group_steer_act_re_sts = 0;
      this->drvg_dir_des = 0;
      this->pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act = 0.0f;
      this->pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act = 0.0f;
      this->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act = 0.0f;
      this->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act = 0.0f;
      this->tq_ass_addl = 0.0f;
      this->sapa_veh_mtn_st_veh_mtn_st = 0;
    }
  }

  explicit VehicleReportData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    wheel_speed(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0f;
      this->engine_rpm = 0.0f;
      this->vehicle_speed = 0.0f;
      this->vehicle_speed_valid = 0;
      this->vehicle_speed_safe = 0.0f;
      this->brake = 0.0f;
      this->steer_wheel_angle = 0.0f;
      this->steer_wheel_angle_valid = 0;
      this->steer_wheel_velocity = 0.0f;
      this->steer_wheel_velocity_valid = 0;
      this->son_roof_posn_sts = 0;
      this->win_posn_sts_at_drvr = 0;
      this->win_posn_sts_at_pass = 0;
      this->win_posn_sts_at_re_le = 0;
      this->win_posn_sts_at_re_ri = 0;
      this->stop_li = 0;
      this->seat_back_angle_row_first_drvr = 0.0f;
      this->extr_ltg_sts_hi_beam = 0;
      this->extr_ltg_sts_lo_beam = 0;
      this->indcr_sts = 0;
      this->indcr_disp = 0;
      this->yaw_rate = 0.0f;
      this->error_code = 0;
      this->epb_status = 0;
      this->gear = 0;
      this->acc_lat = 0.0f;
      this->acc_lon = 0.0f;
      this->a_data_raw_safe_a_lat_qf = 0;
      this->a_data_raw_safe_a_lgt_qf = 0;
      this->ag_data_raw_safe_yaw_rate_qf = 0;
      this->extr_ltg_sts_turn_indcr_le = 0;
      this->extr_ltg_sts_turn_indcr_ri = 0;
      this->brk_pedl_psd_brk_pedl_psd = 0;
      this->brk_pedl_psd_brk_pedl_psd_qf = 0;
      this->road_incln = 0.0f;
      this->stand_still_mgr_sts_for_hld1 = 0;
      this->rain_level = 0;
      this->steer_whl_tq_addl = 0.0f;
      this->driver_steer_torque = 0.0f;
      this->door_drvr_sts = 0;
      this->door_le_re_sts = 0;
      this->door_pass_sts = 0;
      this->door_ri_re_sts = 0;
      this->mirr_fold_sts_at_drvr = 0;
      this->mirr_fold_sts_at_pass = 0;
      this->steer_wheel_angle_max = 0.0f;
      this->asy_actr_actv_for_lgt_ctrl = 0;
      this->asy_a_lgt_actv_aft_lim = 0.0f;
      this->veh_spd_indcd = 0.0f;
      this->illumination = 0;
      this->car_mode = 0;
      this->usg_mode = 0;
      this->temprature = 0.0f;
      this->veh_batt_u_sys_u = 0.0f;
      this->trip = 0ul;
      this->power_level = 0;
      this->pt_tq_set_safe_req = 0;
      this->extr_ltg_sts_reverse_li = 0;
      this->trlr_prsnt = 0;
      this->tank_turn_mod_sts = 0;
      this->crs_ctrl_ovr_dn = 0;
      this->rear_wheel_steer_angle = 0;
      this->pass_seat_sts2 = 0;
      this->whl_lock_status = 0;
      this->tvc_not_avail_for_dpa = 0;
      this->steer_ext_fct_sts_ext_fct_lower_lim_active = 0;
      this->steer_ext_fct_sts_ext_fct_upper_lim_active = 0;
      this->steer_ext_fct_sts_drvr_steer_ovrd = 0;
      this->steer_ext_fct_sts_ext_fct_rate_lim_active = 0;
      this->steer_ext_fct_sts_ext_safe_lim_active = 0;
      this->steer_ext_fct_sts_lat_ag_req_not_in_range = 0;
      this->steer_ext_fct_sts_lat_ctrl_req_not_in_range = 0;
      this->pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act = 0;
      this->pt_tg_at_whl_re_act_pt_tq_at_axle_re_act = 0;
      this->steer_act_re_group_steer_act_re_sts = 0;
      this->drvg_dir_des = 0;
      this->pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act = 0.0f;
      this->pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act = 0.0f;
      this->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act = 0.0f;
      this->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act = 0.0f;
      this->tq_ass_addl = 0.0f;
      this->sapa_veh_mtn_st_veh_mtn_st = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _throttle_type =
    float;
  _throttle_type throttle;
  using _engine_rpm_type =
    float;
  _engine_rpm_type engine_rpm;
  using _vehicle_speed_type =
    float;
  _vehicle_speed_type vehicle_speed;
  using _vehicle_speed_valid_type =
    uint8_t;
  _vehicle_speed_valid_type vehicle_speed_valid;
  using _vehicle_speed_safe_type =
    float;
  _vehicle_speed_safe_type vehicle_speed_safe;
  using _wheel_speed_type =
    deva_function_msgs::msg::WheelSpeed_<ContainerAllocator>;
  _wheel_speed_type wheel_speed;
  using _brake_type =
    float;
  _brake_type brake;
  using _steer_wheel_angle_type =
    float;
  _steer_wheel_angle_type steer_wheel_angle;
  using _steer_wheel_angle_valid_type =
    uint8_t;
  _steer_wheel_angle_valid_type steer_wheel_angle_valid;
  using _steer_wheel_velocity_type =
    float;
  _steer_wheel_velocity_type steer_wheel_velocity;
  using _steer_wheel_velocity_valid_type =
    uint8_t;
  _steer_wheel_velocity_valid_type steer_wheel_velocity_valid;
  using _son_roof_posn_sts_type =
    uint8_t;
  _son_roof_posn_sts_type son_roof_posn_sts;
  using _win_posn_sts_at_drvr_type =
    uint8_t;
  _win_posn_sts_at_drvr_type win_posn_sts_at_drvr;
  using _win_posn_sts_at_pass_type =
    uint8_t;
  _win_posn_sts_at_pass_type win_posn_sts_at_pass;
  using _win_posn_sts_at_re_le_type =
    uint8_t;
  _win_posn_sts_at_re_le_type win_posn_sts_at_re_le;
  using _win_posn_sts_at_re_ri_type =
    uint8_t;
  _win_posn_sts_at_re_ri_type win_posn_sts_at_re_ri;
  using _stop_li_type =
    uint8_t;
  _stop_li_type stop_li;
  using _seat_back_angle_row_first_drvr_type =
    float;
  _seat_back_angle_row_first_drvr_type seat_back_angle_row_first_drvr;
  using _extr_ltg_sts_hi_beam_type =
    uint8_t;
  _extr_ltg_sts_hi_beam_type extr_ltg_sts_hi_beam;
  using _extr_ltg_sts_lo_beam_type =
    uint8_t;
  _extr_ltg_sts_lo_beam_type extr_ltg_sts_lo_beam;
  using _indcr_sts_type =
    uint8_t;
  _indcr_sts_type indcr_sts;
  using _indcr_disp_type =
    uint8_t;
  _indcr_disp_type indcr_disp;
  using _yaw_rate_type =
    float;
  _yaw_rate_type yaw_rate;
  using _error_code_type =
    uint8_t;
  _error_code_type error_code;
  using _epb_status_type =
    uint8_t;
  _epb_status_type epb_status;
  using _gear_type =
    uint8_t;
  _gear_type gear;
  using _acc_lat_type =
    float;
  _acc_lat_type acc_lat;
  using _acc_lon_type =
    float;
  _acc_lon_type acc_lon;
  using _a_data_raw_safe_a_lat_qf_type =
    uint8_t;
  _a_data_raw_safe_a_lat_qf_type a_data_raw_safe_a_lat_qf;
  using _a_data_raw_safe_a_lgt_qf_type =
    uint8_t;
  _a_data_raw_safe_a_lgt_qf_type a_data_raw_safe_a_lgt_qf;
  using _ag_data_raw_safe_yaw_rate_qf_type =
    uint8_t;
  _ag_data_raw_safe_yaw_rate_qf_type ag_data_raw_safe_yaw_rate_qf;
  using _extr_ltg_sts_turn_indcr_le_type =
    uint8_t;
  _extr_ltg_sts_turn_indcr_le_type extr_ltg_sts_turn_indcr_le;
  using _extr_ltg_sts_turn_indcr_ri_type =
    uint8_t;
  _extr_ltg_sts_turn_indcr_ri_type extr_ltg_sts_turn_indcr_ri;
  using _brk_pedl_psd_brk_pedl_psd_type =
    uint8_t;
  _brk_pedl_psd_brk_pedl_psd_type brk_pedl_psd_brk_pedl_psd;
  using _brk_pedl_psd_brk_pedl_psd_qf_type =
    uint8_t;
  _brk_pedl_psd_brk_pedl_psd_qf_type brk_pedl_psd_brk_pedl_psd_qf;
  using _road_incln_type =
    float;
  _road_incln_type road_incln;
  using _stand_still_mgr_sts_for_hld1_type =
    uint8_t;
  _stand_still_mgr_sts_for_hld1_type stand_still_mgr_sts_for_hld1;
  using _rain_level_type =
    uint8_t;
  _rain_level_type rain_level;
  using _steer_whl_tq_addl_type =
    float;
  _steer_whl_tq_addl_type steer_whl_tq_addl;
  using _driver_steer_torque_type =
    float;
  _driver_steer_torque_type driver_steer_torque;
  using _door_drvr_sts_type =
    uint8_t;
  _door_drvr_sts_type door_drvr_sts;
  using _door_le_re_sts_type =
    uint8_t;
  _door_le_re_sts_type door_le_re_sts;
  using _door_pass_sts_type =
    uint8_t;
  _door_pass_sts_type door_pass_sts;
  using _door_ri_re_sts_type =
    uint8_t;
  _door_ri_re_sts_type door_ri_re_sts;
  using _mirr_fold_sts_at_drvr_type =
    uint8_t;
  _mirr_fold_sts_at_drvr_type mirr_fold_sts_at_drvr;
  using _mirr_fold_sts_at_pass_type =
    uint8_t;
  _mirr_fold_sts_at_pass_type mirr_fold_sts_at_pass;
  using _steer_wheel_angle_max_type =
    float;
  _steer_wheel_angle_max_type steer_wheel_angle_max;
  using _asy_actr_actv_for_lgt_ctrl_type =
    uint8_t;
  _asy_actr_actv_for_lgt_ctrl_type asy_actr_actv_for_lgt_ctrl;
  using _asy_a_lgt_actv_aft_lim_type =
    float;
  _asy_a_lgt_actv_aft_lim_type asy_a_lgt_actv_aft_lim;
  using _veh_spd_indcd_type =
    float;
  _veh_spd_indcd_type veh_spd_indcd;
  using _illumination_type =
    uint16_t;
  _illumination_type illumination;
  using _car_mode_type =
    uint8_t;
  _car_mode_type car_mode;
  using _usg_mode_type =
    uint8_t;
  _usg_mode_type usg_mode;
  using _temprature_type =
    float;
  _temprature_type temprature;
  using _veh_batt_u_sys_u_type =
    float;
  _veh_batt_u_sys_u_type veh_batt_u_sys_u;
  using _trip_type =
    uint32_t;
  _trip_type trip;
  using _power_level_type =
    uint8_t;
  _power_level_type power_level;
  using _pt_tq_set_safe_req_type =
    int16_t;
  _pt_tq_set_safe_req_type pt_tq_set_safe_req;
  using _extr_ltg_sts_reverse_li_type =
    uint8_t;
  _extr_ltg_sts_reverse_li_type extr_ltg_sts_reverse_li;
  using _trlr_prsnt_type =
    uint8_t;
  _trlr_prsnt_type trlr_prsnt;
  using _tank_turn_mod_sts_type =
    uint8_t;
  _tank_turn_mod_sts_type tank_turn_mod_sts;
  using _crs_ctrl_ovr_dn_type =
    uint8_t;
  _crs_ctrl_ovr_dn_type crs_ctrl_ovr_dn;
  using _rear_wheel_steer_angle_type =
    uint8_t;
  _rear_wheel_steer_angle_type rear_wheel_steer_angle;
  using _pass_seat_sts2_type =
    uint8_t;
  _pass_seat_sts2_type pass_seat_sts2;
  using _whl_lock_status_type =
    uint8_t;
  _whl_lock_status_type whl_lock_status;
  using _tvc_not_avail_for_dpa_type =
    uint8_t;
  _tvc_not_avail_for_dpa_type tvc_not_avail_for_dpa;
  using _steer_ext_fct_sts_ext_fct_lower_lim_active_type =
    uint8_t;
  _steer_ext_fct_sts_ext_fct_lower_lim_active_type steer_ext_fct_sts_ext_fct_lower_lim_active;
  using _steer_ext_fct_sts_ext_fct_upper_lim_active_type =
    uint8_t;
  _steer_ext_fct_sts_ext_fct_upper_lim_active_type steer_ext_fct_sts_ext_fct_upper_lim_active;
  using _steer_ext_fct_sts_drvr_steer_ovrd_type =
    uint8_t;
  _steer_ext_fct_sts_drvr_steer_ovrd_type steer_ext_fct_sts_drvr_steer_ovrd;
  using _steer_ext_fct_sts_ext_fct_rate_lim_active_type =
    uint8_t;
  _steer_ext_fct_sts_ext_fct_rate_lim_active_type steer_ext_fct_sts_ext_fct_rate_lim_active;
  using _steer_ext_fct_sts_ext_safe_lim_active_type =
    uint8_t;
  _steer_ext_fct_sts_ext_safe_lim_active_type steer_ext_fct_sts_ext_safe_lim_active;
  using _steer_ext_fct_sts_lat_ag_req_not_in_range_type =
    uint8_t;
  _steer_ext_fct_sts_lat_ag_req_not_in_range_type steer_ext_fct_sts_lat_ag_req_not_in_range;
  using _steer_ext_fct_sts_lat_ctrl_req_not_in_range_type =
    uint8_t;
  _steer_ext_fct_sts_lat_ctrl_req_not_in_range_type steer_ext_fct_sts_lat_ctrl_req_not_in_range;
  using _pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act_type =
    int16_t;
  _pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act_type pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act;
  using _pt_tg_at_whl_re_act_pt_tq_at_axle_re_act_type =
    int16_t;
  _pt_tg_at_whl_re_act_pt_tq_at_axle_re_act_type pt_tg_at_whl_re_act_pt_tq_at_axle_re_act;
  using _steer_act_re_group_steer_act_re_sts_type =
    uint8_t;
  _steer_act_re_group_steer_act_re_sts_type steer_act_re_group_steer_act_re_sts;
  using _drvg_dir_des_type =
    uint8_t;
  _drvg_dir_des_type drvg_dir_des;
  using _pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act_type =
    float;
  _pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act_type pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act;
  using _pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act_type =
    float;
  _pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act_type pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act;
  using _pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act_type =
    float;
  _pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act_type pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act;
  using _pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act_type =
    float;
  _pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act_type pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act;
  using _tq_ass_addl_type =
    float;
  _tq_ass_addl_type tq_ass_addl;
  using _sapa_veh_mtn_st_veh_mtn_st_type =
    uint8_t;
  _sapa_veh_mtn_st_veh_mtn_st_type sapa_veh_mtn_st_veh_mtn_st;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__throttle(
    const float & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__engine_rpm(
    const float & _arg)
  {
    this->engine_rpm = _arg;
    return *this;
  }
  Type & set__vehicle_speed(
    const float & _arg)
  {
    this->vehicle_speed = _arg;
    return *this;
  }
  Type & set__vehicle_speed_valid(
    const uint8_t & _arg)
  {
    this->vehicle_speed_valid = _arg;
    return *this;
  }
  Type & set__vehicle_speed_safe(
    const float & _arg)
  {
    this->vehicle_speed_safe = _arg;
    return *this;
  }
  Type & set__wheel_speed(
    const deva_function_msgs::msg::WheelSpeed_<ContainerAllocator> & _arg)
  {
    this->wheel_speed = _arg;
    return *this;
  }
  Type & set__brake(
    const float & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__steer_wheel_angle(
    const float & _arg)
  {
    this->steer_wheel_angle = _arg;
    return *this;
  }
  Type & set__steer_wheel_angle_valid(
    const uint8_t & _arg)
  {
    this->steer_wheel_angle_valid = _arg;
    return *this;
  }
  Type & set__steer_wheel_velocity(
    const float & _arg)
  {
    this->steer_wheel_velocity = _arg;
    return *this;
  }
  Type & set__steer_wheel_velocity_valid(
    const uint8_t & _arg)
  {
    this->steer_wheel_velocity_valid = _arg;
    return *this;
  }
  Type & set__son_roof_posn_sts(
    const uint8_t & _arg)
  {
    this->son_roof_posn_sts = _arg;
    return *this;
  }
  Type & set__win_posn_sts_at_drvr(
    const uint8_t & _arg)
  {
    this->win_posn_sts_at_drvr = _arg;
    return *this;
  }
  Type & set__win_posn_sts_at_pass(
    const uint8_t & _arg)
  {
    this->win_posn_sts_at_pass = _arg;
    return *this;
  }
  Type & set__win_posn_sts_at_re_le(
    const uint8_t & _arg)
  {
    this->win_posn_sts_at_re_le = _arg;
    return *this;
  }
  Type & set__win_posn_sts_at_re_ri(
    const uint8_t & _arg)
  {
    this->win_posn_sts_at_re_ri = _arg;
    return *this;
  }
  Type & set__stop_li(
    const uint8_t & _arg)
  {
    this->stop_li = _arg;
    return *this;
  }
  Type & set__seat_back_angle_row_first_drvr(
    const float & _arg)
  {
    this->seat_back_angle_row_first_drvr = _arg;
    return *this;
  }
  Type & set__extr_ltg_sts_hi_beam(
    const uint8_t & _arg)
  {
    this->extr_ltg_sts_hi_beam = _arg;
    return *this;
  }
  Type & set__extr_ltg_sts_lo_beam(
    const uint8_t & _arg)
  {
    this->extr_ltg_sts_lo_beam = _arg;
    return *this;
  }
  Type & set__indcr_sts(
    const uint8_t & _arg)
  {
    this->indcr_sts = _arg;
    return *this;
  }
  Type & set__indcr_disp(
    const uint8_t & _arg)
  {
    this->indcr_disp = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const float & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint8_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__epb_status(
    const uint8_t & _arg)
  {
    this->epb_status = _arg;
    return *this;
  }
  Type & set__gear(
    const uint8_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__acc_lat(
    const float & _arg)
  {
    this->acc_lat = _arg;
    return *this;
  }
  Type & set__acc_lon(
    const float & _arg)
  {
    this->acc_lon = _arg;
    return *this;
  }
  Type & set__a_data_raw_safe_a_lat_qf(
    const uint8_t & _arg)
  {
    this->a_data_raw_safe_a_lat_qf = _arg;
    return *this;
  }
  Type & set__a_data_raw_safe_a_lgt_qf(
    const uint8_t & _arg)
  {
    this->a_data_raw_safe_a_lgt_qf = _arg;
    return *this;
  }
  Type & set__ag_data_raw_safe_yaw_rate_qf(
    const uint8_t & _arg)
  {
    this->ag_data_raw_safe_yaw_rate_qf = _arg;
    return *this;
  }
  Type & set__extr_ltg_sts_turn_indcr_le(
    const uint8_t & _arg)
  {
    this->extr_ltg_sts_turn_indcr_le = _arg;
    return *this;
  }
  Type & set__extr_ltg_sts_turn_indcr_ri(
    const uint8_t & _arg)
  {
    this->extr_ltg_sts_turn_indcr_ri = _arg;
    return *this;
  }
  Type & set__brk_pedl_psd_brk_pedl_psd(
    const uint8_t & _arg)
  {
    this->brk_pedl_psd_brk_pedl_psd = _arg;
    return *this;
  }
  Type & set__brk_pedl_psd_brk_pedl_psd_qf(
    const uint8_t & _arg)
  {
    this->brk_pedl_psd_brk_pedl_psd_qf = _arg;
    return *this;
  }
  Type & set__road_incln(
    const float & _arg)
  {
    this->road_incln = _arg;
    return *this;
  }
  Type & set__stand_still_mgr_sts_for_hld1(
    const uint8_t & _arg)
  {
    this->stand_still_mgr_sts_for_hld1 = _arg;
    return *this;
  }
  Type & set__rain_level(
    const uint8_t & _arg)
  {
    this->rain_level = _arg;
    return *this;
  }
  Type & set__steer_whl_tq_addl(
    const float & _arg)
  {
    this->steer_whl_tq_addl = _arg;
    return *this;
  }
  Type & set__driver_steer_torque(
    const float & _arg)
  {
    this->driver_steer_torque = _arg;
    return *this;
  }
  Type & set__door_drvr_sts(
    const uint8_t & _arg)
  {
    this->door_drvr_sts = _arg;
    return *this;
  }
  Type & set__door_le_re_sts(
    const uint8_t & _arg)
  {
    this->door_le_re_sts = _arg;
    return *this;
  }
  Type & set__door_pass_sts(
    const uint8_t & _arg)
  {
    this->door_pass_sts = _arg;
    return *this;
  }
  Type & set__door_ri_re_sts(
    const uint8_t & _arg)
  {
    this->door_ri_re_sts = _arg;
    return *this;
  }
  Type & set__mirr_fold_sts_at_drvr(
    const uint8_t & _arg)
  {
    this->mirr_fold_sts_at_drvr = _arg;
    return *this;
  }
  Type & set__mirr_fold_sts_at_pass(
    const uint8_t & _arg)
  {
    this->mirr_fold_sts_at_pass = _arg;
    return *this;
  }
  Type & set__steer_wheel_angle_max(
    const float & _arg)
  {
    this->steer_wheel_angle_max = _arg;
    return *this;
  }
  Type & set__asy_actr_actv_for_lgt_ctrl(
    const uint8_t & _arg)
  {
    this->asy_actr_actv_for_lgt_ctrl = _arg;
    return *this;
  }
  Type & set__asy_a_lgt_actv_aft_lim(
    const float & _arg)
  {
    this->asy_a_lgt_actv_aft_lim = _arg;
    return *this;
  }
  Type & set__veh_spd_indcd(
    const float & _arg)
  {
    this->veh_spd_indcd = _arg;
    return *this;
  }
  Type & set__illumination(
    const uint16_t & _arg)
  {
    this->illumination = _arg;
    return *this;
  }
  Type & set__car_mode(
    const uint8_t & _arg)
  {
    this->car_mode = _arg;
    return *this;
  }
  Type & set__usg_mode(
    const uint8_t & _arg)
  {
    this->usg_mode = _arg;
    return *this;
  }
  Type & set__temprature(
    const float & _arg)
  {
    this->temprature = _arg;
    return *this;
  }
  Type & set__veh_batt_u_sys_u(
    const float & _arg)
  {
    this->veh_batt_u_sys_u = _arg;
    return *this;
  }
  Type & set__trip(
    const uint32_t & _arg)
  {
    this->trip = _arg;
    return *this;
  }
  Type & set__power_level(
    const uint8_t & _arg)
  {
    this->power_level = _arg;
    return *this;
  }
  Type & set__pt_tq_set_safe_req(
    const int16_t & _arg)
  {
    this->pt_tq_set_safe_req = _arg;
    return *this;
  }
  Type & set__extr_ltg_sts_reverse_li(
    const uint8_t & _arg)
  {
    this->extr_ltg_sts_reverse_li = _arg;
    return *this;
  }
  Type & set__trlr_prsnt(
    const uint8_t & _arg)
  {
    this->trlr_prsnt = _arg;
    return *this;
  }
  Type & set__tank_turn_mod_sts(
    const uint8_t & _arg)
  {
    this->tank_turn_mod_sts = _arg;
    return *this;
  }
  Type & set__crs_ctrl_ovr_dn(
    const uint8_t & _arg)
  {
    this->crs_ctrl_ovr_dn = _arg;
    return *this;
  }
  Type & set__rear_wheel_steer_angle(
    const uint8_t & _arg)
  {
    this->rear_wheel_steer_angle = _arg;
    return *this;
  }
  Type & set__pass_seat_sts2(
    const uint8_t & _arg)
  {
    this->pass_seat_sts2 = _arg;
    return *this;
  }
  Type & set__whl_lock_status(
    const uint8_t & _arg)
  {
    this->whl_lock_status = _arg;
    return *this;
  }
  Type & set__tvc_not_avail_for_dpa(
    const uint8_t & _arg)
  {
    this->tvc_not_avail_for_dpa = _arg;
    return *this;
  }
  Type & set__steer_ext_fct_sts_ext_fct_lower_lim_active(
    const uint8_t & _arg)
  {
    this->steer_ext_fct_sts_ext_fct_lower_lim_active = _arg;
    return *this;
  }
  Type & set__steer_ext_fct_sts_ext_fct_upper_lim_active(
    const uint8_t & _arg)
  {
    this->steer_ext_fct_sts_ext_fct_upper_lim_active = _arg;
    return *this;
  }
  Type & set__steer_ext_fct_sts_drvr_steer_ovrd(
    const uint8_t & _arg)
  {
    this->steer_ext_fct_sts_drvr_steer_ovrd = _arg;
    return *this;
  }
  Type & set__steer_ext_fct_sts_ext_fct_rate_lim_active(
    const uint8_t & _arg)
  {
    this->steer_ext_fct_sts_ext_fct_rate_lim_active = _arg;
    return *this;
  }
  Type & set__steer_ext_fct_sts_ext_safe_lim_active(
    const uint8_t & _arg)
  {
    this->steer_ext_fct_sts_ext_safe_lim_active = _arg;
    return *this;
  }
  Type & set__steer_ext_fct_sts_lat_ag_req_not_in_range(
    const uint8_t & _arg)
  {
    this->steer_ext_fct_sts_lat_ag_req_not_in_range = _arg;
    return *this;
  }
  Type & set__steer_ext_fct_sts_lat_ctrl_req_not_in_range(
    const uint8_t & _arg)
  {
    this->steer_ext_fct_sts_lat_ctrl_req_not_in_range = _arg;
    return *this;
  }
  Type & set__pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act(
    const int16_t & _arg)
  {
    this->pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act = _arg;
    return *this;
  }
  Type & set__pt_tg_at_whl_re_act_pt_tq_at_axle_re_act(
    const int16_t & _arg)
  {
    this->pt_tg_at_whl_re_act_pt_tq_at_axle_re_act = _arg;
    return *this;
  }
  Type & set__steer_act_re_group_steer_act_re_sts(
    const uint8_t & _arg)
  {
    this->steer_act_re_group_steer_act_re_sts = _arg;
    return *this;
  }
  Type & set__drvg_dir_des(
    const uint8_t & _arg)
  {
    this->drvg_dir_des = _arg;
    return *this;
  }
  Type & set__pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act(
    const float & _arg)
  {
    this->pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act = _arg;
    return *this;
  }
  Type & set__pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act(
    const float & _arg)
  {
    this->pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act = _arg;
    return *this;
  }
  Type & set__pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act(
    const float & _arg)
  {
    this->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act = _arg;
    return *this;
  }
  Type & set__pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act(
    const float & _arg)
  {
    this->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act = _arg;
    return *this;
  }
  Type & set__tq_ass_addl(
    const float & _arg)
  {
    this->tq_ass_addl = _arg;
    return *this;
  }
  Type & set__sapa_veh_mtn_st_veh_mtn_st(
    const uint8_t & _arg)
  {
    this->sapa_veh_mtn_st_veh_mtn_st = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::VehicleReportData_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::VehicleReportData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::VehicleReportData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::VehicleReportData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::VehicleReportData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::VehicleReportData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::VehicleReportData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::VehicleReportData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::VehicleReportData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::VehicleReportData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__VehicleReportData
    std::shared_ptr<deva_function_msgs::msg::VehicleReportData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__VehicleReportData
    std::shared_ptr<deva_function_msgs::msg::VehicleReportData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleReportData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->engine_rpm != other.engine_rpm) {
      return false;
    }
    if (this->vehicle_speed != other.vehicle_speed) {
      return false;
    }
    if (this->vehicle_speed_valid != other.vehicle_speed_valid) {
      return false;
    }
    if (this->vehicle_speed_safe != other.vehicle_speed_safe) {
      return false;
    }
    if (this->wheel_speed != other.wheel_speed) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->steer_wheel_angle != other.steer_wheel_angle) {
      return false;
    }
    if (this->steer_wheel_angle_valid != other.steer_wheel_angle_valid) {
      return false;
    }
    if (this->steer_wheel_velocity != other.steer_wheel_velocity) {
      return false;
    }
    if (this->steer_wheel_velocity_valid != other.steer_wheel_velocity_valid) {
      return false;
    }
    if (this->son_roof_posn_sts != other.son_roof_posn_sts) {
      return false;
    }
    if (this->win_posn_sts_at_drvr != other.win_posn_sts_at_drvr) {
      return false;
    }
    if (this->win_posn_sts_at_pass != other.win_posn_sts_at_pass) {
      return false;
    }
    if (this->win_posn_sts_at_re_le != other.win_posn_sts_at_re_le) {
      return false;
    }
    if (this->win_posn_sts_at_re_ri != other.win_posn_sts_at_re_ri) {
      return false;
    }
    if (this->stop_li != other.stop_li) {
      return false;
    }
    if (this->seat_back_angle_row_first_drvr != other.seat_back_angle_row_first_drvr) {
      return false;
    }
    if (this->extr_ltg_sts_hi_beam != other.extr_ltg_sts_hi_beam) {
      return false;
    }
    if (this->extr_ltg_sts_lo_beam != other.extr_ltg_sts_lo_beam) {
      return false;
    }
    if (this->indcr_sts != other.indcr_sts) {
      return false;
    }
    if (this->indcr_disp != other.indcr_disp) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->epb_status != other.epb_status) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->acc_lat != other.acc_lat) {
      return false;
    }
    if (this->acc_lon != other.acc_lon) {
      return false;
    }
    if (this->a_data_raw_safe_a_lat_qf != other.a_data_raw_safe_a_lat_qf) {
      return false;
    }
    if (this->a_data_raw_safe_a_lgt_qf != other.a_data_raw_safe_a_lgt_qf) {
      return false;
    }
    if (this->ag_data_raw_safe_yaw_rate_qf != other.ag_data_raw_safe_yaw_rate_qf) {
      return false;
    }
    if (this->extr_ltg_sts_turn_indcr_le != other.extr_ltg_sts_turn_indcr_le) {
      return false;
    }
    if (this->extr_ltg_sts_turn_indcr_ri != other.extr_ltg_sts_turn_indcr_ri) {
      return false;
    }
    if (this->brk_pedl_psd_brk_pedl_psd != other.brk_pedl_psd_brk_pedl_psd) {
      return false;
    }
    if (this->brk_pedl_psd_brk_pedl_psd_qf != other.brk_pedl_psd_brk_pedl_psd_qf) {
      return false;
    }
    if (this->road_incln != other.road_incln) {
      return false;
    }
    if (this->stand_still_mgr_sts_for_hld1 != other.stand_still_mgr_sts_for_hld1) {
      return false;
    }
    if (this->rain_level != other.rain_level) {
      return false;
    }
    if (this->steer_whl_tq_addl != other.steer_whl_tq_addl) {
      return false;
    }
    if (this->driver_steer_torque != other.driver_steer_torque) {
      return false;
    }
    if (this->door_drvr_sts != other.door_drvr_sts) {
      return false;
    }
    if (this->door_le_re_sts != other.door_le_re_sts) {
      return false;
    }
    if (this->door_pass_sts != other.door_pass_sts) {
      return false;
    }
    if (this->door_ri_re_sts != other.door_ri_re_sts) {
      return false;
    }
    if (this->mirr_fold_sts_at_drvr != other.mirr_fold_sts_at_drvr) {
      return false;
    }
    if (this->mirr_fold_sts_at_pass != other.mirr_fold_sts_at_pass) {
      return false;
    }
    if (this->steer_wheel_angle_max != other.steer_wheel_angle_max) {
      return false;
    }
    if (this->asy_actr_actv_for_lgt_ctrl != other.asy_actr_actv_for_lgt_ctrl) {
      return false;
    }
    if (this->asy_a_lgt_actv_aft_lim != other.asy_a_lgt_actv_aft_lim) {
      return false;
    }
    if (this->veh_spd_indcd != other.veh_spd_indcd) {
      return false;
    }
    if (this->illumination != other.illumination) {
      return false;
    }
    if (this->car_mode != other.car_mode) {
      return false;
    }
    if (this->usg_mode != other.usg_mode) {
      return false;
    }
    if (this->temprature != other.temprature) {
      return false;
    }
    if (this->veh_batt_u_sys_u != other.veh_batt_u_sys_u) {
      return false;
    }
    if (this->trip != other.trip) {
      return false;
    }
    if (this->power_level != other.power_level) {
      return false;
    }
    if (this->pt_tq_set_safe_req != other.pt_tq_set_safe_req) {
      return false;
    }
    if (this->extr_ltg_sts_reverse_li != other.extr_ltg_sts_reverse_li) {
      return false;
    }
    if (this->trlr_prsnt != other.trlr_prsnt) {
      return false;
    }
    if (this->tank_turn_mod_sts != other.tank_turn_mod_sts) {
      return false;
    }
    if (this->crs_ctrl_ovr_dn != other.crs_ctrl_ovr_dn) {
      return false;
    }
    if (this->rear_wheel_steer_angle != other.rear_wheel_steer_angle) {
      return false;
    }
    if (this->pass_seat_sts2 != other.pass_seat_sts2) {
      return false;
    }
    if (this->whl_lock_status != other.whl_lock_status) {
      return false;
    }
    if (this->tvc_not_avail_for_dpa != other.tvc_not_avail_for_dpa) {
      return false;
    }
    if (this->steer_ext_fct_sts_ext_fct_lower_lim_active != other.steer_ext_fct_sts_ext_fct_lower_lim_active) {
      return false;
    }
    if (this->steer_ext_fct_sts_ext_fct_upper_lim_active != other.steer_ext_fct_sts_ext_fct_upper_lim_active) {
      return false;
    }
    if (this->steer_ext_fct_sts_drvr_steer_ovrd != other.steer_ext_fct_sts_drvr_steer_ovrd) {
      return false;
    }
    if (this->steer_ext_fct_sts_ext_fct_rate_lim_active != other.steer_ext_fct_sts_ext_fct_rate_lim_active) {
      return false;
    }
    if (this->steer_ext_fct_sts_ext_safe_lim_active != other.steer_ext_fct_sts_ext_safe_lim_active) {
      return false;
    }
    if (this->steer_ext_fct_sts_lat_ag_req_not_in_range != other.steer_ext_fct_sts_lat_ag_req_not_in_range) {
      return false;
    }
    if (this->steer_ext_fct_sts_lat_ctrl_req_not_in_range != other.steer_ext_fct_sts_lat_ctrl_req_not_in_range) {
      return false;
    }
    if (this->pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act != other.pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act) {
      return false;
    }
    if (this->pt_tg_at_whl_re_act_pt_tq_at_axle_re_act != other.pt_tg_at_whl_re_act_pt_tq_at_axle_re_act) {
      return false;
    }
    if (this->steer_act_re_group_steer_act_re_sts != other.steer_act_re_group_steer_act_re_sts) {
      return false;
    }
    if (this->drvg_dir_des != other.drvg_dir_des) {
      return false;
    }
    if (this->pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act != other.pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act) {
      return false;
    }
    if (this->pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act != other.pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act) {
      return false;
    }
    if (this->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act != other.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act) {
      return false;
    }
    if (this->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act != other.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act) {
      return false;
    }
    if (this->tq_ass_addl != other.tq_ass_addl) {
      return false;
    }
    if (this->sapa_veh_mtn_st_veh_mtn_st != other.sapa_veh_mtn_st_veh_mtn_st) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleReportData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleReportData_

// alias to use template instance with default allocator
using VehicleReportData =
  deva_function_msgs::msg::VehicleReportData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__VEHICLE_REPORT_DATA__STRUCT_HPP_
