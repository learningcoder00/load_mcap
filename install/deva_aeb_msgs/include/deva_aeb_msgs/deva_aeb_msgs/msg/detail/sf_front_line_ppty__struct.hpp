// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFFrontLinePpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FRONT_LINE_PPTY__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FRONT_LINE_PPTY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFFrontLinePpty __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFFrontLinePpty __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFrontLinePpty_
{
  using Type = SFFrontLinePpty_<ContainerAllocator>;

  explicit SFFrontLinePpty_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drvrpfmncmonqly = 0;
      this->lanekeepaidqly = 0;
      this->trfcjamassiqly = 0;
      this->reserved = 0;
      this->tunqly = 0.0f;
      this->id = 0ul;
      this->lifetime = 0ul;
    }
  }

  explicit SFFrontLinePpty_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drvrpfmncmonqly = 0;
      this->lanekeepaidqly = 0;
      this->trfcjamassiqly = 0;
      this->reserved = 0;
      this->tunqly = 0.0f;
      this->id = 0ul;
      this->lifetime = 0ul;
    }
  }

  // field types and members
  using _drvrpfmncmonqly_type =
    uint8_t;
  _drvrpfmncmonqly_type drvrpfmncmonqly;
  using _lanekeepaidqly_type =
    uint8_t;
  _lanekeepaidqly_type lanekeepaidqly;
  using _trfcjamassiqly_type =
    uint8_t;
  _trfcjamassiqly_type trfcjamassiqly;
  using _reserved_type =
    uint8_t;
  _reserved_type reserved;
  using _tunqly_type =
    float;
  _tunqly_type tunqly;
  using _id_type =
    uint32_t;
  _id_type id;
  using _lifetime_type =
    uint32_t;
  _lifetime_type lifetime;

  // setters for named parameter idiom
  Type & set__drvrpfmncmonqly(
    const uint8_t & _arg)
  {
    this->drvrpfmncmonqly = _arg;
    return *this;
  }
  Type & set__lanekeepaidqly(
    const uint8_t & _arg)
  {
    this->lanekeepaidqly = _arg;
    return *this;
  }
  Type & set__trfcjamassiqly(
    const uint8_t & _arg)
  {
    this->trfcjamassiqly = _arg;
    return *this;
  }
  Type & set__reserved(
    const uint8_t & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__tunqly(
    const float & _arg)
  {
    this->tunqly = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__lifetime(
    const uint32_t & _arg)
  {
    this->lifetime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFrontLinePpty
    std::shared_ptr<deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFrontLinePpty
    std::shared_ptr<deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFrontLinePpty_ & other) const
  {
    if (this->drvrpfmncmonqly != other.drvrpfmncmonqly) {
      return false;
    }
    if (this->lanekeepaidqly != other.lanekeepaidqly) {
      return false;
    }
    if (this->trfcjamassiqly != other.trfcjamassiqly) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->tunqly != other.tunqly) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->lifetime != other.lifetime) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFFrontLinePpty_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFrontLinePpty_

// alias to use template instance with default allocator
using SFFrontLinePpty =
  deva_aeb_msgs::msg::SFFrontLinePpty_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FRONT_LINE_PPTY__STRUCT_HPP_
