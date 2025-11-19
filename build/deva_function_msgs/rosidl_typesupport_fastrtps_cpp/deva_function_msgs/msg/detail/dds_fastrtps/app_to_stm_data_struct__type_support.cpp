// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/APPToStmDataStruct.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__struct.hpp"

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

namespace deva_function_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_serialize(
  const deva_function_msgs::msg::APPToStmDataStruct & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: app_to_hpa_ctrl_cmd
  cdr << ros_message.app_to_hpa_ctrl_cmd;
  // Member: mob_dev_avp_req
  cdr << ros_message.mob_dev_avp_req;
  // Member: on_bd_chrgr_hndl_sts1
  cdr << ros_message.on_bd_chrgr_hndl_sts1;
  // Member: dc_chrgn_hndl_sts
  cdr << ros_message.dc_chrgn_hndl_sts;
  // Member: occupy_mon_sts_drvr_sts
  cdr << ros_message.occupy_mon_sts_drvr_sts;
  // Member: alrm_sts_alrm_failr
  cdr << ros_message.alrm_sts_alrm_failr;
  // Member: alrm_sts_alrm_st
  cdr << ros_message.alrm_sts_alrm_st;
  // Member: alrm_sts_alrm_trg_src
  cdr << ros_message.alrm_sts_alrm_trg_src;
  // Member: alrm_sts_snsr_incln_failr
  cdr << ros_message.alrm_sts_snsr_incln_failr;
  // Member: alrm_sts_snsr_intr_scanr_failr
  cdr << ros_message.alrm_sts_snsr_intr_scanr_failr;
  // Member: telephone_sts
  cdr << ros_message.telephone_sts;
  // Member: tr_lock_sts
  cdr << ros_message.tr_lock_sts;
  // Member: trsm_park_lockd_trsm_park_lockd
  cdr << ros_message.trsm_park_lockd_trsm_park_lockd;
  // Member: twli_bri_raw_qf
  cdr << ros_message.twli_bri_raw_qf;
  // Member: twli_bri_raw_twli_bri_raw
  cdr << ros_message.twli_bri_raw_twli_bri_raw;
  // Member: rev
  {
    cdr << ros_message.rev;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::APPToStmDataStruct & ros_message)
{
  // Member: app_to_hpa_ctrl_cmd
  cdr >> ros_message.app_to_hpa_ctrl_cmd;

  // Member: mob_dev_avp_req
  cdr >> ros_message.mob_dev_avp_req;

  // Member: on_bd_chrgr_hndl_sts1
  cdr >> ros_message.on_bd_chrgr_hndl_sts1;

  // Member: dc_chrgn_hndl_sts
  cdr >> ros_message.dc_chrgn_hndl_sts;

  // Member: occupy_mon_sts_drvr_sts
  cdr >> ros_message.occupy_mon_sts_drvr_sts;

  // Member: alrm_sts_alrm_failr
  cdr >> ros_message.alrm_sts_alrm_failr;

  // Member: alrm_sts_alrm_st
  cdr >> ros_message.alrm_sts_alrm_st;

  // Member: alrm_sts_alrm_trg_src
  cdr >> ros_message.alrm_sts_alrm_trg_src;

  // Member: alrm_sts_snsr_incln_failr
  cdr >> ros_message.alrm_sts_snsr_incln_failr;

  // Member: alrm_sts_snsr_intr_scanr_failr
  cdr >> ros_message.alrm_sts_snsr_intr_scanr_failr;

  // Member: telephone_sts
  cdr >> ros_message.telephone_sts;

  // Member: tr_lock_sts
  cdr >> ros_message.tr_lock_sts;

  // Member: trsm_park_lockd_trsm_park_lockd
  cdr >> ros_message.trsm_park_lockd_trsm_park_lockd;

  // Member: twli_bri_raw_qf
  cdr >> ros_message.twli_bri_raw_qf;

  // Member: twli_bri_raw_twli_bri_raw
  cdr >> ros_message.twli_bri_raw_twli_bri_raw;

  // Member: rev
  {
    cdr >> ros_message.rev;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::APPToStmDataStruct & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: app_to_hpa_ctrl_cmd
  {
    size_t item_size = sizeof(ros_message.app_to_hpa_ctrl_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_avp_req
  {
    size_t item_size = sizeof(ros_message.mob_dev_avp_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: on_bd_chrgr_hndl_sts1
  {
    size_t item_size = sizeof(ros_message.on_bd_chrgr_hndl_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dc_chrgn_hndl_sts
  {
    size_t item_size = sizeof(ros_message.dc_chrgn_hndl_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: occupy_mon_sts_drvr_sts
  {
    size_t item_size = sizeof(ros_message.occupy_mon_sts_drvr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alrm_sts_alrm_failr
  {
    size_t item_size = sizeof(ros_message.alrm_sts_alrm_failr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alrm_sts_alrm_st
  {
    size_t item_size = sizeof(ros_message.alrm_sts_alrm_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alrm_sts_alrm_trg_src
  {
    size_t item_size = sizeof(ros_message.alrm_sts_alrm_trg_src);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alrm_sts_snsr_incln_failr
  {
    size_t item_size = sizeof(ros_message.alrm_sts_snsr_incln_failr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alrm_sts_snsr_intr_scanr_failr
  {
    size_t item_size = sizeof(ros_message.alrm_sts_snsr_intr_scanr_failr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: telephone_sts
  {
    size_t item_size = sizeof(ros_message.telephone_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tr_lock_sts
  {
    size_t item_size = sizeof(ros_message.tr_lock_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trsm_park_lockd_trsm_park_lockd
  {
    size_t item_size = sizeof(ros_message.trsm_park_lockd_trsm_park_lockd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: twli_bri_raw_qf
  {
    size_t item_size = sizeof(ros_message.twli_bri_raw_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: twli_bri_raw_twli_bri_raw
  {
    size_t item_size = sizeof(ros_message.twli_bri_raw_twli_bri_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rev
  {
    size_t array_size = 8;
    size_t item_size = sizeof(ros_message.rev[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
max_serialized_size_APPToStmDataStruct(
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


  // Member: app_to_hpa_ctrl_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_avp_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: on_bd_chrgr_hndl_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dc_chrgn_hndl_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: occupy_mon_sts_drvr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: alrm_sts_alrm_failr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: alrm_sts_alrm_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: alrm_sts_alrm_trg_src
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: alrm_sts_snsr_incln_failr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: alrm_sts_snsr_intr_scanr_failr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: telephone_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tr_lock_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trsm_park_lockd_trsm_park_lockd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: twli_bri_raw_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: twli_bri_raw_twli_bri_raw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: rev
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_function_msgs::msg::APPToStmDataStruct;
    is_plain =
      (
      offsetof(DataType, rev) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _APPToStmDataStruct__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::APPToStmDataStruct *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _APPToStmDataStruct__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::APPToStmDataStruct *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _APPToStmDataStruct__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::APPToStmDataStruct *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _APPToStmDataStruct__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_APPToStmDataStruct(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _APPToStmDataStruct__callbacks = {
  "deva_function_msgs::msg",
  "APPToStmDataStruct",
  _APPToStmDataStruct__cdr_serialize,
  _APPToStmDataStruct__cdr_deserialize,
  _APPToStmDataStruct__get_serialized_size,
  _APPToStmDataStruct__max_serialized_size
};

static rosidl_message_type_support_t _APPToStmDataStruct__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_APPToStmDataStruct__callbacks,
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
get_message_type_support_handle<deva_function_msgs::msg::APPToStmDataStruct>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_APPToStmDataStruct__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, APPToStmDataStruct)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_APPToStmDataStruct__handle;
}

#ifdef __cplusplus
}
#endif
