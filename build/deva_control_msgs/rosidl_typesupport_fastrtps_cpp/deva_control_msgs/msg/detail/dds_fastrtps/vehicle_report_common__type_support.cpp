// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_control_msgs:msg/VehicleReportCommon.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/vehicle_report_common__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_control_msgs/msg/detail/vehicle_report_common__struct.hpp"

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
  const deva_control_msgs::msg::VehicleReportPedal &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_control_msgs::msg::VehicleReportPedal &);
size_t get_serialized_size(
  const deva_control_msgs::msg::VehicleReportPedal &,
  size_t current_alignment);
size_t
max_serialized_size_VehicleReportPedal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_control_msgs

namespace deva_control_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_control_msgs::msg::WheelSpeed &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_control_msgs::msg::WheelSpeed &);
size_t get_serialized_size(
  const deva_control_msgs::msg::WheelSpeed &,
  size_t current_alignment);
size_t
max_serialized_size_WheelSpeed(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_control_msgs

namespace deva_control_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_control_msgs::msg::VehicleReportBelt &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_control_msgs::msg::VehicleReportBelt &);
size_t get_serialized_size(
  const deva_control_msgs::msg::VehicleReportBelt &,
  size_t current_alignment);
size_t
max_serialized_size_VehicleReportBelt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_control_msgs


namespace deva_control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
cdr_serialize(
  const deva_control_msgs::msg::VehicleReportCommon & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: protocol_version
  cdr << ros_message.protocol_version;
  // Member: unix_ts
  cdr << ros_message.unix_ts;
  // Member: speed
  cdr << ros_message.speed;
  // Member: speed_valid
  cdr << (ros_message.speed_valid ? true : false);
  // Member: speed_directivity
  cdr << (ros_message.speed_directivity ? true : false);
  // Member: wheelspeed_directivity
  cdr << (ros_message.wheelspeed_directivity ? true : false);
  // Member: wheelspeed_valid
  {
    cdr << ros_message.wheelspeed_valid;
  }
  // Member: wheelspeed_dir
  {
    cdr << ros_message.wheelspeed_dir;
  }
  // Member: wheelspeed
  {
    cdr << ros_message.wheelspeed;
  }
  // Member: gear_enable
  cdr << (ros_message.gear_enable ? true : false);
  // Member: gear
  cdr << ros_message.gear;
  // Member: epb_state
  cdr << ros_message.epb_state;
  // Member: epb_flt
  cdr << ros_message.epb_flt;
  // Member: late_enable
  cdr << (ros_message.late_enable ? true : false);
  // Member: late_driveover
  cdr << (ros_message.late_driveover ? true : false);
  // Member: steer_angle_valid
  cdr << (ros_message.steer_angle_valid ? true : false);
  // Member: steer_angle
  cdr << ros_message.steer_angle;
  // Member: steer_rotate_angle_speed
  cdr << ros_message.steer_rotate_angle_speed;
  // Member: steer_torque_valid
  cdr << (ros_message.steer_torque_valid ? true : false);
  // Member: steer_torque
  cdr << ros_message.steer_torque;
  // Member: steer_rotate_torque_speed
  cdr << ros_message.steer_rotate_torque_speed;
  // Member: late_flt
  cdr << ros_message.late_flt;
  // Member: longit_enable
  cdr << (ros_message.longit_enable ? true : false);
  // Member: longit_driveover
  cdr << (ros_message.longit_driveover ? true : false);
  // Member: longit_torque_valid
  cdr << (ros_message.longit_torque_valid ? true : false);
  // Member: longit_torque
  cdr << ros_message.longit_torque;
  // Member: longit_acc_valid
  cdr << (ros_message.longit_acc_valid ? true : false);
  // Member: longit_acc
  cdr << ros_message.longit_acc;
  // Member: longit_flt
  cdr << ros_message.longit_flt;
  // Member: turn_lamp_lever_state
  cdr << ros_message.turn_lamp_lever_state;
  // Member: turn_lamp_left
  cdr << (ros_message.turn_lamp_left ? true : false);
  // Member: turn_lamp_right
  cdr << (ros_message.turn_lamp_right ? true : false);
  // Member: hazard_lamp
  cdr << (ros_message.hazard_lamp ? true : false);
  // Member: wiper_front
  cdr << (ros_message.wiper_front ? true : false);
  // Member: door_open_state
  {
    cdr << ros_message.door_open_state;
  }
  // Member: late_acc
  cdr << ros_message.late_acc;
  // Member: yaw_rate
  cdr << ros_message.yaw_rate;
  // Member: slope
  cdr << ros_message.slope;
  // Member: standstill
  cdr << ros_message.standstill;
  // Member: pedal_valid
  cdr << (ros_message.pedal_valid ? true : false);
  // Member: pedal
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pedal,
    cdr);
  // Member: wheelspeed_rc_valid
  cdr << (ros_message.wheelspeed_rc_valid ? true : false);
  // Member: wheelspeed_rc
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.wheelspeed_rc,
    cdr);
  // Member: belt_valid
  cdr << (ros_message.belt_valid ? true : false);
  // Member: belt
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.belt,
    cdr);
  // Member: bywire_exit_reason
  cdr << ros_message.bywire_exit_reason;
  // Member: request_cancel
  cdr << ros_message.request_cancel;
  // Member: action_brake
  cdr << ros_message.action_brake;
  // Member: action_throttle
  cdr << ros_message.action_throttle;
  // Member: action_steer
  cdr << ros_message.action_steer;
  // Member: heavy_action_steer
  cdr << ros_message.heavy_action_steer;
  // Member: sustain_action_throttle
  cdr << ros_message.sustain_action_throttle;
  // Member: sustain_action_steer
  cdr << ros_message.sustain_action_steer;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_control_msgs::msg::VehicleReportCommon & ros_message)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: protocol_version
  cdr >> ros_message.protocol_version;

  // Member: unix_ts
  cdr >> ros_message.unix_ts;

  // Member: speed
  cdr >> ros_message.speed;

  // Member: speed_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.speed_valid = tmp ? true : false;
  }

  // Member: speed_directivity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.speed_directivity = tmp ? true : false;
  }

  // Member: wheelspeed_directivity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wheelspeed_directivity = tmp ? true : false;
  }

  // Member: wheelspeed_valid
  {
    cdr >> ros_message.wheelspeed_valid;
  }

  // Member: wheelspeed_dir
  {
    cdr >> ros_message.wheelspeed_dir;
  }

  // Member: wheelspeed
  {
    cdr >> ros_message.wheelspeed;
  }

  // Member: gear_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gear_enable = tmp ? true : false;
  }

  // Member: gear
  cdr >> ros_message.gear;

  // Member: epb_state
  cdr >> ros_message.epb_state;

  // Member: epb_flt
  cdr >> ros_message.epb_flt;

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

  // Member: steer_angle_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.steer_angle_valid = tmp ? true : false;
  }

  // Member: steer_angle
  cdr >> ros_message.steer_angle;

  // Member: steer_rotate_angle_speed
  cdr >> ros_message.steer_rotate_angle_speed;

  // Member: steer_torque_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.steer_torque_valid = tmp ? true : false;
  }

  // Member: steer_torque
  cdr >> ros_message.steer_torque;

  // Member: steer_rotate_torque_speed
  cdr >> ros_message.steer_rotate_torque_speed;

  // Member: late_flt
  cdr >> ros_message.late_flt;

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

  // Member: longit_torque_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.longit_torque_valid = tmp ? true : false;
  }

  // Member: longit_torque
  cdr >> ros_message.longit_torque;

  // Member: longit_acc_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.longit_acc_valid = tmp ? true : false;
  }

  // Member: longit_acc
  cdr >> ros_message.longit_acc;

  // Member: longit_flt
  cdr >> ros_message.longit_flt;

  // Member: turn_lamp_lever_state
  cdr >> ros_message.turn_lamp_lever_state;

  // Member: turn_lamp_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.turn_lamp_left = tmp ? true : false;
  }

  // Member: turn_lamp_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.turn_lamp_right = tmp ? true : false;
  }

  // Member: hazard_lamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.hazard_lamp = tmp ? true : false;
  }

  // Member: wiper_front
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wiper_front = tmp ? true : false;
  }

  // Member: door_open_state
  {
    cdr >> ros_message.door_open_state;
  }

  // Member: late_acc
  cdr >> ros_message.late_acc;

  // Member: yaw_rate
  cdr >> ros_message.yaw_rate;

  // Member: slope
  cdr >> ros_message.slope;

  // Member: standstill
  cdr >> ros_message.standstill;

  // Member: pedal_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pedal_valid = tmp ? true : false;
  }

  // Member: pedal
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pedal);

  // Member: wheelspeed_rc_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wheelspeed_rc_valid = tmp ? true : false;
  }

  // Member: wheelspeed_rc
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.wheelspeed_rc);

  // Member: belt_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.belt_valid = tmp ? true : false;
  }

  // Member: belt
  deva_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.belt);

  // Member: bywire_exit_reason
  cdr >> ros_message.bywire_exit_reason;

  // Member: request_cancel
  cdr >> ros_message.request_cancel;

  // Member: action_brake
  cdr >> ros_message.action_brake;

  // Member: action_throttle
  cdr >> ros_message.action_throttle;

  // Member: action_steer
  cdr >> ros_message.action_steer;

  // Member: heavy_action_steer
  cdr >> ros_message.heavy_action_steer;

  // Member: sustain_action_throttle
  cdr >> ros_message.sustain_action_throttle;

  // Member: sustain_action_steer
  cdr >> ros_message.sustain_action_steer;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
get_serialized_size(
  const deva_control_msgs::msg::VehicleReportCommon & ros_message,
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
  // Member: unix_ts
  {
    size_t item_size = sizeof(ros_message.unix_ts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_valid
  {
    size_t item_size = sizeof(ros_message.speed_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_directivity
  {
    size_t item_size = sizeof(ros_message.speed_directivity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheelspeed_directivity
  {
    size_t item_size = sizeof(ros_message.wheelspeed_directivity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheelspeed_valid
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.wheelspeed_valid[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheelspeed_dir
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.wheelspeed_dir[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheelspeed
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.wheelspeed[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_enable
  {
    size_t item_size = sizeof(ros_message.gear_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear
  {
    size_t item_size = sizeof(ros_message.gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epb_state
  {
    size_t item_size = sizeof(ros_message.epb_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epb_flt
  {
    size_t item_size = sizeof(ros_message.epb_flt);
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
  // Member: steer_angle_valid
  {
    size_t item_size = sizeof(ros_message.steer_angle_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_angle
  {
    size_t item_size = sizeof(ros_message.steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_rotate_angle_speed
  {
    size_t item_size = sizeof(ros_message.steer_rotate_angle_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_torque_valid
  {
    size_t item_size = sizeof(ros_message.steer_torque_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_torque
  {
    size_t item_size = sizeof(ros_message.steer_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_rotate_torque_speed
  {
    size_t item_size = sizeof(ros_message.steer_rotate_torque_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: late_flt
  {
    size_t item_size = sizeof(ros_message.late_flt);
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
  // Member: longit_torque_valid
  {
    size_t item_size = sizeof(ros_message.longit_torque_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longit_torque
  {
    size_t item_size = sizeof(ros_message.longit_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longit_acc_valid
  {
    size_t item_size = sizeof(ros_message.longit_acc_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longit_acc
  {
    size_t item_size = sizeof(ros_message.longit_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longit_flt
  {
    size_t item_size = sizeof(ros_message.longit_flt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_lamp_lever_state
  {
    size_t item_size = sizeof(ros_message.turn_lamp_lever_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_lamp_left
  {
    size_t item_size = sizeof(ros_message.turn_lamp_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_lamp_right
  {
    size_t item_size = sizeof(ros_message.turn_lamp_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hazard_lamp
  {
    size_t item_size = sizeof(ros_message.hazard_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wiper_front
  {
    size_t item_size = sizeof(ros_message.wiper_front);
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
  // Member: late_acc
  {
    size_t item_size = sizeof(ros_message.late_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate
  {
    size_t item_size = sizeof(ros_message.yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slope
  {
    size_t item_size = sizeof(ros_message.slope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: standstill
  {
    size_t item_size = sizeof(ros_message.standstill);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pedal_valid
  {
    size_t item_size = sizeof(ros_message.pedal_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pedal

  current_alignment +=
    deva_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pedal, current_alignment);
  // Member: wheelspeed_rc_valid
  {
    size_t item_size = sizeof(ros_message.wheelspeed_rc_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheelspeed_rc

  current_alignment +=
    deva_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.wheelspeed_rc, current_alignment);
  // Member: belt_valid
  {
    size_t item_size = sizeof(ros_message.belt_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: belt

  current_alignment +=
    deva_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.belt, current_alignment);
  // Member: bywire_exit_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bywire_exit_reason.size() + 1);
  // Member: request_cancel
  {
    size_t item_size = sizeof(ros_message.request_cancel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: action_brake
  {
    size_t item_size = sizeof(ros_message.action_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: action_throttle
  {
    size_t item_size = sizeof(ros_message.action_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: action_steer
  {
    size_t item_size = sizeof(ros_message.action_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heavy_action_steer
  {
    size_t item_size = sizeof(ros_message.heavy_action_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sustain_action_throttle
  {
    size_t item_size = sizeof(ros_message.sustain_action_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sustain_action_steer
  {
    size_t item_size = sizeof(ros_message.sustain_action_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
max_serialized_size_VehicleReportCommon(
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

  // Member: unix_ts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed_directivity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wheelspeed_directivity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wheelspeed_valid
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wheelspeed_dir
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wheelspeed
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear_enable
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

  // Member: epb_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: epb_flt
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

  // Member: steer_angle_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steer_rotate_angle_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steer_torque_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steer_rotate_torque_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: late_flt
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

  // Member: longit_torque_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: longit_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: longit_acc_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: longit_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: longit_flt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_lamp_lever_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_lamp_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_lamp_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hazard_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wiper_front
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

  // Member: late_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: slope
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: standstill
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pedal_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pedal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_VehicleReportPedal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: wheelspeed_rc_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wheelspeed_rc
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WheelSpeed(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: belt_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: belt
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_VehicleReportBelt(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: bywire_exit_reason
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

  // Member: request_cancel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: action_brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: action_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: action_steer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heavy_action_steer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sustain_action_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sustain_action_steer
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
    using DataType = deva_control_msgs::msg::VehicleReportCommon;
    is_plain =
      (
      offsetof(DataType, sustain_action_steer) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VehicleReportCommon__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_control_msgs::msg::VehicleReportCommon *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleReportCommon__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_control_msgs::msg::VehicleReportCommon *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleReportCommon__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_control_msgs::msg::VehicleReportCommon *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleReportCommon__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VehicleReportCommon(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VehicleReportCommon__callbacks = {
  "deva_control_msgs::msg",
  "VehicleReportCommon",
  _VehicleReportCommon__cdr_serialize,
  _VehicleReportCommon__cdr_deserialize,
  _VehicleReportCommon__get_serialized_size,
  _VehicleReportCommon__max_serialized_size
};

static rosidl_message_type_support_t _VehicleReportCommon__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleReportCommon__callbacks,
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
get_message_type_support_handle<deva_control_msgs::msg::VehicleReportCommon>()
{
  return &deva_control_msgs::msg::typesupport_fastrtps_cpp::_VehicleReportCommon__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_control_msgs, msg, VehicleReportCommon)() {
  return &deva_control_msgs::msg::typesupport_fastrtps_cpp::_VehicleReportCommon__handle;
}

#ifdef __cplusplus
}
#endif
