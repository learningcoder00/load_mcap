// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBOther.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OTHER__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OTHER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'roadppty'
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__struct.hpp"
// Member 'vehself'
#include "deva_aeb_msgs/msg/detail/sf_veh_self__struct.hpp"
// Member 'fusiontslist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__struct.hpp"
// Member 'fusiontfllist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_tfl_list__struct.hpp"
// Member 'fusionroadsignlist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__struct.hpp"
// Member 'fusiondiaglist'
#include "deva_aeb_msgs/msg/detail/sf_diag_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBOther __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBOther __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FusionInfoForAEBOther_
{
  using Type = FusionInfoForAEBOther_<ContainerAllocator>;

  explicit FusionInfoForAEBOther_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roadppty(_init),
    vehself(_init),
    fusiontslist(_init),
    fusiontfllist(_init),
    fusionroadsignlist(_init),
    fusiondiaglist(_init)
  {
    (void)_init;
  }

  explicit FusionInfoForAEBOther_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roadppty(_alloc, _init),
    vehself(_alloc, _init),
    fusiontslist(_alloc, _init),
    fusiontfllist(_alloc, _init),
    fusionroadsignlist(_alloc, _init),
    fusiondiaglist(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _roadppty_type =
    deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator>;
  _roadppty_type roadppty;
  using _vehself_type =
    deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator>;
  _vehself_type vehself;
  using _fusiontslist_type =
    deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator>;
  _fusiontslist_type fusiontslist;
  using _fusiontfllist_type =
    deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator>;
  _fusiontfllist_type fusiontfllist;
  using _fusionroadsignlist_type =
    deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator>;
  _fusionroadsignlist_type fusionroadsignlist;
  using _fusiondiaglist_type =
    deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator>;
  _fusiondiaglist_type fusiondiaglist;

  // setters for named parameter idiom
  Type & set__roadppty(
    const deva_aeb_msgs::msg::SFRoadPpty_<ContainerAllocator> & _arg)
  {
    this->roadppty = _arg;
    return *this;
  }
  Type & set__vehself(
    const deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator> & _arg)
  {
    this->vehself = _arg;
    return *this;
  }
  Type & set__fusiontslist(
    const deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator> & _arg)
  {
    this->fusiontslist = _arg;
    return *this;
  }
  Type & set__fusiontfllist(
    const deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator> & _arg)
  {
    this->fusiontfllist = _arg;
    return *this;
  }
  Type & set__fusionroadsignlist(
    const deva_aeb_msgs::msg::SFFusionRoadSignList_<ContainerAllocator> & _arg)
  {
    this->fusionroadsignlist = _arg;
    return *this;
  }
  Type & set__fusiondiaglist(
    const deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator> & _arg)
  {
    this->fusiondiaglist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::FusionInfoForAEBOther_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::FusionInfoForAEBOther_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBOther_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBOther_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::FusionInfoForAEBOther_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::FusionInfoForAEBOther_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::FusionInfoForAEBOther_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::FusionInfoForAEBOther_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::FusionInfoForAEBOther_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::FusionInfoForAEBOther_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBOther
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBOther_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBOther
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBOther_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FusionInfoForAEBOther_ & other) const
  {
    if (this->roadppty != other.roadppty) {
      return false;
    }
    if (this->vehself != other.vehself) {
      return false;
    }
    if (this->fusiontslist != other.fusiontslist) {
      return false;
    }
    if (this->fusiontfllist != other.fusiontfllist) {
      return false;
    }
    if (this->fusionroadsignlist != other.fusionroadsignlist) {
      return false;
    }
    if (this->fusiondiaglist != other.fusiondiaglist) {
      return false;
    }
    return true;
  }
  bool operator!=(const FusionInfoForAEBOther_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FusionInfoForAEBOther_

// alias to use template instance with default allocator
using FusionInfoForAEBOther =
  deva_aeb_msgs::msg::FusionInfoForAEBOther_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OTHER__STRUCT_HPP_
