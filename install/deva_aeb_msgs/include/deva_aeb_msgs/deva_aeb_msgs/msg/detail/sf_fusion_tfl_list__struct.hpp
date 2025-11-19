// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionTFLList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tfllist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_tfl__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionTFLList __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionTFLList __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFusionTFLList_
{
  using Type = SFFusionTFLList_<ContainerAllocator>;

  explicit SFFusionTFLList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
      this->tflcount = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
      this->tfllist.fill(deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator>{_init});
      this->validsize = 0;
    }
  }

  explicit SFFusionTFLList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reserved(_alloc),
    tfllist(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
      this->tflcount = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
      this->tfllist.fill(deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator>{_alloc, _init});
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
  using _tflcount_type =
    uint8_t;
  _tflcount_type tflcount;
  using _reserved_type =
    std::array<uint8_t, 2>;
  _reserved_type reserved;
  using _tfllist_type =
    std::array<deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator>, 8>;
  _tfllist_type tfllist;
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
  Type & set__tflcount(
    const uint8_t & _arg)
  {
    this->tflcount = _arg;
    return *this;
  }
  Type & set__reserved(
    const std::array<uint8_t, 2> & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__tfllist(
    const std::array<deva_aeb_msgs::msg::SFFusionTFL_<ContainerAllocator>, 8> & _arg)
  {
    this->tfllist = _arg;
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
    deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionTFLList
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionTFLList
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionTFLList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFusionTFLList_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->framenum != other.framenum) {
      return false;
    }
    if (this->tflcount != other.tflcount) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->tfllist != other.tfllist) {
      return false;
    }
    if (this->validsize != other.validsize) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFFusionTFLList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFusionTFLList_

// alias to use template instance with default allocator
using SFFusionTFLList =
  deva_aeb_msgs::msg::SFFusionTFLList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST__STRUCT_HPP_
