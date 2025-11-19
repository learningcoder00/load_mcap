// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LANE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'callback_point'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebLane __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebLane __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WebLane_
{
  using Type = WebLane_<ContainerAllocator>;

  explicit WebLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : callback_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_num = 0l;
      this->road_idx = 0l;
      this->step_idx = 0l;
      this->md5 = "";
    }
  }

  explicit WebLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : md5(_alloc),
    callback_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_num = 0l;
      this->road_idx = 0l;
      this->step_idx = 0l;
      this->md5 = "";
    }
  }

  // field types and members
  using _lane_num_type =
    int32_t;
  _lane_num_type lane_num;
  using _actual_turn_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _actual_turn_type actual_turn;
  using _navi_turn_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _navi_turn_type navi_turn;
  using _optimal_turn_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _optimal_turn_type optimal_turn;
  using _actual_exten_turn_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _actual_exten_turn_type actual_exten_turn;
  using _exten_turn_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _exten_turn_type exten_turn;
  using _actual_turn_type_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _actual_turn_type_type actual_turn_type;
  using _navi_turn_type_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _navi_turn_type_type navi_turn_type;
  using _road_idx_type =
    int32_t;
  _road_idx_type road_idx;
  using _step_idx_type =
    int32_t;
  _step_idx_type step_idx;
  using _md5_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _md5_type md5;
  using _callback_point_type =
    deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>;
  _callback_point_type callback_point;

  // setters for named parameter idiom
  Type & set__lane_num(
    const int32_t & _arg)
  {
    this->lane_num = _arg;
    return *this;
  }
  Type & set__actual_turn(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->actual_turn = _arg;
    return *this;
  }
  Type & set__navi_turn(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->navi_turn = _arg;
    return *this;
  }
  Type & set__optimal_turn(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->optimal_turn = _arg;
    return *this;
  }
  Type & set__actual_exten_turn(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->actual_exten_turn = _arg;
    return *this;
  }
  Type & set__exten_turn(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->exten_turn = _arg;
    return *this;
  }
  Type & set__actual_turn_type(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->actual_turn_type = _arg;
    return *this;
  }
  Type & set__navi_turn_type(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->navi_turn_type = _arg;
    return *this;
  }
  Type & set__road_idx(
    const int32_t & _arg)
  {
    this->road_idx = _arg;
    return *this;
  }
  Type & set__step_idx(
    const int32_t & _arg)
  {
    this->step_idx = _arg;
    return *this;
  }
  Type & set__md5(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->md5 = _arg;
    return *this;
  }
  Type & set__callback_point(
    const deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator> & _arg)
  {
    this->callback_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebLane
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebLane
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WebLane_ & other) const
  {
    if (this->lane_num != other.lane_num) {
      return false;
    }
    if (this->actual_turn != other.actual_turn) {
      return false;
    }
    if (this->navi_turn != other.navi_turn) {
      return false;
    }
    if (this->optimal_turn != other.optimal_turn) {
      return false;
    }
    if (this->actual_exten_turn != other.actual_exten_turn) {
      return false;
    }
    if (this->exten_turn != other.exten_turn) {
      return false;
    }
    if (this->actual_turn_type != other.actual_turn_type) {
      return false;
    }
    if (this->navi_turn_type != other.navi_turn_type) {
      return false;
    }
    if (this->road_idx != other.road_idx) {
      return false;
    }
    if (this->step_idx != other.step_idx) {
      return false;
    }
    if (this->md5 != other.md5) {
      return false;
    }
    if (this->callback_point != other.callback_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const WebLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WebLane_

// alias to use template instance with default allocator
using WebLane =
  deva_gaode_routing_msgs::msg::WebLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LANE__STRUCT_HPP_
