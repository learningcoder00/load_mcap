// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/SFFusionTSNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TSNOA__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TSNOA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'region'
#include "deva_perception_msgs/msg/detail/traffic_region__struct.hpp"
// Member 'tsquadranglevcs'
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__struct.hpp"
// Member 'tsquadrangleimg'
#include "deva_perception_msgs/msg/detail/quadrangle_img__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__SFFusionTSNOA __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__SFFusionTSNOA __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFusionTSNOA_
{
  using Type = SFFusionTSNOA_<ContainerAllocator>;

  explicit SFFusionTSNOA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : region(_init),
    tsquadranglevcs(_init),
    tsquadrangleimg(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->dstlgttoeve = 0.0f;
      this->dstlattoeve = 0.0f;
      this->height = 0.0f;
      this->direction = 0.0f;
      this->electcsgn = 0;
      this->lanelocn = 0;
      this->locn = 0;
      this->rlvc = 0;
      this->notrlvres = 0;
      this->qly = 0;
      this->typ = 0;
      this->val = 0;
      this->is_ramp = false;
      this->reserved = 0;
      this->spplinfoval = 0;
      this->spplinfotype = 0;
      this->utmx = 0.0f;
      this->utmy = 0.0f;
      this->utmz = 0.0f;
      this->pole = 0ul;
    }
  }

  explicit SFFusionTSNOA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : region(_alloc, _init),
    tsquadranglevcs(_alloc, _init),
    tsquadrangleimg(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->dstlgttoeve = 0.0f;
      this->dstlattoeve = 0.0f;
      this->height = 0.0f;
      this->direction = 0.0f;
      this->electcsgn = 0;
      this->lanelocn = 0;
      this->locn = 0;
      this->rlvc = 0;
      this->notrlvres = 0;
      this->qly = 0;
      this->typ = 0;
      this->val = 0;
      this->is_ramp = false;
      this->reserved = 0;
      this->spplinfoval = 0;
      this->spplinfotype = 0;
      this->utmx = 0.0f;
      this->utmy = 0.0f;
      this->utmz = 0.0f;
      this->pole = 0ul;
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
  using _direction_type =
    float;
  _direction_type direction;
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
  using _is_ramp_type =
    bool;
  _is_ramp_type is_ramp;
  using _region_type =
    deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator>;
  _region_type region;
  using _reserved_type =
    uint8_t;
  _reserved_type reserved;
  using _spplinfoval_type =
    uint16_t;
  _spplinfoval_type spplinfoval;
  using _spplinfotype_type =
    uint8_t;
  _spplinfotype_type spplinfotype;
  using _tsquadranglevcs_type =
    deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator>;
  _tsquadranglevcs_type tsquadranglevcs;
  using _tsquadrangleimg_type =
    deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator>;
  _tsquadrangleimg_type tsquadrangleimg;
  using _utmx_type =
    float;
  _utmx_type utmx;
  using _utmy_type =
    float;
  _utmy_type utmy;
  using _utmz_type =
    float;
  _utmz_type utmz;
  using _pole_type =
    uint32_t;
  _pole_type pole;

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
  Type & set__direction(
    const float & _arg)
  {
    this->direction = _arg;
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
  Type & set__is_ramp(
    const bool & _arg)
  {
    this->is_ramp = _arg;
    return *this;
  }
  Type & set__region(
    const deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator> & _arg)
  {
    this->region = _arg;
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
  Type & set__tsquadranglevcs(
    const deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator> & _arg)
  {
    this->tsquadranglevcs = _arg;
    return *this;
  }
  Type & set__tsquadrangleimg(
    const deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator> & _arg)
  {
    this->tsquadrangleimg = _arg;
    return *this;
  }
  Type & set__utmx(
    const float & _arg)
  {
    this->utmx = _arg;
    return *this;
  }
  Type & set__utmy(
    const float & _arg)
  {
    this->utmy = _arg;
    return *this;
  }
  Type & set__utmz(
    const float & _arg)
  {
    this->utmz = _arg;
    return *this;
  }
  Type & set__pole(
    const uint32_t & _arg)
  {
    this->pole = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__SFFusionTSNOA
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__SFFusionTSNOA
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFusionTSNOA_ & other) const
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
    if (this->direction != other.direction) {
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
    if (this->is_ramp != other.is_ramp) {
      return false;
    }
    if (this->region != other.region) {
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
    if (this->tsquadranglevcs != other.tsquadranglevcs) {
      return false;
    }
    if (this->tsquadrangleimg != other.tsquadrangleimg) {
      return false;
    }
    if (this->utmx != other.utmx) {
      return false;
    }
    if (this->utmy != other.utmy) {
      return false;
    }
    if (this->utmz != other.utmz) {
      return false;
    }
    if (this->pole != other.pole) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFFusionTSNOA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFusionTSNOA_

// alias to use template instance with default allocator
using SFFusionTSNOA =
  deva_perception_msgs::msg::SFFusionTSNOA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TSNOA__STRUCT_HPP_
