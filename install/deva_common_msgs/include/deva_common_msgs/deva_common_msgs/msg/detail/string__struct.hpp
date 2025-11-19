// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_common_msgs:msg/String.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__STRING__STRUCT_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__STRING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_common_msgs__msg__String __attribute__((deprecated))
#else
# define DEPRECATED__deva_common_msgs__msg__String __declspec(deprecated)
#endif

namespace deva_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct String_
{
  using Type = String_<ContainerAllocator>;

  explicit String_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->size = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->size = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit String_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->size = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->size = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
  using _data_type =
    std::array<uint8_t, 32>;
  _data_type data;
  using _size_type =
    uint8_t;
  _size_type size;

  // setters for named parameter idiom
  Type & set__data(
    const std::array<uint8_t, 32> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__size(
    const uint8_t & _arg)
  {
    this->size = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MAX_SIZE =
    32u;

  // pointer types
  using RawPtr =
    deva_common_msgs::msg::String_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_common_msgs::msg::String_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_common_msgs::msg::String_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_common_msgs::msg::String_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_common_msgs::msg::String_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_common_msgs::msg::String_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_common_msgs::msg::String_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_common_msgs::msg::String_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_common_msgs::msg::String_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_common_msgs::msg::String_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_common_msgs__msg__String
    std::shared_ptr<deva_common_msgs::msg::String_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_common_msgs__msg__String
    std::shared_ptr<deva_common_msgs::msg::String_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const String_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    return true;
  }
  bool operator!=(const String_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct String_

// alias to use template instance with default allocator
using String =
  deva_common_msgs::msg::String_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t String_<ContainerAllocator>::MAX_SIZE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__STRING__STRUCT_HPP_
