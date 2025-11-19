// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/EhpSegment.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__functions.h"
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


using _EhpSegment__ros_msg_type = deva_gaode_routing_msgs__msg__EhpSegment;

static bool _EhpSegment__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EhpSegment__ros_msg_type * ros_message = static_cast<const _EhpSegment__ros_msg_type *>(untyped_ros_message);
  // Field name: seg_offset
  {
    cdr << ros_message->seg_offset;
  }

  // Field name: seg_msg_type
  {
    cdr << ros_message->seg_msg_type;
  }

  // Field name: seg_path_idx
  {
    cdr << ros_message->seg_path_idx;
  }

  // Field name: seg_cyc_cnt
  {
    cdr << ros_message->seg_cyc_cnt;
  }

  // Field name: seg_update
  {
    cdr << ros_message->seg_update;
  }

  // Field name: seg_retr
  {
    cdr << ros_message->seg_retr;
  }

  // Field name: seg_build_up_area
  {
    cdr << ros_message->seg_build_up_area;
  }

  // Field name: seg_bridge
  {
    cdr << ros_message->seg_bridge;
  }

  // Field name: seg_tunnel
  {
    cdr << ros_message->seg_tunnel;
  }

  // Field name: seg_func_road_class
  {
    cdr << ros_message->seg_func_road_class;
  }

  // Field name: seg_rel_probb
  {
    cdr << ros_message->seg_rel_probb;
  }

  // Field name: seg_form_of_way
  {
    cdr << ros_message->seg_form_of_way;
  }

  // Field name: seg_cmplx_insct
  {
    cdr << ros_message->seg_cmplx_insct;
  }

  // Field name: seg_part_of_calc_route
  {
    cdr << ros_message->seg_part_of_calc_route;
  }

  // Field name: seg_eff_spd_lmt_type
  {
    cdr << ros_message->seg_eff_spd_lmt_type;
  }

  // Field name: seg_eff_spd_lmt
  {
    cdr << ros_message->seg_eff_spd_lmt;
  }

  // Field name: seg_num_of_lane_drv_dir
  {
    cdr << ros_message->seg_num_of_lane_drv_dir;
  }

  // Field name: seg_num_of_lane_opp_dir
  {
    cdr << ros_message->seg_num_of_lane_opp_dir;
  }

  // Field name: seg_divide_road
  {
    cdr << ros_message->seg_divide_road;
  }

  // Field name: seg_relative_offset
  {
    cdr << ros_message->seg_relative_offset;
  }

  return true;
}

static bool _EhpSegment__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EhpSegment__ros_msg_type * ros_message = static_cast<_EhpSegment__ros_msg_type *>(untyped_ros_message);
  // Field name: seg_offset
  {
    cdr >> ros_message->seg_offset;
  }

  // Field name: seg_msg_type
  {
    cdr >> ros_message->seg_msg_type;
  }

  // Field name: seg_path_idx
  {
    cdr >> ros_message->seg_path_idx;
  }

  // Field name: seg_cyc_cnt
  {
    cdr >> ros_message->seg_cyc_cnt;
  }

  // Field name: seg_update
  {
    cdr >> ros_message->seg_update;
  }

  // Field name: seg_retr
  {
    cdr >> ros_message->seg_retr;
  }

  // Field name: seg_build_up_area
  {
    cdr >> ros_message->seg_build_up_area;
  }

  // Field name: seg_bridge
  {
    cdr >> ros_message->seg_bridge;
  }

  // Field name: seg_tunnel
  {
    cdr >> ros_message->seg_tunnel;
  }

  // Field name: seg_func_road_class
  {
    cdr >> ros_message->seg_func_road_class;
  }

  // Field name: seg_rel_probb
  {
    cdr >> ros_message->seg_rel_probb;
  }

  // Field name: seg_form_of_way
  {
    cdr >> ros_message->seg_form_of_way;
  }

  // Field name: seg_cmplx_insct
  {
    cdr >> ros_message->seg_cmplx_insct;
  }

  // Field name: seg_part_of_calc_route
  {
    cdr >> ros_message->seg_part_of_calc_route;
  }

  // Field name: seg_eff_spd_lmt_type
  {
    cdr >> ros_message->seg_eff_spd_lmt_type;
  }

  // Field name: seg_eff_spd_lmt
  {
    cdr >> ros_message->seg_eff_spd_lmt;
  }

  // Field name: seg_num_of_lane_drv_dir
  {
    cdr >> ros_message->seg_num_of_lane_drv_dir;
  }

  // Field name: seg_num_of_lane_opp_dir
  {
    cdr >> ros_message->seg_num_of_lane_opp_dir;
  }

  // Field name: seg_divide_road
  {
    cdr >> ros_message->seg_divide_road;
  }

  // Field name: seg_relative_offset
  {
    cdr >> ros_message->seg_relative_offset;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__EhpSegment(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EhpSegment__ros_msg_type * ros_message = static_cast<const _EhpSegment__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name seg_offset
  {
    size_t item_size = sizeof(ros_message->seg_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_msg_type
  {
    size_t item_size = sizeof(ros_message->seg_msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_path_idx
  {
    size_t item_size = sizeof(ros_message->seg_path_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_cyc_cnt
  {
    size_t item_size = sizeof(ros_message->seg_cyc_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_update
  {
    size_t item_size = sizeof(ros_message->seg_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_retr
  {
    size_t item_size = sizeof(ros_message->seg_retr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_build_up_area
  {
    size_t item_size = sizeof(ros_message->seg_build_up_area);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_bridge
  {
    size_t item_size = sizeof(ros_message->seg_bridge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_tunnel
  {
    size_t item_size = sizeof(ros_message->seg_tunnel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_func_road_class
  {
    size_t item_size = sizeof(ros_message->seg_func_road_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_rel_probb
  {
    size_t item_size = sizeof(ros_message->seg_rel_probb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_form_of_way
  {
    size_t item_size = sizeof(ros_message->seg_form_of_way);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_cmplx_insct
  {
    size_t item_size = sizeof(ros_message->seg_cmplx_insct);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_part_of_calc_route
  {
    size_t item_size = sizeof(ros_message->seg_part_of_calc_route);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_eff_spd_lmt_type
  {
    size_t item_size = sizeof(ros_message->seg_eff_spd_lmt_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_eff_spd_lmt
  {
    size_t item_size = sizeof(ros_message->seg_eff_spd_lmt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_num_of_lane_drv_dir
  {
    size_t item_size = sizeof(ros_message->seg_num_of_lane_drv_dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_num_of_lane_opp_dir
  {
    size_t item_size = sizeof(ros_message->seg_num_of_lane_opp_dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_divide_road
  {
    size_t item_size = sizeof(ros_message->seg_divide_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_relative_offset
  {
    size_t item_size = sizeof(ros_message->seg_relative_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EhpSegment__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__EhpSegment(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__EhpSegment(
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

  // member: seg_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: seg_msg_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_path_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_cyc_cnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_update
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_retr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_build_up_area
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_bridge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_tunnel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_func_road_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_rel_probb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: seg_form_of_way
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_cmplx_insct
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_part_of_calc_route
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_eff_spd_lmt_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_eff_spd_lmt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_num_of_lane_drv_dir
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_num_of_lane_opp_dir
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_divide_road
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seg_relative_offset
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
    using DataType = deva_gaode_routing_msgs__msg__EhpSegment;
    is_plain =
      (
      offsetof(DataType, seg_relative_offset) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EhpSegment__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__EhpSegment(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EhpSegment = {
  "deva_gaode_routing_msgs::msg",
  "EhpSegment",
  _EhpSegment__cdr_serialize,
  _EhpSegment__cdr_deserialize,
  _EhpSegment__get_serialized_size,
  _EhpSegment__max_serialized_size
};

static rosidl_message_type_support_t _EhpSegment__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EhpSegment,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpSegment)() {
  return &_EhpSegment__type_support;
}

#if defined(__cplusplus)
}
#endif
