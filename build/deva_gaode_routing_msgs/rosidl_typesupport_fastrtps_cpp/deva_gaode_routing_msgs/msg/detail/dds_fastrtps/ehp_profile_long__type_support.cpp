// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/EhpProfileLong.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_long__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_long__struct.hpp"

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

namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_serialize(
  const deva_gaode_routing_msgs::msg::EhpProfileLong & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: prof_long_offset
  cdr << ros_message.prof_long_offset;
  // Member: prof_long_msg_type
  cdr << ros_message.prof_long_msg_type;
  // Member: prof_long_path_idx
  cdr << ros_message.prof_long_path_idx;
  // Member: prof_long_cyc_cnt
  cdr << ros_message.prof_long_cyc_cnt;
  // Member: prof_long_update
  cdr << ros_message.prof_long_update;
  // Member: prof_long_retr
  cdr << ros_message.prof_long_retr;
  // Member: prof_long_ctrl_point
  cdr << ros_message.prof_long_ctrl_point;
  // Member: prof_long_prof_type
  cdr << ros_message.prof_long_prof_type;
  // Member: prof_long_value
  cdr << ros_message.prof_long_value;
  // Member: prof_long_relative_offset
  cdr << ros_message.prof_long_relative_offset;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_gaode_routing_msgs::msg::EhpProfileLong & ros_message)
{
  // Member: prof_long_offset
  cdr >> ros_message.prof_long_offset;

  // Member: prof_long_msg_type
  cdr >> ros_message.prof_long_msg_type;

  // Member: prof_long_path_idx
  cdr >> ros_message.prof_long_path_idx;

  // Member: prof_long_cyc_cnt
  cdr >> ros_message.prof_long_cyc_cnt;

  // Member: prof_long_update
  cdr >> ros_message.prof_long_update;

  // Member: prof_long_retr
  cdr >> ros_message.prof_long_retr;

  // Member: prof_long_ctrl_point
  cdr >> ros_message.prof_long_ctrl_point;

  // Member: prof_long_prof_type
  cdr >> ros_message.prof_long_prof_type;

  // Member: prof_long_value
  cdr >> ros_message.prof_long_value;

  // Member: prof_long_relative_offset
  cdr >> ros_message.prof_long_relative_offset;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
get_serialized_size(
  const deva_gaode_routing_msgs::msg::EhpProfileLong & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: prof_long_offset
  {
    size_t item_size = sizeof(ros_message.prof_long_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prof_long_msg_type
  {
    size_t item_size = sizeof(ros_message.prof_long_msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prof_long_path_idx
  {
    size_t item_size = sizeof(ros_message.prof_long_path_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prof_long_cyc_cnt
  {
    size_t item_size = sizeof(ros_message.prof_long_cyc_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prof_long_update
  {
    size_t item_size = sizeof(ros_message.prof_long_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prof_long_retr
  {
    size_t item_size = sizeof(ros_message.prof_long_retr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prof_long_ctrl_point
  {
    size_t item_size = sizeof(ros_message.prof_long_ctrl_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prof_long_prof_type
  {
    size_t item_size = sizeof(ros_message.prof_long_prof_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prof_long_value
  {
    size_t item_size = sizeof(ros_message.prof_long_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prof_long_relative_offset
  {
    size_t item_size = sizeof(ros_message.prof_long_relative_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
max_serialized_size_EhpProfileLong(
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


  // Member: prof_long_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: prof_long_msg_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prof_long_path_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prof_long_cyc_cnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prof_long_update
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prof_long_retr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prof_long_ctrl_point
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prof_long_prof_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prof_long_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: prof_long_relative_offset
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
    using DataType = deva_gaode_routing_msgs::msg::EhpProfileLong;
    is_plain =
      (
      offsetof(DataType, prof_long_relative_offset) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EhpProfileLong__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::EhpProfileLong *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EhpProfileLong__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_gaode_routing_msgs::msg::EhpProfileLong *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EhpProfileLong__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::EhpProfileLong *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EhpProfileLong__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EhpProfileLong(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EhpProfileLong__callbacks = {
  "deva_gaode_routing_msgs::msg",
  "EhpProfileLong",
  _EhpProfileLong__cdr_serialize,
  _EhpProfileLong__cdr_deserialize,
  _EhpProfileLong__get_serialized_size,
  _EhpProfileLong__max_serialized_size
};

static rosidl_message_type_support_t _EhpProfileLong__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EhpProfileLong__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_gaode_routing_msgs::msg::EhpProfileLong>()
{
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_EhpProfileLong__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_gaode_routing_msgs, msg, EhpProfileLong)() {
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_EhpProfileLong__handle;
}

#ifdef __cplusplus
}
#endif
