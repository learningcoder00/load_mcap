// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/DbaStateMsg.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/dba_state_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/dba_state_msg__struct.hpp"

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

namespace deva_function_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_serialize(
  const deva_function_msgs::msg::DbaStateMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: publish_timestamp
  cdr << ros_message.publish_timestamp;
  // Member: epb_state
  cdr << ros_message.epb_state;
  // Member: speed
  cdr << ros_message.speed;
  // Member: acc_enable
  cdr << (ros_message.acc_enable ? true : false);
  // Member: brake_enable
  cdr << (ros_message.brake_enable ? true : false);
  // Member: door_open_state
  {
    cdr << ros_message.door_open_state;
  }
  // Member: turn_lamp_lever_state
  cdr << ros_message.turn_lamp_lever_state;
  // Member: late_enable
  cdr << (ros_message.late_enable ? true : false);
  // Member: late_driveover
  cdr << (ros_message.late_driveover ? true : false);
  // Member: longit_enable
  cdr << (ros_message.longit_enable ? true : false);
  // Member: longit_driveover
  cdr << (ros_message.longit_driveover ? true : false);
  // Member: gear
  cdr << ros_message.gear;
  // Member: belt
  {
    cdr << ros_message.belt;
  }
  // Member: command
  cdr << ros_message.command;
  // Member: save_map
  cdr << (ros_message.save_map ? true : false);
  // Member: slot_id
  cdr << ros_message.slot_id;
  // Member: park_out_direction
  cdr << ros_message.park_out_direction;
  // Member: run_mode
  cdr << ros_message.run_mode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::DbaStateMsg & ros_message)
{
  // Member: publish_timestamp
  cdr >> ros_message.publish_timestamp;

  // Member: epb_state
  cdr >> ros_message.epb_state;

  // Member: speed
  cdr >> ros_message.speed;

  // Member: acc_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.acc_enable = tmp ? true : false;
  }

  // Member: brake_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.brake_enable = tmp ? true : false;
  }

  // Member: door_open_state
  {
    cdr >> ros_message.door_open_state;
  }

  // Member: turn_lamp_lever_state
  cdr >> ros_message.turn_lamp_lever_state;

  // Member: late_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.late_enable = tmp ? true : false;
  }

  // Member: late_driveover
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.late_driveover = tmp ? true : false;
  }

  // Member: longit_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.longit_enable = tmp ? true : false;
  }

  // Member: longit_driveover
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.longit_driveover = tmp ? true : false;
  }

  // Member: gear
  cdr >> ros_message.gear;

  // Member: belt
  {
    cdr >> ros_message.belt;
  }

  // Member: command
  cdr >> ros_message.command;

  // Member: save_map
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.save_map = tmp ? true : false;
  }

  // Member: slot_id
  cdr >> ros_message.slot_id;

  // Member: park_out_direction
  cdr >> ros_message.park_out_direction;

  // Member: run_mode
  cdr >> ros_message.run_mode;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::DbaStateMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: publish_timestamp
  {
    size_t item_size = sizeof(ros_message.publish_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epb_state
  {
    size_t item_size = sizeof(ros_message.epb_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_enable
  {
    size_t item_size = sizeof(ros_message.acc_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_enable
  {
    size_t item_size = sizeof(ros_message.brake_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_open_state
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.door_open_state[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_lamp_lever_state
  {
    size_t item_size = sizeof(ros_message.turn_lamp_lever_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: late_enable
  {
    size_t item_size = sizeof(ros_message.late_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: late_driveover
  {
    size_t item_size = sizeof(ros_message.late_driveover);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longit_enable
  {
    size_t item_size = sizeof(ros_message.longit_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longit_driveover
  {
    size_t item_size = sizeof(ros_message.longit_driveover);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear
  {
    size_t item_size = sizeof(ros_message.gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: belt
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.belt[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: command
  {
    size_t item_size = sizeof(ros_message.command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: save_map
  {
    size_t item_size = sizeof(ros_message.save_map);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slot_id
  {
    size_t item_size = sizeof(ros_message.slot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: park_out_direction
  {
    size_t item_size = sizeof(ros_message.park_out_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_mode
  {
    size_t item_size = sizeof(ros_message.run_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
max_serialized_size_DbaStateMsg(
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


  // Member: publish_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: epb_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: acc_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brake_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_open_state
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_lamp_lever_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: late_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: late_driveover
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: longit_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: longit_driveover
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: belt
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: save_map
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: slot_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: park_out_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_mode
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
    using DataType = deva_function_msgs::msg::DbaStateMsg;
    is_plain =
      (
      offsetof(DataType, run_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DbaStateMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::DbaStateMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DbaStateMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::DbaStateMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DbaStateMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::DbaStateMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DbaStateMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DbaStateMsg(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DbaStateMsg__callbacks = {
  "deva_function_msgs::msg",
  "DbaStateMsg",
  _DbaStateMsg__cdr_serialize,
  _DbaStateMsg__cdr_deserialize,
  _DbaStateMsg__get_serialized_size,
  _DbaStateMsg__max_serialized_size
};

static rosidl_message_type_support_t _DbaStateMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DbaStateMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_function_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_function_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_function_msgs::msg::DbaStateMsg>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_DbaStateMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, DbaStateMsg)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_DbaStateMsg__handle;
}

#ifdef __cplusplus
}
#endif
