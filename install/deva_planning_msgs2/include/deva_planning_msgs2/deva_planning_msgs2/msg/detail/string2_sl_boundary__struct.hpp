// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/String2SLBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__STRING2_SL_BOUNDARY__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__STRING2_SL_BOUNDARY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sl_boundary'
#include "deva_planning_msgs2/msg/detail/sl_boundary__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__String2SLBoundary __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__String2SLBoundary __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct String2SLBoundary_
{
  using Type = String2SLBoundary_<ContainerAllocator>;

  explicit String2SLBoundary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sl_boundary(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obs_id = "";
    }
  }

  explicit String2SLBoundary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obs_id(_alloc),
    sl_boundary(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obs_id = "";
    }
  }

  // field types and members
  using _obs_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _obs_id_type obs_id;
  using _sl_boundary_type =
    deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator>;
  _sl_boundary_type sl_boundary;

  // setters for named parameter idiom
  Type & set__obs_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->obs_id = _arg;
    return *this;
  }
  Type & set__sl_boundary(
    const deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator> & _arg)
  {
    this->sl_boundary = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__String2SLBoundary
    std::shared_ptr<deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__String2SLBoundary
    std::shared_ptr<deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const String2SLBoundary_ & other) const
  {
    if (this->obs_id != other.obs_id) {
      return false;
    }
    if (this->sl_boundary != other.sl_boundary) {
      return false;
    }
    return true;
  }
  bool operator!=(const String2SLBoundary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct String2SLBoundary_

// alias to use template instance with default allocator
using String2SLBoundary =
  deva_planning_msgs2::msg::String2SLBoundary_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__STRING2_SL_BOUNDARY__STRUCT_HPP_
