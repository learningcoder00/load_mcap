// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/EhpStub.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__functions.h"
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


using _EhpStub__ros_msg_type = deva_gaode_routing_msgs__msg__EhpStub;

static bool _EhpStub__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EhpStub__ros_msg_type * ros_message = static_cast<const _EhpStub__ros_msg_type *>(untyped_ros_message);
  // Field name: stub_offset
  {
    cdr << ros_message->stub_offset;
  }

  // Field name: stub_msg_type
  {
    cdr << ros_message->stub_msg_type;
  }

  // Field name: stub_path_idx
  {
    cdr << ros_message->stub_path_idx;
  }

  // Field name: stub_cyc_cnt
  {
    cdr << ros_message->stub_cyc_cnt;
  }

  // Field name: stub_update
  {
    cdr << ros_message->stub_update;
  }

  // Field name: stub_retr
  {
    cdr << ros_message->stub_retr;
  }

  // Field name: stub_stub_path_idx
  {
    cdr << ros_message->stub_stub_path_idx;
  }

  // Field name: stub_func_road_class
  {
    cdr << ros_message->stub_func_road_class;
  }

  // Field name: stub_rel_probb
  {
    cdr << ros_message->stub_rel_probb;
  }

  // Field name: stub_form_of_way
  {
    cdr << ros_message->stub_form_of_way;
  }

  // Field name: stub_cmplx_insct
  {
    cdr << ros_message->stub_cmplx_insct;
  }

  // Field name: stub_part_of_calc_route
  {
    cdr << ros_message->stub_part_of_calc_route;
  }

  // Field name: stub_turn_angl
  {
    cdr << ros_message->stub_turn_angl;
  }

  // Field name: stub_num_of_lane_drv_dir
  {
    cdr << ros_message->stub_num_of_lane_drv_dir;
  }

  // Field name: stub_num_of_lane_opp_dir
  {
    cdr << ros_message->stub_num_of_lane_opp_dir;
  }

  // Field name: stub_rt_of_way
  {
    cdr << ros_message->stub_rt_of_way;
  }

  // Field name: stub_last_stub
  {
    cdr << ros_message->stub_last_stub;
  }

  // Field name: stub_relative_offset
  {
    cdr << ros_message->stub_relative_offset;
  }

  return true;
}

static bool _EhpStub__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EhpStub__ros_msg_type * ros_message = static_cast<_EhpStub__ros_msg_type *>(untyped_ros_message);
  // Field name: stub_offset
  {
    cdr >> ros_message->stub_offset;
  }

  // Field name: stub_msg_type
  {
    cdr >> ros_message->stub_msg_type;
  }

  // Field name: stub_path_idx
  {
    cdr >> ros_message->stub_path_idx;
  }

  // Field name: stub_cyc_cnt
  {
    cdr >> ros_message->stub_cyc_cnt;
  }

  // Field name: stub_update
  {
    cdr >> ros_message->stub_update;
  }

  // Field name: stub_retr
  {
    cdr >> ros_message->stub_retr;
  }

  // Field name: stub_stub_path_idx
  {
    cdr >> ros_message->stub_stub_path_idx;
  }

  // Field name: stub_func_road_class
  {
    cdr >> ros_message->stub_func_road_class;
  }

  // Field name: stub_rel_probb
  {
    cdr >> ros_message->stub_rel_probb;
  }

  // Field name: stub_form_of_way
  {
    cdr >> ros_message->stub_form_of_way;
  }

  // Field name: stub_cmplx_insct
  {
    cdr >> ros_message->stub_cmplx_insct;
  }

  // Field name: stub_part_of_calc_route
  {
    cdr >> ros_message->stub_part_of_calc_route;
  }

  // Field name: stub_turn_angl
  {
    cdr >> ros_message->stub_turn_angl;
  }

  // Field name: stub_num_of_lane_drv_dir
  {
    cdr >> ros_message->stub_num_of_lane_drv_dir;
  }

  // Field name: stub_num_of_lane_opp_dir
  {
    cdr >> ros_message->stub_num_of_lane_opp_dir;
  }

  // Field name: stub_rt_of_way
  {
    cdr >> ros_message->stub_rt_of_way;
  }

  // Field name: stub_last_stub
  {
    cdr >> ros_message->stub_last_stub;
  }

  // Field name: stub_relative_offset
  {
    cdr >> ros_message->stub_relative_offset;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__EhpStub(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EhpStub__ros_msg_type * ros_message = static_cast<const _EhpStub__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stub_offset
  {
    size_t item_size = sizeof(ros_message->stub_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_msg_type
  {
    size_t item_size = sizeof(ros_message->stub_msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_path_idx
  {
    size_t item_size = sizeof(ros_message->stub_path_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_cyc_cnt
  {
    size_t item_size = sizeof(ros_message->stub_cyc_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_update
  {
    size_t item_size = sizeof(ros_message->stub_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_retr
  {
    size_t item_size = sizeof(ros_message->stub_retr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_stub_path_idx
  {
    size_t item_size = sizeof(ros_message->stub_stub_path_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_func_road_class
  {
    size_t item_size = sizeof(ros_message->stub_func_road_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_rel_probb
  {
    size_t item_size = sizeof(ros_message->stub_rel_probb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_form_of_way
  {
    size_t item_size = sizeof(ros_message->stub_form_of_way);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_cmplx_insct
  {
    size_t item_size = sizeof(ros_message->stub_cmplx_insct);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_part_of_calc_route
  {
    size_t item_size = sizeof(ros_message->stub_part_of_calc_route);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_turn_angl
  {
    size_t item_size = sizeof(ros_message->stub_turn_angl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_num_of_lane_drv_dir
  {
    size_t item_size = sizeof(ros_message->stub_num_of_lane_drv_dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_num_of_lane_opp_dir
  {
    size_t item_size = sizeof(ros_message->stub_num_of_lane_opp_dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_rt_of_way
  {
    size_t item_size = sizeof(ros_message->stub_rt_of_way);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_last_stub
  {
    size_t item_size = sizeof(ros_message->stub_last_stub);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stub_relative_offset
  {
    size_t item_size = sizeof(ros_message->stub_relative_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EhpStub__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__EhpStub(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__EhpStub(
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

  // member: stub_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: stub_msg_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_path_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_cyc_cnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_update
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_retr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_stub_path_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_func_road_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_rel_probb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stub_form_of_way
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_cmplx_insct
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_part_of_calc_route
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_turn_angl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stub_num_of_lane_drv_dir
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_num_of_lane_opp_dir
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_rt_of_way
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_last_stub
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stub_relative_offset
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
    using DataType = deva_gaode_routing_msgs__msg__EhpStub;
    is_plain =
      (
      offsetof(DataType, stub_relative_offset) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EhpStub__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__EhpStub(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EhpStub = {
  "deva_gaode_routing_msgs::msg",
  "EhpStub",
  _EhpStub__cdr_serialize,
  _EhpStub__cdr_deserialize,
  _EhpStub__get_serialized_size,
  _EhpStub__max_serialized_size
};

static rosidl_message_type_support_t _EhpStub__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EhpStub,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpStub)() {
  return &_EhpStub__type_support;
}

#if defined(__cplusplus)
}
#endif
