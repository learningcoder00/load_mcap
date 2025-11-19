// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_mdriver_msgs:msg/MdriverMetaAction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_META_ACTION__BUILDER_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_META_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_mdriver_msgs/msg/detail/mdriver_meta_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_mdriver_msgs
{

namespace msg
{

namespace builder
{

class Init_MdriverMetaAction_logits
{
public:
  explicit Init_MdriverMetaAction_logits(::deva_mdriver_msgs::msg::MdriverMetaAction & msg)
  : msg_(msg)
  {}
  ::deva_mdriver_msgs::msg::MdriverMetaAction logits(::deva_mdriver_msgs::msg::MdriverMetaAction::_logits_type arg)
  {
    msg_.logits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MdriverMetaAction msg_;
};

class Init_MdriverMetaAction_score
{
public:
  explicit Init_MdriverMetaAction_score(::deva_mdriver_msgs::msg::MdriverMetaAction & msg)
  : msg_(msg)
  {}
  Init_MdriverMetaAction_logits score(::deva_mdriver_msgs::msg::MdriverMetaAction::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_MdriverMetaAction_logits(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MdriverMetaAction msg_;
};

class Init_MdriverMetaAction_best_mdriver_meta_action
{
public:
  Init_MdriverMetaAction_best_mdriver_meta_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MdriverMetaAction_score best_mdriver_meta_action(::deva_mdriver_msgs::msg::MdriverMetaAction::_best_mdriver_meta_action_type arg)
  {
    msg_.best_mdriver_meta_action = std::move(arg);
    return Init_MdriverMetaAction_score(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MdriverMetaAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_mdriver_msgs::msg::MdriverMetaAction>()
{
  return deva_mdriver_msgs::msg::builder::Init_MdriverMetaAction_best_mdriver_meta_action();
}

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_META_ACTION__BUILDER_HPP_
