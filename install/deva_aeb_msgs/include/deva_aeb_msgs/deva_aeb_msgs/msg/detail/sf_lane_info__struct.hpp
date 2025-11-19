// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFLaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_INFO__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFLaneInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFLaneInfo __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFLaneInfo_
{
  using Type = SFLaneInfo_<ContainerAllocator>;

  explicit SFLaneInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lanecolor = 0;
      this->lanemkrtype = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  explicit SFLaneInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reserved(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lanecolor = 0;
      this->lanemkrtype = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  // field types and members
  using _lanecolor_type =
    uint8_t;
  _lanecolor_type lanecolor;
  using _lanemkrtype_type =
    uint8_t;
  _lanemkrtype_type lanemkrtype;
  using _reserved_type =
    std::array<uint8_t, 2>;
  _reserved_type reserved;

  // setters for named parameter idiom
  Type & set__lanecolor(
    const uint8_t & _arg)
  {
    this->lanecolor = _arg;
    return *this;
  }
  Type & set__lanemkrtype(
    const uint8_t & _arg)
  {
    this->lanemkrtype = _arg;
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
    deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFLaneInfo
    std::shared_ptr<deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFLaneInfo
    std::shared_ptr<deva_aeb_msgs::msg::SFLaneInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFLaneInfo_ & other) const
  {
    if (this->lanecolor != other.lanecolor) {
      return false;
    }
    if (this->lanemkrtype != other.lanemkrtype) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFLaneInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFLaneInfo_

// alias to use template instance with default allocator
using SFLaneInfo =
  deva_aeb_msgs::msg::SFLaneInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_INFO__STRUCT_HPP_
