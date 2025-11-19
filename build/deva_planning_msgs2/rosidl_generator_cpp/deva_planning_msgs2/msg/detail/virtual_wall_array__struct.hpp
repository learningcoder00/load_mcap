// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/VirtualWallArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__VIRTUAL_WALL_ARRAY__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__VIRTUAL_WALL_ARRAY__STRUCT_HPP_

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
// Member 'virtual_wall_array'
#include "deva_planning_msgs2/msg/detail/virtual_wall__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__VirtualWallArray __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__VirtualWallArray __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VirtualWallArray_
{
  using Type = VirtualWallArray_<ContainerAllocator>;

  explicit VirtualWallArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0l;
    }
  }

  explicit VirtualWallArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _num_type =
    int32_t;
  _num_type num;
  using _virtual_wall_array_type =
    std::vector<deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator>>>;
  _virtual_wall_array_type virtual_wall_array;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__num(
    const int32_t & _arg)
  {
    this->num = _arg;
    return *this;
  }
  Type & set__virtual_wall_array(
    const std::vector<deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator>>> & _arg)
  {
    this->virtual_wall_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::VirtualWallArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::VirtualWallArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::VirtualWallArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::VirtualWallArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::VirtualWallArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::VirtualWallArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::VirtualWallArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::VirtualWallArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::VirtualWallArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::VirtualWallArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__VirtualWallArray
    std::shared_ptr<deva_planning_msgs2::msg::VirtualWallArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__VirtualWallArray
    std::shared_ptr<deva_planning_msgs2::msg::VirtualWallArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VirtualWallArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->num != other.num) {
      return false;
    }
    if (this->virtual_wall_array != other.virtual_wall_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const VirtualWallArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VirtualWallArray_

// alias to use template instance with default allocator
using VirtualWallArray =
  deva_planning_msgs2::msg::VirtualWallArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__VIRTUAL_WALL_ARRAY__STRUCT_HPP_
