// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/AmapNavingPathInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_NAVING_PATH_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_NAVING_PATH_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'amap_path_info'
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__AmapNavingPathInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__AmapNavingPathInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AmapNavingPathInfoProto_
{
  using Type = AmapNavingPathInfoProto_<ContainerAllocator>;

  explicit AmapNavingPathInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : amap_path_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->timestamp = 0ll;
    }
  }

  explicit AmapNavingPathInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : amap_path_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->timestamp = 0ll;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _amap_path_info_type =
    deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator>;
  _amap_path_info_type amap_path_info;
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__amap_path_info(
    const deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator> & _arg)
  {
    this->amap_path_info = _arg;
    return *this;
  }
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::AmapNavingPathInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::AmapNavingPathInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::AmapNavingPathInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::AmapNavingPathInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::AmapNavingPathInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::AmapNavingPathInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::AmapNavingPathInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::AmapNavingPathInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::AmapNavingPathInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::AmapNavingPathInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__AmapNavingPathInfoProto
    std::shared_ptr<deva_navi_msgs::msg::AmapNavingPathInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__AmapNavingPathInfoProto
    std::shared_ptr<deva_navi_msgs::msg::AmapNavingPathInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AmapNavingPathInfoProto_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->amap_path_info != other.amap_path_info) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const AmapNavingPathInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AmapNavingPathInfoProto_

// alias to use template instance with default allocator
using AmapNavingPathInfoProto =
  deva_navi_msgs::msg::AmapNavingPathInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_NAVING_PATH_INFO_PROTO__STRUCT_HPP_
