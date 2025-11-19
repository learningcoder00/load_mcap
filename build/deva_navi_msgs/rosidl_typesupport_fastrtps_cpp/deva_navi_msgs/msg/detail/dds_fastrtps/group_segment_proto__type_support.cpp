// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_navi_msgs:msg/GroupSegmentProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/group_segment_proto__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_navi_msgs/msg/detail/group_segment_proto__struct.hpp"

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

namespace deva_navi_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
cdr_serialize(
  const deva_navi_msgs::msg::GroupSegmentProto & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: length
  cdr << ros_message.length;
  // Member: toll_cost
  cdr << ros_message.toll_cost;
  // Member: road_name
  cdr << ros_message.road_name;
  // Member: start_segment_index
  cdr << ros_message.start_segment_index;
  // Member: segment_count
  cdr << ros_message.segment_count;
  // Member: status
  cdr << ros_message.status;
  // Member: speed
  cdr << ros_message.speed;
  // Member: is_via_point
  cdr << (ros_message.is_via_point ? true : false);
  // Member: is_crucial
  cdr << (ros_message.is_crucial ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_navi_msgs::msg::GroupSegmentProto & ros_message)
{
  // Member: length
  cdr >> ros_message.length;

  // Member: toll_cost
  cdr >> ros_message.toll_cost;

  // Member: road_name
  cdr >> ros_message.road_name;

  // Member: start_segment_index
  cdr >> ros_message.start_segment_index;

  // Member: segment_count
  cdr >> ros_message.segment_count;

  // Member: status
  cdr >> ros_message.status;

  // Member: speed
  cdr >> ros_message.speed;

  // Member: is_via_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_via_point = tmp ? true : false;
  }

  // Member: is_crucial
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_crucial = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
get_serialized_size(
  const deva_navi_msgs::msg::GroupSegmentProto & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: length
  {
    size_t item_size = sizeof(ros_message.length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: toll_cost
  {
    size_t item_size = sizeof(ros_message.toll_cost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: road_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.road_name.size() + 1);
  // Member: start_segment_index
  {
    size_t item_size = sizeof(ros_message.start_segment_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: segment_count
  {
    size_t item_size = sizeof(ros_message.segment_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_via_point
  {
    size_t item_size = sizeof(ros_message.is_via_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_crucial
  {
    size_t item_size = sizeof(ros_message.is_crucial);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
max_serialized_size_GroupSegmentProto(
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


  // Member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: toll_cost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: road_name
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

  // Member: start_segment_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: segment_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_via_point
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_crucial
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_navi_msgs::msg::GroupSegmentProto;
    is_plain =
      (
      offsetof(DataType, is_crucial) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GroupSegmentProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_navi_msgs::msg::GroupSegmentProto *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GroupSegmentProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_navi_msgs::msg::GroupSegmentProto *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GroupSegmentProto__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_navi_msgs::msg::GroupSegmentProto *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GroupSegmentProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GroupSegmentProto(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GroupSegmentProto__callbacks = {
  "deva_navi_msgs::msg",
  "GroupSegmentProto",
  _GroupSegmentProto__cdr_serialize,
  _GroupSegmentProto__cdr_deserialize,
  _GroupSegmentProto__get_serialized_size,
  _GroupSegmentProto__max_serialized_size
};

static rosidl_message_type_support_t _GroupSegmentProto__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GroupSegmentProto__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_navi_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_navi_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_navi_msgs::msg::GroupSegmentProto>()
{
  return &deva_navi_msgs::msg::typesupport_fastrtps_cpp::_GroupSegmentProto__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_navi_msgs, msg, GroupSegmentProto)() {
  return &deva_navi_msgs::msg::typesupport_fastrtps_cpp::_GroupSegmentProto__handle;
}

#ifdef __cplusplus
}
#endif
