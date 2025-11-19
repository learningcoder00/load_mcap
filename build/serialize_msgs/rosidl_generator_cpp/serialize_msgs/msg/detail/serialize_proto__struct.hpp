// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from serialize_msgs:msg/SerializeProto.idl
// generated code does not contain a copyright notice

#ifndef SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__STRUCT_HPP_
#define SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__serialize_msgs__msg__SerializeProto __attribute__((deprecated))
#else
# define DEPRECATED__serialize_msgs__msg__SerializeProto __declspec(deprecated)
#endif

namespace serialize_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SerializeProto_
{
  using Type = SerializeProto_<ContainerAllocator>;

  explicit SerializeProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit SerializeProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    serialize_msgs::msg::SerializeProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const serialize_msgs::msg::SerializeProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<serialize_msgs::msg::SerializeProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<serialize_msgs::msg::SerializeProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      serialize_msgs::msg::SerializeProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<serialize_msgs::msg::SerializeProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      serialize_msgs::msg::SerializeProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<serialize_msgs::msg::SerializeProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<serialize_msgs::msg::SerializeProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<serialize_msgs::msg::SerializeProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__serialize_msgs__msg__SerializeProto
    std::shared_ptr<serialize_msgs::msg::SerializeProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__serialize_msgs__msg__SerializeProto
    std::shared_ptr<serialize_msgs::msg::SerializeProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerializeProto_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerializeProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerializeProto_

// alias to use template instance with default allocator
using SerializeProto =
  serialize_msgs::msg::SerializeProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace serialize_msgs

#endif  // SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__STRUCT_HPP_
