// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_control_msgs:msg/VehicleControlCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__STRUCT_H_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'protocol_version'
// Member 'control_ready_false_reason'
#include "rosidl_runtime_c/string.h"
// Member 'steer_angle_rate_limit'
// Member 'steer_tq_limit'
// Member 'longit_tq_limit'
// Member 'longit_jerk_limit'
#include "deva_control_msgs/msg/detail/control_valid_limit__struct.h"

/// Struct defined in msg/VehicleControlCommand in the package deva_control_msgs.
typedef struct deva_control_msgs__msg__VehicleControlCommand
{
  std_msgs__msg__Header header;
  /// 消息协议版本号，更改消息后需要增加版本号，保持默认值方式
  rosidl_runtime_c__String protocol_version;
  /// 横向控制目标模式，可使用以下几种模式，之外的值无效：
  /// 1：方向盘角度目标控制；控制量为steering_target字段；
  /// 2：前轮角度目标控制; 控制量为front_wheel_target字段；
  /// 3：力矩目标控制；控制量为eps_torque字段；
  int8_t late_mode;
  /// EPS力矩控制目标值（Nm）
  double eps_torque;
  /// 前轮控制目标角度（deg）
  double front_wheel_target;
  /// 方向盘控制目标角度 (deg)
  double steering_target;
  /// 纵向控制目标模式，可使用以下几种模式，之外的值无效：
  /// 1：加速度为控制目标；控制量为acceleration字段；
  /// 2：速度为控制目标; 控制量为speed字段；
  /// 3: 力矩控制; 控制量为longit_torque字段；
  /// 4: 目标距离和速度控制，控制量为target_distance和speed字段
  /// 5：踏板开度控制模式；控制量为throttle和brake字段
  int8_t long_mode;
  /// 速度控制目标速度（km/h）
  double speed;
  /// 纵向控制加速度值 (m/s2)
  double acceleration;
  /// 纵向控制力矩输出值 (Nm)
  double longit_torque;
  /// 纵向控制距离 (m)
  double target_distance;
  /// 油门控制值 [0.0, 1.0]
  double throttle;
  /// 制动控制值 [0.0, 1.0]
  double brake;
  /// 限制值控制是否使能，默认false不使能限制值，下面所有的ControlValidLimit限制类型都无效
  /// 需要设置某一项限制值是，将limit_command_enable设置为true，并将对应的限制字段设置有效
  bool limit_command_enable;
  /// 方向盘转动角速度限制，具体限制值单位为deg/s
  deva_control_msgs__msg__ControlValidLimit steer_angle_rate_limit;
  /// 方向盘转动力矩限制, 具体限制值的单位为Nm
  deva_control_msgs__msg__ControlValidLimit steer_tq_limit;
  /// 纵向驱动力矩限制, 具体限制值的单位为Nm
  deva_control_msgs__msg__ControlValidLimit longit_tq_limit;
  /// 纵向急动度（加加速度，加速度变化率）限制, 具体限制值的单位为m/s3
  deva_control_msgs__msg__ControlValidLimit longit_jerk_limit;
  /// 控制算法是否准备好接入线控
  bool ready;
  /// 控制接口失败原因
  rosidl_runtime_c__String control_ready_false_reason;
  /// 控制模式，在行车和泊车分开控制的车辆上有效。0：无效；1：行车控制；2：泊车控制；3：AVP模式；其他无效
  uint8_t control_mode;
} deva_control_msgs__msg__VehicleControlCommand;

// Struct for a sequence of deva_control_msgs__msg__VehicleControlCommand.
typedef struct deva_control_msgs__msg__VehicleControlCommand__Sequence
{
  deva_control_msgs__msg__VehicleControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_control_msgs__msg__VehicleControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__STRUCT_H_
