// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/RearLaneInfo.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/rear_lane_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_aeb_msgs/msg/detail/rear_lane_info__struct.hpp"

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
namespace deva_aeb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_aeb_msgs::msg::SFLaneEstimn &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFLaneEstimn &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFLaneEstimn &,
  size_t current_alignment);
size_t
max_serialized_size_SFLaneEstimn(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_aeb_msgs

namespace deva_aeb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_aeb_msgs::msg::SFLaneMkrInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFLaneMkrInfo &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFLaneMkrInfo &,
  size_t current_alignment);
size_t
max_serialized_size_SFLaneMkrInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_aeb_msgs

namespace deva_aeb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_aeb_msgs::msg::SFRearLinePpty &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFRearLinePpty &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFRearLinePpty &,
  size_t current_alignment);
size_t
max_serialized_size_SFRearLinePpty(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_aeb_msgs


namespace deva_aeb_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_serialize(
  const deva_aeb_msgs::msg::RearLaneInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: estimn
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.estimn,
    cdr);
  // Member: info
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.info,
    cdr);
  // Member: ppty
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ppty,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_aeb_msgs::msg::RearLaneInfo & ros_message)
{
  // Member: estimn
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.estimn);

  // Member: info
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.info);

  // Member: ppty
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ppty);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
get_serialized_size(
  const deva_aeb_msgs::msg::RearLaneInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: estimn

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.estimn, current_alignment);
  // Member: info

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.info, current_alignment);
  // Member: ppty

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ppty, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
max_serialized_size_RearLaneInfo(
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


  // Member: estimn
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFLaneEstimn(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFLaneMkrInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ppty
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFRearLinePpty(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_aeb_msgs::msg::RearLaneInfo;
    is_plain =
      (
      offsetof(DataType, ppty) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RearLaneInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::RearLaneInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RearLaneInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_aeb_msgs::msg::RearLaneInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RearLaneInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::RearLaneInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RearLaneInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RearLaneInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RearLaneInfo__callbacks = {
  "deva_aeb_msgs::msg",
  "RearLaneInfo",
  _RearLaneInfo__cdr_serialize,
  _RearLaneInfo__cdr_deserialize,
  _RearLaneInfo__get_serialized_size,
  _RearLaneInfo__max_serialized_size
};

static rosidl_message_type_support_t _RearLaneInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RearLaneInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_aeb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_aeb_msgs::msg::RearLaneInfo>()
{
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_RearLaneInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_aeb_msgs, msg, RearLaneInfo)() {
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_RearLaneInfo__handle;
}

#ifdef __cplusplus
}
#endif
