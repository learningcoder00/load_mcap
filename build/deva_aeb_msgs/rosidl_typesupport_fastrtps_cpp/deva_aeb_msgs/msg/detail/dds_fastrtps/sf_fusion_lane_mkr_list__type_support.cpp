// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/SFFusionLaneMkrList.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__struct.hpp"

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
namespace deva_aeb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_aeb_msgs::msg::LaneFstInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::LaneFstInfo &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::LaneFstInfo &,
  size_t current_alignment);
size_t
max_serialized_size_LaneFstInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_aeb_msgs

// functions for deva_aeb_msgs::msg::LaneFstInfo already declared above

namespace deva_aeb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_aeb_msgs::msg::LaneSecInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::LaneSecInfo &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::LaneSecInfo &,
  size_t current_alignment);
size_t
max_serialized_size_LaneSecInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_aeb_msgs

// functions for deva_aeb_msgs::msg::LaneSecInfo already declared above

// functions for deva_aeb_msgs::msg::LaneSecInfo already declared above

// functions for deva_aeb_msgs::msg::LaneSecInfo already declared above

namespace deva_aeb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_aeb_msgs::msg::RearLaneInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::RearLaneInfo &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::RearLaneInfo &,
  size_t current_alignment);
size_t
max_serialized_size_RearLaneInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_aeb_msgs

// functions for deva_aeb_msgs::msg::RearLaneInfo already declared above

// functions for deva_aeb_msgs::msg::RearLaneInfo already declared above

// functions for deva_aeb_msgs::msg::RearLaneInfo already declared above

// functions for deva_aeb_msgs::msg::RearLaneInfo already declared above

// functions for deva_aeb_msgs::msg::RearLaneInfo already declared above


namespace deva_aeb_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_serialize(
  const deva_aeb_msgs::msg::SFFusionLaneMkrList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: framenum
  cdr << ros_message.framenum;
  // Member: lanechg
  cdr << ros_message.lanechg;
  // Member: reserved
  cdr << ros_message.reserved;
  // Member: distostopline
  cdr << ros_message.distostopline;
  // Member: clsle
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.clsle,
    cdr);
  // Member: clsri
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.clsri,
    cdr);
  // Member: secclsle
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.secclsle,
    cdr);
  // Member: secclsri
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.secclsri,
    cdr);
  // Member: thiclsle
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.thiclsle,
    cdr);
  // Member: thiclsri
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.thiclsri,
    cdr);
  // Member: rearclsle
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rearclsle,
    cdr);
  // Member: rearclsri
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rearclsri,
    cdr);
  // Member: rearsecclsle
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rearsecclsle,
    cdr);
  // Member: rearsecclsri
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rearsecclsri,
    cdr);
  // Member: rearthiclsle
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rearthiclsle,
    cdr);
  // Member: rearthiclsri
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rearthiclsri,
    cdr);
  // Member: isambiguouslinepatternleft
  cdr << ros_message.isambiguouslinepatternleft;
  // Member: isambiguouslinepatternright
  cdr << ros_message.isambiguouslinepatternright;
  // Member: cmpforvisnyaw
  cdr << ros_message.cmpforvisnyaw;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_aeb_msgs::msg::SFFusionLaneMkrList & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: framenum
  cdr >> ros_message.framenum;

  // Member: lanechg
  cdr >> ros_message.lanechg;

  // Member: reserved
  cdr >> ros_message.reserved;

  // Member: distostopline
  cdr >> ros_message.distostopline;

  // Member: clsle
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.clsle);

  // Member: clsri
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.clsri);

  // Member: secclsle
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.secclsle);

  // Member: secclsri
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.secclsri);

  // Member: thiclsle
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.thiclsle);

  // Member: thiclsri
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.thiclsri);

  // Member: rearclsle
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rearclsle);

  // Member: rearclsri
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rearclsri);

  // Member: rearsecclsle
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rearsecclsle);

  // Member: rearsecclsri
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rearsecclsri);

  // Member: rearthiclsle
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rearthiclsle);

  // Member: rearthiclsri
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rearthiclsri);

  // Member: isambiguouslinepatternleft
  cdr >> ros_message.isambiguouslinepatternleft;

  // Member: isambiguouslinepatternright
  cdr >> ros_message.isambiguouslinepatternright;

  // Member: cmpforvisnyaw
  cdr >> ros_message.cmpforvisnyaw;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
get_serialized_size(
  const deva_aeb_msgs::msg::SFFusionLaneMkrList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: framenum
  {
    size_t item_size = sizeof(ros_message.framenum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanechg
  {
    size_t item_size = sizeof(ros_message.lanechg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved
  {
    size_t item_size = sizeof(ros_message.reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distostopline
  {
    size_t item_size = sizeof(ros_message.distostopline);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: clsle

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.clsle, current_alignment);
  // Member: clsri

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.clsri, current_alignment);
  // Member: secclsle

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.secclsle, current_alignment);
  // Member: secclsri

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.secclsri, current_alignment);
  // Member: thiclsle

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.thiclsle, current_alignment);
  // Member: thiclsri

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.thiclsri, current_alignment);
  // Member: rearclsle

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rearclsle, current_alignment);
  // Member: rearclsri

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rearclsri, current_alignment);
  // Member: rearsecclsle

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rearsecclsle, current_alignment);
  // Member: rearsecclsri

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rearsecclsri, current_alignment);
  // Member: rearthiclsle

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rearthiclsle, current_alignment);
  // Member: rearthiclsri

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rearthiclsri, current_alignment);
  // Member: isambiguouslinepatternleft
  {
    size_t item_size = sizeof(ros_message.isambiguouslinepatternleft);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isambiguouslinepatternright
  {
    size_t item_size = sizeof(ros_message.isambiguouslinepatternright);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cmpforvisnyaw
  {
    size_t item_size = sizeof(ros_message.cmpforvisnyaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
max_serialized_size_SFFusionLaneMkrList(
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


  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: framenum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lanechg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reserved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: distostopline
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: clsle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneFstInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: clsri
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneFstInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: secclsle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneSecInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: secclsri
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneSecInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: thiclsle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneSecInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: thiclsri
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneSecInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rearclsle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RearLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rearclsri
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RearLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rearsecclsle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RearLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rearsecclsri
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RearLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rearthiclsle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RearLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rearthiclsri
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RearLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: isambiguouslinepatternleft
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: isambiguouslinepatternright
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cmpforvisnyaw
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
    using DataType = deva_aeb_msgs::msg::SFFusionLaneMkrList;
    is_plain =
      (
      offsetof(DataType, cmpforvisnyaw) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SFFusionLaneMkrList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFFusionLaneMkrList *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SFFusionLaneMkrList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_aeb_msgs::msg::SFFusionLaneMkrList *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SFFusionLaneMkrList__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFFusionLaneMkrList *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SFFusionLaneMkrList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SFFusionLaneMkrList(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SFFusionLaneMkrList__callbacks = {
  "deva_aeb_msgs::msg",
  "SFFusionLaneMkrList",
  _SFFusionLaneMkrList__cdr_serialize,
  _SFFusionLaneMkrList__cdr_deserialize,
  _SFFusionLaneMkrList__get_serialized_size,
  _SFFusionLaneMkrList__max_serialized_size
};

static rosidl_message_type_support_t _SFFusionLaneMkrList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SFFusionLaneMkrList__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_aeb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_aeb_msgs::msg::SFFusionLaneMkrList>()
{
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFFusionLaneMkrList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_aeb_msgs, msg, SFFusionLaneMkrList)() {
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFFusionLaneMkrList__handle;
}

#ifdef __cplusplus
}
#endif
