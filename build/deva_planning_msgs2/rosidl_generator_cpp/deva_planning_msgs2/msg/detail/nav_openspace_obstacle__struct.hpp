// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/NavOpenspaceObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_OBSTACLE__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__NavOpenspaceObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__NavOpenspaceObstacle __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavOpenspaceObstacle_
{
  using Type = NavOpenspaceObstacle_<ContainerAllocator>;

  explicit NavOpenspaceObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obs_type = 0ul;
    }
  }

  explicit NavOpenspaceObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obs_type = 0ul;
    }
  }

  // field types and members
  using _obs_type_type =
    uint32_t;
  _obs_type_type obs_type;
  using _xy_vec_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _xy_vec_type xy_vec;

  // setters for named parameter idiom
  Type & set__obs_type(
    const uint32_t & _arg)
  {
    this->obs_type = _arg;
    return *this;
  }
  Type & set__xy_vec(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->xy_vec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__NavOpenspaceObstacle
    std::shared_ptr<deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__NavOpenspaceObstacle
    std::shared_ptr<deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavOpenspaceObstacle_ & other) const
  {
    if (this->obs_type != other.obs_type) {
      return false;
    }
    if (this->xy_vec != other.xy_vec) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavOpenspaceObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavOpenspaceObstacle_

// alias to use template instance with default allocator
using NavOpenspaceObstacle =
  deva_planning_msgs2::msg::NavOpenspaceObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_OBSTACLE__STRUCT_HPP_
