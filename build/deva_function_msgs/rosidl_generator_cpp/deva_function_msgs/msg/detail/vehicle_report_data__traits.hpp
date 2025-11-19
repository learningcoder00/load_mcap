// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/VehicleReportData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__VEHICLE_REPORT_DATA__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__VEHICLE_REPORT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/vehicle_report_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'wheel_speed'
#include "deva_function_msgs/msg/detail/wheel_speed__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleReportData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << ", ";
  }

  // member: engine_rpm
  {
    out << "engine_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_rpm, out);
    out << ", ";
  }

  // member: vehicle_speed
  {
    out << "vehicle_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_speed, out);
    out << ", ";
  }

  // member: vehicle_speed_valid
  {
    out << "vehicle_speed_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_speed_valid, out);
    out << ", ";
  }

  // member: vehicle_speed_safe
  {
    out << "vehicle_speed_safe: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_speed_safe, out);
    out << ", ";
  }

  // member: wheel_speed
  {
    out << "wheel_speed: ";
    to_flow_style_yaml(msg.wheel_speed, out);
    out << ", ";
  }

  // member: brake
  {
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << ", ";
  }

  // member: steer_wheel_angle
  {
    out << "steer_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_wheel_angle, out);
    out << ", ";
  }

  // member: steer_wheel_angle_valid
  {
    out << "steer_wheel_angle_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_wheel_angle_valid, out);
    out << ", ";
  }

  // member: steer_wheel_velocity
  {
    out << "steer_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_wheel_velocity, out);
    out << ", ";
  }

  // member: steer_wheel_velocity_valid
  {
    out << "steer_wheel_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_wheel_velocity_valid, out);
    out << ", ";
  }

  // member: son_roof_posn_sts
  {
    out << "son_roof_posn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.son_roof_posn_sts, out);
    out << ", ";
  }

  // member: win_posn_sts_at_drvr
  {
    out << "win_posn_sts_at_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_drvr, out);
    out << ", ";
  }

  // member: win_posn_sts_at_pass
  {
    out << "win_posn_sts_at_pass: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_pass, out);
    out << ", ";
  }

  // member: win_posn_sts_at_re_le
  {
    out << "win_posn_sts_at_re_le: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_re_le, out);
    out << ", ";
  }

  // member: win_posn_sts_at_re_ri
  {
    out << "win_posn_sts_at_re_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_re_ri, out);
    out << ", ";
  }

  // member: stop_li
  {
    out << "stop_li: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_li, out);
    out << ", ";
  }

  // member: seat_back_angle_row_first_drvr
  {
    out << "seat_back_angle_row_first_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_back_angle_row_first_drvr, out);
    out << ", ";
  }

  // member: extr_ltg_sts_hi_beam
  {
    out << "extr_ltg_sts_hi_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.extr_ltg_sts_hi_beam, out);
    out << ", ";
  }

  // member: extr_ltg_sts_lo_beam
  {
    out << "extr_ltg_sts_lo_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.extr_ltg_sts_lo_beam, out);
    out << ", ";
  }

  // member: indcr_sts
  {
    out << "indcr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.indcr_sts, out);
    out << ", ";
  }

  // member: indcr_disp
  {
    out << "indcr_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.indcr_disp, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: epb_status
  {
    out << "epb_status: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_status, out);
    out << ", ";
  }

  // member: gear
  {
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << ", ";
  }

  // member: acc_lat
  {
    out << "acc_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lat, out);
    out << ", ";
  }

  // member: acc_lon
  {
    out << "acc_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lon, out);
    out << ", ";
  }

  // member: a_data_raw_safe_a_lat_qf
  {
    out << "a_data_raw_safe_a_lat_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.a_data_raw_safe_a_lat_qf, out);
    out << ", ";
  }

  // member: a_data_raw_safe_a_lgt_qf
  {
    out << "a_data_raw_safe_a_lgt_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.a_data_raw_safe_a_lgt_qf, out);
    out << ", ";
  }

  // member: ag_data_raw_safe_yaw_rate_qf
  {
    out << "ag_data_raw_safe_yaw_rate_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.ag_data_raw_safe_yaw_rate_qf, out);
    out << ", ";
  }

  // member: extr_ltg_sts_turn_indcr_le
  {
    out << "extr_ltg_sts_turn_indcr_le: ";
    rosidl_generator_traits::value_to_yaml(msg.extr_ltg_sts_turn_indcr_le, out);
    out << ", ";
  }

  // member: extr_ltg_sts_turn_indcr_ri
  {
    out << "extr_ltg_sts_turn_indcr_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.extr_ltg_sts_turn_indcr_ri, out);
    out << ", ";
  }

  // member: brk_pedl_psd_brk_pedl_psd
  {
    out << "brk_pedl_psd_brk_pedl_psd: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_pedl_psd_brk_pedl_psd, out);
    out << ", ";
  }

  // member: brk_pedl_psd_brk_pedl_psd_qf
  {
    out << "brk_pedl_psd_brk_pedl_psd_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_pedl_psd_brk_pedl_psd_qf, out);
    out << ", ";
  }

  // member: road_incln
  {
    out << "road_incln: ";
    rosidl_generator_traits::value_to_yaml(msg.road_incln, out);
    out << ", ";
  }

  // member: stand_still_mgr_sts_for_hld1
  {
    out << "stand_still_mgr_sts_for_hld1: ";
    rosidl_generator_traits::value_to_yaml(msg.stand_still_mgr_sts_for_hld1, out);
    out << ", ";
  }

  // member: rain_level
  {
    out << "rain_level: ";
    rosidl_generator_traits::value_to_yaml(msg.rain_level, out);
    out << ", ";
  }

  // member: steer_whl_tq_addl
  {
    out << "steer_whl_tq_addl: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_whl_tq_addl, out);
    out << ", ";
  }

  // member: driver_steer_torque
  {
    out << "driver_steer_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_steer_torque, out);
    out << ", ";
  }

  // member: door_drvr_sts
  {
    out << "door_drvr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_drvr_sts, out);
    out << ", ";
  }

  // member: door_le_re_sts
  {
    out << "door_le_re_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_le_re_sts, out);
    out << ", ";
  }

  // member: door_pass_sts
  {
    out << "door_pass_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_pass_sts, out);
    out << ", ";
  }

  // member: door_ri_re_sts
  {
    out << "door_ri_re_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_ri_re_sts, out);
    out << ", ";
  }

  // member: mirr_fold_sts_at_drvr
  {
    out << "mirr_fold_sts_at_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.mirr_fold_sts_at_drvr, out);
    out << ", ";
  }

  // member: mirr_fold_sts_at_pass
  {
    out << "mirr_fold_sts_at_pass: ";
    rosidl_generator_traits::value_to_yaml(msg.mirr_fold_sts_at_pass, out);
    out << ", ";
  }

  // member: steer_wheel_angle_max
  {
    out << "steer_wheel_angle_max: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_wheel_angle_max, out);
    out << ", ";
  }

  // member: asy_actr_actv_for_lgt_ctrl
  {
    out << "asy_actr_actv_for_lgt_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_actr_actv_for_lgt_ctrl, out);
    out << ", ";
  }

  // member: asy_a_lgt_actv_aft_lim
  {
    out << "asy_a_lgt_actv_aft_lim: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_a_lgt_actv_aft_lim, out);
    out << ", ";
  }

  // member: veh_spd_indcd
  {
    out << "veh_spd_indcd: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_spd_indcd, out);
    out << ", ";
  }

  // member: illumination
  {
    out << "illumination: ";
    rosidl_generator_traits::value_to_yaml(msg.illumination, out);
    out << ", ";
  }

  // member: car_mode
  {
    out << "car_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.car_mode, out);
    out << ", ";
  }

  // member: usg_mode
  {
    out << "usg_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.usg_mode, out);
    out << ", ";
  }

  // member: temprature
  {
    out << "temprature: ";
    rosidl_generator_traits::value_to_yaml(msg.temprature, out);
    out << ", ";
  }

  // member: veh_batt_u_sys_u
  {
    out << "veh_batt_u_sys_u: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_batt_u_sys_u, out);
    out << ", ";
  }

  // member: trip
  {
    out << "trip: ";
    rosidl_generator_traits::value_to_yaml(msg.trip, out);
    out << ", ";
  }

  // member: power_level
  {
    out << "power_level: ";
    rosidl_generator_traits::value_to_yaml(msg.power_level, out);
    out << ", ";
  }

  // member: pt_tq_set_safe_req
  {
    out << "pt_tq_set_safe_req: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tq_set_safe_req, out);
    out << ", ";
  }

  // member: extr_ltg_sts_reverse_li
  {
    out << "extr_ltg_sts_reverse_li: ";
    rosidl_generator_traits::value_to_yaml(msg.extr_ltg_sts_reverse_li, out);
    out << ", ";
  }

  // member: trlr_prsnt
  {
    out << "trlr_prsnt: ";
    rosidl_generator_traits::value_to_yaml(msg.trlr_prsnt, out);
    out << ", ";
  }

  // member: tank_turn_mod_sts
  {
    out << "tank_turn_mod_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.tank_turn_mod_sts, out);
    out << ", ";
  }

  // member: crs_ctrl_ovr_dn
  {
    out << "crs_ctrl_ovr_dn: ";
    rosidl_generator_traits::value_to_yaml(msg.crs_ctrl_ovr_dn, out);
    out << ", ";
  }

  // member: rear_wheel_steer_angle
  {
    out << "rear_wheel_steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_wheel_steer_angle, out);
    out << ", ";
  }

  // member: pass_seat_sts2
  {
    out << "pass_seat_sts2: ";
    rosidl_generator_traits::value_to_yaml(msg.pass_seat_sts2, out);
    out << ", ";
  }

  // member: whl_lock_status
  {
    out << "whl_lock_status: ";
    rosidl_generator_traits::value_to_yaml(msg.whl_lock_status, out);
    out << ", ";
  }

  // member: tvc_not_avail_for_dpa
  {
    out << "tvc_not_avail_for_dpa: ";
    rosidl_generator_traits::value_to_yaml(msg.tvc_not_avail_for_dpa, out);
    out << ", ";
  }

  // member: steer_ext_fct_sts_ext_fct_lower_lim_active
  {
    out << "steer_ext_fct_sts_ext_fct_lower_lim_active: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_ext_fct_lower_lim_active, out);
    out << ", ";
  }

  // member: steer_ext_fct_sts_ext_fct_upper_lim_active
  {
    out << "steer_ext_fct_sts_ext_fct_upper_lim_active: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_ext_fct_upper_lim_active, out);
    out << ", ";
  }

  // member: steer_ext_fct_sts_drvr_steer_ovrd
  {
    out << "steer_ext_fct_sts_drvr_steer_ovrd: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_drvr_steer_ovrd, out);
    out << ", ";
  }

  // member: steer_ext_fct_sts_ext_fct_rate_lim_active
  {
    out << "steer_ext_fct_sts_ext_fct_rate_lim_active: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_ext_fct_rate_lim_active, out);
    out << ", ";
  }

  // member: steer_ext_fct_sts_ext_safe_lim_active
  {
    out << "steer_ext_fct_sts_ext_safe_lim_active: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_ext_safe_lim_active, out);
    out << ", ";
  }

  // member: steer_ext_fct_sts_lat_ag_req_not_in_range
  {
    out << "steer_ext_fct_sts_lat_ag_req_not_in_range: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_lat_ag_req_not_in_range, out);
    out << ", ";
  }

  // member: steer_ext_fct_sts_lat_ctrl_req_not_in_range
  {
    out << "steer_ext_fct_sts_lat_ctrl_req_not_in_range: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_lat_ctrl_req_not_in_range, out);
    out << ", ";
  }

  // member: pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  {
    out << "pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act, out);
    out << ", ";
  }

  // member: pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  {
    out << "pt_tg_at_whl_re_act_pt_tq_at_axle_re_act: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tg_at_whl_re_act_pt_tq_at_axle_re_act, out);
    out << ", ";
  }

  // member: steer_act_re_group_steer_act_re_sts
  {
    out << "steer_act_re_group_steer_act_re_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_act_re_group_steer_act_re_sts, out);
    out << ", ";
  }

  // member: drvg_dir_des
  {
    out << "drvg_dir_des: ";
    rosidl_generator_traits::value_to_yaml(msg.drvg_dir_des, out);
    out << ", ";
  }

  // member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  {
    out << "pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act, out);
    out << ", ";
  }

  // member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  {
    out << "pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act, out);
    out << ", ";
  }

  // member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  {
    out << "pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act, out);
    out << ", ";
  }

  // member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  {
    out << "pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act, out);
    out << ", ";
  }

  // member: tq_ass_addl
  {
    out << "tq_ass_addl: ";
    rosidl_generator_traits::value_to_yaml(msg.tq_ass_addl, out);
    out << ", ";
  }

  // member: sapa_veh_mtn_st_veh_mtn_st
  {
    out << "sapa_veh_mtn_st_veh_mtn_st: ";
    rosidl_generator_traits::value_to_yaml(msg.sapa_veh_mtn_st_veh_mtn_st, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleReportData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << "\n";
  }

  // member: engine_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_rpm, out);
    out << "\n";
  }

  // member: vehicle_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_speed, out);
    out << "\n";
  }

  // member: vehicle_speed_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_speed_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_speed_valid, out);
    out << "\n";
  }

  // member: vehicle_speed_safe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_speed_safe: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_speed_safe, out);
    out << "\n";
  }

  // member: wheel_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_speed:\n";
    to_block_style_yaml(msg.wheel_speed, out, indentation + 2);
  }

  // member: brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << "\n";
  }

  // member: steer_wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_wheel_angle, out);
    out << "\n";
  }

  // member: steer_wheel_angle_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_wheel_angle_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_wheel_angle_valid, out);
    out << "\n";
  }

  // member: steer_wheel_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_wheel_velocity, out);
    out << "\n";
  }

  // member: steer_wheel_velocity_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_wheel_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_wheel_velocity_valid, out);
    out << "\n";
  }

  // member: son_roof_posn_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "son_roof_posn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.son_roof_posn_sts, out);
    out << "\n";
  }

  // member: win_posn_sts_at_drvr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "win_posn_sts_at_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_drvr, out);
    out << "\n";
  }

  // member: win_posn_sts_at_pass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "win_posn_sts_at_pass: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_pass, out);
    out << "\n";
  }

  // member: win_posn_sts_at_re_le
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "win_posn_sts_at_re_le: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_re_le, out);
    out << "\n";
  }

  // member: win_posn_sts_at_re_ri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "win_posn_sts_at_re_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_re_ri, out);
    out << "\n";
  }

  // member: stop_li
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_li: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_li, out);
    out << "\n";
  }

  // member: seat_back_angle_row_first_drvr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seat_back_angle_row_first_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_back_angle_row_first_drvr, out);
    out << "\n";
  }

  // member: extr_ltg_sts_hi_beam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extr_ltg_sts_hi_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.extr_ltg_sts_hi_beam, out);
    out << "\n";
  }

  // member: extr_ltg_sts_lo_beam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extr_ltg_sts_lo_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.extr_ltg_sts_lo_beam, out);
    out << "\n";
  }

  // member: indcr_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "indcr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.indcr_sts, out);
    out << "\n";
  }

  // member: indcr_disp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "indcr_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.indcr_disp, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: epb_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epb_status: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_status, out);
    out << "\n";
  }

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << "\n";
  }

  // member: acc_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lat, out);
    out << "\n";
  }

  // member: acc_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lon, out);
    out << "\n";
  }

  // member: a_data_raw_safe_a_lat_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_data_raw_safe_a_lat_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.a_data_raw_safe_a_lat_qf, out);
    out << "\n";
  }

  // member: a_data_raw_safe_a_lgt_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_data_raw_safe_a_lgt_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.a_data_raw_safe_a_lgt_qf, out);
    out << "\n";
  }

  // member: ag_data_raw_safe_yaw_rate_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ag_data_raw_safe_yaw_rate_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.ag_data_raw_safe_yaw_rate_qf, out);
    out << "\n";
  }

  // member: extr_ltg_sts_turn_indcr_le
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extr_ltg_sts_turn_indcr_le: ";
    rosidl_generator_traits::value_to_yaml(msg.extr_ltg_sts_turn_indcr_le, out);
    out << "\n";
  }

  // member: extr_ltg_sts_turn_indcr_ri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extr_ltg_sts_turn_indcr_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.extr_ltg_sts_turn_indcr_ri, out);
    out << "\n";
  }

  // member: brk_pedl_psd_brk_pedl_psd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brk_pedl_psd_brk_pedl_psd: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_pedl_psd_brk_pedl_psd, out);
    out << "\n";
  }

  // member: brk_pedl_psd_brk_pedl_psd_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brk_pedl_psd_brk_pedl_psd_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_pedl_psd_brk_pedl_psd_qf, out);
    out << "\n";
  }

  // member: road_incln
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_incln: ";
    rosidl_generator_traits::value_to_yaml(msg.road_incln, out);
    out << "\n";
  }

  // member: stand_still_mgr_sts_for_hld1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stand_still_mgr_sts_for_hld1: ";
    rosidl_generator_traits::value_to_yaml(msg.stand_still_mgr_sts_for_hld1, out);
    out << "\n";
  }

  // member: rain_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rain_level: ";
    rosidl_generator_traits::value_to_yaml(msg.rain_level, out);
    out << "\n";
  }

  // member: steer_whl_tq_addl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_whl_tq_addl: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_whl_tq_addl, out);
    out << "\n";
  }

  // member: driver_steer_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_steer_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_steer_torque, out);
    out << "\n";
  }

  // member: door_drvr_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_drvr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_drvr_sts, out);
    out << "\n";
  }

  // member: door_le_re_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_le_re_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_le_re_sts, out);
    out << "\n";
  }

  // member: door_pass_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_pass_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_pass_sts, out);
    out << "\n";
  }

  // member: door_ri_re_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_ri_re_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_ri_re_sts, out);
    out << "\n";
  }

  // member: mirr_fold_sts_at_drvr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirr_fold_sts_at_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.mirr_fold_sts_at_drvr, out);
    out << "\n";
  }

  // member: mirr_fold_sts_at_pass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirr_fold_sts_at_pass: ";
    rosidl_generator_traits::value_to_yaml(msg.mirr_fold_sts_at_pass, out);
    out << "\n";
  }

  // member: steer_wheel_angle_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_wheel_angle_max: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_wheel_angle_max, out);
    out << "\n";
  }

  // member: asy_actr_actv_for_lgt_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_actr_actv_for_lgt_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_actr_actv_for_lgt_ctrl, out);
    out << "\n";
  }

  // member: asy_a_lgt_actv_aft_lim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_a_lgt_actv_aft_lim: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_a_lgt_actv_aft_lim, out);
    out << "\n";
  }

  // member: veh_spd_indcd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_spd_indcd: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_spd_indcd, out);
    out << "\n";
  }

  // member: illumination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumination: ";
    rosidl_generator_traits::value_to_yaml(msg.illumination, out);
    out << "\n";
  }

  // member: car_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "car_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.car_mode, out);
    out << "\n";
  }

  // member: usg_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usg_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.usg_mode, out);
    out << "\n";
  }

  // member: temprature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temprature: ";
    rosidl_generator_traits::value_to_yaml(msg.temprature, out);
    out << "\n";
  }

  // member: veh_batt_u_sys_u
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_batt_u_sys_u: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_batt_u_sys_u, out);
    out << "\n";
  }

  // member: trip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trip: ";
    rosidl_generator_traits::value_to_yaml(msg.trip, out);
    out << "\n";
  }

  // member: power_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_level: ";
    rosidl_generator_traits::value_to_yaml(msg.power_level, out);
    out << "\n";
  }

  // member: pt_tq_set_safe_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pt_tq_set_safe_req: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tq_set_safe_req, out);
    out << "\n";
  }

  // member: extr_ltg_sts_reverse_li
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extr_ltg_sts_reverse_li: ";
    rosidl_generator_traits::value_to_yaml(msg.extr_ltg_sts_reverse_li, out);
    out << "\n";
  }

  // member: trlr_prsnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trlr_prsnt: ";
    rosidl_generator_traits::value_to_yaml(msg.trlr_prsnt, out);
    out << "\n";
  }

  // member: tank_turn_mod_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tank_turn_mod_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.tank_turn_mod_sts, out);
    out << "\n";
  }

  // member: crs_ctrl_ovr_dn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crs_ctrl_ovr_dn: ";
    rosidl_generator_traits::value_to_yaml(msg.crs_ctrl_ovr_dn, out);
    out << "\n";
  }

  // member: rear_wheel_steer_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_wheel_steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_wheel_steer_angle, out);
    out << "\n";
  }

  // member: pass_seat_sts2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pass_seat_sts2: ";
    rosidl_generator_traits::value_to_yaml(msg.pass_seat_sts2, out);
    out << "\n";
  }

  // member: whl_lock_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "whl_lock_status: ";
    rosidl_generator_traits::value_to_yaml(msg.whl_lock_status, out);
    out << "\n";
  }

  // member: tvc_not_avail_for_dpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tvc_not_avail_for_dpa: ";
    rosidl_generator_traits::value_to_yaml(msg.tvc_not_avail_for_dpa, out);
    out << "\n";
  }

  // member: steer_ext_fct_sts_ext_fct_lower_lim_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_ext_fct_sts_ext_fct_lower_lim_active: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_ext_fct_lower_lim_active, out);
    out << "\n";
  }

  // member: steer_ext_fct_sts_ext_fct_upper_lim_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_ext_fct_sts_ext_fct_upper_lim_active: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_ext_fct_upper_lim_active, out);
    out << "\n";
  }

  // member: steer_ext_fct_sts_drvr_steer_ovrd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_ext_fct_sts_drvr_steer_ovrd: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_drvr_steer_ovrd, out);
    out << "\n";
  }

  // member: steer_ext_fct_sts_ext_fct_rate_lim_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_ext_fct_sts_ext_fct_rate_lim_active: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_ext_fct_rate_lim_active, out);
    out << "\n";
  }

  // member: steer_ext_fct_sts_ext_safe_lim_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_ext_fct_sts_ext_safe_lim_active: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_ext_safe_lim_active, out);
    out << "\n";
  }

  // member: steer_ext_fct_sts_lat_ag_req_not_in_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_ext_fct_sts_lat_ag_req_not_in_range: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_lat_ag_req_not_in_range, out);
    out << "\n";
  }

  // member: steer_ext_fct_sts_lat_ctrl_req_not_in_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_ext_fct_sts_lat_ctrl_req_not_in_range: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ext_fct_sts_lat_ctrl_req_not_in_range, out);
    out << "\n";
  }

  // member: pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act, out);
    out << "\n";
  }

  // member: pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pt_tg_at_whl_re_act_pt_tq_at_axle_re_act: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tg_at_whl_re_act_pt_tq_at_axle_re_act, out);
    out << "\n";
  }

  // member: steer_act_re_group_steer_act_re_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_act_re_group_steer_act_re_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_act_re_group_steer_act_re_sts, out);
    out << "\n";
  }

  // member: drvg_dir_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvg_dir_des: ";
    rosidl_generator_traits::value_to_yaml(msg.drvg_dir_des, out);
    out << "\n";
  }

  // member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act, out);
    out << "\n";
  }

  // member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act, out);
    out << "\n";
  }

  // member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act, out);
    out << "\n";
  }

  // member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act, out);
    out << "\n";
  }

  // member: tq_ass_addl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tq_ass_addl: ";
    rosidl_generator_traits::value_to_yaml(msg.tq_ass_addl, out);
    out << "\n";
  }

  // member: sapa_veh_mtn_st_veh_mtn_st
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sapa_veh_mtn_st_veh_mtn_st: ";
    rosidl_generator_traits::value_to_yaml(msg.sapa_veh_mtn_st_veh_mtn_st, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleReportData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace deva_function_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_function_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_function_msgs::msg::VehicleReportData & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::VehicleReportData & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::VehicleReportData>()
{
  return "deva_function_msgs::msg::VehicleReportData";
}

template<>
inline const char * name<deva_function_msgs::msg::VehicleReportData>()
{
  return "deva_function_msgs/msg/VehicleReportData";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::VehicleReportData>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value && has_fixed_size<deva_function_msgs::msg::WheelSpeed>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::VehicleReportData>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value && has_bounded_size<deva_function_msgs::msg::WheelSpeed>::value> {};

template<>
struct is_message<deva_function_msgs::msg::VehicleReportData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__VEHICLE_REPORT_DATA__TRAITS_HPP_
