// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/RestrictionInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__RESTRICTION_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__RESTRICTION_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/restriction_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_RestrictionInfoProto_tail_nums
{
public:
  explicit Init_RestrictionInfoProto_tail_nums(::deva_navi_msgs::msg::RestrictionInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::RestrictionInfoProto tail_nums(::deva_navi_msgs::msg::RestrictionInfoProto::_tail_nums_type arg)
  {
    msg_.tail_nums = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::RestrictionInfoProto msg_;
};

class Init_RestrictionInfoProto_rule_ids
{
public:
  explicit Init_RestrictionInfoProto_rule_ids(::deva_navi_msgs::msg::RestrictionInfoProto & msg)
  : msg_(msg)
  {}
  Init_RestrictionInfoProto_tail_nums rule_ids(::deva_navi_msgs::msg::RestrictionInfoProto::_rule_ids_type arg)
  {
    msg_.rule_ids = std::move(arg);
    return Init_RestrictionInfoProto_tail_nums(msg_);
  }

private:
  ::deva_navi_msgs::msg::RestrictionInfoProto msg_;
};

class Init_RestrictionInfoProto_title_type
{
public:
  explicit Init_RestrictionInfoProto_title_type(::deva_navi_msgs::msg::RestrictionInfoProto & msg)
  : msg_(msg)
  {}
  Init_RestrictionInfoProto_rule_ids title_type(::deva_navi_msgs::msg::RestrictionInfoProto::_title_type_type arg)
  {
    msg_.title_type = std::move(arg);
    return Init_RestrictionInfoProto_rule_ids(msg_);
  }

private:
  ::deva_navi_msgs::msg::RestrictionInfoProto msg_;
};

class Init_RestrictionInfoProto_type
{
public:
  explicit Init_RestrictionInfoProto_type(::deva_navi_msgs::msg::RestrictionInfoProto & msg)
  : msg_(msg)
  {}
  Init_RestrictionInfoProto_title_type type(::deva_navi_msgs::msg::RestrictionInfoProto::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RestrictionInfoProto_title_type(msg_);
  }

private:
  ::deva_navi_msgs::msg::RestrictionInfoProto msg_;
};

class Init_RestrictionInfoProto_city_code
{
public:
  explicit Init_RestrictionInfoProto_city_code(::deva_navi_msgs::msg::RestrictionInfoProto & msg)
  : msg_(msg)
  {}
  Init_RestrictionInfoProto_type city_code(::deva_navi_msgs::msg::RestrictionInfoProto::_city_code_type arg)
  {
    msg_.city_code = std::move(arg);
    return Init_RestrictionInfoProto_type(msg_);
  }

private:
  ::deva_navi_msgs::msg::RestrictionInfoProto msg_;
};

class Init_RestrictionInfoProto_tipc
{
public:
  explicit Init_RestrictionInfoProto_tipc(::deva_navi_msgs::msg::RestrictionInfoProto & msg)
  : msg_(msg)
  {}
  Init_RestrictionInfoProto_city_code tipc(::deva_navi_msgs::msg::RestrictionInfoProto::_tipc_type arg)
  {
    msg_.tipc = std::move(arg);
    return Init_RestrictionInfoProto_city_code(msg_);
  }

private:
  ::deva_navi_msgs::msg::RestrictionInfoProto msg_;
};

class Init_RestrictionInfoProto_desc
{
public:
  explicit Init_RestrictionInfoProto_desc(::deva_navi_msgs::msg::RestrictionInfoProto & msg)
  : msg_(msg)
  {}
  Init_RestrictionInfoProto_tipc desc(::deva_navi_msgs::msg::RestrictionInfoProto::_desc_type arg)
  {
    msg_.desc = std::move(arg);
    return Init_RestrictionInfoProto_tipc(msg_);
  }

private:
  ::deva_navi_msgs::msg::RestrictionInfoProto msg_;
};

class Init_RestrictionInfoProto_title
{
public:
  Init_RestrictionInfoProto_title()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RestrictionInfoProto_desc title(::deva_navi_msgs::msg::RestrictionInfoProto::_title_type arg)
  {
    msg_.title = std::move(arg);
    return Init_RestrictionInfoProto_desc(msg_);
  }

private:
  ::deva_navi_msgs::msg::RestrictionInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::RestrictionInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_RestrictionInfoProto_title();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__RESTRICTION_INFO_PROTO__BUILDER_HPP_
