// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionTSList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trafficsign'
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionTSList __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionTSList __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFusionTSList_
{
  using Type = SFFusionTSList_<ContainerAllocator>;

  explicit SFFusionTSList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reversed.begin(), this->reversed.end(), 0);
      this->trafficsign.fill(deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator>{_init});
      this->validsize = 0;
    }
  }

  explicit SFFusionTSList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reversed(_alloc),
    trafficsign(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reversed.begin(), this->reversed.end(), 0);
      this->trafficsign.fill(deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator>{_alloc, _init});
      this->validsize = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _framenum_type =
    uint32_t;
  _framenum_type framenum;
  using _reversed_type =
    std::array<uint8_t, 3>;
  _reversed_type reversed;
  using _trafficsign_type =
    std::array<deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator>, 8>;
  _trafficsign_type trafficsign;
  using _validsize_type =
    uint8_t;
  _validsize_type validsize;

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
  Type & set__reversed(
    const std::array<uint8_t, 3> & _arg)
  {
    this->reversed = _arg;
    return *this;
  }
  Type & set__trafficsign(
    const std::array<deva_aeb_msgs::msg::SFFusionTS_<ContainerAllocator>, 8> & _arg)
  {
    this->trafficsign = _arg;
    return *this;
  }
  Type & set__validsize(
    const uint8_t & _arg)
  {
    this->validsize = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionTSList
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionTSList
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTSList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFusionTSList_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->framenum != other.framenum) {
      return false;
    }
    if (this->reversed != other.reversed) {
      return false;
    }
    if (this->trafficsign != other.trafficsign) {
      return false;
    }
    if (this->validsize != other.validsize) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFFusionTSList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFusionTSList_

// alias to use template instance with default allocator
using SFFusionTSList =
  deva_aeb_msgs::msg::SFFusionTSList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST__STRUCT_HPP_
