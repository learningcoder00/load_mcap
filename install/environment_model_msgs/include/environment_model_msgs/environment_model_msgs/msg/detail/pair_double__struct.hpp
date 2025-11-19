// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/PairDouble.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_DOUBLE__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_DOUBLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__PairDouble __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__PairDouble __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PairDouble_
{
  using Type = PairDouble_<ContainerAllocator>;

  explicit PairDouble_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first = 0.0;
      this->second = 0.0;
    }
  }

  explicit PairDouble_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first = 0.0;
      this->second = 0.0;
    }
  }

  // field types and members
  using _first_type =
    double;
  _first_type first;
  using _second_type =
    double;
  _second_type second;

  // setters for named parameter idiom
  Type & set__first(
    const double & _arg)
  {
    this->first = _arg;
    return *this;
  }
  Type & set__second(
    const double & _arg)
  {
    this->second = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::PairDouble_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::PairDouble_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::PairDouble_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::PairDouble_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::PairDouble_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::PairDouble_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::PairDouble_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::PairDouble_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::PairDouble_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::PairDouble_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__PairDouble
    std::shared_ptr<environment_model_msgs::msg::PairDouble_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__PairDouble
    std::shared_ptr<environment_model_msgs::msg::PairDouble_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PairDouble_ & other) const
  {
    if (this->first != other.first) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    return true;
  }
  bool operator!=(const PairDouble_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PairDouble_

// alias to use template instance with default allocator
using PairDouble =
  environment_model_msgs::msg::PairDouble_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_DOUBLE__STRUCT_HPP_
