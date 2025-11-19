// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBLaneAndEdge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_LANE_AND_EDGE__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_LANE_AND_EDGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'fusionlanemkrlist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__struct.hpp"
// Member 'fusionroadedge'
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FusionInfoForAEBLaneAndEdge_
{
  using Type = FusionInfoForAEBLaneAndEdge_<ContainerAllocator>;

  explicit FusionInfoForAEBLaneAndEdge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    fusionlanemkrlist(_init),
    fusionroadedge(_init)
  {
    (void)_init;
  }

  explicit FusionInfoForAEBLaneAndEdge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    fusionlanemkrlist(_alloc, _init),
    fusionroadedge(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fusionlanemkrlist_type =
    deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator>;
  _fusionlanemkrlist_type fusionlanemkrlist;
  using _fusionroadedge_type =
    deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator>;
  _fusionroadedge_type fusionroadedge;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fusionlanemkrlist(
    const deva_aeb_msgs::msg::SFFusionLaneMkrList_<ContainerAllocator> & _arg)
  {
    this->fusionlanemkrlist = _arg;
    return *this;
  }
  Type & set__fusionroadedge(
    const deva_aeb_msgs::msg::SFFusionRoadEdge_<ContainerAllocator> & _arg)
  {
    this->fusionroadedge = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FusionInfoForAEBLaneAndEdge_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fusionlanemkrlist != other.fusionlanemkrlist) {
      return false;
    }
    if (this->fusionroadedge != other.fusionroadedge) {
      return false;
    }
    return true;
  }
  bool operator!=(const FusionInfoForAEBLaneAndEdge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FusionInfoForAEBLaneAndEdge_

// alias to use template instance with default allocator
using FusionInfoForAEBLaneAndEdge =
  deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_LANE_AND_EDGE__STRUCT_HPP_
