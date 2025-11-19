// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/EhpPosition.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_position__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_position__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_position__functions.h"
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


using _EhpPosition__ros_msg_type = deva_gaode_routing_msgs__msg__EhpPosition;

static bool _EhpPosition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EhpPosition__ros_msg_type * ros_message = static_cast<const _EhpPosition__ros_msg_type *>(untyped_ros_message);
  // Field name: posn_offset
  {
    cdr << ros_message->posn_offset;
  }

  // Field name: posn_msg_type
  {
    cdr << ros_message->posn_msg_type;
  }

  // Field name: posn_path_idx
  {
    cdr << ros_message->posn_path_idx;
  }

  // Field name: posn_cyc_cnt
  {
    cdr << ros_message->posn_cyc_cnt;
  }

  // Field name: posn_age
  {
    cdr << ros_message->posn_age;
  }

  // Field name: posn_pos_probb
  {
    cdr << ros_message->posn_pos_probb;
  }

  // Field name: posn_idx
  {
    cdr << ros_message->posn_idx;
  }

  // Field name: posn_spd
  {
    cdr << ros_message->posn_spd;
  }

  // Field name: posn_cur_lane
  {
    cdr << ros_message->posn_cur_lane;
  }

  // Field name: posn_pos_confdc
  {
    cdr << ros_message->posn_pos_confdc;
  }

  // Field name: posn_rehead
  {
    cdr << ros_message->posn_rehead;
  }

  return true;
}

static bool _EhpPosition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EhpPosition__ros_msg_type * ros_message = static_cast<_EhpPosition__ros_msg_type *>(untyped_ros_message);
  // Field name: posn_offset
  {
    cdr >> ros_message->posn_offset;
  }

  // Field name: posn_msg_type
  {
    cdr >> ros_message->posn_msg_type;
  }

  // Field name: posn_path_idx
  {
    cdr >> ros_message->posn_path_idx;
  }

  // Field name: posn_cyc_cnt
  {
    cdr >> ros_message->posn_cyc_cnt;
  }

  // Field name: posn_age
  {
    cdr >> ros_message->posn_age;
  }

  // Field name: posn_pos_probb
  {
    cdr >> ros_message->posn_pos_probb;
  }

  // Field name: posn_idx
  {
    cdr >> ros_message->posn_idx;
  }

  // Field name: posn_spd
  {
    cdr >> ros_message->posn_spd;
  }

  // Field name: posn_cur_lane
  {
    cdr >> ros_message->posn_cur_lane;
  }

  // Field name: posn_pos_confdc
  {
    cdr >> ros_message->posn_pos_confdc;
  }

  // Field name: posn_rehead
  {
    cdr >> ros_message->posn_rehead;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__EhpPosition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EhpPosition__ros_msg_type * ros_message = static_cast<const _EhpPosition__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name posn_offset
  {
    size_t item_size = sizeof(ros_message->posn_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posn_msg_type
  {
    size_t item_size = sizeof(ros_message->posn_msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posn_path_idx
  {
    size_t item_size = sizeof(ros_message->posn_path_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posn_cyc_cnt
  {
    size_t item_size = sizeof(ros_message->posn_cyc_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posn_age
  {
    size_t item_size = sizeof(ros_message->posn_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posn_pos_probb
  {
    size_t item_size = sizeof(ros_message->posn_pos_probb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posn_idx
  {
    size_t item_size = sizeof(ros_message->posn_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posn_spd
  {
    size_t item_size = sizeof(ros_message->posn_spd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posn_cur_lane
  {
    size_t item_size = sizeof(ros_message->posn_cur_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posn_pos_confdc
  {
    size_t item_size = sizeof(ros_message->posn_pos_confdc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posn_rehead
  {
    size_t item_size = sizeof(ros_message->posn_rehead);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EhpPosition__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__EhpPosition(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__EhpPosition(
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

  // member: posn_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: posn_msg_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: posn_path_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: posn_cyc_cnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: posn_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: posn_pos_probb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: posn_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: posn_spd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: posn_cur_lane
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: posn_pos_confdc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: posn_rehead
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
    using DataType = deva_gaode_routing_msgs__msg__EhpPosition;
    is_plain =
      (
      offsetof(DataType, posn_rehead) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EhpPosition__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__EhpPosition(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EhpPosition = {
  "deva_gaode_routing_msgs::msg",
  "EhpPosition",
  _EhpPosition__cdr_serialize,
  _EhpPosition__cdr_deserialize,
  _EhpPosition__get_serialized_size,
  _EhpPosition__max_serialized_size
};

static rosidl_message_type_support_t _EhpPosition__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EhpPosition,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpPosition)() {
  return &_EhpPosition__type_support;
}

#if defined(__cplusplus)
}
#endif
