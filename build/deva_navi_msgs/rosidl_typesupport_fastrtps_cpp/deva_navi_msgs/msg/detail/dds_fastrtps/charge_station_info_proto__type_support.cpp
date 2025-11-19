// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_navi_msgs:msg/ChargeStationInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__struct.hpp"

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
bool cdr_serialize(
  const deva_navi_msgs::msg::Coord3DDoubleProto &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_navi_msgs::msg::Coord3DDoubleProto &);
size_t get_serialized_size(
  const deva_navi_msgs::msg::Coord3DDoubleProto &,
  size_t current_alignment);
size_t
max_serialized_size_Coord3DDoubleProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_navi_msgs

// functions for deva_navi_msgs::msg::Coord3DDoubleProto already declared above


namespace deva_navi_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
cdr_serialize(
  const deva_navi_msgs::msg::ChargeStationInfoProto & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: segment_idx
  cdr << ros_message.segment_idx;
  // Member: direction
  cdr << ros_message.direction;
  // Member: show
  deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.show,
    cdr);
  // Member: projective
  deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.projective,
    cdr);
  // Member: poi_id
  cdr << ros_message.poi_id;
  // Member: name
  cdr << ros_message.name;
  // Member: brand_name
  cdr << ros_message.brand_name;
  // Member: max_power
  cdr << ros_message.max_power;
  // Member: charge_percent
  cdr << ros_message.charge_percent;
  // Member: charge_time
  cdr << ros_message.charge_time;
  // Member: remaining_capacity
  cdr << ros_message.remaining_capacity;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_navi_msgs::msg::ChargeStationInfoProto & ros_message)
{
  // Member: segment_idx
  cdr >> ros_message.segment_idx;

  // Member: direction
  cdr >> ros_message.direction;

  // Member: show
  deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.show);

  // Member: projective
  deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.projective);

  // Member: poi_id
  cdr >> ros_message.poi_id;

  // Member: name
  cdr >> ros_message.name;

  // Member: brand_name
  cdr >> ros_message.brand_name;

  // Member: max_power
  cdr >> ros_message.max_power;

  // Member: charge_percent
  cdr >> ros_message.charge_percent;

  // Member: charge_time
  cdr >> ros_message.charge_time;

  // Member: remaining_capacity
  cdr >> ros_message.remaining_capacity;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
get_serialized_size(
  const deva_navi_msgs::msg::ChargeStationInfoProto & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: segment_idx
  {
    size_t item_size = sizeof(ros_message.segment_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: direction
  {
    size_t item_size = sizeof(ros_message.direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: show

  current_alignment +=
    deva_navi_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.show, current_alignment);
  // Member: projective

  current_alignment +=
    deva_navi_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.projective, current_alignment);
  // Member: poi_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.poi_id.size() + 1);
  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: brand_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.brand_name.size() + 1);
  // Member: max_power
  {
    size_t item_size = sizeof(ros_message.max_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: charge_percent
  {
    size_t item_size = sizeof(ros_message.charge_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: charge_time
  {
    size_t item_size = sizeof(ros_message.charge_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remaining_capacity
  {
    size_t item_size = sizeof(ros_message.remaining_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
max_serialized_size_ChargeStationInfoProto(
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


  // Member: segment_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: show
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Coord3DDoubleProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: projective
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Coord3DDoubleProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: poi_id
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

  // Member: name
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

  // Member: brand_name
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

  // Member: max_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: charge_percent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: charge_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: remaining_capacity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_navi_msgs::msg::ChargeStationInfoProto;
    is_plain =
      (
      offsetof(DataType, remaining_capacity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ChargeStationInfoProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_navi_msgs::msg::ChargeStationInfoProto *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ChargeStationInfoProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_navi_msgs::msg::ChargeStationInfoProto *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ChargeStationInfoProto__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_navi_msgs::msg::ChargeStationInfoProto *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ChargeStationInfoProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ChargeStationInfoProto(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ChargeStationInfoProto__callbacks = {
  "deva_navi_msgs::msg",
  "ChargeStationInfoProto",
  _ChargeStationInfoProto__cdr_serialize,
  _ChargeStationInfoProto__cdr_deserialize,
  _ChargeStationInfoProto__get_serialized_size,
  _ChargeStationInfoProto__max_serialized_size
};

static rosidl_message_type_support_t _ChargeStationInfoProto__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ChargeStationInfoProto__callbacks,
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
get_message_type_support_handle<deva_navi_msgs::msg::ChargeStationInfoProto>()
{
  return &deva_navi_msgs::msg::typesupport_fastrtps_cpp::_ChargeStationInfoProto__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_navi_msgs, msg, ChargeStationInfoProto)() {
  return &deva_navi_msgs::msg::typesupport_fastrtps_cpp::_ChargeStationInfoProto__handle;
}

#ifdef __cplusplus
}
#endif
