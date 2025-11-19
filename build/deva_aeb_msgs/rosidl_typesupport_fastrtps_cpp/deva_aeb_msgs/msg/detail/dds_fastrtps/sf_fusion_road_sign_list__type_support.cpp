// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/SFFusionRoadSignList.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__struct.hpp"

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
  const deva_aeb_msgs::msg::SFStopline &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFStopline &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFStopline &,
  size_t current_alignment);
size_t
max_serialized_size_SFStopline(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_aeb_msgs

namespace deva_aeb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_aeb_msgs::msg::SFCrosswalk &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFCrosswalk &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFCrosswalk &,
  size_t current_alignment);
size_t
max_serialized_size_SFCrosswalk(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_aeb_msgs

namespace deva_aeb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_aeb_msgs::msg::SFRoadArrow &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFRoadArrow &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFRoadArrow &,
  size_t current_alignment);
size_t
max_serialized_size_SFRoadArrow(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_aeb_msgs


namespace deva_aeb_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_serialize(
  const deva_aeb_msgs::msg::SFFusionRoadSignList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sllist
  {
    for (size_t i = 0; i < 8; i++) {
      deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.sllist[i],
        cdr);
    }
  }
  // Member: cwlist
  {
    for (size_t i = 0; i < 4; i++) {
      deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.cwlist[i],
        cdr);
    }
  }
  // Member: ralist
  {
    for (size_t i = 0; i < 8; i++) {
      deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ralist[i],
        cdr);
    }
  }
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: framenum
  cdr << ros_message.framenum;
  // Member: cwcount
  cdr << ros_message.cwcount;
  // Member: racount
  cdr << ros_message.racount;
  // Member: slvalidsize
  cdr << ros_message.slvalidsize;
  // Member: cwvalidsize
  cdr << ros_message.cwvalidsize;
  // Member: ravalidsize
  cdr << ros_message.ravalidsize;
  // Member: reserved
  {
    cdr << ros_message.reserved;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_aeb_msgs::msg::SFFusionRoadSignList & ros_message)
{
  // Member: sllist
  {
    for (size_t i = 0; i < 8; i++) {
      deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.sllist[i]);
    }
  }

  // Member: cwlist
  {
    for (size_t i = 0; i < 4; i++) {
      deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.cwlist[i]);
    }
  }

  // Member: ralist
  {
    for (size_t i = 0; i < 8; i++) {
      deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.ralist[i]);
    }
  }

  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: framenum
  cdr >> ros_message.framenum;

  // Member: cwcount
  cdr >> ros_message.cwcount;

  // Member: racount
  cdr >> ros_message.racount;

  // Member: slvalidsize
  cdr >> ros_message.slvalidsize;

  // Member: cwvalidsize
  cdr >> ros_message.cwvalidsize;

  // Member: ravalidsize
  cdr >> ros_message.ravalidsize;

  // Member: reserved
  {
    cdr >> ros_message.reserved;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
get_serialized_size(
  const deva_aeb_msgs::msg::SFFusionRoadSignList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sllist
  {
    size_t array_size = 8;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.sllist[index], current_alignment);
    }
  }
  // Member: cwlist
  {
    size_t array_size = 4;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.cwlist[index], current_alignment);
    }
  }
  // Member: ralist
  {
    size_t array_size = 8;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ralist[index], current_alignment);
    }
  }
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
  // Member: cwcount
  {
    size_t item_size = sizeof(ros_message.cwcount);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: racount
  {
    size_t item_size = sizeof(ros_message.racount);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slvalidsize
  {
    size_t item_size = sizeof(ros_message.slvalidsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cwvalidsize
  {
    size_t item_size = sizeof(ros_message.cwvalidsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ravalidsize
  {
    size_t item_size = sizeof(ros_message.ravalidsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.reserved[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
max_serialized_size_SFFusionRoadSignList(
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


  // Member: sllist
  {
    size_t array_size = 8;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFStopline(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cwlist
  {
    size_t array_size = 4;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFCrosswalk(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ralist
  {
    size_t array_size = 8;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFRoadArrow(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

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

  // Member: cwcount
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: racount
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: slvalidsize
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cwvalidsize
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ravalidsize
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reserved
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_aeb_msgs::msg::SFFusionRoadSignList;
    is_plain =
      (
      offsetof(DataType, reserved) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SFFusionRoadSignList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFFusionRoadSignList *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SFFusionRoadSignList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_aeb_msgs::msg::SFFusionRoadSignList *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SFFusionRoadSignList__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFFusionRoadSignList *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SFFusionRoadSignList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SFFusionRoadSignList(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SFFusionRoadSignList__callbacks = {
  "deva_aeb_msgs::msg",
  "SFFusionRoadSignList",
  _SFFusionRoadSignList__cdr_serialize,
  _SFFusionRoadSignList__cdr_deserialize,
  _SFFusionRoadSignList__get_serialized_size,
  _SFFusionRoadSignList__max_serialized_size
};

static rosidl_message_type_support_t _SFFusionRoadSignList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SFFusionRoadSignList__callbacks,
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
get_message_type_support_handle<deva_aeb_msgs::msg::SFFusionRoadSignList>()
{
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFFusionRoadSignList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_aeb_msgs, msg, SFFusionRoadSignList)() {
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFFusionRoadSignList__handle;
}

#ifdef __cplusplus
}
#endif
