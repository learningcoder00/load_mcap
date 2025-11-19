// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/APPToStmDataStruct.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_TO_STM_DATA_STRUCT__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_TO_STM_DATA_STRUCT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const APPToStmDataStruct & msg,
  std::ostream & out)
{
  out << "{";
  // member: app_to_hpa_ctrl_cmd
  {
    out << "app_to_hpa_ctrl_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.app_to_hpa_ctrl_cmd, out);
    out << ", ";
  }

  // member: mob_dev_avp_req
  {
    out << "mob_dev_avp_req: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_avp_req, out);
    out << ", ";
  }

  // member: on_bd_chrgr_hndl_sts1
  {
    out << "on_bd_chrgr_hndl_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.on_bd_chrgr_hndl_sts1, out);
    out << ", ";
  }

  // member: dc_chrgn_hndl_sts
  {
    out << "dc_chrgn_hndl_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.dc_chrgn_hndl_sts, out);
    out << ", ";
  }

  // member: occupy_mon_sts_drvr_sts
  {
    out << "occupy_mon_sts_drvr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.occupy_mon_sts_drvr_sts, out);
    out << ", ";
  }

  // member: alrm_sts_alrm_failr
  {
    out << "alrm_sts_alrm_failr: ";
    rosidl_generator_traits::value_to_yaml(msg.alrm_sts_alrm_failr, out);
    out << ", ";
  }

  // member: alrm_sts_alrm_st
  {
    out << "alrm_sts_alrm_st: ";
    rosidl_generator_traits::value_to_yaml(msg.alrm_sts_alrm_st, out);
    out << ", ";
  }

  // member: alrm_sts_alrm_trg_src
  {
    out << "alrm_sts_alrm_trg_src: ";
    rosidl_generator_traits::value_to_yaml(msg.alrm_sts_alrm_trg_src, out);
    out << ", ";
  }

  // member: alrm_sts_snsr_incln_failr
  {
    out << "alrm_sts_snsr_incln_failr: ";
    rosidl_generator_traits::value_to_yaml(msg.alrm_sts_snsr_incln_failr, out);
    out << ", ";
  }

  // member: alrm_sts_snsr_intr_scanr_failr
  {
    out << "alrm_sts_snsr_intr_scanr_failr: ";
    rosidl_generator_traits::value_to_yaml(msg.alrm_sts_snsr_intr_scanr_failr, out);
    out << ", ";
  }

  // member: telephone_sts
  {
    out << "telephone_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.telephone_sts, out);
    out << ", ";
  }

  // member: tr_lock_sts
  {
    out << "tr_lock_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.tr_lock_sts, out);
    out << ", ";
  }

  // member: trsm_park_lockd_trsm_park_lockd
  {
    out << "trsm_park_lockd_trsm_park_lockd: ";
    rosidl_generator_traits::value_to_yaml(msg.trsm_park_lockd_trsm_park_lockd, out);
    out << ", ";
  }

  // member: twli_bri_raw_qf
  {
    out << "twli_bri_raw_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.twli_bri_raw_qf, out);
    out << ", ";
  }

  // member: twli_bri_raw_twli_bri_raw
  {
    out << "twli_bri_raw_twli_bri_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.twli_bri_raw_twli_bri_raw, out);
    out << ", ";
  }

  // member: rev
  {
    if (msg.rev.size() == 0) {
      out << "rev: []";
    } else {
      out << "rev: [";
      size_t pending_items = msg.rev.size();
      for (auto item : msg.rev) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const APPToStmDataStruct & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: app_to_hpa_ctrl_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "app_to_hpa_ctrl_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.app_to_hpa_ctrl_cmd, out);
    out << "\n";
  }

  // member: mob_dev_avp_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_avp_req: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_avp_req, out);
    out << "\n";
  }

  // member: on_bd_chrgr_hndl_sts1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on_bd_chrgr_hndl_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.on_bd_chrgr_hndl_sts1, out);
    out << "\n";
  }

  // member: dc_chrgn_hndl_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dc_chrgn_hndl_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.dc_chrgn_hndl_sts, out);
    out << "\n";
  }

  // member: occupy_mon_sts_drvr_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "occupy_mon_sts_drvr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.occupy_mon_sts_drvr_sts, out);
    out << "\n";
  }

  // member: alrm_sts_alrm_failr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alrm_sts_alrm_failr: ";
    rosidl_generator_traits::value_to_yaml(msg.alrm_sts_alrm_failr, out);
    out << "\n";
  }

  // member: alrm_sts_alrm_st
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alrm_sts_alrm_st: ";
    rosidl_generator_traits::value_to_yaml(msg.alrm_sts_alrm_st, out);
    out << "\n";
  }

  // member: alrm_sts_alrm_trg_src
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alrm_sts_alrm_trg_src: ";
    rosidl_generator_traits::value_to_yaml(msg.alrm_sts_alrm_trg_src, out);
    out << "\n";
  }

  // member: alrm_sts_snsr_incln_failr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alrm_sts_snsr_incln_failr: ";
    rosidl_generator_traits::value_to_yaml(msg.alrm_sts_snsr_incln_failr, out);
    out << "\n";
  }

  // member: alrm_sts_snsr_intr_scanr_failr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alrm_sts_snsr_intr_scanr_failr: ";
    rosidl_generator_traits::value_to_yaml(msg.alrm_sts_snsr_intr_scanr_failr, out);
    out << "\n";
  }

  // member: telephone_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "telephone_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.telephone_sts, out);
    out << "\n";
  }

  // member: tr_lock_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tr_lock_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.tr_lock_sts, out);
    out << "\n";
  }

  // member: trsm_park_lockd_trsm_park_lockd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trsm_park_lockd_trsm_park_lockd: ";
    rosidl_generator_traits::value_to_yaml(msg.trsm_park_lockd_trsm_park_lockd, out);
    out << "\n";
  }

  // member: twli_bri_raw_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twli_bri_raw_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.twli_bri_raw_qf, out);
    out << "\n";
  }

  // member: twli_bri_raw_twli_bri_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twli_bri_raw_twli_bri_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.twli_bri_raw_twli_bri_raw, out);
    out << "\n";
  }

  // member: rev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rev.size() == 0) {
      out << "rev: []\n";
    } else {
      out << "rev:\n";
      for (auto item : msg.rev) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const APPToStmDataStruct & msg, bool use_flow_style = false)
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

}  // namespace deva_function_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_function_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_function_msgs::msg::APPToStmDataStruct & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::APPToStmDataStruct & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::APPToStmDataStruct>()
{
  return "deva_function_msgs::msg::APPToStmDataStruct";
}

template<>
inline const char * name<deva_function_msgs::msg::APPToStmDataStruct>()
{
  return "deva_function_msgs/msg/APPToStmDataStruct";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::APPToStmDataStruct>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::APPToStmDataStruct>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_function_msgs::msg::APPToStmDataStruct>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_TO_STM_DATA_STRUCT__TRAITS_HPP_
