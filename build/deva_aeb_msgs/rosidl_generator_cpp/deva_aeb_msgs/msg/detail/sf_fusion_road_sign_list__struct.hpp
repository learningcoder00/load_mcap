// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionRoadSignList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sllist'
#include "deva_aeb_msgs/msg/detail/sf_stopline__struct.hpp"
// Member 'cwlist'
#include "deva_aeb_msgs/msg/detail/sf_crosswalk__struct.hpp"
// Member 'ralist'
#include "deva_aeb_msgs/msg/detail/sf_road_arrow__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionRoadSignList __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionRoadSignList __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFusionRoadSignList_
{
  using Type = SFFusionRoadSignList_<ContainerAllocator>;

  explicit SFFusionRoadSignList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sllist.fill(deva_aeb_msgs::msg::SFStopline_<ContainerAllocator>{_init});
      this->cwlist.fill(deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator>{_init});
      this->ralist.fill(deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator>{_init});
      this->timestamp = 0ull;
      this->framenum = 0ul;
      this->cwcount = 0;
      this->racount = 0;
      this->slvalidsize = 0;
      this->cwvalidsize = 0;
      this->ravalidsize = 0;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  explicit SFFusionRoadSignList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sllist(_alloc),
    cwlist(_alloc),
    ralist(_alloc),
    reserved(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sllist.fill(deva_aeb_msgs::msg::SFStopline_<ContainerAllocator>{_alloc, _init});
      this->cwlist.fill(deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator>{_alloc, _init});
      this->ralist.fill(deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator>{_alloc, _init});
      this->timestamp = 0ull;
      this->framenum = 0ul;
      this->cwcount = 0;
      this->racount = 0;
      this->slvalidsize = 0;
      this->cwvalidsize = 0;
      this->ravalidsize = 0;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  // field types and members
  using _sllist_type =
    std::array<deva_aeb_msgs::msg::SFStopline_<ContainerAllocator>, 8>;
  _sllist_type sllist;
  using _cwlist_type =
    std::array<deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator>, 4>;
  _cwlist_type cwlist;
  using _ralist_type =
    std::array<deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator>, 8>;
  _ralist_type ralist;
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _framenum_type =
    uint32_t;
  _framenum_type framenum;
  using _cwcount_type =
    uint8_t;
  _cwcount_type cwcount;
  using _racount_type =
    uint8_t;
  _racount_type racount;
  using _slvalidsize_type =
    uint8_t;
  _slvalidsize_type slvalidsize;
  using _cwvalidsize_type =
    uint8_t;
  _cwvalidsize_type cwvalidsize;
  using _ravalidsize_type =
    uint8_t;
  _ravalidsize_type ravalidsize;
  using _reserved_type =
    std::array<uint8_t, 3>;
  _reserved_type reserved;

  // setters for named parameter idiom
  Type & set__sllist(
    const std::array<deva_aeb_msgs::msg::SFStopline_<ContainerAllocator>, 8> & _arg)
  {
    this->sllist = _arg;
    return *this;
  }
  Type & set__cwlist(
    const std::array<deva_aeb_msgs::msg::SFCrosswalk_<ContainerAllocator>, 4> & _arg)
  {
    this->cwlist = _arg;
    return *this;
  }
  Type & set__ralist(
    const std::array<deva_aeb_msgs::msg::SFRoadArrow_<ContainerAllocator>, 8> & _arg)
  {
    this->ralist = _arg;
    return *this;
  }
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
  Type & set__cwcount(
    const uint8_t & _arg)
  {
    this->cwcount = _arg;
    return *this;
  }
  Type & set__racount(
    const uint8_t & _arg)
  {
    this->racount = _arg;
    return *this;
  }
  Type & set__slvalidsize(
    const uint8_t & _arg)
  {
    this->slvalidsize = _arg;
    return *this;
  }
  Type & set__cwvalidsize(
    const uint8_t & _arg)
  {
    this->cwvalidsize = _arg;
    return *this;
  }
  Type & set__ravalidsize(
    const uint8_t & _arg)
  {
    this->ravalidsize = _arg;
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
    deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionRoadSignList
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionRoadSignList
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFusionRoadSignList_ & other) const
  {
    if (this->sllist != other.sllist) {
      return false;
    }
    if (this->cwlist != other.cwlist) {
      return false;
    }
    if (this->ralist != other.ralist) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->framenum != other.framenum) {
      return false;
    }
    if (this->cwcount != other.cwcount) {
      return false;
    }
    if (this->racount != other.racount) {
      return false;
    }
    if (this->slvalidsize != other.slvalidsize) {
      return false;
    }
    if (this->cwvalidsize != other.cwvalidsize) {
      return false;
    }
    if (this->ravalidsize != other.ravalidsize) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFFusionRoadSignList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFusionRoadSignList_

// alias to use template instance with default allocator
using SFFusionRoadSignList =
  deva_aeb_msgs::msg::SFFusionRoadSignList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__STRUCT_HPP_
