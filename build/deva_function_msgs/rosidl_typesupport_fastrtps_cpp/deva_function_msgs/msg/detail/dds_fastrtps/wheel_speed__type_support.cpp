// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/WheelSpeed.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/wheel_speed__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/wheel_speed__struct.hpp"

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
bool cdr_serialize(
  const deva_function_msgs::msg::WheelInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_function_msgs::msg::WheelInfo &);
size_t get_serialized_size(
  const deva_function_msgs::msg::WheelInfo &,
  size_t current_alignment);
size_t
max_serialized_size_WheelInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_function_msgs

// functions for deva_function_msgs::msg::WheelInfo already declared above

// functions for deva_function_msgs::msg::WheelInfo already declared above

// functions for deva_function_msgs::msg::WheelInfo already declared above


namespace deva_function_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_serialize(
  const deva_function_msgs::msg::WheelSpeed & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: front_left
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.front_left,
    cdr);
  // Member: front_right
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.front_right,
    cdr);
  // Member: rear_left
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rear_left,
    cdr);
  // Member: rear_right
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rear_right,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::WheelSpeed & ros_message)
{
  // Member: front_left
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.front_left);

  // Member: front_right
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.front_right);

  // Member: rear_left
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rear_left);

  // Member: rear_right
  deva_function_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rear_right);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::WheelSpeed & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: front_left

  current_alignment +=
    deva_function_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.front_left, current_alignment);
  // Member: front_right

  current_alignment +=
    deva_function_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.front_right, current_alignment);
  // Member: rear_left

  current_alignment +=
    deva_function_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rear_left, current_alignment);
  // Member: rear_right

  current_alignment +=
    deva_function_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rear_right, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
max_serialized_size_WheelSpeed(
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


  // Member: front_left
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_function_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WheelInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: front_right
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_function_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WheelInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rear_left
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_function_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WheelInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rear_right
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_function_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WheelInfo(
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
    using DataType = deva_function_msgs::msg::WheelSpeed;
    is_plain =
      (
      offsetof(DataType, rear_right) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _WheelSpeed__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::WheelSpeed *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WheelSpeed__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::WheelSpeed *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WheelSpeed__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::WheelSpeed *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WheelSpeed__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WheelSpeed(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WheelSpeed__callbacks = {
  "deva_function_msgs::msg",
  "WheelSpeed",
  _WheelSpeed__cdr_serialize,
  _WheelSpeed__cdr_deserialize,
  _WheelSpeed__get_serialized_size,
  _WheelSpeed__max_serialized_size
};

static rosidl_message_type_support_t _WheelSpeed__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WheelSpeed__callbacks,
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
get_message_type_support_handle<deva_function_msgs::msg::WheelSpeed>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_WheelSpeed__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, WheelSpeed)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_WheelSpeed__handle;
}

#ifdef __cplusplus
}
#endif
