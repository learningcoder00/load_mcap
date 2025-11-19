// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFCrosswalk.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_CROSSWALK__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_CROSSWALK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFCrosswalk __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFCrosswalk __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFCrosswalk_
{
  using Type = SFCrosswalk_<ContainerAllocator>;

  explicit SFCrosswalk_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->lupointposlgt = 0.0f;
      this->lupointposlat = 0.0f;
      this->rupointposlgt = 0.0f;
      this->rupointposlat = 0.0f;
      this->rdpointposlgt = 0.0f;
      this->rdpointposlat = 0.0f;
      this->ldpointposlgt = 0.0f;
      this->ldpointposlat = 0.0f;
      this->confi = 0;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  explicit SFCrosswalk_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reserved(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->lupointposlgt = 0.0f;
      this->lupointposlat = 0.0f;
      this->rupointposlgt = 0.0f;
      this->rupointposlat = 0.0f;
      this->rdpointposlgt = 0.0f;
      this->rdpointposlat = 0.0f;
      this->ldpointposlgt = 0.0f;
      this->ldpointposlat = 0.0f;
      this->confi = 0;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _lupointposlgt_type =
    float;
  _lupointposlgt_type lupointposlgt;
  using _lupointposlat_type =
    float;
  _lupointposlat_type lupointposlat;
  using _rupointposlgt_type =
    float;
  _rupointposlgt_type rupointposlgt;
  using _rupointposlat_type =
    float;
  _rupointposlat_type rupointposlat;
  using _rdpointposlgt_type =
    float;
  _rdpointposlgt_type rdpointposlgt;
  using _rdpointposlat_type =
    float;
  _rdpointposlat_type rdpointposlat;
  using _ldpointposlgt_type =
    float;
  _ldpointposlgt_type ldpointposlgt;
  using _ldpointposlat_type =
    float;
  _ldpointposlat_type ldpointposlat;
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
  Type & set__lupointposlgt(
    const float & _arg)
  {
    this->lupointposlgt = _arg;
    return *this;
  }
  Type & set__lupointposlat(
    const float & _arg)
  {
    this->lupointposlat = _arg;
    return *this;
  }
  Type & set__rupointposlgt(
    const float & _arg)
  {
    this->rupointposlgt = _arg;
    return *this;
  }
  Type & set__rupointposlat(
    const float & _arg)
  {
    this->rupointposlat = _arg;
    return *this;
  }
  Type & set__rdpointposlgt(
    const float & _arg)
  {
    this->rdpointposlgt = _arg;
    return *this;
  }
  Type & set__rdpointposlat(
    const float & _arg)
  {
    this->rdpointposlat = _arg;
    return *this;
  }
  Type & set__ldpointposlgt(
    const float & _arg)
  {
    this->ldpointposlgt = _arg;
    return *this;
  }
  Type & set__ldpointposlat(
    const float & _arg)
  {
    this->ldpointposlat = _arg;
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
    deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFCrosswalk
    std::shared_ptr<deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFCrosswalk
    std::shared_ptr<deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFCrosswalk_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->lupointposlgt != other.lupointposlgt) {
      return false;
    }
    if (this->lupointposlat != other.lupointposlat) {
      return false;
    }
    if (this->rupointposlgt != other.rupointposlgt) {
      return false;
    }
    if (this->rupointposlat != other.rupointposlat) {
      return false;
    }
    if (this->rdpointposlgt != other.rdpointposlgt) {
      return false;
    }
    if (this->rdpointposlat != other.rdpointposlat) {
      return false;
    }
    if (this->ldpointposlgt != other.ldpointposlgt) {
      return false;
    }
    if (this->ldpointposlat != other.ldpointposlat) {
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
  bool operator!=(const SFCrosswalk_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFCrosswalk_

// alias to use template instance with default allocator
using SFCrosswalk =
  deva_aeb_msgs::msg::SFCrosswalk_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_CROSSWALK__STRUCT_HPP_
