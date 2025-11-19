// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/VirtualLineInfo.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VIRTUAL_LINE_INFO__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VIRTUAL_LINE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ori_ids'
#include "environment_model_msgs/msg/detail/pair_int__struct.hpp"
// Member 'e2e_pair'
#include "environment_model_msgs/msg/detail/pair_double__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__VirtualLineInfo __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__VirtualLineInfo __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VirtualLineInfo_
{
  using Type = VirtualLineInfo_<ContainerAllocator>;

  explicit VirtualLineInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ori_ids(_init),
    e2e_pair(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enum_vlane_type = 0;
      this->virtual_score = 0.0;
      this->exit_lane_id = "";
      this->exit_seq_id = 0l;
    }
  }

  explicit VirtualLineInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ori_ids(_alloc, _init),
    e2e_pair(_alloc, _init),
    exit_lane_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enum_vlane_type = 0;
      this->virtual_score = 0.0;
      this->exit_lane_id = "";
      this->exit_seq_id = 0l;
    }
  }

  // field types and members
  using _enum_vlane_type_type =
    uint8_t;
  _enum_vlane_type_type enum_vlane_type;
  using _virtual_score_type =
    double;
  _virtual_score_type virtual_score;
  using _ori_ids_type =
    environment_model_msgs::msg::PairInt_<ContainerAllocator>;
  _ori_ids_type ori_ids;
  using _e2e_pair_type =
    environment_model_msgs::msg::PairDouble_<ContainerAllocator>;
  _e2e_pair_type e2e_pair;
  using _exit_lane_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _exit_lane_id_type exit_lane_id;
  using _exit_seq_id_type =
    int32_t;
  _exit_seq_id_type exit_seq_id;

  // setters for named parameter idiom
  Type & set__enum_vlane_type(
    const uint8_t & _arg)
  {
    this->enum_vlane_type = _arg;
    return *this;
  }
  Type & set__virtual_score(
    const double & _arg)
  {
    this->virtual_score = _arg;
    return *this;
  }
  Type & set__ori_ids(
    const environment_model_msgs::msg::PairInt_<ContainerAllocator> & _arg)
  {
    this->ori_ids = _arg;
    return *this;
  }
  Type & set__e2e_pair(
    const environment_model_msgs::msg::PairDouble_<ContainerAllocator> & _arg)
  {
    this->e2e_pair = _arg;
    return *this;
  }
  Type & set__exit_lane_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->exit_lane_id = _arg;
    return *this;
  }
  Type & set__exit_seq_id(
    const int32_t & _arg)
  {
    this->exit_seq_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__VirtualLineInfo
    std::shared_ptr<environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__VirtualLineInfo
    std::shared_ptr<environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VirtualLineInfo_ & other) const
  {
    if (this->enum_vlane_type != other.enum_vlane_type) {
      return false;
    }
    if (this->virtual_score != other.virtual_score) {
      return false;
    }
    if (this->ori_ids != other.ori_ids) {
      return false;
    }
    if (this->e2e_pair != other.e2e_pair) {
      return false;
    }
    if (this->exit_lane_id != other.exit_lane_id) {
      return false;
    }
    if (this->exit_seq_id != other.exit_seq_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const VirtualLineInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VirtualLineInfo_

// alias to use template instance with default allocator
using VirtualLineInfo =
  environment_model_msgs::msg::VirtualLineInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VIRTUAL_LINE_INFO__STRUCT_HPP_
