// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'navi_route'
#include "deva_gaode_routing_msgs/msg/detail/nav_route__struct.hpp"
// Member 'paths'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path__struct.hpp"
// Member 'links'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_link__struct.hpp"
// Member 'path_splits'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_split__struct.hpp"
// Member 'path_merges'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_merge__struct.hpp"
// Member 'sd_nodes'
#include "deva_gaode_routing_msgs/msg/detail/sd_node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProMap __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProMap __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SdProMap_
{
  using Type = SdProMap_<ContainerAllocator>;

  explicit SdProMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : navi_route(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0ul;
      this->city_code = 0ul;
    }
  }

  explicit SdProMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : navi_route(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0ul;
      this->city_code = 0ul;
    }
  }

  // field types and members
  using _version_type =
    uint32_t;
  _version_type version;
  using _city_code_type =
    uint32_t;
  _city_code_type city_code;
  using _navi_route_type =
    deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator>;
  _navi_route_type navi_route;
  using _paths_type =
    std::vector<deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator>>>;
  _paths_type paths;
  using _links_type =
    std::vector<deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator>>>;
  _links_type links;
  using _path_splits_type =
    std::vector<deva_gaode_routing_msgs::msg::SdProPathSplit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProPathSplit_<ContainerAllocator>>>;
  _path_splits_type path_splits;
  using _path_merges_type =
    std::vector<deva_gaode_routing_msgs::msg::SdProPathMerge_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProPathMerge_<ContainerAllocator>>>;
  _path_merges_type path_merges;
  using _sd_nodes_type =
    std::vector<deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator>>>;
  _sd_nodes_type sd_nodes;

  // setters for named parameter idiom
  Type & set__version(
    const uint32_t & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__city_code(
    const uint32_t & _arg)
  {
    this->city_code = _arg;
    return *this;
  }
  Type & set__navi_route(
    const deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator> & _arg)
  {
    this->navi_route = _arg;
    return *this;
  }
  Type & set__paths(
    const std::vector<deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator>>> & _arg)
  {
    this->paths = _arg;
    return *this;
  }
  Type & set__links(
    const std::vector<deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProLink_<ContainerAllocator>>> & _arg)
  {
    this->links = _arg;
    return *this;
  }
  Type & set__path_splits(
    const std::vector<deva_gaode_routing_msgs::msg::SdProPathSplit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProPathSplit_<ContainerAllocator>>> & _arg)
  {
    this->path_splits = _arg;
    return *this;
  }
  Type & set__path_merges(
    const std::vector<deva_gaode_routing_msgs::msg::SdProPathMerge_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProPathMerge_<ContainerAllocator>>> & _arg)
  {
    this->path_merges = _arg;
    return *this;
  }
  Type & set__sd_nodes(
    const std::vector<deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SDNode_<ContainerAllocator>>> & _arg)
  {
    this->sd_nodes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::SdProMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::SdProMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProMap
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProMap
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SdProMap_ & other) const
  {
    if (this->version != other.version) {
      return false;
    }
    if (this->city_code != other.city_code) {
      return false;
    }
    if (this->navi_route != other.navi_route) {
      return false;
    }
    if (this->paths != other.paths) {
      return false;
    }
    if (this->links != other.links) {
      return false;
    }
    if (this->path_splits != other.path_splits) {
      return false;
    }
    if (this->path_merges != other.path_merges) {
      return false;
    }
    if (this->sd_nodes != other.sd_nodes) {
      return false;
    }
    return true;
  }
  bool operator!=(const SdProMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SdProMap_

// alias to use template instance with default allocator
using SdProMap =
  deva_gaode_routing_msgs::msg::SdProMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__STRUCT_HPP_
