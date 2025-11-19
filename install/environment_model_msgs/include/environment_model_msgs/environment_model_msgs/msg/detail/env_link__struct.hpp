// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/EnvLink.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINK__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__EnvLink __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__EnvLink __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnvLink_
{
  using Type = EnvLink_<ContainerAllocator>;

  explicit EnvLink_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->parent_link_id = 0ull;
      this->angle_with_parent = 0.0f;
      this->length = 0.0;
      this->is_on_routing = false;
      this->lane_num = 0l;
      this->sub_link_num = 0l;
    }
  }

  explicit EnvLink_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->parent_link_id = 0ull;
      this->angle_with_parent = 0.0f;
      this->length = 0.0;
      this->is_on_routing = false;
      this->lane_num = 0l;
      this->sub_link_num = 0l;
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _parent_link_id_type =
    uint64_t;
  _parent_link_id_type parent_link_id;
  using _angle_with_parent_type =
    float;
  _angle_with_parent_type angle_with_parent;
  using _length_type =
    double;
  _length_type length;
  using _is_on_routing_type =
    bool;
  _is_on_routing_type is_on_routing;
  using _lane_num_type =
    int32_t;
  _lane_num_type lane_num;
  using _sub_link_num_type =
    int32_t;
  _sub_link_num_type sub_link_num;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__parent_link_id(
    const uint64_t & _arg)
  {
    this->parent_link_id = _arg;
    return *this;
  }
  Type & set__angle_with_parent(
    const float & _arg)
  {
    this->angle_with_parent = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__is_on_routing(
    const bool & _arg)
  {
    this->is_on_routing = _arg;
    return *this;
  }
  Type & set__lane_num(
    const int32_t & _arg)
  {
    this->lane_num = _arg;
    return *this;
  }
  Type & set__sub_link_num(
    const int32_t & _arg)
  {
    this->sub_link_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::EnvLink_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::EnvLink_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvLink_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvLink_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvLink_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvLink_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvLink_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvLink_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvLink_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvLink_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__EnvLink
    std::shared_ptr<environment_model_msgs::msg::EnvLink_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__EnvLink
    std::shared_ptr<environment_model_msgs::msg::EnvLink_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnvLink_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->parent_link_id != other.parent_link_id) {
      return false;
    }
    if (this->angle_with_parent != other.angle_with_parent) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->is_on_routing != other.is_on_routing) {
      return false;
    }
    if (this->lane_num != other.lane_num) {
      return false;
    }
    if (this->sub_link_num != other.sub_link_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnvLink_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnvLink_

// alias to use template instance with default allocator
using EnvLink =
  environment_model_msgs::msg::EnvLink_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINK__STRUCT_HPP_
