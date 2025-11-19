// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/SDNode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_NODE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'geo'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.hpp"
// Member 'sd_cross'
#include "deva_gaode_routing_msgs/msg/detail/sd_cross__struct.hpp"
// Member 'solid_line'
#include "deva_gaode_routing_msgs/msg/detail/solid_line__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__SDNode __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__SDNode __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SDNode_
{
  using Type = SDNode_<ContainerAllocator>;

  explicit SDNode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : geo(_init),
    sd_cross(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->change_point = 0ul;
    }
  }

  explicit SDNode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : geo(_alloc, _init),
    sd_cross(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->change_point = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _geo_type =
    deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>;
  _geo_type geo;
  using _in_linklist_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _in_linklist_type in_linklist;
  using _out_linklist_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _out_linklist_type out_linklist;
  using _change_point_type =
    uint32_t;
  _change_point_type change_point;
  using _sd_cross_type =
    deva_gaode_routing_msgs::msg::SDCross_<ContainerAllocator>;
  _sd_cross_type sd_cross;
  using _solid_line_type =
    std::vector<deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator>>>;
  _solid_line_type solid_line;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__geo(
    const deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator> & _arg)
  {
    this->geo = _arg;
    return *this;
  }
  Type & set__in_linklist(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->in_linklist = _arg;
    return *this;
  }
  Type & set__out_linklist(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->out_linklist = _arg;
    return *this;
  }
  Type & set__change_point(
    const uint32_t & _arg)
  {
    this->change_point = _arg;
    return *this;
  }
  Type & set__sd_cross(
    const deva_gaode_routing_msgs::msg::SDCross_<ContainerAllocator> & _arg)
  {
    this->sd_cross = _arg;
    return *this;
  }
  Type & set__solid_line(
    const std::vector<deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SolidLine_<ContainerAllocator>>> & _arg)
  {
    this->solid_line = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SDNode
    std::shared_ptr<deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SDNode
    std::shared_ptr<deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SDNode_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->geo != other.geo) {
      return false;
    }
    if (this->in_linklist != other.in_linklist) {
      return false;
    }
    if (this->out_linklist != other.out_linklist) {
      return false;
    }
    if (this->change_point != other.change_point) {
      return false;
    }
    if (this->sd_cross != other.sd_cross) {
      return false;
    }
    if (this->solid_line != other.solid_line) {
      return false;
    }
    return true;
  }
  bool operator!=(const SDNode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SDNode_

// alias to use template instance with default allocator
using SDNode =
  deva_gaode_routing_msgs::msg::SDNode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_NODE__STRUCT_HPP_
