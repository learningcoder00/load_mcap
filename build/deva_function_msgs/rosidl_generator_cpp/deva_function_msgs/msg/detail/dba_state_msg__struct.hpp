// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/DbaStateMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__DBA_STATE_MSG__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__DBA_STATE_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__DbaStateMsg __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__DbaStateMsg __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DbaStateMsg_
{
  using Type = DbaStateMsg_<ContainerAllocator>;

  explicit DbaStateMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish_timestamp = 0.0;
      this->epb_state = 0;
      this->speed = 0.0f;
      this->acc_enable = false;
      this->brake_enable = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->door_open_state.begin(), this->door_open_state.end(), false);
      this->turn_lamp_lever_state = 0;
      this->late_enable = false;
      this->late_driveover = false;
      this->longit_enable = false;
      this->longit_driveover = false;
      this->gear = 0;
      std::fill<typename std::array<bool, 5>::iterator, bool>(this->belt.begin(), this->belt.end(), false);
      this->command = 0;
      this->save_map = false;
      this->slot_id = 0ull;
      this->park_out_direction = 0;
      this->run_mode = 0;
    }
  }

  explicit DbaStateMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : door_open_state(_alloc),
    belt(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish_timestamp = 0.0;
      this->epb_state = 0;
      this->speed = 0.0f;
      this->acc_enable = false;
      this->brake_enable = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->door_open_state.begin(), this->door_open_state.end(), false);
      this->turn_lamp_lever_state = 0;
      this->late_enable = false;
      this->late_driveover = false;
      this->longit_enable = false;
      this->longit_driveover = false;
      this->gear = 0;
      std::fill<typename std::array<bool, 5>::iterator, bool>(this->belt.begin(), this->belt.end(), false);
      this->command = 0;
      this->save_map = false;
      this->slot_id = 0ull;
      this->park_out_direction = 0;
      this->run_mode = 0;
    }
  }

  // field types and members
  using _publish_timestamp_type =
    double;
  _publish_timestamp_type publish_timestamp;
  using _epb_state_type =
    uint8_t;
  _epb_state_type epb_state;
  using _speed_type =
    float;
  _speed_type speed;
  using _acc_enable_type =
    bool;
  _acc_enable_type acc_enable;
  using _brake_enable_type =
    bool;
  _brake_enable_type brake_enable;
  using _door_open_state_type =
    std::array<bool, 4>;
  _door_open_state_type door_open_state;
  using _turn_lamp_lever_state_type =
    uint8_t;
  _turn_lamp_lever_state_type turn_lamp_lever_state;
  using _late_enable_type =
    bool;
  _late_enable_type late_enable;
  using _late_driveover_type =
    bool;
  _late_driveover_type late_driveover;
  using _longit_enable_type =
    bool;
  _longit_enable_type longit_enable;
  using _longit_driveover_type =
    bool;
  _longit_driveover_type longit_driveover;
  using _gear_type =
    uint8_t;
  _gear_type gear;
  using _belt_type =
    std::array<bool, 5>;
  _belt_type belt;
  using _command_type =
    uint8_t;
  _command_type command;
  using _save_map_type =
    bool;
  _save_map_type save_map;
  using _slot_id_type =
    uint64_t;
  _slot_id_type slot_id;
  using _park_out_direction_type =
    uint8_t;
  _park_out_direction_type park_out_direction;
  using _run_mode_type =
    uint8_t;
  _run_mode_type run_mode;

  // setters for named parameter idiom
  Type & set__publish_timestamp(
    const double & _arg)
  {
    this->publish_timestamp = _arg;
    return *this;
  }
  Type & set__epb_state(
    const uint8_t & _arg)
  {
    this->epb_state = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__acc_enable(
    const bool & _arg)
  {
    this->acc_enable = _arg;
    return *this;
  }
  Type & set__brake_enable(
    const bool & _arg)
  {
    this->brake_enable = _arg;
    return *this;
  }
  Type & set__door_open_state(
    const std::array<bool, 4> & _arg)
  {
    this->door_open_state = _arg;
    return *this;
  }
  Type & set__turn_lamp_lever_state(
    const uint8_t & _arg)
  {
    this->turn_lamp_lever_state = _arg;
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
  Type & set__gear(
    const uint8_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__belt(
    const std::array<bool, 5> & _arg)
  {
    this->belt = _arg;
    return *this;
  }
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__save_map(
    const bool & _arg)
  {
    this->save_map = _arg;
    return *this;
  }
  Type & set__slot_id(
    const uint64_t & _arg)
  {
    this->slot_id = _arg;
    return *this;
  }
  Type & set__park_out_direction(
    const uint8_t & _arg)
  {
    this->park_out_direction = _arg;
    return *this;
  }
  Type & set__run_mode(
    const uint8_t & _arg)
  {
    this->run_mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t COMMAND_NONE =
    0u;
  static constexpr uint8_t SEARCH_SLOT =
    1u;
  static constexpr uint8_t PARK_IN =
    2u;
  static constexpr uint8_t PARK_OUT =
    3u;
  static constexpr uint8_t CRUISE =
    4u;
  static constexpr uint8_t QUIT =
    5u;
  static constexpr uint8_t DIRECTION_NONE =
    0u;
  static constexpr uint8_t LEFT =
    1u;
  static constexpr uint8_t LEFT_FRONT =
    2u;
  static constexpr uint8_t FRONT =
    3u;
  static constexpr uint8_t RIGHT_FRONT =
    4u;
  static constexpr uint8_t RIGHT =
    5u;
  static constexpr uint8_t RIGHT_LEFT =
    6u;
  static constexpr uint8_t LEFT_RIGHT =
    7u;
  static constexpr uint8_t APA =
    1u;
  static constexpr uint8_t HPP =
    3u;

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::DbaStateMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::DbaStateMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::DbaStateMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::DbaStateMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::DbaStateMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::DbaStateMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::DbaStateMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::DbaStateMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::DbaStateMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::DbaStateMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__DbaStateMsg
    std::shared_ptr<deva_function_msgs::msg::DbaStateMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__DbaStateMsg
    std::shared_ptr<deva_function_msgs::msg::DbaStateMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DbaStateMsg_ & other) const
  {
    if (this->publish_timestamp != other.publish_timestamp) {
      return false;
    }
    if (this->epb_state != other.epb_state) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->acc_enable != other.acc_enable) {
      return false;
    }
    if (this->brake_enable != other.brake_enable) {
      return false;
    }
    if (this->door_open_state != other.door_open_state) {
      return false;
    }
    if (this->turn_lamp_lever_state != other.turn_lamp_lever_state) {
      return false;
    }
    if (this->late_enable != other.late_enable) {
      return false;
    }
    if (this->late_driveover != other.late_driveover) {
      return false;
    }
    if (this->longit_enable != other.longit_enable) {
      return false;
    }
    if (this->longit_driveover != other.longit_driveover) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->belt != other.belt) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->save_map != other.save_map) {
      return false;
    }
    if (this->slot_id != other.slot_id) {
      return false;
    }
    if (this->park_out_direction != other.park_out_direction) {
      return false;
    }
    if (this->run_mode != other.run_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const DbaStateMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DbaStateMsg_

// alias to use template instance with default allocator
using DbaStateMsg =
  deva_function_msgs::msg::DbaStateMsg_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::COMMAND_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::SEARCH_SLOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::PARK_IN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::PARK_OUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::CRUISE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::QUIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::DIRECTION_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::LEFT_FRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::FRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::RIGHT_FRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::RIGHT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::LEFT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::APA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DbaStateMsg_<ContainerAllocator>::HPP;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__DBA_STATE_MSG__STRUCT_HPP_
