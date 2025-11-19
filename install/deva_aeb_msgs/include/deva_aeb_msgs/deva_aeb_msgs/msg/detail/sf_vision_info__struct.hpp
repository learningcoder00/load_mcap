// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFVisionInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_VISION_INFO__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_VISION_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFVisionInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFVisionInfo __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFVisionInfo_
{
  using Type = SFVisionInfo_<ContainerAllocator>;

  explicit SFVisionInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cornerx = 0.0f;
      this->cornery = 0.0f;
      this->distinlane = 0.0f;
      this->objcutinflag = 0;
      this->objcutinlanetype = 0;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
      this->visionposx = 0.0f;
      this->visionposy = 0.0f;
      this->laneassignment = 0;
      this->iscipv = 0;
      this->mtncatergory = 0;
      this->mtnstatus = 0;
      this->distconvergence = 0;
      this->coverdproperty = 0;
      this->unstable = 0;
    }
  }

  explicit SFVisionInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reserved(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cornerx = 0.0f;
      this->cornery = 0.0f;
      this->distinlane = 0.0f;
      this->objcutinflag = 0;
      this->objcutinlanetype = 0;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
      this->visionposx = 0.0f;
      this->visionposy = 0.0f;
      this->laneassignment = 0;
      this->iscipv = 0;
      this->mtncatergory = 0;
      this->mtnstatus = 0;
      this->distconvergence = 0;
      this->coverdproperty = 0;
      this->unstable = 0;
    }
  }

  // field types and members
  using _cornerx_type =
    float;
  _cornerx_type cornerx;
  using _cornery_type =
    float;
  _cornery_type cornery;
  using _distinlane_type =
    float;
  _distinlane_type distinlane;
  using _objcutinflag_type =
    uint8_t;
  _objcutinflag_type objcutinflag;
  using _objcutinlanetype_type =
    uint8_t;
  _objcutinlanetype_type objcutinlanetype;
  using _reserved_type =
    std::array<uint8_t, 3>;
  _reserved_type reserved;
  using _visionposx_type =
    float;
  _visionposx_type visionposx;
  using _visionposy_type =
    float;
  _visionposy_type visionposy;
  using _laneassignment_type =
    uint8_t;
  _laneassignment_type laneassignment;
  using _iscipv_type =
    uint8_t;
  _iscipv_type iscipv;
  using _mtncatergory_type =
    uint8_t;
  _mtncatergory_type mtncatergory;
  using _mtnstatus_type =
    uint8_t;
  _mtnstatus_type mtnstatus;
  using _distconvergence_type =
    uint8_t;
  _distconvergence_type distconvergence;
  using _coverdproperty_type =
    uint8_t;
  _coverdproperty_type coverdproperty;
  using _unstable_type =
    uint8_t;
  _unstable_type unstable;

  // setters for named parameter idiom
  Type & set__cornerx(
    const float & _arg)
  {
    this->cornerx = _arg;
    return *this;
  }
  Type & set__cornery(
    const float & _arg)
  {
    this->cornery = _arg;
    return *this;
  }
  Type & set__distinlane(
    const float & _arg)
  {
    this->distinlane = _arg;
    return *this;
  }
  Type & set__objcutinflag(
    const uint8_t & _arg)
  {
    this->objcutinflag = _arg;
    return *this;
  }
  Type & set__objcutinlanetype(
    const uint8_t & _arg)
  {
    this->objcutinlanetype = _arg;
    return *this;
  }
  Type & set__reserved(
    const std::array<uint8_t, 3> & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__visionposx(
    const float & _arg)
  {
    this->visionposx = _arg;
    return *this;
  }
  Type & set__visionposy(
    const float & _arg)
  {
    this->visionposy = _arg;
    return *this;
  }
  Type & set__laneassignment(
    const uint8_t & _arg)
  {
    this->laneassignment = _arg;
    return *this;
  }
  Type & set__iscipv(
    const uint8_t & _arg)
  {
    this->iscipv = _arg;
    return *this;
  }
  Type & set__mtncatergory(
    const uint8_t & _arg)
  {
    this->mtncatergory = _arg;
    return *this;
  }
  Type & set__mtnstatus(
    const uint8_t & _arg)
  {
    this->mtnstatus = _arg;
    return *this;
  }
  Type & set__distconvergence(
    const uint8_t & _arg)
  {
    this->distconvergence = _arg;
    return *this;
  }
  Type & set__coverdproperty(
    const uint8_t & _arg)
  {
    this->coverdproperty = _arg;
    return *this;
  }
  Type & set__unstable(
    const uint8_t & _arg)
  {
    this->unstable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFVisionInfo
    std::shared_ptr<deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFVisionInfo
    std::shared_ptr<deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFVisionInfo_ & other) const
  {
    if (this->cornerx != other.cornerx) {
      return false;
    }
    if (this->cornery != other.cornery) {
      return false;
    }
    if (this->distinlane != other.distinlane) {
      return false;
    }
    if (this->objcutinflag != other.objcutinflag) {
      return false;
    }
    if (this->objcutinlanetype != other.objcutinlanetype) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->visionposx != other.visionposx) {
      return false;
    }
    if (this->visionposy != other.visionposy) {
      return false;
    }
    if (this->laneassignment != other.laneassignment) {
      return false;
    }
    if (this->iscipv != other.iscipv) {
      return false;
    }
    if (this->mtncatergory != other.mtncatergory) {
      return false;
    }
    if (this->mtnstatus != other.mtnstatus) {
      return false;
    }
    if (this->distconvergence != other.distconvergence) {
      return false;
    }
    if (this->coverdproperty != other.coverdproperty) {
      return false;
    }
    if (this->unstable != other.unstable) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFVisionInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFVisionInfo_

// alias to use template instance with default allocator
using SFVisionInfo =
  deva_aeb_msgs::msg::SFVisionInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_VISION_INFO__STRUCT_HPP_
