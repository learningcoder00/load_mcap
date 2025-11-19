// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/VehicleReportData.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/vehicle_report_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/vehicle_report_data__struct.hpp"

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
  const deva_function_msgs::msg::WheelSpeed &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_function_msgs::msg::WheelSpeed &);
size_t get_serialized_size(
  const deva_function_msgs::msg::WheelSpeed &,
  size_t current_alignment);
size_t
max_serialized_size_WheelSpeed(
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
  const deva_function_msgs::msg::VehicleReportData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: throttle
  cdr << ros_message.throttle;
  // Member: engine_rpm
  cdr << ros_message.engine_rpm;
  // Member: vehicle_speed
  cdr << ros_message.vehicle_speed;
  // Member: vehicle_speed_valid
  cdr << ros_message.vehicle_speed_valid;
  // Member: vehicle_speed_safe
  cdr << ros_message.vehicle_speed_safe;
  // Member: wheel_speed
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.wheel_speed,
    cdr);
  // Member: brake
  cdr << ros_message.brake;
  // Member: steer_wheel_angle
  cdr << ros_message.steer_wheel_angle;
  // Member: steer_wheel_angle_valid
  cdr << ros_message.steer_wheel_angle_valid;
  // Member: steer_wheel_velocity
  cdr << ros_message.steer_wheel_velocity;
  // Member: steer_wheel_velocity_valid
  cdr << ros_message.steer_wheel_velocity_valid;
  // Member: son_roof_posn_sts
  cdr << ros_message.son_roof_posn_sts;
  // Member: win_posn_sts_at_drvr
  cdr << ros_message.win_posn_sts_at_drvr;
  // Member: win_posn_sts_at_pass
  cdr << ros_message.win_posn_sts_at_pass;
  // Member: win_posn_sts_at_re_le
  cdr << ros_message.win_posn_sts_at_re_le;
  // Member: win_posn_sts_at_re_ri
  cdr << ros_message.win_posn_sts_at_re_ri;
  // Member: stop_li
  cdr << ros_message.stop_li;
  // Member: seat_back_angle_row_first_drvr
  cdr << ros_message.seat_back_angle_row_first_drvr;
  // Member: extr_ltg_sts_hi_beam
  cdr << ros_message.extr_ltg_sts_hi_beam;
  // Member: extr_ltg_sts_lo_beam
  cdr << ros_message.extr_ltg_sts_lo_beam;
  // Member: indcr_sts
  cdr << ros_message.indcr_sts;
  // Member: indcr_disp
  cdr << ros_message.indcr_disp;
  // Member: yaw_rate
  cdr << ros_message.yaw_rate;
  // Member: error_code
  cdr << ros_message.error_code;
  // Member: epb_status
  cdr << ros_message.epb_status;
  // Member: gear
  cdr << ros_message.gear;
  // Member: acc_lat
  cdr << ros_message.acc_lat;
  // Member: acc_lon
  cdr << ros_message.acc_lon;
  // Member: a_data_raw_safe_a_lat_qf
  cdr << ros_message.a_data_raw_safe_a_lat_qf;
  // Member: a_data_raw_safe_a_lgt_qf
  cdr << ros_message.a_data_raw_safe_a_lgt_qf;
  // Member: ag_data_raw_safe_yaw_rate_qf
  cdr << ros_message.ag_data_raw_safe_yaw_rate_qf;
  // Member: extr_ltg_sts_turn_indcr_le
  cdr << ros_message.extr_ltg_sts_turn_indcr_le;
  // Member: extr_ltg_sts_turn_indcr_ri
  cdr << ros_message.extr_ltg_sts_turn_indcr_ri;
  // Member: brk_pedl_psd_brk_pedl_psd
  cdr << ros_message.brk_pedl_psd_brk_pedl_psd;
  // Member: brk_pedl_psd_brk_pedl_psd_qf
  cdr << ros_message.brk_pedl_psd_brk_pedl_psd_qf;
  // Member: road_incln
  cdr << ros_message.road_incln;
  // Member: stand_still_mgr_sts_for_hld1
  cdr << ros_message.stand_still_mgr_sts_for_hld1;
  // Member: rain_level
  cdr << ros_message.rain_level;
  // Member: steer_whl_tq_addl
  cdr << ros_message.steer_whl_tq_addl;
  // Member: driver_steer_torque
  cdr << ros_message.driver_steer_torque;
  // Member: door_drvr_sts
  cdr << ros_message.door_drvr_sts;
  // Member: door_le_re_sts
  cdr << ros_message.door_le_re_sts;
  // Member: door_pass_sts
  cdr << ros_message.door_pass_sts;
  // Member: door_ri_re_sts
  cdr << ros_message.door_ri_re_sts;
  // Member: mirr_fold_sts_at_drvr
  cdr << ros_message.mirr_fold_sts_at_drvr;
  // Member: mirr_fold_sts_at_pass
  cdr << ros_message.mirr_fold_sts_at_pass;
  // Member: steer_wheel_angle_max
  cdr << ros_message.steer_wheel_angle_max;
  // Member: asy_actr_actv_for_lgt_ctrl
  cdr << ros_message.asy_actr_actv_for_lgt_ctrl;
  // Member: asy_a_lgt_actv_aft_lim
  cdr << ros_message.asy_a_lgt_actv_aft_lim;
  // Member: veh_spd_indcd
  cdr << ros_message.veh_spd_indcd;
  // Member: illumination
  cdr << ros_message.illumination;
  // Member: car_mode
  cdr << ros_message.car_mode;
  // Member: usg_mode
  cdr << ros_message.usg_mode;
  // Member: temprature
  cdr << ros_message.temprature;
  // Member: veh_batt_u_sys_u
  cdr << ros_message.veh_batt_u_sys_u;
  // Member: trip
  cdr << ros_message.trip;
  // Member: power_level
  cdr << ros_message.power_level;
  // Member: pt_tq_set_safe_req
  cdr << ros_message.pt_tq_set_safe_req;
  // Member: extr_ltg_sts_reverse_li
  cdr << ros_message.extr_ltg_sts_reverse_li;
  // Member: trlr_prsnt
  cdr << ros_message.trlr_prsnt;
  // Member: tank_turn_mod_sts
  cdr << ros_message.tank_turn_mod_sts;
  // Member: crs_ctrl_ovr_dn
  cdr << ros_message.crs_ctrl_ovr_dn;
  // Member: rear_wheel_steer_angle
  cdr << ros_message.rear_wheel_steer_angle;
  // Member: pass_seat_sts2
  cdr << ros_message.pass_seat_sts2;
  // Member: whl_lock_status
  cdr << ros_message.whl_lock_status;
  // Member: tvc_not_avail_for_dpa
  cdr << ros_message.tvc_not_avail_for_dpa;
  // Member: steer_ext_fct_sts_ext_fct_lower_lim_active
  cdr << ros_message.steer_ext_fct_sts_ext_fct_lower_lim_active;
  // Member: steer_ext_fct_sts_ext_fct_upper_lim_active
  cdr << ros_message.steer_ext_fct_sts_ext_fct_upper_lim_active;
  // Member: steer_ext_fct_sts_drvr_steer_ovrd
  cdr << ros_message.steer_ext_fct_sts_drvr_steer_ovrd;
  // Member: steer_ext_fct_sts_ext_fct_rate_lim_active
  cdr << ros_message.steer_ext_fct_sts_ext_fct_rate_lim_active;
  // Member: steer_ext_fct_sts_ext_safe_lim_active
  cdr << ros_message.steer_ext_fct_sts_ext_safe_lim_active;
  // Member: steer_ext_fct_sts_lat_ag_req_not_in_range
  cdr << ros_message.steer_ext_fct_sts_lat_ag_req_not_in_range;
  // Member: steer_ext_fct_sts_lat_ctrl_req_not_in_range
  cdr << ros_message.steer_ext_fct_sts_lat_ctrl_req_not_in_range;
  // Member: pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  cdr << ros_message.pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act;
  // Member: pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  cdr << ros_message.pt_tg_at_whl_re_act_pt_tq_at_axle_re_act;
  // Member: steer_act_re_group_steer_act_re_sts
  cdr << ros_message.steer_act_re_group_steer_act_re_sts;
  // Member: drvg_dir_des
  cdr << ros_message.drvg_dir_des;
  // Member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  cdr << ros_message.pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act;
  // Member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  cdr << ros_message.pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act;
  // Member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  cdr << ros_message.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act;
  // Member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  cdr << ros_message.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act;
  // Member: tq_ass_addl
  cdr << ros_message.tq_ass_addl;
  // Member: sapa_veh_mtn_st_veh_mtn_st
  cdr << ros_message.sapa_veh_mtn_st_veh_mtn_st;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::VehicleReportData & ros_message)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: throttle
  cdr >> ros_message.throttle;

  // Member: engine_rpm
  cdr >> ros_message.engine_rpm;

  // Member: vehicle_speed
  cdr >> ros_message.vehicle_speed;

  // Member: vehicle_speed_valid
  cdr >> ros_message.vehicle_speed_valid;

  // Member: vehicle_speed_safe
  cdr >> ros_message.vehicle_speed_safe;

  // Member: wheel_speed
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.wheel_speed);

  // Member: brake
  cdr >> ros_message.brake;

  // Member: steer_wheel_angle
  cdr >> ros_message.steer_wheel_angle;

  // Member: steer_wheel_angle_valid
  cdr >> ros_message.steer_wheel_angle_valid;

  // Member: steer_wheel_velocity
  cdr >> ros_message.steer_wheel_velocity;

  // Member: steer_wheel_velocity_valid
  cdr >> ros_message.steer_wheel_velocity_valid;

  // Member: son_roof_posn_sts
  cdr >> ros_message.son_roof_posn_sts;

  // Member: win_posn_sts_at_drvr
  cdr >> ros_message.win_posn_sts_at_drvr;

  // Member: win_posn_sts_at_pass
  cdr >> ros_message.win_posn_sts_at_pass;

  // Member: win_posn_sts_at_re_le
  cdr >> ros_message.win_posn_sts_at_re_le;

  // Member: win_posn_sts_at_re_ri
  cdr >> ros_message.win_posn_sts_at_re_ri;

  // Member: stop_li
  cdr >> ros_message.stop_li;

  // Member: seat_back_angle_row_first_drvr
  cdr >> ros_message.seat_back_angle_row_first_drvr;

  // Member: extr_ltg_sts_hi_beam
  cdr >> ros_message.extr_ltg_sts_hi_beam;

  // Member: extr_ltg_sts_lo_beam
  cdr >> ros_message.extr_ltg_sts_lo_beam;

  // Member: indcr_sts
  cdr >> ros_message.indcr_sts;

  // Member: indcr_disp
  cdr >> ros_message.indcr_disp;

  // Member: yaw_rate
  cdr >> ros_message.yaw_rate;

  // Member: error_code
  cdr >> ros_message.error_code;

  // Member: epb_status
  cdr >> ros_message.epb_status;

  // Member: gear
  cdr >> ros_message.gear;

  // Member: acc_lat
  cdr >> ros_message.acc_lat;

  // Member: acc_lon
  cdr >> ros_message.acc_lon;

  // Member: a_data_raw_safe_a_lat_qf
  cdr >> ros_message.a_data_raw_safe_a_lat_qf;

  // Member: a_data_raw_safe_a_lgt_qf
  cdr >> ros_message.a_data_raw_safe_a_lgt_qf;

  // Member: ag_data_raw_safe_yaw_rate_qf
  cdr >> ros_message.ag_data_raw_safe_yaw_rate_qf;

  // Member: extr_ltg_sts_turn_indcr_le
  cdr >> ros_message.extr_ltg_sts_turn_indcr_le;

  // Member: extr_ltg_sts_turn_indcr_ri
  cdr >> ros_message.extr_ltg_sts_turn_indcr_ri;

  // Member: brk_pedl_psd_brk_pedl_psd
  cdr >> ros_message.brk_pedl_psd_brk_pedl_psd;

  // Member: brk_pedl_psd_brk_pedl_psd_qf
  cdr >> ros_message.brk_pedl_psd_brk_pedl_psd_qf;

  // Member: road_incln
  cdr >> ros_message.road_incln;

  // Member: stand_still_mgr_sts_for_hld1
  cdr >> ros_message.stand_still_mgr_sts_for_hld1;

  // Member: rain_level
  cdr >> ros_message.rain_level;

  // Member: steer_whl_tq_addl
  cdr >> ros_message.steer_whl_tq_addl;

  // Member: driver_steer_torque
  cdr >> ros_message.driver_steer_torque;

  // Member: door_drvr_sts
  cdr >> ros_message.door_drvr_sts;

  // Member: door_le_re_sts
  cdr >> ros_message.door_le_re_sts;

  // Member: door_pass_sts
  cdr >> ros_message.door_pass_sts;

  // Member: door_ri_re_sts
  cdr >> ros_message.door_ri_re_sts;

  // Member: mirr_fold_sts_at_drvr
  cdr >> ros_message.mirr_fold_sts_at_drvr;

  // Member: mirr_fold_sts_at_pass
  cdr >> ros_message.mirr_fold_sts_at_pass;

  // Member: steer_wheel_angle_max
  cdr >> ros_message.steer_wheel_angle_max;

  // Member: asy_actr_actv_for_lgt_ctrl
  cdr >> ros_message.asy_actr_actv_for_lgt_ctrl;

  // Member: asy_a_lgt_actv_aft_lim
  cdr >> ros_message.asy_a_lgt_actv_aft_lim;

  // Member: veh_spd_indcd
  cdr >> ros_message.veh_spd_indcd;

  // Member: illumination
  cdr >> ros_message.illumination;

  // Member: car_mode
  cdr >> ros_message.car_mode;

  // Member: usg_mode
  cdr >> ros_message.usg_mode;

  // Member: temprature
  cdr >> ros_message.temprature;

  // Member: veh_batt_u_sys_u
  cdr >> ros_message.veh_batt_u_sys_u;

  // Member: trip
  cdr >> ros_message.trip;

  // Member: power_level
  cdr >> ros_message.power_level;

  // Member: pt_tq_set_safe_req
  cdr >> ros_message.pt_tq_set_safe_req;

  // Member: extr_ltg_sts_reverse_li
  cdr >> ros_message.extr_ltg_sts_reverse_li;

  // Member: trlr_prsnt
  cdr >> ros_message.trlr_prsnt;

  // Member: tank_turn_mod_sts
  cdr >> ros_message.tank_turn_mod_sts;

  // Member: crs_ctrl_ovr_dn
  cdr >> ros_message.crs_ctrl_ovr_dn;

  // Member: rear_wheel_steer_angle
  cdr >> ros_message.rear_wheel_steer_angle;

  // Member: pass_seat_sts2
  cdr >> ros_message.pass_seat_sts2;

  // Member: whl_lock_status
  cdr >> ros_message.whl_lock_status;

  // Member: tvc_not_avail_for_dpa
  cdr >> ros_message.tvc_not_avail_for_dpa;

  // Member: steer_ext_fct_sts_ext_fct_lower_lim_active
  cdr >> ros_message.steer_ext_fct_sts_ext_fct_lower_lim_active;

  // Member: steer_ext_fct_sts_ext_fct_upper_lim_active
  cdr >> ros_message.steer_ext_fct_sts_ext_fct_upper_lim_active;

  // Member: steer_ext_fct_sts_drvr_steer_ovrd
  cdr >> ros_message.steer_ext_fct_sts_drvr_steer_ovrd;

  // Member: steer_ext_fct_sts_ext_fct_rate_lim_active
  cdr >> ros_message.steer_ext_fct_sts_ext_fct_rate_lim_active;

  // Member: steer_ext_fct_sts_ext_safe_lim_active
  cdr >> ros_message.steer_ext_fct_sts_ext_safe_lim_active;

  // Member: steer_ext_fct_sts_lat_ag_req_not_in_range
  cdr >> ros_message.steer_ext_fct_sts_lat_ag_req_not_in_range;

  // Member: steer_ext_fct_sts_lat_ctrl_req_not_in_range
  cdr >> ros_message.steer_ext_fct_sts_lat_ctrl_req_not_in_range;

  // Member: pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  cdr >> ros_message.pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act;

  // Member: pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  cdr >> ros_message.pt_tg_at_whl_re_act_pt_tq_at_axle_re_act;

  // Member: steer_act_re_group_steer_act_re_sts
  cdr >> ros_message.steer_act_re_group_steer_act_re_sts;

  // Member: drvg_dir_des
  cdr >> ros_message.drvg_dir_des;

  // Member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  cdr >> ros_message.pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act;

  // Member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  cdr >> ros_message.pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act;

  // Member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  cdr >> ros_message.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act;

  // Member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  cdr >> ros_message.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act;

  // Member: tq_ass_addl
  cdr >> ros_message.tq_ass_addl;

  // Member: sapa_veh_mtn_st_veh_mtn_st
  cdr >> ros_message.sapa_veh_mtn_st_veh_mtn_st;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::VehicleReportData & ros_message,
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
  // Member: throttle
  {
    size_t item_size = sizeof(ros_message.throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_rpm
  {
    size_t item_size = sizeof(ros_message.engine_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_speed
  {
    size_t item_size = sizeof(ros_message.vehicle_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_speed_valid
  {
    size_t item_size = sizeof(ros_message.vehicle_speed_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_speed_safe
  {
    size_t item_size = sizeof(ros_message.vehicle_speed_safe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_speed

  current_alignment +=
    deva_function_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.wheel_speed, current_alignment);
  // Member: brake
  {
    size_t item_size = sizeof(ros_message.brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_wheel_angle
  {
    size_t item_size = sizeof(ros_message.steer_wheel_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_wheel_angle_valid
  {
    size_t item_size = sizeof(ros_message.steer_wheel_angle_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_wheel_velocity
  {
    size_t item_size = sizeof(ros_message.steer_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_wheel_velocity_valid
  {
    size_t item_size = sizeof(ros_message.steer_wheel_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: son_roof_posn_sts
  {
    size_t item_size = sizeof(ros_message.son_roof_posn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: win_posn_sts_at_drvr
  {
    size_t item_size = sizeof(ros_message.win_posn_sts_at_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: win_posn_sts_at_pass
  {
    size_t item_size = sizeof(ros_message.win_posn_sts_at_pass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: win_posn_sts_at_re_le
  {
    size_t item_size = sizeof(ros_message.win_posn_sts_at_re_le);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: win_posn_sts_at_re_ri
  {
    size_t item_size = sizeof(ros_message.win_posn_sts_at_re_ri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stop_li
  {
    size_t item_size = sizeof(ros_message.stop_li);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seat_back_angle_row_first_drvr
  {
    size_t item_size = sizeof(ros_message.seat_back_angle_row_first_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extr_ltg_sts_hi_beam
  {
    size_t item_size = sizeof(ros_message.extr_ltg_sts_hi_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extr_ltg_sts_lo_beam
  {
    size_t item_size = sizeof(ros_message.extr_ltg_sts_lo_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: indcr_sts
  {
    size_t item_size = sizeof(ros_message.indcr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: indcr_disp
  {
    size_t item_size = sizeof(ros_message.indcr_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate
  {
    size_t item_size = sizeof(ros_message.yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_code
  {
    size_t item_size = sizeof(ros_message.error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epb_status
  {
    size_t item_size = sizeof(ros_message.epb_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear
  {
    size_t item_size = sizeof(ros_message.gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_lat
  {
    size_t item_size = sizeof(ros_message.acc_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_lon
  {
    size_t item_size = sizeof(ros_message.acc_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a_data_raw_safe_a_lat_qf
  {
    size_t item_size = sizeof(ros_message.a_data_raw_safe_a_lat_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a_data_raw_safe_a_lgt_qf
  {
    size_t item_size = sizeof(ros_message.a_data_raw_safe_a_lgt_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ag_data_raw_safe_yaw_rate_qf
  {
    size_t item_size = sizeof(ros_message.ag_data_raw_safe_yaw_rate_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extr_ltg_sts_turn_indcr_le
  {
    size_t item_size = sizeof(ros_message.extr_ltg_sts_turn_indcr_le);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extr_ltg_sts_turn_indcr_ri
  {
    size_t item_size = sizeof(ros_message.extr_ltg_sts_turn_indcr_ri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk_pedl_psd_brk_pedl_psd
  {
    size_t item_size = sizeof(ros_message.brk_pedl_psd_brk_pedl_psd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk_pedl_psd_brk_pedl_psd_qf
  {
    size_t item_size = sizeof(ros_message.brk_pedl_psd_brk_pedl_psd_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: road_incln
  {
    size_t item_size = sizeof(ros_message.road_incln);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stand_still_mgr_sts_for_hld1
  {
    size_t item_size = sizeof(ros_message.stand_still_mgr_sts_for_hld1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rain_level
  {
    size_t item_size = sizeof(ros_message.rain_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_whl_tq_addl
  {
    size_t item_size = sizeof(ros_message.steer_whl_tq_addl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driver_steer_torque
  {
    size_t item_size = sizeof(ros_message.driver_steer_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_drvr_sts
  {
    size_t item_size = sizeof(ros_message.door_drvr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_le_re_sts
  {
    size_t item_size = sizeof(ros_message.door_le_re_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_pass_sts
  {
    size_t item_size = sizeof(ros_message.door_pass_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_ri_re_sts
  {
    size_t item_size = sizeof(ros_message.door_ri_re_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mirr_fold_sts_at_drvr
  {
    size_t item_size = sizeof(ros_message.mirr_fold_sts_at_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mirr_fold_sts_at_pass
  {
    size_t item_size = sizeof(ros_message.mirr_fold_sts_at_pass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_wheel_angle_max
  {
    size_t item_size = sizeof(ros_message.steer_wheel_angle_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_actr_actv_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message.asy_actr_actv_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_a_lgt_actv_aft_lim
  {
    size_t item_size = sizeof(ros_message.asy_a_lgt_actv_aft_lim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_spd_indcd
  {
    size_t item_size = sizeof(ros_message.veh_spd_indcd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumination
  {
    size_t item_size = sizeof(ros_message.illumination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: car_mode
  {
    size_t item_size = sizeof(ros_message.car_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: usg_mode
  {
    size_t item_size = sizeof(ros_message.usg_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temprature
  {
    size_t item_size = sizeof(ros_message.temprature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_batt_u_sys_u
  {
    size_t item_size = sizeof(ros_message.veh_batt_u_sys_u);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trip
  {
    size_t item_size = sizeof(ros_message.trip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_level
  {
    size_t item_size = sizeof(ros_message.power_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pt_tq_set_safe_req
  {
    size_t item_size = sizeof(ros_message.pt_tq_set_safe_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extr_ltg_sts_reverse_li
  {
    size_t item_size = sizeof(ros_message.extr_ltg_sts_reverse_li);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trlr_prsnt
  {
    size_t item_size = sizeof(ros_message.trlr_prsnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tank_turn_mod_sts
  {
    size_t item_size = sizeof(ros_message.tank_turn_mod_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crs_ctrl_ovr_dn
  {
    size_t item_size = sizeof(ros_message.crs_ctrl_ovr_dn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_wheel_steer_angle
  {
    size_t item_size = sizeof(ros_message.rear_wheel_steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pass_seat_sts2
  {
    size_t item_size = sizeof(ros_message.pass_seat_sts2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: whl_lock_status
  {
    size_t item_size = sizeof(ros_message.whl_lock_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tvc_not_avail_for_dpa
  {
    size_t item_size = sizeof(ros_message.tvc_not_avail_for_dpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_ext_fct_sts_ext_fct_lower_lim_active
  {
    size_t item_size = sizeof(ros_message.steer_ext_fct_sts_ext_fct_lower_lim_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_ext_fct_sts_ext_fct_upper_lim_active
  {
    size_t item_size = sizeof(ros_message.steer_ext_fct_sts_ext_fct_upper_lim_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_ext_fct_sts_drvr_steer_ovrd
  {
    size_t item_size = sizeof(ros_message.steer_ext_fct_sts_drvr_steer_ovrd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_ext_fct_sts_ext_fct_rate_lim_active
  {
    size_t item_size = sizeof(ros_message.steer_ext_fct_sts_ext_fct_rate_lim_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_ext_fct_sts_ext_safe_lim_active
  {
    size_t item_size = sizeof(ros_message.steer_ext_fct_sts_ext_safe_lim_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_ext_fct_sts_lat_ag_req_not_in_range
  {
    size_t item_size = sizeof(ros_message.steer_ext_fct_sts_lat_ag_req_not_in_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_ext_fct_sts_lat_ctrl_req_not_in_range
  {
    size_t item_size = sizeof(ros_message.steer_ext_fct_sts_lat_ctrl_req_not_in_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  {
    size_t item_size = sizeof(ros_message.pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  {
    size_t item_size = sizeof(ros_message.pt_tg_at_whl_re_act_pt_tq_at_axle_re_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_act_re_group_steer_act_re_sts
  {
    size_t item_size = sizeof(ros_message.steer_act_re_group_steer_act_re_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvg_dir_des
  {
    size_t item_size = sizeof(ros_message.drvg_dir_des);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  {
    size_t item_size = sizeof(ros_message.pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  {
    size_t item_size = sizeof(ros_message.pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  {
    size_t item_size = sizeof(ros_message.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  {
    size_t item_size = sizeof(ros_message.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tq_ass_addl
  {
    size_t item_size = sizeof(ros_message.tq_ass_addl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sapa_veh_mtn_st_veh_mtn_st
  {
    size_t item_size = sizeof(ros_message.sapa_veh_mtn_st_veh_mtn_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
max_serialized_size_VehicleReportData(
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

  // Member: throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vehicle_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vehicle_speed_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_speed_safe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_speed
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_function_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WheelSpeed(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steer_wheel_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steer_wheel_angle_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_wheel_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steer_wheel_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: son_roof_posn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: win_posn_sts_at_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: win_posn_sts_at_pass
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: win_posn_sts_at_re_le
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: win_posn_sts_at_re_ri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stop_li
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: seat_back_angle_row_first_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: extr_ltg_sts_hi_beam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: extr_ltg_sts_lo_beam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: indcr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: indcr_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: yaw_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: error_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: epb_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acc_lat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: acc_lon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: a_data_raw_safe_a_lat_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: a_data_raw_safe_a_lgt_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ag_data_raw_safe_yaw_rate_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: extr_ltg_sts_turn_indcr_le
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: extr_ltg_sts_turn_indcr_ri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk_pedl_psd_brk_pedl_psd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk_pedl_psd_brk_pedl_psd_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: road_incln
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stand_still_mgr_sts_for_hld1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rain_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_whl_tq_addl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: driver_steer_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: door_drvr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_le_re_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_pass_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_ri_re_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mirr_fold_sts_at_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mirr_fold_sts_at_pass
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_wheel_angle_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: asy_actr_actv_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_a_lgt_actv_aft_lim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: veh_spd_indcd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: illumination
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: car_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: usg_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: temprature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: veh_batt_u_sys_u
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: power_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pt_tq_set_safe_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: extr_ltg_sts_reverse_li
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trlr_prsnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tank_turn_mod_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: crs_ctrl_ovr_dn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rear_wheel_steer_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pass_seat_sts2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: whl_lock_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tvc_not_avail_for_dpa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_ext_fct_sts_ext_fct_lower_lim_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_ext_fct_sts_ext_fct_upper_lim_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_ext_fct_sts_drvr_steer_ovrd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_ext_fct_sts_ext_fct_rate_lim_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_ext_fct_sts_ext_safe_lim_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_ext_fct_sts_lat_ag_req_not_in_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_ext_fct_sts_lat_ctrl_req_not_in_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: steer_act_re_group_steer_act_re_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvg_dir_des
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tq_ass_addl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sapa_veh_mtn_st_veh_mtn_st
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
    using DataType = deva_function_msgs::msg::VehicleReportData;
    is_plain =
      (
      offsetof(DataType, sapa_veh_mtn_st_veh_mtn_st) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VehicleReportData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::VehicleReportData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleReportData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::VehicleReportData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleReportData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::VehicleReportData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleReportData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VehicleReportData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VehicleReportData__callbacks = {
  "deva_function_msgs::msg",
  "VehicleReportData",
  _VehicleReportData__cdr_serialize,
  _VehicleReportData__cdr_deserialize,
  _VehicleReportData__get_serialized_size,
  _VehicleReportData__max_serialized_size
};

static rosidl_message_type_support_t _VehicleReportData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleReportData__callbacks,
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
get_message_type_support_handle<deva_function_msgs::msg::VehicleReportData>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_VehicleReportData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, VehicleReportData)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_VehicleReportData__handle;
}

#ifdef __cplusplus
}
#endif
