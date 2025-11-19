// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/IPMImage.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__IPM_IMAGE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__IPM_IMAGE__STRUCT_HPP_

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
// Member 'ipm_image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__IPMImage __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__IPMImage __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IPMImage_
{
  using Type = IPMImage_<ContainerAllocator>;

  explicit IPMImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ipm_image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pubtime = 0l;
    }
  }

  explicit IPMImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ipm_image(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pubtime = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ipm_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _ipm_image_type ipm_image;
  using _pubtime_type =
    int32_t;
  _pubtime_type pubtime;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ipm_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->ipm_image = _arg;
    return *this;
  }
  Type & set__pubtime(
    const int32_t & _arg)
  {
    this->pubtime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::IPMImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::IPMImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::IPMImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::IPMImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::IPMImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::IPMImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::IPMImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::IPMImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::IPMImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::IPMImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__IPMImage
    std::shared_ptr<deva_perception_msgs::msg::IPMImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__IPMImage
    std::shared_ptr<deva_perception_msgs::msg::IPMImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IPMImage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ipm_image != other.ipm_image) {
      return false;
    }
    if (this->pubtime != other.pubtime) {
      return false;
    }
    return true;
  }
  bool operator!=(const IPMImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IPMImage_

// alias to use template instance with default allocator
using IPMImage =
  deva_perception_msgs::msg::IPMImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__IPM_IMAGE__STRUCT_HPP_
