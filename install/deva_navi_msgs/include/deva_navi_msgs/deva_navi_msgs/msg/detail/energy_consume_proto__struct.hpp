// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/EnergyConsumeProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_CONSUME_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_CONSUME_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'energy_end_point'
#include "deva_navi_msgs/msg/detail/energy_end_point_proto__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__EnergyConsumeProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__EnergyConsumeProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnergyConsumeProto_
{
  using Type = EnergyConsumeProto_<ContainerAllocator>;

  explicit EnergyConsumeProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : energy_end_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->energy_end_flag = false;
    }
  }

  explicit EnergyConsumeProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : energy_end_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->energy_end_flag = false;
    }
  }

  // field types and members
  using _energy_end_flag_type =
    bool;
  _energy_end_flag_type energy_end_flag;
  using _energy_end_point_type =
    deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator>;
  _energy_end_point_type energy_end_point;
  using _vehiclechargeleft_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _vehiclechargeleft_type vehiclechargeleft;

  // setters for named parameter idiom
  Type & set__energy_end_flag(
    const bool & _arg)
  {
    this->energy_end_flag = _arg;
    return *this;
  }
  Type & set__energy_end_point(
    const deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator> & _arg)
  {
    this->energy_end_point = _arg;
    return *this;
  }
  Type & set__vehiclechargeleft(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->vehiclechargeleft = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__EnergyConsumeProto
    std::shared_ptr<deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__EnergyConsumeProto
    std::shared_ptr<deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnergyConsumeProto_ & other) const
  {
    if (this->energy_end_flag != other.energy_end_flag) {
      return false;
    }
    if (this->energy_end_point != other.energy_end_point) {
      return false;
    }
    if (this->vehiclechargeleft != other.vehiclechargeleft) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnergyConsumeProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnergyConsumeProto_

// alias to use template instance with default allocator
using EnergyConsumeProto =
  deva_navi_msgs::msg::EnergyConsumeProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_CONSUME_PROTO__STRUCT_HPP_
