// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_map_msgs:msg/AvpBoundary.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/avp_boundary__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_map_msgs/msg/detail/avp_boundary__struct.hpp"

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

namespace deva_map_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_map_msgs
cdr_serialize(
  const deva_map_msgs::msg::AvpBoundary & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: s
  cdr << ros_message.s;
  // Member: left_x
  cdr << ros_message.left_x;
  // Member: left_y
  cdr << ros_message.left_y;
  // Member: left_z
  cdr << ros_message.left_z;
  // Member: left_region_width
  cdr << ros_message.left_region_width;
  // Member: right_x
  cdr << ros_message.right_x;
  // Member: right_y
  cdr << ros_message.right_y;
  // Member: right_z
  cdr << ros_message.right_z;
  // Member: right_region_width
  cdr << ros_message.right_region_width;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_map_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_map_msgs::msg::AvpBoundary & ros_message)
{
  // Member: s
  cdr >> ros_message.s;

  // Member: left_x
  cdr >> ros_message.left_x;

  // Member: left_y
  cdr >> ros_message.left_y;

  // Member: left_z
  cdr >> ros_message.left_z;

  // Member: left_region_width
  cdr >> ros_message.left_region_width;

  // Member: right_x
  cdr >> ros_message.right_x;

  // Member: right_y
  cdr >> ros_message.right_y;

  // Member: right_z
  cdr >> ros_message.right_z;

  // Member: right_region_width
  cdr >> ros_message.right_region_width;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_map_msgs
get_serialized_size(
  const deva_map_msgs::msg::AvpBoundary & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: s
  {
    size_t item_size = sizeof(ros_message.s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_x
  {
    size_t item_size = sizeof(ros_message.left_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_y
  {
    size_t item_size = sizeof(ros_message.left_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_z
  {
    size_t item_size = sizeof(ros_message.left_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_region_width
  {
    size_t item_size = sizeof(ros_message.left_region_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_x
  {
    size_t item_size = sizeof(ros_message.right_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_y
  {
    size_t item_size = sizeof(ros_message.right_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_z
  {
    size_t item_size = sizeof(ros_message.right_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_region_width
  {
    size_t item_size = sizeof(ros_message.right_region_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_map_msgs
max_serialized_size_AvpBoundary(
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


  // Member: s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_region_width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_region_width
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
    using DataType = deva_map_msgs::msg::AvpBoundary;
    is_plain =
      (
      offsetof(DataType, right_region_width) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _AvpBoundary__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_map_msgs::msg::AvpBoundary *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AvpBoundary__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_map_msgs::msg::AvpBoundary *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AvpBoundary__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_map_msgs::msg::AvpBoundary *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AvpBoundary__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AvpBoundary(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AvpBoundary__callbacks = {
  "deva_map_msgs::msg",
  "AvpBoundary",
  _AvpBoundary__cdr_serialize,
  _AvpBoundary__cdr_deserialize,
  _AvpBoundary__get_serialized_size,
  _AvpBoundary__max_serialized_size
};

static rosidl_message_type_support_t _AvpBoundary__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AvpBoundary__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_map_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_map_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_map_msgs::msg::AvpBoundary>()
{
  return &deva_map_msgs::msg::typesupport_fastrtps_cpp::_AvpBoundary__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_map_msgs, msg, AvpBoundary)() {
  return &deva_map_msgs::msg::typesupport_fastrtps_cpp::_AvpBoundary__handle;
}

#ifdef __cplusplus
}
#endif
