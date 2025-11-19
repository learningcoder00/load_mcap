// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/SFObjInfo.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_obj_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_aeb_msgs/msg/detail/sf_obj_info__struct.hpp"

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
  const deva_aeb_msgs::msg::SFObjInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: length
  cdr << ros_message.length;
  // Member: width
  cdr << ros_message.width;
  // Member: hei
  cdr << ros_message.hei;
  // Member: dstlatfrommidoflaneself
  cdr << ros_message.dstlatfrommidoflaneself;
  // Member: typ
  cdr << ros_message.typ;
  // Member: sidenear
  cdr << ros_message.sidenear;
  // Member: indcrturn
  cdr << ros_message.indcrturn;
  // Member: indcrbrkli
  cdr << ros_message.indcrbrkli;
  // Member: indcrhzrdli
  cdr << ros_message.indcrhzrdli;
  // Member: mtnpat
  cdr << ros_message.mtnpat;
  // Member: mtnpathist
  cdr << ros_message.mtnpathist;
  // Member: fusnsrcraw
  cdr << ros_message.fusnsrcraw;
  // Member: clisnsideradarctrlwarnqly
  cdr << ros_message.clisnsideradarctrlwarnqly;
  // Member: clisnsideradarctrlbrkqly
  cdr << ros_message.clisnsideradarctrlbrkqly;
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
  deva_aeb_msgs::msg::SFObjInfo & ros_message)
{
  // Member: length
  cdr >> ros_message.length;

  // Member: width
  cdr >> ros_message.width;

  // Member: hei
  cdr >> ros_message.hei;

  // Member: dstlatfrommidoflaneself
  cdr >> ros_message.dstlatfrommidoflaneself;

  // Member: typ
  cdr >> ros_message.typ;

  // Member: sidenear
  cdr >> ros_message.sidenear;

  // Member: indcrturn
  cdr >> ros_message.indcrturn;

  // Member: indcrbrkli
  cdr >> ros_message.indcrbrkli;

  // Member: indcrhzrdli
  cdr >> ros_message.indcrhzrdli;

  // Member: mtnpat
  cdr >> ros_message.mtnpat;

  // Member: mtnpathist
  cdr >> ros_message.mtnpathist;

  // Member: fusnsrcraw
  cdr >> ros_message.fusnsrcraw;

  // Member: clisnsideradarctrlwarnqly
  cdr >> ros_message.clisnsideradarctrlwarnqly;

  // Member: clisnsideradarctrlbrkqly
  cdr >> ros_message.clisnsideradarctrlbrkqly;

  // Member: reserved
  {
    cdr >> ros_message.reserved;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
get_serialized_size(
  const deva_aeb_msgs::msg::SFObjInfo & ros_message,
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
  // Member: width
  {
    size_t item_size = sizeof(ros_message.width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hei
  {
    size_t item_size = sizeof(ros_message.hei);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dstlatfrommidoflaneself
  {
    size_t item_size = sizeof(ros_message.dstlatfrommidoflaneself);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: typ
  {
    size_t item_size = sizeof(ros_message.typ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sidenear
  {
    size_t item_size = sizeof(ros_message.sidenear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: indcrturn
  {
    size_t item_size = sizeof(ros_message.indcrturn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: indcrbrkli
  {
    size_t item_size = sizeof(ros_message.indcrbrkli);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: indcrhzrdli
  {
    size_t item_size = sizeof(ros_message.indcrhzrdli);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mtnpat
  {
    size_t item_size = sizeof(ros_message.mtnpat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mtnpathist
  {
    size_t item_size = sizeof(ros_message.mtnpathist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fusnsrcraw
  {
    size_t item_size = sizeof(ros_message.fusnsrcraw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: clisnsideradarctrlwarnqly
  {
    size_t item_size = sizeof(ros_message.clisnsideradarctrlwarnqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: clisnsideradarctrlbrkqly
  {
    size_t item_size = sizeof(ros_message.clisnsideradarctrlbrkqly);
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

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
max_serialized_size_SFObjInfo(
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

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hei
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dstlatfrommidoflaneself
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: typ
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sidenear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: indcrturn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: indcrbrkli
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: indcrhzrdli
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mtnpat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mtnpathist
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fusnsrcraw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: clisnsideradarctrlwarnqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: clisnsideradarctrlbrkqly
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_aeb_msgs::msg::SFObjInfo;
    is_plain =
      (
      offsetof(DataType, reserved) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SFObjInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFObjInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SFObjInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_aeb_msgs::msg::SFObjInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SFObjInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFObjInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SFObjInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SFObjInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SFObjInfo__callbacks = {
  "deva_aeb_msgs::msg",
  "SFObjInfo",
  _SFObjInfo__cdr_serialize,
  _SFObjInfo__cdr_deserialize,
  _SFObjInfo__get_serialized_size,
  _SFObjInfo__max_serialized_size
};

static rosidl_message_type_support_t _SFObjInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SFObjInfo__callbacks,
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
get_message_type_support_handle<deva_aeb_msgs::msg::SFObjInfo>()
{
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFObjInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_aeb_msgs, msg, SFObjInfo)() {
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFObjInfo__handle;
}

#ifdef __cplusplus
}
#endif
