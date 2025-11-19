// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_SdProMap_sd_nodes
{
public:
  explicit Init_SdProMap_sd_nodes(::deva_gaode_routing_msgs::msg::SdProMap & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::SdProMap sd_nodes(::deva_gaode_routing_msgs::msg::SdProMap::_sd_nodes_type arg)
  {
    msg_.sd_nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProMap msg_;
};

class Init_SdProMap_path_merges
{
public:
  explicit Init_SdProMap_path_merges(::deva_gaode_routing_msgs::msg::SdProMap & msg)
  : msg_(msg)
  {}
  Init_SdProMap_sd_nodes path_merges(::deva_gaode_routing_msgs::msg::SdProMap::_path_merges_type arg)
  {
    msg_.path_merges = std::move(arg);
    return Init_SdProMap_sd_nodes(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProMap msg_;
};

class Init_SdProMap_path_splits
{
public:
  explicit Init_SdProMap_path_splits(::deva_gaode_routing_msgs::msg::SdProMap & msg)
  : msg_(msg)
  {}
  Init_SdProMap_path_merges path_splits(::deva_gaode_routing_msgs::msg::SdProMap::_path_splits_type arg)
  {
    msg_.path_splits = std::move(arg);
    return Init_SdProMap_path_merges(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProMap msg_;
};

class Init_SdProMap_links
{
public:
  explicit Init_SdProMap_links(::deva_gaode_routing_msgs::msg::SdProMap & msg)
  : msg_(msg)
  {}
  Init_SdProMap_path_splits links(::deva_gaode_routing_msgs::msg::SdProMap::_links_type arg)
  {
    msg_.links = std::move(arg);
    return Init_SdProMap_path_splits(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProMap msg_;
};

class Init_SdProMap_paths
{
public:
  explicit Init_SdProMap_paths(::deva_gaode_routing_msgs::msg::SdProMap & msg)
  : msg_(msg)
  {}
  Init_SdProMap_links paths(::deva_gaode_routing_msgs::msg::SdProMap::_paths_type arg)
  {
    msg_.paths = std::move(arg);
    return Init_SdProMap_links(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProMap msg_;
};

class Init_SdProMap_navi_route
{
public:
  explicit Init_SdProMap_navi_route(::deva_gaode_routing_msgs::msg::SdProMap & msg)
  : msg_(msg)
  {}
  Init_SdProMap_paths navi_route(::deva_gaode_routing_msgs::msg::SdProMap::_navi_route_type arg)
  {
    msg_.navi_route = std::move(arg);
    return Init_SdProMap_paths(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProMap msg_;
};

class Init_SdProMap_city_code
{
public:
  explicit Init_SdProMap_city_code(::deva_gaode_routing_msgs::msg::SdProMap & msg)
  : msg_(msg)
  {}
  Init_SdProMap_navi_route city_code(::deva_gaode_routing_msgs::msg::SdProMap::_city_code_type arg)
  {
    msg_.city_code = std::move(arg);
    return Init_SdProMap_navi_route(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProMap msg_;
};

class Init_SdProMap_version
{
public:
  Init_SdProMap_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdProMap_city_code version(::deva_gaode_routing_msgs::msg::SdProMap::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_SdProMap_city_code(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::SdProMap>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_SdProMap_version();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__BUILDER_HPP_
