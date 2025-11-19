// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/LocalMapHeader.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP_HEADER__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'send_localmap_header'
// Member 'received_preseptionmap_header'
// Member 'preseptionmap_header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__LocalMapHeader __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__LocalMapHeader __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalMapHeader_
{
  using Type = LocalMapHeader_<ContainerAllocator>;

  explicit LocalMapHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : send_localmap_header(_init),
    received_preseptionmap_header(_init),
    preseptionmap_header(_init)
  {
    (void)_init;
  }

  explicit LocalMapHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : send_localmap_header(_alloc, _init),
    received_preseptionmap_header(_alloc, _init),
    preseptionmap_header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _send_localmap_header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _send_localmap_header_type send_localmap_header;
  using _received_preseptionmap_header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _received_preseptionmap_header_type received_preseptionmap_header;
  using _preseptionmap_header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _preseptionmap_header_type preseptionmap_header;

  // setters for named parameter idiom
  Type & set__send_localmap_header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->send_localmap_header = _arg;
    return *this;
  }
  Type & set__received_preseptionmap_header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->received_preseptionmap_header = _arg;
    return *this;
  }
  Type & set__preseptionmap_header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->preseptionmap_header = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__LocalMapHeader
    std::shared_ptr<deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__LocalMapHeader
    std::shared_ptr<deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalMapHeader_ & other) const
  {
    if (this->send_localmap_header != other.send_localmap_header) {
      return false;
    }
    if (this->received_preseptionmap_header != other.received_preseptionmap_header) {
      return false;
    }
    if (this->preseptionmap_header != other.preseptionmap_header) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalMapHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalMapHeader_

// alias to use template instance with default allocator
using LocalMapHeader =
  deva_map_msgs::msg::LocalMapHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP_HEADER__STRUCT_HPP_
