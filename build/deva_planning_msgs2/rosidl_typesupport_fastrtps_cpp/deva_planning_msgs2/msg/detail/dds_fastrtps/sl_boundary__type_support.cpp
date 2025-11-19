// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/SLBoundary.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/sl_boundary__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_planning_msgs2/msg/detail/sl_boundary__struct.hpp"

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

namespace deva_planning_msgs2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
cdr_serialize(
  const deva_planning_msgs2::msg::SLBoundary & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: start_s
  cdr << ros_message.start_s;
  // Member: end_s
  cdr << ros_message.end_s;
  // Member: start_l
  cdr << ros_message.start_l;
  // Member: end_l
  cdr << ros_message.end_l;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_planning_msgs2::msg::SLBoundary & ros_message)
{
  // Member: start_s
  cdr >> ros_message.start_s;

  // Member: end_s
  cdr >> ros_message.end_s;

  // Member: start_l
  cdr >> ros_message.start_l;

  // Member: end_l
  cdr >> ros_message.end_l;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
get_serialized_size(
  const deva_planning_msgs2::msg::SLBoundary & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: start_s
  {
    size_t item_size = sizeof(ros_message.start_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_s
  {
    size_t item_size = sizeof(ros_message.end_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_l
  {
    size_t item_size = sizeof(ros_message.start_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_l
  {
    size_t item_size = sizeof(ros_message.end_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
max_serialized_size_SLBoundary(
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


  // Member: start_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: end_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: start_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: end_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_planning_msgs2::msg::SLBoundary;
    is_plain =
      (
      offsetof(DataType, end_l) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SLBoundary__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_planning_msgs2::msg::SLBoundary *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SLBoundary__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_planning_msgs2::msg::SLBoundary *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SLBoundary__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_planning_msgs2::msg::SLBoundary *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SLBoundary__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SLBoundary(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SLBoundary__callbacks = {
  "deva_planning_msgs2::msg",
  "SLBoundary",
  _SLBoundary__cdr_serialize,
  _SLBoundary__cdr_deserialize,
  _SLBoundary__get_serialized_size,
  _SLBoundary__max_serialized_size
};

static rosidl_message_type_support_t _SLBoundary__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SLBoundary__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_planning_msgs2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_planning_msgs2::msg::SLBoundary>()
{
  return &deva_planning_msgs2::msg::typesupport_fastrtps_cpp::_SLBoundary__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_planning_msgs2, msg, SLBoundary)() {
  return &deva_planning_msgs2::msg::typesupport_fastrtps_cpp::_SLBoundary__handle;
}

#ifdef __cplusplus
}
#endif
