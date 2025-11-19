// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_common_msgs:msg/EquationCurve.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__EQUATION_CURVE__STRUCT_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__EQUATION_CURVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_common_msgs__msg__EquationCurve __attribute__((deprecated))
#else
# define DEPRECATED__deva_common_msgs__msg__EquationCurve __declspec(deprecated)
#endif

namespace deva_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EquationCurve_
{
  using Type = EquationCurve_<ContainerAllocator>;

  explicit EquationCurve_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->a3 = 0.0;
      this->a2 = 0.0;
      this->a1 = 0.0;
      this->a0 = 0.0;
      this->b3 = 0.0;
      this->b2 = 0.0;
      this->b1 = 0.0;
      this->b0 = 0.0;
      this->c3 = 0.0;
      this->c2 = 0.0;
      this->c1 = 0.0;
      this->c0 = 0.0;
      this->s_start = 0.0;
      this->s_end = 0.0;
    }
  }

  explicit EquationCurve_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->a3 = 0.0;
      this->a2 = 0.0;
      this->a1 = 0.0;
      this->a0 = 0.0;
      this->b3 = 0.0;
      this->b2 = 0.0;
      this->b1 = 0.0;
      this->b0 = 0.0;
      this->c3 = 0.0;
      this->c2 = 0.0;
      this->c1 = 0.0;
      this->c0 = 0.0;
      this->s_start = 0.0;
      this->s_end = 0.0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _a3_type =
    double;
  _a3_type a3;
  using _a2_type =
    double;
  _a2_type a2;
  using _a1_type =
    double;
  _a1_type a1;
  using _a0_type =
    double;
  _a0_type a0;
  using _b3_type =
    double;
  _b3_type b3;
  using _b2_type =
    double;
  _b2_type b2;
  using _b1_type =
    double;
  _b1_type b1;
  using _b0_type =
    double;
  _b0_type b0;
  using _c3_type =
    double;
  _c3_type c3;
  using _c2_type =
    double;
  _c2_type c2;
  using _c1_type =
    double;
  _c1_type c1;
  using _c0_type =
    double;
  _c0_type c0;
  using _s_start_type =
    double;
  _s_start_type s_start;
  using _s_end_type =
    double;
  _s_end_type s_end;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__a3(
    const double & _arg)
  {
    this->a3 = _arg;
    return *this;
  }
  Type & set__a2(
    const double & _arg)
  {
    this->a2 = _arg;
    return *this;
  }
  Type & set__a1(
    const double & _arg)
  {
    this->a1 = _arg;
    return *this;
  }
  Type & set__a0(
    const double & _arg)
  {
    this->a0 = _arg;
    return *this;
  }
  Type & set__b3(
    const double & _arg)
  {
    this->b3 = _arg;
    return *this;
  }
  Type & set__b2(
    const double & _arg)
  {
    this->b2 = _arg;
    return *this;
  }
  Type & set__b1(
    const double & _arg)
  {
    this->b1 = _arg;
    return *this;
  }
  Type & set__b0(
    const double & _arg)
  {
    this->b0 = _arg;
    return *this;
  }
  Type & set__c3(
    const double & _arg)
  {
    this->c3 = _arg;
    return *this;
  }
  Type & set__c2(
    const double & _arg)
  {
    this->c2 = _arg;
    return *this;
  }
  Type & set__c1(
    const double & _arg)
  {
    this->c1 = _arg;
    return *this;
  }
  Type & set__c0(
    const double & _arg)
  {
    this->c0 = _arg;
    return *this;
  }
  Type & set__s_start(
    const double & _arg)
  {
    this->s_start = _arg;
    return *this;
  }
  Type & set__s_end(
    const double & _arg)
  {
    this->s_end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_common_msgs::msg::EquationCurve_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_common_msgs::msg::EquationCurve_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_common_msgs::msg::EquationCurve_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_common_msgs::msg::EquationCurve_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_common_msgs::msg::EquationCurve_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_common_msgs::msg::EquationCurve_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_common_msgs::msg::EquationCurve_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_common_msgs__msg__EquationCurve
    std::shared_ptr<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_common_msgs__msg__EquationCurve
    std::shared_ptr<deva_common_msgs::msg::EquationCurve_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EquationCurve_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->a3 != other.a3) {
      return false;
    }
    if (this->a2 != other.a2) {
      return false;
    }
    if (this->a1 != other.a1) {
      return false;
    }
    if (this->a0 != other.a0) {
      return false;
    }
    if (this->b3 != other.b3) {
      return false;
    }
    if (this->b2 != other.b2) {
      return false;
    }
    if (this->b1 != other.b1) {
      return false;
    }
    if (this->b0 != other.b0) {
      return false;
    }
    if (this->c3 != other.c3) {
      return false;
    }
    if (this->c2 != other.c2) {
      return false;
    }
    if (this->c1 != other.c1) {
      return false;
    }
    if (this->c0 != other.c0) {
      return false;
    }
    if (this->s_start != other.s_start) {
      return false;
    }
    if (this->s_end != other.s_end) {
      return false;
    }
    return true;
  }
  bool operator!=(const EquationCurve_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EquationCurve_

// alias to use template instance with default allocator
using EquationCurve =
  deva_common_msgs::msg::EquationCurve_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__EQUATION_CURVE__STRUCT_HPP_
