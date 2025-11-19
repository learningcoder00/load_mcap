// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_control_msgs:msg/VehicleStatusCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_STATUS_COMMAND__STRUCT_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_STATUS_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_control_msgs__msg__VehicleStatusCommand __attribute__((deprecated))
#else
# define DEPRECATED__deva_control_msgs__msg__VehicleStatusCommand __declspec(deprecated)
#endif

namespace deva_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStatusCommand_
{
  using Type = VehicleStatusCommand_<ContainerAllocator>;

  explicit VehicleStatusCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->protocol_version = "2.0";
      this->use_gear_cmd = false;
      this->use_epb_cmd = false;
      this->use_turn_light_cmd = false;
      this->use_wiper_cmd = false;
      this->use_bywire_enable_cmd = false;
      this->use_park_cmd = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->protocol_version = "";
      this->node_name = "";
      this->use_gear_cmd = false;
      this->gear_en = false;
      this->gear_cmd_val = 0;
      this->use_epb_cmd = false;
      this->epb_en = false;
      this->epb_cmd_val = 0;
      this->use_turn_light_cmd = false;
      this->turn_light_en = false;
      this->turn_light_cmd = 0;
      this->use_wiper_cmd = false;
      this->wiper_en = false;
      this->wiper_cmd = false;
      this->use_bywire_enable_cmd = false;
      this->lateral_en = false;
      this->longitudinal_en = false;
      this->use_park_cmd = false;
      this->park_action = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->gear_en = false;
      this->gear_cmd_val = 0;
      this->epb_en = false;
      this->epb_cmd_val = 0;
      this->turn_light_en = false;
      this->turn_light_cmd = 0;
      this->wiper_en = false;
      this->wiper_cmd = false;
      this->lateral_en = false;
      this->longitudinal_en = false;
      this->park_action = 0;
    }
  }

  explicit VehicleStatusCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    protocol_version(_alloc),
    node_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->protocol_version = "2.0";
      this->use_gear_cmd = false;
      this->use_epb_cmd = false;
      this->use_turn_light_cmd = false;
      this->use_wiper_cmd = false;
      this->use_bywire_enable_cmd = false;
      this->use_park_cmd = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->protocol_version = "";
      this->node_name = "";
      this->use_gear_cmd = false;
      this->gear_en = false;
      this->gear_cmd_val = 0;
      this->use_epb_cmd = false;
      this->epb_en = false;
      this->epb_cmd_val = 0;
      this->use_turn_light_cmd = false;
      this->turn_light_en = false;
      this->turn_light_cmd = 0;
      this->use_wiper_cmd = false;
      this->wiper_en = false;
      this->wiper_cmd = false;
      this->use_bywire_enable_cmd = false;
      this->lateral_en = false;
      this->longitudinal_en = false;
      this->use_park_cmd = false;
      this->park_action = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->gear_en = false;
      this->gear_cmd_val = 0;
      this->epb_en = false;
      this->epb_cmd_val = 0;
      this->turn_light_en = false;
      this->turn_light_cmd = 0;
      this->wiper_en = false;
      this->wiper_cmd = false;
      this->lateral_en = false;
      this->longitudinal_en = false;
      this->park_action = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _protocol_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _protocol_version_type protocol_version;
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_name_type node_name;
  using _use_gear_cmd_type =
    bool;
  _use_gear_cmd_type use_gear_cmd;
  using _gear_en_type =
    bool;
  _gear_en_type gear_en;
  using _gear_cmd_val_type =
    int8_t;
  _gear_cmd_val_type gear_cmd_val;
  using _use_epb_cmd_type =
    bool;
  _use_epb_cmd_type use_epb_cmd;
  using _epb_en_type =
    bool;
  _epb_en_type epb_en;
  using _epb_cmd_val_type =
    int8_t;
  _epb_cmd_val_type epb_cmd_val;
  using _use_turn_light_cmd_type =
    bool;
  _use_turn_light_cmd_type use_turn_light_cmd;
  using _turn_light_en_type =
    bool;
  _turn_light_en_type turn_light_en;
  using _turn_light_cmd_type =
    uint8_t;
  _turn_light_cmd_type turn_light_cmd;
  using _use_wiper_cmd_type =
    bool;
  _use_wiper_cmd_type use_wiper_cmd;
  using _wiper_en_type =
    bool;
  _wiper_en_type wiper_en;
  using _wiper_cmd_type =
    bool;
  _wiper_cmd_type wiper_cmd;
  using _use_bywire_enable_cmd_type =
    bool;
  _use_bywire_enable_cmd_type use_bywire_enable_cmd;
  using _lateral_en_type =
    bool;
  _lateral_en_type lateral_en;
  using _longitudinal_en_type =
    bool;
  _longitudinal_en_type longitudinal_en;
  using _use_park_cmd_type =
    bool;
  _use_park_cmd_type use_park_cmd;
  using _park_action_type =
    uint8_t;
  _park_action_type park_action;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
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
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }
  Type & set__use_gear_cmd(
    const bool & _arg)
  {
    this->use_gear_cmd = _arg;
    return *this;
  }
  Type & set__gear_en(
    const bool & _arg)
  {
    this->gear_en = _arg;
    return *this;
  }
  Type & set__gear_cmd_val(
    const int8_t & _arg)
  {
    this->gear_cmd_val = _arg;
    return *this;
  }
  Type & set__use_epb_cmd(
    const bool & _arg)
  {
    this->use_epb_cmd = _arg;
    return *this;
  }
  Type & set__epb_en(
    const bool & _arg)
  {
    this->epb_en = _arg;
    return *this;
  }
  Type & set__epb_cmd_val(
    const int8_t & _arg)
  {
    this->epb_cmd_val = _arg;
    return *this;
  }
  Type & set__use_turn_light_cmd(
    const bool & _arg)
  {
    this->use_turn_light_cmd = _arg;
    return *this;
  }
  Type & set__turn_light_en(
    const bool & _arg)
  {
    this->turn_light_en = _arg;
    return *this;
  }
  Type & set__turn_light_cmd(
    const uint8_t & _arg)
  {
    this->turn_light_cmd = _arg;
    return *this;
  }
  Type & set__use_wiper_cmd(
    const bool & _arg)
  {
    this->use_wiper_cmd = _arg;
    return *this;
  }
  Type & set__wiper_en(
    const bool & _arg)
  {
    this->wiper_en = _arg;
    return *this;
  }
  Type & set__wiper_cmd(
    const bool & _arg)
  {
    this->wiper_cmd = _arg;
    return *this;
  }
  Type & set__use_bywire_enable_cmd(
    const bool & _arg)
  {
    this->use_bywire_enable_cmd = _arg;
    return *this;
  }
  Type & set__lateral_en(
    const bool & _arg)
  {
    this->lateral_en = _arg;
    return *this;
  }
  Type & set__longitudinal_en(
    const bool & _arg)
  {
    this->longitudinal_en = _arg;
    return *this;
  }
  Type & set__use_park_cmd(
    const bool & _arg)
  {
    this->use_park_cmd = _arg;
    return *this;
  }
  Type & set__park_action(
    const uint8_t & _arg)
  {
    this->park_action = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_control_msgs::msg::VehicleStatusCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_control_msgs::msg::VehicleStatusCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_control_msgs::msg::VehicleStatusCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_control_msgs::msg::VehicleStatusCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::VehicleStatusCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::VehicleStatusCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::VehicleStatusCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::VehicleStatusCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_control_msgs::msg::VehicleStatusCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_control_msgs::msg::VehicleStatusCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_control_msgs__msg__VehicleStatusCommand
    std::shared_ptr<deva_control_msgs::msg::VehicleStatusCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_control_msgs__msg__VehicleStatusCommand
    std::shared_ptr<deva_control_msgs::msg::VehicleStatusCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStatusCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->protocol_version != other.protocol_version) {
      return false;
    }
    if (this->node_name != other.node_name) {
      return false;
    }
    if (this->use_gear_cmd != other.use_gear_cmd) {
      return false;
    }
    if (this->gear_en != other.gear_en) {
      return false;
    }
    if (this->gear_cmd_val != other.gear_cmd_val) {
      return false;
    }
    if (this->use_epb_cmd != other.use_epb_cmd) {
      return false;
    }
    if (this->epb_en != other.epb_en) {
      return false;
    }
    if (this->epb_cmd_val != other.epb_cmd_val) {
      return false;
    }
    if (this->use_turn_light_cmd != other.use_turn_light_cmd) {
      return false;
    }
    if (this->turn_light_en != other.turn_light_en) {
      return false;
    }
    if (this->turn_light_cmd != other.turn_light_cmd) {
      return false;
    }
    if (this->use_wiper_cmd != other.use_wiper_cmd) {
      return false;
    }
    if (this->wiper_en != other.wiper_en) {
      return false;
    }
    if (this->wiper_cmd != other.wiper_cmd) {
      return false;
    }
    if (this->use_bywire_enable_cmd != other.use_bywire_enable_cmd) {
      return false;
    }
    if (this->lateral_en != other.lateral_en) {
      return false;
    }
    if (this->longitudinal_en != other.longitudinal_en) {
      return false;
    }
    if (this->use_park_cmd != other.use_park_cmd) {
      return false;
    }
    if (this->park_action != other.park_action) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStatusCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStatusCommand_

// alias to use template instance with default allocator
using VehicleStatusCommand =
  deva_control_msgs::msg::VehicleStatusCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_STATUS_COMMAND__STRUCT_HPP_
