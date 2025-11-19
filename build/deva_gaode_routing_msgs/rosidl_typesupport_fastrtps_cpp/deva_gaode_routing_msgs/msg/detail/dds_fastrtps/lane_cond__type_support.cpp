// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/LaneCond.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/lane_cond__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_gaode_routing_msgs/msg/detail/lane_cond__struct.hpp"

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
  const deva_gaode_routing_msgs::msg::LaneCond & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: laneinfo_cond
  cdr << ros_message.laneinfo_cond;
  // Member: link_direction
  cdr << ros_message.link_direction;
  // Member: date
  cdr << ros_message.date;
  // Member: vehicles
  {
    cdr << ros_message.vehicles;
  }
  // Member: special_times
  {
    cdr << ros_message.special_times;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_gaode_routing_msgs::msg::LaneCond & ros_message)
{
  // Member: laneinfo_cond
  cdr >> ros_message.laneinfo_cond;

  // Member: link_direction
  cdr >> ros_message.link_direction;

  // Member: date
  cdr >> ros_message.date;

  // Member: vehicles
  {
    cdr >> ros_message.vehicles;
  }

  // Member: special_times
  {
    cdr >> ros_message.special_times;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
get_serialized_size(
  const deva_gaode_routing_msgs::msg::LaneCond & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: laneinfo_cond
  {
    size_t item_size = sizeof(ros_message.laneinfo_cond);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: link_direction
  {
    size_t item_size = sizeof(ros_message.link_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.date.size() + 1);
  // Member: vehicles
  {
    size_t array_size = ros_message.vehicles.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.vehicles[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: special_times
  {
    size_t array_size = ros_message.special_times.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.special_times[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
max_serialized_size_LaneCond(
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


  // Member: laneinfo_cond
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: link_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: date
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

  // Member: vehicles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: special_times
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_gaode_routing_msgs::msg::LaneCond;
    is_plain =
      (
      offsetof(DataType, special_times) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LaneCond__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::LaneCond *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaneCond__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_gaode_routing_msgs::msg::LaneCond *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaneCond__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::LaneCond *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaneCond__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LaneCond(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LaneCond__callbacks = {
  "deva_gaode_routing_msgs::msg",
  "LaneCond",
  _LaneCond__cdr_serialize,
  _LaneCond__cdr_deserialize,
  _LaneCond__get_serialized_size,
  _LaneCond__max_serialized_size
};

static rosidl_message_type_support_t _LaneCond__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaneCond__callbacks,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::LaneCond>()
{
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_LaneCond__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_gaode_routing_msgs, msg, LaneCond)() {
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_LaneCond__handle;
}

#ifdef __cplusplus
}
#endif
