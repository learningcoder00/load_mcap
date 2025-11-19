// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBOther.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OTHER__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OTHER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_other__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'roadppty'
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__traits.hpp"
// Member 'vehself'
#include "deva_aeb_msgs/msg/detail/sf_veh_self__traits.hpp"
// Member 'fusiontslist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__traits.hpp"
// Member 'fusiontfllist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_tfl_list__traits.hpp"
// Member 'fusionroadsignlist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__traits.hpp"
// Member 'fusiondiaglist'
#include "deva_aeb_msgs/msg/detail/sf_diag_list__traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FusionInfoForAEBOther & msg,
  std::ostream & out)
{
  out << "{";
  // member: roadppty
  {
    out << "roadppty: ";
    to_flow_style_yaml(msg.roadppty, out);
    out << ", ";
  }

  // member: vehself
  {
    out << "vehself: ";
    to_flow_style_yaml(msg.vehself, out);
    out << ", ";
  }

  // member: fusiontslist
  {
    out << "fusiontslist: ";
    to_flow_style_yaml(msg.fusiontslist, out);
    out << ", ";
  }

  // member: fusiontfllist
  {
    out << "fusiontfllist: ";
    to_flow_style_yaml(msg.fusiontfllist, out);
    out << ", ";
  }

  // member: fusionroadsignlist
  {
    out << "fusionroadsignlist: ";
    to_flow_style_yaml(msg.fusionroadsignlist, out);
    out << ", ";
  }

  // member: fusiondiaglist
  {
    out << "fusiondiaglist: ";
    to_flow_style_yaml(msg.fusiondiaglist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FusionInfoForAEBOther & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roadppty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roadppty:\n";
    to_block_style_yaml(msg.roadppty, out, indentation + 2);
  }

  // member: vehself
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehself:\n";
    to_block_style_yaml(msg.vehself, out, indentation + 2);
  }

  // member: fusiontslist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusiontslist:\n";
    to_block_style_yaml(msg.fusiontslist, out, indentation + 2);
  }

  // member: fusiontfllist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusiontfllist:\n";
    to_block_style_yaml(msg.fusiontfllist, out, indentation + 2);
  }

  // member: fusionroadsignlist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusionroadsignlist:\n";
    to_block_style_yaml(msg.fusionroadsignlist, out, indentation + 2);
  }

  // member: fusiondiaglist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusiondiaglist:\n";
    to_block_style_yaml(msg.fusiondiaglist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FusionInfoForAEBOther & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::FusionInfoForAEBOther & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::FusionInfoForAEBOther & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::FusionInfoForAEBOther>()
{
  return "deva_aeb_msgs::msg::FusionInfoForAEBOther";
}

template<>
inline const char * name<deva_aeb_msgs::msg::FusionInfoForAEBOther>()
{
  return "deva_aeb_msgs/msg/FusionInfoForAEBOther";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::FusionInfoForAEBOther>
  : std::integral_constant<bool, has_fixed_size<deva_aeb_msgs::msg::SFDiagList>::value && has_fixed_size<deva_aeb_msgs::msg::SFFusionRoadSignList>::value && has_fixed_size<deva_aeb_msgs::msg::SFFusionTFLList>::value && has_fixed_size<deva_aeb_msgs::msg::SFFusionTSList>::value && has_fixed_size<deva_aeb_msgs::msg::SFRoadPpty>::value && has_fixed_size<deva_aeb_msgs::msg::SFVehSelf>::value> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::FusionInfoForAEBOther>
  : std::integral_constant<bool, has_bounded_size<deva_aeb_msgs::msg::SFDiagList>::value && has_bounded_size<deva_aeb_msgs::msg::SFFusionRoadSignList>::value && has_bounded_size<deva_aeb_msgs::msg::SFFusionTFLList>::value && has_bounded_size<deva_aeb_msgs::msg::SFFusionTSList>::value && has_bounded_size<deva_aeb_msgs::msg::SFRoadPpty>::value && has_bounded_size<deva_aeb_msgs::msg::SFVehSelf>::value> {};

template<>
struct is_message<deva_aeb_msgs::msg::FusionInfoForAEBOther>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OTHER__TRAITS_HPP_
