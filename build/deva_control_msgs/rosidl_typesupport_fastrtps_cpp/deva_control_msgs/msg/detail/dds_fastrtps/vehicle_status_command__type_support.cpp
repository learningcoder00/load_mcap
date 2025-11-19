// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_control_msgs:msg/VehicleStatusCommand.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/vehicle_status_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_control_msgs/msg/detail/vehicle_status_command__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace deva_control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
cdr_serialize(
  const deva_control_msgs::msg::VehicleStatusCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: protocol_version
  cdr << ros_message.protocol_version;
  // Member: node_name
  cdr << ros_message.node_name;
  // Member: use_gear_cmd
  cdr << (ros_message.use_gear_cmd ? true : false);
  // Member: gear_en
  cdr << (ros_message.gear_en ? true : false);
  // Member: gear_cmd_val
  cdr << ros_message.gear_cmd_val;
  // Member: use_epb_cmd
  cdr << (ros_message.use_epb_cmd ? true : false);
  // Member: epb_en
  cdr << (ros_message.epb_en ? true : false);
  // Member: epb_cmd_val
  cdr << ros_message.epb_cmd_val;
  // Member: use_turn_light_cmd
  cdr << (ros_message.use_turn_light_cmd ? true : false);
  // Member: turn_light_en
  cdr << (ros_message.turn_light_en ? true : false);
  // Member: turn_light_cmd
  cdr << ros_message.turn_light_cmd;
  // Member: use_wiper_cmd
  cdr << (ros_message.use_wiper_cmd ? true : false);
  // Member: wiper_en
  cdr << (ros_message.wiper_en ? true : false);
  // Member: wiper_cmd
  cdr << (ros_message.wiper_cmd ? true : false);
  // Member: use_bywire_enable_cmd
  cdr << (ros_message.use_bywire_enable_cmd ? true : false);
  // Member: lateral_en
  cdr << (ros_message.lateral_en ? true : false);
  // Member: longitudinal_en
  cdr << (ros_message.longitudinal_en ? true : false);
  // Member: use_park_cmd
  cdr << (ros_message.use_park_cmd ? true : false);
  // Member: park_action
  cdr << ros_message.park_action;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_control_msgs::msg::VehicleStatusCommand & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: protocol_version
  cdr >> ros_message.protocol_version;

  // Member: node_name
  cdr >> ros_message.node_name;

  // Member: use_gear_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_gear_cmd = tmp ? true : false;
  }

  // Member: gear_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gear_en = tmp ? true : false;
  }

  // Member: gear_cmd_val
  cdr >> ros_message.gear_cmd_val;

  // Member: use_epb_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_epb_cmd = tmp ? true : false;
  }

  // Member: epb_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.epb_en = tmp ? true : false;
  }

  // Member: epb_cmd_val
  cdr >> ros_message.epb_cmd_val;

  // Member: use_turn_light_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_turn_light_cmd = tmp ? true : false;
  }

  // Member: turn_light_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.turn_light_en = tmp ? true : false;
  }

  // Member: turn_light_cmd
  cdr >> ros_message.turn_light_cmd;

  // Member: use_wiper_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_wiper_cmd = tmp ? true : false;
  }

  // Member: wiper_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wiper_en = tmp ? true : false;
  }

  // Member: wiper_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wiper_cmd = tmp ? true : false;
  }

  // Member: use_bywire_enable_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_bywire_enable_cmd = tmp ? true : false;
  }

  // Member: lateral_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lateral_en = tmp ? true : false;
  }

  // Member: longitudinal_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.longitudinal_en = tmp ? true : false;
  }

  // Member: use_park_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_park_cmd = tmp ? true : false;
  }

  // Member: park_action
  cdr >> ros_message.park_action;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
get_serialized_size(
  const deva_control_msgs::msg::VehicleStatusCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: protocol_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.protocol_version.size() + 1);
  // Member: node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.node_name.size() + 1);
  // Member: use_gear_cmd
  {
    size_t item_size = sizeof(ros_message.use_gear_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_en
  {
    size_t item_size = sizeof(ros_message.gear_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_cmd_val
  {
    size_t item_size = sizeof(ros_message.gear_cmd_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_epb_cmd
  {
    size_t item_size = sizeof(ros_message.use_epb_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epb_en
  {
    size_t item_size = sizeof(ros_message.epb_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epb_cmd_val
  {
    size_t item_size = sizeof(ros_message.epb_cmd_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_turn_light_cmd
  {
    size_t item_size = sizeof(ros_message.use_turn_light_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_light_en
  {
    size_t item_size = sizeof(ros_message.turn_light_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_light_cmd
  {
    size_t item_size = sizeof(ros_message.turn_light_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_wiper_cmd
  {
    size_t item_size = sizeof(ros_message.use_wiper_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wiper_en
  {
    size_t item_size = sizeof(ros_message.wiper_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wiper_cmd
  {
    size_t item_size = sizeof(ros_message.wiper_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_bywire_enable_cmd
  {
    size_t item_size = sizeof(ros_message.use_bywire_enable_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_en
  {
    size_t item_size = sizeof(ros_message.lateral_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longitudinal_en
  {
    size_t item_size = sizeof(ros_message.longitudinal_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_park_cmd
  {
    size_t item_size = sizeof(ros_message.use_park_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: park_action
  {
    size_t item_size = sizeof(ros_message.park_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
max_serialized_size_VehicleStatusCommand(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: protocol_version
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: node_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: use_gear_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gear_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gear_cmd_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: use_epb_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: epb_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: epb_cmd_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: use_turn_light_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_light_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_light_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: use_wiper_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wiper_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wiper_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: use_bywire_enable_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lateral_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: longitudinal_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: use_park_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: park_action
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
    using DataType = deva_control_msgs::msg::VehicleStatusCommand;
    is_plain =
      (
      offsetof(DataType, park_action) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VehicleStatusCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_control_msgs::msg::VehicleStatusCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleStatusCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_control_msgs::msg::VehicleStatusCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleStatusCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_control_msgs::msg::VehicleStatusCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleStatusCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VehicleStatusCommand(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VehicleStatusCommand__callbacks = {
  "deva_control_msgs::msg",
  "VehicleStatusCommand",
  _VehicleStatusCommand__cdr_serialize,
  _VehicleStatusCommand__cdr_deserialize,
  _VehicleStatusCommand__get_serialized_size,
  _VehicleStatusCommand__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatusCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleStatusCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_control_msgs::msg::VehicleStatusCommand>()
{
  return &deva_control_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatusCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_control_msgs, msg, VehicleStatusCommand)() {
  return &deva_control_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatusCommand__handle;
}

#ifdef __cplusplus
}
#endif
