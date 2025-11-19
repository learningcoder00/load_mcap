// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/Images4vMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGES4V_MSG__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGES4V_MSG__STRUCT_HPP_

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
// Member 'right_cam_image'
// Member 'front_cam_image'
// Member 'back_cam_image'
// Member 'left_cam_image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__Images4vMsg __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__Images4vMsg __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Images4vMsg_
{
  using Type = Images4vMsg_<ContainerAllocator>;

  explicit Images4vMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    right_cam_image(_init),
    front_cam_image(_init),
    back_cam_image(_init),
    left_cam_image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pubtime = 0l;
    }
  }

  explicit Images4vMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    right_cam_image(_alloc, _init),
    front_cam_image(_alloc, _init),
    back_cam_image(_alloc, _init),
    left_cam_image(_alloc, _init)
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
  using _right_cam_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _right_cam_image_type right_cam_image;
  using _front_cam_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _front_cam_image_type front_cam_image;
  using _back_cam_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _back_cam_image_type back_cam_image;
  using _left_cam_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _left_cam_image_type left_cam_image;
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
  Type & set__right_cam_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->right_cam_image = _arg;
    return *this;
  }
  Type & set__front_cam_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->front_cam_image = _arg;
    return *this;
  }
  Type & set__back_cam_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->back_cam_image = _arg;
    return *this;
  }
  Type & set__left_cam_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->left_cam_image = _arg;
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
    deva_perception_msgs::msg::Images4vMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::Images4vMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Images4vMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Images4vMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Images4vMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Images4vMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Images4vMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Images4vMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Images4vMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Images4vMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__Images4vMsg
    std::shared_ptr<deva_perception_msgs::msg::Images4vMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__Images4vMsg
    std::shared_ptr<deva_perception_msgs::msg::Images4vMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Images4vMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->right_cam_image != other.right_cam_image) {
      return false;
    }
    if (this->front_cam_image != other.front_cam_image) {
      return false;
    }
    if (this->back_cam_image != other.back_cam_image) {
      return false;
    }
    if (this->left_cam_image != other.left_cam_image) {
      return false;
    }
    if (this->pubtime != other.pubtime) {
      return false;
    }
    return true;
  }
  bool operator!=(const Images4vMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Images4vMsg_

// alias to use template instance with default allocator
using Images4vMsg =
  deva_perception_msgs::msg::Images4vMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGES4V_MSG__STRUCT_HPP_
