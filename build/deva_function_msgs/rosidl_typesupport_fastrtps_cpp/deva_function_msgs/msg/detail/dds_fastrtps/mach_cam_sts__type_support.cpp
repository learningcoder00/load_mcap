// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/MachCamSts.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/mach_cam_sts__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/mach_cam_sts__struct.hpp"

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
  const deva_function_msgs::msg::MachCamSts & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: trip_reset_sync_req_msg_asdm
  cdr << ros_message.trip_reset_sync_req_msg_asdm;
  // Member: cam_sts_cam_cam_heatr_actv
  cdr << ros_message.cam_sts_cam_cam_heatr_actv;
  // Member: cam_sts_cam_frnt_blkd1
  cdr << ros_message.cam_sts_cam_frnt_blkd1;
  // Member: cam_sts_cam_frnt_blkd2
  cdr << ros_message.cam_sts_cam_frnt_blkd2;
  // Member: cam_sts_cam_frnt_blkd3
  cdr << ros_message.cam_sts_cam_frnt_blkd3;
  // Member: cam_sts_cam_frnt_blkd4
  cdr << ros_message.cam_sts_cam_frnt_blkd4;
  // Member: cam_sts_cam_frnt_blkd5
  cdr << ros_message.cam_sts_cam_frnt_blkd5;
  // Member: cam_sts_cam_frnt_blkd6
  cdr << ros_message.cam_sts_cam_frnt_blkd6;
  // Member: cam_sts_cam_frnt_blkd7
  cdr << ros_message.cam_sts_cam_frnt_blkd7;
  // Member: cam_sts_cam_frnt_blkd8
  cdr << ros_message.cam_sts_cam_frnt_blkd8;
  // Member: cam_sts_cam_frnt_cal_not_strtd
  cdr << ros_message.cam_sts_cam_frnt_cal_not_strtd;
  // Member: cam_sts_cam_miss_com
  cdr << ros_message.cam_sts_cam_miss_com;
  // Member: cam_status0
  cdr << ros_message.cam_status0;
  // Member: hmi_re_cam_sts0
  cdr << ros_message.hmi_re_cam_sts0;
  // Member: frnt_side_cam_le_sts0
  cdr << ros_message.frnt_side_cam_le_sts0;
  // Member: frnt_side_cam_ri_sts0
  cdr << ros_message.frnt_side_cam_ri_sts0;
  // Member: re_side_cam_le_sts0
  cdr << ros_message.re_side_cam_le_sts0;
  // Member: re_side_cam_ri_sts0
  cdr << ros_message.re_side_cam_ri_sts0;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::MachCamSts & ros_message)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: trip_reset_sync_req_msg_asdm
  cdr >> ros_message.trip_reset_sync_req_msg_asdm;

  // Member: cam_sts_cam_cam_heatr_actv
  cdr >> ros_message.cam_sts_cam_cam_heatr_actv;

  // Member: cam_sts_cam_frnt_blkd1
  cdr >> ros_message.cam_sts_cam_frnt_blkd1;

  // Member: cam_sts_cam_frnt_blkd2
  cdr >> ros_message.cam_sts_cam_frnt_blkd2;

  // Member: cam_sts_cam_frnt_blkd3
  cdr >> ros_message.cam_sts_cam_frnt_blkd3;

  // Member: cam_sts_cam_frnt_blkd4
  cdr >> ros_message.cam_sts_cam_frnt_blkd4;

  // Member: cam_sts_cam_frnt_blkd5
  cdr >> ros_message.cam_sts_cam_frnt_blkd5;

  // Member: cam_sts_cam_frnt_blkd6
  cdr >> ros_message.cam_sts_cam_frnt_blkd6;

  // Member: cam_sts_cam_frnt_blkd7
  cdr >> ros_message.cam_sts_cam_frnt_blkd7;

  // Member: cam_sts_cam_frnt_blkd8
  cdr >> ros_message.cam_sts_cam_frnt_blkd8;

  // Member: cam_sts_cam_frnt_cal_not_strtd
  cdr >> ros_message.cam_sts_cam_frnt_cal_not_strtd;

  // Member: cam_sts_cam_miss_com
  cdr >> ros_message.cam_sts_cam_miss_com;

  // Member: cam_status0
  cdr >> ros_message.cam_status0;

  // Member: hmi_re_cam_sts0
  cdr >> ros_message.hmi_re_cam_sts0;

  // Member: frnt_side_cam_le_sts0
  cdr >> ros_message.frnt_side_cam_le_sts0;

  // Member: frnt_side_cam_ri_sts0
  cdr >> ros_message.frnt_side_cam_ri_sts0;

  // Member: re_side_cam_le_sts0
  cdr >> ros_message.re_side_cam_le_sts0;

  // Member: re_side_cam_ri_sts0
  cdr >> ros_message.re_side_cam_ri_sts0;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::MachCamSts & ros_message,
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
  // Member: trip_reset_sync_req_msg_asdm
  {
    size_t item_size = sizeof(ros_message.trip_reset_sync_req_msg_asdm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_sts_cam_cam_heatr_actv
  {
    size_t item_size = sizeof(ros_message.cam_sts_cam_cam_heatr_actv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_sts_cam_frnt_blkd1
  {
    size_t item_size = sizeof(ros_message.cam_sts_cam_frnt_blkd1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_sts_cam_frnt_blkd2
  {
    size_t item_size = sizeof(ros_message.cam_sts_cam_frnt_blkd2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_sts_cam_frnt_blkd3
  {
    size_t item_size = sizeof(ros_message.cam_sts_cam_frnt_blkd3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_sts_cam_frnt_blkd4
  {
    size_t item_size = sizeof(ros_message.cam_sts_cam_frnt_blkd4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_sts_cam_frnt_blkd5
  {
    size_t item_size = sizeof(ros_message.cam_sts_cam_frnt_blkd5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_sts_cam_frnt_blkd6
  {
    size_t item_size = sizeof(ros_message.cam_sts_cam_frnt_blkd6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_sts_cam_frnt_blkd7
  {
    size_t item_size = sizeof(ros_message.cam_sts_cam_frnt_blkd7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_sts_cam_frnt_blkd8
  {
    size_t item_size = sizeof(ros_message.cam_sts_cam_frnt_blkd8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_sts_cam_frnt_cal_not_strtd
  {
    size_t item_size = sizeof(ros_message.cam_sts_cam_frnt_cal_not_strtd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_sts_cam_miss_com
  {
    size_t item_size = sizeof(ros_message.cam_sts_cam_miss_com);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cam_status0
  {
    size_t item_size = sizeof(ros_message.cam_status0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_re_cam_sts0
  {
    size_t item_size = sizeof(ros_message.hmi_re_cam_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: frnt_side_cam_le_sts0
  {
    size_t item_size = sizeof(ros_message.frnt_side_cam_le_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: frnt_side_cam_ri_sts0
  {
    size_t item_size = sizeof(ros_message.frnt_side_cam_ri_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: re_side_cam_le_sts0
  {
    size_t item_size = sizeof(ros_message.re_side_cam_le_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: re_side_cam_ri_sts0
  {
    size_t item_size = sizeof(ros_message.re_side_cam_ri_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
max_serialized_size_MachCamSts(
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

  // Member: trip_reset_sync_req_msg_asdm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cam_sts_cam_cam_heatr_actv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_sts_cam_frnt_blkd1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_sts_cam_frnt_blkd2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_sts_cam_frnt_blkd3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_sts_cam_frnt_blkd4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_sts_cam_frnt_blkd5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_sts_cam_frnt_blkd6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_sts_cam_frnt_blkd7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_sts_cam_frnt_blkd8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_sts_cam_frnt_cal_not_strtd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_sts_cam_miss_com
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cam_status0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_re_cam_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: frnt_side_cam_le_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: frnt_side_cam_ri_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: re_side_cam_le_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: re_side_cam_ri_sts0
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
    using DataType = deva_function_msgs::msg::MachCamSts;
    is_plain =
      (
      offsetof(DataType, re_side_cam_ri_sts0) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MachCamSts__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::MachCamSts *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MachCamSts__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::MachCamSts *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MachCamSts__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::MachCamSts *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MachCamSts__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MachCamSts(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MachCamSts__callbacks = {
  "deva_function_msgs::msg",
  "MachCamSts",
  _MachCamSts__cdr_serialize,
  _MachCamSts__cdr_deserialize,
  _MachCamSts__get_serialized_size,
  _MachCamSts__max_serialized_size
};

static rosidl_message_type_support_t _MachCamSts__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MachCamSts__callbacks,
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
get_message_type_support_handle<deva_function_msgs::msg::MachCamSts>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_MachCamSts__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, MachCamSts)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_MachCamSts__handle;
}

#ifdef __cplusplus
}
#endif
