// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/StructuredHdair.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_HDAIR__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_HDAIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/structured_hdair__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_StructuredHdair_lanes
{
public:
  explicit Init_StructuredHdair_lanes(::environment_model_msgs::msg::StructuredHdair & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::StructuredHdair lanes(::environment_model_msgs::msg::StructuredHdair::_lanes_type arg)
  {
    msg_.lanes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredHdair msg_;
};

class Init_StructuredHdair_feature_points
{
public:
  explicit Init_StructuredHdair_feature_points(::environment_model_msgs::msg::StructuredHdair & msg)
  : msg_(msg)
  {}
  Init_StructuredHdair_lanes feature_points(::environment_model_msgs::msg::StructuredHdair::_feature_points_type arg)
  {
    msg_.feature_points = std::move(arg);
    return Init_StructuredHdair_lanes(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredHdair msg_;
};

class Init_StructuredHdair_links
{
public:
  explicit Init_StructuredHdair_links(::environment_model_msgs::msg::StructuredHdair & msg)
  : msg_(msg)
  {}
  Init_StructuredHdair_feature_points links(::environment_model_msgs::msg::StructuredHdair::_links_type arg)
  {
    msg_.links = std::move(arg);
    return Init_StructuredHdair_feature_points(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredHdair msg_;
};

class Init_StructuredHdair_current_link_id
{
public:
  explicit Init_StructuredHdair_current_link_id(::environment_model_msgs::msg::StructuredHdair & msg)
  : msg_(msg)
  {}
  Init_StructuredHdair_links current_link_id(::environment_model_msgs::msg::StructuredHdair::_current_link_id_type arg)
  {
    msg_.current_link_id = std::move(arg);
    return Init_StructuredHdair_links(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredHdair msg_;
};

class Init_StructuredHdair_header
{
public:
  Init_StructuredHdair_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StructuredHdair_current_link_id header(::environment_model_msgs::msg::StructuredHdair::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StructuredHdair_current_link_id(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredHdair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::StructuredHdair>()
{
  return environment_model_msgs::msg::builder::Init_StructuredHdair_header();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_HDAIR__BUILDER_HPP_
