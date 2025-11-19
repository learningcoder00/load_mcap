// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFRoadArrow.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFRoadArrow __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFRoadArrow __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFRoadArrow_
{
  using Type = SFRoadArrow_<ContainerAllocator>;

  explicit SFRoadArrow_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->type = 0;
      this->confi = 0;
      this->lanassignment = 0;
      this->reserved = 0;
      this->poslgt = 0.0f;
      this->poslat = 0.0f;
      this->headingangle = 0.0f;
    }
  }

  explicit SFRoadArrow_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->type = 0;
      this->confi = 0;
      this->lanassignment = 0;
      this->reserved = 0;
      this->poslgt = 0.0f;
      this->poslat = 0.0f;
      this->headingangle = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _type_type =
    uint8_t;
  _type_type type;
  using _confi_type =
    uint8_t;
  _confi_type confi;
  using _lanassignment_type =
    uint8_t;
  _lanassignment_type lanassignment;
  using _reserved_type =
    uint8_t;
  _reserved_type reserved;
  using _poslgt_type =
    float;
  _poslgt_type poslgt;
  using _poslat_type =
    float;
  _poslat_type poslat;
  using _headingangle_type =
    float;
  _headingangle_type headingangle;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__confi(
    const uint8_t & _arg)
  {
    this->confi = _arg;
    return *this;
  }
  Type & set__lanassignment(
    const uint8_t & _arg)
  {
    this->lanassignment = _arg;
    return *this;
  }
  Type & set__reserved(
    const uint8_t & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__poslgt(
    const float & _arg)
  {
    this->poslgt = _arg;
    return *this;
  }
  Type & set__poslat(
    const float & _arg)
  {
    this->poslat = _arg;
    return *this;
  }
  Type & set__headingangle(
    const float & _arg)
  {
    this->headingangle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFRoadArrow
    std::shared_ptr<deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFRoadArrow
    std::shared_ptr<deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFRoadArrow_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->confi != other.confi) {
      return false;
    }
    if (this->lanassignment != other.lanassignment) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->poslgt != other.poslgt) {
      return false;
    }
    if (this->poslat != other.poslat) {
      return false;
    }
    if (this->headingangle != other.headingangle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFRoadArrow_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFRoadArrow_

// alias to use template instance with default allocator
using SFRoadArrow =
  deva_aeb_msgs::msg::SFRoadArrow_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__STRUCT_HPP_
