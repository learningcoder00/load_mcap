// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/E2eResult.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/e2e_result__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_perception_msgs/msg/detail/e2e_result__struct.hpp"

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
namespace deva_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_perception_msgs::msg::E2eDecodeBroadResult &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_perception_msgs::msg::E2eDecodeBroadResult &);
size_t get_serialized_size(
  const deva_perception_msgs::msg::E2eDecodeBroadResult &,
  size_t current_alignment);
size_t
max_serialized_size_E2eDecodeBroadResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_perception_msgs

namespace deva_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_perception_msgs::msg::E2eDecodeResult &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_perception_msgs::msg::E2eDecodeResult &);
size_t get_serialized_size(
  const deva_perception_msgs::msg::E2eDecodeResult &,
  size_t current_alignment);
size_t
max_serialized_size_E2eDecodeResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_perception_msgs

// functions for deva_perception_msgs::msg::E2eDecodeResult already declared above

// functions for deva_perception_msgs::msg::E2eDecodeResult already declared above

// functions for deva_perception_msgs::msg::E2eDecodeResult already declared above


namespace deva_perception_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
cdr_serialize(
  const deva_perception_msgs::msg::E2eResult & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: broadcategory
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.broadcategory,
    cdr);
  // Member: turn_around
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.turn_around,
    cdr);
  // Member: left
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.left,
    cdr);
  // Member: straight
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.straight,
    cdr);
  // Member: right
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.right,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_perception_msgs::msg::E2eResult & ros_message)
{
  // Member: broadcategory
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.broadcategory);

  // Member: turn_around
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.turn_around);

  // Member: left
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.left);

  // Member: straight
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.straight);

  // Member: right
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.right);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
get_serialized_size(
  const deva_perception_msgs::msg::E2eResult & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: broadcategory

  current_alignment +=
    deva_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.broadcategory, current_alignment);
  // Member: turn_around

  current_alignment +=
    deva_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.turn_around, current_alignment);
  // Member: left

  current_alignment +=
    deva_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.left, current_alignment);
  // Member: straight

  current_alignment +=
    deva_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.straight, current_alignment);
  // Member: right

  current_alignment +=
    deva_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.right, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
max_serialized_size_E2eResult(
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


  // Member: broadcategory
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_E2eDecodeBroadResult(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: turn_around
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_E2eDecodeResult(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: left
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_E2eDecodeResult(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: straight
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_E2eDecodeResult(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: right
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_E2eDecodeResult(
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
    using DataType = deva_perception_msgs::msg::E2eResult;
    is_plain =
      (
      offsetof(DataType, right) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _E2eResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_perception_msgs::msg::E2eResult *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _E2eResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_perception_msgs::msg::E2eResult *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _E2eResult__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_perception_msgs::msg::E2eResult *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _E2eResult__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_E2eResult(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _E2eResult__callbacks = {
  "deva_perception_msgs::msg",
  "E2eResult",
  _E2eResult__cdr_serialize,
  _E2eResult__cdr_deserialize,
  _E2eResult__get_serialized_size,
  _E2eResult__max_serialized_size
};

static rosidl_message_type_support_t _E2eResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_E2eResult__callbacks,
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
get_message_type_support_handle<deva_perception_msgs::msg::E2eResult>()
{
  return &deva_perception_msgs::msg::typesupport_fastrtps_cpp::_E2eResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_perception_msgs, msg, E2eResult)() {
  return &deva_perception_msgs::msg::typesupport_fastrtps_cpp::_E2eResult__handle;
}

#ifdef __cplusplus
}
#endif
