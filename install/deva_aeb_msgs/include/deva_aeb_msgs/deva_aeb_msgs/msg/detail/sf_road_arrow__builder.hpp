// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFRoadArrow.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_road_arrow__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFRoadArrow_headingangle
{
public:
  explicit Init_SFRoadArrow_headingangle(::deva_aeb_msgs::msg::SFRoadArrow & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFRoadArrow headingangle(::deva_aeb_msgs::msg::SFRoadArrow::_headingangle_type arg)
  {
    msg_.headingangle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadArrow msg_;
};

class Init_SFRoadArrow_poslat
{
public:
  explicit Init_SFRoadArrow_poslat(::deva_aeb_msgs::msg::SFRoadArrow & msg)
  : msg_(msg)
  {}
  Init_SFRoadArrow_headingangle poslat(::deva_aeb_msgs::msg::SFRoadArrow::_poslat_type arg)
  {
    msg_.poslat = std::move(arg);
    return Init_SFRoadArrow_headingangle(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadArrow msg_;
};

class Init_SFRoadArrow_poslgt
{
public:
  explicit Init_SFRoadArrow_poslgt(::deva_aeb_msgs::msg::SFRoadArrow & msg)
  : msg_(msg)
  {}
  Init_SFRoadArrow_poslat poslgt(::deva_aeb_msgs::msg::SFRoadArrow::_poslgt_type arg)
  {
    msg_.poslgt = std::move(arg);
    return Init_SFRoadArrow_poslat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadArrow msg_;
};

class Init_SFRoadArrow_reserved
{
public:
  explicit Init_SFRoadArrow_reserved(::deva_aeb_msgs::msg::SFRoadArrow & msg)
  : msg_(msg)
  {}
  Init_SFRoadArrow_poslgt reserved(::deva_aeb_msgs::msg::SFRoadArrow::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFRoadArrow_poslgt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadArrow msg_;
};

class Init_SFRoadArrow_lanassignment
{
public:
  explicit Init_SFRoadArrow_lanassignment(::deva_aeb_msgs::msg::SFRoadArrow & msg)
  : msg_(msg)
  {}
  Init_SFRoadArrow_reserved lanassignment(::deva_aeb_msgs::msg::SFRoadArrow::_lanassignment_type arg)
  {
    msg_.lanassignment = std::move(arg);
    return Init_SFRoadArrow_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadArrow msg_;
};

class Init_SFRoadArrow_confi
{
public:
  explicit Init_SFRoadArrow_confi(::deva_aeb_msgs::msg::SFRoadArrow & msg)
  : msg_(msg)
  {}
  Init_SFRoadArrow_lanassignment confi(::deva_aeb_msgs::msg::SFRoadArrow::_confi_type arg)
  {
    msg_.confi = std::move(arg);
    return Init_SFRoadArrow_lanassignment(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadArrow msg_;
};

class Init_SFRoadArrow_type
{
public:
  explicit Init_SFRoadArrow_type(::deva_aeb_msgs::msg::SFRoadArrow & msg)
  : msg_(msg)
  {}
  Init_SFRoadArrow_confi type(::deva_aeb_msgs::msg::SFRoadArrow::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SFRoadArrow_confi(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadArrow msg_;
};

class Init_SFRoadArrow_id
{
public:
  Init_SFRoadArrow_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFRoadArrow_type id(::deva_aeb_msgs::msg::SFRoadArrow::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SFRoadArrow_type(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadArrow msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFRoadArrow>()
{
  return deva_aeb_msgs::msg::builder::Init_SFRoadArrow_id();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__BUILDER_HPP_
