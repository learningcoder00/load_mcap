// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/ImageRadarPacket.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGE_RADAR_PACKET__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGE_RADAR_PACKET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__ImageRadarPacket __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__ImageRadarPacket __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageRadarPacket_
{
  using Type = ImageRadarPacket_<ContainerAllocator>;

  explicit ImageRadarPacket_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size = 0ul;
      this->type = 0;
      this->is_bigendian = false;
    }
  }

  explicit ImageRadarPacket_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size = 0ul;
      this->type = 0;
      this->is_bigendian = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;
  using _size_type =
    uint32_t;
  _size_type size;
  using _type_type =
    uint8_t;
  _type_type type;
  using _is_bigendian_type =
    bool;
  _is_bigendian_type is_bigendian;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__size(
    const uint32_t & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__is_bigendian(
    const bool & _arg)
  {
    this->is_bigendian = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::ImageRadarPacket_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::ImageRadarPacket_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::ImageRadarPacket_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::ImageRadarPacket_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::ImageRadarPacket_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::ImageRadarPacket_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::ImageRadarPacket_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::ImageRadarPacket_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::ImageRadarPacket_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::ImageRadarPacket_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__ImageRadarPacket
    std::shared_ptr<deva_perception_msgs::msg::ImageRadarPacket_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__ImageRadarPacket
    std::shared_ptr<deva_perception_msgs::msg::ImageRadarPacket_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageRadarPacket_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->is_bigendian != other.is_bigendian) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageRadarPacket_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageRadarPacket_

// alias to use template instance with default allocator
using ImageRadarPacket =
  deva_perception_msgs::msg::ImageRadarPacket_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGE_RADAR_PACKET__STRUCT_HPP_
