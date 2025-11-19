// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProLaneTopo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_TOPO__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_TOPO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProLaneTopo __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProLaneTopo __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SdProLaneTopo_
{
  using Type = SdProLaneTopo_<ContainerAllocator>;

  explicit SdProLaneTopo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_id = 0ull;
      this->lane_num = 0l;
      this->lane_id = 0ull;
    }
  }

  explicit SdProLaneTopo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_id = 0ull;
      this->lane_num = 0l;
      this->lane_id = 0ull;
    }
  }

  // field types and members
  using _road_id_type =
    uint64_t;
  _road_id_type road_id;
  using _lane_num_type =
    int32_t;
  _lane_num_type lane_num;
  using _lane_id_type =
    uint64_t;
  _lane_id_type lane_id;

  // setters for named parameter idiom
  Type & set__road_id(
    const uint64_t & _arg)
  {
    this->road_id = _arg;
    return *this;
  }
  Type & set__lane_num(
    const int32_t & _arg)
  {
    this->lane_num = _arg;
    return *this;
  }
  Type & set__lane_id(
    const uint64_t & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProLaneTopo
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProLaneTopo
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SdProLaneTopo_ & other) const
  {
    if (this->road_id != other.road_id) {
      return false;
    }
    if (this->lane_num != other.lane_num) {
      return false;
    }
    if (this->lane_id != other.lane_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SdProLaneTopo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SdProLaneTopo_

// alias to use template instance with default allocator
using SdProLaneTopo =
  deva_gaode_routing_msgs::msg::SdProLaneTopo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_TOPO__STRUCT_HPP_
