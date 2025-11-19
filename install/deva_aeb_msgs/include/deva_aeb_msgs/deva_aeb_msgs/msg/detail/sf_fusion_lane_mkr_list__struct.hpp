// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionLaneMkrList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_LANE_MKR_LIST__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_LANE_MKR_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'clsle'
// Member 'clsri'
#include "deva_aeb_msgs/msg/detail/lane_fst_info__struct.hpp"
// Member 'secclsle'
// Member 'secclsri'
// Member 'thiclsle'
// Member 'thiclsri'
#include "deva_aeb_msgs/msg/detail/lane_sec_info__struct.hpp"
// Member 'rearclsle'
// Member 'rearclsri'
// Member 'rearsecclsle'
// Member 'rearsecclsri'
// Member 'rearthiclsle'
// Member 'rearthiclsri'
#include "deva_aeb_msgs/msg/detail/rear_lane_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionLaneMkrList __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionLaneMkrList __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFusionLaneMkrList_
{
  using Type = SFFusionLaneMkrList_<ContainerAllocator>;

  explicit SFFusionLaneMkrList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : clsle(_init),
    clsri(_init),
    secclsle(_init),
    secclsri(_init),
    thiclsle(_init),
    thiclsri(_init),
    rearclsle(_init),
    rearclsri(_init),
    rearsecclsle(_init),
    rearsecclsri(_init),
    rearthiclsle(_init),
    rearthiclsri(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
      this->lanechg = 0;
      this->reserved = 0;
      this->distostopline = 0.0f;
      this->isambiguouslinepatternleft = 0;
      this->isambiguouslinepatternright = 0;
      this->cmpforvisnyaw = 0.0f;
    }
  }

  explicit SFFusionLaneMkrList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : clsle(_alloc, _init),
    clsri(_alloc, _init),
    secclsle(_alloc, _init),
    secclsri(_alloc, _init),
    thiclsle(_alloc, _init),
    thiclsri(_alloc, _init),
    rearclsle(_alloc, _init),
    rearclsri(_alloc, _init),
    rearsecclsle(_alloc, _init),
    rearsecclsri(_alloc, _init),
    rearthiclsle(_alloc, _init),
    rearthiclsri(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
      this->lanechg = 0;
      this->reserved = 0;
      this->distostopline = 0.0f;
      this->isambiguouslinepatternleft = 0;
      this->isambiguouslinepatternright = 0;
      this->cmpforvisnyaw = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _framenum_type =
    uint32_t;
  _framenum_type framenum;
  using _lanechg_type =
    uint8_t;
  _lanechg_type lanechg;
  using _reserved_type =
    uint8_t;
  _reserved_type reserved;
  using _distostopline_type =
    float;
  _distostopline_type distostopline;
  using _clsle_type =
    deva_aeb_msgs::msg::LaneFstInfo_<ContainerAllocator>;
  _clsle_type clsle;
  using _clsri_type =
    deva_aeb_msgs::msg::LaneFstInfo_<ContainerAllocator>;
  _clsri_type clsri;
  using _secclsle_type =
    deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator>;
  _secclsle_type secclsle;
  using _secclsri_type =
    deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator>;
  _secclsri_type secclsri;
  using _thiclsle_type =
    deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator>;
  _thiclsle_type thiclsle;
  using _thiclsri_type =
    deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator>;
  _thiclsri_type thiclsri;
  using _rearclsle_type =
    deva_aeb_msgs::msg::RearLaneInfo_<ContainerAllocator>;
  _rearclsle_type rearclsle;
  using _rearclsri_type =
    deva_aeb_msgs::msg::RearLaneInfo_<ContainerAllocator>;
  _rearclsri_type rearclsri;
  using _rearsecclsle_type =
    deva_aeb_msgs::msg::RearLaneInfo_<ContainerAllocator>;
  _rearsecclsle_type rearsecclsle;
  using _rearsecclsri_type =
    deva_aeb_msgs::msg::RearLaneInfo_<ContainerAllocator>;
  _rearsecclsri_type rearsecclsri;
  using _rearthiclsle_type =
    deva_aeb_msgs::msg::RearLaneInfo_<ContainerAllocator>;
  _rearthiclsle_type rearthiclsle;
  using _rearthiclsri_type =
    deva_aeb_msgs::msg::RearLaneInfo_<ContainerAllocator>;
  _rearthiclsri_type rearthiclsri;
  using _isambiguouslinepatternleft_type =
    uint8_t;
  _isambiguouslinepatternleft_type isambiguouslinepatternleft;
  using _isambiguouslinepatternright_type =
    uint8_t;
  _isambiguouslinepatternright_type isambiguouslinepatternright;
  using _cmpforvisnyaw_type =
    float;
  _cmpforvisnyaw_type cmpforvisnyaw;

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
  Type & set__lanechg(
    const uint8_t & _arg)
  {
    this->lanechg = _arg;
    return *this;
  }
  Type & set__reserved(
    const uint8_t & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__distostopline(
    const float & _arg)
  {
    this->distostopline = _arg;
    return *this;
  }
  Type & set__clsle(
    const deva_aeb_msgs::msg::LaneFstInfo_<ContainerAllocator> & _arg)
  {
    this->clsle = _arg;
    return *this;
  }
  Type & set__clsri(
    const deva_aeb_msgs::msg::LaneFstInfo_<ContainerAllocator> & _arg)
  {
    this->clsri = _arg;
    return *this;
  }
  Type & set__secclsle(
    const deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator> & _arg)
  {
    this->secclsle = _arg;
    return *this;
  }
  Type & set__secclsri(
    const deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator> & _arg)
  {
    this->secclsri = _arg;
    return *this;
  }
  Type & set__thiclsle(
    const deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator> & _arg)
  {
    this->thiclsle = _arg;
    return *this;
  }
  Type & set__thiclsri(
    const deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator> & _arg)
  {
    this->thiclsri = _arg;
    return *this;
  }
  Type & set__rearclsle(
    const deva_aeb_msgs::msg::RearLaneInfo_<ContainerAllocator> & _arg)
  {
    this->rearclsle = _arg;
    return *this;
  }
  Type & set__rearclsri(
    const deva_aeb_msgs::msg::RearLaneInfo_<ContainerAllocator> & _arg)
  {
    this->rearclsri = _arg;
    return *this;
  }
  Type & set__rearsecclsle(
    const deva_aeb_msgs::msg::RearLaneInfo_<ContainerAllocator> & _arg)
  {
    this->rearsecclsle = _arg;
    return *this;
  }
  Type & set__rearsecclsri(
    const deva_aeb_msgs::msg::RearLaneInfo_<ContainerAllocator> & _arg)
  {
    this->rearsecclsri = _arg;
    return *this;
  }
  Type & set__rearthiclsle(
    const deva_aeb_msgs::msg::RearLaneInfo_<ContainerAllocator> & _arg)
  {
    this->rearthiclsle = _arg;
    return *this;
  }
  Type & set__rearthiclsri(
    const deva_aeb_msgs::msg::RearLaneInfo_<ContainerAllocator> & _arg)
  {
    this->rearthiclsri = _arg;
    return *this;
  }
  Type & set__isambiguouslinepatternleft(
    const uint8_t & _arg)
  {
    this->isambiguouslinepatternleft = _arg;
    return *this;
  }
  Type & set__isambiguouslinepatternright(
    const uint8_t & _arg)
  {
    this->isambiguouslinepatternright = _arg;
    return *this;
  }
  Type & set__cmpforvisnyaw(
    const float & _arg)
  {
    this->cmpforvisnyaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionLaneMkrList
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionLaneMkrList
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFusionLaneMkrList_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->framenum != other.framenum) {
      return false;
    }
    if (this->lanechg != other.lanechg) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->distostopline != other.distostopline) {
      return false;
    }
    if (this->clsle != other.clsle) {
      return false;
    }
    if (this->clsri != other.clsri) {
      return false;
    }
    if (this->secclsle != other.secclsle) {
      return false;
    }
    if (this->secclsri != other.secclsri) {
      return false;
    }
    if (this->thiclsle != other.thiclsle) {
      return false;
    }
    if (this->thiclsri != other.thiclsri) {
      return false;
    }
    if (this->rearclsle != other.rearclsle) {
      return false;
    }
    if (this->rearclsri != other.rearclsri) {
      return false;
    }
    if (this->rearsecclsle != other.rearsecclsle) {
      return false;
    }
    if (this->rearsecclsri != other.rearsecclsri) {
      return false;
    }
    if (this->rearthiclsle != other.rearthiclsle) {
      return false;
    }
    if (this->rearthiclsri != other.rearthiclsri) {
      return false;
    }
    if (this->isambiguouslinepatternleft != other.isambiguouslinepatternleft) {
      return false;
    }
    if (this->isambiguouslinepatternright != other.isambiguouslinepatternright) {
      return false;
    }
    if (this->cmpforvisnyaw != other.cmpforvisnyaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFFusionLaneMkrList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFusionLaneMkrList_

// alias to use template instance with default allocator
using SFFusionLaneMkrList =
  deva_aeb_msgs::msg::SFFusionLaneMkrList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_LANE_MKR_LIST__STRUCT_HPP_
