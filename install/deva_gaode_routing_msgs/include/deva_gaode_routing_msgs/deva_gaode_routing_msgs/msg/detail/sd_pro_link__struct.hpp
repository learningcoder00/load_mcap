// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LINK__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LINK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'road'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_road__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProLink __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProLink __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SdProLink_
{
  using Type = SdProLink_<ContainerAllocator>;

  explicit SdProLink_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : road(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_id = 0ul;
      this->offset = 0.0;
    }
  }

  explicit SdProLink_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : road(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_id = 0ul;
      this->offset = 0.0;
    }
  }

  // field types and members
  using _path_id_type =
    uint32_t;
  _path_id_type path_id;
  using _offset_type =
    double;
  _offset_type offset;
  using _road_type =
    deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator>;
  _road_type road;

  // setters for named parameter idiom
  Type & set__path_id(
    const uint32_t & _arg)
  {
    this->path_id = _arg;
    return *this;
  }
  Type & set__offset(
    const double & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__road(
    const deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator> & _arg)
  {
    this->road = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProLink
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProLink
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SdProLink_ & other) const
  {
    if (this->path_id != other.path_id) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->road != other.road) {
      return false;
    }
    return true;
  }
  bool operator!=(const SdProLink_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SdProLink_

// alias to use template instance with default allocator
using SdProLink =
  deva_gaode_routing_msgs::msg::SdProLink_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LINK__STRUCT_HPP_
