// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RVADB.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RVADB__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RVADB__STRUCT_HPP_

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
// Member 'translation'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'lights_list'
#include "deva_perception_msgs/msg/detail/rv_light_list__struct.hpp"
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RVADB __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RVADB __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RVADB_
{
  using Type = RVADB_<ContainerAllocator>;

  explicit RVADB_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    translation(_init),
    orientation(_init)
  {
    (void)_init;
  }

  explicit RVADB_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    translation(_alloc, _init),
    orientation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _translation_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _translation_type translation;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _lights_list_type =
    std::vector<deva_perception_msgs::msg::RVLightList_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::RVLightList_<ContainerAllocator>>>;
  _lights_list_type lights_list;
  using _extra_infos_type =
    std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>>;
  _extra_infos_type extra_infos;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__translation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->translation = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__lights_list(
    const std::vector<deva_perception_msgs::msg::RVLightList_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::RVLightList_<ContainerAllocator>>> & _arg)
  {
    this->lights_list = _arg;
    return *this;
  }
  Type & set__extra_infos(
    const std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>> & _arg)
  {
    this->extra_infos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RVADB_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RVADB_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RVADB_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RVADB_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RVADB_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RVADB_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RVADB_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RVADB_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RVADB_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RVADB_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RVADB
    std::shared_ptr<deva_perception_msgs::msg::RVADB_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RVADB
    std::shared_ptr<deva_perception_msgs::msg::RVADB_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RVADB_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->translation != other.translation) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->lights_list != other.lights_list) {
      return false;
    }
    if (this->extra_infos != other.extra_infos) {
      return false;
    }
    return true;
  }
  bool operator!=(const RVADB_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RVADB_

// alias to use template instance with default allocator
using RVADB =
  deva_perception_msgs::msg::RVADB_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RVADB__STRUCT_HPP_
