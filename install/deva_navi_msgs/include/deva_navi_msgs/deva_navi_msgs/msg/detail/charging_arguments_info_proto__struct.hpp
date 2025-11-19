// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/ChargingArgumentsInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__CHARGING_ARGUMENTS_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__CHARGING_ARGUMENTS_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__ChargingArgumentsInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__ChargingArgumentsInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChargingArgumentsInfoProto_
{
  using Type = ChargingArgumentsInfoProto_<ContainerAllocator>;

  explicit ChargingArgumentsInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->min_arrival_percent = 0l;
      this->power = 0ll;
      this->voltage = 0ll;
      this->amperage = 0ll;
    }
  }

  explicit ChargingArgumentsInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->min_arrival_percent = 0l;
      this->power = 0ll;
      this->voltage = 0ll;
      this->amperage = 0ll;
    }
  }

  // field types and members
  using _type_type =
    int32_t;
  _type_type type;
  using _min_arrival_percent_type =
    int32_t;
  _min_arrival_percent_type min_arrival_percent;
  using _power_type =
    int64_t;
  _power_type power;
  using _voltage_type =
    int64_t;
  _voltage_type voltage;
  using _amperage_type =
    int64_t;
  _amperage_type amperage;

  // setters for named parameter idiom
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__min_arrival_percent(
    const int32_t & _arg)
  {
    this->min_arrival_percent = _arg;
    return *this;
  }
  Type & set__power(
    const int64_t & _arg)
  {
    this->power = _arg;
    return *this;
  }
  Type & set__voltage(
    const int64_t & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__amperage(
    const int64_t & _arg)
  {
    this->amperage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__ChargingArgumentsInfoProto
    std::shared_ptr<deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__ChargingArgumentsInfoProto
    std::shared_ptr<deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargingArgumentsInfoProto_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->min_arrival_percent != other.min_arrival_percent) {
      return false;
    }
    if (this->power != other.power) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->amperage != other.amperage) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargingArgumentsInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargingArgumentsInfoProto_

// alias to use template instance with default allocator
using ChargingArgumentsInfoProto =
  deva_navi_msgs::msg::ChargingArgumentsInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__CHARGING_ARGUMENTS_INFO_PROTO__STRUCT_HPP_
