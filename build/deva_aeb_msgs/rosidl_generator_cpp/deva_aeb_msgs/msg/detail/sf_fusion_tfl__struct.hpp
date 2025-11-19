// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionTFL.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionTFL __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionTFL __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFusionTFL_
{
  using Type = SFFusionTFL_<ContainerAllocator>;

  explicit SFFusionTFL_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->lifetime = 0ul;
      this->height = 0.0f;
      this->relevancy = 0;
      this->type = 0;
      this->color = 0;
      this->number = 0;
      this->confi = 0;
      this->flashstatus = 0;
      this->background = 0;
      this->reserved = 0;
      this->poslgt = 0.0f;
      this->poslat = 0.0f;
    }
  }

  explicit SFFusionTFL_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->lifetime = 0ul;
      this->height = 0.0f;
      this->relevancy = 0;
      this->type = 0;
      this->color = 0;
      this->number = 0;
      this->confi = 0;
      this->flashstatus = 0;
      this->background = 0;
      this->reserved = 0;
      this->poslgt = 0.0f;
      this->poslat = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _lifetime_type =
    uint32_t;
  _lifetime_type lifetime;
  using _height_type =
    float;
  _height_type height;
  using _relevancy_type =
    uint8_t;
  _relevancy_type relevancy;
  using _type_type =
    uint8_t;
  _type_type type;
  using _color_type =
    uint8_t;
  _color_type color;
  using _number_type =
    uint8_t;
  _number_type number;
  using _confi_type =
    uint8_t;
  _confi_type confi;
  using _flashstatus_type =
    uint8_t;
  _flashstatus_type flashstatus;
  using _background_type =
    uint8_t;
  _background_type background;
  using _reserved_type =
    uint8_t;
  _reserved_type reserved;
  using _poslgt_type =
    float;
  _poslgt_type poslgt;
  using _poslat_type =
    float;
  _poslat_type poslat;

  // setters for named parameter idiom
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
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__relevancy(
    const uint8_t & _arg)
  {
    this->relevancy = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__color(
    const uint8_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__number(
    const uint8_t & _arg)
  {
    this->number = _arg;
    return *this;
  }
  Type & set__confi(
    const uint8_t & _arg)
  {
    this->confi = _arg;
    return *this;
  }
  Type & set__flashstatus(
    const uint8_t & _arg)
  {
    this->flashstatus = _arg;
    return *this;
  }
  Type & set__background(
    const uint8_t & _arg)
  {
    this->background = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionTFL
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionTFL
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFusionTFL_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->lifetime != other.lifetime) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->relevancy != other.relevancy) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->number != other.number) {
      return false;
    }
    if (this->confi != other.confi) {
      return false;
    }
    if (this->flashstatus != other.flashstatus) {
      return false;
    }
    if (this->background != other.background) {
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
    return true;
  }
  bool operator!=(const SFFusionTFL_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFusionTFL_

// alias to use template instance with default allocator
using SFFusionTFL =
  deva_aeb_msgs::msg::SFFusionTFL_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL__STRUCT_HPP_
