// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_mdriver_msgs:msg/CenterLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE__STRUCT_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pts'
#include "deva_mdriver_msgs/msg/detail/center_line_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_mdriver_msgs__msg__CenterLine __attribute__((deprecated))
#else
# define DEPRECATED__deva_mdriver_msgs__msg__CenterLine __declspec(deprecated)
#endif

namespace deva_mdriver_msgs
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
      this->id = 0l;
      this->left_line_attr = 0l;
      this->right_line_attr = 0l;
      this->left_line_dist = 0.0f;
      this->right_line_dist = 0.0f;
    }
  }

  explicit CenterLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->left_line_attr = 0l;
      this->right_line_attr = 0l;
      this->left_line_dist = 0.0f;
      this->right_line_dist = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _pts_type =
    std::vector<deva_mdriver_msgs::msg::CenterLinePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::CenterLinePoint_<ContainerAllocator>>>;
  _pts_type pts;
  using _pre_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _pre_ids_type pre_ids;
  using _suc_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _suc_ids_type suc_ids;
  using _left_line_attr_type =
    int32_t;
  _left_line_attr_type left_line_attr;
  using _right_line_attr_type =
    int32_t;
  _right_line_attr_type right_line_attr;
  using _left_line_dist_type =
    float;
  _left_line_dist_type left_line_dist;
  using _right_line_dist_type =
    float;
  _right_line_dist_type right_line_dist;
  using _traffic_elem_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _traffic_elem_ids_type traffic_elem_ids;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pts(
    const std::vector<deva_mdriver_msgs::msg::CenterLinePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::CenterLinePoint_<ContainerAllocator>>> & _arg)
  {
    this->pts = _arg;
    return *this;
  }
  Type & set__pre_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->pre_ids = _arg;
    return *this;
  }
  Type & set__suc_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->suc_ids = _arg;
    return *this;
  }
  Type & set__left_line_attr(
    const int32_t & _arg)
  {
    this->left_line_attr = _arg;
    return *this;
  }
  Type & set__right_line_attr(
    const int32_t & _arg)
  {
    this->right_line_attr = _arg;
    return *this;
  }
  Type & set__left_line_dist(
    const float & _arg)
  {
    this->left_line_dist = _arg;
    return *this;
  }
  Type & set__right_line_dist(
    const float & _arg)
  {
    this->right_line_dist = _arg;
    return *this;
  }
  Type & set__traffic_elem_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->traffic_elem_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_mdriver_msgs__msg__CenterLine
    std::shared_ptr<deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_mdriver_msgs__msg__CenterLine
    std::shared_ptr<deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CenterLine_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->pts != other.pts) {
      return false;
    }
    if (this->pre_ids != other.pre_ids) {
      return false;
    }
    if (this->suc_ids != other.suc_ids) {
      return false;
    }
    if (this->left_line_attr != other.left_line_attr) {
      return false;
    }
    if (this->right_line_attr != other.right_line_attr) {
      return false;
    }
    if (this->left_line_dist != other.left_line_dist) {
      return false;
    }
    if (this->right_line_dist != other.right_line_dist) {
      return false;
    }
    if (this->traffic_elem_ids != other.traffic_elem_ids) {
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
  deva_mdriver_msgs::msg::CenterLine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE__STRUCT_HPP_
