// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_control_msgs:msg/VehicleReportCommon.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_COMMON__STRUCT_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_COMMON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'pedal'
#include "deva_control_msgs/msg/detail/vehicle_report_pedal__struct.hpp"
// Member 'wheelspeed_rc'
#include "deva_control_msgs/msg/detail/wheel_speed__struct.hpp"
// Member 'belt'
#include "deva_control_msgs/msg/detail/vehicle_report_belt__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_control_msgs__msg__VehicleReportCommon __attribute__((deprecated))
#else
# define DEPRECATED__deva_control_msgs__msg__VehicleReportCommon __declspec(deprecated)
#endif

namespace deva_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleReportCommon_
{
  using Type = VehicleReportCommon_<ContainerAllocator>;

  explicit VehicleReportCommon_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pedal(_init),
    wheelspeed_rc(_init),
    belt(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->protocol_version = "2.11";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->protocol_version = "";
      this->unix_ts = 0.0;
      this->speed = 0.0f;
      this->speed_valid = false;
      this->speed_directivity = false;
      this->wheelspeed_directivity = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->wheelspeed_valid.begin(), this->wheelspeed_valid.end(), false);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->wheelspeed_dir.begin(), this->wheelspeed_dir.end(), 0);
      std::fill<typename std::array<float, 4>::iterator, float>(this->wheelspeed.begin(), this->wheelspeed.end(), 0.0f);
      this->gear_enable = false;
      this->gear = 0;
      this->epb_state = 0;
      this->epb_flt = 0;
      this->late_enable = false;
      this->late_driveover = false;
      this->steer_angle_valid = false;
      this->steer_angle = 0.0f;
      this->steer_rotate_angle_speed = 0.0f;
      this->steer_torque_valid = false;
      this->steer_torque = 0.0f;
      this->steer_rotate_torque_speed = 0.0f;
      this->late_flt = 0;
      this->longit_enable = false;
      this->longit_driveover = false;
      this->longit_torque_valid = false;
      this->longit_torque = 0.0f;
      this->longit_acc_valid = false;
      this->longit_acc = 0.0f;
      this->longit_flt = 0;
      this->turn_lamp_lever_state = 0;
      this->turn_lamp_left = false;
      this->turn_lamp_right = false;
      this->hazard_lamp = false;
      this->wiper_front = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->door_open_state.begin(), this->door_open_state.end(), false);
      this->late_acc = 0.0f;
      this->yaw_rate = 0.0f;
      this->slope = 0.0f;
      this->standstill = 0;
      this->pedal_valid = false;
      this->wheelspeed_rc_valid = false;
      this->belt_valid = false;
      this->bywire_exit_reason = "";
      this->request_cancel = 0;
      this->action_brake = 0;
      this->action_throttle = 0;
      this->action_steer = 0;
      this->heavy_action_steer = 0;
      this->sustain_action_throttle = 0;
      this->sustain_action_steer = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unix_ts = 0.0;
      this->speed = 0.0f;
      this->speed_valid = false;
      this->speed_directivity = false;
      this->wheelspeed_directivity = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->wheelspeed_valid.begin(), this->wheelspeed_valid.end(), false);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->wheelspeed_dir.begin(), this->wheelspeed_dir.end(), 0);
      std::fill<typename std::array<float, 4>::iterator, float>(this->wheelspeed.begin(), this->wheelspeed.end(), 0.0f);
      this->gear_enable = false;
      this->gear = 0;
      this->epb_state = 0;
      this->epb_flt = 0;
      this->late_enable = false;
      this->late_driveover = false;
      this->steer_angle_valid = false;
      this->steer_angle = 0.0f;
      this->steer_rotate_angle_speed = 0.0f;
      this->steer_torque_valid = false;
      this->steer_torque = 0.0f;
      this->steer_rotate_torque_speed = 0.0f;
      this->late_flt = 0;
      this->longit_enable = false;
      this->longit_driveover = false;
      this->longit_torque_valid = false;
      this->longit_torque = 0.0f;
      this->longit_acc_valid = false;
      this->longit_acc = 0.0f;
      this->longit_flt = 0;
      this->turn_lamp_lever_state = 0;
      this->turn_lamp_left = false;
      this->turn_lamp_right = false;
      this->hazard_lamp = false;
      this->wiper_front = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->door_open_state.begin(), this->door_open_state.end(), false);
      this->late_acc = 0.0f;
      this->yaw_rate = 0.0f;
      this->slope = 0.0f;
      this->standstill = 0;
      this->pedal_valid = false;
      this->wheelspeed_rc_valid = false;
      this->belt_valid = false;
      this->bywire_exit_reason = "";
      this->request_cancel = 0;
      this->action_brake = 0;
      this->action_throttle = 0;
      this->action_steer = 0;
      this->heavy_action_steer = 0;
      this->sustain_action_throttle = 0;
      this->sustain_action_steer = 0;
    }
  }

  explicit VehicleReportCommon_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    protocol_version(_alloc),
    wheelspeed_valid(_alloc),
    wheelspeed_dir(_alloc),
    wheelspeed(_alloc),
    door_open_state(_alloc),
    pedal(_alloc, _init),
    wheelspeed_rc(_alloc, _init),
    belt(_alloc, _init),
    bywire_exit_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->protocol_version = "2.11";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->protocol_version = "";
      this->unix_ts = 0.0;
      this->speed = 0.0f;
      this->speed_valid = false;
      this->speed_directivity = false;
      this->wheelspeed_directivity = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->wheelspeed_valid.begin(), this->wheelspeed_valid.end(), false);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->wheelspeed_dir.begin(), this->wheelspeed_dir.end(), 0);
      std::fill<typename std::array<float, 4>::iterator, float>(this->wheelspeed.begin(), this->wheelspeed.end(), 0.0f);
      this->gear_enable = false;
      this->gear = 0;
      this->epb_state = 0;
      this->epb_flt = 0;
      this->late_enable = false;
      this->late_driveover = false;
      this->steer_angle_valid = false;
      this->steer_angle = 0.0f;
      this->steer_rotate_angle_speed = 0.0f;
      this->steer_torque_valid = false;
      this->steer_torque = 0.0f;
      this->steer_rotate_torque_speed = 0.0f;
      this->late_flt = 0;
      this->longit_enable = false;
      this->longit_driveover = false;
      this->longit_torque_valid = false;
      this->longit_torque = 0.0f;
      this->longit_acc_valid = false;
      this->longit_acc = 0.0f;
      this->longit_flt = 0;
      this->turn_lamp_lever_state = 0;
      this->turn_lamp_left = false;
      this->turn_lamp_right = false;
      this->hazard_lamp = false;
      this->wiper_front = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->door_open_state.begin(), this->door_open_state.end(), false);
      this->late_acc = 0.0f;
      this->yaw_rate = 0.0f;
      this->slope = 0.0f;
      this->standstill = 0;
      this->pedal_valid = false;
      this->wheelspeed_rc_valid = false;
      this->belt_valid = false;
      this->bywire_exit_reason = "";
      this->request_cancel = 0;
      this->action_brake = 0;
      this->action_throttle = 0;
      this->action_steer = 0;
      this->heavy_action_steer = 0;
      this->sustain_action_throttle = 0;
      this->sustain_action_steer = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unix_ts = 0.0;
      this->speed = 0.0f;
      this->speed_valid = false;
      this->speed_directivity = false;
      this->wheelspeed_directivity = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->wheelspeed_valid.begin(), this->wheelspeed_valid.end(), false);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->wheelspeed_dir.begin(), this->wheelspeed_dir.end(), 0);
      std::fill<typename std::array<float, 4>::iterator, float>(this->wheelspeed.begin(), this->wheelspeed.end(), 0.0f);
      this->gear_enable = false;
      this->gear = 0;
      this->epb_state = 0;
      this->epb_flt = 0;
      this->late_enable = false;
      this->late_driveover = false;
      this->steer_angle_valid = false;
      this->steer_angle = 0.0f;
      this->steer_rotate_angle_speed = 0.0f;
      this->steer_torque_valid = false;
      this->steer_torque = 0.0f;
      this->steer_rotate_torque_speed = 0.0f;
      this->late_flt = 0;
      this->longit_enable = false;
      this->longit_driveover = false;
      this->longit_torque_valid = false;
      this->longit_torque = 0.0f;
      this->longit_acc_valid = false;
      this->longit_acc = 0.0f;
      this->longit_flt = 0;
      this->turn_lamp_lever_state = 0;
      this->turn_lamp_left = false;
      this->turn_lamp_right = false;
      this->hazard_lamp = false;
      this->wiper_front = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->door_open_state.begin(), this->door_open_state.end(), false);
      this->late_acc = 0.0f;
      this->yaw_rate = 0.0f;
      this->slope = 0.0f;
      this->standstill = 0;
      this->pedal_valid = false;
      this->wheelspeed_rc_valid = false;
      this->belt_valid = false;
      this->bywire_exit_reason = "";
      this->request_cancel = 0;
      this->action_brake = 0;
      this->action_throttle = 0;
      this->action_steer = 0;
      this->heavy_action_steer = 0;
      this->sustain_action_throttle = 0;
      this->sustain_action_steer = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _protocol_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _protocol_version_type protocol_version;
  using _unix_ts_type =
    double;
  _unix_ts_type unix_ts;
  using _speed_type =
    float;
  _speed_type speed;
  using _speed_valid_type =
    bool;
  _speed_valid_type speed_valid;
  using _speed_directivity_type =
    bool;
  _speed_directivity_type speed_directivity;
  using _wheelspeed_directivity_type =
    bool;
  _wheelspeed_directivity_type wheelspeed_directivity;
  using _wheelspeed_valid_type =
    std::array<bool, 4>;
  _wheelspeed_valid_type wheelspeed_valid;
  using _wheelspeed_dir_type =
    std::array<uint8_t, 4>;
  _wheelspeed_dir_type wheelspeed_dir;
  using _wheelspeed_type =
    std::array<float, 4>;
  _wheelspeed_type wheelspeed;
  using _gear_enable_type =
    bool;
  _gear_enable_type gear_enable;
  using _gear_type =
    uint8_t;
  _gear_type gear;
  using _epb_state_type =
    uint8_t;
  _epb_state_type epb_state;
  using _epb_flt_type =
    uint8_t;
  _epb_flt_type epb_flt;
  using _late_enable_type =
    bool;
  _late_enable_type late_enable;
  using _late_driveover_type =
    bool;
  _late_driveover_type late_driveover;
  using _steer_angle_valid_type =
    bool;
  _steer_angle_valid_type steer_angle_valid;
  using _steer_angle_type =
    float;
  _steer_angle_type steer_angle;
  using _steer_rotate_angle_speed_type =
    float;
  _steer_rotate_angle_speed_type steer_rotate_angle_speed;
  using _steer_torque_valid_type =
    bool;
  _steer_torque_valid_type steer_torque_valid;
  using _steer_torque_type =
    float;
  _steer_torque_type steer_torque;
  using _steer_rotate_torque_speed_type =
    float;
  _steer_rotate_torque_speed_type steer_rotate_torque_speed;
  using _late_flt_type =
    uint8_t;
  _late_flt_type late_flt;
  using _longit_enable_type =
    bool;
  _longit_enable_type longit_enable;
  using _longit_driveover_type =
    bool;
  _longit_driveover_type longit_driveover;
  using _longit_torque_valid_type =
    bool;
  _longit_torque_valid_type longit_torque_valid;
  using _longit_torque_type =
    float;
  _longit_torque_type longit_torque;
  using _longit_acc_valid_type =
    bool;
  _longit_acc_valid_type longit_acc_valid;
  using _longit_acc_type =
    float;
  _longit_acc_type longit_acc;
  using _longit_flt_type =
    uint8_t;
  _longit_flt_type longit_flt;
  using _turn_lamp_lever_state_type =
    uint8_t;
  _turn_lamp_lever_state_type turn_lamp_lever_state;
  using _turn_lamp_left_type =
    bool;
  _turn_lamp_left_type turn_lamp_left;
  using _turn_lamp_right_type =
    bool;
  _turn_lamp_right_type turn_lamp_right;
  using _hazard_lamp_type =
    bool;
  _hazard_lamp_type hazard_lamp;
  using _wiper_front_type =
    bool;
  _wiper_front_type wiper_front;
  using _door_open_state_type =
    std::array<bool, 4>;
  _door_open_state_type door_open_state;
  using _late_acc_type =
    float;
  _late_acc_type late_acc;
  using _yaw_rate_type =
    float;
  _yaw_rate_type yaw_rate;
  using _slope_type =
    float;
  _slope_type slope;
  using _standstill_type =
    uint8_t;
  _standstill_type standstill;
  using _pedal_valid_type =
    bool;
  _pedal_valid_type pedal_valid;
  using _pedal_type =
    deva_control_msgs::msg::VehicleReportPedal_<ContainerAllocator>;
  _pedal_type pedal;
  using _wheelspeed_rc_valid_type =
    bool;
  _wheelspeed_rc_valid_type wheelspeed_rc_valid;
  using _wheelspeed_rc_type =
    deva_control_msgs::msg::WheelSpeed_<ContainerAllocator>;
  _wheelspeed_rc_type wheelspeed_rc;
  using _belt_valid_type =
    bool;
  _belt_valid_type belt_valid;
  using _belt_type =
    deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator>;
  _belt_type belt;
  using _bywire_exit_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bywire_exit_reason_type bywire_exit_reason;
  using _request_cancel_type =
    uint8_t;
  _request_cancel_type request_cancel;
  using _action_brake_type =
    uint8_t;
  _action_brake_type action_brake;
  using _action_throttle_type =
    uint8_t;
  _action_throttle_type action_throttle;
  using _action_steer_type =
    uint8_t;
  _action_steer_type action_steer;
  using _heavy_action_steer_type =
    uint8_t;
  _heavy_action_steer_type heavy_action_steer;
  using _sustain_action_throttle_type =
    uint8_t;
  _sustain_action_throttle_type sustain_action_throttle;
  using _sustain_action_steer_type =
    uint8_t;
  _sustain_action_steer_type sustain_action_steer;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__protocol_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->protocol_version = _arg;
    return *this;
  }
  Type & set__unix_ts(
    const double & _arg)
  {
    this->unix_ts = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__speed_valid(
    const bool & _arg)
  {
    this->speed_valid = _arg;
    return *this;
  }
  Type & set__speed_directivity(
    const bool & _arg)
  {
    this->speed_directivity = _arg;
    return *this;
  }
  Type & set__wheelspeed_directivity(
    const bool & _arg)
  {
    this->wheelspeed_directivity = _arg;
    return *this;
  }
  Type & set__wheelspeed_valid(
    const std::array<bool, 4> & _arg)
  {
    this->wheelspeed_valid = _arg;
    return *this;
  }
  Type & set__wheelspeed_dir(
    const std::array<uint8_t, 4> & _arg)
  {
    this->wheelspeed_dir = _arg;
    return *this;
  }
  Type & set__wheelspeed(
    const std::array<float, 4> & _arg)
  {
    this->wheelspeed = _arg;
    return *this;
  }
  Type & set__gear_enable(
    const bool & _arg)
  {
    this->gear_enable = _arg;
    return *this;
  }
  Type & set__gear(
    const uint8_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__epb_state(
    const uint8_t & _arg)
  {
    this->epb_state = _arg;
    return *this;
  }
  Type & set__epb_flt(
    const uint8_t & _arg)
  {
    this->epb_flt = _arg;
    return *this;
  }
  Type & set__late_enable(
    const bool & _arg)
  {
    this->late_enable = _arg;
    return *this;
  }
  Type & set__late_driveover(
    const bool & _arg)
  {
    this->late_driveover = _arg;
    return *this;
  }
  Type & set__steer_angle_valid(
    const bool & _arg)
  {
    this->steer_angle_valid = _arg;
    return *this;
  }
  Type & set__steer_angle(
    const float & _arg)
  {
    this->steer_angle = _arg;
    return *this;
  }
  Type & set__steer_rotate_angle_speed(
    const float & _arg)
  {
    this->steer_rotate_angle_speed = _arg;
    return *this;
  }
  Type & set__steer_torque_valid(
    const bool & _arg)
  {
    this->steer_torque_valid = _arg;
    return *this;
  }
  Type & set__steer_torque(
    const float & _arg)
  {
    this->steer_torque = _arg;
    return *this;
  }
  Type & set__steer_rotate_torque_speed(
    const float & _arg)
  {
    this->steer_rotate_torque_speed = _arg;
    return *this;
  }
  Type & set__late_flt(
    const uint8_t & _arg)
  {
    this->late_flt = _arg;
    return *this;
  }
  Type & set__longit_enable(
    const bool & _arg)
  {
    this->longit_enable = _arg;
    return *this;
  }
  Type & set__longit_driveover(
    const bool & _arg)
  {
    this->longit_driveover = _arg;
    return *this;
  }
  Type & set__longit_torque_valid(
    const bool & _arg)
  {
    this->longit_torque_valid = _arg;
    return *this;
  }
  Type & set__longit_torque(
    const float & _arg)
  {
    this->longit_torque = _arg;
    return *this;
  }
  Type & set__longit_acc_valid(
    const bool & _arg)
  {
    this->longit_acc_valid = _arg;
    return *this;
  }
  Type & set__longit_acc(
    const float & _arg)
  {
    this->longit_acc = _arg;
    return *this;
  }
  Type & set__longit_flt(
    const uint8_t & _arg)
  {
    this->longit_flt = _arg;
    return *this;
  }
  Type & set__turn_lamp_lever_state(
    const uint8_t & _arg)
  {
    this->turn_lamp_lever_state = _arg;
    return *this;
  }
  Type & set__turn_lamp_left(
    const bool & _arg)
  {
    this->turn_lamp_left = _arg;
    return *this;
  }
  Type & set__turn_lamp_right(
    const bool & _arg)
  {
    this->turn_lamp_right = _arg;
    return *this;
  }
  Type & set__hazard_lamp(
    const bool & _arg)
  {
    this->hazard_lamp = _arg;
    return *this;
  }
  Type & set__wiper_front(
    const bool & _arg)
  {
    this->wiper_front = _arg;
    return *this;
  }
  Type & set__door_open_state(
    const std::array<bool, 4> & _arg)
  {
    this->door_open_state = _arg;
    return *this;
  }
  Type & set__late_acc(
    const float & _arg)
  {
    this->late_acc = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const float & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__slope(
    const float & _arg)
  {
    this->slope = _arg;
    return *this;
  }
  Type & set__standstill(
    const uint8_t & _arg)
  {
    this->standstill = _arg;
    return *this;
  }
  Type & set__pedal_valid(
    const bool & _arg)
  {
    this->pedal_valid = _arg;
    return *this;
  }
  Type & set__pedal(
    const deva_control_msgs::msg::VehicleReportPedal_<ContainerAllocator> & _arg)
  {
    this->pedal = _arg;
    return *this;
  }
  Type & set__wheelspeed_rc_valid(
    const bool & _arg)
  {
    this->wheelspeed_rc_valid = _arg;
    return *this;
  }
  Type & set__wheelspeed_rc(
    const deva_control_msgs::msg::WheelSpeed_<ContainerAllocator> & _arg)
  {
    this->wheelspeed_rc = _arg;
    return *this;
  }
  Type & set__belt_valid(
    const bool & _arg)
  {
    this->belt_valid = _arg;
    return *this;
  }
  Type & set__belt(
    const deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator> & _arg)
  {
    this->belt = _arg;
    return *this;
  }
  Type & set__bywire_exit_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bywire_exit_reason = _arg;
    return *this;
  }
  Type & set__request_cancel(
    const uint8_t & _arg)
  {
    this->request_cancel = _arg;
    return *this;
  }
  Type & set__action_brake(
    const uint8_t & _arg)
  {
    this->action_brake = _arg;
    return *this;
  }
  Type & set__action_throttle(
    const uint8_t & _arg)
  {
    this->action_throttle = _arg;
    return *this;
  }
  Type & set__action_steer(
    const uint8_t & _arg)
  {
    this->action_steer = _arg;
    return *this;
  }
  Type & set__heavy_action_steer(
    const uint8_t & _arg)
  {
    this->heavy_action_steer = _arg;
    return *this;
  }
  Type & set__sustain_action_throttle(
    const uint8_t & _arg)
  {
    this->sustain_action_throttle = _arg;
    return *this;
  }
  Type & set__sustain_action_steer(
    const uint8_t & _arg)
  {
    this->sustain_action_steer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_control_msgs::msg::VehicleReportCommon_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_control_msgs::msg::VehicleReportCommon_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_control_msgs::msg::VehicleReportCommon_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_control_msgs::msg::VehicleReportCommon_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::VehicleReportCommon_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::VehicleReportCommon_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::VehicleReportCommon_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::VehicleReportCommon_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_control_msgs::msg::VehicleReportCommon_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_control_msgs::msg::VehicleReportCommon_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_control_msgs__msg__VehicleReportCommon
    std::shared_ptr<deva_control_msgs::msg::VehicleReportCommon_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_control_msgs__msg__VehicleReportCommon
    std::shared_ptr<deva_control_msgs::msg::VehicleReportCommon_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleReportCommon_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->protocol_version != other.protocol_version) {
      return false;
    }
    if (this->unix_ts != other.unix_ts) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->speed_valid != other.speed_valid) {
      return false;
    }
    if (this->speed_directivity != other.speed_directivity) {
      return false;
    }
    if (this->wheelspeed_directivity != other.wheelspeed_directivity) {
      return false;
    }
    if (this->wheelspeed_valid != other.wheelspeed_valid) {
      return false;
    }
    if (this->wheelspeed_dir != other.wheelspeed_dir) {
      return false;
    }
    if (this->wheelspeed != other.wheelspeed) {
      return false;
    }
    if (this->gear_enable != other.gear_enable) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->epb_state != other.epb_state) {
      return false;
    }
    if (this->epb_flt != other.epb_flt) {
      return false;
    }
    if (this->late_enable != other.late_enable) {
      return false;
    }
    if (this->late_driveover != other.late_driveover) {
      return false;
    }
    if (this->steer_angle_valid != other.steer_angle_valid) {
      return false;
    }
    if (this->steer_angle != other.steer_angle) {
      return false;
    }
    if (this->steer_rotate_angle_speed != other.steer_rotate_angle_speed) {
      return false;
    }
    if (this->steer_torque_valid != other.steer_torque_valid) {
      return false;
    }
    if (this->steer_torque != other.steer_torque) {
      return false;
    }
    if (this->steer_rotate_torque_speed != other.steer_rotate_torque_speed) {
      return false;
    }
    if (this->late_flt != other.late_flt) {
      return false;
    }
    if (this->longit_enable != other.longit_enable) {
      return false;
    }
    if (this->longit_driveover != other.longit_driveover) {
      return false;
    }
    if (this->longit_torque_valid != other.longit_torque_valid) {
      return false;
    }
    if (this->longit_torque != other.longit_torque) {
      return false;
    }
    if (this->longit_acc_valid != other.longit_acc_valid) {
      return false;
    }
    if (this->longit_acc != other.longit_acc) {
      return false;
    }
    if (this->longit_flt != other.longit_flt) {
      return false;
    }
    if (this->turn_lamp_lever_state != other.turn_lamp_lever_state) {
      return false;
    }
    if (this->turn_lamp_left != other.turn_lamp_left) {
      return false;
    }
    if (this->turn_lamp_right != other.turn_lamp_right) {
      return false;
    }
    if (this->hazard_lamp != other.hazard_lamp) {
      return false;
    }
    if (this->wiper_front != other.wiper_front) {
      return false;
    }
    if (this->door_open_state != other.door_open_state) {
      return false;
    }
    if (this->late_acc != other.late_acc) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->slope != other.slope) {
      return false;
    }
    if (this->standstill != other.standstill) {
      return false;
    }
    if (this->pedal_valid != other.pedal_valid) {
      return false;
    }
    if (this->pedal != other.pedal) {
      return false;
    }
    if (this->wheelspeed_rc_valid != other.wheelspeed_rc_valid) {
      return false;
    }
    if (this->wheelspeed_rc != other.wheelspeed_rc) {
      return false;
    }
    if (this->belt_valid != other.belt_valid) {
      return false;
    }
    if (this->belt != other.belt) {
      return false;
    }
    if (this->bywire_exit_reason != other.bywire_exit_reason) {
      return false;
    }
    if (this->request_cancel != other.request_cancel) {
      return false;
    }
    if (this->action_brake != other.action_brake) {
      return false;
    }
    if (this->action_throttle != other.action_throttle) {
      return false;
    }
    if (this->action_steer != other.action_steer) {
      return false;
    }
    if (this->heavy_action_steer != other.heavy_action_steer) {
      return false;
    }
    if (this->sustain_action_throttle != other.sustain_action_throttle) {
      return false;
    }
    if (this->sustain_action_steer != other.sustain_action_steer) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleReportCommon_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleReportCommon_

// alias to use template instance with default allocator
using VehicleReportCommon =
  deva_control_msgs::msg::VehicleReportCommon_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_COMMON__STRUCT_HPP_
