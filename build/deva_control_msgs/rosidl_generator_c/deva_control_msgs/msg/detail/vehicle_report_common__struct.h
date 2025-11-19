// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_control_msgs:msg/VehicleReportCommon.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_COMMON__STRUCT_H_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_COMMON__STRUCT_H_

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
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'protocol_version'
// Member 'bywire_exit_reason'
#include "rosidl_runtime_c/string.h"
// Member 'pedal'
#include "deva_control_msgs/msg/detail/vehicle_report_pedal__struct.h"
// Member 'wheelspeed_rc'
#include "deva_control_msgs/msg/detail/wheel_speed__struct.h"
// Member 'belt'
#include "deva_control_msgs/msg/detail/vehicle_report_belt__struct.h"

/// Struct defined in msg/VehicleReportCommon in the package deva_control_msgs.
typedef struct deva_control_msgs__msg__VehicleReportCommon
{
  deva_common_msgs__msg__Header header;
  /// 消息协议版本号，更改消息后需要增加版本号，保持默认值方式
  rosidl_runtime_c__String protocol_version;
  double unix_ts;
  /// 车速 km/h
  float speed;
  /// 车速是否有效
  bool speed_valid;
  /// 车速是否具有方向性
  bool speed_directivity;
  /// 轮速是否具有方向性
  bool wheelspeed_directivity;
  /// 轮速是否有效，顺序为[FL,FR,RL,RR]
  bool wheelspeed_valid[4];
  /// 轮速方向，顺序为[FL, FR, RL, RR]。 0:无效，1:静止，2:前向，3:后向
  uint8_t wheelspeed_dir[4];
  /// 四个轮的轮速 km/h, 顺序为[FL, FR, RL ,RR]
  float wheelspeed[4];
  /// 档位控制使能状态
  bool gear_enable;
  /// 当前档位值 0:无效 1:P, 2:R, 3:N, 4:D
  uint8_t gear;
  /// 电子手刹状态： 0：无效，1：释放中，2：制动状态，3：制动生效中，4：释放状态
  uint8_t epb_state;
  /// 电子手刹控制响应故障码：0：无故障，1：下发命令无效，2：多节点控制冲突，3：与挡位冲突，4：车辆未响应，5：车辆反馈错误，6：其他
  uint8_t epb_flt;
  /// 横向控制线控使能状态
  bool late_enable;
  /// 横向控制人工接管状态
  bool late_driveover;
  /// 方向盘角度是否有效
  bool steer_angle_valid;
  /// 当前方向盘角度值 deg, 左转时为正值，右转时为负值
  float steer_angle;
  /// 方向盘转动角速度
  float steer_rotate_angle_speed;
  /// 方向盘力矩是否有效
  bool steer_torque_valid;
  /// 方向盘力矩
  float steer_torque;
  /// 方向盘转动力矩速度, 预留
  float steer_rotate_torque_speed;
  /// 横向控制故障码，预留
  uint8_t late_flt;
  /// 纵向控制线控使能状态
  bool longit_enable;
  /// 纵向控制人工接管状态
  bool longit_driveover;
  /// 纵向控制力矩有效性
  bool longit_torque_valid;
  /// 纵向控制实际力矩值
  float longit_torque;
  /// 纵向控制加速度值有效性
  bool longit_acc_valid;
  /// 纵向控制实际加速度
  float longit_acc;
  /// 纵向控制故障码, 预留
  uint8_t longit_flt;
  /// 转向拨杆状态：0：默认，1：左转，2：右转，other：无效
  uint8_t turn_lamp_lever_state;
  /// 左转向灯点亮状态
  bool turn_lamp_left;
  /// 右转向灯点亮状态
  bool turn_lamp_right;
  /// 告警灯点亮状态
  bool hazard_lamp;
  /// 前雨刷器启动状态
  bool wiper_front;
  /// 四车门关闭状态，顺序为[FL, FR, RL, RR]
  bool door_open_state[4];
  /// 车辆运行横向加速度
  float late_acc;
  /// yawrate
  float yaw_rate;
  /// 坡度单位rad
  float slope;
  /// 车辆运行状态，0:本车辆不反馈此信号，1:无效值，2:停止状态，3:运行状态（非停止状态），4:前向运行，5:后向运行
  uint8_t standstill;
  /// 踏板数据有效
  bool pedal_valid;
  /// 踏板数据
  deva_control_msgs__msg__VehicleReportPedal pedal;
  /// 轮速计数据是否有效
  bool wheelspeed_rc_valid;
  /// 轮速数据
  deva_control_msgs__msg__WheelSpeed wheelspeed_rc;
  /// ASE3特有数据有效
  bool belt_valid;
  /// 安全带数据
  deva_control_msgs__msg__VehicleReportBelt belt;
  /// 退出线控原因
  rosidl_runtime_c__String bywire_exit_reason;
  /// 请求或取消信号：
  /// 0x00：无请求；0x01：横纵向同时; 0x02：单独横向；0x03：单独纵向； 0x04：独立横向和纵向（预留）
  /// 0x11：取消所有请求；0x12: 取消横向（预留）；0x13: 取消纵向（预留）；
  uint8_t request_cancel;
  /// 司机有操作刹车踏板动作
  uint8_t action_brake;
  /// 司机有操作加速踏板动作
  uint8_t action_throttle;
  /// 司机有操作方向盘动作
  uint8_t action_steer;
  /// 司机有重掰方向盘动作（预留）
  uint8_t heavy_action_steer;
  /// 司机持续120s操作加速踏板
  uint8_t sustain_action_throttle;
  /// 司机持续120s操作方向盘
  uint8_t sustain_action_steer;
} deva_control_msgs__msg__VehicleReportCommon;

// Struct for a sequence of deva_control_msgs__msg__VehicleReportCommon.
typedef struct deva_control_msgs__msg__VehicleReportCommon__Sequence
{
  deva_control_msgs__msg__VehicleReportCommon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_control_msgs__msg__VehicleReportCommon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_COMMON__STRUCT_H_
