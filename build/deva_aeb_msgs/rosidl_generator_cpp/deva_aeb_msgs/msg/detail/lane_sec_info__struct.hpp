// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/LaneSecInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__LANE_SEC_INFO__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__LANE_SEC_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'estimn'
#include "deva_aeb_msgs/msg/detail/sf_sec_lane_estimn__struct.hpp"
// Member 'info'
#include "deva_aeb_msgs/msg/detail/sf_lane_info__struct.hpp"
// Member 'ppty'
#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__struct.hpp"
// Member 'nearramppoint'
#include "deva_aeb_msgs/msg/detail/sf_sec_lane_near_ramp_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__LaneSecInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__LaneSecInfo __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneSecInfo_
{
  using Type = LaneSecInfo_<ContainerAllocator>;

  explicit LaneSecInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : estimn(_init),
    info(_init),
    ppty(_init),
    nearramppoint(_init)
  {
    (void)_init;
  }

  explicit LaneSecInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : estimn(_alloc, _init),
    info(_alloc, _init),
    ppty(_alloc, _init),
    nearramppoint(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _estimn_type =
    deva_aeb_msgs::msg::SFSecLaneEstimn_<ContainerAllocator>;
  _estimn_type estimn;
  using _info_type =
    deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator>;
  _info_type info;
  using _ppty_type =
    deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator>;
  _ppty_type ppty;
  using _nearramppoint_type =
    deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator>;
  _nearramppoint_type nearramppoint;

  // setters for named parameter idiom
  Type & set__estimn(
    const deva_aeb_msgs::msg::SFSecLaneEstimn_<ContainerAllocator> & _arg)
  {
    this->estimn = _arg;
    return *this;
  }
  Type & set__info(
    const deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__ppty(
    const deva_aeb_msgs::msg::SFFrontLinePpty_<ContainerAllocator> & _arg)
  {
    this->ppty = _arg;
    return *this;
  }
  Type & set__nearramppoint(
    const deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator> & _arg)
  {
    this->nearramppoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__LaneSecInfo
    std::shared_ptr<deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__LaneSecInfo
    std::shared_ptr<deva_aeb_msgs::msg::LaneSecInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneSecInfo_ & other) const
  {
    if (this->estimn != other.estimn) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    if (this->ppty != other.ppty) {
      return false;
    }
    if (this->nearramppoint != other.nearramppoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneSecInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneSecInfo_

// alias to use template instance with default allocator
using LaneSecInfo =
  deva_aeb_msgs::msg::LaneSecInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__LANE_SEC_INFO__STRUCT_HPP_
