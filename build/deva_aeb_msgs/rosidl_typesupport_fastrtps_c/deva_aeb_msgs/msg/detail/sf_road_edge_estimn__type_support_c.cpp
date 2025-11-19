// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFRoadEdgeEstimn.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_road_edge_estimn__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_road_edge_estimn__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_road_edge_estimn__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SFRoadEdgeEstimn__ros_msg_type = deva_aeb_msgs__msg__SFRoadEdgeEstimn;

static bool _SFRoadEdgeEstimn__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFRoadEdgeEstimn__ros_msg_type * ros_message = static_cast<const _SFRoadEdgeEstimn__ros_msg_type *>(untyped_ros_message);
  // Field name: constcoeff
  {
    cdr << ros_message->constcoeff;
  }

  // Field name: firstordercoeff
  {
    cdr << ros_message->firstordercoeff;
  }

  // Field name: secondordercoeff
  {
    cdr << ros_message->secondordercoeff;
  }

  // Field name: thirdordercoeff
  {
    cdr << ros_message->thirdordercoeff;
  }

  // Field name: dstlgttoend
  {
    cdr << ros_message->dstlgttoend;
  }

  // Field name: startpointposx
  {
    cdr << ros_message->startpointposx;
  }

  // Field name: startpointposy
  {
    cdr << ros_message->startpointposy;
  }

  // Field name: endpointposx
  {
    cdr << ros_message->endpointposx;
  }

  // Field name: endpointposy
  {
    cdr << ros_message->endpointposy;
  }

  // Field name: extendendpointposx
  {
    cdr << ros_message->extendendpointposx;
  }

  // Field name: extendendpointposy
  {
    cdr << ros_message->extendendpointposy;
  }

  // Field name: overrideflag
  {
    cdr << ros_message->overrideflag;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: parseconfi
  {
    cdr << ros_message->parseconfi;
  }

  // Field name: tracestatus
  {
    cdr << ros_message->tracestatus;
  }

  return true;
}

static bool _SFRoadEdgeEstimn__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFRoadEdgeEstimn__ros_msg_type * ros_message = static_cast<_SFRoadEdgeEstimn__ros_msg_type *>(untyped_ros_message);
  // Field name: constcoeff
  {
    cdr >> ros_message->constcoeff;
  }

  // Field name: firstordercoeff
  {
    cdr >> ros_message->firstordercoeff;
  }

  // Field name: secondordercoeff
  {
    cdr >> ros_message->secondordercoeff;
  }

  // Field name: thirdordercoeff
  {
    cdr >> ros_message->thirdordercoeff;
  }

  // Field name: dstlgttoend
  {
    cdr >> ros_message->dstlgttoend;
  }

  // Field name: startpointposx
  {
    cdr >> ros_message->startpointposx;
  }

  // Field name: startpointposy
  {
    cdr >> ros_message->startpointposy;
  }

  // Field name: endpointposx
  {
    cdr >> ros_message->endpointposx;
  }

  // Field name: endpointposy
  {
    cdr >> ros_message->endpointposy;
  }

  // Field name: extendendpointposx
  {
    cdr >> ros_message->extendendpointposx;
  }

  // Field name: extendendpointposy
  {
    cdr >> ros_message->extendendpointposy;
  }

  // Field name: overrideflag
  {
    cdr >> ros_message->overrideflag;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: parseconfi
  {
    cdr >> ros_message->parseconfi;
  }

  // Field name: tracestatus
  {
    cdr >> ros_message->tracestatus;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFRoadEdgeEstimn(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFRoadEdgeEstimn__ros_msg_type * ros_message = static_cast<const _SFRoadEdgeEstimn__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name constcoeff
  {
    size_t item_size = sizeof(ros_message->constcoeff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name firstordercoeff
  {
    size_t item_size = sizeof(ros_message->firstordercoeff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name secondordercoeff
  {
    size_t item_size = sizeof(ros_message->secondordercoeff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thirdordercoeff
  {
    size_t item_size = sizeof(ros_message->thirdordercoeff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dstlgttoend
  {
    size_t item_size = sizeof(ros_message->dstlgttoend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name startpointposx
  {
    size_t item_size = sizeof(ros_message->startpointposx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name startpointposy
  {
    size_t item_size = sizeof(ros_message->startpointposy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name endpointposx
  {
    size_t item_size = sizeof(ros_message->endpointposx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name endpointposy
  {
    size_t item_size = sizeof(ros_message->endpointposy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extendendpointposx
  {
    size_t item_size = sizeof(ros_message->extendendpointposx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extendendpointposy
  {
    size_t item_size = sizeof(ros_message->extendendpointposy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overrideflag
  {
    size_t item_size = sizeof(ros_message->overrideflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parseconfi
  {
    size_t item_size = sizeof(ros_message->parseconfi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tracestatus
  {
    size_t item_size = sizeof(ros_message->tracestatus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFRoadEdgeEstimn__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFRoadEdgeEstimn(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFRoadEdgeEstimn(
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

  // member: constcoeff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: firstordercoeff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: secondordercoeff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: thirdordercoeff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dstlgttoend
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: startpointposx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: startpointposy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: endpointposx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: endpointposy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: extendendpointposx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: extendendpointposy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: overrideflag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: parseconfi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tracestatus
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
    using DataType = deva_aeb_msgs__msg__SFRoadEdgeEstimn;
    is_plain =
      (
      offsetof(DataType, tracestatus) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFRoadEdgeEstimn__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFRoadEdgeEstimn(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFRoadEdgeEstimn = {
  "deva_aeb_msgs::msg",
  "SFRoadEdgeEstimn",
  _SFRoadEdgeEstimn__cdr_serialize,
  _SFRoadEdgeEstimn__cdr_deserialize,
  _SFRoadEdgeEstimn__get_serialized_size,
  _SFRoadEdgeEstimn__max_serialized_size
};

static rosidl_message_type_support_t _SFRoadEdgeEstimn__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFRoadEdgeEstimn,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFRoadEdgeEstimn)() {
  return &_SFRoadEdgeEstimn__type_support;
}

#if defined(__cplusplus)
}
#endif
