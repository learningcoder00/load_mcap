// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/CenterLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CENTER_LINE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CENTER_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lane_equalization'
#include "deva_common_msgs/msg/detail/equation_curve__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__CenterLine __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__CenterLine __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CenterLine_
{
  using Type = CenterLine_<ContainerAllocator>;

  explicit CenterLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->center_line_id = 0l;
      this->left_lane_id = 0l;
      this->right_lane_id = 0l;
      this->is_current_lane = false;
      this->is_virtual_lane = false;
    }
  }

  explicit CenterLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->center_line_id = 0l;
      this->left_lane_id = 0l;
      this->right_lane_id = 0l;
      this->is_current_lane = false;
      this->is_virtual_lane = false;
    }
  }

  // field types and members
  using _center_line_id_type =
    int32_t;
  _center_line_id_type center_line_id;
  using _left_lane_id_type =
    int32_t;
  _left_lane_id_type left_lane_id;
  using _right_lane_id_type =
    int32_t;
  _right_lane_id_type right_lane_id;
  using _lane_equalization_type =
    std::vector<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>>>;
  _lane_equalization_type lane_equalization;
  using _is_current_lane_type =
    bool;
  _is_current_lane_type is_current_lane;
  using _is_virtual_lane_type =
    bool;
  _is_virtual_lane_type is_virtual_lane;

  // setters for named parameter idiom
  Type & set__center_line_id(
    const int32_t & _arg)
  {
    this->center_line_id = _arg;
    return *this;
  }
  Type & set__left_lane_id(
    const int32_t & _arg)
  {
    this->left_lane_id = _arg;
    return *this;
  }
  Type & set__right_lane_id(
    const int32_t & _arg)
  {
    this->right_lane_id = _arg;
    return *this;
  }
  Type & set__lane_equalization(
    const std::vector<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>>> & _arg)
  {
    this->lane_equalization = _arg;
    return *this;
  }
  Type & set__is_current_lane(
    const bool & _arg)
  {
    this->is_current_lane = _arg;
    return *this;
  }
  Type & set__is_virtual_lane(
    const bool & _arg)
  {
    this->is_virtual_lane = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::CenterLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::CenterLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::CenterLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::CenterLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::CenterLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::CenterLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::CenterLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::CenterLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::CenterLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::CenterLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__CenterLine
    std::shared_ptr<deva_perception_msgs::msg::CenterLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__CenterLine
    std::shared_ptr<deva_perception_msgs::msg::CenterLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CenterLine_ & other) const
  {
    if (this->center_line_id != other.center_line_id) {
      return false;
    }
    if (this->left_lane_id != other.left_lane_id) {
      return false;
    }
    if (this->right_lane_id != other.right_lane_id) {
      return false;
    }
    if (this->lane_equalization != other.lane_equalization) {
      return false;
    }
    if (this->is_current_lane != other.is_current_lane) {
      return false;
    }
    if (this->is_virtual_lane != other.is_virtual_lane) {
      return false;
    }
    return true;
  }
  bool operator!=(const CenterLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CenterLine_

// alias to use template instance with default allocator
using CenterLine =
  deva_perception_msgs::msg::CenterLine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CENTER_LINE__STRUCT_HPP_
