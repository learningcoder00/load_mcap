// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/AvpRefLineTreePointVec.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vec'
#include "deva_planning_msgs2/msg/detail/avp_ref_line_tree_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__AvpRefLineTreePointVec __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__AvpRefLineTreePointVec __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvpRefLineTreePointVec_
{
  using Type = AvpRefLineTreePointVec_<ContainerAllocator>;

  explicit AvpRefLineTreePointVec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AvpRefLineTreePointVec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _vec_type =
    std::vector<deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator>>>;
  _vec_type vec;

  // setters for named parameter idiom
  Type & set__vec(
    const std::vector<deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator>>> & _arg)
  {
    this->vec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__AvpRefLineTreePointVec
    std::shared_ptr<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__AvpRefLineTreePointVec
    std::shared_ptr<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvpRefLineTreePointVec_ & other) const
  {
    if (this->vec != other.vec) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvpRefLineTreePointVec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvpRefLineTreePointVec_

// alias to use template instance with default allocator
using AvpRefLineTreePointVec =
  deva_planning_msgs2::msg::AvpRefLineTreePointVec_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__STRUCT_HPP_
