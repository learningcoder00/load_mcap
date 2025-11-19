// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFStopline.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_STOPLINE__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_STOPLINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFStopline __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFStopline __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFStopline_
{
  using Type = SFStopline_<ContainerAllocator>;

  explicit SFStopline_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->leftpointposlgt = 0.0f;
      this->leftpointposlat = 0.0f;
      this->rightpointposlgt = 0.0f;
      this->rightpointposlat = 0.0f;
      this->confi = 0;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  explicit SFStopline_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reserved(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->leftpointposlgt = 0.0f;
      this->leftpointposlat = 0.0f;
      this->rightpointposlgt = 0.0f;
      this->rightpointposlat = 0.0f;
      this->confi = 0;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _leftpointposlgt_type =
    float;
  _leftpointposlgt_type leftpointposlgt;
  using _leftpointposlat_type =
    float;
  _leftpointposlat_type leftpointposlat;
  using _rightpointposlgt_type =
    float;
  _rightpointposlgt_type rightpointposlgt;
  using _rightpointposlat_type =
    float;
  _rightpointposlat_type rightpointposlat;
  using _confi_type =
    uint8_t;
  _confi_type confi;
  using _reserved_type =
    std::array<uint8_t, 3>;
  _reserved_type reserved;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__leftpointposlgt(
    const float & _arg)
  {
    this->leftpointposlgt = _arg;
    return *this;
  }
  Type & set__leftpointposlat(
    const float & _arg)
  {
    this->leftpointposlat = _arg;
    return *this;
  }
  Type & set__rightpointposlgt(
    const float & _arg)
  {
    this->rightpointposlgt = _arg;
    return *this;
  }
  Type & set__rightpointposlat(
    const float & _arg)
  {
    this->rightpointposlat = _arg;
    return *this;
  }
  Type & set__confi(
    const uint8_t & _arg)
  {
    this->confi = _arg;
    return *this;
  }
  Type & set__reserved(
    const std::array<uint8_t, 3> & _arg)
  {
    this->reserved = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFStopline_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFStopline_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFStopline_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFStopline_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFStopline_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFStopline_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFStopline_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFStopline_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFStopline_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFStopline_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFStopline
    std::shared_ptr<deva_aeb_msgs::msg::SFStopline_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFStopline
    std::shared_ptr<deva_aeb_msgs::msg::SFStopline_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFStopline_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->leftpointposlgt != other.leftpointposlgt) {
      return false;
    }
    if (this->leftpointposlat != other.leftpointposlat) {
      return false;
    }
    if (this->rightpointposlgt != other.rightpointposlgt) {
      return false;
    }
    if (this->rightpointposlat != other.rightpointposlat) {
      return false;
    }
    if (this->confi != other.confi) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFStopline_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFStopline_

// alias to use template instance with default allocator
using SFStopline =
  deva_aeb_msgs::msg::SFStopline_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_STOPLINE__STRUCT_HPP_
