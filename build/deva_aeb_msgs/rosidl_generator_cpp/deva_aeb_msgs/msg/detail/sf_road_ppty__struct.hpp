// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFRoadPpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_PPTY__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_PPTY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFRoadPpty __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFRoadPpty __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFRoadPpty_
{
  using Type = SFRoadPpty_<ContainerAllocator>;

  explicit SFRoadPpty_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
      this->lanewidth = 0.0f;
      this->offslat = 0.0f;
      this->agdir = 0.0f;
      this->crvt = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->crvtrate.begin(), this->crvtrate.end(), 0.0f);
      this->crvtratevalidsize = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->seglen.begin(), this->seglen.end(), 0.0f);
      this->seglenvalidsize = 0;
      this->strtd = 0;
      this->vld = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
      std::fill<typename std::array<float, 32>::iterator, float>(this->titohiqly.begin(), this->titohiqly.end(), 0.0f);
      this->titohiqlyvalidsize = 0;
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->objidtitohiqly.begin(), this->objidtitohiqly.end(), 0);
      this->objidtitohiqlyvalidsize = 0;
      this->distancewithlowconfidence = 0.0f;
      this->distancewithhiahconfidence = 0.0f;
    }
  }

  explicit SFRoadPpty_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : crvtrate(_alloc),
    seglen(_alloc),
    reserved(_alloc),
    titohiqly(_alloc),
    objidtitohiqly(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
      this->lanewidth = 0.0f;
      this->offslat = 0.0f;
      this->agdir = 0.0f;
      this->crvt = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->crvtrate.begin(), this->crvtrate.end(), 0.0f);
      this->crvtratevalidsize = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->seglen.begin(), this->seglen.end(), 0.0f);
      this->seglenvalidsize = 0;
      this->strtd = 0;
      this->vld = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
      std::fill<typename std::array<float, 32>::iterator, float>(this->titohiqly.begin(), this->titohiqly.end(), 0.0f);
      this->titohiqlyvalidsize = 0;
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->objidtitohiqly.begin(), this->objidtitohiqly.end(), 0);
      this->objidtitohiqlyvalidsize = 0;
      this->distancewithlowconfidence = 0.0f;
      this->distancewithhiahconfidence = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _framenum_type =
    uint32_t;
  _framenum_type framenum;
  using _lanewidth_type =
    float;
  _lanewidth_type lanewidth;
  using _offslat_type =
    float;
  _offslat_type offslat;
  using _agdir_type =
    float;
  _agdir_type agdir;
  using _crvt_type =
    float;
  _crvt_type crvt;
  using _crvtrate_type =
    std::array<float, 3>;
  _crvtrate_type crvtrate;
  using _crvtratevalidsize_type =
    uint8_t;
  _crvtratevalidsize_type crvtratevalidsize;
  using _seglen_type =
    std::array<float, 3>;
  _seglen_type seglen;
  using _seglenvalidsize_type =
    uint8_t;
  _seglenvalidsize_type seglenvalidsize;
  using _strtd_type =
    uint8_t;
  _strtd_type strtd;
  using _vld_type =
    uint8_t;
  _vld_type vld;
  using _reserved_type =
    std::array<uint8_t, 2>;
  _reserved_type reserved;
  using _titohiqly_type =
    std::array<float, 32>;
  _titohiqly_type titohiqly;
  using _titohiqlyvalidsize_type =
    uint8_t;
  _titohiqlyvalidsize_type titohiqlyvalidsize;
  using _objidtitohiqly_type =
    std::array<uint8_t, 32>;
  _objidtitohiqly_type objidtitohiqly;
  using _objidtitohiqlyvalidsize_type =
    uint8_t;
  _objidtitohiqlyvalidsize_type objidtitohiqlyvalidsize;
  using _distancewithlowconfidence_type =
    float;
  _distancewithlowconfidence_type distancewithlowconfidence;
  using _distancewithhiahconfidence_type =
    float;
  _distancewithhiahconfidence_type distancewithhiahconfidence;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__framenum(
    const uint32_t & _arg)
  {
    this->framenum = _arg;
    return *this;
  }
  Type & set__lanewidth(
    const float & _arg)
  {
    this->lanewidth = _arg;
    return *this;
  }
  Type & set__offslat(
    const float & _arg)
  {
    this->offslat = _arg;
    return *this;
  }
  Type & set__agdir(
    const float & _arg)
  {
    this->agdir = _arg;
    return *this;
  }
  Type & set__crvt(
    const float & _arg)
  {
    this->crvt = _arg;
    return *this;
  }
  Type & set__crvtrate(
    const std::array<float, 3> & _arg)
  {
    this->crvtrate = _arg;
    return *this;
  }
  Type & set__crvtratevalidsize(
    const uint8_t & _arg)
  {
    this->crvtratevalidsize = _arg;
    return *this;
  }
  Type & set__seglen(
    const std::array<float, 3> & _arg)
  {
    this->seglen = _arg;
    return *this;
  }
  Type & set__seglenvalidsize(
    const uint8_t & _arg)
  {
    this->seglenvalidsize = _arg;
    return *this;
  }
  Type & set__strtd(
    const uint8_t & _arg)
  {
    this->strtd = _arg;
    return *this;
  }
  Type & set__vld(
    const uint8_t & _arg)
  {
    this->vld = _arg;
    return *this;
  }
  Type & set__reserved(
    const std::array<uint8_t, 2> & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__titohiqly(
    const std::array<float, 32> & _arg)
  {
    this->titohiqly = _arg;
    return *this;
  }
  Type & set__titohiqlyvalidsize(
    const uint8_t & _arg)
  {
    this->titohiqlyvalidsize = _arg;
    return *this;
  }
  Type & set__objidtitohiqly(
    const std::array<uint8_t, 32> & _arg)
  {
    this->objidtitohiqly = _arg;
    return *this;
  }
  Type & set__objidtitohiqlyvalidsize(
    const uint8_t & _arg)
  {
    this->objidtitohiqlyvalidsize = _arg;
    return *this;
  }
  Type & set__distancewithlowconfidence(
    const float & _arg)
  {
    this->distancewithlowconfidence = _arg;
    return *this;
  }
  Type & set__distancewithhiahconfidence(
    const float & _arg)
  {
    this->distancewithhiahconfidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFRoadPpty
    std::shared_ptr<deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFRoadPpty
    std::shared_ptr<deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFRoadPpty_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->framenum != other.framenum) {
      return false;
    }
    if (this->lanewidth != other.lanewidth) {
      return false;
    }
    if (this->offslat != other.offslat) {
      return false;
    }
    if (this->agdir != other.agdir) {
      return false;
    }
    if (this->crvt != other.crvt) {
      return false;
    }
    if (this->crvtrate != other.crvtrate) {
      return false;
    }
    if (this->crvtratevalidsize != other.crvtratevalidsize) {
      return false;
    }
    if (this->seglen != other.seglen) {
      return false;
    }
    if (this->seglenvalidsize != other.seglenvalidsize) {
      return false;
    }
    if (this->strtd != other.strtd) {
      return false;
    }
    if (this->vld != other.vld) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->titohiqly != other.titohiqly) {
      return false;
    }
    if (this->titohiqlyvalidsize != other.titohiqlyvalidsize) {
      return false;
    }
    if (this->objidtitohiqly != other.objidtitohiqly) {
      return false;
    }
    if (this->objidtitohiqlyvalidsize != other.objidtitohiqlyvalidsize) {
      return false;
    }
    if (this->distancewithlowconfidence != other.distancewithlowconfidence) {
      return false;
    }
    if (this->distancewithhiahconfidence != other.distancewithhiahconfidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFRoadPpty_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFRoadPpty_

// alias to use template instance with default allocator
using SFRoadPpty =
  deva_aeb_msgs::msg::SFRoadPpty_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_PPTY__STRUCT_HPP_
