// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFCurveFunctionExtra.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_CURVE_FUNCTION_EXTRA__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_CURVE_FUNCTION_EXTRA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'estimn'
#include "deva_aeb_msgs/msg/detail/sf_lane_estimn__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFCurveFunctionExtra __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFCurveFunctionExtra __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFCurveFunctionExtra_
{
  using Type = SFCurveFunctionExtra_<ContainerAllocator>;

  explicit SFCurveFunctionExtra_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : estimn(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->poslgt = 0.0f;
      this->poslat = 0.0f;
      this->extrapointtype = 0;
      this->lanemkrtype = 0;
      this->confi = 0;
      this->reserved = 0;
    }
  }

  explicit SFCurveFunctionExtra_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : estimn(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->poslgt = 0.0f;
      this->poslat = 0.0f;
      this->extrapointtype = 0;
      this->lanemkrtype = 0;
      this->confi = 0;
      this->reserved = 0;
    }
  }

  // field types and members
  using _poslgt_type =
    float;
  _poslgt_type poslgt;
  using _poslat_type =
    float;
  _poslat_type poslat;
  using _estimn_type =
    deva_aeb_msgs::msg::SFLaneEstimn_<ContainerAllocator>;
  _estimn_type estimn;
  using _extrapointtype_type =
    uint8_t;
  _extrapointtype_type extrapointtype;
  using _lanemkrtype_type =
    uint8_t;
  _lanemkrtype_type lanemkrtype;
  using _confi_type =
    uint8_t;
  _confi_type confi;
  using _reserved_type =
    uint8_t;
  _reserved_type reserved;

  // setters for named parameter idiom
  Type & set__poslgt(
    const float & _arg)
  {
    this->poslgt = _arg;
    return *this;
  }
  Type & set__poslat(
    const float & _arg)
  {
    this->poslat = _arg;
    return *this;
  }
  Type & set__estimn(
    const deva_aeb_msgs::msg::SFLaneEstimn_<ContainerAllocator> & _arg)
  {
    this->estimn = _arg;
    return *this;
  }
  Type & set__extrapointtype(
    const uint8_t & _arg)
  {
    this->extrapointtype = _arg;
    return *this;
  }
  Type & set__lanemkrtype(
    const uint8_t & _arg)
  {
    this->lanemkrtype = _arg;
    return *this;
  }
  Type & set__confi(
    const uint8_t & _arg)
  {
    this->confi = _arg;
    return *this;
  }
  Type & set__reserved(
    const uint8_t & _arg)
  {
    this->reserved = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFCurveFunctionExtra_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFCurveFunctionExtra_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFCurveFunctionExtra_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFCurveFunctionExtra_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFCurveFunctionExtra_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFCurveFunctionExtra_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFCurveFunctionExtra_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFCurveFunctionExtra_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFCurveFunctionExtra_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFCurveFunctionExtra_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFCurveFunctionExtra
    std::shared_ptr<deva_aeb_msgs::msg::SFCurveFunctionExtra_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFCurveFunctionExtra
    std::shared_ptr<deva_aeb_msgs::msg::SFCurveFunctionExtra_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFCurveFunctionExtra_ & other) const
  {
    if (this->poslgt != other.poslgt) {
      return false;
    }
    if (this->poslat != other.poslat) {
      return false;
    }
    if (this->estimn != other.estimn) {
      return false;
    }
    if (this->extrapointtype != other.extrapointtype) {
      return false;
    }
    if (this->lanemkrtype != other.lanemkrtype) {
      return false;
    }
    if (this->confi != other.confi) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFCurveFunctionExtra_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFCurveFunctionExtra_

// alias to use template instance with default allocator
using SFCurveFunctionExtra =
  deva_aeb_msgs::msg::SFCurveFunctionExtra_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_CURVE_FUNCTION_EXTRA__STRUCT_HPP_
