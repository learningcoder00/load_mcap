// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBObjList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ_LIST__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ_LIST__STRUCT_HPP_

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
// Member 'fusionobjlist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_obj_list__struct.hpp"
// Member 'vehself'
#include "deva_aeb_msgs/msg/detail/sf_veh_self__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBObjList __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBObjList __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FusionInfoForAEBObjList_
{
  using Type = FusionInfoForAEBObjList_<ContainerAllocator>;

  explicit FusionInfoForAEBObjList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    fusionobjlist(_init),
    vehself(_init)
  {
    (void)_init;
  }

  explicit FusionInfoForAEBObjList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    fusionobjlist(_alloc, _init),
    vehself(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fusionobjlist_type =
    deva_aeb_msgs::msg::SFFusionObjList_<ContainerAllocator>;
  _fusionobjlist_type fusionobjlist;
  using _vehself_type =
    deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator>;
  _vehself_type vehself;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fusionobjlist(
    const deva_aeb_msgs::msg::SFFusionObjList_<ContainerAllocator> & _arg)
  {
    this->fusionobjlist = _arg;
    return *this;
  }
  Type & set__vehself(
    const deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator> & _arg)
  {
    this->vehself = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::FusionInfoForAEBObjList_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::FusionInfoForAEBObjList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObjList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObjList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::FusionInfoForAEBObjList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObjList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::FusionInfoForAEBObjList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObjList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObjList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObjList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBObjList
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObjList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBObjList
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObjList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FusionInfoForAEBObjList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fusionobjlist != other.fusionobjlist) {
      return false;
    }
    if (this->vehself != other.vehself) {
      return false;
    }
    return true;
  }
  bool operator!=(const FusionInfoForAEBObjList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FusionInfoForAEBObjList_

// alias to use template instance with default allocator
using FusionInfoForAEBObjList =
  deva_aeb_msgs::msg::FusionInfoForAEBObjList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ_LIST__STRUCT_HPP_
