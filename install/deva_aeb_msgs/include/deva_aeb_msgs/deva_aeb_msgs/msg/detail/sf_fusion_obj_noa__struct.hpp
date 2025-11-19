// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionObjNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ_NOA__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ_NOA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'estimn'
#include "deva_aeb_msgs/msg/detail/sf_obj_estimn_noa__struct.hpp"
// Member 'info'
#include "deva_aeb_msgs/msg/detail/sf_obj_info_noa__struct.hpp"
// Member 'ppty'
#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__struct.hpp"
// Member 'visinfo'
#include "deva_aeb_msgs/msg/detail/sf_vision_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionObjNOA __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionObjNOA __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFusionObjNOA_
{
  using Type = SFFusionObjNOA_<ContainerAllocator>;

  explicit SFFusionObjNOA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : estimn(_init),
    info(_init),
    ppty(_init),
    visinfo(_init)
  {
    (void)_init;
  }

  explicit SFFusionObjNOA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : estimn(_alloc, _init),
    info(_alloc, _init),
    ppty(_alloc, _init),
    visinfo(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _estimn_type =
    deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator>;
  _estimn_type estimn;
  using _info_type =
    deva_aeb_msgs::msg::SFObjInfoNOA_<ContainerAllocator>;
  _info_type info;
  using _ppty_type =
    deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator>;
  _ppty_type ppty;
  using _visinfo_type =
    deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator>;
  _visinfo_type visinfo;

  // setters for named parameter idiom
  Type & set__estimn(
    const deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator> & _arg)
  {
    this->estimn = _arg;
    return *this;
  }
  Type & set__info(
    const deva_aeb_msgs::msg::SFObjInfoNOA_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__ppty(
    const deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator> & _arg)
  {
    this->ppty = _arg;
    return *this;
  }
  Type & set__visinfo(
    const deva_aeb_msgs::msg::SFVisionInfo_<ContainerAllocator> & _arg)
  {
    this->visinfo = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFFusionObjNOA_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFFusionObjNOA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionObjNOA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionObjNOA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionObjNOA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionObjNOA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionObjNOA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionObjNOA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionObjNOA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionObjNOA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionObjNOA
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionObjNOA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionObjNOA
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionObjNOA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFusionObjNOA_ & other) const
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
    if (this->visinfo != other.visinfo) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFFusionObjNOA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFusionObjNOA_

// alias to use template instance with default allocator
using SFFusionObjNOA =
  deva_aeb_msgs::msg::SFFusionObjNOA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ_NOA__STRUCT_HPP_
