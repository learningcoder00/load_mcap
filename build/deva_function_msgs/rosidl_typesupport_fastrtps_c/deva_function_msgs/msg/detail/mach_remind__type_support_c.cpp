// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_function_msgs:msg/MachRemind.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/mach_remind__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_function_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_function_msgs/msg/detail/mach_remind__struct.h"
#include "deva_function_msgs/msg/detail/mach_remind__functions.h"
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


using _MachRemind__ros_msg_type = deva_function_msgs__msg__MachRemind;

static bool _MachRemind__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MachRemind__ros_msg_type * ros_message = static_cast<const _MachRemind__ros_msg_type *>(untyped_ros_message);
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

  // Field name: asy_cnoa_crs_actv_faild_voice
  {
    cdr << ros_message->asy_cnoa_crs_actv_faild_voice;
  }

  // Field name: asy_cnoa_crs_cross_intsec_voice
  {
    cdr << ros_message->asy_cnoa_crs_cross_intsec_voice;
  }

  // Field name: asy_cnoa_crs_actv_voice
  {
    cdr << ros_message->asy_cnoa_crs_actv_voice;
  }

  // Field name: asy_cnoa_crs_deactvd_voice
  {
    cdr << ros_message->asy_cnoa_crs_deactvd_voice;
  }

  // Field name: asy_cnoa_crs_finshd_voice
  {
    cdr << ros_message->asy_cnoa_crs_finshd_voice;
  }

  // Field name: asy_cnoa_crs_offs_voice
  {
    cdr << ros_message->asy_cnoa_crs_offs_voice;
  }

  // Field name: asy_cnoa_crs_rmn_voice
  {
    cdr << ros_message->asy_cnoa_crs_rmn_voice;
  }

  // Field name: asy_cnoa_hands_off_voice
  {
    cdr << ros_message->asy_cnoa_hands_off_voice;
  }

  // Field name: asy_cnoa_lrng_abort_voice
  {
    cdr << ros_message->asy_cnoa_lrng_abort_voice;
  }

  // Field name: asy_noa_avl_rmn_sound
  {
    cdr << ros_message->asy_noa_avl_rmn_sound;
  }

  // Field name: asy_cnoa_takeover_warn_voice
  {
    cdr << ros_message->asy_cnoa_takeover_warn_voice;
  }

  // Field name: asy_dece_remind_sound
  {
    cdr << ros_message->asy_dece_remind_sound;
  }

  // Field name: asy_drvr_sod_cfirm_cnoa_main_page
  {
    cdr << ros_message->asy_drvr_sod_cfirm_cnoa_main_page;
  }

  // Field name: asy_undertak_rmind_sound
  {
    cdr << ros_message->asy_undertak_rmind_sound;
  }

  // Field name: asy_warn_sod_for_aut_drv
  {
    cdr << ros_message->asy_warn_sod_for_aut_drv;
  }

  // Field name: avl_sts_for_long_aut_drv
  {
    cdr << ros_message->avl_sts_for_long_aut_drv;
  }

  // Field name: too_many_cars
  {
    cdr << ros_message->too_many_cars;
  }

  // Field name: drv_off_warn
  {
    cdr << ros_message->drv_off_warn;
  }

  // Field name: ad4_horn_warn
  {
    cdr << ros_message->ad4_horn_warn;
  }

  // Field name: hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  {
    cdr << ros_message->hmi_auto_lane_chg_sts_for_asy_ai_asist_audio;
  }

  // Field name: drv_off_mod
  {
    cdr << ros_message->drv_off_mod;
  }

  // Field name: asy_horn_warn_rqrd
  {
    cdr << ros_message->asy_horn_warn_rqrd;
  }

  // Field name: asy_cnoa_crs_avl_prompt
  {
    cdr << ros_message->asy_cnoa_crs_avl_prompt;
  }

  // Field name: asy_crs_sts_swil_indcr
  {
    cdr << ros_message->asy_crs_sts_swil_indcr;
  }

  // Field name: asy_d2d_avl_rmn_sod
  {
    cdr << ros_message->asy_d2d_avl_rmn_sod;
  }

  // Field name: asy_d2d_deactvd_reasn_sod
  {
    cdr << ros_message->asy_d2d_deactvd_reasn_sod;
  }

  // Field name: asy_d2d_etc_distan_sod
  {
    cdr << ros_message->asy_d2d_etc_distan_sod;
  }

  // Field name: asy_d2d_distan_sod
  {
    cdr << ros_message->asy_d2d_distan_sod;
  }

  // Field name: asy_d2d_strt_to_end_sod
  {
    cdr << ros_message->asy_d2d_strt_to_end_sod;
  }

  // Field name: asy_d2d_remind_sod
  {
    cdr << ros_message->asy_d2d_remind_sod;
  }

  // Field name: asy_lane_chg_fail_type
  {
    cdr << ros_message->asy_lane_chg_fail_type;
  }

  // Field name: asy_req_lane_chg
  {
    cdr << ros_message->asy_req_lane_chg;
  }

  // Field name: asy_noa_deactvd_reasn_sod
  {
    cdr << ros_message->asy_noa_deactvd_reasn_sod;
  }

  // Field name: asy_noa_remind_sod
  {
    cdr << ros_message->asy_noa_remind_sod;
  }

  // Field name: ad4_drvr_belt_warn
  {
    cdr << ros_message->ad4_drvr_belt_warn;
  }

  // Field name: asy_noa_takeover_sod
  {
    cdr << ros_message->asy_noa_takeover_sod;
  }

  // Field name: ad4_drvr_belt_warn_for_bkp
  {
    cdr << ros_message->ad4_drvr_belt_warn_for_bkp;
  }

  // Field name: asy_lan_chg_sod_sec
  {
    cdr << ros_message->asy_lan_chg_sod_sec;
  }

  // Field name: ad4_camera_heating_req
  {
    cdr << ros_message->ad4_camera_heating_req;
  }

  // Field name: ad_takeover_req_group_ad_takeover_msg
  {
    cdr << ros_message->ad_takeover_req_group_ad_takeover_msg;
  }

  // Field name: ad_takeover_req_group_ad_takeover_audio
  {
    cdr << ros_message->ad_takeover_req_group_ad_takeover_audio;
  }

  // Field name: ad_wipr_ctrl_req
  {
    cdr << ros_message->ad_wipr_ctrl_req;
  }

  // Field name: asy_noa_blt_fastn
  {
    cdr << ros_message->asy_noa_blt_fastn;
  }

  // Field name: turn_indic_req_by_alca
  {
    cdr << ros_message->turn_indic_req_by_alca;
  }

  // Field name: asy_lane_chg_assist_sts
  {
    cdr << ros_message->asy_lane_chg_assist_sts;
  }

  // Field name: ad4_camera_heating_req_zcu
  {
    cdr << ros_message->ad4_camera_heating_req_zcu;
  }

  // Field name: asy_fct_lrng_mesg
  {
    cdr << ros_message->asy_fct_lrng_mesg;
  }

  // Field name: trfc_jam_warn
  {
    cdr << ros_message->trfc_jam_warn;
  }

  return true;
}

static bool _MachRemind__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MachRemind__ros_msg_type * ros_message = static_cast<_MachRemind__ros_msg_type *>(untyped_ros_message);
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

  // Field name: asy_cnoa_crs_actv_faild_voice
  {
    cdr >> ros_message->asy_cnoa_crs_actv_faild_voice;
  }

  // Field name: asy_cnoa_crs_cross_intsec_voice
  {
    cdr >> ros_message->asy_cnoa_crs_cross_intsec_voice;
  }

  // Field name: asy_cnoa_crs_actv_voice
  {
    cdr >> ros_message->asy_cnoa_crs_actv_voice;
  }

  // Field name: asy_cnoa_crs_deactvd_voice
  {
    cdr >> ros_message->asy_cnoa_crs_deactvd_voice;
  }

  // Field name: asy_cnoa_crs_finshd_voice
  {
    cdr >> ros_message->asy_cnoa_crs_finshd_voice;
  }

  // Field name: asy_cnoa_crs_offs_voice
  {
    cdr >> ros_message->asy_cnoa_crs_offs_voice;
  }

  // Field name: asy_cnoa_crs_rmn_voice
  {
    cdr >> ros_message->asy_cnoa_crs_rmn_voice;
  }

  // Field name: asy_cnoa_hands_off_voice
  {
    cdr >> ros_message->asy_cnoa_hands_off_voice;
  }

  // Field name: asy_cnoa_lrng_abort_voice
  {
    cdr >> ros_message->asy_cnoa_lrng_abort_voice;
  }

  // Field name: asy_noa_avl_rmn_sound
  {
    cdr >> ros_message->asy_noa_avl_rmn_sound;
  }

  // Field name: asy_cnoa_takeover_warn_voice
  {
    cdr >> ros_message->asy_cnoa_takeover_warn_voice;
  }

  // Field name: asy_dece_remind_sound
  {
    cdr >> ros_message->asy_dece_remind_sound;
  }

  // Field name: asy_drvr_sod_cfirm_cnoa_main_page
  {
    cdr >> ros_message->asy_drvr_sod_cfirm_cnoa_main_page;
  }

  // Field name: asy_undertak_rmind_sound
  {
    cdr >> ros_message->asy_undertak_rmind_sound;
  }

  // Field name: asy_warn_sod_for_aut_drv
  {
    cdr >> ros_message->asy_warn_sod_for_aut_drv;
  }

  // Field name: avl_sts_for_long_aut_drv
  {
    cdr >> ros_message->avl_sts_for_long_aut_drv;
  }

  // Field name: too_many_cars
  {
    cdr >> ros_message->too_many_cars;
  }

  // Field name: drv_off_warn
  {
    cdr >> ros_message->drv_off_warn;
  }

  // Field name: ad4_horn_warn
  {
    cdr >> ros_message->ad4_horn_warn;
  }

  // Field name: hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  {
    cdr >> ros_message->hmi_auto_lane_chg_sts_for_asy_ai_asist_audio;
  }

  // Field name: drv_off_mod
  {
    cdr >> ros_message->drv_off_mod;
  }

  // Field name: asy_horn_warn_rqrd
  {
    cdr >> ros_message->asy_horn_warn_rqrd;
  }

  // Field name: asy_cnoa_crs_avl_prompt
  {
    cdr >> ros_message->asy_cnoa_crs_avl_prompt;
  }

  // Field name: asy_crs_sts_swil_indcr
  {
    cdr >> ros_message->asy_crs_sts_swil_indcr;
  }

  // Field name: asy_d2d_avl_rmn_sod
  {
    cdr >> ros_message->asy_d2d_avl_rmn_sod;
  }

  // Field name: asy_d2d_deactvd_reasn_sod
  {
    cdr >> ros_message->asy_d2d_deactvd_reasn_sod;
  }

  // Field name: asy_d2d_etc_distan_sod
  {
    cdr >> ros_message->asy_d2d_etc_distan_sod;
  }

  // Field name: asy_d2d_distan_sod
  {
    cdr >> ros_message->asy_d2d_distan_sod;
  }

  // Field name: asy_d2d_strt_to_end_sod
  {
    cdr >> ros_message->asy_d2d_strt_to_end_sod;
  }

  // Field name: asy_d2d_remind_sod
  {
    cdr >> ros_message->asy_d2d_remind_sod;
  }

  // Field name: asy_lane_chg_fail_type
  {
    cdr >> ros_message->asy_lane_chg_fail_type;
  }

  // Field name: asy_req_lane_chg
  {
    cdr >> ros_message->asy_req_lane_chg;
  }

  // Field name: asy_noa_deactvd_reasn_sod
  {
    cdr >> ros_message->asy_noa_deactvd_reasn_sod;
  }

  // Field name: asy_noa_remind_sod
  {
    cdr >> ros_message->asy_noa_remind_sod;
  }

  // Field name: ad4_drvr_belt_warn
  {
    cdr >> ros_message->ad4_drvr_belt_warn;
  }

  // Field name: asy_noa_takeover_sod
  {
    cdr >> ros_message->asy_noa_takeover_sod;
  }

  // Field name: ad4_drvr_belt_warn_for_bkp
  {
    cdr >> ros_message->ad4_drvr_belt_warn_for_bkp;
  }

  // Field name: asy_lan_chg_sod_sec
  {
    cdr >> ros_message->asy_lan_chg_sod_sec;
  }

  // Field name: ad4_camera_heating_req
  {
    cdr >> ros_message->ad4_camera_heating_req;
  }

  // Field name: ad_takeover_req_group_ad_takeover_msg
  {
    cdr >> ros_message->ad_takeover_req_group_ad_takeover_msg;
  }

  // Field name: ad_takeover_req_group_ad_takeover_audio
  {
    cdr >> ros_message->ad_takeover_req_group_ad_takeover_audio;
  }

  // Field name: ad_wipr_ctrl_req
  {
    cdr >> ros_message->ad_wipr_ctrl_req;
  }

  // Field name: asy_noa_blt_fastn
  {
    cdr >> ros_message->asy_noa_blt_fastn;
  }

  // Field name: turn_indic_req_by_alca
  {
    cdr >> ros_message->turn_indic_req_by_alca;
  }

  // Field name: asy_lane_chg_assist_sts
  {
    cdr >> ros_message->asy_lane_chg_assist_sts;
  }

  // Field name: ad4_camera_heating_req_zcu
  {
    cdr >> ros_message->ad4_camera_heating_req_zcu;
  }

  // Field name: asy_fct_lrng_mesg
  {
    cdr >> ros_message->asy_fct_lrng_mesg;
  }

  // Field name: trfc_jam_warn
  {
    cdr >> ros_message->trfc_jam_warn;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t get_serialized_size_deva_function_msgs__msg__MachRemind(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MachRemind__ros_msg_type * ros_message = static_cast<const _MachRemind__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name asy_cnoa_crs_actv_faild_voice
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_actv_faild_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_cross_intsec_voice
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_cross_intsec_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_actv_voice
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_actv_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_deactvd_voice
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_deactvd_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_finshd_voice
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_finshd_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_offs_voice
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_offs_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_rmn_voice
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_rmn_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_hands_off_voice
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_hands_off_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_lrng_abort_voice
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_lrng_abort_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_avl_rmn_sound
  {
    size_t item_size = sizeof(ros_message->asy_noa_avl_rmn_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_takeover_warn_voice
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_takeover_warn_voice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_dece_remind_sound
  {
    size_t item_size = sizeof(ros_message->asy_dece_remind_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_drvr_sod_cfirm_cnoa_main_page
  {
    size_t item_size = sizeof(ros_message->asy_drvr_sod_cfirm_cnoa_main_page);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_undertak_rmind_sound
  {
    size_t item_size = sizeof(ros_message->asy_undertak_rmind_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_warn_sod_for_aut_drv
  {
    size_t item_size = sizeof(ros_message->asy_warn_sod_for_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avl_sts_for_long_aut_drv
  {
    size_t item_size = sizeof(ros_message->avl_sts_for_long_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name too_many_cars
  {
    size_t item_size = sizeof(ros_message->too_many_cars);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drv_off_warn
  {
    size_t item_size = sizeof(ros_message->drv_off_warn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_horn_warn
  {
    size_t item_size = sizeof(ros_message->ad4_horn_warn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  {
    size_t item_size = sizeof(ros_message->hmi_auto_lane_chg_sts_for_asy_ai_asist_audio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drv_off_mod
  {
    size_t item_size = sizeof(ros_message->drv_off_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_horn_warn_rqrd
  {
    size_t item_size = sizeof(ros_message->asy_horn_warn_rqrd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_avl_prompt
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_avl_prompt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_crs_sts_swil_indcr
  {
    size_t item_size = sizeof(ros_message->asy_crs_sts_swil_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_avl_rmn_sod
  {
    size_t item_size = sizeof(ros_message->asy_d2d_avl_rmn_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_deactvd_reasn_sod
  {
    size_t item_size = sizeof(ros_message->asy_d2d_deactvd_reasn_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_etc_distan_sod
  {
    size_t item_size = sizeof(ros_message->asy_d2d_etc_distan_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_distan_sod
  {
    size_t item_size = sizeof(ros_message->asy_d2d_distan_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_strt_to_end_sod
  {
    size_t item_size = sizeof(ros_message->asy_d2d_strt_to_end_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_d2d_remind_sod
  {
    size_t item_size = sizeof(ros_message->asy_d2d_remind_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_lane_chg_fail_type
  {
    size_t item_size = sizeof(ros_message->asy_lane_chg_fail_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_req_lane_chg
  {
    size_t item_size = sizeof(ros_message->asy_req_lane_chg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_deactvd_reasn_sod
  {
    size_t item_size = sizeof(ros_message->asy_noa_deactvd_reasn_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_remind_sod
  {
    size_t item_size = sizeof(ros_message->asy_noa_remind_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_drvr_belt_warn
  {
    size_t item_size = sizeof(ros_message->ad4_drvr_belt_warn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_takeover_sod
  {
    size_t item_size = sizeof(ros_message->asy_noa_takeover_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_drvr_belt_warn_for_bkp
  {
    size_t item_size = sizeof(ros_message->ad4_drvr_belt_warn_for_bkp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_lan_chg_sod_sec
  {
    size_t item_size = sizeof(ros_message->asy_lan_chg_sod_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_camera_heating_req
  {
    size_t item_size = sizeof(ros_message->ad4_camera_heating_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad_takeover_req_group_ad_takeover_msg
  {
    size_t item_size = sizeof(ros_message->ad_takeover_req_group_ad_takeover_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad_takeover_req_group_ad_takeover_audio
  {
    size_t item_size = sizeof(ros_message->ad_takeover_req_group_ad_takeover_audio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad_wipr_ctrl_req
  {
    size_t item_size = sizeof(ros_message->ad_wipr_ctrl_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_blt_fastn
  {
    size_t item_size = sizeof(ros_message->asy_noa_blt_fastn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_indic_req_by_alca
  {
    size_t item_size = sizeof(ros_message->turn_indic_req_by_alca);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_lane_chg_assist_sts
  {
    size_t item_size = sizeof(ros_message->asy_lane_chg_assist_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad4_camera_heating_req_zcu
  {
    size_t item_size = sizeof(ros_message->ad4_camera_heating_req_zcu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_fct_lrng_mesg
  {
    size_t item_size = sizeof(ros_message->asy_fct_lrng_mesg);
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

static uint32_t _MachRemind__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_function_msgs__msg__MachRemind(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t max_serialized_size_deva_function_msgs__msg__MachRemind(
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
  // member: asy_cnoa_crs_actv_faild_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_cross_intsec_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_actv_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_deactvd_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_finshd_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_offs_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_rmn_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_hands_off_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_lrng_abort_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_avl_rmn_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_takeover_warn_voice
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_dece_remind_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_drvr_sod_cfirm_cnoa_main_page
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_undertak_rmind_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_warn_sod_for_aut_drv
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
  // member: too_many_cars
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
  // member: ad4_horn_warn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drv_off_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_horn_warn_rqrd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_avl_prompt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_crs_sts_swil_indcr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_avl_rmn_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_deactvd_reasn_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_etc_distan_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_distan_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_strt_to_end_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_d2d_remind_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_lane_chg_fail_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_req_lane_chg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_deactvd_reasn_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_remind_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad4_drvr_belt_warn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_takeover_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad4_drvr_belt_warn_for_bkp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_lan_chg_sod_sec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad4_camera_heating_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad_takeover_req_group_ad_takeover_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad_takeover_req_group_ad_takeover_audio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad_wipr_ctrl_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_blt_fastn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_indic_req_by_alca
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_lane_chg_assist_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad4_camera_heating_req_zcu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_fct_lrng_mesg
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
    using DataType = deva_function_msgs__msg__MachRemind;
    is_plain =
      (
      offsetof(DataType, trfc_jam_warn) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MachRemind__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_function_msgs__msg__MachRemind(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MachRemind = {
  "deva_function_msgs::msg",
  "MachRemind",
  _MachRemind__cdr_serialize,
  _MachRemind__cdr_deserialize,
  _MachRemind__get_serialized_size,
  _MachRemind__max_serialized_size
};

static rosidl_message_type_support_t _MachRemind__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MachRemind,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, MachRemind)() {
  return &_MachRemind__type_support;
}

#if defined(__cplusplus)
}
#endif
