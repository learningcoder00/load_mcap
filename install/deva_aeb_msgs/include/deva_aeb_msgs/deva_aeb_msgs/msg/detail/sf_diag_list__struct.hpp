// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFDiagList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_LIST__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'weather'
// Member 'scene'
// Member 'rdsuf'
// Member 'light'
// Member 'time'
#include "deva_aeb_msgs/msg/detail/sf_diag_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFDiagList __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFDiagList __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFDiagList_
{
  using Type = SFDiagList_<ContainerAllocator>;

  explicit SFDiagList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : weather(_init),
    scene(_init),
    rdsuf(_init),
    light(_init),
    time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
    }
  }

  explicit SFDiagList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : weather(_alloc, _init),
    scene(_alloc, _init),
    rdsuf(_alloc, _init),
    light(_alloc, _init),
    time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _framenum_type =
    uint32_t;
  _framenum_type framenum;
  using _weather_type =
    deva_aeb_msgs::msg::SFDiagInfo_<ContainerAllocator>;
  _weather_type weather;
  using _scene_type =
    deva_aeb_msgs::msg::SFDiagInfo_<ContainerAllocator>;
  _scene_type scene;
  using _rdsuf_type =
    deva_aeb_msgs::msg::SFDiagInfo_<ContainerAllocator>;
  _rdsuf_type rdsuf;
  using _light_type =
    deva_aeb_msgs::msg::SFDiagInfo_<ContainerAllocator>;
  _light_type light;
  using _time_type =
    deva_aeb_msgs::msg::SFDiagInfo_<ContainerAllocator>;
  _time_type time;

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
  Type & set__weather(
    const deva_aeb_msgs::msg::SFDiagInfo_<ContainerAllocator> & _arg)
  {
    this->weather = _arg;
    return *this;
  }
  Type & set__scene(
    const deva_aeb_msgs::msg::SFDiagInfo_<ContainerAllocator> & _arg)
  {
    this->scene = _arg;
    return *this;
  }
  Type & set__rdsuf(
    const deva_aeb_msgs::msg::SFDiagInfo_<ContainerAllocator> & _arg)
  {
    this->rdsuf = _arg;
    return *this;
  }
  Type & set__light(
    const deva_aeb_msgs::msg::SFDiagInfo_<ContainerAllocator> & _arg)
  {
    this->light = _arg;
    return *this;
  }
  Type & set__time(
    const deva_aeb_msgs::msg::SFDiagInfo_<ContainerAllocator> & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFDiagList
    std::shared_ptr<deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFDiagList
    std::shared_ptr<deva_aeb_msgs::msg::SFDiagList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFDiagList_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->framenum != other.framenum) {
      return false;
    }
    if (this->weather != other.weather) {
      return false;
    }
    if (this->scene != other.scene) {
      return false;
    }
    if (this->rdsuf != other.rdsuf) {
      return false;
    }
    if (this->light != other.light) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFDiagList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFDiagList_

// alias to use template instance with default allocator
using SFDiagList =
  deva_aeb_msgs::msg::SFDiagList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_LIST__STRUCT_HPP_
