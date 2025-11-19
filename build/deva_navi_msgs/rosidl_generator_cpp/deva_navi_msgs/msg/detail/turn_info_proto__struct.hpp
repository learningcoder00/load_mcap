// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/TurnInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__TURN_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__TURN_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__TurnInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__TurnInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurnInfoProto_
{
  using Type = TurnInfoProto_<ContainerAllocator>;

  explicit TurnInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->lot = 0l;
      this->lat = 0l;
    }
  }

  explicit TurnInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->lot = 0l;
      this->lat = 0l;
    }
  }

  // field types and members
  using _type_type =
    int32_t;
  _type_type type;
  using _lot_type =
    int32_t;
  _lot_type lot;
  using _lat_type =
    int32_t;
  _lat_type lat;

  // setters for named parameter idiom
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__lot(
    const int32_t & _arg)
  {
    this->lot = _arg;
    return *this;
  }
  Type & set__lat(
    const int32_t & _arg)
  {
    this->lat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__TurnInfoProto
    std::shared_ptr<deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__TurnInfoProto
    std::shared_ptr<deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurnInfoProto_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->lot != other.lot) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurnInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurnInfoProto_

// alias to use template instance with default allocator
using TurnInfoProto =
  deva_navi_msgs::msg::TurnInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__TURN_INFO_PROTO__STRUCT_HPP_
