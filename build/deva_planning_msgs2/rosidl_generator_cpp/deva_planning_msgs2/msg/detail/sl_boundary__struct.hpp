// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/SLBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__SL_BOUNDARY__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__SL_BOUNDARY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__SLBoundary __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__SLBoundary __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SLBoundary_
{
  using Type = SLBoundary_<ContainerAllocator>;

  explicit SLBoundary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_s = 0.0;
      this->end_s = 0.0;
      this->start_l = 0.0;
      this->end_l = 0.0;
    }
  }

  explicit SLBoundary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_s = 0.0;
      this->end_s = 0.0;
      this->start_l = 0.0;
      this->end_l = 0.0;
    }
  }

  // field types and members
  using _start_s_type =
    double;
  _start_s_type start_s;
  using _end_s_type =
    double;
  _end_s_type end_s;
  using _start_l_type =
    double;
  _start_l_type start_l;
  using _end_l_type =
    double;
  _end_l_type end_l;

  // setters for named parameter idiom
  Type & set__start_s(
    const double & _arg)
  {
    this->start_s = _arg;
    return *this;
  }
  Type & set__end_s(
    const double & _arg)
  {
    this->end_s = _arg;
    return *this;
  }
  Type & set__start_l(
    const double & _arg)
  {
    this->start_l = _arg;
    return *this;
  }
  Type & set__end_l(
    const double & _arg)
  {
    this->end_l = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__SLBoundary
    std::shared_ptr<deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__SLBoundary
    std::shared_ptr<deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SLBoundary_ & other) const
  {
    if (this->start_s != other.start_s) {
      return false;
    }
    if (this->end_s != other.end_s) {
      return false;
    }
    if (this->start_l != other.start_l) {
      return false;
    }
    if (this->end_l != other.end_l) {
      return false;
    }
    return true;
  }
  bool operator!=(const SLBoundary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SLBoundary_

// alias to use template instance with default allocator
using SLBoundary =
  deva_planning_msgs2::msg::SLBoundary_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__SL_BOUNDARY__STRUCT_HPP_
