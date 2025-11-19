// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rviz_plug_msg:msg/ExceptionMonitor.idl
// generated code does not contain a copyright notice
#include "rviz_plug_msg/msg/detail/exception_monitor__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rviz_plug_msg/msg/detail/exception_monitor__struct.hpp"

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

namespace rviz_plug_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_plug_msg
cdr_serialize(
  const rviz_plug_msg::msg::ExceptionMonitor & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: exception_content
  {
    cdr << ros_message.exception_content;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_plug_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rviz_plug_msg::msg::ExceptionMonitor & ros_message)
{
  // Member: exception_content
  {
    cdr >> ros_message.exception_content;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_plug_msg
get_serialized_size(
  const rviz_plug_msg::msg::ExceptionMonitor & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: exception_content
  {
    size_t array_size = ros_message.exception_content.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.exception_content[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_plug_msg
max_serialized_size_ExceptionMonitor(
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


  // Member: exception_content
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rviz_plug_msg::msg::ExceptionMonitor;
    is_plain =
      (
      offsetof(DataType, exception_content) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ExceptionMonitor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rviz_plug_msg::msg::ExceptionMonitor *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ExceptionMonitor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rviz_plug_msg::msg::ExceptionMonitor *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ExceptionMonitor__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rviz_plug_msg::msg::ExceptionMonitor *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ExceptionMonitor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ExceptionMonitor(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ExceptionMonitor__callbacks = {
  "rviz_plug_msg::msg",
  "ExceptionMonitor",
  _ExceptionMonitor__cdr_serialize,
  _ExceptionMonitor__cdr_deserialize,
  _ExceptionMonitor__get_serialized_size,
  _ExceptionMonitor__max_serialized_size
};

static rosidl_message_type_support_t _ExceptionMonitor__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExceptionMonitor__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rviz_plug_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rviz_plug_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<rviz_plug_msg::msg::ExceptionMonitor>()
{
  return &rviz_plug_msg::msg::typesupport_fastrtps_cpp::_ExceptionMonitor__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rviz_plug_msg, msg, ExceptionMonitor)() {
  return &rviz_plug_msg::msg::typesupport_fastrtps_cpp::_ExceptionMonitor__handle;
}

#ifdef __cplusplus
}
#endif
