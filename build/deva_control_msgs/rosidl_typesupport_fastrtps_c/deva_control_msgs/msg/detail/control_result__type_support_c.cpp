// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_control_msgs:msg/ControlResult.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/control_result__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_control_msgs/msg/detail/control_result__struct.h"
#include "deva_control_msgs/msg/detail/control_result__functions.h"
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

#include "deva_common_msgs/msg/detail/header__functions.h"  // header
#include "deva_control_msgs/msg/detail/control_valid_limit__functions.h"  // longit_jerk_limit, longit_tq_limit, steer_angle_rate_limit, steer_tq_limit
#include "rosidl_runtime_c/string.h"  // control_ready_false_reason, protocol_version
#include "rosidl_runtime_c/string_functions.h"  // control_ready_false_reason, protocol_version

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
size_t get_serialized_size_deva_common_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
size_t max_serialized_size_deva_common_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header)();
size_t get_serialized_size_deva_control_msgs__msg__ControlValidLimit(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_control_msgs__msg__ControlValidLimit(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, ControlValidLimit)();


using _ControlResult__ros_msg_type = deva_control_msgs__msg__ControlResult;

static bool _ControlResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlResult__ros_msg_type * ros_message = static_cast<const _ControlResult__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: protocol_version
  {
    const rosidl_runtime_c__String * str = &ros_message->protocol_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: late_mode
  {
    cdr << ros_message->late_mode;
  }

  // Field name: eps_torque
  {
    cdr << ros_message->eps_torque;
  }

  // Field name: front_wheel_target
  {
    cdr << ros_message->front_wheel_target;
  }

  // Field name: steering_target
  {
    cdr << ros_message->steering_target;
  }

  // Field name: long_mode
  {
    cdr << ros_message->long_mode;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: acceleration
  {
    cdr << ros_message->acceleration;
  }

  // Field name: longit_torque
  {
    cdr << ros_message->longit_torque;
  }

  // Field name: target_distance
  {
    cdr << ros_message->target_distance;
  }

  // Field name: throttle
  {
    cdr << ros_message->throttle;
  }

  // Field name: brake
  {
    cdr << ros_message->brake;
  }

  // Field name: limit_command_enable
  {
    cdr << (ros_message->limit_command_enable ? true : false);
  }

  // Field name: steer_angle_rate_limit
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, ControlValidLimit
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->steer_angle_rate_limit, cdr))
    {
      return false;
    }
  }

  // Field name: steer_tq_limit
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, ControlValidLimit
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->steer_tq_limit, cdr))
    {
      return false;
    }
  }

  // Field name: longit_tq_limit
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, ControlValidLimit
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->longit_tq_limit, cdr))
    {
      return false;
    }
  }

  // Field name: longit_jerk_limit
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, ControlValidLimit
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->longit_jerk_limit, cdr))
    {
      return false;
    }
  }

  // Field name: control_ready_false_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->control_ready_false_reason;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ready
  {
    cdr << (ros_message->ready ? true : false);
  }

  // Field name: control_mode
  {
    cdr << ros_message->control_mode;
  }

  // Field name: gear_en
  {
    cdr << (ros_message->gear_en ? true : false);
  }

  // Field name: gear_cmd_val
  {
    cdr << ros_message->gear_cmd_val;
  }

  // Field name: lateral_en
  {
    cdr << (ros_message->lateral_en ? true : false);
  }

  // Field name: longitudinal_en
  {
    cdr << (ros_message->longitudinal_en ? true : false);
  }

  // Field name: steering_rate
  {
    cdr << ros_message->steering_rate;
  }

  return true;
}

static bool _ControlResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlResult__ros_msg_type * ros_message = static_cast<_ControlResult__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: protocol_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->protocol_version.data) {
      rosidl_runtime_c__String__init(&ros_message->protocol_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->protocol_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'protocol_version'\n");
      return false;
    }
  }

  // Field name: late_mode
  {
    cdr >> ros_message->late_mode;
  }

  // Field name: eps_torque
  {
    cdr >> ros_message->eps_torque;
  }

  // Field name: front_wheel_target
  {
    cdr >> ros_message->front_wheel_target;
  }

  // Field name: steering_target
  {
    cdr >> ros_message->steering_target;
  }

  // Field name: long_mode
  {
    cdr >> ros_message->long_mode;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: acceleration
  {
    cdr >> ros_message->acceleration;
  }

  // Field name: longit_torque
  {
    cdr >> ros_message->longit_torque;
  }

  // Field name: target_distance
  {
    cdr >> ros_message->target_distance;
  }

  // Field name: throttle
  {
    cdr >> ros_message->throttle;
  }

  // Field name: brake
  {
    cdr >> ros_message->brake;
  }

  // Field name: limit_command_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->limit_command_enable = tmp ? true : false;
  }

  // Field name: steer_angle_rate_limit
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, ControlValidLimit
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->steer_angle_rate_limit))
    {
      return false;
    }
  }

  // Field name: steer_tq_limit
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, ControlValidLimit
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->steer_tq_limit))
    {
      return false;
    }
  }

  // Field name: longit_tq_limit
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, ControlValidLimit
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->longit_tq_limit))
    {
      return false;
    }
  }

  // Field name: longit_jerk_limit
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, ControlValidLimit
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->longit_jerk_limit))
    {
      return false;
    }
  }

  // Field name: control_ready_false_reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->control_ready_false_reason.data) {
      rosidl_runtime_c__String__init(&ros_message->control_ready_false_reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->control_ready_false_reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'control_ready_false_reason'\n");
      return false;
    }
  }

  // Field name: ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ready = tmp ? true : false;
  }

  // Field name: control_mode
  {
    cdr >> ros_message->control_mode;
  }

  // Field name: gear_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gear_en = tmp ? true : false;
  }

  // Field name: gear_cmd_val
  {
    cdr >> ros_message->gear_cmd_val;
  }

  // Field name: lateral_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lateral_en = tmp ? true : false;
  }

  // Field name: longitudinal_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->longitudinal_en = tmp ? true : false;
  }

  // Field name: steering_rate
  {
    cdr >> ros_message->steering_rate;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_control_msgs
size_t get_serialized_size_deva_control_msgs__msg__ControlResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlResult__ros_msg_type * ros_message = static_cast<const _ControlResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name protocol_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->protocol_version.size + 1);
  // field.name late_mode
  {
    size_t item_size = sizeof(ros_message->late_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eps_torque
  {
    size_t item_size = sizeof(ros_message->eps_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_wheel_target
  {
    size_t item_size = sizeof(ros_message->front_wheel_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_target
  {
    size_t item_size = sizeof(ros_message->steering_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name long_mode
  {
    size_t item_size = sizeof(ros_message->long_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration
  {
    size_t item_size = sizeof(ros_message->acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longit_torque
  {
    size_t item_size = sizeof(ros_message->longit_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_distance
  {
    size_t item_size = sizeof(ros_message->target_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle
  {
    size_t item_size = sizeof(ros_message->throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake
  {
    size_t item_size = sizeof(ros_message->brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name limit_command_enable
  {
    size_t item_size = sizeof(ros_message->limit_command_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_angle_rate_limit

  current_alignment += get_serialized_size_deva_control_msgs__msg__ControlValidLimit(
    &(ros_message->steer_angle_rate_limit), current_alignment);
  // field.name steer_tq_limit

  current_alignment += get_serialized_size_deva_control_msgs__msg__ControlValidLimit(
    &(ros_message->steer_tq_limit), current_alignment);
  // field.name longit_tq_limit

  current_alignment += get_serialized_size_deva_control_msgs__msg__ControlValidLimit(
    &(ros_message->longit_tq_limit), current_alignment);
  // field.name longit_jerk_limit

  current_alignment += get_serialized_size_deva_control_msgs__msg__ControlValidLimit(
    &(ros_message->longit_jerk_limit), current_alignment);
  // field.name control_ready_false_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->control_ready_false_reason.size + 1);
  // field.name ready
  {
    size_t item_size = sizeof(ros_message->ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_mode
  {
    size_t item_size = sizeof(ros_message->control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_en
  {
    size_t item_size = sizeof(ros_message->gear_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_cmd_val
  {
    size_t item_size = sizeof(ros_message->gear_cmd_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_en
  {
    size_t item_size = sizeof(ros_message->lateral_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitudinal_en
  {
    size_t item_size = sizeof(ros_message->longitudinal_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_rate
  {
    size_t item_size = sizeof(ros_message->steering_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlResult__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_control_msgs__msg__ControlResult(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_control_msgs
size_t max_serialized_size_deva_control_msgs__msg__ControlResult(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: protocol_version
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
  // member: late_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eps_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_wheel_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: long_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longit_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: target_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: limit_command_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_angle_rate_limit
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_control_msgs__msg__ControlValidLimit(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: steer_tq_limit
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_control_msgs__msg__ControlValidLimit(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: longit_tq_limit
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_control_msgs__msg__ControlValidLimit(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: longit_jerk_limit
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_control_msgs__msg__ControlValidLimit(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: control_ready_false_reason
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
  // member: ready
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: control_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_cmd_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lateral_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: longitudinal_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steering_rate
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
    using DataType = deva_control_msgs__msg__ControlResult;
    is_plain =
      (
      offsetof(DataType, steering_rate) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControlResult__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_control_msgs__msg__ControlResult(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControlResult = {
  "deva_control_msgs::msg",
  "ControlResult",
  _ControlResult__cdr_serialize,
  _ControlResult__cdr_deserialize,
  _ControlResult__get_serialized_size,
  _ControlResult__max_serialized_size
};

static rosidl_message_type_support_t _ControlResult__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlResult,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, ControlResult)() {
  return &_ControlResult__type_support;
}

#if defined(__cplusplus)
}
#endif
