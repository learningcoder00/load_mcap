// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/RoadBoundary.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_BOUNDARY__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_BOUNDARY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'left_physical_bound_line'
// Member 'right_physical_bound_line'
// Member 'left_law_bound_line'
// Member 'right_law_bound_line'
#include "environment_model_msgs/msg/detail/boundary_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__RoadBoundary __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__RoadBoundary __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadBoundary_
{
  using Type = RoadBoundary_<ContainerAllocator>;

  explicit RoadBoundary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feature = 0;
    }
  }

  explicit RoadBoundary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feature = 0;
    }
  }

  // field types and members
  using _left_physical_bound_line_type =
    std::vector<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>>>;
  _left_physical_bound_line_type left_physical_bound_line;
  using _right_physical_bound_line_type =
    std::vector<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>>>;
  _right_physical_bound_line_type right_physical_bound_line;
  using _left_law_bound_line_type =
    std::vector<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>>>;
  _left_law_bound_line_type left_law_bound_line;
  using _right_law_bound_line_type =
    std::vector<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>>>;
  _right_law_bound_line_type right_law_bound_line;
  using _feature_type =
    uint8_t;
  _feature_type feature;
  using _isolated_obj_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _isolated_obj_ids_type isolated_obj_ids;

  // setters for named parameter idiom
  Type & set__left_physical_bound_line(
    const std::vector<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>>> & _arg)
  {
    this->left_physical_bound_line = _arg;
    return *this;
  }
  Type & set__right_physical_bound_line(
    const std::vector<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>>> & _arg)
  {
    this->right_physical_bound_line = _arg;
    return *this;
  }
  Type & set__left_law_bound_line(
    const std::vector<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>>> & _arg)
  {
    this->left_law_bound_line = _arg;
    return *this;
  }
  Type & set__right_law_bound_line(
    const std::vector<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::BoundaryPoint_<ContainerAllocator>>> & _arg)
  {
    this->right_law_bound_line = _arg;
    return *this;
  }
  Type & set__feature(
    const uint8_t & _arg)
  {
    this->feature = _arg;
    return *this;
  }
  Type & set__isolated_obj_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->isolated_obj_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::RoadBoundary_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::RoadBoundary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::RoadBoundary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::RoadBoundary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::RoadBoundary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::RoadBoundary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::RoadBoundary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::RoadBoundary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::RoadBoundary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::RoadBoundary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__RoadBoundary
    std::shared_ptr<environment_model_msgs::msg::RoadBoundary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__RoadBoundary
    std::shared_ptr<environment_model_msgs::msg::RoadBoundary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadBoundary_ & other) const
  {
    if (this->left_physical_bound_line != other.left_physical_bound_line) {
      return false;
    }
    if (this->right_physical_bound_line != other.right_physical_bound_line) {
      return false;
    }
    if (this->left_law_bound_line != other.left_law_bound_line) {
      return false;
    }
    if (this->right_law_bound_line != other.right_law_bound_line) {
      return false;
    }
    if (this->feature != other.feature) {
      return false;
    }
    if (this->isolated_obj_ids != other.isolated_obj_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadBoundary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadBoundary_

// alias to use template instance with default allocator
using RoadBoundary =
  environment_model_msgs::msg::RoadBoundary_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_BOUNDARY__STRUCT_HPP_
