// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_common_msgs:msg/Line2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__LINE2D__STRUCT_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__LINE2D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_common_msgs__msg__Line2d __attribute__((deprecated))
#else
# define DEPRECATED__deva_common_msgs__msg__Line2d __declspec(deprecated)
#endif

namespace deva_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Line2d_
{
  using Type = Line2d_<ContainerAllocator>;

  explicit Line2d_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fit_property = 0;
      this->c3 = 0.0;
      this->c2 = 0.0;
      this->c1 = 0.0;
      this->c0 = 0.0;
    }
  }

  explicit Line2d_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fit_property = 0;
      this->c3 = 0.0;
      this->c2 = 0.0;
      this->c1 = 0.0;
      this->c0 = 0.0;
    }
  }

  // field types and members
  using _fit_property_type =
    uint8_t;
  _fit_property_type fit_property;
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

  // setters for named parameter idiom
  Type & set__fit_property(
    const uint8_t & _arg)
  {
    this->fit_property = _arg;
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

  // constant declarations
  static constexpr uint8_t POLY =
    0u;
  static constexpr uint8_t ARC =
    1u;

  // pointer types
  using RawPtr =
    deva_common_msgs::msg::Line2d_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_common_msgs::msg::Line2d_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_common_msgs::msg::Line2d_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_common_msgs::msg::Line2d_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_common_msgs::msg::Line2d_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_common_msgs::msg::Line2d_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_common_msgs::msg::Line2d_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_common_msgs::msg::Line2d_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_common_msgs::msg::Line2d_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_common_msgs::msg::Line2d_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_common_msgs__msg__Line2d
    std::shared_ptr<deva_common_msgs::msg::Line2d_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_common_msgs__msg__Line2d
    std::shared_ptr<deva_common_msgs::msg::Line2d_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Line2d_ & other) const
  {
    if (this->fit_property != other.fit_property) {
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
    return true;
  }
  bool operator!=(const Line2d_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Line2d_

// alias to use template instance with default allocator
using Line2d =
  deva_common_msgs::msg::Line2d_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Line2d_<ContainerAllocator>::POLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Line2d_<ContainerAllocator>::ARC;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__LINE2D__STRUCT_HPP_
