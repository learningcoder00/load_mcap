// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Crosswalk.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/crosswalk__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Crosswalk_vertices
{
public:
  explicit Init_Crosswalk_vertices(::deva_perception_msgs::msg::Crosswalk & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Crosswalk vertices(::deva_perception_msgs::msg::Crosswalk::_vertices_type arg)
  {
    msg_.vertices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk msg_;
};

class Init_Crosswalk_confidence
{
public:
  explicit Init_Crosswalk_confidence(::deva_perception_msgs::msg::Crosswalk & msg)
  : msg_(msg)
  {}
  Init_Crosswalk_vertices confidence(::deva_perception_msgs::msg::Crosswalk::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Crosswalk_vertices(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk msg_;
};

class Init_Crosswalk_id
{
public:
  Init_Crosswalk_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Crosswalk_confidence id(::deva_perception_msgs::msg::Crosswalk::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Crosswalk_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Crosswalk>()
{
  return deva_perception_msgs::msg::builder::Init_Crosswalk_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK__BUILDER_HPP_
