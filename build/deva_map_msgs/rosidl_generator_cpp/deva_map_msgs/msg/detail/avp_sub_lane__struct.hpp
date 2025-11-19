// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/AvpSubLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_LANE__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ref_line'
#include "deva_map_msgs/msg/detail/path_point__struct.hpp"
// Member 'drivable_boundary'
#include "deva_map_msgs/msg/detail/avp_boundary__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__AvpSubLane __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__AvpSubLane __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvpSubLane_
{
  using Type = AvpSubLane_<ContainerAllocator>;

  explicit AvpSubLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = "";
    }
  }

  explicit AvpSubLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = "";
    }
  }

  // field types and members
  using _lane_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lane_id_type lane_id;
  using _ref_line_type =
    std::vector<deva_map_msgs::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::PathPoint_<ContainerAllocator>>>;
  _ref_line_type ref_line;
  using _drivable_boundary_type =
    std::vector<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>>>;
  _drivable_boundary_type drivable_boundary;
  using _successor_lane_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _successor_lane_ids_type successor_lane_ids;
  using _left_lane_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _left_lane_ids_type left_lane_ids;
  using _right_lane_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _right_lane_ids_type right_lane_ids;

  // setters for named parameter idiom
  Type & set__lane_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__ref_line(
    const std::vector<deva_map_msgs::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::PathPoint_<ContainerAllocator>>> & _arg)
  {
    this->ref_line = _arg;
    return *this;
  }
  Type & set__drivable_boundary(
    const std::vector<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>>> & _arg)
  {
    this->drivable_boundary = _arg;
    return *this;
  }
  Type & set__successor_lane_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->successor_lane_ids = _arg;
    return *this;
  }
  Type & set__left_lane_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->left_lane_ids = _arg;
    return *this;
  }
  Type & set__right_lane_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->right_lane_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::AvpSubLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::AvpSubLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::AvpSubLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::AvpSubLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::AvpSubLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::AvpSubLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::AvpSubLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::AvpSubLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::AvpSubLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::AvpSubLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__AvpSubLane
    std::shared_ptr<deva_map_msgs::msg::AvpSubLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__AvpSubLane
    std::shared_ptr<deva_map_msgs::msg::AvpSubLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvpSubLane_ & other) const
  {
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->ref_line != other.ref_line) {
      return false;
    }
    if (this->drivable_boundary != other.drivable_boundary) {
      return false;
    }
    if (this->successor_lane_ids != other.successor_lane_ids) {
      return false;
    }
    if (this->left_lane_ids != other.left_lane_ids) {
      return false;
    }
    if (this->right_lane_ids != other.right_lane_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvpSubLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvpSubLane_

// alias to use template instance with default allocator
using AvpSubLane =
  deva_map_msgs::msg::AvpSubLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_LANE__STRUCT_HPP_
