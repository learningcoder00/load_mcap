// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_control_msgs:msg/VehicleReportBelt.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_BELT__STRUCT_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_BELT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_control_msgs__msg__VehicleReportBelt __attribute__((deprecated))
#else
# define DEPRECATED__deva_control_msgs__msg__VehicleReportBelt __declspec(deprecated)
#endif

namespace deva_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleReportBelt_
{
  using Type = VehicleReportBelt_<ContainerAllocator>;

  explicit VehicleReportBelt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drv_belt = false;
      this->pass_belt = false;
      this->rl_belt = false;
      this->rm_belt = false;
      this->rr_belt = false;
    }
  }

  explicit VehicleReportBelt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drv_belt = false;
      this->pass_belt = false;
      this->rl_belt = false;
      this->rm_belt = false;
      this->rr_belt = false;
    }
  }

  // field types and members
  using _drv_belt_type =
    bool;
  _drv_belt_type drv_belt;
  using _pass_belt_type =
    bool;
  _pass_belt_type pass_belt;
  using _rl_belt_type =
    bool;
  _rl_belt_type rl_belt;
  using _rm_belt_type =
    bool;
  _rm_belt_type rm_belt;
  using _rr_belt_type =
    bool;
  _rr_belt_type rr_belt;

  // setters for named parameter idiom
  Type & set__drv_belt(
    const bool & _arg)
  {
    this->drv_belt = _arg;
    return *this;
  }
  Type & set__pass_belt(
    const bool & _arg)
  {
    this->pass_belt = _arg;
    return *this;
  }
  Type & set__rl_belt(
    const bool & _arg)
  {
    this->rl_belt = _arg;
    return *this;
  }
  Type & set__rm_belt(
    const bool & _arg)
  {
    this->rm_belt = _arg;
    return *this;
  }
  Type & set__rr_belt(
    const bool & _arg)
  {
    this->rr_belt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_control_msgs__msg__VehicleReportBelt
    std::shared_ptr<deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_control_msgs__msg__VehicleReportBelt
    std::shared_ptr<deva_control_msgs::msg::VehicleReportBelt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleReportBelt_ & other) const
  {
    if (this->drv_belt != other.drv_belt) {
      return false;
    }
    if (this->pass_belt != other.pass_belt) {
      return false;
    }
    if (this->rl_belt != other.rl_belt) {
      return false;
    }
    if (this->rm_belt != other.rm_belt) {
      return false;
    }
    if (this->rr_belt != other.rr_belt) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleReportBelt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleReportBelt_

// alias to use template instance with default allocator
using VehicleReportBelt =
  deva_control_msgs::msg::VehicleReportBelt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_BELT__STRUCT_HPP_
