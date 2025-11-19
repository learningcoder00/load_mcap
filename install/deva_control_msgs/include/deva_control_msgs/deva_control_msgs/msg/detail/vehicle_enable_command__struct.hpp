// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_control_msgs:msg/VehicleEnableCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_ENABLE_COMMAND__STRUCT_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_ENABLE_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__deva_control_msgs__msg__VehicleEnableCommand __attribute__((deprecated))
#else
# define DEPRECATED__deva_control_msgs__msg__VehicleEnableCommand __declspec(deprecated)
#endif

namespace deva_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleEnableCommand_
{
  using Type = VehicleEnableCommand_<ContainerAllocator>;

  explicit VehicleEnableCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->protocol_version = "2.10";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->protocol_version = "";
      this->enable_bywire = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_bywire = 0;
    }
  }

  explicit VehicleEnableCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    protocol_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->protocol_version = "2.10";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->protocol_version = "";
      this->enable_bywire = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_bywire = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _protocol_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _protocol_version_type protocol_version;
  using _enable_bywire_type =
    uint8_t;
  _enable_bywire_type enable_bywire;

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
  Type & set__enable_bywire(
    const uint8_t & _arg)
  {
    this->enable_bywire = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_control_msgs::msg::VehicleEnableCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_control_msgs::msg::VehicleEnableCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_control_msgs::msg::VehicleEnableCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_control_msgs::msg::VehicleEnableCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::VehicleEnableCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::VehicleEnableCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::VehicleEnableCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::VehicleEnableCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_control_msgs::msg::VehicleEnableCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_control_msgs::msg::VehicleEnableCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_control_msgs__msg__VehicleEnableCommand
    std::shared_ptr<deva_control_msgs::msg::VehicleEnableCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_control_msgs__msg__VehicleEnableCommand
    std::shared_ptr<deva_control_msgs::msg::VehicleEnableCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleEnableCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->protocol_version != other.protocol_version) {
      return false;
    }
    if (this->enable_bywire != other.enable_bywire) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleEnableCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleEnableCommand_

// alias to use template instance with default allocator
using VehicleEnableCommand =
  deva_control_msgs::msg::VehicleEnableCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_ENABLE_COMMAND__STRUCT_HPP_
