// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_control_msgs:msg/ControlMonitorMsg.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/control_monitor_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_control_msgs/msg/detail/control_monitor_msg__struct.h"
#include "deva_control_msgs/msg/detail/control_monitor_msg__functions.h"
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

#include "deva_planning_msgs2/msg/detail/planning_trajectory__functions.h"  // openloop_trajectory
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
size_t get_serialized_size_deva_planning_msgs2__msg__PlanningTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
size_t max_serialized_size_deva_planning_msgs2__msg__PlanningTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, PlanningTrajectory)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ControlMonitorMsg__ros_msg_type = deva_control_msgs__msg__ControlMonitorMsg;

static bool _ControlMonitorMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlMonitorMsg__ros_msg_type * ros_message = static_cast<const _ControlMonitorMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: in_auto_drive
  {
    cdr << (ros_message->in_auto_drive ? true : false);
  }

  // Field name: chs_yaw_rate
  {
    cdr << ros_message->chs_yaw_rate;
  }

  // Field name: chs_speed
  {
    cdr << ros_message->chs_speed;
  }

  // Field name: chs_steer
  {
    cdr << ros_message->chs_steer;
  }

  // Field name: chs_longit_acc
  {
    cdr << ros_message->chs_longit_acc;
  }

  // Field name: chs_longit_torque
  {
    cdr << ros_message->chs_longit_torque;
  }

  // Field name: chs_gear
  {
    cdr << ros_message->chs_gear;
  }

  // Field name: loc_x
  {
    cdr << ros_message->loc_x;
  }

  // Field name: loc_y
  {
    cdr << ros_message->loc_y;
  }

  // Field name: loc_z
  {
    cdr << ros_message->loc_z;
  }

  // Field name: loc_speed
  {
    cdr << ros_message->loc_speed;
  }

  // Field name: loc_acc
  {
    cdr << ros_message->loc_acc;
  }

  // Field name: loc_heading
  {
    cdr << ros_message->loc_heading;
  }

  // Field name: loc_pitch
  {
    cdr << ros_message->loc_pitch;
  }

  // Field name: preview_path_x
  {
    cdr << ros_message->preview_path_x;
  }

  // Field name: preview_path_y
  {
    cdr << ros_message->preview_path_y;
  }

  // Field name: preview_path_theta
  {
    cdr << ros_message->preview_path_theta;
  }

  // Field name: matched_path_x
  {
    cdr << ros_message->matched_path_x;
  }

  // Field name: matched_path_y
  {
    cdr << ros_message->matched_path_y;
  }

  // Field name: matched_path_theta
  {
    cdr << ros_message->matched_path_theta;
  }

  // Field name: matched_path_kappa
  {
    cdr << ros_message->matched_path_kappa;
  }

  // Field name: matched_path_s
  {
    cdr << ros_message->matched_path_s;
  }

  // Field name: matched_path_v
  {
    cdr << ros_message->matched_path_v;
  }

  // Field name: matched_path_a
  {
    cdr << ros_message->matched_path_a;
  }

  // Field name: current_station
  {
    cdr << ros_message->current_station;
  }

  // Field name: station_ref
  {
    cdr << ros_message->station_ref;
  }

  // Field name: station_error
  {
    cdr << ros_message->station_error;
  }

  // Field name: current_speed
  {
    cdr << ros_message->current_speed;
  }

  // Field name: speed_ref
  {
    cdr << ros_message->speed_ref;
  }

  // Field name: preview_speed_ref
  {
    cdr << ros_message->preview_speed_ref;
  }

  // Field name: speed_error
  {
    cdr << ros_message->speed_error;
  }

  // Field name: acc_ref
  {
    cdr << ros_message->acc_ref;
  }

  // Field name: preview_acc_ref
  {
    cdr << ros_message->preview_acc_ref;
  }

  // Field name: actual_acc
  {
    cdr << ros_message->actual_acc;
  }

  // Field name: lat_d
  {
    cdr << ros_message->lat_d;
  }

  // Field name: lat_d_rate
  {
    cdr << ros_message->lat_d_rate;
  }

  // Field name: heading_d_rate
  {
    cdr << ros_message->heading_d_rate;
  }

  // Field name: heading_d
  {
    cdr << ros_message->heading_d;
  }

  // Field name: pre_lat_d
  {
    cdr << ros_message->pre_lat_d;
  }

  // Field name: pre_lat_theta
  {
    cdr << ros_message->pre_lat_theta;
  }

  // Field name: cmd_steer
  {
    cdr << ros_message->cmd_steer;
  }

  // Field name: cmd_acc
  {
    cdr << ros_message->cmd_acc;
  }

  // Field name: control_computation_time
  {
    cdr << ros_message->control_computation_time;
  }

  // Field name: loc_header_time
  {
    cdr << ros_message->loc_header_time;
  }

  // Field name: chas_header_time
  {
    cdr << ros_message->chas_header_time;
  }

  // Field name: planning_header_time
  {
    cdr << ros_message->planning_header_time;
  }

  // Field name: openloop_trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, PlanningTrajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->openloop_trajectory, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ControlMonitorMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlMonitorMsg__ros_msg_type * ros_message = static_cast<_ControlMonitorMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: in_auto_drive
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_auto_drive = tmp ? true : false;
  }

  // Field name: chs_yaw_rate
  {
    cdr >> ros_message->chs_yaw_rate;
  }

  // Field name: chs_speed
  {
    cdr >> ros_message->chs_speed;
  }

  // Field name: chs_steer
  {
    cdr >> ros_message->chs_steer;
  }

  // Field name: chs_longit_acc
  {
    cdr >> ros_message->chs_longit_acc;
  }

  // Field name: chs_longit_torque
  {
    cdr >> ros_message->chs_longit_torque;
  }

  // Field name: chs_gear
  {
    cdr >> ros_message->chs_gear;
  }

  // Field name: loc_x
  {
    cdr >> ros_message->loc_x;
  }

  // Field name: loc_y
  {
    cdr >> ros_message->loc_y;
  }

  // Field name: loc_z
  {
    cdr >> ros_message->loc_z;
  }

  // Field name: loc_speed
  {
    cdr >> ros_message->loc_speed;
  }

  // Field name: loc_acc
  {
    cdr >> ros_message->loc_acc;
  }

  // Field name: loc_heading
  {
    cdr >> ros_message->loc_heading;
  }

  // Field name: loc_pitch
  {
    cdr >> ros_message->loc_pitch;
  }

  // Field name: preview_path_x
  {
    cdr >> ros_message->preview_path_x;
  }

  // Field name: preview_path_y
  {
    cdr >> ros_message->preview_path_y;
  }

  // Field name: preview_path_theta
  {
    cdr >> ros_message->preview_path_theta;
  }

  // Field name: matched_path_x
  {
    cdr >> ros_message->matched_path_x;
  }

  // Field name: matched_path_y
  {
    cdr >> ros_message->matched_path_y;
  }

  // Field name: matched_path_theta
  {
    cdr >> ros_message->matched_path_theta;
  }

  // Field name: matched_path_kappa
  {
    cdr >> ros_message->matched_path_kappa;
  }

  // Field name: matched_path_s
  {
    cdr >> ros_message->matched_path_s;
  }

  // Field name: matched_path_v
  {
    cdr >> ros_message->matched_path_v;
  }

  // Field name: matched_path_a
  {
    cdr >> ros_message->matched_path_a;
  }

  // Field name: current_station
  {
    cdr >> ros_message->current_station;
  }

  // Field name: station_ref
  {
    cdr >> ros_message->station_ref;
  }

  // Field name: station_error
  {
    cdr >> ros_message->station_error;
  }

  // Field name: current_speed
  {
    cdr >> ros_message->current_speed;
  }

  // Field name: speed_ref
  {
    cdr >> ros_message->speed_ref;
  }

  // Field name: preview_speed_ref
  {
    cdr >> ros_message->preview_speed_ref;
  }

  // Field name: speed_error
  {
    cdr >> ros_message->speed_error;
  }

  // Field name: acc_ref
  {
    cdr >> ros_message->acc_ref;
  }

  // Field name: preview_acc_ref
  {
    cdr >> ros_message->preview_acc_ref;
  }

  // Field name: actual_acc
  {
    cdr >> ros_message->actual_acc;
  }

  // Field name: lat_d
  {
    cdr >> ros_message->lat_d;
  }

  // Field name: lat_d_rate
  {
    cdr >> ros_message->lat_d_rate;
  }

  // Field name: heading_d_rate
  {
    cdr >> ros_message->heading_d_rate;
  }

  // Field name: heading_d
  {
    cdr >> ros_message->heading_d;
  }

  // Field name: pre_lat_d
  {
    cdr >> ros_message->pre_lat_d;
  }

  // Field name: pre_lat_theta
  {
    cdr >> ros_message->pre_lat_theta;
  }

  // Field name: cmd_steer
  {
    cdr >> ros_message->cmd_steer;
  }

  // Field name: cmd_acc
  {
    cdr >> ros_message->cmd_acc;
  }

  // Field name: control_computation_time
  {
    cdr >> ros_message->control_computation_time;
  }

  // Field name: loc_header_time
  {
    cdr >> ros_message->loc_header_time;
  }

  // Field name: chas_header_time
  {
    cdr >> ros_message->chas_header_time;
  }

  // Field name: planning_header_time
  {
    cdr >> ros_message->planning_header_time;
  }

  // Field name: openloop_trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, PlanningTrajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->openloop_trajectory))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_control_msgs
size_t get_serialized_size_deva_control_msgs__msg__ControlMonitorMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlMonitorMsg__ros_msg_type * ros_message = static_cast<const _ControlMonitorMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name in_auto_drive
  {
    size_t item_size = sizeof(ros_message->in_auto_drive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chs_yaw_rate
  {
    size_t item_size = sizeof(ros_message->chs_yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chs_speed
  {
    size_t item_size = sizeof(ros_message->chs_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chs_steer
  {
    size_t item_size = sizeof(ros_message->chs_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chs_longit_acc
  {
    size_t item_size = sizeof(ros_message->chs_longit_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chs_longit_torque
  {
    size_t item_size = sizeof(ros_message->chs_longit_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chs_gear
  {
    size_t item_size = sizeof(ros_message->chs_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loc_x
  {
    size_t item_size = sizeof(ros_message->loc_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loc_y
  {
    size_t item_size = sizeof(ros_message->loc_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loc_z
  {
    size_t item_size = sizeof(ros_message->loc_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loc_speed
  {
    size_t item_size = sizeof(ros_message->loc_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loc_acc
  {
    size_t item_size = sizeof(ros_message->loc_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loc_heading
  {
    size_t item_size = sizeof(ros_message->loc_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loc_pitch
  {
    size_t item_size = sizeof(ros_message->loc_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name preview_path_x
  {
    size_t item_size = sizeof(ros_message->preview_path_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name preview_path_y
  {
    size_t item_size = sizeof(ros_message->preview_path_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name preview_path_theta
  {
    size_t item_size = sizeof(ros_message->preview_path_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matched_path_x
  {
    size_t item_size = sizeof(ros_message->matched_path_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matched_path_y
  {
    size_t item_size = sizeof(ros_message->matched_path_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matched_path_theta
  {
    size_t item_size = sizeof(ros_message->matched_path_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matched_path_kappa
  {
    size_t item_size = sizeof(ros_message->matched_path_kappa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matched_path_s
  {
    size_t item_size = sizeof(ros_message->matched_path_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matched_path_v
  {
    size_t item_size = sizeof(ros_message->matched_path_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matched_path_a
  {
    size_t item_size = sizeof(ros_message->matched_path_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_station
  {
    size_t item_size = sizeof(ros_message->current_station);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name station_ref
  {
    size_t item_size = sizeof(ros_message->station_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name station_error
  {
    size_t item_size = sizeof(ros_message->station_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_speed
  {
    size_t item_size = sizeof(ros_message->current_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_ref
  {
    size_t item_size = sizeof(ros_message->speed_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name preview_speed_ref
  {
    size_t item_size = sizeof(ros_message->preview_speed_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_error
  {
    size_t item_size = sizeof(ros_message->speed_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_ref
  {
    size_t item_size = sizeof(ros_message->acc_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name preview_acc_ref
  {
    size_t item_size = sizeof(ros_message->preview_acc_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actual_acc
  {
    size_t item_size = sizeof(ros_message->actual_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_d
  {
    size_t item_size = sizeof(ros_message->lat_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_d_rate
  {
    size_t item_size = sizeof(ros_message->lat_d_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_d_rate
  {
    size_t item_size = sizeof(ros_message->heading_d_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_d
  {
    size_t item_size = sizeof(ros_message->heading_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pre_lat_d
  {
    size_t item_size = sizeof(ros_message->pre_lat_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pre_lat_theta
  {
    size_t item_size = sizeof(ros_message->pre_lat_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_steer
  {
    size_t item_size = sizeof(ros_message->cmd_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_acc
  {
    size_t item_size = sizeof(ros_message->cmd_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_computation_time
  {
    size_t item_size = sizeof(ros_message->control_computation_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loc_header_time
  {
    size_t item_size = sizeof(ros_message->loc_header_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chas_header_time
  {
    size_t item_size = sizeof(ros_message->chas_header_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name planning_header_time
  {
    size_t item_size = sizeof(ros_message->planning_header_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name openloop_trajectory

  current_alignment += get_serialized_size_deva_planning_msgs2__msg__PlanningTrajectory(
    &(ros_message->openloop_trajectory), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ControlMonitorMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_control_msgs__msg__ControlMonitorMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_control_msgs
size_t max_serialized_size_deva_control_msgs__msg__ControlMonitorMsg(
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
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: in_auto_drive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: chs_yaw_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: chs_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: chs_steer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: chs_longit_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: chs_longit_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: chs_gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: loc_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: loc_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: loc_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: loc_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: loc_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: loc_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: loc_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: preview_path_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: preview_path_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: preview_path_theta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matched_path_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matched_path_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matched_path_theta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matched_path_kappa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matched_path_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matched_path_v
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matched_path_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_station
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: station_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: station_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: preview_speed_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: preview_acc_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: actual_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lat_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lat_d_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: heading_d_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: heading_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pre_lat_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pre_lat_theta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cmd_steer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cmd_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: control_computation_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: loc_header_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: chas_header_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: planning_header_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: openloop_trajectory
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_planning_msgs2__msg__PlanningTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_control_msgs__msg__ControlMonitorMsg;
    is_plain =
      (
      offsetof(DataType, openloop_trajectory) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControlMonitorMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_control_msgs__msg__ControlMonitorMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControlMonitorMsg = {
  "deva_control_msgs::msg",
  "ControlMonitorMsg",
  _ControlMonitorMsg__cdr_serialize,
  _ControlMonitorMsg__cdr_deserialize,
  _ControlMonitorMsg__get_serialized_size,
  _ControlMonitorMsg__max_serialized_size
};

static rosidl_message_type_support_t _ControlMonitorMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlMonitorMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, ControlMonitorMsg)() {
  return &_ControlMonitorMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
