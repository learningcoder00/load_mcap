// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFRoadEdgeEstimn.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_EDGE_ESTIMN__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_EDGE_ESTIMN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFRoadEdgeEstimn __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFRoadEdgeEstimn __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFRoadEdgeEstimn_
{
  using Type = SFRoadEdgeEstimn_<ContainerAllocator>;

  explicit SFRoadEdgeEstimn_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->constcoeff = 0.0f;
      this->firstordercoeff = 0.0f;
      this->secondordercoeff = 0.0f;
      this->thirdordercoeff = 0.0f;
      this->dstlgttoend = 0.0f;
      this->startpointposx = 0.0f;
      this->startpointposy = 0.0f;
      this->endpointposx = 0.0f;
      this->endpointposy = 0.0f;
      this->extendendpointposx = 0.0f;
      this->extendendpointposy = 0.0f;
      this->overrideflag = 0;
      this->type = 0;
      this->parseconfi = 0;
      this->tracestatus = 0;
    }
  }

  explicit SFRoadEdgeEstimn_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->constcoeff = 0.0f;
      this->firstordercoeff = 0.0f;
      this->secondordercoeff = 0.0f;
      this->thirdordercoeff = 0.0f;
      this->dstlgttoend = 0.0f;
      this->startpointposx = 0.0f;
      this->startpointposy = 0.0f;
      this->endpointposx = 0.0f;
      this->endpointposy = 0.0f;
      this->extendendpointposx = 0.0f;
      this->extendendpointposy = 0.0f;
      this->overrideflag = 0;
      this->type = 0;
      this->parseconfi = 0;
      this->tracestatus = 0;
    }
  }

  // field types and members
  using _constcoeff_type =
    float;
  _constcoeff_type constcoeff;
  using _firstordercoeff_type =
    float;
  _firstordercoeff_type firstordercoeff;
  using _secondordercoeff_type =
    float;
  _secondordercoeff_type secondordercoeff;
  using _thirdordercoeff_type =
    float;
  _thirdordercoeff_type thirdordercoeff;
  using _dstlgttoend_type =
    float;
  _dstlgttoend_type dstlgttoend;
  using _startpointposx_type =
    float;
  _startpointposx_type startpointposx;
  using _startpointposy_type =
    float;
  _startpointposy_type startpointposy;
  using _endpointposx_type =
    float;
  _endpointposx_type endpointposx;
  using _endpointposy_type =
    float;
  _endpointposy_type endpointposy;
  using _extendendpointposx_type =
    float;
  _extendendpointposx_type extendendpointposx;
  using _extendendpointposy_type =
    float;
  _extendendpointposy_type extendendpointposy;
  using _overrideflag_type =
    uint8_t;
  _overrideflag_type overrideflag;
  using _type_type =
    uint8_t;
  _type_type type;
  using _parseconfi_type =
    uint8_t;
  _parseconfi_type parseconfi;
  using _tracestatus_type =
    uint8_t;
  _tracestatus_type tracestatus;

  // setters for named parameter idiom
  Type & set__constcoeff(
    const float & _arg)
  {
    this->constcoeff = _arg;
    return *this;
  }
  Type & set__firstordercoeff(
    const float & _arg)
  {
    this->firstordercoeff = _arg;
    return *this;
  }
  Type & set__secondordercoeff(
    const float & _arg)
  {
    this->secondordercoeff = _arg;
    return *this;
  }
  Type & set__thirdordercoeff(
    const float & _arg)
  {
    this->thirdordercoeff = _arg;
    return *this;
  }
  Type & set__dstlgttoend(
    const float & _arg)
  {
    this->dstlgttoend = _arg;
    return *this;
  }
  Type & set__startpointposx(
    const float & _arg)
  {
    this->startpointposx = _arg;
    return *this;
  }
  Type & set__startpointposy(
    const float & _arg)
  {
    this->startpointposy = _arg;
    return *this;
  }
  Type & set__endpointposx(
    const float & _arg)
  {
    this->endpointposx = _arg;
    return *this;
  }
  Type & set__endpointposy(
    const float & _arg)
  {
    this->endpointposy = _arg;
    return *this;
  }
  Type & set__extendendpointposx(
    const float & _arg)
  {
    this->extendendpointposx = _arg;
    return *this;
  }
  Type & set__extendendpointposy(
    const float & _arg)
  {
    this->extendendpointposy = _arg;
    return *this;
  }
  Type & set__overrideflag(
    const uint8_t & _arg)
  {
    this->overrideflag = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__parseconfi(
    const uint8_t & _arg)
  {
    this->parseconfi = _arg;
    return *this;
  }
  Type & set__tracestatus(
    const uint8_t & _arg)
  {
    this->tracestatus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFRoadEdgeEstimn_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFRoadEdgeEstimn_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFRoadEdgeEstimn_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFRoadEdgeEstimn_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFRoadEdgeEstimn_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFRoadEdgeEstimn_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFRoadEdgeEstimn_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFRoadEdgeEstimn_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFRoadEdgeEstimn_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFRoadEdgeEstimn_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFRoadEdgeEstimn
    std::shared_ptr<deva_aeb_msgs::msg::SFRoadEdgeEstimn_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFRoadEdgeEstimn
    std::shared_ptr<deva_aeb_msgs::msg::SFRoadEdgeEstimn_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFRoadEdgeEstimn_ & other) const
  {
    if (this->constcoeff != other.constcoeff) {
      return false;
    }
    if (this->firstordercoeff != other.firstordercoeff) {
      return false;
    }
    if (this->secondordercoeff != other.secondordercoeff) {
      return false;
    }
    if (this->thirdordercoeff != other.thirdordercoeff) {
      return false;
    }
    if (this->dstlgttoend != other.dstlgttoend) {
      return false;
    }
    if (this->startpointposx != other.startpointposx) {
      return false;
    }
    if (this->startpointposy != other.startpointposy) {
      return false;
    }
    if (this->endpointposx != other.endpointposx) {
      return false;
    }
    if (this->endpointposy != other.endpointposy) {
      return false;
    }
    if (this->extendendpointposx != other.extendendpointposx) {
      return false;
    }
    if (this->extendendpointposy != other.extendendpointposy) {
      return false;
    }
    if (this->overrideflag != other.overrideflag) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->parseconfi != other.parseconfi) {
      return false;
    }
    if (this->tracestatus != other.tracestatus) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFRoadEdgeEstimn_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFRoadEdgeEstimn_

// alias to use template instance with default allocator
using SFRoadEdgeEstimn =
  deva_aeb_msgs::msg::SFRoadEdgeEstimn_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_EDGE_ESTIMN__STRUCT_HPP_
