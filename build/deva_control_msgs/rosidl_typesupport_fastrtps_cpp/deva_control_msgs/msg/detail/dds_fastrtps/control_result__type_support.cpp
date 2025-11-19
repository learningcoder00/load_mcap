// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_control_msgs:msg/ControlResult.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/control_result__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_control_msgs/msg/detail/control_result__struct.hpp"

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
namespace deva_common_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_common_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_common_msgs::msg::Header &);
size_t get_serialized_size(
  const deva_common_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_common_msgs

namespace deva_control_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_control_msgs::msg::ControlValidLimit &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_control_msgs::msg::ControlValidLimit &);
size_t get_serialized_size(
  const deva_control_msgs::msg::ControlValidLimit &,
  size_t current_alignment);
size_t
max_serialized_size_ControlValidLimit(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_control_msgs

// functions for deva_control_msgs::msg::ControlValidLimit already declared above

// functions for deva_control_msgs::msg::ControlValidLimit already declared above

// functions for deva_control_msgs::msg::ControlValidLimit already declared above


namespace deva_control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
cdr_serialize(
  const deva_control_msgs::msg::ControlResult & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: protocol_version
  cdr << ros_message.protocol_version;
  // Member: late_mode
  cdr << ros_message.late_mode;
  // Member: eps_torque
  cdr << ros_message.eps_torque;
  // Member: front_wheel_target
  cdr << ros_message.front_wheel_target;
  // Member: steering_target
  cdr << ros_message.steering_target;
  // Member: long_mode
  cdr << ros_message.long_mode;
  // Member: speed
  cdr << ros_message.speed;
  // Member: acceleration
  cdr << ros_message.acceleration;
  // Member: longit_torque
  cdr << ros_message.longit_torque;
  // Member: target_distance
  cdr << ros_message.target_distance;
  // Member: throttle
  cdr << ros_message.throttle;
  // Member: brake
  cdr << ros_message.brake;
  // Member: limit_command_enable
  cdr << (ros_message.limit_command_enable ? true : false);
  // Member: steer_angle_rate_limit
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.steer_angle_rate_limit,
    cdr);
  // Member: steer_tq_limit
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.steer_tq_limit,
    cdr);
  // Member: longit_tq_limit
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.longit_tq_limit,
    cdr);
  // Member: longit_jerk_limit
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.longit_jerk_limit,
    cdr);
  // Member: control_ready_false_reason
  cdr << ros_message.control_ready_false_reason;
  // Member: ready
  cdr << (ros_message.ready ? true : false);
  // Member: control_mode
  cdr << ros_message.control_mode;
  // Member: gear_en
  cdr << (ros_message.gear_en ? true : false);
  // Member: gear_cmd_val
  cdr << ros_message.gear_cmd_val;
  // Member: lateral_en
  cdr << (ros_message.lateral_en ? true : false);
  // Member: longitudinal_en
  cdr << (ros_message.longitudinal_en ? true : false);
  // Member: steering_rate
  cdr << ros_message.steering_rate;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_control_msgs::msg::ControlResult & ros_message)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: protocol_version
  cdr >> ros_message.protocol_version;

  // Member: late_mode
  cdr >> ros_message.late_mode;

  // Member: eps_torque
  cdr >> ros_message.eps_torque;

  // Member: front_wheel_target
  cdr >> ros_message.front_wheel_target;

  // Member: steering_target
  cdr >> ros_message.steering_target;

  // Member: long_mode
  cdr >> ros_message.long_mode;

  // Member: speed
  cdr >> ros_message.speed;

  // Member: acceleration
  cdr >> ros_message.acceleration;

  // Member: longit_torque
  cdr >> ros_message.longit_torque;

  // Member: target_distance
  cdr >> ros_message.target_distance;

  // Member: throttle
  cdr >> ros_message.throttle;

  // Member: brake
  cdr >> ros_message.brake;

  // Member: limit_command_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.limit_command_enable = tmp ? true : false;
  }

  // Member: steer_angle_rate_limit
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.steer_angle_rate_limit);

  // Member: steer_tq_limit
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.steer_tq_limit);

  // Member: longit_tq_limit
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.longit_tq_limit);

  // Member: longit_jerk_limit
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.longit_jerk_limit);

  // Member: control_ready_false_reason
  cdr >> ros_message.control_ready_false_reason;

  // Member: ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ready = tmp ? true : false;
  }

  // Member: control_mode
  cdr >> ros_message.control_mode;

  // Member: gear_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gear_en = tmp ? true : false;
  }

  // Member: gear_cmd_val
  cdr >> ros_message.gear_cmd_val;

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

  // Member: steering_rate
  cdr >> ros_message.steering_rate;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
get_serialized_size(
  const deva_control_msgs::msg::ControlResult & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    deva_common_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: protocol_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.protocol_version.size() + 1);
  // Member: late_mode
  {
    size_t item_size = sizeof(ros_message.late_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eps_torque
  {
    size_t item_size = sizeof(ros_message.eps_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_wheel_target
  {
    size_t item_size = sizeof(ros_message.front_wheel_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_target
  {
    size_t item_size = sizeof(ros_message.steering_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: long_mode
  {
    size_t item_size = sizeof(ros_message.long_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acceleration
  {
    size_t item_size = sizeof(ros_message.acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longit_torque
  {
    size_t item_size = sizeof(ros_message.longit_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_distance
  {
    size_t item_size = sizeof(ros_message.target_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle
  {
    size_t item_size = sizeof(ros_message.throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake
  {
    size_t item_size = sizeof(ros_message.brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: limit_command_enable
  {
    size_t item_size = sizeof(ros_message.limit_command_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_angle_rate_limit

  current_alignment +=
    deva_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.steer_angle_rate_limit, current_alignment);
  // Member: steer_tq_limit

  current_alignment +=
    deva_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.steer_tq_limit, current_alignment);
  // Member: longit_tq_limit

  current_alignment +=
    deva_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.longit_tq_limit, current_alignment);
  // Member: longit_jerk_limit

  current_alignment +=
    deva_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.longit_jerk_limit, current_alignment);
  // Member: control_ready_false_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.control_ready_false_reason.size() + 1);
  // Member: ready
  {
    size_t item_size = sizeof(ros_message.ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_mode
  {
    size_t item_size = sizeof(ros_message.control_mode);
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
  // Member: steering_rate
  {
    size_t item_size = sizeof(ros_message.steering_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
max_serialized_size_ControlResult(
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
        deva_common_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
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

  // Member: late_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eps_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_wheel_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steering_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: long_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: longit_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: target_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: limit_command_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_angle_rate_limit
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ControlValidLimit(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: steer_tq_limit
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ControlValidLimit(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: longit_tq_limit
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ControlValidLimit(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: longit_jerk_limit
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ControlValidLimit(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: control_ready_false_reason
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

  // Member: ready
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: control_mode
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

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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

  // Member: steering_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_control_msgs::msg::ControlResult;
    is_plain =
      (
      offsetof(DataType, steering_rate) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ControlResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_control_msgs::msg::ControlResult *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControlResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_control_msgs::msg::ControlResult *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControlResult__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_control_msgs::msg::ControlResult *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControlResult__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControlResult(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControlResult__callbacks = {
  "deva_control_msgs::msg",
  "ControlResult",
  _ControlResult__cdr_serialize,
  _ControlResult__cdr_deserialize,
  _ControlResult__get_serialized_size,
  _ControlResult__max_serialized_size
};

static rosidl_message_type_support_t _ControlResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControlResult__callbacks,
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
get_message_type_support_handle<deva_control_msgs::msg::ControlResult>()
{
  return &deva_control_msgs::msg::typesupport_fastrtps_cpp::_ControlResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_control_msgs, msg, ControlResult)() {
  return &deva_control_msgs::msg::typesupport_fastrtps_cpp::_ControlResult__handle;
}

#ifdef __cplusplus
}
#endif
