// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/SFRoadPpty.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_serialize(
  const deva_aeb_msgs::msg::SFRoadPpty & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: framenum
  cdr << ros_message.framenum;
  // Member: lanewidth
  cdr << ros_message.lanewidth;
  // Member: offslat
  cdr << ros_message.offslat;
  // Member: agdir
  cdr << ros_message.agdir;
  // Member: crvt
  cdr << ros_message.crvt;
  // Member: crvtrate
  {
    cdr << ros_message.crvtrate;
  }
  // Member: crvtratevalidsize
  cdr << ros_message.crvtratevalidsize;
  // Member: seglen
  {
    cdr << ros_message.seglen;
  }
  // Member: seglenvalidsize
  cdr << ros_message.seglenvalidsize;
  // Member: strtd
  cdr << ros_message.strtd;
  // Member: vld
  cdr << ros_message.vld;
  // Member: reserved
  {
    cdr << ros_message.reserved;
  }
  // Member: titohiqly
  {
    cdr << ros_message.titohiqly;
  }
  // Member: titohiqlyvalidsize
  cdr << ros_message.titohiqlyvalidsize;
  // Member: objidtitohiqly
  {
    cdr << ros_message.objidtitohiqly;
  }
  // Member: objidtitohiqlyvalidsize
  cdr << ros_message.objidtitohiqlyvalidsize;
  // Member: distancewithlowconfidence
  cdr << ros_message.distancewithlowconfidence;
  // Member: distancewithhiahconfidence
  cdr << ros_message.distancewithhiahconfidence;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_aeb_msgs::msg::SFRoadPpty & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: framenum
  cdr >> ros_message.framenum;

  // Member: lanewidth
  cdr >> ros_message.lanewidth;

  // Member: offslat
  cdr >> ros_message.offslat;

  // Member: agdir
  cdr >> ros_message.agdir;

  // Member: crvt
  cdr >> ros_message.crvt;

  // Member: crvtrate
  {
    cdr >> ros_message.crvtrate;
  }

  // Member: crvtratevalidsize
  cdr >> ros_message.crvtratevalidsize;

  // Member: seglen
  {
    cdr >> ros_message.seglen;
  }

  // Member: seglenvalidsize
  cdr >> ros_message.seglenvalidsize;

  // Member: strtd
  cdr >> ros_message.strtd;

  // Member: vld
  cdr >> ros_message.vld;

  // Member: reserved
  {
    cdr >> ros_message.reserved;
  }

  // Member: titohiqly
  {
    cdr >> ros_message.titohiqly;
  }

  // Member: titohiqlyvalidsize
  cdr >> ros_message.titohiqlyvalidsize;

  // Member: objidtitohiqly
  {
    cdr >> ros_message.objidtitohiqly;
  }

  // Member: objidtitohiqlyvalidsize
  cdr >> ros_message.objidtitohiqlyvalidsize;

  // Member: distancewithlowconfidence
  cdr >> ros_message.distancewithlowconfidence;

  // Member: distancewithhiahconfidence
  cdr >> ros_message.distancewithhiahconfidence;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
get_serialized_size(
  const deva_aeb_msgs::msg::SFRoadPpty & ros_message,
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
  // Member: lanewidth
  {
    size_t item_size = sizeof(ros_message.lanewidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offslat
  {
    size_t item_size = sizeof(ros_message.offslat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: agdir
  {
    size_t item_size = sizeof(ros_message.agdir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crvt
  {
    size_t item_size = sizeof(ros_message.crvt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crvtrate
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.crvtrate[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crvtratevalidsize
  {
    size_t item_size = sizeof(ros_message.crvtratevalidsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seglen
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.seglen[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seglenvalidsize
  {
    size_t item_size = sizeof(ros_message.seglenvalidsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: strtd
  {
    size_t item_size = sizeof(ros_message.strtd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vld
  {
    size_t item_size = sizeof(ros_message.vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.reserved[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: titohiqly
  {
    size_t array_size = 32;
    size_t item_size = sizeof(ros_message.titohiqly[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: titohiqlyvalidsize
  {
    size_t item_size = sizeof(ros_message.titohiqlyvalidsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: objidtitohiqly
  {
    size_t array_size = 32;
    size_t item_size = sizeof(ros_message.objidtitohiqly[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: objidtitohiqlyvalidsize
  {
    size_t item_size = sizeof(ros_message.objidtitohiqlyvalidsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distancewithlowconfidence
  {
    size_t item_size = sizeof(ros_message.distancewithlowconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distancewithhiahconfidence
  {
    size_t item_size = sizeof(ros_message.distancewithhiahconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
max_serialized_size_SFRoadPpty(
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

  // Member: lanewidth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: offslat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: agdir
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: crvt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: crvtrate
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: crvtratevalidsize
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: seglen
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: seglenvalidsize
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: strtd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reserved
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: titohiqly
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: titohiqlyvalidsize
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: objidtitohiqly
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: objidtitohiqlyvalidsize
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: distancewithlowconfidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: distancewithhiahconfidence
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
    using DataType = deva_aeb_msgs::msg::SFRoadPpty;
    is_plain =
      (
      offsetof(DataType, distancewithhiahconfidence) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SFRoadPpty__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFRoadPpty *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SFRoadPpty__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_aeb_msgs::msg::SFRoadPpty *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SFRoadPpty__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFRoadPpty *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SFRoadPpty__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SFRoadPpty(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SFRoadPpty__callbacks = {
  "deva_aeb_msgs::msg",
  "SFRoadPpty",
  _SFRoadPpty__cdr_serialize,
  _SFRoadPpty__cdr_deserialize,
  _SFRoadPpty__get_serialized_size,
  _SFRoadPpty__max_serialized_size
};

static rosidl_message_type_support_t _SFRoadPpty__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SFRoadPpty__callbacks,
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
get_message_type_support_handle<deva_aeb_msgs::msg::SFRoadPpty>()
{
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFRoadPpty__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_aeb_msgs, msg, SFRoadPpty)() {
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFRoadPpty__handle;
}

#ifdef __cplusplus
}
#endif
