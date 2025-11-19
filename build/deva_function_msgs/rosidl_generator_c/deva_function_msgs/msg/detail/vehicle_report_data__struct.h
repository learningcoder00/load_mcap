// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/VehicleReportData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__VEHICLE_REPORT_DATA__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__VEHICLE_REPORT_DATA__STRUCT_H_

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
// Member 'wheel_speed'
#include "deva_function_msgs/msg/detail/wheel_speed__struct.h"

/// Struct defined in msg/VehicleReportData in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__VehicleReportData
{
  deva_common_msgs__msg__Header header;
  float throttle;
  float engine_rpm;
  float vehicle_speed;
  uint8_t vehicle_speed_valid;
  float vehicle_speed_safe;
  deva_function_msgs__msg__WheelSpeed wheel_speed;
  float brake;
  float steer_wheel_angle;
  uint8_t steer_wheel_angle_valid;
  float steer_wheel_velocity;
  uint8_t steer_wheel_velocity_valid;
  uint8_t son_roof_posn_sts;
  uint8_t win_posn_sts_at_drvr;
  uint8_t win_posn_sts_at_pass;
  uint8_t win_posn_sts_at_re_le;
  uint8_t win_posn_sts_at_re_ri;
  uint8_t stop_li;
  float seat_back_angle_row_first_drvr;
  uint8_t extr_ltg_sts_hi_beam;
  uint8_t extr_ltg_sts_lo_beam;
  uint8_t indcr_sts;
  uint8_t indcr_disp;
  float yaw_rate;
  uint8_t error_code;
  uint8_t epb_status;
  uint8_t gear;
  float acc_lat;
  float acc_lon;
  uint8_t a_data_raw_safe_a_lat_qf;
  uint8_t a_data_raw_safe_a_lgt_qf;
  uint8_t ag_data_raw_safe_yaw_rate_qf;
  uint8_t extr_ltg_sts_turn_indcr_le;
  uint8_t extr_ltg_sts_turn_indcr_ri;
  uint8_t brk_pedl_psd_brk_pedl_psd;
  uint8_t brk_pedl_psd_brk_pedl_psd_qf;
  float road_incln;
  uint8_t stand_still_mgr_sts_for_hld1;
  uint8_t rain_level;
  float steer_whl_tq_addl;
  float driver_steer_torque;
  uint8_t door_drvr_sts;
  uint8_t door_le_re_sts;
  uint8_t door_pass_sts;
  uint8_t door_ri_re_sts;
  uint8_t mirr_fold_sts_at_drvr;
  uint8_t mirr_fold_sts_at_pass;
  float steer_wheel_angle_max;
  uint8_t asy_actr_actv_for_lgt_ctrl;
  float asy_a_lgt_actv_aft_lim;
  float veh_spd_indcd;
  uint16_t illumination;
  uint8_t car_mode;
  uint8_t usg_mode;
  float temprature;
  float veh_batt_u_sys_u;
  uint32_t trip;
  uint8_t power_level;
  int16_t pt_tq_set_safe_req;
  uint8_t extr_ltg_sts_reverse_li;
  uint8_t trlr_prsnt;
  uint8_t tank_turn_mod_sts;
  uint8_t crs_ctrl_ovr_dn;
  uint8_t rear_wheel_steer_angle;
  uint8_t pass_seat_sts2;
  uint8_t whl_lock_status;
  uint8_t tvc_not_avail_for_dpa;
  uint8_t steer_ext_fct_sts_ext_fct_lower_lim_active;
  uint8_t steer_ext_fct_sts_ext_fct_upper_lim_active;
  uint8_t steer_ext_fct_sts_drvr_steer_ovrd;
  uint8_t steer_ext_fct_sts_ext_fct_rate_lim_active;
  uint8_t steer_ext_fct_sts_ext_safe_lim_active;
  uint8_t steer_ext_fct_sts_lat_ag_req_not_in_range;
  uint8_t steer_ext_fct_sts_lat_ctrl_req_not_in_range;
  int16_t pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act;
  int16_t pt_tg_at_whl_re_act_pt_tq_at_axle_re_act;
  uint8_t steer_act_re_group_steer_act_re_sts;
  uint8_t drvg_dir_des;
  float pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act;
  float pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act;
  float pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act;
  float pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act;
  float tq_ass_addl;
  uint8_t sapa_veh_mtn_st_veh_mtn_st;
} deva_function_msgs__msg__VehicleReportData;

// Struct for a sequence of deva_function_msgs__msg__VehicleReportData.
typedef struct deva_function_msgs__msg__VehicleReportData__Sequence
{
  deva_function_msgs__msg__VehicleReportData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__VehicleReportData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__VEHICLE_REPORT_DATA__STRUCT_H_
