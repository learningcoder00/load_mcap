// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionTS.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionTS __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionTS __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFusionTS_
{
  using Type = SFFusionTS_<ContainerAllocator>;

  explicit SFFusionTS_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->dstlgttoeve = 0.0f;
      this->dstlattoeve = 0.0f;
      this->height = 0.0f;
      this->electcsgn = 0;
      this->lanelocn = 0;
      this->locn = 0;
      this->rlvc = 0;
      this->notrlvres = 0;
      this->qly = 0;
      this->typ = 0;
      this->val = 0;
      this->reserved = 0;
      this->spplinfoval = 0;
      this->spplinfotype = 0;
    }
  }

  explicit SFFusionTS_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->dstlgttoeve = 0.0f;
      this->dstlattoeve = 0.0f;
      this->height = 0.0f;
      this->electcsgn = 0;
      this->lanelocn = 0;
      this->locn = 0;
      this->rlvc = 0;
      this->notrlvres = 0;
      this->qly = 0;
      this->typ = 0;
      this->val = 0;
      this->reserved = 0;
      this->spplinfoval = 0;
      this->spplinfotype = 0;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _dstlgttoeve_type =
    float;
  _dstlgttoeve_type dstlgttoeve;
  using _dstlattoeve_type =
    float;
  _dstlattoeve_type dstlattoeve;
  using _height_type =
    float;
  _height_type height;
  using _electcsgn_type =
    uint8_t;
  _electcsgn_type electcsgn;
  using _lanelocn_type =
    uint8_t;
  _lanelocn_type lanelocn;
  using _locn_type =
    uint8_t;
  _locn_type locn;
  using _rlvc_type =
    uint8_t;
  _rlvc_type rlvc;
  using _notrlvres_type =
    uint8_t;
  _notrlvres_type notrlvres;
  using _qly_type =
    uint8_t;
  _qly_type qly;
  using _typ_type =
    uint8_t;
  _typ_type typ;
  using _val_type =
    uint8_t;
  _val_type val;
  using _reserved_type =
    uint8_t;
  _reserved_type reserved;
  using _spplinfoval_type =
    uint16_t;
  _spplinfoval_type spplinfoval;
  using _spplinfotype_type =
    uint8_t;
  _spplinfotype_type spplinfotype;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__dstlgttoeve(
    const float & _arg)
  {
    this->dstlgttoeve = _arg;
    return *this;
  }
  Type & set__dstlattoeve(
    const float & _arg)
  {
    this->dstlattoeve = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__electcsgn(
    const uint8_t & _arg)
  {
    this->electcsgn = _arg;
    return *this;
  }
  Type & set__lanelocn(
    const uint8_t & _arg)
  {
    this->lanelocn = _arg;
    return *this;
  }
  Type & set__locn(
    const uint8_t & _arg)
  {
    this->locn = _arg;
    return *this;
  }
  Type & set__rlvc(
    const uint8_t & _arg)
  {
    this->rlvc = _arg;
    return *this;
  }
  Type & set__notrlvres(
    const uint8_t & _arg)
  {
    this->notrlvres = _arg;
    return *this;
  }
  Type & set__qly(
    const uint8_t & _arg)
  {
    this->qly = _arg;
    return *this;
  }
  Type & set__typ(
    const uint8_t & _arg)
  {
    this->typ = _arg;
    return *this;
  }
  Type & set__val(
    const uint8_t & _arg)
  {
    this->val = _arg;
    return *this;
  }
  Type & set__reserved(
    const uint8_t & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__spplinfoval(
    const uint16_t & _arg)
  {
    this->spplinfoval = _arg;
    return *this;
  }
  Type & set__spplinfotype(
    const uint8_t & _arg)
  {
    this->spplinfotype = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionTS
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionTS
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFusionTS_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->dstlgttoeve != other.dstlgttoeve) {
      return false;
    }
    if (this->dstlattoeve != other.dstlattoeve) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->electcsgn != other.electcsgn) {
      return false;
    }
    if (this->lanelocn != other.lanelocn) {
      return false;
    }
    if (this->locn != other.locn) {
      return false;
    }
    if (this->rlvc != other.rlvc) {
      return false;
    }
    if (this->notrlvres != other.notrlvres) {
      return false;
    }
    if (this->qly != other.qly) {
      return false;
    }
    if (this->typ != other.typ) {
      return false;
    }
    if (this->val != other.val) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->spplinfoval != other.spplinfoval) {
      return false;
    }
    if (this->spplinfotype != other.spplinfotype) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFFusionTS_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFusionTS_

// alias to use template instance with default allocator
using SFFusionTS =
  deva_aeb_msgs::msg::SFFusionTS_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS__STRUCT_HPP_
