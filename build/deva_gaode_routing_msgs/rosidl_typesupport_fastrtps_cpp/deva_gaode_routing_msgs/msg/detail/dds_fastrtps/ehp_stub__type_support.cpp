// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/EhpStub.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__struct.hpp"

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

namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_serialize(
  const deva_gaode_routing_msgs::msg::EhpStub & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stub_offset
  cdr << ros_message.stub_offset;
  // Member: stub_msg_type
  cdr << ros_message.stub_msg_type;
  // Member: stub_path_idx
  cdr << ros_message.stub_path_idx;
  // Member: stub_cyc_cnt
  cdr << ros_message.stub_cyc_cnt;
  // Member: stub_update
  cdr << ros_message.stub_update;
  // Member: stub_retr
  cdr << ros_message.stub_retr;
  // Member: stub_stub_path_idx
  cdr << ros_message.stub_stub_path_idx;
  // Member: stub_func_road_class
  cdr << ros_message.stub_func_road_class;
  // Member: stub_rel_probb
  cdr << ros_message.stub_rel_probb;
  // Member: stub_form_of_way
  cdr << ros_message.stub_form_of_way;
  // Member: stub_cmplx_insct
  cdr << ros_message.stub_cmplx_insct;
  // Member: stub_part_of_calc_route
  cdr << ros_message.stub_part_of_calc_route;
  // Member: stub_turn_angl
  cdr << ros_message.stub_turn_angl;
  // Member: stub_num_of_lane_drv_dir
  cdr << ros_message.stub_num_of_lane_drv_dir;
  // Member: stub_num_of_lane_opp_dir
  cdr << ros_message.stub_num_of_lane_opp_dir;
  // Member: stub_rt_of_way
  cdr << ros_message.stub_rt_of_way;
  // Member: stub_last_stub
  cdr << ros_message.stub_last_stub;
  // Member: stub_relative_offset
  cdr << ros_message.stub_relative_offset;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_gaode_routing_msgs::msg::EhpStub & ros_message)
{
  // Member: stub_offset
  cdr >> ros_message.stub_offset;

  // Member: stub_msg_type
  cdr >> ros_message.stub_msg_type;

  // Member: stub_path_idx
  cdr >> ros_message.stub_path_idx;

  // Member: stub_cyc_cnt
  cdr >> ros_message.stub_cyc_cnt;

  // Member: stub_update
  cdr >> ros_message.stub_update;

  // Member: stub_retr
  cdr >> ros_message.stub_retr;

  // Member: stub_stub_path_idx
  cdr >> ros_message.stub_stub_path_idx;

  // Member: stub_func_road_class
  cdr >> ros_message.stub_func_road_class;

  // Member: stub_rel_probb
  cdr >> ros_message.stub_rel_probb;

  // Member: stub_form_of_way
  cdr >> ros_message.stub_form_of_way;

  // Member: stub_cmplx_insct
  cdr >> ros_message.stub_cmplx_insct;

  // Member: stub_part_of_calc_route
  cdr >> ros_message.stub_part_of_calc_route;

  // Member: stub_turn_angl
  cdr >> ros_message.stub_turn_angl;

  // Member: stub_num_of_lane_drv_dir
  cdr >> ros_message.stub_num_of_lane_drv_dir;

  // Member: stub_num_of_lane_opp_dir
  cdr >> ros_message.stub_num_of_lane_opp_dir;

  // Member: stub_rt_of_way
  cdr >> ros_message.stub_rt_of_way;

  // Member: stub_last_stub
  cdr >> ros_message.stub_last_stub;

  // Member: stub_relative_offset
  cdr >> ros_message.stub_relative_offset;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
get_serialized_size(
  const deva_gaode_routing_msgs::msg::EhpStub & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stub_offset
  {
    size_t item_size = sizeof(ros_message.stub_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_msg_type
  {
    size_t item_size = sizeof(ros_message.stub_msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_path_idx
  {
    size_t item_size = sizeof(ros_message.stub_path_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_cyc_cnt
  {
    size_t item_size = sizeof(ros_message.stub_cyc_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_update
  {
    size_t item_size = sizeof(ros_message.stub_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_retr
  {
    size_t item_size = sizeof(ros_message.stub_retr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_stub_path_idx
  {
    size_t item_size = sizeof(ros_message.stub_stub_path_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_func_road_class
  {
    size_t item_size = sizeof(ros_message.stub_func_road_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_rel_probb
  {
    size_t item_size = sizeof(ros_message.stub_rel_probb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_form_of_way
  {
    size_t item_size = sizeof(ros_message.stub_form_of_way);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_cmplx_insct
  {
    size_t item_size = sizeof(ros_message.stub_cmplx_insct);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_part_of_calc_route
  {
    size_t item_size = sizeof(ros_message.stub_part_of_calc_route);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_turn_angl
  {
    size_t item_size = sizeof(ros_message.stub_turn_angl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_num_of_lane_drv_dir
  {
    size_t item_size = sizeof(ros_message.stub_num_of_lane_drv_dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_num_of_lane_opp_dir
  {
    size_t item_size = sizeof(ros_message.stub_num_of_lane_opp_dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_rt_of_way
  {
    size_t item_size = sizeof(ros_message.stub_rt_of_way);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_last_stub
  {
    size_t item_size = sizeof(ros_message.stub_last_stub);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stub_relative_offset
  {
    size_t item_size = sizeof(ros_message.stub_relative_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
max_serialized_size_EhpStub(
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


  // Member: stub_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: stub_msg_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_path_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_cyc_cnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_update
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_retr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_stub_path_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_func_road_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_rel_probb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stub_form_of_way
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_cmplx_insct
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_part_of_calc_route
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_turn_angl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stub_num_of_lane_drv_dir
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_num_of_lane_opp_dir
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_rt_of_way
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_last_stub
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stub_relative_offset
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
    using DataType = deva_gaode_routing_msgs::msg::EhpStub;
    is_plain =
      (
      offsetof(DataType, stub_relative_offset) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EhpStub__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::EhpStub *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EhpStub__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_gaode_routing_msgs::msg::EhpStub *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EhpStub__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::EhpStub *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EhpStub__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EhpStub(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EhpStub__callbacks = {
  "deva_gaode_routing_msgs::msg",
  "EhpStub",
  _EhpStub__cdr_serialize,
  _EhpStub__cdr_deserialize,
  _EhpStub__get_serialized_size,
  _EhpStub__max_serialized_size
};

static rosidl_message_type_support_t _EhpStub__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EhpStub__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_gaode_routing_msgs::msg::EhpStub>()
{
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_EhpStub__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_gaode_routing_msgs, msg, EhpStub)() {
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_EhpStub__handle;
}

#ifdef __cplusplus
}
#endif
