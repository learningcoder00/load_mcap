// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBObj8.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ8__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ8__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obj'
#include "deva_aeb_msgs/msg/detail/sf_fusion_obj__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBObj8 __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBObj8 __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FusionInfoForAEBObj8_
{
  using Type = FusionInfoForAEBObj8_<ContainerAllocator>;

  explicit FusionInfoForAEBObj8_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obj.fill(deva_aeb_msgs::msg::SFFusionObj_<ContainerAllocator>{_init});
      this->timestamp = 0ull;
      this->framenum = 0ul;
      this->snsrstate = 0;
      this->validsize = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  explicit FusionInfoForAEBObj8_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj(_alloc),
    reserved(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obj.fill(deva_aeb_msgs::msg::SFFusionObj_<ContainerAllocator>{_alloc, _init});
      this->timestamp = 0ull;
      this->framenum = 0ul;
      this->snsrstate = 0;
      this->validsize = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  // field types and members
  using _obj_type =
    std::array<deva_aeb_msgs::msg::SFFusionObj_<ContainerAllocator>, 8>;
  _obj_type obj;
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _framenum_type =
    uint32_t;
  _framenum_type framenum;
  using _snsrstate_type =
    uint8_t;
  _snsrstate_type snsrstate;
  using _validsize_type =
    uint8_t;
  _validsize_type validsize;
  using _reserved_type =
    std::array<uint8_t, 2>;
  _reserved_type reserved;

  // setters for named parameter idiom
  Type & set__obj(
    const std::array<deva_aeb_msgs::msg::SFFusionObj_<ContainerAllocator>, 8> & _arg)
  {
    this->obj = _arg;
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
  Type & set__snsrstate(
    const uint8_t & _arg)
  {
    this->snsrstate = _arg;
    return *this;
  }
  Type & set__validsize(
    const uint8_t & _arg)
  {
    this->validsize = _arg;
    return *this;
  }
  Type & set__reserved(
    const std::array<uint8_t, 2> & _arg)
  {
    this->reserved = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::FusionInfoForAEBObj8_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::FusionInfoForAEBObj8_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObj8_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObj8_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::FusionInfoForAEBObj8_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObj8_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::FusionInfoForAEBObj8_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObj8_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObj8_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObj8_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBObj8
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObj8_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__FusionInfoForAEBObj8
    std::shared_ptr<deva_aeb_msgs::msg::FusionInfoForAEBObj8_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FusionInfoForAEBObj8_ & other) const
  {
    if (this->obj != other.obj) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->framenum != other.framenum) {
      return false;
    }
    if (this->snsrstate != other.snsrstate) {
      return false;
    }
    if (this->validsize != other.validsize) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    return true;
  }
  bool operator!=(const FusionInfoForAEBObj8_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FusionInfoForAEBObj8_

// alias to use template instance with default allocator
using FusionInfoForAEBObj8 =
  deva_aeb_msgs::msg::FusionInfoForAEBObj8_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ8__STRUCT_HPP_
