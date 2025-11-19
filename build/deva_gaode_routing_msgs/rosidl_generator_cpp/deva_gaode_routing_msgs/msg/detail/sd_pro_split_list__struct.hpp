// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProSplitList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProSplitList __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProSplitList __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SdProSplitList_
{
  using Type = SdProSplitList_<ContainerAllocator>;

  explicit SdProSplitList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sub_path_id = 0ul;
      this->turn_angle = 0.0;
      this->right_of_way = 0ul;
    }
  }

  explicit SdProSplitList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sub_path_id = 0ul;
      this->turn_angle = 0.0;
      this->right_of_way = 0ul;
    }
  }

  // field types and members
  using _sub_path_id_type =
    uint32_t;
  _sub_path_id_type sub_path_id;
  using _turn_angle_type =
    double;
  _turn_angle_type turn_angle;
  using _right_of_way_type =
    uint32_t;
  _right_of_way_type right_of_way;

  // setters for named parameter idiom
  Type & set__sub_path_id(
    const uint32_t & _arg)
  {
    this->sub_path_id = _arg;
    return *this;
  }
  Type & set__turn_angle(
    const double & _arg)
  {
    this->turn_angle = _arg;
    return *this;
  }
  Type & set__right_of_way(
    const uint32_t & _arg)
  {
    this->right_of_way = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::SdProSplitList_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::SdProSplitList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProSplitList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProSplitList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProSplitList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProSplitList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProSplitList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProSplitList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProSplitList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProSplitList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProSplitList
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProSplitList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProSplitList
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProSplitList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SdProSplitList_ & other) const
  {
    if (this->sub_path_id != other.sub_path_id) {
      return false;
    }
    if (this->turn_angle != other.turn_angle) {
      return false;
    }
    if (this->right_of_way != other.right_of_way) {
      return false;
    }
    return true;
  }
  bool operator!=(const SdProSplitList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SdProSplitList_

// alias to use template instance with default allocator
using SdProSplitList =
  deva_gaode_routing_msgs::msg::SdProSplitList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__STRUCT_HPP_
