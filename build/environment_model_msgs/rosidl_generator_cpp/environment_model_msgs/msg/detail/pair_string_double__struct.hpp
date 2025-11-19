// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/PairStringDouble.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_STRING_DOUBLE__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_STRING_DOUBLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__PairStringDouble __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__PairStringDouble __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PairStringDouble_
{
  using Type = PairStringDouble_<ContainerAllocator>;

  explicit PairStringDouble_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first = "";
      this->second = 0.0;
    }
  }

  explicit PairStringDouble_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first = "";
      this->second = 0.0;
    }
  }

  // field types and members
  using _first_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _first_type first;
  using _second_type =
    double;
  _second_type second;

  // setters for named parameter idiom
  Type & set__first(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
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
    environment_model_msgs::msg::PairStringDouble_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::PairStringDouble_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::PairStringDouble_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::PairStringDouble_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::PairStringDouble_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::PairStringDouble_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::PairStringDouble_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::PairStringDouble_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::PairStringDouble_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::PairStringDouble_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__PairStringDouble
    std::shared_ptr<environment_model_msgs::msg::PairStringDouble_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__PairStringDouble
    std::shared_ptr<environment_model_msgs::msg::PairStringDouble_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PairStringDouble_ & other) const
  {
    if (this->first != other.first) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    return true;
  }
  bool operator!=(const PairStringDouble_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PairStringDouble_

// alias to use template instance with default allocator
using PairStringDouble =
  environment_model_msgs::msg::PairStringDouble_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_STRING_DOUBLE__STRUCT_HPP_
