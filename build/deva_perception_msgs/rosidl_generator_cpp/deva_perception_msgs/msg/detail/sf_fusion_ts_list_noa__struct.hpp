// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/SFFusionTSListNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST_NOA__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST_NOA__STRUCT_HPP_

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
// Member 'trafficsign'
// Member 'trafficsign_all'
#include "deva_perception_msgs/msg/detail/sf_fusion_tsnoa__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__SFFusionTSListNOA __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__SFFusionTSListNOA __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFusionTSListNOA_
{
  using Type = SFFusionTSListNOA_<ContainerAllocator>;

  explicit SFFusionTSListNOA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reversed.begin(), this->reversed.end(), 0);
      this->trafficsign.fill(deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>{_init});
      this->validsize = 0;
      this->all_validsize = 0;
    }
  }

  explicit SFFusionTSListNOA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    reversed(_alloc),
    trafficsign(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reversed.begin(), this->reversed.end(), 0);
      this->trafficsign.fill(deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>{_alloc, _init});
      this->validsize = 0;
      this->all_validsize = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
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
    std::array<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>, 16>;
  _trafficsign_type trafficsign;
  using _validsize_type =
    uint8_t;
  _validsize_type validsize;
  using _trafficsign_all_type =
    std::vector<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>>>;
  _trafficsign_all_type trafficsign_all;
  using _all_validsize_type =
    uint8_t;
  _all_validsize_type all_validsize;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
  Type & set__reversed(
    const std::array<uint8_t, 3> & _arg)
  {
    this->reversed = _arg;
    return *this;
  }
  Type & set__trafficsign(
    const std::array<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>, 16> & _arg)
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
  Type & set__trafficsign_all(
    const std::vector<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::SFFusionTSNOA_<ContainerAllocator>>> & _arg)
  {
    this->trafficsign_all = _arg;
    return *this;
  }
  Type & set__all_validsize(
    const uint8_t & _arg)
  {
    this->all_validsize = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::SFFusionTSListNOA_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::SFFusionTSListNOA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTSListNOA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTSListNOA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::SFFusionTSListNOA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::SFFusionTSListNOA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::SFFusionTSListNOA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::SFFusionTSListNOA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::SFFusionTSListNOA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::SFFusionTSListNOA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__SFFusionTSListNOA
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTSListNOA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__SFFusionTSListNOA
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTSListNOA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFusionTSListNOA_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
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
    if (this->trafficsign_all != other.trafficsign_all) {
      return false;
    }
    if (this->all_validsize != other.all_validsize) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFFusionTSListNOA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFusionTSListNOA_

// alias to use template instance with default allocator
using SFFusionTSListNOA =
  deva_perception_msgs::msg::SFFusionTSListNOA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST_NOA__STRUCT_HPP_
