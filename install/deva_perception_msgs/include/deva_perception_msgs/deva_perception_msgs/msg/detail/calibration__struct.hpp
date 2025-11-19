// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/Calibration.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CALIBRATION__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CALIBRATION__STRUCT_HPP_

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
// Member 'version'
#include "std_msgs/msg/detail/string__struct.hpp"
// Member 'lidar2gnss'
// Member 'gnss2ego'
#include "geometry_msgs/msg/detail/transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__Calibration __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__Calibration __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Calibration_
{
  using Type = Calibration_<ContainerAllocator>;

  explicit Calibration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    version(_init),
    lidar2gnss(_init),
    gnss2ego(_init)
  {
    (void)_init;
  }

  explicit Calibration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    version(_alloc, _init),
    lidar2gnss(_alloc, _init),
    gnss2ego(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _version_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _version_type version;
  using _lidar2gnss_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _lidar2gnss_type lidar2gnss;
  using _gnss2ego_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _gnss2ego_type gnss2ego;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__version(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__lidar2gnss(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->lidar2gnss = _arg;
    return *this;
  }
  Type & set__gnss2ego(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->gnss2ego = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::Calibration_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::Calibration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Calibration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Calibration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Calibration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Calibration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Calibration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Calibration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Calibration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Calibration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__Calibration
    std::shared_ptr<deva_perception_msgs::msg::Calibration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__Calibration
    std::shared_ptr<deva_perception_msgs::msg::Calibration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calibration_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->lidar2gnss != other.lidar2gnss) {
      return false;
    }
    if (this->gnss2ego != other.gnss2ego) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calibration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calibration_

// alias to use template instance with default allocator
using Calibration =
  deva_perception_msgs::msg::Calibration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CALIBRATION__STRUCT_HPP_
