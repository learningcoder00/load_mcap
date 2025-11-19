// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/RGAdditionalLaneInfo.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/rg_additional_lane_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_gaode_routing_msgs/msg/detail/rg_additional_lane_info__struct.hpp"

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
  const deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: arrow
  {
    cdr << ros_message.arrow;
  }
  // Member: flag
  {
    cdr << ros_message.flag;
  }
  // Member: rg_add_lane_property
  {
    cdr << ros_message.rg_add_lane_property;
  }
  // Member: active_time
  cdr << ros_message.active_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo & ros_message)
{
  // Member: arrow
  {
    cdr >> ros_message.arrow;
  }

  // Member: flag
  {
    cdr >> ros_message.flag;
  }

  // Member: rg_add_lane_property
  {
    cdr >> ros_message.rg_add_lane_property;
  }

  // Member: active_time
  cdr >> ros_message.active_time;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
get_serialized_size(
  const deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: arrow
  {
    size_t array_size = ros_message.arrow.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.arrow[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag
  {
    size_t array_size = ros_message.flag.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.flag[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rg_add_lane_property
  {
    size_t array_size = ros_message.rg_add_lane_property.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.rg_add_lane_property[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.active_time.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
max_serialized_size_RGAdditionalLaneInfo(
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


  // Member: arrow
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: flag
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rg_add_lane_property
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: active_time
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo;
    is_plain =
      (
      offsetof(DataType, active_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RGAdditionalLaneInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RGAdditionalLaneInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RGAdditionalLaneInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RGAdditionalLaneInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RGAdditionalLaneInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RGAdditionalLaneInfo__callbacks = {
  "deva_gaode_routing_msgs::msg",
  "RGAdditionalLaneInfo",
  _RGAdditionalLaneInfo__cdr_serialize,
  _RGAdditionalLaneInfo__cdr_deserialize,
  _RGAdditionalLaneInfo__get_serialized_size,
  _RGAdditionalLaneInfo__max_serialized_size
};

static rosidl_message_type_support_t _RGAdditionalLaneInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RGAdditionalLaneInfo__callbacks,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo>()
{
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_RGAdditionalLaneInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_gaode_routing_msgs, msg, RGAdditionalLaneInfo)() {
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_RGAdditionalLaneInfo__handle;
}

#ifdef __cplusplus
}
#endif
