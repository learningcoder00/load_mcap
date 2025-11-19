// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/KLaneMetaInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LANE_META_INFO__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LANE_META_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'in_link_id'
// Member 'pass_link_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"
// Member 'node_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__struct.hpp"
// Member 'lane_infos'
#include "deva_gaode_routing_msgs/msg/detail/lane_traffic_info__struct.hpp"
// Member 'lane_topos'
#include "deva_gaode_routing_msgs/msg/detail/lane_topo__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__KLaneMetaInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__KLaneMetaInfo __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KLaneMetaInfo_
{
  using Type = KLaneMetaInfo_<ContainerAllocator>;

  explicit KLaneMetaInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : in_link_id(_init),
    node_id(_init),
    pass_link_id_s(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_num = 0l;
      this->lane_num_left = 0;
      this->lane_num_right = 0;
    }
  }

  explicit KLaneMetaInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : in_link_id(_alloc, _init),
    node_id(_alloc, _init),
    pass_link_id_s(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_num = 0l;
      this->lane_num_left = 0;
      this->lane_num_right = 0;
    }
  }

  // field types and members
  using _in_link_id_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _in_link_id_type in_link_id;
  using _node_id_type =
    deva_gaode_routing_msgs::msg::NodeIDType_<ContainerAllocator>;
  _node_id_type node_id;
  using _pass_link_id_s_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _pass_link_id_s_type pass_link_id_s;
  using _lane_num_type =
    int32_t;
  _lane_num_type lane_num;
  using _lane_num_left_type =
    uint8_t;
  _lane_num_left_type lane_num_left;
  using _lane_num_right_type =
    uint8_t;
  _lane_num_right_type lane_num_right;
  using _lane_infos_type =
    std::vector<deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator>>>;
  _lane_infos_type lane_infos;
  using _lane_topos_type =
    std::vector<deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator>>>;
  _lane_topos_type lane_topos;

  // setters for named parameter idiom
  Type & set__in_link_id(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->in_link_id = _arg;
    return *this;
  }
  Type & set__node_id(
    const deva_gaode_routing_msgs::msg::NodeIDType_<ContainerAllocator> & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__pass_link_id_s(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->pass_link_id_s = _arg;
    return *this;
  }
  Type & set__lane_num(
    const int32_t & _arg)
  {
    this->lane_num = _arg;
    return *this;
  }
  Type & set__lane_num_left(
    const uint8_t & _arg)
  {
    this->lane_num_left = _arg;
    return *this;
  }
  Type & set__lane_num_right(
    const uint8_t & _arg)
  {
    this->lane_num_right = _arg;
    return *this;
  }
  Type & set__lane_infos(
    const std::vector<deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator>>> & _arg)
  {
    this->lane_infos = _arg;
    return *this;
  }
  Type & set__lane_topos(
    const std::vector<deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator>>> & _arg)
  {
    this->lane_topos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__KLaneMetaInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__KLaneMetaInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KLaneMetaInfo_ & other) const
  {
    if (this->in_link_id != other.in_link_id) {
      return false;
    }
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->pass_link_id_s != other.pass_link_id_s) {
      return false;
    }
    if (this->lane_num != other.lane_num) {
      return false;
    }
    if (this->lane_num_left != other.lane_num_left) {
      return false;
    }
    if (this->lane_num_right != other.lane_num_right) {
      return false;
    }
    if (this->lane_infos != other.lane_infos) {
      return false;
    }
    if (this->lane_topos != other.lane_topos) {
      return false;
    }
    return true;
  }
  bool operator!=(const KLaneMetaInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KLaneMetaInfo_

// alias to use template instance with default allocator
using KLaneMetaInfo =
  deva_gaode_routing_msgs::msg::KLaneMetaInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LANE_META_INFO__STRUCT_HPP_
