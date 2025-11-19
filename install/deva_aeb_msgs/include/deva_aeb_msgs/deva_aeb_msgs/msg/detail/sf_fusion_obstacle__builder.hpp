// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_fusion_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionObstacle_headingangle
{
public:
  explicit Init_SFFusionObstacle_headingangle(::deva_aeb_msgs::msg::SFFusionObstacle & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFFusionObstacle headingangle(::deva_aeb_msgs::msg::SFFusionObstacle::_headingangle_type arg)
  {
    msg_.headingangle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacle msg_;
};

class Init_SFFusionObstacle_height
{
public:
  explicit Init_SFFusionObstacle_height(::deva_aeb_msgs::msg::SFFusionObstacle & msg)
  : msg_(msg)
  {}
  Init_SFFusionObstacle_headingangle height(::deva_aeb_msgs::msg::SFFusionObstacle::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_SFFusionObstacle_headingangle(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacle msg_;
};

class Init_SFFusionObstacle_width
{
public:
  explicit Init_SFFusionObstacle_width(::deva_aeb_msgs::msg::SFFusionObstacle & msg)
  : msg_(msg)
  {}
  Init_SFFusionObstacle_height width(::deva_aeb_msgs::msg::SFFusionObstacle::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_SFFusionObstacle_height(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacle msg_;
};

class Init_SFFusionObstacle_length
{
public:
  explicit Init_SFFusionObstacle_length(::deva_aeb_msgs::msg::SFFusionObstacle & msg)
  : msg_(msg)
  {}
  Init_SFFusionObstacle_width length(::deva_aeb_msgs::msg::SFFusionObstacle::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_SFFusionObstacle_width(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacle msg_;
};

class Init_SFFusionObstacle_poslat
{
public:
  explicit Init_SFFusionObstacle_poslat(::deva_aeb_msgs::msg::SFFusionObstacle & msg)
  : msg_(msg)
  {}
  Init_SFFusionObstacle_length poslat(::deva_aeb_msgs::msg::SFFusionObstacle::_poslat_type arg)
  {
    msg_.poslat = std::move(arg);
    return Init_SFFusionObstacle_length(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacle msg_;
};

class Init_SFFusionObstacle_poslgt
{
public:
  explicit Init_SFFusionObstacle_poslgt(::deva_aeb_msgs::msg::SFFusionObstacle & msg)
  : msg_(msg)
  {}
  Init_SFFusionObstacle_poslat poslgt(::deva_aeb_msgs::msg::SFFusionObstacle::_poslgt_type arg)
  {
    msg_.poslgt = std::move(arg);
    return Init_SFFusionObstacle_poslat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacle msg_;
};

class Init_SFFusionObstacle_lifetime
{
public:
  explicit Init_SFFusionObstacle_lifetime(::deva_aeb_msgs::msg::SFFusionObstacle & msg)
  : msg_(msg)
  {}
  Init_SFFusionObstacle_poslgt lifetime(::deva_aeb_msgs::msg::SFFusionObstacle::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return Init_SFFusionObstacle_poslgt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacle msg_;
};

class Init_SFFusionObstacle_overrideflag
{
public:
  explicit Init_SFFusionObstacle_overrideflag(::deva_aeb_msgs::msg::SFFusionObstacle & msg)
  : msg_(msg)
  {}
  Init_SFFusionObstacle_lifetime overrideflag(::deva_aeb_msgs::msg::SFFusionObstacle::_overrideflag_type arg)
  {
    msg_.overrideflag = std::move(arg);
    return Init_SFFusionObstacle_lifetime(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacle msg_;
};

class Init_SFFusionObstacle_laneassignment
{
public:
  explicit Init_SFFusionObstacle_laneassignment(::deva_aeb_msgs::msg::SFFusionObstacle & msg)
  : msg_(msg)
  {}
  Init_SFFusionObstacle_overrideflag laneassignment(::deva_aeb_msgs::msg::SFFusionObstacle::_laneassignment_type arg)
  {
    msg_.laneassignment = std::move(arg);
    return Init_SFFusionObstacle_overrideflag(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacle msg_;
};

class Init_SFFusionObstacle_confi
{
public:
  explicit Init_SFFusionObstacle_confi(::deva_aeb_msgs::msg::SFFusionObstacle & msg)
  : msg_(msg)
  {}
  Init_SFFusionObstacle_laneassignment confi(::deva_aeb_msgs::msg::SFFusionObstacle::_confi_type arg)
  {
    msg_.confi = std::move(arg);
    return Init_SFFusionObstacle_laneassignment(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacle msg_;
};

class Init_SFFusionObstacle_type
{
public:
  explicit Init_SFFusionObstacle_type(::deva_aeb_msgs::msg::SFFusionObstacle & msg)
  : msg_(msg)
  {}
  Init_SFFusionObstacle_confi type(::deva_aeb_msgs::msg::SFFusionObstacle::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SFFusionObstacle_confi(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacle msg_;
};

class Init_SFFusionObstacle_id
{
public:
  Init_SFFusionObstacle_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionObstacle_type id(::deva_aeb_msgs::msg::SFFusionObstacle::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SFFusionObstacle_type(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFFusionObstacle>()
{
  return deva_aeb_msgs::msg::builder::Init_SFFusionObstacle_id();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE__BUILDER_HPP_
