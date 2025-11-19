// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_function_msgs:msg/APPToStmDataStruct.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_function_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__struct.h"
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__functions.h"
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


// forward declare type support functions


using _APPToStmDataStruct__ros_msg_type = deva_function_msgs__msg__APPToStmDataStruct;

static bool _APPToStmDataStruct__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _APPToStmDataStruct__ros_msg_type * ros_message = static_cast<const _APPToStmDataStruct__ros_msg_type *>(untyped_ros_message);
  // Field name: app_to_hpa_ctrl_cmd
  {
    cdr << ros_message->app_to_hpa_ctrl_cmd;
  }

  // Field name: mob_dev_avp_req
  {
    cdr << ros_message->mob_dev_avp_req;
  }

  // Field name: on_bd_chrgr_hndl_sts1
  {
    cdr << ros_message->on_bd_chrgr_hndl_sts1;
  }

  // Field name: dc_chrgn_hndl_sts
  {
    cdr << ros_message->dc_chrgn_hndl_sts;
  }

  // Field name: occupy_mon_sts_drvr_sts
  {
    cdr << ros_message->occupy_mon_sts_drvr_sts;
  }

  // Field name: alrm_sts_alrm_failr
  {
    cdr << ros_message->alrm_sts_alrm_failr;
  }

  // Field name: alrm_sts_alrm_st
  {
    cdr << ros_message->alrm_sts_alrm_st;
  }

  // Field name: alrm_sts_alrm_trg_src
  {
    cdr << ros_message->alrm_sts_alrm_trg_src;
  }

  // Field name: alrm_sts_snsr_incln_failr
  {
    cdr << ros_message->alrm_sts_snsr_incln_failr;
  }

  // Field name: alrm_sts_snsr_intr_scanr_failr
  {
    cdr << ros_message->alrm_sts_snsr_intr_scanr_failr;
  }

  // Field name: telephone_sts
  {
    cdr << ros_message->telephone_sts;
  }

  // Field name: tr_lock_sts
  {
    cdr << ros_message->tr_lock_sts;
  }

  // Field name: trsm_park_lockd_trsm_park_lockd
  {
    cdr << ros_message->trsm_park_lockd_trsm_park_lockd;
  }

  // Field name: twli_bri_raw_qf
  {
    cdr << ros_message->twli_bri_raw_qf;
  }

  // Field name: twli_bri_raw_twli_bri_raw
  {
    cdr << ros_message->twli_bri_raw_twli_bri_raw;
  }

  // Field name: rev
  {
    size_t size = 8;
    auto array_ptr = ros_message->rev;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _APPToStmDataStruct__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _APPToStmDataStruct__ros_msg_type * ros_message = static_cast<_APPToStmDataStruct__ros_msg_type *>(untyped_ros_message);
  // Field name: app_to_hpa_ctrl_cmd
  {
    cdr >> ros_message->app_to_hpa_ctrl_cmd;
  }

  // Field name: mob_dev_avp_req
  {
    cdr >> ros_message->mob_dev_avp_req;
  }

  // Field name: on_bd_chrgr_hndl_sts1
  {
    cdr >> ros_message->on_bd_chrgr_hndl_sts1;
  }

  // Field name: dc_chrgn_hndl_sts
  {
    cdr >> ros_message->dc_chrgn_hndl_sts;
  }

  // Field name: occupy_mon_sts_drvr_sts
  {
    cdr >> ros_message->occupy_mon_sts_drvr_sts;
  }

  // Field name: alrm_sts_alrm_failr
  {
    cdr >> ros_message->alrm_sts_alrm_failr;
  }

  // Field name: alrm_sts_alrm_st
  {
    cdr >> ros_message->alrm_sts_alrm_st;
  }

  // Field name: alrm_sts_alrm_trg_src
  {
    cdr >> ros_message->alrm_sts_alrm_trg_src;
  }

  // Field name: alrm_sts_snsr_incln_failr
  {
    cdr >> ros_message->alrm_sts_snsr_incln_failr;
  }

  // Field name: alrm_sts_snsr_intr_scanr_failr
  {
    cdr >> ros_message->alrm_sts_snsr_intr_scanr_failr;
  }

  // Field name: telephone_sts
  {
    cdr >> ros_message->telephone_sts;
  }

  // Field name: tr_lock_sts
  {
    cdr >> ros_message->tr_lock_sts;
  }

  // Field name: trsm_park_lockd_trsm_park_lockd
  {
    cdr >> ros_message->trsm_park_lockd_trsm_park_lockd;
  }

  // Field name: twli_bri_raw_qf
  {
    cdr >> ros_message->twli_bri_raw_qf;
  }

  // Field name: twli_bri_raw_twli_bri_raw
  {
    cdr >> ros_message->twli_bri_raw_twli_bri_raw;
  }

  // Field name: rev
  {
    size_t size = 8;
    auto array_ptr = ros_message->rev;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t get_serialized_size_deva_function_msgs__msg__APPToStmDataStruct(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _APPToStmDataStruct__ros_msg_type * ros_message = static_cast<const _APPToStmDataStruct__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name app_to_hpa_ctrl_cmd
  {
    size_t item_size = sizeof(ros_message->app_to_hpa_ctrl_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_avp_req
  {
    size_t item_size = sizeof(ros_message->mob_dev_avp_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name on_bd_chrgr_hndl_sts1
  {
    size_t item_size = sizeof(ros_message->on_bd_chrgr_hndl_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dc_chrgn_hndl_sts
  {
    size_t item_size = sizeof(ros_message->dc_chrgn_hndl_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name occupy_mon_sts_drvr_sts
  {
    size_t item_size = sizeof(ros_message->occupy_mon_sts_drvr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alrm_sts_alrm_failr
  {
    size_t item_size = sizeof(ros_message->alrm_sts_alrm_failr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alrm_sts_alrm_st
  {
    size_t item_size = sizeof(ros_message->alrm_sts_alrm_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alrm_sts_alrm_trg_src
  {
    size_t item_size = sizeof(ros_message->alrm_sts_alrm_trg_src);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alrm_sts_snsr_incln_failr
  {
    size_t item_size = sizeof(ros_message->alrm_sts_snsr_incln_failr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alrm_sts_snsr_intr_scanr_failr
  {
    size_t item_size = sizeof(ros_message->alrm_sts_snsr_intr_scanr_failr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name telephone_sts
  {
    size_t item_size = sizeof(ros_message->telephone_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tr_lock_sts
  {
    size_t item_size = sizeof(ros_message->tr_lock_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trsm_park_lockd_trsm_park_lockd
  {
    size_t item_size = sizeof(ros_message->trsm_park_lockd_trsm_park_lockd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name twli_bri_raw_qf
  {
    size_t item_size = sizeof(ros_message->twli_bri_raw_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name twli_bri_raw_twli_bri_raw
  {
    size_t item_size = sizeof(ros_message->twli_bri_raw_twli_bri_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rev
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->rev;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _APPToStmDataStruct__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_function_msgs__msg__APPToStmDataStruct(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t max_serialized_size_deva_function_msgs__msg__APPToStmDataStruct(
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

  // member: app_to_hpa_ctrl_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_avp_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: on_bd_chrgr_hndl_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dc_chrgn_hndl_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: occupy_mon_sts_drvr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alrm_sts_alrm_failr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alrm_sts_alrm_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alrm_sts_alrm_trg_src
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alrm_sts_snsr_incln_failr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alrm_sts_snsr_intr_scanr_failr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: telephone_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tr_lock_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trsm_park_lockd_trsm_park_lockd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: twli_bri_raw_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: twli_bri_raw_twli_bri_raw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rev
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
    using DataType = deva_function_msgs__msg__APPToStmDataStruct;
    is_plain =
      (
      offsetof(DataType, rev) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _APPToStmDataStruct__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_function_msgs__msg__APPToStmDataStruct(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_APPToStmDataStruct = {
  "deva_function_msgs::msg",
  "APPToStmDataStruct",
  _APPToStmDataStruct__cdr_serialize,
  _APPToStmDataStruct__cdr_deserialize,
  _APPToStmDataStruct__get_serialized_size,
  _APPToStmDataStruct__max_serialized_size
};

static rosidl_message_type_support_t _APPToStmDataStruct__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_APPToStmDataStruct,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, APPToStmDataStruct)() {
  return &_APPToStmDataStruct__type_support;
}

#if defined(__cplusplus)
}
#endif
