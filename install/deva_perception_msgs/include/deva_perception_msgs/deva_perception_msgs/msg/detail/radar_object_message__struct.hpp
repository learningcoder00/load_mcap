// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RadarObjectMessage.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_MESSAGE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'status'
#include "deva_perception_msgs/msg/detail/radar_status__struct.hpp"
// Member 'objects'
#include "deva_perception_msgs/msg/detail/radar_object_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RadarObjectMessage __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RadarObjectMessage __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarObjectMessage_
{
  using Type = RadarObjectMessage_<ContainerAllocator>;

  explicit RadarObjectMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init)
  {
    (void)_init;
  }

  explicit RadarObjectMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
    deva_perception_msgs::msg::RadarStatus_<ContainerAllocator>;
  _status_type status;
  using _objects_type =
    std::vector<deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator>>>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__status(
    const deva_perception_msgs::msg::RadarStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RadarObjectMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RadarObjectMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RadarObjectMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RadarObjectMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RadarObjectMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RadarObjectMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RadarObjectMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RadarObjectMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RadarObjectMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RadarObjectMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RadarObjectMessage
    std::shared_ptr<deva_perception_msgs::msg::RadarObjectMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RadarObjectMessage
    std::shared_ptr<deva_perception_msgs::msg::RadarObjectMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarObjectMessage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarObjectMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarObjectMessage_

// alias to use template instance with default allocator
using RadarObjectMessage =
  deva_perception_msgs::msg::RadarObjectMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_MESSAGE__STRUCT_HPP_
