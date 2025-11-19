// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/EhpProfileShort.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__functions.h"
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


using _EhpProfileShort__ros_msg_type = deva_gaode_routing_msgs__msg__EhpProfileShort;

static bool _EhpProfileShort__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EhpProfileShort__ros_msg_type * ros_message = static_cast<const _EhpProfileShort__ros_msg_type *>(untyped_ros_message);
  // Field name: prof_short_offset
  {
    cdr << ros_message->prof_short_offset;
  }

  // Field name: prof_short_msg_type
  {
    cdr << ros_message->prof_short_msg_type;
  }

  // Field name: prof_short_path_idx
  {
    cdr << ros_message->prof_short_path_idx;
  }

  // Field name: prof_short_cyc_cnt
  {
    cdr << ros_message->prof_short_cyc_cnt;
  }

  // Field name: prof_short_update
  {
    cdr << ros_message->prof_short_update;
  }

  // Field name: prof_short_retr
  {
    cdr << ros_message->prof_short_retr;
  }

  // Field name: prof_short_ctrl_point
  {
    cdr << ros_message->prof_short_ctrl_point;
  }

  // Field name: prof_short_prof_type
  {
    cdr << ros_message->prof_short_prof_type;
  }

  // Field name: prof_short_dist1
  {
    cdr << ros_message->prof_short_dist1;
  }

  // Field name: prof_short_accur_class
  {
    cdr << ros_message->prof_short_accur_class;
  }

  // Field name: prof_short_value0
  {
    cdr << ros_message->prof_short_value0;
  }

  // Field name: prof_short_value1
  {
    cdr << ros_message->prof_short_value1;
  }

  // Field name: prof_short_relative_offset
  {
    cdr << ros_message->prof_short_relative_offset;
  }

  // Field name: prof_short_curve_road
  {
    cdr << ros_message->prof_short_curve_road;
  }

  return true;
}

static bool _EhpProfileShort__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EhpProfileShort__ros_msg_type * ros_message = static_cast<_EhpProfileShort__ros_msg_type *>(untyped_ros_message);
  // Field name: prof_short_offset
  {
    cdr >> ros_message->prof_short_offset;
  }

  // Field name: prof_short_msg_type
  {
    cdr >> ros_message->prof_short_msg_type;
  }

  // Field name: prof_short_path_idx
  {
    cdr >> ros_message->prof_short_path_idx;
  }

  // Field name: prof_short_cyc_cnt
  {
    cdr >> ros_message->prof_short_cyc_cnt;
  }

  // Field name: prof_short_update
  {
    cdr >> ros_message->prof_short_update;
  }

  // Field name: prof_short_retr
  {
    cdr >> ros_message->prof_short_retr;
  }

  // Field name: prof_short_ctrl_point
  {
    cdr >> ros_message->prof_short_ctrl_point;
  }

  // Field name: prof_short_prof_type
  {
    cdr >> ros_message->prof_short_prof_type;
  }

  // Field name: prof_short_dist1
  {
    cdr >> ros_message->prof_short_dist1;
  }

  // Field name: prof_short_accur_class
  {
    cdr >> ros_message->prof_short_accur_class;
  }

  // Field name: prof_short_value0
  {
    cdr >> ros_message->prof_short_value0;
  }

  // Field name: prof_short_value1
  {
    cdr >> ros_message->prof_short_value1;
  }

  // Field name: prof_short_relative_offset
  {
    cdr >> ros_message->prof_short_relative_offset;
  }

  // Field name: prof_short_curve_road
  {
    cdr >> ros_message->prof_short_curve_road;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__EhpProfileShort(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EhpProfileShort__ros_msg_type * ros_message = static_cast<const _EhpProfileShort__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name prof_short_offset
  {
    size_t item_size = sizeof(ros_message->prof_short_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_short_msg_type
  {
    size_t item_size = sizeof(ros_message->prof_short_msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_short_path_idx
  {
    size_t item_size = sizeof(ros_message->prof_short_path_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_short_cyc_cnt
  {
    size_t item_size = sizeof(ros_message->prof_short_cyc_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_short_update
  {
    size_t item_size = sizeof(ros_message->prof_short_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_short_retr
  {
    size_t item_size = sizeof(ros_message->prof_short_retr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_short_ctrl_point
  {
    size_t item_size = sizeof(ros_message->prof_short_ctrl_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_short_prof_type
  {
    size_t item_size = sizeof(ros_message->prof_short_prof_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_short_dist1
  {
    size_t item_size = sizeof(ros_message->prof_short_dist1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_short_accur_class
  {
    size_t item_size = sizeof(ros_message->prof_short_accur_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_short_value0
  {
    size_t item_size = sizeof(ros_message->prof_short_value0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_short_value1
  {
    size_t item_size = sizeof(ros_message->prof_short_value1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_short_relative_offset
  {
    size_t item_size = sizeof(ros_message->prof_short_relative_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prof_short_curve_road
  {
    size_t item_size = sizeof(ros_message->prof_short_curve_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EhpProfileShort__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__EhpProfileShort(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__EhpProfileShort(
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

  // member: prof_short_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: prof_short_msg_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prof_short_path_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prof_short_cyc_cnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prof_short_update
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prof_short_retr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prof_short_ctrl_point
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prof_short_prof_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prof_short_dist1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: prof_short_accur_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prof_short_value0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: prof_short_value1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: prof_short_relative_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: prof_short_curve_road
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
    using DataType = deva_gaode_routing_msgs__msg__EhpProfileShort;
    is_plain =
      (
      offsetof(DataType, prof_short_curve_road) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EhpProfileShort__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__EhpProfileShort(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EhpProfileShort = {
  "deva_gaode_routing_msgs::msg",
  "EhpProfileShort",
  _EhpProfileShort__cdr_serialize,
  _EhpProfileShort__cdr_deserialize,
  _EhpProfileShort__get_serialized_size,
  _EhpProfileShort__max_serialized_size
};

static rosidl_message_type_support_t _EhpProfileShort__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EhpProfileShort,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpProfileShort)() {
  return &_EhpProfileShort__type_support;
}

#if defined(__cplusplus)
}
#endif
