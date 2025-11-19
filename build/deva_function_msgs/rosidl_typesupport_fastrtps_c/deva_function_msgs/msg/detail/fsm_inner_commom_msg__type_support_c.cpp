// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_function_msgs:msg/FsmInnerCommomMsg.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/fsm_inner_commom_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_function_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_function_msgs/msg/detail/fsm_inner_commom_msg__struct.h"
#include "deva_function_msgs/msg/detail/fsm_inner_commom_msg__functions.h"
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


using _FsmInnerCommomMsg__ros_msg_type = deva_function_msgs__msg__FsmInnerCommomMsg;

static bool _FsmInnerCommomMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FsmInnerCommomMsg__ros_msg_type * ros_message = static_cast<const _FsmInnerCommomMsg__ros_msg_type *>(untyped_ros_message);
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

  // Field name: asy_cnoa_crs_lan_chg_msg
  {
    cdr << ros_message->asy_cnoa_crs_lan_chg_msg;
  }

  // Field name: set_spd_for_crs_ctrl_fct_active
  {
    cdr << ros_message->set_spd_for_crs_ctrl_fct_active;
  }

  // Field name: asy_lane_chg_assist_sts
  {
    cdr << ros_message->asy_lane_chg_assist_sts;
  }

  // Field name: indcr_sts
  {
    cdr << ros_message->indcr_sts;
  }

  // Field name: asy_noa_takeover_sod
  {
    cdr << ros_message->asy_noa_takeover_sod;
  }

  // Field name: hmi_drvr_sod_req_pilot
  {
    cdr << ros_message->hmi_drvr_sod_req_pilot;
  }

  // Field name: drvr_crs_ctrl_fct_actv_req
  {
    cdr << ros_message->drvr_crs_ctrl_fct_actv_req;
  }

  // Field name: asy_algt_indcr
  {
    cdr << ros_message->asy_algt_indcr;
  }

  // Field name: ti_gap_set_for_lgt_ctrl
  {
    cdr << ros_message->ti_gap_set_for_lgt_ctrl;
  }

  // Field name: drv_mod_req
  {
    cdr << ros_message->drv_mod_req;
  }

  // Field name: drv_off_warn
  {
    cdr << ros_message->drv_off_warn;
  }

  // Field name: asy_alat_indcr
  {
    cdr << ros_message->asy_alat_indcr;
  }

  // Field name: asy_lgt_ctrl_take_over_req
  {
    cdr << ros_message->asy_lgt_ctrl_take_over_req;
  }

  // Field name: ovrd_wrn_for_fst_actv
  {
    cdr << ros_message->ovrd_wrn_for_fst_actv;
  }

  // Field name: asy_inform_for_drvr
  {
    cdr << ros_message->asy_inform_for_drvr;
  }

  // Field name: cncl_warn_lgt_for_aut_drv
  {
    cdr << ros_message->cncl_warn_lgt_for_aut_drv;
  }

  // Field name: avl_sts_for_long_aut_drv
  {
    cdr << ros_message->avl_sts_for_long_aut_drv;
  }

  // Field name: asy_steer_apply_rqrd
  {
    cdr << ros_message->asy_steer_apply_rqrd;
  }

  // Field name: asy_lan_chg_mesg
  {
    cdr << ros_message->asy_lan_chg_mesg;
  }

  // Field name: asy_safe_stop_sts
  {
    cdr << ros_message->asy_safe_stop_sts;
  }

  // Field name: asy_eyes_off_warn_rqrd
  {
    cdr << ros_message->asy_eyes_off_warn_rqrd;
  }

  // Field name: asy_noa_remind_mesg
  {
    cdr << ros_message->asy_noa_remind_mesg;
  }

  // Field name: asy_noa_takeover_mesg
  {
    cdr << ros_message->asy_noa_takeover_mesg;
  }

  // Field name: asy_aut_drvg_avl
  {
    cdr << ros_message->asy_aut_drvg_avl;
  }

  // Field name: asy_noa_actv_suggest
  {
    cdr << ros_message->asy_noa_actv_suggest;
  }

  // Field name: cncl_warn_for_aut_drv
  {
    cdr << ros_message->cncl_warn_for_aut_drv;
  }

  // Field name: asy_lat_deg_sts
  {
    cdr << ros_message->asy_lat_deg_sts;
  }

  // Field name: asy_icc_max_warn_msg
  {
    cdr << ros_message->asy_icc_max_warn_msg;
  }

  // Field name: asy_cnoa_takeover_warn_msg
  {
    cdr << ros_message->asy_cnoa_takeover_warn_msg;
  }

  // Field name: asy_cnoa_crs_cross_intsec_msg
  {
    cdr << ros_message->asy_cnoa_crs_cross_intsec_msg;
  }

  // Field name: asy_d2d_avl_rmn
  {
    cdr << ros_message->asy_d2d_avl_rmn;
  }

  // Field name: asy_d2d_distan_msg
  {
    cdr << ros_message->asy_d2d_distan_msg;
  }

  // Field name: asy_d2d_strt_to_end
  {
    cdr << ros_message->asy_d2d_strt_to_end;
  }

  // Field name: asy_d2d_deactvd_reasn_mesg
  {
    cdr << ros_message->asy_d2d_deactvd_reasn_mesg;
  }

  // Field name: asy_aut_emgy_steer_actv
  {
    cdr << ros_message->asy_aut_emgy_steer_actv;
  }

  // Field name: asy_d2d_etc_distan_msg
  {
    cdr << ros_message->asy_d2d_etc_distan_msg;
  }

  // Field name: asy_d2d_remind_msg
  {
    cdr << ros_message->asy_d2d_remind_msg;
  }

  // Field name: disp_tsi_info_for_lgt_ctrl
  {
    cdr << ros_message->disp_tsi_info_for_lgt_ctrl;
  }

  // Field name: disp_spd_set_for_lgt_ctrl
  {
    cdr << ros_message->disp_spd_set_for_lgt_ctrl;
  }

  // Field name: ad_dim_light
  {
    cdr << ros_message->ad_dim_light;
  }

  // Field name: asy_d2d_crs_dim_indcr
  {
    cdr << ros_message->asy_d2d_crs_dim_indcr;
  }

  // Field name: asy_aut_drv_ctrl_typ_dim_req
  {
    cdr << ros_message->asy_aut_drv_ctrl_typ_dim_req;
  }

  // Field name: ihu_set_disp_ad
  {
    cdr << ros_message->ihu_set_disp_ad;
  }

  // Field name: aut_lane_chg_sts
  {
    cdr << ros_message->aut_lane_chg_sts;
  }

  // Field name: ad_ctrl_mode
  {
    cdr << ros_message->ad_ctrl_mode;
  }

  // Field name: hmi_drvr_sod_req_chg
  {
    cdr << ros_message->hmi_drvr_sod_req_chg;
  }

  // Field name: cam_status0
  {
    cdr << ros_message->cam_status0;
  }

  // Field name: frnt_side_cam_le_sts0
  {
    cdr << ros_message->frnt_side_cam_le_sts0;
  }

  // Field name: frnt_side_cam_ri_sts0
  {
    cdr << ros_message->frnt_side_cam_ri_sts0;
  }

  // Field name: re_side_cam_le_sts0
  {
    cdr << ros_message->re_side_cam_le_sts0;
  }

  // Field name: re_side_cam_ri_sts0
  {
    cdr << ros_message->re_side_cam_ri_sts0;
  }

  // Field name: hmi_re_cam_sts0
  {
    cdr << ros_message->hmi_re_cam_sts0;
  }

  // Field name: asy_algt_sts
  {
    cdr << ros_message->asy_algt_sts;
  }

  // Field name: hmi_auto_lane_chg_style
  {
    cdr << ros_message->hmi_auto_lane_chg_style;
  }

  // Field name: trfc_jam_warn
  {
    cdr << ros_message->trfc_jam_warn;
  }

  return true;
}

static bool _FsmInnerCommomMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FsmInnerCommomMsg__ros_msg_type * ros_message = static_cast<_FsmInnerCommomMsg__ros_msg_type *>(untyped_ros_message);
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

  // Field name: asy_cnoa_crs_lan_chg_msg
  {
    cdr >> ros_message->asy_cnoa_crs_lan_chg_msg;
  }

  // Field name: set_spd_for_crs_ctrl_fct_active
  {
    cdr >> ros_message->set_spd_for_crs_ctrl_fct_active;
  }

  // Field name: asy_lane_chg_assist_sts
  {
    cdr >> ros_message->asy_lane_chg_assist_sts;
  }

  // Field name: indcr_sts
  {
    cdr >> ros_message->indcr_sts;
  }

  // Field name: asy_noa_takeover_sod
  {
    cdr >> ros_message->asy_noa_takeover_sod;
  }

  // Field name: hmi_drvr_sod_req_pilot
  {
    cdr >> ros_message->hmi_drvr_sod_req_pilot;
  }

  // Field name: drvr_crs_ctrl_fct_actv_req
  {
    cdr >> ros_message->drvr_crs_ctrl_fct_actv_req;
  }

  // Field name: asy_algt_indcr
  {
    cdr >> ros_message->asy_algt_indcr;
  }

  // Field name: ti_gap_set_for_lgt_ctrl
  {
    cdr >> ros_message->ti_gap_set_for_lgt_ctrl;
  }

  // Field name: drv_mod_req
  {
    cdr >> ros_message->drv_mod_req;
  }

  // Field name: drv_off_warn
  {
    cdr >> ros_message->drv_off_warn;
  }

  // Field name: asy_alat_indcr
  {
    cdr >> ros_message->asy_alat_indcr;
  }

  // Field name: asy_lgt_ctrl_take_over_req
  {
    cdr >> ros_message->asy_lgt_ctrl_take_over_req;
  }

  // Field name: ovrd_wrn_for_fst_actv
  {
    cdr >> ros_message->ovrd_wrn_for_fst_actv;
  }

  // Field name: asy_inform_for_drvr
  {
    cdr >> ros_message->asy_inform_for_drvr;
  }

  // Field name: cncl_warn_lgt_for_aut_drv
  {
    cdr >> ros_message->cncl_warn_lgt_for_aut_drv;
  }

  // Field name: avl_sts_for_long_aut_drv
  {
    cdr >> ros_message->avl_sts_for_long_aut_drv;
  }

  // Field name: asy_steer_apply_rqrd
  {
    cdr >> ros_message->asy_steer_apply_rqrd;
  }

  // Field name: asy_lan_chg_mesg
  {
    cdr >> ros_message->asy_lan_chg_mesg;
  }

  // Field name: asy_safe_stop_sts
  {
    cdr >> ros_message->asy_safe_stop_sts;
  }

  // Field name: asy_eyes_off_warn_rqrd
  {
    cdr >> ros_message->asy_eyes_off_warn_rqrd;
  }

  // Field name: asy_noa_remind_mesg
  {
    cdr >> ros_message->asy_noa_remind_mesg;
  }

  // Field name: asy_noa_takeover_mesg
  {
    cdr >> ros_message->asy_noa_takeover_mesg;
  }

  // Field name: asy_aut_drvg_avl
  {
    cdr >> ros_message->asy_aut_drvg_avl;
  }

  // Field name: asy_noa_actv_suggest
  {
    cdr >> ros_message->asy_noa_actv_suggest;
  }

  // Field name: cncl_warn_for_aut_drv
  {
    cdr >> ros_message->cncl_warn_for_aut_drv;
  }

  // Field name: asy_lat_deg_sts
  {
    cdr >> ros_message->asy_lat_deg_sts;
  }

  // Field name: asy_icc_max_warn_msg
  {
    cdr >> ros_message->asy_icc_max_warn_msg;
  }

  // Field name: asy_cnoa_takeover_warn_msg
  {
    cdr >> ros_message->asy_cnoa_takeover_warn_msg;
  }

  // Field name: asy_cnoa_crs_cross_intsec_msg
  {
    cdr >> ros_message->asy_cnoa_crs_cross_intsec_msg;
  }

  // Field name: asy_d2d_avl_rmn
  {
    cdr >> ros_message->asy_d2d_avl_rmn;
  }

  // Field name: asy_d2d_distan_msg
  {
    cdr >> ros_message->asy_d2d_distan_msg;
  }

  // Field name: asy_d2d_strt_to_end
  {
    cdr >> ros_message->asy_d2d_strt_to_end;
  }

  // Field name: asy_d2d_deactvd_reasn_mesg
  {
    cdr >> ros_message->asy_d2d_deactvd_reasn_mesg;
  }

  // Field name: asy_aut_emgy_steer_actv
  {
    cdr >> ros_message->asy_aut_emgy_steer_actv;
  }

  // Field name: asy_d2d_etc_distan_msg
  {
    cdr >> ros_message->asy_d2d_etc_distan_msg;
  }

  // Field name: asy_d2d_remind_msg
  {
    cdr >> ros_message->asy_d2d_remind_msg;
  }

  // Field name: disp_tsi_info_for_lgt_ctrl
  {
    cdr >> ros_message->disp_tsi_info_for_lgt_ctrl;
  }

  // Field name: disp_spd_set_for_lgt_ctrl
  {
    cdr >> ros_message->disp_spd_set_for_lgt_ctrl;
  }

  // Field name: ad_dim_light
  {
    cdr >> ros_message->ad_dim_light;
  }

  // Field name: asy_d2d_crs_dim_indcr
  {
    cdr >> ros_message->asy_d2d_crs_dim_indcr;
  }

  // Field name: asy_aut_drv_ctrl_typ_dim_req
  {
    cdr >> ros_message->asy_aut_drv_ctrl_typ_dim_req;
  }

  // Field name: ihu_set_disp_ad
  {
    cdr >> ros_message->ihu_set_disp_ad;
  }

  // Field name: aut_lane_chg_sts
  {
    cdr >> ros_message->aut_lane_chg_sts;
  }

  // Field name: ad_ctrl_mode
  {
    cdr >> ros_message->ad_ctrl_mode;
  }

  // Field name: hmi_drvr_sod_req_chg
  {
    cdr >> ros_message->hmi_drvr_sod_req_chg;
  }

  // Field name: cam_status0
  {
    cdr >> ros_message->cam_status0;
  }

  // Field name: frnt_side_cam_le_sts0
  {
    cdr >> ros_message->frnt_side_cam_le_sts0;
  }

  // Field name: frnt_side_cam_ri_sts0
  {
    cdr >> ros_message->frnt_side_cam_ri_sts0;
  }

  // Field name: re_side_cam_le_sts0
  {
    cdr >> ros_message->re_side_cam_le_sts0;
  }

  // Field name: re_side_cam_ri_sts0
  {
    cdr >> ros_message->re_side_cam_ri_sts0;
  }

  // Field name: hmi_re_cam_sts0
  {
    cdr >> ros_message->hmi_re_cam_sts0;
  }

  // Field name: asy_algt_sts
  {
    cdr >> ros_message->asy_algt_sts;
  }

  // Field name: hmi_auto_lane_chg_style
  {
    cdr >> ros_message->hmi_auto_lane_chg_style;
  }

  // Field name: trfc_jam_warn
  {
    cdr >> ros_message->trfc_jam_warn;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t get_serialized_size_deva_function_msgs__msg__FsmInnerCommomMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FsmInnerCommomMsg__ros_msg_type * ros_message = static_cast<const _FsmInnerCommomMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name asy_cnoa_crs_lan_chg_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_lan_chg_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_spd_for_crs_ctrl_fct_active
  {
    size_t item_size = sizeof(ros_message->set_spd_for_crs_ctrl_fct_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_lane_chg_assist_sts
  {
    size_t item_size = sizeof(ros_message->asy_lane_chg_assist_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name indcr_sts
  {
    size_t item_size = sizeof(ros_message->indcr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_takeover_sod
  {
    size_t item_size = sizeof(ros_message->asy_noa_takeover_sod);
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
  // field.name asy_algt_indcr
  {
    size_t item_size = sizeof(ros_message->asy_algt_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ti_gap_set_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message->ti_gap_set_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drv_mod_req
  {
    size_t item_size = sizeof(ros_message->drv_mod_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drv_off_warn
  {
    size_t item_size = sizeof(ros_message->drv_off_warn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_alat_indcr
  {
    size_t item_size = sizeof(ros_message->asy_alat_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_lgt_ctrl_take_over_req
  {
    size_t item_size = sizeof(ros_message->asy_lgt_ctrl_take_over_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ovrd_wrn_for_fst_actv
  {
    size_t item_size = sizeof(ros_message->ovrd_wrn_for_fst_actv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_inform_for_drvr
  {
    size_t item_size = sizeof(ros_message->asy_inform_for_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cncl_warn_lgt_for_aut_drv
  {
    size_t item_size = sizeof(ros_message->cncl_warn_lgt_for_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avl_sts_for_long_aut_drv
  {
    size_t item_size = sizeof(ros_message->avl_sts_for_long_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_steer_apply_rqrd
  {
    size_t item_size = sizeof(ros_message->asy_steer_apply_rqrd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_lan_chg_mesg
  {
    size_t item_size = sizeof(ros_message->asy_lan_chg_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_safe_stop_sts
  {
    size_t item_size = sizeof(ros_message->asy_safe_stop_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_eyes_off_warn_rqrd
  {
    size_t item_size = sizeof(ros_message->asy_eyes_off_warn_rqrd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_remind_mesg
  {
    size_t item_size = sizeof(ros_message->asy_noa_remind_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_takeover_mesg
  {
    size_t item_size = sizeof(ros_message->asy_noa_takeover_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_aut_drvg_avl
  {
    size_t item_size = sizeof(ros_message->asy_aut_drvg_avl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_actv_suggest
  {
    size_t item_size = sizeof(ros_message->asy_noa_actv_suggest);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cncl_warn_for_aut_drv
  {
    size_t item_size = sizeof(ros_message->cncl_warn_for_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_lat_deg_sts
  {
    size_t item_size = sizeof(ros_message->asy_lat_deg_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_icc_max_warn_msg
  {
    size_t item_size = sizeof(ros_message->asy_icc_max_warn_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_takeover_warn_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_takeover_warn_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_cross_intsec_msg
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_cross_intsec_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_avl_rmn
  {
    size_t item_size = sizeof(ros_message->asy_d2d_avl_rmn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_distan_msg
  {
    size_t item_size = sizeof(ros_message->asy_d2d_distan_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_strt_to_end
  {
    size_t item_size = sizeof(ros_message->asy_d2d_strt_to_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_deactvd_reasn_mesg
  {
    size_t item_size = sizeof(ros_message->asy_d2d_deactvd_reasn_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_aut_emgy_steer_actv
  {
    size_t item_size = sizeof(ros_message->asy_aut_emgy_steer_actv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_etc_distan_msg
  {
    size_t item_size = sizeof(ros_message->asy_d2d_etc_distan_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_remind_msg
  {
    size_t item_size = sizeof(ros_message->asy_d2d_remind_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disp_tsi_info_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message->disp_tsi_info_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disp_spd_set_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message->disp_spd_set_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad_dim_light
  {
    size_t item_size = sizeof(ros_message->ad_dim_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_crs_dim_indcr
  {
    size_t item_size = sizeof(ros_message->asy_d2d_crs_dim_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_aut_drv_ctrl_typ_dim_req
  {
    size_t item_size = sizeof(ros_message->asy_aut_drv_ctrl_typ_dim_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ihu_set_disp_ad
  {
    size_t item_size = sizeof(ros_message->ihu_set_disp_ad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_lane_chg_sts
  {
    size_t item_size = sizeof(ros_message->aut_lane_chg_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad_ctrl_mode
  {
    size_t item_size = sizeof(ros_message->ad_ctrl_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_drvr_sod_req_chg
  {
    size_t item_size = sizeof(ros_message->hmi_drvr_sod_req_chg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_status0
  {
    size_t item_size = sizeof(ros_message->cam_status0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frnt_side_cam_le_sts0
  {
    size_t item_size = sizeof(ros_message->frnt_side_cam_le_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frnt_side_cam_ri_sts0
  {
    size_t item_size = sizeof(ros_message->frnt_side_cam_ri_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name re_side_cam_le_sts0
  {
    size_t item_size = sizeof(ros_message->re_side_cam_le_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name re_side_cam_ri_sts0
  {
    size_t item_size = sizeof(ros_message->re_side_cam_ri_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_re_cam_sts0
  {
    size_t item_size = sizeof(ros_message->hmi_re_cam_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_algt_sts
  {
    size_t item_size = sizeof(ros_message->asy_algt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_auto_lane_chg_style
  {
    size_t item_size = sizeof(ros_message->hmi_auto_lane_chg_style);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trfc_jam_warn
  {
    size_t item_size = sizeof(ros_message->trfc_jam_warn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FsmInnerCommomMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_function_msgs__msg__FsmInnerCommomMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t max_serialized_size_deva_function_msgs__msg__FsmInnerCommomMsg(
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
  // member: asy_cnoa_crs_lan_chg_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_spd_for_crs_ctrl_fct_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: asy_lane_chg_assist_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: indcr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: asy_noa_takeover_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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
  // member: asy_algt_indcr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ti_gap_set_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drv_mod_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drv_off_warn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_alat_indcr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_lgt_ctrl_take_over_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ovrd_wrn_for_fst_actv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_inform_for_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cncl_warn_lgt_for_aut_drv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: avl_sts_for_long_aut_drv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_steer_apply_rqrd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_lan_chg_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_safe_stop_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: asy_eyes_off_warn_rqrd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_remind_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_takeover_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_aut_drvg_avl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_actv_suggest
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cncl_warn_for_aut_drv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_lat_deg_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_icc_max_warn_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_takeover_warn_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_cross_intsec_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_avl_rmn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_distan_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_strt_to_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_deactvd_reasn_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_aut_emgy_steer_actv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_etc_distan_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_remind_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disp_tsi_info_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disp_spd_set_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ad_dim_light
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_crs_dim_indcr
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
  // member: ihu_set_disp_ad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_lane_chg_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad_ctrl_mode
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
  // member: cam_status0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: frnt_side_cam_le_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: frnt_side_cam_ri_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: re_side_cam_le_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: re_side_cam_ri_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_re_cam_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_algt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_auto_lane_chg_style
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trfc_jam_warn
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
    using DataType = deva_function_msgs__msg__FsmInnerCommomMsg;
    is_plain =
      (
      offsetof(DataType, trfc_jam_warn) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FsmInnerCommomMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_function_msgs__msg__FsmInnerCommomMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FsmInnerCommomMsg = {
  "deva_function_msgs::msg",
  "FsmInnerCommomMsg",
  _FsmInnerCommomMsg__cdr_serialize,
  _FsmInnerCommomMsg__cdr_deserialize,
  _FsmInnerCommomMsg__get_serialized_size,
  _FsmInnerCommomMsg__max_serialized_size
};

static rosidl_message_type_support_t _FsmInnerCommomMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FsmInnerCommomMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, FsmInnerCommomMsg)() {
  return &_FsmInnerCommomMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
