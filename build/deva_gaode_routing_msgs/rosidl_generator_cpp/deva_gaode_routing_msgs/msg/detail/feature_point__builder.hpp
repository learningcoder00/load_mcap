// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/FeaturePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/feature_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_FeaturePoint_feature_point_id_by_id
{
public:
  explicit Init_FeaturePoint_feature_point_id_by_id(::deva_gaode_routing_msgs::msg::FeaturePoint & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::FeaturePoint feature_point_id_by_id(::deva_gaode_routing_msgs::msg::FeaturePoint::_feature_point_id_by_id_type arg)
  {
    msg_.feature_point_id_by_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::FeaturePoint msg_;
};

class Init_FeaturePoint_feature_point_id_s_by_link_id
{
public:
  explicit Init_FeaturePoint_feature_point_id_s_by_link_id(::deva_gaode_routing_msgs::msg::FeaturePoint & msg)
  : msg_(msg)
  {}
  Init_FeaturePoint_feature_point_id_by_id feature_point_id_s_by_link_id(::deva_gaode_routing_msgs::msg::FeaturePoint::_feature_point_id_s_by_link_id_type arg)
  {
    msg_.feature_point_id_s_by_link_id = std::move(arg);
    return Init_FeaturePoint_feature_point_id_by_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::FeaturePoint msg_;
};

class Init_FeaturePoint_feature_point_id_s
{
public:
  Init_FeaturePoint_feature_point_id_s()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FeaturePoint_feature_point_id_s_by_link_id feature_point_id_s(::deva_gaode_routing_msgs::msg::FeaturePoint::_feature_point_id_s_type arg)
  {
    msg_.feature_point_id_s = std::move(arg);
    return Init_FeaturePoint_feature_point_id_s_by_link_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::FeaturePoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::FeaturePoint>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_FeaturePoint_feature_point_id_s();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT__BUILDER_HPP_
