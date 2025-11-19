// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/SolidLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SOLID_LINE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SOLID_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__SolidLine __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__SolidLine __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SolidLine_
{
  using Type = SolidLine_<ContainerAllocator>;

  explicit SolidLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->in_road = 0ull;
      this->out_road = 0ull;
      this->lane_num = 0l;
      this->seq_num = 0l;
      this->type = 0l;
    }
  }

  explicit SolidLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->in_road = 0ull;
      this->out_road = 0ull;
      this->lane_num = 0l;
      this->seq_num = 0l;
      this->type = 0l;
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _in_road_type =
    uint64_t;
  _in_road_type in_road;
  using _pass_list_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _pass_list_type pass_list;
  using _out_road_type =
    uint64_t;
  _out_road_type out_road;
  using _lane_num_type =
    int32_t;
  _lane_num_type lane_num;
  using _seq_num_type =
    int32_t;
  _seq_num_type seq_num;
  using _lane_list_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _lane_list_type lane_list;
  using _type_type =
    int32_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__in_road(
    const uint64_t & _arg)
  {
    this->in_road = _arg;
    return *this;
  }
  Type & set__pass_list(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->pass_list = _arg;
    return *this;
  }
  Type & set__out_road(
    const uint64_t & _arg)
  {
    this->out_road = _arg;
    return *this;
  }
  Type & set__lane_num(
    const int32_t & _arg)
  {
    this->lane_num = _arg;
    return *this;
  }
  Type & set__seq_num(
    const int32_t & _arg)
  {
    this->seq_num = _arg;
    return *this;
  }
  Type & set__lane_list(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->lane_list = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SolidLine
    std::shared_ptr<deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SolidLine
    std::shared_ptr<deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolidLine_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->in_road != other.in_road) {
      return false;
    }
    if (this->pass_list != other.pass_list) {
      return false;
    }
    if (this->out_road != other.out_road) {
      return false;
    }
    if (this->lane_num != other.lane_num) {
      return false;
    }
    if (this->seq_num != other.seq_num) {
      return false;
    }
    if (this->lane_list != other.lane_list) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolidLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolidLine_

// alias to use template instance with default allocator
using SolidLine =
  deva_gaode_routing_msgs::msg::SolidLine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SOLID_LINE__STRUCT_HPP_
