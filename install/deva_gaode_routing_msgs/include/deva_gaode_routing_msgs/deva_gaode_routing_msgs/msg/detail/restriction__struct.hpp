// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/Restriction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'restriction_detail'
#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__Restriction __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__Restriction __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Restriction_
{
  using Type = Restriction_<ContainerAllocator>;

  explicit Restriction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : restriction_detail(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->limit_type = 0l;
      this->node_id = 0ull;
      this->out_road = 0ull;
      this->passage = 0l;
      this->slope = 0l;
      this->toll_mode = "";
      this->toll_lane_type = "";
      this->toll_name = "";
    }
  }

  explicit Restriction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : toll_mode(_alloc),
    toll_lane_type(_alloc),
    toll_name(_alloc),
    restriction_detail(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->limit_type = 0l;
      this->node_id = 0ull;
      this->out_road = 0ull;
      this->passage = 0l;
      this->slope = 0l;
      this->toll_mode = "";
      this->toll_lane_type = "";
      this->toll_name = "";
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _limit_type_type =
    int32_t;
  _limit_type_type limit_type;
  using _node_id_type =
    uint64_t;
  _node_id_type node_id;
  using _pass_list_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _pass_list_type pass_list;
  using _out_road_type =
    uint64_t;
  _out_road_type out_road;
  using _passage_type =
    int32_t;
  _passage_type passage;
  using _slope_type =
    int32_t;
  _slope_type slope;
  using _toll_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _toll_mode_type toll_mode;
  using _toll_lane_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _toll_lane_type_type toll_lane_type;
  using _toll_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _toll_name_type toll_name;
  using _restriction_detail_type =
    deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator>;
  _restriction_detail_type restriction_detail;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__limit_type(
    const int32_t & _arg)
  {
    this->limit_type = _arg;
    return *this;
  }
  Type & set__node_id(
    const uint64_t & _arg)
  {
    this->node_id = _arg;
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
  Type & set__passage(
    const int32_t & _arg)
  {
    this->passage = _arg;
    return *this;
  }
  Type & set__slope(
    const int32_t & _arg)
  {
    this->slope = _arg;
    return *this;
  }
  Type & set__toll_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->toll_mode = _arg;
    return *this;
  }
  Type & set__toll_lane_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->toll_lane_type = _arg;
    return *this;
  }
  Type & set__toll_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->toll_name = _arg;
    return *this;
  }
  Type & set__restriction_detail(
    const deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator> & _arg)
  {
    this->restriction_detail = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__Restriction
    std::shared_ptr<deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__Restriction
    std::shared_ptr<deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Restriction_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->limit_type != other.limit_type) {
      return false;
    }
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->pass_list != other.pass_list) {
      return false;
    }
    if (this->out_road != other.out_road) {
      return false;
    }
    if (this->passage != other.passage) {
      return false;
    }
    if (this->slope != other.slope) {
      return false;
    }
    if (this->toll_mode != other.toll_mode) {
      return false;
    }
    if (this->toll_lane_type != other.toll_lane_type) {
      return false;
    }
    if (this->toll_name != other.toll_name) {
      return false;
    }
    if (this->restriction_detail != other.restriction_detail) {
      return false;
    }
    return true;
  }
  bool operator!=(const Restriction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Restriction_

// alias to use template instance with default allocator
using Restriction =
  deva_gaode_routing_msgs::msg::Restriction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION__STRUCT_HPP_
