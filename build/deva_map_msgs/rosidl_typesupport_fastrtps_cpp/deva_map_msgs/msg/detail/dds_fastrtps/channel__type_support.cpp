// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_map_msgs:msg/Channel.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/channel__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_map_msgs/msg/detail/channel__struct.hpp"

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
  const deva_map_msgs::msg::ChannelLaneInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_map_msgs::msg::ChannelLaneInfo &);
size_t get_serialized_size(
  const deva_map_msgs::msg::ChannelLaneInfo &,
  size_t current_alignment);
size_t
max_serialized_size_ChannelLaneInfo(
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
bool cdr_serialize(
  const deva_map_msgs::msg::ChannelLaneLine &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_map_msgs::msg::ChannelLaneLine &);
size_t get_serialized_size(
  const deva_map_msgs::msg::ChannelLaneLine &,
  size_t current_alignment);
size_t
max_serialized_size_ChannelLaneLine(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_map_msgs

// functions for deva_map_msgs::msg::ChannelLaneLine already declared above

namespace deva_map_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_map_msgs::msg::ChannelLaneMarking &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_map_msgs::msg::ChannelLaneMarking &);
size_t get_serialized_size(
  const deva_map_msgs::msg::ChannelLaneMarking &,
  size_t current_alignment);
size_t
max_serialized_size_ChannelLaneMarking(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_map_msgs

// functions for deva_map_msgs::msg::ChannelLaneMarking already declared above

namespace deva_map_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_map_msgs::msg::ChannelObjectInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_map_msgs::msg::ChannelObjectInfo &);
size_t get_serialized_size(
  const deva_map_msgs::msg::ChannelObjectInfo &,
  size_t current_alignment);
size_t
max_serialized_size_ChannelObjectInfo(
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
bool cdr_serialize(
  const deva_map_msgs::msg::ChannelSignalInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_map_msgs::msg::ChannelSignalInfo &);
size_t get_serialized_size(
  const deva_map_msgs::msg::ChannelSignalInfo &,
  size_t current_alignment);
size_t
max_serialized_size_ChannelSignalInfo(
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
  const deva_map_msgs::msg::Channel & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: available
  cdr << (ros_message.available ? true : false);
  // Member: is_on_route
  cdr << (ros_message.is_on_route ? true : false);
  // Member: errcode
  cdr << ros_message.errcode;
  // Member: current_lane_id
  cdr << ros_message.current_lane_id;
  // Member: channel_idx
  cdr << ros_message.channel_idx;
  // Member: lane_offset
  cdr << ros_message.lane_offset;
  // Member: laneinfo
  deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.laneinfo,
    cdr);
  // Member: middle_line
  deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.middle_line,
    cdr);
  // Member: reference_line_vec
  {
    size_t size = ros_message.reference_line_vec.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.reference_line_vec[i],
        cdr);
    }
  }
  // Member: left_marking
  deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.left_marking,
    cdr);
  // Member: right_marking
  deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.right_marking,
    cdr);
  // Member: left_channel_idx
  cdr << ros_message.left_channel_idx;
  // Member: right_channel_idx
  cdr << ros_message.right_channel_idx;
  // Member: object_info
  {
    size_t size = ros_message.object_info.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.object_info[i],
        cdr);
    }
  }
  // Member: signal_info
  {
    size_t size = ros_message.signal_info.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.signal_info[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_map_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_map_msgs::msg::Channel & ros_message)
{
  // Member: available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.available = tmp ? true : false;
  }

  // Member: is_on_route
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_on_route = tmp ? true : false;
  }

  // Member: errcode
  cdr >> ros_message.errcode;

  // Member: current_lane_id
  cdr >> ros_message.current_lane_id;

  // Member: channel_idx
  cdr >> ros_message.channel_idx;

  // Member: lane_offset
  cdr >> ros_message.lane_offset;

  // Member: laneinfo
  deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.laneinfo);

  // Member: middle_line
  deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.middle_line);

  // Member: reference_line_vec
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

    ros_message.reference_line_vec.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.reference_line_vec[i]);
    }
  }

  // Member: left_marking
  deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.left_marking);

  // Member: right_marking
  deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.right_marking);

  // Member: left_channel_idx
  cdr >> ros_message.left_channel_idx;

  // Member: right_channel_idx
  cdr >> ros_message.right_channel_idx;

  // Member: object_info
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

    ros_message.object_info.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.object_info[i]);
    }
  }

  // Member: signal_info
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

    ros_message.signal_info.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.signal_info[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_map_msgs
get_serialized_size(
  const deva_map_msgs::msg::Channel & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: available
  {
    size_t item_size = sizeof(ros_message.available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_on_route
  {
    size_t item_size = sizeof(ros_message.is_on_route);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: errcode
  {
    size_t item_size = sizeof(ros_message.errcode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_lane_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.current_lane_id.size() + 1);
  // Member: channel_idx
  {
    size_t item_size = sizeof(ros_message.channel_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_offset
  {
    size_t item_size = sizeof(ros_message.lane_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: laneinfo

  current_alignment +=
    deva_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.laneinfo, current_alignment);
  // Member: middle_line

  current_alignment +=
    deva_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.middle_line, current_alignment);
  // Member: reference_line_vec
  {
    size_t array_size = ros_message.reference_line_vec.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.reference_line_vec[index], current_alignment);
    }
  }
  // Member: left_marking

  current_alignment +=
    deva_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.left_marking, current_alignment);
  // Member: right_marking

  current_alignment +=
    deva_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.right_marking, current_alignment);
  // Member: left_channel_idx
  {
    size_t item_size = sizeof(ros_message.left_channel_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_channel_idx
  {
    size_t item_size = sizeof(ros_message.right_channel_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: object_info
  {
    size_t array_size = ros_message.object_info.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.object_info[index], current_alignment);
    }
  }
  // Member: signal_info
  {
    size_t array_size = ros_message.signal_info.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.signal_info[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_map_msgs
max_serialized_size_Channel(
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


  // Member: available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_on_route
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: errcode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: current_lane_id
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

  // Member: channel_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: lane_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: laneinfo
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ChannelLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: middle_line
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ChannelLaneLine(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: reference_line_vec
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
        deva_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ChannelLaneLine(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: left_marking
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ChannelLaneMarking(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: right_marking
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ChannelLaneMarking(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: left_channel_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_channel_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: object_info
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
        deva_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ChannelObjectInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: signal_info
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
        deva_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ChannelSignalInfo(
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
    using DataType = deva_map_msgs::msg::Channel;
    is_plain =
      (
      offsetof(DataType, signal_info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Channel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_map_msgs::msg::Channel *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Channel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_map_msgs::msg::Channel *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Channel__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_map_msgs::msg::Channel *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Channel__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Channel(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Channel__callbacks = {
  "deva_map_msgs::msg",
  "Channel",
  _Channel__cdr_serialize,
  _Channel__cdr_deserialize,
  _Channel__get_serialized_size,
  _Channel__max_serialized_size
};

static rosidl_message_type_support_t _Channel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Channel__callbacks,
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
get_message_type_support_handle<deva_map_msgs::msg::Channel>()
{
  return &deva_map_msgs::msg::typesupport_fastrtps_cpp::_Channel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_map_msgs, msg, Channel)() {
  return &deva_map_msgs::msg::typesupport_fastrtps_cpp::_Channel__handle;
}

#ifdef __cplusplus
}
#endif
