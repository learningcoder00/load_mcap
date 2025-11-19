// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/Ref2SLBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__REF2_SL_BOUNDARY__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__REF2_SL_BOUNDARY__STRUCT_HPP_

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
# define DEPRECATED__deva_planning_msgs2__msg__Ref2SLBoundary __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__Ref2SLBoundary __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ref2SLBoundary_
{
  using Type = Ref2SLBoundary_<ContainerAllocator>;

  explicit Ref2SLBoundary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sl_boundary(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_id = 0l;
    }
  }

  explicit Ref2SLBoundary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sl_boundary(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_id = 0l;
    }
  }

  // field types and members
  using _ref_id_type =
    int32_t;
  _ref_id_type ref_id;
  using _sl_boundary_type =
    deva_planning_msgs2::msg::SLBoundary_<ContainerAllocator>;
  _sl_boundary_type sl_boundary;

  // setters for named parameter idiom
  Type & set__ref_id(
    const int32_t & _arg)
  {
    this->ref_id = _arg;
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
    deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__Ref2SLBoundary
    std::shared_ptr<deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__Ref2SLBoundary
    std::shared_ptr<deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ref2SLBoundary_ & other) const
  {
    if (this->ref_id != other.ref_id) {
      return false;
    }
    if (this->sl_boundary != other.sl_boundary) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ref2SLBoundary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ref2SLBoundary_

// alias to use template instance with default allocator
using Ref2SLBoundary =
  deva_planning_msgs2::msg::Ref2SLBoundary_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__REF2_SL_BOUNDARY__STRUCT_HPP_
