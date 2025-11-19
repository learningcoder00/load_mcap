// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBObjList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ_LIST__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_obj_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'fusionobjlist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_obj_list__traits.hpp"
// Member 'vehself'
#include "deva_aeb_msgs/msg/detail/sf_veh_self__traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FusionInfoForAEBObjList & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: fusionobjlist
  {
    out << "fusionobjlist: ";
    to_flow_style_yaml(msg.fusionobjlist, out);
    out << ", ";
  }

  // member: vehself
  {
    out << "vehself: ";
    to_flow_style_yaml(msg.vehself, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FusionInfoForAEBObjList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: fusionobjlist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusionobjlist:\n";
    to_block_style_yaml(msg.fusionobjlist, out, indentation + 2);
  }

  // member: vehself
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehself:\n";
    to_block_style_yaml(msg.vehself, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FusionInfoForAEBObjList & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace deva_aeb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_aeb_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_aeb_msgs::msg::FusionInfoForAEBObjList & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::FusionInfoForAEBObjList & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::FusionInfoForAEBObjList>()
{
  return "deva_aeb_msgs::msg::FusionInfoForAEBObjList";
}

template<>
inline const char * name<deva_aeb_msgs::msg::FusionInfoForAEBObjList>()
{
  return "deva_aeb_msgs/msg/FusionInfoForAEBObjList";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::FusionInfoForAEBObjList>
  : std::integral_constant<bool, has_fixed_size<deva_aeb_msgs::msg::SFFusionObjList>::value && has_fixed_size<deva_aeb_msgs::msg::SFVehSelf>::value && has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::FusionInfoForAEBObjList>
  : std::integral_constant<bool, has_bounded_size<deva_aeb_msgs::msg::SFFusionObjList>::value && has_bounded_size<deva_aeb_msgs::msg::SFVehSelf>::value && has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_aeb_msgs::msg::FusionInfoForAEBObjList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ_LIST__TRAITS_HPP_
