// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_function_msgs:msg/VehicleReportData.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/vehicle_report_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_function_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_function_msgs/msg/detail/vehicle_report_data__struct.h"
#include "deva_function_msgs/msg/detail/vehicle_report_data__functions.h"
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
#include "deva_function_msgs/msg/detail/wheel_speed__functions.h"  // wheel_speed

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
size_t get_serialized_size_deva_function_msgs__msg__WheelSpeed(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_function_msgs__msg__WheelSpeed(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, WheelSpeed)();


using _VehicleReportData__ros_msg_type = deva_function_msgs__msg__VehicleReportData;

static bool _VehicleReportData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleReportData__ros_msg_type * ros_message = static_cast<const _VehicleReportData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: throttle
  {
    cdr << ros_message->throttle;
  }

  // Field name: engine_rpm
  {
    cdr << ros_message->engine_rpm;
  }

  // Field name: vehicle_speed
  {
    cdr << ros_message->vehicle_speed;
  }

  // Field name: vehicle_speed_valid
  {
    cdr << ros_message->vehicle_speed_valid;
  }

  // Field name: vehicle_speed_safe
  {
    cdr << ros_message->vehicle_speed_safe;
  }

  // Field name: wheel_speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, WheelSpeed
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->wheel_speed, cdr))
    {
      return false;
    }
  }

  // Field name: brake
  {
    cdr << ros_message->brake;
  }

  // Field name: steer_wheel_angle
  {
    cdr << ros_message->steer_wheel_angle;
  }

  // Field name: steer_wheel_angle_valid
  {
    cdr << ros_message->steer_wheel_angle_valid;
  }

  // Field name: steer_wheel_velocity
  {
    cdr << ros_message->steer_wheel_velocity;
  }

  // Field name: steer_wheel_velocity_valid
  {
    cdr << ros_message->steer_wheel_velocity_valid;
  }

  // Field name: son_roof_posn_sts
  {
    cdr << ros_message->son_roof_posn_sts;
  }

  // Field name: win_posn_sts_at_drvr
  {
    cdr << ros_message->win_posn_sts_at_drvr;
  }

  // Field name: win_posn_sts_at_pass
  {
    cdr << ros_message->win_posn_sts_at_pass;
  }

  // Field name: win_posn_sts_at_re_le
  {
    cdr << ros_message->win_posn_sts_at_re_le;
  }

  // Field name: win_posn_sts_at_re_ri
  {
    cdr << ros_message->win_posn_sts_at_re_ri;
  }

  // Field name: stop_li
  {
    cdr << ros_message->stop_li;
  }

  // Field name: seat_back_angle_row_first_drvr
  {
    cdr << ros_message->seat_back_angle_row_first_drvr;
  }

  // Field name: extr_ltg_sts_hi_beam
  {
    cdr << ros_message->extr_ltg_sts_hi_beam;
  }

  // Field name: extr_ltg_sts_lo_beam
  {
    cdr << ros_message->extr_ltg_sts_lo_beam;
  }

  // Field name: indcr_sts
  {
    cdr << ros_message->indcr_sts;
  }

  // Field name: indcr_disp
  {
    cdr << ros_message->indcr_disp;
  }

  // Field name: yaw_rate
  {
    cdr << ros_message->yaw_rate;
  }

  // Field name: error_code
  {
    cdr << ros_message->error_code;
  }

  // Field name: epb_status
  {
    cdr << ros_message->epb_status;
  }

  // Field name: gear
  {
    cdr << ros_message->gear;
  }

  // Field name: acc_lat
  {
    cdr << ros_message->acc_lat;
  }

  // Field name: acc_lon
  {
    cdr << ros_message->acc_lon;
  }

  // Field name: a_data_raw_safe_a_lat_qf
  {
    cdr << ros_message->a_data_raw_safe_a_lat_qf;
  }

  // Field name: a_data_raw_safe_a_lgt_qf
  {
    cdr << ros_message->a_data_raw_safe_a_lgt_qf;
  }

  // Field name: ag_data_raw_safe_yaw_rate_qf
  {
    cdr << ros_message->ag_data_raw_safe_yaw_rate_qf;
  }

  // Field name: extr_ltg_sts_turn_indcr_le
  {
    cdr << ros_message->extr_ltg_sts_turn_indcr_le;
  }

  // Field name: extr_ltg_sts_turn_indcr_ri
  {
    cdr << ros_message->extr_ltg_sts_turn_indcr_ri;
  }

  // Field name: brk_pedl_psd_brk_pedl_psd
  {
    cdr << ros_message->brk_pedl_psd_brk_pedl_psd;
  }

  // Field name: brk_pedl_psd_brk_pedl_psd_qf
  {
    cdr << ros_message->brk_pedl_psd_brk_pedl_psd_qf;
  }

  // Field name: road_incln
  {
    cdr << ros_message->road_incln;
  }

  // Field name: stand_still_mgr_sts_for_hld1
  {
    cdr << ros_message->stand_still_mgr_sts_for_hld1;
  }

  // Field name: rain_level
  {
    cdr << ros_message->rain_level;
  }

  // Field name: steer_whl_tq_addl
  {
    cdr << ros_message->steer_whl_tq_addl;
  }

  // Field name: driver_steer_torque
  {
    cdr << ros_message->driver_steer_torque;
  }

  // Field name: door_drvr_sts
  {
    cdr << ros_message->door_drvr_sts;
  }

  // Field name: door_le_re_sts
  {
    cdr << ros_message->door_le_re_sts;
  }

  // Field name: door_pass_sts
  {
    cdr << ros_message->door_pass_sts;
  }

  // Field name: door_ri_re_sts
  {
    cdr << ros_message->door_ri_re_sts;
  }

  // Field name: mirr_fold_sts_at_drvr
  {
    cdr << ros_message->mirr_fold_sts_at_drvr;
  }

  // Field name: mirr_fold_sts_at_pass
  {
    cdr << ros_message->mirr_fold_sts_at_pass;
  }

  // Field name: steer_wheel_angle_max
  {
    cdr << ros_message->steer_wheel_angle_max;
  }

  // Field name: asy_actr_actv_for_lgt_ctrl
  {
    cdr << ros_message->asy_actr_actv_for_lgt_ctrl;
  }

  // Field name: asy_a_lgt_actv_aft_lim
  {
    cdr << ros_message->asy_a_lgt_actv_aft_lim;
  }

  // Field name: veh_spd_indcd
  {
    cdr << ros_message->veh_spd_indcd;
  }

  // Field name: illumination
  {
    cdr << ros_message->illumination;
  }

  // Field name: car_mode
  {
    cdr << ros_message->car_mode;
  }

  // Field name: usg_mode
  {
    cdr << ros_message->usg_mode;
  }

  // Field name: temprature
  {
    cdr << ros_message->temprature;
  }

  // Field name: veh_batt_u_sys_u
  {
    cdr << ros_message->veh_batt_u_sys_u;
  }

  // Field name: trip
  {
    cdr << ros_message->trip;
  }

  // Field name: power_level
  {
    cdr << ros_message->power_level;
  }

  // Field name: pt_tq_set_safe_req
  {
    cdr << ros_message->pt_tq_set_safe_req;
  }

  // Field name: extr_ltg_sts_reverse_li
  {
    cdr << ros_message->extr_ltg_sts_reverse_li;
  }

  // Field name: trlr_prsnt
  {
    cdr << ros_message->trlr_prsnt;
  }

  // Field name: tank_turn_mod_sts
  {
    cdr << ros_message->tank_turn_mod_sts;
  }

  // Field name: crs_ctrl_ovr_dn
  {
    cdr << ros_message->crs_ctrl_ovr_dn;
  }

  // Field name: rear_wheel_steer_angle
  {
    cdr << ros_message->rear_wheel_steer_angle;
  }

  // Field name: pass_seat_sts2
  {
    cdr << ros_message->pass_seat_sts2;
  }

  // Field name: whl_lock_status
  {
    cdr << ros_message->whl_lock_status;
  }

  // Field name: tvc_not_avail_for_dpa
  {
    cdr << ros_message->tvc_not_avail_for_dpa;
  }

  // Field name: steer_ext_fct_sts_ext_fct_lower_lim_active
  {
    cdr << ros_message->steer_ext_fct_sts_ext_fct_lower_lim_active;
  }

  // Field name: steer_ext_fct_sts_ext_fct_upper_lim_active
  {
    cdr << ros_message->steer_ext_fct_sts_ext_fct_upper_lim_active;
  }

  // Field name: steer_ext_fct_sts_drvr_steer_ovrd
  {
    cdr << ros_message->steer_ext_fct_sts_drvr_steer_ovrd;
  }

  // Field name: steer_ext_fct_sts_ext_fct_rate_lim_active
  {
    cdr << ros_message->steer_ext_fct_sts_ext_fct_rate_lim_active;
  }

  // Field name: steer_ext_fct_sts_ext_safe_lim_active
  {
    cdr << ros_message->steer_ext_fct_sts_ext_safe_lim_active;
  }

  // Field name: steer_ext_fct_sts_lat_ag_req_not_in_range
  {
    cdr << ros_message->steer_ext_fct_sts_lat_ag_req_not_in_range;
  }

  // Field name: steer_ext_fct_sts_lat_ctrl_req_not_in_range
  {
    cdr << ros_message->steer_ext_fct_sts_lat_ctrl_req_not_in_range;
  }

  // Field name: pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  {
    cdr << ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act;
  }

  // Field name: pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  {
    cdr << ros_message->pt_tg_at_whl_re_act_pt_tq_at_axle_re_act;
  }

  // Field name: steer_act_re_group_steer_act_re_sts
  {
    cdr << ros_message->steer_act_re_group_steer_act_re_sts;
  }

  // Field name: drvg_dir_des
  {
    cdr << ros_message->drvg_dir_des;
  }

  // Field name: pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  {
    cdr << ros_message->pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act;
  }

  // Field name: pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  {
    cdr << ros_message->pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act;
  }

  // Field name: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  {
    cdr << ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act;
  }

  // Field name: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  {
    cdr << ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act;
  }

  // Field name: tq_ass_addl
  {
    cdr << ros_message->tq_ass_addl;
  }

  // Field name: sapa_veh_mtn_st_veh_mtn_st
  {
    cdr << ros_message->sapa_veh_mtn_st_veh_mtn_st;
  }

  return true;
}

static bool _VehicleReportData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleReportData__ros_msg_type * ros_message = static_cast<_VehicleReportData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: throttle
  {
    cdr >> ros_message->throttle;
  }

  // Field name: engine_rpm
  {
    cdr >> ros_message->engine_rpm;
  }

  // Field name: vehicle_speed
  {
    cdr >> ros_message->vehicle_speed;
  }

  // Field name: vehicle_speed_valid
  {
    cdr >> ros_message->vehicle_speed_valid;
  }

  // Field name: vehicle_speed_safe
  {
    cdr >> ros_message->vehicle_speed_safe;
  }

  // Field name: wheel_speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, WheelSpeed
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->wheel_speed))
    {
      return false;
    }
  }

  // Field name: brake
  {
    cdr >> ros_message->brake;
  }

  // Field name: steer_wheel_angle
  {
    cdr >> ros_message->steer_wheel_angle;
  }

  // Field name: steer_wheel_angle_valid
  {
    cdr >> ros_message->steer_wheel_angle_valid;
  }

  // Field name: steer_wheel_velocity
  {
    cdr >> ros_message->steer_wheel_velocity;
  }

  // Field name: steer_wheel_velocity_valid
  {
    cdr >> ros_message->steer_wheel_velocity_valid;
  }

  // Field name: son_roof_posn_sts
  {
    cdr >> ros_message->son_roof_posn_sts;
  }

  // Field name: win_posn_sts_at_drvr
  {
    cdr >> ros_message->win_posn_sts_at_drvr;
  }

  // Field name: win_posn_sts_at_pass
  {
    cdr >> ros_message->win_posn_sts_at_pass;
  }

  // Field name: win_posn_sts_at_re_le
  {
    cdr >> ros_message->win_posn_sts_at_re_le;
  }

  // Field name: win_posn_sts_at_re_ri
  {
    cdr >> ros_message->win_posn_sts_at_re_ri;
  }

  // Field name: stop_li
  {
    cdr >> ros_message->stop_li;
  }

  // Field name: seat_back_angle_row_first_drvr
  {
    cdr >> ros_message->seat_back_angle_row_first_drvr;
  }

  // Field name: extr_ltg_sts_hi_beam
  {
    cdr >> ros_message->extr_ltg_sts_hi_beam;
  }

  // Field name: extr_ltg_sts_lo_beam
  {
    cdr >> ros_message->extr_ltg_sts_lo_beam;
  }

  // Field name: indcr_sts
  {
    cdr >> ros_message->indcr_sts;
  }

  // Field name: indcr_disp
  {
    cdr >> ros_message->indcr_disp;
  }

  // Field name: yaw_rate
  {
    cdr >> ros_message->yaw_rate;
  }

  // Field name: error_code
  {
    cdr >> ros_message->error_code;
  }

  // Field name: epb_status
  {
    cdr >> ros_message->epb_status;
  }

  // Field name: gear
  {
    cdr >> ros_message->gear;
  }

  // Field name: acc_lat
  {
    cdr >> ros_message->acc_lat;
  }

  // Field name: acc_lon
  {
    cdr >> ros_message->acc_lon;
  }

  // Field name: a_data_raw_safe_a_lat_qf
  {
    cdr >> ros_message->a_data_raw_safe_a_lat_qf;
  }

  // Field name: a_data_raw_safe_a_lgt_qf
  {
    cdr >> ros_message->a_data_raw_safe_a_lgt_qf;
  }

  // Field name: ag_data_raw_safe_yaw_rate_qf
  {
    cdr >> ros_message->ag_data_raw_safe_yaw_rate_qf;
  }

  // Field name: extr_ltg_sts_turn_indcr_le
  {
    cdr >> ros_message->extr_ltg_sts_turn_indcr_le;
  }

  // Field name: extr_ltg_sts_turn_indcr_ri
  {
    cdr >> ros_message->extr_ltg_sts_turn_indcr_ri;
  }

  // Field name: brk_pedl_psd_brk_pedl_psd
  {
    cdr >> ros_message->brk_pedl_psd_brk_pedl_psd;
  }

  // Field name: brk_pedl_psd_brk_pedl_psd_qf
  {
    cdr >> ros_message->brk_pedl_psd_brk_pedl_psd_qf;
  }

  // Field name: road_incln
  {
    cdr >> ros_message->road_incln;
  }

  // Field name: stand_still_mgr_sts_for_hld1
  {
    cdr >> ros_message->stand_still_mgr_sts_for_hld1;
  }

  // Field name: rain_level
  {
    cdr >> ros_message->rain_level;
  }

  // Field name: steer_whl_tq_addl
  {
    cdr >> ros_message->steer_whl_tq_addl;
  }

  // Field name: driver_steer_torque
  {
    cdr >> ros_message->driver_steer_torque;
  }

  // Field name: door_drvr_sts
  {
    cdr >> ros_message->door_drvr_sts;
  }

  // Field name: door_le_re_sts
  {
    cdr >> ros_message->door_le_re_sts;
  }

  // Field name: door_pass_sts
  {
    cdr >> ros_message->door_pass_sts;
  }

  // Field name: door_ri_re_sts
  {
    cdr >> ros_message->door_ri_re_sts;
  }

  // Field name: mirr_fold_sts_at_drvr
  {
    cdr >> ros_message->mirr_fold_sts_at_drvr;
  }

  // Field name: mirr_fold_sts_at_pass
  {
    cdr >> ros_message->mirr_fold_sts_at_pass;
  }

  // Field name: steer_wheel_angle_max
  {
    cdr >> ros_message->steer_wheel_angle_max;
  }

  // Field name: asy_actr_actv_for_lgt_ctrl
  {
    cdr >> ros_message->asy_actr_actv_for_lgt_ctrl;
  }

  // Field name: asy_a_lgt_actv_aft_lim
  {
    cdr >> ros_message->asy_a_lgt_actv_aft_lim;
  }

  // Field name: veh_spd_indcd
  {
    cdr >> ros_message->veh_spd_indcd;
  }

  // Field name: illumination
  {
    cdr >> ros_message->illumination;
  }

  // Field name: car_mode
  {
    cdr >> ros_message->car_mode;
  }

  // Field name: usg_mode
  {
    cdr >> ros_message->usg_mode;
  }

  // Field name: temprature
  {
    cdr >> ros_message->temprature;
  }

  // Field name: veh_batt_u_sys_u
  {
    cdr >> ros_message->veh_batt_u_sys_u;
  }

  // Field name: trip
  {
    cdr >> ros_message->trip;
  }

  // Field name: power_level
  {
    cdr >> ros_message->power_level;
  }

  // Field name: pt_tq_set_safe_req
  {
    cdr >> ros_message->pt_tq_set_safe_req;
  }

  // Field name: extr_ltg_sts_reverse_li
  {
    cdr >> ros_message->extr_ltg_sts_reverse_li;
  }

  // Field name: trlr_prsnt
  {
    cdr >> ros_message->trlr_prsnt;
  }

  // Field name: tank_turn_mod_sts
  {
    cdr >> ros_message->tank_turn_mod_sts;
  }

  // Field name: crs_ctrl_ovr_dn
  {
    cdr >> ros_message->crs_ctrl_ovr_dn;
  }

  // Field name: rear_wheel_steer_angle
  {
    cdr >> ros_message->rear_wheel_steer_angle;
  }

  // Field name: pass_seat_sts2
  {
    cdr >> ros_message->pass_seat_sts2;
  }

  // Field name: whl_lock_status
  {
    cdr >> ros_message->whl_lock_status;
  }

  // Field name: tvc_not_avail_for_dpa
  {
    cdr >> ros_message->tvc_not_avail_for_dpa;
  }

  // Field name: steer_ext_fct_sts_ext_fct_lower_lim_active
  {
    cdr >> ros_message->steer_ext_fct_sts_ext_fct_lower_lim_active;
  }

  // Field name: steer_ext_fct_sts_ext_fct_upper_lim_active
  {
    cdr >> ros_message->steer_ext_fct_sts_ext_fct_upper_lim_active;
  }

  // Field name: steer_ext_fct_sts_drvr_steer_ovrd
  {
    cdr >> ros_message->steer_ext_fct_sts_drvr_steer_ovrd;
  }

  // Field name: steer_ext_fct_sts_ext_fct_rate_lim_active
  {
    cdr >> ros_message->steer_ext_fct_sts_ext_fct_rate_lim_active;
  }

  // Field name: steer_ext_fct_sts_ext_safe_lim_active
  {
    cdr >> ros_message->steer_ext_fct_sts_ext_safe_lim_active;
  }

  // Field name: steer_ext_fct_sts_lat_ag_req_not_in_range
  {
    cdr >> ros_message->steer_ext_fct_sts_lat_ag_req_not_in_range;
  }

  // Field name: steer_ext_fct_sts_lat_ctrl_req_not_in_range
  {
    cdr >> ros_message->steer_ext_fct_sts_lat_ctrl_req_not_in_range;
  }

  // Field name: pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  {
    cdr >> ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act;
  }

  // Field name: pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  {
    cdr >> ros_message->pt_tg_at_whl_re_act_pt_tq_at_axle_re_act;
  }

  // Field name: steer_act_re_group_steer_act_re_sts
  {
    cdr >> ros_message->steer_act_re_group_steer_act_re_sts;
  }

  // Field name: drvg_dir_des
  {
    cdr >> ros_message->drvg_dir_des;
  }

  // Field name: pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  {
    cdr >> ros_message->pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act;
  }

  // Field name: pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  {
    cdr >> ros_message->pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act;
  }

  // Field name: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  {
    cdr >> ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act;
  }

  // Field name: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  {
    cdr >> ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act;
  }

  // Field name: tq_ass_addl
  {
    cdr >> ros_message->tq_ass_addl;
  }

  // Field name: sapa_veh_mtn_st_veh_mtn_st
  {
    cdr >> ros_message->sapa_veh_mtn_st_veh_mtn_st;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t get_serialized_size_deva_function_msgs__msg__VehicleReportData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleReportData__ros_msg_type * ros_message = static_cast<const _VehicleReportData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name throttle
  {
    size_t item_size = sizeof(ros_message->throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_rpm
  {
    size_t item_size = sizeof(ros_message->engine_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_speed
  {
    size_t item_size = sizeof(ros_message->vehicle_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_speed_valid
  {
    size_t item_size = sizeof(ros_message->vehicle_speed_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_speed_safe
  {
    size_t item_size = sizeof(ros_message->vehicle_speed_safe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_speed

  current_alignment += get_serialized_size_deva_function_msgs__msg__WheelSpeed(
    &(ros_message->wheel_speed), current_alignment);
  // field.name brake
  {
    size_t item_size = sizeof(ros_message->brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_wheel_angle
  {
    size_t item_size = sizeof(ros_message->steer_wheel_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_wheel_angle_valid
  {
    size_t item_size = sizeof(ros_message->steer_wheel_angle_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_wheel_velocity
  {
    size_t item_size = sizeof(ros_message->steer_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_wheel_velocity_valid
  {
    size_t item_size = sizeof(ros_message->steer_wheel_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name son_roof_posn_sts
  {
    size_t item_size = sizeof(ros_message->son_roof_posn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name win_posn_sts_at_drvr
  {
    size_t item_size = sizeof(ros_message->win_posn_sts_at_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name win_posn_sts_at_pass
  {
    size_t item_size = sizeof(ros_message->win_posn_sts_at_pass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name win_posn_sts_at_re_le
  {
    size_t item_size = sizeof(ros_message->win_posn_sts_at_re_le);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name win_posn_sts_at_re_ri
  {
    size_t item_size = sizeof(ros_message->win_posn_sts_at_re_ri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop_li
  {
    size_t item_size = sizeof(ros_message->stop_li);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seat_back_angle_row_first_drvr
  {
    size_t item_size = sizeof(ros_message->seat_back_angle_row_first_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extr_ltg_sts_hi_beam
  {
    size_t item_size = sizeof(ros_message->extr_ltg_sts_hi_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extr_ltg_sts_lo_beam
  {
    size_t item_size = sizeof(ros_message->extr_ltg_sts_lo_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name indcr_sts
  {
    size_t item_size = sizeof(ros_message->indcr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name indcr_disp
  {
    size_t item_size = sizeof(ros_message->indcr_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate
  {
    size_t item_size = sizeof(ros_message->yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_code
  {
    size_t item_size = sizeof(ros_message->error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epb_status
  {
    size_t item_size = sizeof(ros_message->epb_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear
  {
    size_t item_size = sizeof(ros_message->gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_lat
  {
    size_t item_size = sizeof(ros_message->acc_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_lon
  {
    size_t item_size = sizeof(ros_message->acc_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a_data_raw_safe_a_lat_qf
  {
    size_t item_size = sizeof(ros_message->a_data_raw_safe_a_lat_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a_data_raw_safe_a_lgt_qf
  {
    size_t item_size = sizeof(ros_message->a_data_raw_safe_a_lgt_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ag_data_raw_safe_yaw_rate_qf
  {
    size_t item_size = sizeof(ros_message->ag_data_raw_safe_yaw_rate_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extr_ltg_sts_turn_indcr_le
  {
    size_t item_size = sizeof(ros_message->extr_ltg_sts_turn_indcr_le);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extr_ltg_sts_turn_indcr_ri
  {
    size_t item_size = sizeof(ros_message->extr_ltg_sts_turn_indcr_ri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk_pedl_psd_brk_pedl_psd
  {
    size_t item_size = sizeof(ros_message->brk_pedl_psd_brk_pedl_psd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk_pedl_psd_brk_pedl_psd_qf
  {
    size_t item_size = sizeof(ros_message->brk_pedl_psd_brk_pedl_psd_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_incln
  {
    size_t item_size = sizeof(ros_message->road_incln);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stand_still_mgr_sts_for_hld1
  {
    size_t item_size = sizeof(ros_message->stand_still_mgr_sts_for_hld1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rain_level
  {
    size_t item_size = sizeof(ros_message->rain_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_whl_tq_addl
  {
    size_t item_size = sizeof(ros_message->steer_whl_tq_addl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driver_steer_torque
  {
    size_t item_size = sizeof(ros_message->driver_steer_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_drvr_sts
  {
    size_t item_size = sizeof(ros_message->door_drvr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_le_re_sts
  {
    size_t item_size = sizeof(ros_message->door_le_re_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_pass_sts
  {
    size_t item_size = sizeof(ros_message->door_pass_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_ri_re_sts
  {
    size_t item_size = sizeof(ros_message->door_ri_re_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mirr_fold_sts_at_drvr
  {
    size_t item_size = sizeof(ros_message->mirr_fold_sts_at_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mirr_fold_sts_at_pass
  {
    size_t item_size = sizeof(ros_message->mirr_fold_sts_at_pass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_wheel_angle_max
  {
    size_t item_size = sizeof(ros_message->steer_wheel_angle_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_actr_actv_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message->asy_actr_actv_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_a_lgt_actv_aft_lim
  {
    size_t item_size = sizeof(ros_message->asy_a_lgt_actv_aft_lim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_spd_indcd
  {
    size_t item_size = sizeof(ros_message->veh_spd_indcd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumination
  {
    size_t item_size = sizeof(ros_message->illumination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name car_mode
  {
    size_t item_size = sizeof(ros_message->car_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name usg_mode
  {
    size_t item_size = sizeof(ros_message->usg_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temprature
  {
    size_t item_size = sizeof(ros_message->temprature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_batt_u_sys_u
  {
    size_t item_size = sizeof(ros_message->veh_batt_u_sys_u);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trip
  {
    size_t item_size = sizeof(ros_message->trip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_level
  {
    size_t item_size = sizeof(ros_message->power_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pt_tq_set_safe_req
  {
    size_t item_size = sizeof(ros_message->pt_tq_set_safe_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extr_ltg_sts_reverse_li
  {
    size_t item_size = sizeof(ros_message->extr_ltg_sts_reverse_li);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trlr_prsnt
  {
    size_t item_size = sizeof(ros_message->trlr_prsnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tank_turn_mod_sts
  {
    size_t item_size = sizeof(ros_message->tank_turn_mod_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crs_ctrl_ovr_dn
  {
    size_t item_size = sizeof(ros_message->crs_ctrl_ovr_dn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_wheel_steer_angle
  {
    size_t item_size = sizeof(ros_message->rear_wheel_steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pass_seat_sts2
  {
    size_t item_size = sizeof(ros_message->pass_seat_sts2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name whl_lock_status
  {
    size_t item_size = sizeof(ros_message->whl_lock_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tvc_not_avail_for_dpa
  {
    size_t item_size = sizeof(ros_message->tvc_not_avail_for_dpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_ext_fct_sts_ext_fct_lower_lim_active
  {
    size_t item_size = sizeof(ros_message->steer_ext_fct_sts_ext_fct_lower_lim_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_ext_fct_sts_ext_fct_upper_lim_active
  {
    size_t item_size = sizeof(ros_message->steer_ext_fct_sts_ext_fct_upper_lim_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_ext_fct_sts_drvr_steer_ovrd
  {
    size_t item_size = sizeof(ros_message->steer_ext_fct_sts_drvr_steer_ovrd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_ext_fct_sts_ext_fct_rate_lim_active
  {
    size_t item_size = sizeof(ros_message->steer_ext_fct_sts_ext_fct_rate_lim_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_ext_fct_sts_ext_safe_lim_active
  {
    size_t item_size = sizeof(ros_message->steer_ext_fct_sts_ext_safe_lim_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_ext_fct_sts_lat_ag_req_not_in_range
  {
    size_t item_size = sizeof(ros_message->steer_ext_fct_sts_lat_ag_req_not_in_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_ext_fct_sts_lat_ctrl_req_not_in_range
  {
    size_t item_size = sizeof(ros_message->steer_ext_fct_sts_lat_ctrl_req_not_in_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  {
    size_t item_size = sizeof(ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  {
    size_t item_size = sizeof(ros_message->pt_tg_at_whl_re_act_pt_tq_at_axle_re_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_act_re_group_steer_act_re_sts
  {
    size_t item_size = sizeof(ros_message->steer_act_re_group_steer_act_re_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvg_dir_des
  {
    size_t item_size = sizeof(ros_message->drvg_dir_des);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  {
    size_t item_size = sizeof(ros_message->pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  {
    size_t item_size = sizeof(ros_message->pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  {
    size_t item_size = sizeof(ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  {
    size_t item_size = sizeof(ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tq_ass_addl
  {
    size_t item_size = sizeof(ros_message->tq_ass_addl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sapa_veh_mtn_st_veh_mtn_st
  {
    size_t item_size = sizeof(ros_message->sapa_veh_mtn_st_veh_mtn_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleReportData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_function_msgs__msg__VehicleReportData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t max_serialized_size_deva_function_msgs__msg__VehicleReportData(
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
  // member: throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vehicle_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vehicle_speed_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle_speed_safe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_speed
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_function_msgs__msg__WheelSpeed(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steer_wheel_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steer_wheel_angle_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_wheel_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steer_wheel_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: son_roof_posn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: win_posn_sts_at_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: win_posn_sts_at_pass
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: win_posn_sts_at_re_le
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: win_posn_sts_at_re_ri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stop_li
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seat_back_angle_row_first_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: extr_ltg_sts_hi_beam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: extr_ltg_sts_lo_beam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: indcr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: indcr_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: yaw_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: error_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: epb_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acc_lat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_lon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: a_data_raw_safe_a_lat_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: a_data_raw_safe_a_lgt_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ag_data_raw_safe_yaw_rate_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: extr_ltg_sts_turn_indcr_le
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: extr_ltg_sts_turn_indcr_ri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk_pedl_psd_brk_pedl_psd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk_pedl_psd_brk_pedl_psd_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: road_incln
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stand_still_mgr_sts_for_hld1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rain_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_whl_tq_addl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: driver_steer_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: door_drvr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_le_re_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_pass_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_ri_re_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mirr_fold_sts_at_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mirr_fold_sts_at_pass
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_wheel_angle_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: asy_actr_actv_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_a_lgt_actv_aft_lim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: veh_spd_indcd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: illumination
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: car_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: usg_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temprature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: veh_batt_u_sys_u
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: power_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pt_tq_set_safe_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: extr_ltg_sts_reverse_li
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trlr_prsnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tank_turn_mod_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: crs_ctrl_ovr_dn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rear_wheel_steer_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pass_seat_sts2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: whl_lock_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tvc_not_avail_for_dpa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_ext_fct_sts_ext_fct_lower_lim_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_ext_fct_sts_ext_fct_upper_lim_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_ext_fct_sts_drvr_steer_ovrd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_ext_fct_sts_ext_fct_rate_lim_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_ext_fct_sts_ext_safe_lim_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_ext_fct_sts_lat_ag_req_not_in_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_ext_fct_sts_lat_ctrl_req_not_in_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: steer_act_re_group_steer_act_re_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvg_dir_des
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tq_ass_addl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sapa_veh_mtn_st_veh_mtn_st
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
    using DataType = deva_function_msgs__msg__VehicleReportData;
    is_plain =
      (
      offsetof(DataType, sapa_veh_mtn_st_veh_mtn_st) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VehicleReportData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_function_msgs__msg__VehicleReportData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleReportData = {
  "deva_function_msgs::msg",
  "VehicleReportData",
  _VehicleReportData__cdr_serialize,
  _VehicleReportData__cdr_deserialize,
  _VehicleReportData__get_serialized_size,
  _VehicleReportData__max_serialized_size
};

static rosidl_message_type_support_t _VehicleReportData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleReportData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, VehicleReportData)() {
  return &_VehicleReportData__type_support;
}

#if defined(__cplusplus)
}
#endif
