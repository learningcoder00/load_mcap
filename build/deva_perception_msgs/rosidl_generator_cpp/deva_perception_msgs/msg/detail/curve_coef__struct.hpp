// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/CurveCoef.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CURVE_COEF__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CURVE_COEF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__CurveCoef __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__CurveCoef __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CurveCoef_
{
  using Type = CurveCoef_<ContainerAllocator>;

  explicit CurveCoef_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->c0 = 0.0f;
      this->c1 = 0.0f;
      this->c2 = 0.0f;
      this->c3 = 0.0f;
      this->startpoint = 0.0f;
      this->endpoint = 0.0f;
    }
  }

  explicit CurveCoef_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->c0 = 0.0f;
      this->c1 = 0.0f;
      this->c2 = 0.0f;
      this->c3 = 0.0f;
      this->startpoint = 0.0f;
      this->endpoint = 0.0f;
    }
  }

  // field types and members
  using _c0_type =
    float;
  _c0_type c0;
  using _c1_type =
    float;
  _c1_type c1;
  using _c2_type =
    float;
  _c2_type c2;
  using _c3_type =
    float;
  _c3_type c3;
  using _startpoint_type =
    float;
  _startpoint_type startpoint;
  using _endpoint_type =
    float;
  _endpoint_type endpoint;

  // setters for named parameter idiom
  Type & set__c0(
    const float & _arg)
  {
    this->c0 = _arg;
    return *this;
  }
  Type & set__c1(
    const float & _arg)
  {
    this->c1 = _arg;
    return *this;
  }
  Type & set__c2(
    const float & _arg)
  {
    this->c2 = _arg;
    return *this;
  }
  Type & set__c3(
    const float & _arg)
  {
    this->c3 = _arg;
    return *this;
  }
  Type & set__startpoint(
    const float & _arg)
  {
    this->startpoint = _arg;
    return *this;
  }
  Type & set__endpoint(
    const float & _arg)
  {
    this->endpoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::CurveCoef_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::CurveCoef_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::CurveCoef_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::CurveCoef_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::CurveCoef_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::CurveCoef_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::CurveCoef_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::CurveCoef_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::CurveCoef_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::CurveCoef_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__CurveCoef
    std::shared_ptr<deva_perception_msgs::msg::CurveCoef_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__CurveCoef
    std::shared_ptr<deva_perception_msgs::msg::CurveCoef_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CurveCoef_ & other) const
  {
    if (this->c0 != other.c0) {
      return false;
    }
    if (this->c1 != other.c1) {
      return false;
    }
    if (this->c2 != other.c2) {
      return false;
    }
    if (this->c3 != other.c3) {
      return false;
    }
    if (this->startpoint != other.startpoint) {
      return false;
    }
    if (this->endpoint != other.endpoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const CurveCoef_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CurveCoef_

// alias to use template instance with default allocator
using CurveCoef =
  deva_perception_msgs::msg::CurveCoef_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CURVE_COEF__STRUCT_HPP_
