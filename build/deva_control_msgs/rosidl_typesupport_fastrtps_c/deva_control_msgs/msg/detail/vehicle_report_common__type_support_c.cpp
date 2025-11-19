// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_control_msgs:msg/VehicleReportCommon.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/vehicle_report_common__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_control_msgs/msg/detail/vehicle_report_common__struct.h"
#include "deva_control_msgs/msg/detail/vehicle_report_common__functions.h"
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
#include "deva_control_msgs/msg/detail/vehicle_report_belt__functions.h"  // belt
#include "deva_control_msgs/msg/detail/vehicle_report_pedal__functions.h"  // pedal
#include "deva_control_msgs/msg/detail/wheel_speed__functions.h"  // wheelspeed_rc
#include "rosidl_runtime_c/string.h"  // bywire_exit_reason, protocol_version
#include "rosidl_runtime_c/string_functions.h"  // bywire_exit_reason, protocol_version

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
size_t get_serialized_size_deva_control_msgs__msg__VehicleReportBelt(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_control_msgs__msg__VehicleReportBelt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, VehicleReportBelt)();
size_t get_serialized_size_deva_control_msgs__msg__VehicleReportPedal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_control_msgs__msg__VehicleReportPedal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, VehicleReportPedal)();
size_t get_serialized_size_deva_control_msgs__msg__WheelSpeed(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_control_msgs__msg__WheelSpeed(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, WheelSpeed)();


using _VehicleReportCommon__ros_msg_type = deva_control_msgs__msg__VehicleReportCommon;

static bool _VehicleReportCommon__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleReportCommon__ros_msg_type * ros_message = static_cast<const _VehicleReportCommon__ros_msg_type *>(untyped_ros_message);
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

  // Field name: unix_ts
  {
    cdr << ros_message->unix_ts;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: speed_valid
  {
    cdr << (ros_message->speed_valid ? true : false);
  }

  // Field name: speed_directivity
  {
    cdr << (ros_message->speed_directivity ? true : false);
  }

  // Field name: wheelspeed_directivity
  {
    cdr << (ros_message->wheelspeed_directivity ? true : false);
  }

  // Field name: wheelspeed_valid
  {
    size_t size = 4;
    auto array_ptr = ros_message->wheelspeed_valid;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: wheelspeed_dir
  {
    size_t size = 4;
    auto array_ptr = ros_message->wheelspeed_dir;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: wheelspeed
  {
    size_t size = 4;
    auto array_ptr = ros_message->wheelspeed;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gear_enable
  {
    cdr << (ros_message->gear_enable ? true : false);
  }

  // Field name: gear
  {
    cdr << ros_message->gear;
  }

  // Field name: epb_state
  {
    cdr << ros_message->epb_state;
  }

  // Field name: epb_flt
  {
    cdr << ros_message->epb_flt;
  }

  // Field name: late_enable
  {
    cdr << (ros_message->late_enable ? true : false);
  }

  // Field name: late_driveover
  {
    cdr << (ros_message->late_driveover ? true : false);
  }

  // Field name: steer_angle_valid
  {
    cdr << (ros_message->steer_angle_valid ? true : false);
  }

  // Field name: steer_angle
  {
    cdr << ros_message->steer_angle;
  }

  // Field name: steer_rotate_angle_speed
  {
    cdr << ros_message->steer_rotate_angle_speed;
  }

  // Field name: steer_torque_valid
  {
    cdr << (ros_message->steer_torque_valid ? true : false);
  }

  // Field name: steer_torque
  {
    cdr << ros_message->steer_torque;
  }

  // Field name: steer_rotate_torque_speed
  {
    cdr << ros_message->steer_rotate_torque_speed;
  }

  // Field name: late_flt
  {
    cdr << ros_message->late_flt;
  }

  // Field name: longit_enable
  {
    cdr << (ros_message->longit_enable ? true : false);
  }

  // Field name: longit_driveover
  {
    cdr << (ros_message->longit_driveover ? true : false);
  }

  // Field name: longit_torque_valid
  {
    cdr << (ros_message->longit_torque_valid ? true : false);
  }

  // Field name: longit_torque
  {
    cdr << ros_message->longit_torque;
  }

  // Field name: longit_acc_valid
  {
    cdr << (ros_message->longit_acc_valid ? true : false);
  }

  // Field name: longit_acc
  {
    cdr << ros_message->longit_acc;
  }

  // Field name: longit_flt
  {
    cdr << ros_message->longit_flt;
  }

  // Field name: turn_lamp_lever_state
  {
    cdr << ros_message->turn_lamp_lever_state;
  }

  // Field name: turn_lamp_left
  {
    cdr << (ros_message->turn_lamp_left ? true : false);
  }

  // Field name: turn_lamp_right
  {
    cdr << (ros_message->turn_lamp_right ? true : false);
  }

  // Field name: hazard_lamp
  {
    cdr << (ros_message->hazard_lamp ? true : false);
  }

  // Field name: wiper_front
  {
    cdr << (ros_message->wiper_front ? true : false);
  }

  // Field name: door_open_state
  {
    size_t size = 4;
    auto array_ptr = ros_message->door_open_state;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: late_acc
  {
    cdr << ros_message->late_acc;
  }

  // Field name: yaw_rate
  {
    cdr << ros_message->yaw_rate;
  }

  // Field name: slope
  {
    cdr << ros_message->slope;
  }

  // Field name: standstill
  {
    cdr << ros_message->standstill;
  }

  // Field name: pedal_valid
  {
    cdr << (ros_message->pedal_valid ? true : false);
  }

  // Field name: pedal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, VehicleReportPedal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pedal, cdr))
    {
      return false;
    }
  }

  // Field name: wheelspeed_rc_valid
  {
    cdr << (ros_message->wheelspeed_rc_valid ? true : false);
  }

  // Field name: wheelspeed_rc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, WheelSpeed
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->wheelspeed_rc, cdr))
    {
      return false;
    }
  }

  // Field name: belt_valid
  {
    cdr << (ros_message->belt_valid ? true : false);
  }

  // Field name: belt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, VehicleReportBelt
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->belt, cdr))
    {
      return false;
    }
  }

  // Field name: bywire_exit_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->bywire_exit_reason;
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

  // Field name: request_cancel
  {
    cdr << ros_message->request_cancel;
  }

  // Field name: action_brake
  {
    cdr << ros_message->action_brake;
  }

  // Field name: action_throttle
  {
    cdr << ros_message->action_throttle;
  }

  // Field name: action_steer
  {
    cdr << ros_message->action_steer;
  }

  // Field name: heavy_action_steer
  {
    cdr << ros_message->heavy_action_steer;
  }

  // Field name: sustain_action_throttle
  {
    cdr << ros_message->sustain_action_throttle;
  }

  // Field name: sustain_action_steer
  {
    cdr << ros_message->sustain_action_steer;
  }

  return true;
}

static bool _VehicleReportCommon__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleReportCommon__ros_msg_type * ros_message = static_cast<_VehicleReportCommon__ros_msg_type *>(untyped_ros_message);
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

  // Field name: unix_ts
  {
    cdr >> ros_message->unix_ts;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: speed_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->speed_valid = tmp ? true : false;
  }

  // Field name: speed_directivity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->speed_directivity = tmp ? true : false;
  }

  // Field name: wheelspeed_directivity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wheelspeed_directivity = tmp ? true : false;
  }

  // Field name: wheelspeed_valid
  {
    size_t size = 4;
    auto array_ptr = ros_message->wheelspeed_valid;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: wheelspeed_dir
  {
    size_t size = 4;
    auto array_ptr = ros_message->wheelspeed_dir;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: wheelspeed
  {
    size_t size = 4;
    auto array_ptr = ros_message->wheelspeed;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gear_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gear_enable = tmp ? true : false;
  }

  // Field name: gear
  {
    cdr >> ros_message->gear;
  }

  // Field name: epb_state
  {
    cdr >> ros_message->epb_state;
  }

  // Field name: epb_flt
  {
    cdr >> ros_message->epb_flt;
  }

  // Field name: late_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->late_enable = tmp ? true : false;
  }

  // Field name: late_driveover
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->late_driveover = tmp ? true : false;
  }

  // Field name: steer_angle_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->steer_angle_valid = tmp ? true : false;
  }

  // Field name: steer_angle
  {
    cdr >> ros_message->steer_angle;
  }

  // Field name: steer_rotate_angle_speed
  {
    cdr >> ros_message->steer_rotate_angle_speed;
  }

  // Field name: steer_torque_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->steer_torque_valid = tmp ? true : false;
  }

  // Field name: steer_torque
  {
    cdr >> ros_message->steer_torque;
  }

  // Field name: steer_rotate_torque_speed
  {
    cdr >> ros_message->steer_rotate_torque_speed;
  }

  // Field name: late_flt
  {
    cdr >> ros_message->late_flt;
  }

  // Field name: longit_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->longit_enable = tmp ? true : false;
  }

  // Field name: longit_driveover
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->longit_driveover = tmp ? true : false;
  }

  // Field name: longit_torque_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->longit_torque_valid = tmp ? true : false;
  }

  // Field name: longit_torque
  {
    cdr >> ros_message->longit_torque;
  }

  // Field name: longit_acc_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->longit_acc_valid = tmp ? true : false;
  }

  // Field name: longit_acc
  {
    cdr >> ros_message->longit_acc;
  }

  // Field name: longit_flt
  {
    cdr >> ros_message->longit_flt;
  }

  // Field name: turn_lamp_lever_state
  {
    cdr >> ros_message->turn_lamp_lever_state;
  }

  // Field name: turn_lamp_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->turn_lamp_left = tmp ? true : false;
  }

  // Field name: turn_lamp_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->turn_lamp_right = tmp ? true : false;
  }

  // Field name: hazard_lamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hazard_lamp = tmp ? true : false;
  }

  // Field name: wiper_front
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wiper_front = tmp ? true : false;
  }

  // Field name: door_open_state
  {
    size_t size = 4;
    auto array_ptr = ros_message->door_open_state;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: late_acc
  {
    cdr >> ros_message->late_acc;
  }

  // Field name: yaw_rate
  {
    cdr >> ros_message->yaw_rate;
  }

  // Field name: slope
  {
    cdr >> ros_message->slope;
  }

  // Field name: standstill
  {
    cdr >> ros_message->standstill;
  }

  // Field name: pedal_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pedal_valid = tmp ? true : false;
  }

  // Field name: pedal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, VehicleReportPedal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pedal))
    {
      return false;
    }
  }

  // Field name: wheelspeed_rc_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wheelspeed_rc_valid = tmp ? true : false;
  }

  // Field name: wheelspeed_rc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, WheelSpeed
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->wheelspeed_rc))
    {
      return false;
    }
  }

  // Field name: belt_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->belt_valid = tmp ? true : false;
  }

  // Field name: belt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, VehicleReportBelt
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->belt))
    {
      return false;
    }
  }

  // Field name: bywire_exit_reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bywire_exit_reason.data) {
      rosidl_runtime_c__String__init(&ros_message->bywire_exit_reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bywire_exit_reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bywire_exit_reason'\n");
      return false;
    }
  }

  // Field name: request_cancel
  {
    cdr >> ros_message->request_cancel;
  }

  // Field name: action_brake
  {
    cdr >> ros_message->action_brake;
  }

  // Field name: action_throttle
  {
    cdr >> ros_message->action_throttle;
  }

  // Field name: action_steer
  {
    cdr >> ros_message->action_steer;
  }

  // Field name: heavy_action_steer
  {
    cdr >> ros_message->heavy_action_steer;
  }

  // Field name: sustain_action_throttle
  {
    cdr >> ros_message->sustain_action_throttle;
  }

  // Field name: sustain_action_steer
  {
    cdr >> ros_message->sustain_action_steer;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_control_msgs
size_t get_serialized_size_deva_control_msgs__msg__VehicleReportCommon(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleReportCommon__ros_msg_type * ros_message = static_cast<const _VehicleReportCommon__ros_msg_type *>(untyped_ros_message);
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
  // field.name unix_ts
  {
    size_t item_size = sizeof(ros_message->unix_ts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_valid
  {
    size_t item_size = sizeof(ros_message->speed_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_directivity
  {
    size_t item_size = sizeof(ros_message->speed_directivity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelspeed_directivity
  {
    size_t item_size = sizeof(ros_message->wheelspeed_directivity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelspeed_valid
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->wheelspeed_valid;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelspeed_dir
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->wheelspeed_dir;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelspeed
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->wheelspeed;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_enable
  {
    size_t item_size = sizeof(ros_message->gear_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear
  {
    size_t item_size = sizeof(ros_message->gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epb_state
  {
    size_t item_size = sizeof(ros_message->epb_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epb_flt
  {
    size_t item_size = sizeof(ros_message->epb_flt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name late_enable
  {
    size_t item_size = sizeof(ros_message->late_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name late_driveover
  {
    size_t item_size = sizeof(ros_message->late_driveover);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_angle_valid
  {
    size_t item_size = sizeof(ros_message->steer_angle_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_angle
  {
    size_t item_size = sizeof(ros_message->steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_rotate_angle_speed
  {
    size_t item_size = sizeof(ros_message->steer_rotate_angle_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_torque_valid
  {
    size_t item_size = sizeof(ros_message->steer_torque_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_torque
  {
    size_t item_size = sizeof(ros_message->steer_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_rotate_torque_speed
  {
    size_t item_size = sizeof(ros_message->steer_rotate_torque_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name late_flt
  {
    size_t item_size = sizeof(ros_message->late_flt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longit_enable
  {
    size_t item_size = sizeof(ros_message->longit_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longit_driveover
  {
    size_t item_size = sizeof(ros_message->longit_driveover);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longit_torque_valid
  {
    size_t item_size = sizeof(ros_message->longit_torque_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longit_torque
  {
    size_t item_size = sizeof(ros_message->longit_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longit_acc_valid
  {
    size_t item_size = sizeof(ros_message->longit_acc_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longit_acc
  {
    size_t item_size = sizeof(ros_message->longit_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longit_flt
  {
    size_t item_size = sizeof(ros_message->longit_flt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_lamp_lever_state
  {
    size_t item_size = sizeof(ros_message->turn_lamp_lever_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_lamp_left
  {
    size_t item_size = sizeof(ros_message->turn_lamp_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_lamp_right
  {
    size_t item_size = sizeof(ros_message->turn_lamp_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hazard_lamp
  {
    size_t item_size = sizeof(ros_message->hazard_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wiper_front
  {
    size_t item_size = sizeof(ros_message->wiper_front);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_open_state
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->door_open_state;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name late_acc
  {
    size_t item_size = sizeof(ros_message->late_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate
  {
    size_t item_size = sizeof(ros_message->yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slope
  {
    size_t item_size = sizeof(ros_message->slope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name standstill
  {
    size_t item_size = sizeof(ros_message->standstill);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pedal_valid
  {
    size_t item_size = sizeof(ros_message->pedal_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pedal

  current_alignment += get_serialized_size_deva_control_msgs__msg__VehicleReportPedal(
    &(ros_message->pedal), current_alignment);
  // field.name wheelspeed_rc_valid
  {
    size_t item_size = sizeof(ros_message->wheelspeed_rc_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelspeed_rc

  current_alignment += get_serialized_size_deva_control_msgs__msg__WheelSpeed(
    &(ros_message->wheelspeed_rc), current_alignment);
  // field.name belt_valid
  {
    size_t item_size = sizeof(ros_message->belt_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name belt

  current_alignment += get_serialized_size_deva_control_msgs__msg__VehicleReportBelt(
    &(ros_message->belt), current_alignment);
  // field.name bywire_exit_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bywire_exit_reason.size + 1);
  // field.name request_cancel
  {
    size_t item_size = sizeof(ros_message->request_cancel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name action_brake
  {
    size_t item_size = sizeof(ros_message->action_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name action_throttle
  {
    size_t item_size = sizeof(ros_message->action_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name action_steer
  {
    size_t item_size = sizeof(ros_message->action_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heavy_action_steer
  {
    size_t item_size = sizeof(ros_message->heavy_action_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sustain_action_throttle
  {
    size_t item_size = sizeof(ros_message->sustain_action_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sustain_action_steer
  {
    size_t item_size = sizeof(ros_message->sustain_action_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleReportCommon__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_control_msgs__msg__VehicleReportCommon(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_control_msgs
size_t max_serialized_size_deva_control_msgs__msg__VehicleReportCommon(
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
  // member: unix_ts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed_directivity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wheelspeed_directivity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wheelspeed_valid
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wheelspeed_dir
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wheelspeed
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: epb_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: epb_flt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: late_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: late_driveover
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_angle_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steer_rotate_angle_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steer_torque_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steer_rotate_torque_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: late_flt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: longit_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: longit_driveover
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: longit_torque_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: longit_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: longit_acc_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: longit_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: longit_flt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_lamp_lever_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_lamp_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_lamp_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hazard_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wiper_front
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_open_state
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: late_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: slope
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: standstill
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pedal_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pedal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_control_msgs__msg__VehicleReportPedal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: wheelspeed_rc_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wheelspeed_rc
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_control_msgs__msg__WheelSpeed(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: belt_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: belt
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_control_msgs__msg__VehicleReportBelt(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: bywire_exit_reason
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
  // member: request_cancel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: action_brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: action_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: action_steer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heavy_action_steer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sustain_action_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sustain_action_steer
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
    using DataType = deva_control_msgs__msg__VehicleReportCommon;
    is_plain =
      (
      offsetof(DataType, sustain_action_steer) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VehicleReportCommon__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_control_msgs__msg__VehicleReportCommon(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleReportCommon = {
  "deva_control_msgs::msg",
  "VehicleReportCommon",
  _VehicleReportCommon__cdr_serialize,
  _VehicleReportCommon__cdr_deserialize,
  _VehicleReportCommon__get_serialized_size,
  _VehicleReportCommon__max_serialized_size
};

static rosidl_message_type_support_t _VehicleReportCommon__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleReportCommon,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, VehicleReportCommon)() {
  return &_VehicleReportCommon__type_support;
}

#if defined(__cplusplus)
}
#endif
