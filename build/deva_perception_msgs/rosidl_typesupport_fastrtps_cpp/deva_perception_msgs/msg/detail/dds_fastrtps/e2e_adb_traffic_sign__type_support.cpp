// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/E2eAdbTrafficSign.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace deva_perception_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
cdr_serialize(
  const deva_perception_msgs::msg::E2eAdbTrafficSign & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: traffic_sign_for_adb_adb_trk_info
  cdr << ros_message.traffic_sign_for_adb_adb_trk_info;
  // Member: traffic_sign_for_adb_adb_abs_dist
  cdr << ros_message.traffic_sign_for_adb_adb_abs_dist;
  // Member: traffic_sign_for_adb_adb_vert_ag_bot
  cdr << ros_message.traffic_sign_for_adb_adb_vert_ag_bot;
  // Member: traffic_sign_for_adb_adb_vert_ag_top
  cdr << ros_message.traffic_sign_for_adb_adb_vert_ag_top;
  // Member: traffic_sign_for_adb_adb_hozl_ag_le
  cdr << ros_message.traffic_sign_for_adb_adb_hozl_ag_le;
  // Member: traffic_sign_for_adb_adb_hozl_ag_ri
  cdr << ros_message.traffic_sign_for_adb_adb_hozl_ag_ri;
  // Member: traffic_sign_for_adb_adb_detd_qly
  cdr << ros_message.traffic_sign_for_adb_adb_detd_qly;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_perception_msgs::msg::E2eAdbTrafficSign & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: traffic_sign_for_adb_adb_trk_info
  cdr >> ros_message.traffic_sign_for_adb_adb_trk_info;

  // Member: traffic_sign_for_adb_adb_abs_dist
  cdr >> ros_message.traffic_sign_for_adb_adb_abs_dist;

  // Member: traffic_sign_for_adb_adb_vert_ag_bot
  cdr >> ros_message.traffic_sign_for_adb_adb_vert_ag_bot;

  // Member: traffic_sign_for_adb_adb_vert_ag_top
  cdr >> ros_message.traffic_sign_for_adb_adb_vert_ag_top;

  // Member: traffic_sign_for_adb_adb_hozl_ag_le
  cdr >> ros_message.traffic_sign_for_adb_adb_hozl_ag_le;

  // Member: traffic_sign_for_adb_adb_hozl_ag_ri
  cdr >> ros_message.traffic_sign_for_adb_adb_hozl_ag_ri;

  // Member: traffic_sign_for_adb_adb_detd_qly
  cdr >> ros_message.traffic_sign_for_adb_adb_detd_qly;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
get_serialized_size(
  const deva_perception_msgs::msg::E2eAdbTrafficSign & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: traffic_sign_for_adb_adb_trk_info
  {
    size_t item_size = sizeof(ros_message.traffic_sign_for_adb_adb_trk_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: traffic_sign_for_adb_adb_abs_dist
  {
    size_t item_size = sizeof(ros_message.traffic_sign_for_adb_adb_abs_dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: traffic_sign_for_adb_adb_vert_ag_bot
  {
    size_t item_size = sizeof(ros_message.traffic_sign_for_adb_adb_vert_ag_bot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: traffic_sign_for_adb_adb_vert_ag_top
  {
    size_t item_size = sizeof(ros_message.traffic_sign_for_adb_adb_vert_ag_top);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: traffic_sign_for_adb_adb_hozl_ag_le
  {
    size_t item_size = sizeof(ros_message.traffic_sign_for_adb_adb_hozl_ag_le);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: traffic_sign_for_adb_adb_hozl_ag_ri
  {
    size_t item_size = sizeof(ros_message.traffic_sign_for_adb_adb_hozl_ag_ri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: traffic_sign_for_adb_adb_detd_qly
  {
    size_t item_size = sizeof(ros_message.traffic_sign_for_adb_adb_detd_qly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
max_serialized_size_E2eAdbTrafficSign(
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
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: traffic_sign_for_adb_adb_trk_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: traffic_sign_for_adb_adb_abs_dist
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: traffic_sign_for_adb_adb_vert_ag_bot
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: traffic_sign_for_adb_adb_vert_ag_top
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: traffic_sign_for_adb_adb_hozl_ag_le
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: traffic_sign_for_adb_adb_hozl_ag_ri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: traffic_sign_for_adb_adb_detd_qly
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
    using DataType = deva_perception_msgs::msg::E2eAdbTrafficSign;
    is_plain =
      (
      offsetof(DataType, traffic_sign_for_adb_adb_detd_qly) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _E2eAdbTrafficSign__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_perception_msgs::msg::E2eAdbTrafficSign *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _E2eAdbTrafficSign__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_perception_msgs::msg::E2eAdbTrafficSign *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _E2eAdbTrafficSign__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_perception_msgs::msg::E2eAdbTrafficSign *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _E2eAdbTrafficSign__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_E2eAdbTrafficSign(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _E2eAdbTrafficSign__callbacks = {
  "deva_perception_msgs::msg",
  "E2eAdbTrafficSign",
  _E2eAdbTrafficSign__cdr_serialize,
  _E2eAdbTrafficSign__cdr_deserialize,
  _E2eAdbTrafficSign__get_serialized_size,
  _E2eAdbTrafficSign__max_serialized_size
};

static rosidl_message_type_support_t _E2eAdbTrafficSign__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_E2eAdbTrafficSign__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_perception_msgs::msg::E2eAdbTrafficSign>()
{
  return &deva_perception_msgs::msg::typesupport_fastrtps_cpp::_E2eAdbTrafficSign__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_perception_msgs, msg, E2eAdbTrafficSign)() {
  return &deva_perception_msgs::msg::typesupport_fastrtps_cpp::_E2eAdbTrafficSign__handle;
}

#ifdef __cplusplus
}
#endif
