// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_map_msgs:msg/AvpSubMap.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/avp_sub_map__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_map_msgs/msg/detail/avp_sub_map__struct.hpp"

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
bool cdr_serialize(
  const deva_map_msgs::msg::AvpSubLane &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_map_msgs::msg::AvpSubLane &);
size_t get_serialized_size(
  const deva_map_msgs::msg::AvpSubLane &,
  size_t current_alignment);
size_t
max_serialized_size_AvpSubLane(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_map_msgs


namespace deva_map_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_map_msgs
cdr_serialize(
  const deva_map_msgs::msg::AvpSubMap & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: avp_sub_lanes
  {
    size_t size = ros_message.avp_sub_lanes.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.avp_sub_lanes[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_map_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_map_msgs::msg::AvpSubMap & ros_message)
{
  // Member: avp_sub_lanes
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.avp_sub_lanes.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.avp_sub_lanes[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_map_msgs
get_serialized_size(
  const deva_map_msgs::msg::AvpSubMap & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: avp_sub_lanes
  {
    size_t array_size = ros_message.avp_sub_lanes.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.avp_sub_lanes[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_map_msgs
max_serialized_size_AvpSubMap(
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


  // Member: avp_sub_lanes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AvpSubLane(
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
    using DataType = deva_map_msgs::msg::AvpSubMap;
    is_plain =
      (
      offsetof(DataType, avp_sub_lanes) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _AvpSubMap__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_map_msgs::msg::AvpSubMap *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AvpSubMap__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_map_msgs::msg::AvpSubMap *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AvpSubMap__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_map_msgs::msg::AvpSubMap *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AvpSubMap__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AvpSubMap(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AvpSubMap__callbacks = {
  "deva_map_msgs::msg",
  "AvpSubMap",
  _AvpSubMap__cdr_serialize,
  _AvpSubMap__cdr_deserialize,
  _AvpSubMap__get_serialized_size,
  _AvpSubMap__max_serialized_size
};

static rosidl_message_type_support_t _AvpSubMap__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AvpSubMap__callbacks,
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
get_message_type_support_handle<deva_map_msgs::msg::AvpSubMap>()
{
  return &deva_map_msgs::msg::typesupport_fastrtps_cpp::_AvpSubMap__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_map_msgs, msg, AvpSubMap)() {
  return &deva_map_msgs::msg::typesupport_fastrtps_cpp::_AvpSubMap__handle;
}

#ifdef __cplusplus
}
#endif
