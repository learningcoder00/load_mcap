// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionRoadEdge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_EDGE__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_EDGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'frontleft'
// Member 'frontright'
// Member 'rearleft'
// Member 'rearright'
#include "deva_aeb_msgs/msg/detail/road_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionRoadEdge __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionRoadEdge __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFusionRoadEdge_
{
  using Type = SFFusionRoadEdge_<ContainerAllocator>;

  explicit SFFusionRoadEdge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frontleft(_init),
    frontright(_init),
    rearleft(_init),
    rearright(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
    }
  }

  explicit SFFusionRoadEdge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frontleft(_alloc, _init),
    frontright(_alloc, _init),
    rearleft(_alloc, _init),
    rearright(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _framenum_type =
    uint32_t;
  _framenum_type framenum;
  using _frontleft_type =
    deva_aeb_msgs::msg::RoadInfo_<ContainerAllocator>;
  _frontleft_type frontleft;
  using _frontright_type =
    deva_aeb_msgs::msg::RoadInfo_<ContainerAllocator>;
  _frontright_type frontright;
  using _rearleft_type =
    deva_aeb_msgs::msg::RoadInfo_<ContainerAllocator>;
  _rearleft_type rearleft;
  using _rearright_type =
    deva_aeb_msgs::msg::RoadInfo_<ContainerAllocator>;
  _rearright_type rearright;

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
  Type & set__frontleft(
    const deva_aeb_msgs::msg::RoadInfo_<ContainerAllocator> & _arg)
  {
    this->frontleft = _arg;
    return *this;
  }
  Type & set__frontright(
    const deva_aeb_msgs::msg::RoadInfo_<ContainerAllocator> & _arg)
  {
    this->frontright = _arg;
    return *this;
  }
  Type & set__rearleft(
    const deva_aeb_msgs::msg::RoadInfo_<ContainerAllocator> & _arg)
  {
    this->rearleft = _arg;
    return *this;
  }
  Type & set__rearright(
    const deva_aeb_msgs::msg::RoadInfo_<ContainerAllocator> & _arg)
  {
    this->rearright = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionRoadEdge
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionRoadEdge
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFusionRoadEdge_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->framenum != other.framenum) {
      return false;
    }
    if (this->frontleft != other.frontleft) {
      return false;
    }
    if (this->frontright != other.frontright) {
      return false;
    }
    if (this->rearleft != other.rearleft) {
      return false;
    }
    if (this->rearright != other.rearright) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFFusionRoadEdge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFusionRoadEdge_

// alias to use template instance with default allocator
using SFFusionRoadEdge =
  deva_aeb_msgs::msg::SFFusionRoadEdge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_EDGE__STRUCT_HPP_
