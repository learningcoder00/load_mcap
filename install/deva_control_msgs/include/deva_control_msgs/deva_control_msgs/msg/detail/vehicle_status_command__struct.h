// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_control_msgs:msg/VehicleStatusCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_STATUS_COMMAND__STRUCT_H_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_STATUS_COMMAND__STRUCT_H_

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
// Member 'node_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VehicleStatusCommand in the package deva_control_msgs.
typedef struct deva_control_msgs__msg__VehicleStatusCommand
{
  std_msgs__msg__Header header;
  /// 消息协议版本号，更改消息后需要增加版本号，保持默认值方式
  rosidl_runtime_c__String protocol_version;
  /// 发送命令节点的节点名
  rosidl_runtime_c__String node_name;
  /// 使用档位控制命令，为true时下面的档位控制命令字段有效
  bool use_gear_cmd;
  /// 档位控制使能
  bool gear_en;
  /// 档位控制输出档位值 1:P, 2:R, 3:N, 4:D
  int8_t gear_cmd_val;
  /// 使用EPB控制命令，为true时下面的EPB控制命令字段有效
  bool use_epb_cmd;
  /// EPB控制使能
  bool epb_en;
  /// EPB控制值，0:无效，1:释放EPB，2:拉紧EPB
  int8_t epb_cmd_val;
  /// 使用转向灯控制命令，为true时下面的转向灯控制命令字段有效
  bool use_turn_light_cmd;
  /// 转向灯控制使能
  bool turn_light_en;
  /// 转向灯控制值 0：关闭转向灯， 1：左转， 2：右转，3：双闪
  uint8_t turn_light_cmd;
  /// 使用雨刷器控制命令，为true时下面的雨刷器控制命令字段有效
  bool use_wiper_cmd;
  /// 雨刷器控制使能
  bool wiper_en;
  /// 雨刷器控制命令 0：关闭， 1：打开
  bool wiper_cmd;
  /// 使用线控使能命令，为true时下面的线控使能字段有效
  bool use_bywire_enable_cmd;
  /// 横向控制使能
  bool lateral_en;
  /// 纵向控制使能
  bool longitudinal_en;
  /// 使用泊车命令，为true时下面的字段有效
  bool use_park_cmd;
  /// 泊车动作：
  /// 0：无效，
  /// 1：准备状态，
  /// 2：开始泊车，
  /// 3：泊车中，
  /// 4：泊车完成，
  /// 5：泊车中止，
  /// 6：泊车中取消，
  /// 7：泊车中错误，
  /// 8： 其他错误
  uint8_t park_action;
} deva_control_msgs__msg__VehicleStatusCommand;

// Struct for a sequence of deva_control_msgs__msg__VehicleStatusCommand.
typedef struct deva_control_msgs__msg__VehicleStatusCommand__Sequence
{
  deva_control_msgs__msg__VehicleStatusCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_control_msgs__msg__VehicleStatusCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_STATUS_COMMAND__STRUCT_H_
