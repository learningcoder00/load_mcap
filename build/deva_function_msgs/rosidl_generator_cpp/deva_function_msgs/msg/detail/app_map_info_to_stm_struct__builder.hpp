// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/AppMapInfoToStmStruct.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_MAP_INFO_TO_STM_STRUCT__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_MAP_INFO_TO_STM_STRUCT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/app_map_info_to_stm_struct__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list4
{
public:
  explicit Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list4(::deva_function_msgs::msg::AppMapInfoToStmStruct & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::AppMapInfoToStmStruct aut_valt_prkg_map_upload_use_map_list4(::deva_function_msgs::msg::AppMapInfoToStmStruct::_aut_valt_prkg_map_upload_use_map_list4_type arg)
  {
    msg_.aut_valt_prkg_map_upload_use_map_list4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::AppMapInfoToStmStruct msg_;
};

class Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list3
{
public:
  explicit Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list3(::deva_function_msgs::msg::AppMapInfoToStmStruct & msg)
  : msg_(msg)
  {}
  Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list4 aut_valt_prkg_map_upload_use_map_list3(::deva_function_msgs::msg::AppMapInfoToStmStruct::_aut_valt_prkg_map_upload_use_map_list3_type arg)
  {
    msg_.aut_valt_prkg_map_upload_use_map_list3 = std::move(arg);
    return Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list4(msg_);
  }

private:
  ::deva_function_msgs::msg::AppMapInfoToStmStruct msg_;
};

class Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list2
{
public:
  explicit Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list2(::deva_function_msgs::msg::AppMapInfoToStmStruct & msg)
  : msg_(msg)
  {}
  Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list3 aut_valt_prkg_map_upload_use_map_list2(::deva_function_msgs::msg::AppMapInfoToStmStruct::_aut_valt_prkg_map_upload_use_map_list2_type arg)
  {
    msg_.aut_valt_prkg_map_upload_use_map_list2 = std::move(arg);
    return Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list3(msg_);
  }

private:
  ::deva_function_msgs::msg::AppMapInfoToStmStruct msg_;
};

class Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list1
{
public:
  explicit Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list1(::deva_function_msgs::msg::AppMapInfoToStmStruct & msg)
  : msg_(msg)
  {}
  Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list2 aut_valt_prkg_map_upload_use_map_list1(::deva_function_msgs::msg::AppMapInfoToStmStruct::_aut_valt_prkg_map_upload_use_map_list1_type arg)
  {
    msg_.aut_valt_prkg_map_upload_use_map_list1 = std::move(arg);
    return Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list2(msg_);
  }

private:
  ::deva_function_msgs::msg::AppMapInfoToStmStruct msg_;
};

class Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_type2
{
public:
  explicit Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_type2(::deva_function_msgs::msg::AppMapInfoToStmStruct & msg)
  : msg_(msg)
  {}
  Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list1 aut_valt_prkg_map_upload_use_map_type2(::deva_function_msgs::msg::AppMapInfoToStmStruct::_aut_valt_prkg_map_upload_use_map_type2_type arg)
  {
    msg_.aut_valt_prkg_map_upload_use_map_type2 = std::move(arg);
    return Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_list1(msg_);
  }

private:
  ::deva_function_msgs::msg::AppMapInfoToStmStruct msg_;
};

class Init_AppMapInfoToStmStruct_route_id
{
public:
  Init_AppMapInfoToStmStruct_route_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_type2 route_id(::deva_function_msgs::msg::AppMapInfoToStmStruct::_route_id_type arg)
  {
    msg_.route_id = std::move(arg);
    return Init_AppMapInfoToStmStruct_aut_valt_prkg_map_upload_use_map_type2(msg_);
  }

private:
  ::deva_function_msgs::msg::AppMapInfoToStmStruct msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::AppMapInfoToStmStruct>()
{
  return deva_function_msgs::msg::builder::Init_AppMapInfoToStmStruct_route_id();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_MAP_INFO_TO_STM_STRUCT__BUILDER_HPP_
