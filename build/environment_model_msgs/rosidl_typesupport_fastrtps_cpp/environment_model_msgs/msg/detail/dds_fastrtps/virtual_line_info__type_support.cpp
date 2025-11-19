// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from environment_model_msgs:msg/VirtualLineInfo.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/virtual_line_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "environment_model_msgs/msg/detail/virtual_line_info__struct.hpp"

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
namespace environment_model_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const environment_model_msgs::msg::PairInt &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  environment_model_msgs::msg::PairInt &);
size_t get_serialized_size(
  const environment_model_msgs::msg::PairInt &,
  size_t current_alignment);
size_t
max_serialized_size_PairInt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace environment_model_msgs

namespace environment_model_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const environment_model_msgs::msg::PairDouble &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  environment_model_msgs::msg::PairDouble &);
size_t get_serialized_size(
  const environment_model_msgs::msg::PairDouble &,
  size_t current_alignment);
size_t
max_serialized_size_PairDouble(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace environment_model_msgs


namespace environment_model_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_environment_model_msgs
cdr_serialize(
  const environment_model_msgs::msg::VirtualLineInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: enum_vlane_type
  cdr << ros_message.enum_vlane_type;
  // Member: virtual_score
  cdr << ros_message.virtual_score;
  // Member: ori_ids
  environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ori_ids,
    cdr);
  // Member: e2e_pair
  environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.e2e_pair,
    cdr);
  // Member: exit_lane_id
  cdr << ros_message.exit_lane_id;
  // Member: exit_seq_id
  cdr << ros_message.exit_seq_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_environment_model_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  environment_model_msgs::msg::VirtualLineInfo & ros_message)
{
  // Member: enum_vlane_type
  cdr >> ros_message.enum_vlane_type;

  // Member: virtual_score
  cdr >> ros_message.virtual_score;

  // Member: ori_ids
  environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ori_ids);

  // Member: e2e_pair
  environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.e2e_pair);

  // Member: exit_lane_id
  cdr >> ros_message.exit_lane_id;

  // Member: exit_seq_id
  cdr >> ros_message.exit_seq_id;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_environment_model_msgs
get_serialized_size(
  const environment_model_msgs::msg::VirtualLineInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: enum_vlane_type
  {
    size_t item_size = sizeof(ros_message.enum_vlane_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: virtual_score
  {
    size_t item_size = sizeof(ros_message.virtual_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ori_ids

  current_alignment +=
    environment_model_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ori_ids, current_alignment);
  // Member: e2e_pair

  current_alignment +=
    environment_model_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.e2e_pair, current_alignment);
  // Member: exit_lane_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.exit_lane_id.size() + 1);
  // Member: exit_seq_id
  {
    size_t item_size = sizeof(ros_message.exit_seq_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_environment_model_msgs
max_serialized_size_VirtualLineInfo(
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


  // Member: enum_vlane_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: virtual_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ori_ids
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        environment_model_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PairInt(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: e2e_pair
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        environment_model_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PairDouble(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: exit_lane_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: exit_seq_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = environment_model_msgs::msg::VirtualLineInfo;
    is_plain =
      (
      offsetof(DataType, exit_seq_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VirtualLineInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const environment_model_msgs::msg::VirtualLineInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VirtualLineInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<environment_model_msgs::msg::VirtualLineInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VirtualLineInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const environment_model_msgs::msg::VirtualLineInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VirtualLineInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VirtualLineInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VirtualLineInfo__callbacks = {
  "environment_model_msgs::msg",
  "VirtualLineInfo",
  _VirtualLineInfo__cdr_serialize,
  _VirtualLineInfo__cdr_deserialize,
  _VirtualLineInfo__get_serialized_size,
  _VirtualLineInfo__max_serialized_size
};

static rosidl_message_type_support_t _VirtualLineInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VirtualLineInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace environment_model_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<environment_model_msgs::msg::VirtualLineInfo>()
{
  return &environment_model_msgs::msg::typesupport_fastrtps_cpp::_VirtualLineInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, environment_model_msgs, msg, VirtualLineInfo)() {
  return &environment_model_msgs::msg::typesupport_fastrtps_cpp::_VirtualLineInfo__handle;
}

#ifdef __cplusplus
}
#endif
