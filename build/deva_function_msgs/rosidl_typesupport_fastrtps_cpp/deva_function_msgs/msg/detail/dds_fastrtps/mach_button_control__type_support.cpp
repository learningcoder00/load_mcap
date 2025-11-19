// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/MachButtonControl.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/mach_button_control__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/mach_button_control__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_serialize(
  const deva_function_msgs::msg::MachButtonControl & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: asy_a_lgt_sts_asy_a_lgt_sts
  cdr << ros_message.asy_a_lgt_sts_asy_a_lgt_sts;
  // Member: asy_cnoa_crs_lat_offs_anima_sts
  cdr << ros_message.asy_cnoa_crs_lat_offs_anima_sts;
  // Member: drv_off_req_for_lgt_ctrl
  cdr << ros_message.drv_off_req_for_lgt_ctrl;
  // Member: asy_eyes_off_warn_rqrd
  cdr << ros_message.asy_eyes_off_warn_rqrd;
  // Member: asy_eyes_off_warn_rqrd_sound
  cdr << ros_message.asy_eyes_off_warn_rqrd_sound;
  // Member: asy_first_ti_actvn
  cdr << ros_message.asy_first_ti_actvn;
  // Member: asy_noa_actv_suggest_sound
  cdr << ros_message.asy_noa_actv_suggest_sound;
  // Member: asy_inform_for_drvr
  cdr << ros_message.asy_inform_for_drvr;
  // Member: asy_lat_deg_sts
  cdr << ros_message.asy_lat_deg_sts;
  // Member: asy_inform_for_drvr_sound
  cdr << ros_message.asy_inform_for_drvr_sound;
  // Member: asy_noa_actv_suggest
  cdr << ros_message.asy_noa_actv_suggest;
  // Member: asy_noa_distan_msg
  cdr << ros_message.asy_noa_distan_msg;
  // Member: asy_noa_distan_msg_sound
  cdr << ros_message.asy_noa_distan_msg_sound;
  // Member: asy_noa_sts
  cdr << ros_message.asy_noa_sts;
  // Member: asy_steer_apply_rqrd_sound
  cdr << ros_message.asy_steer_apply_rqrd_sound;
  // Member: asy_aut_drvg_avl_sound
  cdr << ros_message.asy_aut_drvg_avl_sound;
  // Member: asy_lan_chg_color_dsp
  cdr << ros_message.asy_lan_chg_color_dsp;
  // Member: asy_lan_chg_mesg
  cdr << ros_message.asy_lan_chg_mesg;
  // Member: asy_lan_chg_sod
  cdr << ros_message.asy_lan_chg_sod;
  // Member: asy_aut_emgy_steer_actv
  cdr << ros_message.asy_aut_emgy_steer_actv;
  // Member: brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv
  cdr << ros_message.brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv;
  // Member: cllsn_threat
  cdr << ros_message.cllsn_threat;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::MachButtonControl & ros_message)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: asy_a_lgt_sts_asy_a_lgt_sts
  cdr >> ros_message.asy_a_lgt_sts_asy_a_lgt_sts;

  // Member: asy_cnoa_crs_lat_offs_anima_sts
  cdr >> ros_message.asy_cnoa_crs_lat_offs_anima_sts;

  // Member: drv_off_req_for_lgt_ctrl
  cdr >> ros_message.drv_off_req_for_lgt_ctrl;

  // Member: asy_eyes_off_warn_rqrd
  cdr >> ros_message.asy_eyes_off_warn_rqrd;

  // Member: asy_eyes_off_warn_rqrd_sound
  cdr >> ros_message.asy_eyes_off_warn_rqrd_sound;

  // Member: asy_first_ti_actvn
  cdr >> ros_message.asy_first_ti_actvn;

  // Member: asy_noa_actv_suggest_sound
  cdr >> ros_message.asy_noa_actv_suggest_sound;

  // Member: asy_inform_for_drvr
  cdr >> ros_message.asy_inform_for_drvr;

  // Member: asy_lat_deg_sts
  cdr >> ros_message.asy_lat_deg_sts;

  // Member: asy_inform_for_drvr_sound
  cdr >> ros_message.asy_inform_for_drvr_sound;

  // Member: asy_noa_actv_suggest
  cdr >> ros_message.asy_noa_actv_suggest;

  // Member: asy_noa_distan_msg
  cdr >> ros_message.asy_noa_distan_msg;

  // Member: asy_noa_distan_msg_sound
  cdr >> ros_message.asy_noa_distan_msg_sound;

  // Member: asy_noa_sts
  cdr >> ros_message.asy_noa_sts;

  // Member: asy_steer_apply_rqrd_sound
  cdr >> ros_message.asy_steer_apply_rqrd_sound;

  // Member: asy_aut_drvg_avl_sound
  cdr >> ros_message.asy_aut_drvg_avl_sound;

  // Member: asy_lan_chg_color_dsp
  cdr >> ros_message.asy_lan_chg_color_dsp;

  // Member: asy_lan_chg_mesg
  cdr >> ros_message.asy_lan_chg_mesg;

  // Member: asy_lan_chg_sod
  cdr >> ros_message.asy_lan_chg_sod;

  // Member: asy_aut_emgy_steer_actv
  cdr >> ros_message.asy_aut_emgy_steer_actv;

  // Member: brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv
  cdr >> ros_message.brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv;

  // Member: cllsn_threat
  cdr >> ros_message.cllsn_threat;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::MachButtonControl & ros_message,
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
  // Member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    size_t item_size = sizeof(ros_message.asy_a_lgt_sts_asy_a_lgt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_lat_offs_anima_sts
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_lat_offs_anima_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drv_off_req_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message.drv_off_req_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_eyes_off_warn_rqrd
  {
    size_t item_size = sizeof(ros_message.asy_eyes_off_warn_rqrd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_eyes_off_warn_rqrd_sound
  {
    size_t item_size = sizeof(ros_message.asy_eyes_off_warn_rqrd_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_first_ti_actvn
  {
    size_t item_size = sizeof(ros_message.asy_first_ti_actvn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_actv_suggest_sound
  {
    size_t item_size = sizeof(ros_message.asy_noa_actv_suggest_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_inform_for_drvr
  {
    size_t item_size = sizeof(ros_message.asy_inform_for_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lat_deg_sts
  {
    size_t item_size = sizeof(ros_message.asy_lat_deg_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_inform_for_drvr_sound
  {
    size_t item_size = sizeof(ros_message.asy_inform_for_drvr_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_actv_suggest
  {
    size_t item_size = sizeof(ros_message.asy_noa_actv_suggest);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_distan_msg
  {
    size_t item_size = sizeof(ros_message.asy_noa_distan_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_distan_msg_sound
  {
    size_t item_size = sizeof(ros_message.asy_noa_distan_msg_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_sts
  {
    size_t item_size = sizeof(ros_message.asy_noa_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_steer_apply_rqrd_sound
  {
    size_t item_size = sizeof(ros_message.asy_steer_apply_rqrd_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_aut_drvg_avl_sound
  {
    size_t item_size = sizeof(ros_message.asy_aut_drvg_avl_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lan_chg_color_dsp
  {
    size_t item_size = sizeof(ros_message.asy_lan_chg_color_dsp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lan_chg_mesg
  {
    size_t item_size = sizeof(ros_message.asy_lan_chg_mesg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lan_chg_sod
  {
    size_t item_size = sizeof(ros_message.asy_lan_chg_sod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_aut_emgy_steer_actv
  {
    size_t item_size = sizeof(ros_message.asy_aut_emgy_steer_actv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv
  {
    size_t item_size = sizeof(ros_message.brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cllsn_threat
  {
    size_t item_size = sizeof(ros_message.cllsn_threat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
max_serialized_size_MachButtonControl(
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

  // Member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_lat_offs_anima_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drv_off_req_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_eyes_off_warn_rqrd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_eyes_off_warn_rqrd_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_first_ti_actvn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_actv_suggest_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_inform_for_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_lat_deg_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_inform_for_drvr_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_actv_suggest
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_distan_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_distan_msg_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_steer_apply_rqrd_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_aut_drvg_avl_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_lan_chg_color_dsp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_lan_chg_mesg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_lan_chg_sod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_aut_emgy_steer_actv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cllsn_threat
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
    using DataType = deva_function_msgs::msg::MachButtonControl;
    is_plain =
      (
      offsetof(DataType, cllsn_threat) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MachButtonControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::MachButtonControl *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MachButtonControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::MachButtonControl *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MachButtonControl__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::MachButtonControl *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MachButtonControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MachButtonControl(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MachButtonControl__callbacks = {
  "deva_function_msgs::msg",
  "MachButtonControl",
  _MachButtonControl__cdr_serialize,
  _MachButtonControl__cdr_deserialize,
  _MachButtonControl__get_serialized_size,
  _MachButtonControl__max_serialized_size
};

static rosidl_message_type_support_t _MachButtonControl__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MachButtonControl__callbacks,
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
get_message_type_support_handle<deva_function_msgs::msg::MachButtonControl>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_MachButtonControl__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, MachButtonControl)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_MachButtonControl__handle;
}

#ifdef __cplusplus
}
#endif
