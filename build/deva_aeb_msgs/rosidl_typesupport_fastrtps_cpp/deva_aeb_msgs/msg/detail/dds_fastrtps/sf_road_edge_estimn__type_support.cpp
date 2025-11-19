// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/SFRoadEdgeEstimn.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_road_edge_estimn__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_aeb_msgs/msg/detail/sf_road_edge_estimn__struct.hpp"

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
  const deva_aeb_msgs::msg::SFRoadEdgeEstimn & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: constcoeff
  cdr << ros_message.constcoeff;
  // Member: firstordercoeff
  cdr << ros_message.firstordercoeff;
  // Member: secondordercoeff
  cdr << ros_message.secondordercoeff;
  // Member: thirdordercoeff
  cdr << ros_message.thirdordercoeff;
  // Member: dstlgttoend
  cdr << ros_message.dstlgttoend;
  // Member: startpointposx
  cdr << ros_message.startpointposx;
  // Member: startpointposy
  cdr << ros_message.startpointposy;
  // Member: endpointposx
  cdr << ros_message.endpointposx;
  // Member: endpointposy
  cdr << ros_message.endpointposy;
  // Member: extendendpointposx
  cdr << ros_message.extendendpointposx;
  // Member: extendendpointposy
  cdr << ros_message.extendendpointposy;
  // Member: overrideflag
  cdr << ros_message.overrideflag;
  // Member: type
  cdr << ros_message.type;
  // Member: parseconfi
  cdr << ros_message.parseconfi;
  // Member: tracestatus
  cdr << ros_message.tracestatus;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_aeb_msgs::msg::SFRoadEdgeEstimn & ros_message)
{
  // Member: constcoeff
  cdr >> ros_message.constcoeff;

  // Member: firstordercoeff
  cdr >> ros_message.firstordercoeff;

  // Member: secondordercoeff
  cdr >> ros_message.secondordercoeff;

  // Member: thirdordercoeff
  cdr >> ros_message.thirdordercoeff;

  // Member: dstlgttoend
  cdr >> ros_message.dstlgttoend;

  // Member: startpointposx
  cdr >> ros_message.startpointposx;

  // Member: startpointposy
  cdr >> ros_message.startpointposy;

  // Member: endpointposx
  cdr >> ros_message.endpointposx;

  // Member: endpointposy
  cdr >> ros_message.endpointposy;

  // Member: extendendpointposx
  cdr >> ros_message.extendendpointposx;

  // Member: extendendpointposy
  cdr >> ros_message.extendendpointposy;

  // Member: overrideflag
  cdr >> ros_message.overrideflag;

  // Member: type
  cdr >> ros_message.type;

  // Member: parseconfi
  cdr >> ros_message.parseconfi;

  // Member: tracestatus
  cdr >> ros_message.tracestatus;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
get_serialized_size(
  const deva_aeb_msgs::msg::SFRoadEdgeEstimn & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: constcoeff
  {
    size_t item_size = sizeof(ros_message.constcoeff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: firstordercoeff
  {
    size_t item_size = sizeof(ros_message.firstordercoeff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: secondordercoeff
  {
    size_t item_size = sizeof(ros_message.secondordercoeff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thirdordercoeff
  {
    size_t item_size = sizeof(ros_message.thirdordercoeff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dstlgttoend
  {
    size_t item_size = sizeof(ros_message.dstlgttoend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: startpointposx
  {
    size_t item_size = sizeof(ros_message.startpointposx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: startpointposy
  {
    size_t item_size = sizeof(ros_message.startpointposy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: endpointposx
  {
    size_t item_size = sizeof(ros_message.endpointposx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: endpointposy
  {
    size_t item_size = sizeof(ros_message.endpointposy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extendendpointposx
  {
    size_t item_size = sizeof(ros_message.extendendpointposx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extendendpointposy
  {
    size_t item_size = sizeof(ros_message.extendendpointposy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: overrideflag
  {
    size_t item_size = sizeof(ros_message.overrideflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: parseconfi
  {
    size_t item_size = sizeof(ros_message.parseconfi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tracestatus
  {
    size_t item_size = sizeof(ros_message.tracestatus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
max_serialized_size_SFRoadEdgeEstimn(
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


  // Member: constcoeff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: firstordercoeff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: secondordercoeff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: thirdordercoeff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dstlgttoend
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: startpointposx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: startpointposy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: endpointposx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: endpointposy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: extendendpointposx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: extendendpointposy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: overrideflag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: parseconfi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tracestatus
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
    using DataType = deva_aeb_msgs::msg::SFRoadEdgeEstimn;
    is_plain =
      (
      offsetof(DataType, tracestatus) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SFRoadEdgeEstimn__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFRoadEdgeEstimn *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SFRoadEdgeEstimn__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_aeb_msgs::msg::SFRoadEdgeEstimn *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SFRoadEdgeEstimn__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFRoadEdgeEstimn *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SFRoadEdgeEstimn__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SFRoadEdgeEstimn(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SFRoadEdgeEstimn__callbacks = {
  "deva_aeb_msgs::msg",
  "SFRoadEdgeEstimn",
  _SFRoadEdgeEstimn__cdr_serialize,
  _SFRoadEdgeEstimn__cdr_deserialize,
  _SFRoadEdgeEstimn__get_serialized_size,
  _SFRoadEdgeEstimn__max_serialized_size
};

static rosidl_message_type_support_t _SFRoadEdgeEstimn__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SFRoadEdgeEstimn__callbacks,
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
get_message_type_support_handle<deva_aeb_msgs::msg::SFRoadEdgeEstimn>()
{
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFRoadEdgeEstimn__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_aeb_msgs, msg, SFRoadEdgeEstimn)() {
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFRoadEdgeEstimn__handle;
}

#ifdef __cplusplus
}
#endif
