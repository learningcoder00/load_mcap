# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/StateMachineData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'function_status'
# Member 'smfault_level'
# Member 'rev'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StateMachineData(type):
    """Metaclass of message 'StateMachineData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_function_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_function_msgs.msg.StateMachineData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state_machine_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state_machine_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state_machine_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state_machine_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state_machine_data

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StateMachineData(metaclass=Metaclass_StateMachineData):
    """Message class 'StateMachineData'."""

    __slots__ = [
        '_header',
        '_three_d_angle_req',
        '_tsm_version',
        '_apa_version',
        '_avm_version',
        '_hmi_version',
        '_drvr_assc_sys_sts',
        '_apa_sub_sys_sts',
        '_last_prk_type',
        '_monr_sys_sts',
        '_obstcl_trig_resp',
        '_pla_mod_sts_resp',
        '_swt_disp_on_and_off_sts_resp',
        '_thr_d_touring_view_resp',
        '_turn_entry_ag_wide_vis_resp',
        '_veh_mdl_clr_resp',
        '_visn_ag_extn_resp',
        '_visn_img_disp_mod_resp',
        '_drvr_assc_sys_disp',
        '_prkg_aux_info_disp',
        '_prkg_back_disp',
        '_prkg_btn_sts_disp_group_cancel',
        '_prkg_btn_sts_disp_group_prkg_in',
        '_prkg_btn_sts_disp_group_prkg_out',
        '_prkg_fct_di_disp',
        '_prkg_fct_di_mod_resp',
        '_prkg_progs_disp',
        '_prkg_stop_aud_warn_req',
        '_back_push_apa_info_req',
        '_voice_prompt_req',
        '_prkg_img_disp_req',
        '_park_in_or_out',
        '_shakehand_rq',
        '_park_enter_req',
        '_park_exit_req',
        '_park_function',
        '_prkg_fct_vmm_mod_req',
        '_eng_runng_req_by_park_assi1',
        '_apa_sts_flag',
        '_aut_actv_prkg_fct_swt_resp',
        '_aut_prkg_voice_swt_resp',
        '_aut_prkg_voice_typ_resp',
        '_img_sn_sr_cal_sts',
        '_prkg_dock_dis_req',
        '_pdc_ctrl_rsn',
        '_system_fault',
        '_prkg_lock_req',
        '_mirr_open_cls_req',
        '_mob_dev_rpa_req_resp',
        '_prkg_mod_incln',
        '_prkg_assi_sys_rem_prkg_sts',
        '_veh_win_sun_roof_cls_req',
        '_veh_prkg_lock_theft_req',
        '_rpa_version',
        '_prkg_usg_drv_mod_tran_req',
        '_mob_dev_rpa_sts_uint8',
        '_prkg_proc_dst_disp',
        '_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1',
        '_mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts',
        '_mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts',
        '_rem_straight_prkg_assi_seln_req_resp',
        '_rem_str_sts',
        '_tsm_req_rpa_on',
        '_last_parkg_type_con_rq',
        '_forward_distance',
        '_backward_distance',
        '_total_distance',
        '_apa_self_park_or_out_version',
        '_plan_first_sucs',
        '_disp_interface_chg_req',
        '_prkg_fcts_swt_sts_disp',
        '_avm_drvr_assc_sys_disp',
        '_avm_prkg_fct_di_disp',
        '_prkg_btn_sts_dispset',
        '_drvr_assc_sys_disp_list',
        '_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5',
        '_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6',
        '_prkg_fct_test_pnd_req',
        '_sm_hpa_version',
        '_sm_hpa_state_ind',
        '_sm_hpa_state',
        '_sm_hpa_req_apa',
        '_sm_hpa_proc_prompt_req',
        '_sm_hpa_quit_reason',
        '_valt_prkg_failr_notif',
        '_home_prkg_voice_prompt_req',
        '_sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req',
        '_sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1',
        '_valt_prkg_reminder',
        '_veh_home_prkg_sys_sts',
        '_prkg_amb_li_req',
        '_veh_prkg_to_horn',
        '_prkg_accr_ovrdn_ctrl_reqgrp',
        '_hpa_st_code_to_sm',
        '_lo_spd_and_trk_bck_sys_sts',
        '_sm_rem_ctrl_veh_sts',
        '_sm_rem_str_sts',
        '_sm_rcv_mod_incln',
        '_sm_mob_dev_rcv_req_resp',
        '_sm_mob_dev_rcv_sts',
        '_sm_rcv_version',
        '_lgt_control_request',
        '_lat_control_request',
        '_mai_sts',
        '_prkg_emgy_brk_sys_sts',
        '_prkg_btn_sts_disp_float',
        '_prkg_active_push',
        '_prkg_fct_di_mod',
        '_no_touching_for_avm_req',
        '_aut_prkg_in_btn_sts_from_rpa',
        '_asy_a_lgt_sts_asy_a_lgt_sts',
        '_asy_stand_still_req_for_cmft',
        '_drv_off_req_for_lgt_ctrl',
        '_stop_req_of_lgt_ctrl_for_prpsn',
        '_strt_req_of_lgt_ctrl_for_prpsn',
        '_avl_sts_for_long_aut_drv',
        '_hwa_lat_ctrl_sts',
        '_ad_ctrl_mode',
        '_asy_lane_chg_assist_sts',
        '_asy_noa_sts',
        '_aut_lane_chg_sts',
        '_asy_req_lane_chg',
        '_sm_state',
        '_function_status',
        '_hwa_odd_off',
        '_smfault_level',
        '_prkg_camera_store_resp',
        '_rev',
        '_dpa_mode_broadcast',
        '_dpa_btn_sts',
        '_sm_fct_err_code2_hmi',
        '_view_layout_req',
        '_cust_btn_sts',
        '_exit_cust_btn_sts',
        '_frnt_and_re_prkg_in_btn_sts',
        '_mai_version',
        '_peb_version',
        '_lo_spd_and_trk_bck_sub_sts',
        '_fill_light_req',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'three_d_angle_req': 'float',
        'tsm_version': 'uint32',
        'apa_version': 'uint32',
        'avm_version': 'uint32',
        'hmi_version': 'uint32',
        'drvr_assc_sys_sts': 'uint8',
        'apa_sub_sys_sts': 'uint8',
        'last_prk_type': 'uint8',
        'monr_sys_sts': 'uint8',
        'obstcl_trig_resp': 'uint8',
        'pla_mod_sts_resp': 'uint8',
        'swt_disp_on_and_off_sts_resp': 'uint8',
        'thr_d_touring_view_resp': 'uint8',
        'turn_entry_ag_wide_vis_resp': 'uint8',
        'veh_mdl_clr_resp': 'uint8',
        'visn_ag_extn_resp': 'uint8',
        'visn_img_disp_mod_resp': 'uint8',
        'drvr_assc_sys_disp': 'uint8',
        'prkg_aux_info_disp': 'uint8',
        'prkg_back_disp': 'uint8',
        'prkg_btn_sts_disp_group_cancel': 'uint8',
        'prkg_btn_sts_disp_group_prkg_in': 'uint8',
        'prkg_btn_sts_disp_group_prkg_out': 'uint8',
        'prkg_fct_di_disp': 'uint8',
        'prkg_fct_di_mod_resp': 'uint8',
        'prkg_progs_disp': 'uint8',
        'prkg_stop_aud_warn_req': 'boolean',
        'back_push_apa_info_req': 'uint8',
        'voice_prompt_req': 'uint8',
        'prkg_img_disp_req': 'uint8',
        'park_in_or_out': 'uint8',
        'shakehand_rq': 'uint8',
        'park_enter_req': 'boolean',
        'park_exit_req': 'boolean',
        'park_function': 'uint8',
        'prkg_fct_vmm_mod_req': 'boolean',
        'eng_runng_req_by_park_assi1': 'uint8',
        'apa_sts_flag': 'uint8',
        'aut_actv_prkg_fct_swt_resp': 'uint8',
        'aut_prkg_voice_swt_resp': 'uint8',
        'aut_prkg_voice_typ_resp': 'uint8',
        'img_sn_sr_cal_sts': 'boolean',
        'prkg_dock_dis_req': 'uint8',
        'pdc_ctrl_rsn': 'uint8',
        'system_fault': 'uint32',
        'prkg_lock_req': 'uint8',
        'mirr_open_cls_req': 'uint8',
        'mob_dev_rpa_req_resp': 'uint8',
        'prkg_mod_incln': 'uint8',
        'prkg_assi_sys_rem_prkg_sts': 'uint8',
        'veh_win_sun_roof_cls_req': 'uint8',
        'veh_prkg_lock_theft_req': 'uint8',
        'rpa_version': 'uint32',
        'prkg_usg_drv_mod_tran_req': 'uint8',
        'mob_dev_rpa_sts_uint8': 'uint8',
        'prkg_proc_dst_disp': 'float',
        'prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1': 'uint8',
        'mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts': 'uint8',
        'mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts': 'uint8',
        'rem_straight_prkg_assi_seln_req_resp': 'float',
        'rem_str_sts': 'uint8',
        'tsm_req_rpa_on': 'uint8',
        'last_parkg_type_con_rq': 'uint8',
        'forward_distance': 'float',
        'backward_distance': 'float',
        'total_distance': 'float',
        'apa_self_park_or_out_version': 'uint32',
        'plan_first_sucs': 'uint8',
        'disp_interface_chg_req': 'uint8',
        'prkg_fcts_swt_sts_disp': 'uint8',
        'avm_drvr_assc_sys_disp': 'uint8',
        'avm_prkg_fct_di_disp': 'uint8',
        'prkg_btn_sts_dispset': 'uint8',
        'drvr_assc_sys_disp_list': 'uint8',
        'prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5': 'uint8',
        'prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6': 'uint8',
        'prkg_fct_test_pnd_req': 'uint32',
        'sm_hpa_version': 'uint32',
        'sm_hpa_state_ind': 'uint8',
        'sm_hpa_state': 'uint8',
        'sm_hpa_req_apa': 'uint8',
        'sm_hpa_proc_prompt_req': 'uint8',
        'sm_hpa_quit_reason': 'uint8',
        'valt_prkg_failr_notif': 'uint8',
        'home_prkg_voice_prompt_req': 'uint8',
        'sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req': 'uint8',
        'sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1': 'uint8',
        'valt_prkg_reminder': 'uint8',
        'veh_home_prkg_sys_sts': 'uint8',
        'prkg_amb_li_req': 'uint8',
        'veh_prkg_to_horn': 'uint8',
        'prkg_accr_ovrdn_ctrl_reqgrp': 'uint8',
        'hpa_st_code_to_sm': 'uint8',
        'lo_spd_and_trk_bck_sys_sts': 'uint8',
        'sm_rem_ctrl_veh_sts': 'uint8',
        'sm_rem_str_sts': 'uint8',
        'sm_rcv_mod_incln': 'uint8',
        'sm_mob_dev_rcv_req_resp': 'uint8',
        'sm_mob_dev_rcv_sts': 'uint8',
        'sm_rcv_version': 'uint32',
        'lgt_control_request': 'uint8',
        'lat_control_request': 'uint8',
        'mai_sts': 'uint8',
        'prkg_emgy_brk_sys_sts': 'uint8',
        'prkg_btn_sts_disp_float': 'uint8',
        'prkg_active_push': 'uint8',
        'prkg_fct_di_mod': 'uint8',
        'no_touching_for_avm_req': 'uint8',
        'aut_prkg_in_btn_sts_from_rpa': 'uint8',
        'asy_a_lgt_sts_asy_a_lgt_sts': 'uint8',
        'asy_stand_still_req_for_cmft': 'uint8',
        'drv_off_req_for_lgt_ctrl': 'uint8',
        'stop_req_of_lgt_ctrl_for_prpsn': 'uint8',
        'strt_req_of_lgt_ctrl_for_prpsn': 'uint8',
        'avl_sts_for_long_aut_drv': 'uint8',
        'hwa_lat_ctrl_sts': 'uint8',
        'ad_ctrl_mode': 'uint8',
        'asy_lane_chg_assist_sts': 'uint8',
        'asy_noa_sts': 'uint8',
        'aut_lane_chg_sts': 'uint8',
        'asy_req_lane_chg': 'uint8',
        'sm_state': 'uint8',
        'function_status': 'uint8[32]',
        'hwa_odd_off': 'uint8',
        'smfault_level': 'uint8[32]',
        'prkg_camera_store_resp': 'uint8',
        'rev': 'uint8[8]',
        'dpa_mode_broadcast': 'uint8',
        'dpa_btn_sts': 'uint8',
        'sm_fct_err_code2_hmi': 'uint16',
        'view_layout_req': 'uint8',
        'cust_btn_sts': 'uint8',
        'exit_cust_btn_sts': 'uint8',
        'frnt_and_re_prkg_in_btn_sts': 'uint8',
        'mai_version': 'uint8',
        'peb_version': 'uint8',
        'lo_spd_and_trk_bck_sub_sts': 'uint8',
        'fill_light_req': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 32),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 32),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 8),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.three_d_angle_req = kwargs.get('three_d_angle_req', float())
        self.tsm_version = kwargs.get('tsm_version', int())
        self.apa_version = kwargs.get('apa_version', int())
        self.avm_version = kwargs.get('avm_version', int())
        self.hmi_version = kwargs.get('hmi_version', int())
        self.drvr_assc_sys_sts = kwargs.get('drvr_assc_sys_sts', int())
        self.apa_sub_sys_sts = kwargs.get('apa_sub_sys_sts', int())
        self.last_prk_type = kwargs.get('last_prk_type', int())
        self.monr_sys_sts = kwargs.get('monr_sys_sts', int())
        self.obstcl_trig_resp = kwargs.get('obstcl_trig_resp', int())
        self.pla_mod_sts_resp = kwargs.get('pla_mod_sts_resp', int())
        self.swt_disp_on_and_off_sts_resp = kwargs.get('swt_disp_on_and_off_sts_resp', int())
        self.thr_d_touring_view_resp = kwargs.get('thr_d_touring_view_resp', int())
        self.turn_entry_ag_wide_vis_resp = kwargs.get('turn_entry_ag_wide_vis_resp', int())
        self.veh_mdl_clr_resp = kwargs.get('veh_mdl_clr_resp', int())
        self.visn_ag_extn_resp = kwargs.get('visn_ag_extn_resp', int())
        self.visn_img_disp_mod_resp = kwargs.get('visn_img_disp_mod_resp', int())
        self.drvr_assc_sys_disp = kwargs.get('drvr_assc_sys_disp', int())
        self.prkg_aux_info_disp = kwargs.get('prkg_aux_info_disp', int())
        self.prkg_back_disp = kwargs.get('prkg_back_disp', int())
        self.prkg_btn_sts_disp_group_cancel = kwargs.get('prkg_btn_sts_disp_group_cancel', int())
        self.prkg_btn_sts_disp_group_prkg_in = kwargs.get('prkg_btn_sts_disp_group_prkg_in', int())
        self.prkg_btn_sts_disp_group_prkg_out = kwargs.get('prkg_btn_sts_disp_group_prkg_out', int())
        self.prkg_fct_di_disp = kwargs.get('prkg_fct_di_disp', int())
        self.prkg_fct_di_mod_resp = kwargs.get('prkg_fct_di_mod_resp', int())
        self.prkg_progs_disp = kwargs.get('prkg_progs_disp', int())
        self.prkg_stop_aud_warn_req = kwargs.get('prkg_stop_aud_warn_req', bool())
        self.back_push_apa_info_req = kwargs.get('back_push_apa_info_req', int())
        self.voice_prompt_req = kwargs.get('voice_prompt_req', int())
        self.prkg_img_disp_req = kwargs.get('prkg_img_disp_req', int())
        self.park_in_or_out = kwargs.get('park_in_or_out', int())
        self.shakehand_rq = kwargs.get('shakehand_rq', int())
        self.park_enter_req = kwargs.get('park_enter_req', bool())
        self.park_exit_req = kwargs.get('park_exit_req', bool())
        self.park_function = kwargs.get('park_function', int())
        self.prkg_fct_vmm_mod_req = kwargs.get('prkg_fct_vmm_mod_req', bool())
        self.eng_runng_req_by_park_assi1 = kwargs.get('eng_runng_req_by_park_assi1', int())
        self.apa_sts_flag = kwargs.get('apa_sts_flag', int())
        self.aut_actv_prkg_fct_swt_resp = kwargs.get('aut_actv_prkg_fct_swt_resp', int())
        self.aut_prkg_voice_swt_resp = kwargs.get('aut_prkg_voice_swt_resp', int())
        self.aut_prkg_voice_typ_resp = kwargs.get('aut_prkg_voice_typ_resp', int())
        self.img_sn_sr_cal_sts = kwargs.get('img_sn_sr_cal_sts', bool())
        self.prkg_dock_dis_req = kwargs.get('prkg_dock_dis_req', int())
        self.pdc_ctrl_rsn = kwargs.get('pdc_ctrl_rsn', int())
        self.system_fault = kwargs.get('system_fault', int())
        self.prkg_lock_req = kwargs.get('prkg_lock_req', int())
        self.mirr_open_cls_req = kwargs.get('mirr_open_cls_req', int())
        self.mob_dev_rpa_req_resp = kwargs.get('mob_dev_rpa_req_resp', int())
        self.prkg_mod_incln = kwargs.get('prkg_mod_incln', int())
        self.prkg_assi_sys_rem_prkg_sts = kwargs.get('prkg_assi_sys_rem_prkg_sts', int())
        self.veh_win_sun_roof_cls_req = kwargs.get('veh_win_sun_roof_cls_req', int())
        self.veh_prkg_lock_theft_req = kwargs.get('veh_prkg_lock_theft_req', int())
        self.rpa_version = kwargs.get('rpa_version', int())
        self.prkg_usg_drv_mod_tran_req = kwargs.get('prkg_usg_drv_mod_tran_req', int())
        self.mob_dev_rpa_sts_uint8 = kwargs.get('mob_dev_rpa_sts_uint8', int())
        self.prkg_proc_dst_disp = kwargs.get('prkg_proc_dst_disp', float())
        self.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1 = kwargs.get('prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1', int())
        self.mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts = kwargs.get('mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts', int())
        self.mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts = kwargs.get('mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts', int())
        self.rem_straight_prkg_assi_seln_req_resp = kwargs.get('rem_straight_prkg_assi_seln_req_resp', float())
        self.rem_str_sts = kwargs.get('rem_str_sts', int())
        self.tsm_req_rpa_on = kwargs.get('tsm_req_rpa_on', int())
        self.last_parkg_type_con_rq = kwargs.get('last_parkg_type_con_rq', int())
        self.forward_distance = kwargs.get('forward_distance', float())
        self.backward_distance = kwargs.get('backward_distance', float())
        self.total_distance = kwargs.get('total_distance', float())
        self.apa_self_park_or_out_version = kwargs.get('apa_self_park_or_out_version', int())
        self.plan_first_sucs = kwargs.get('plan_first_sucs', int())
        self.disp_interface_chg_req = kwargs.get('disp_interface_chg_req', int())
        self.prkg_fcts_swt_sts_disp = kwargs.get('prkg_fcts_swt_sts_disp', int())
        self.avm_drvr_assc_sys_disp = kwargs.get('avm_drvr_assc_sys_disp', int())
        self.avm_prkg_fct_di_disp = kwargs.get('avm_prkg_fct_di_disp', int())
        self.prkg_btn_sts_dispset = kwargs.get('prkg_btn_sts_dispset', int())
        self.drvr_assc_sys_disp_list = kwargs.get('drvr_assc_sys_disp_list', int())
        self.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5 = kwargs.get('prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5', int())
        self.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6 = kwargs.get('prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6', int())
        self.prkg_fct_test_pnd_req = kwargs.get('prkg_fct_test_pnd_req', int())
        self.sm_hpa_version = kwargs.get('sm_hpa_version', int())
        self.sm_hpa_state_ind = kwargs.get('sm_hpa_state_ind', int())
        self.sm_hpa_state = kwargs.get('sm_hpa_state', int())
        self.sm_hpa_req_apa = kwargs.get('sm_hpa_req_apa', int())
        self.sm_hpa_proc_prompt_req = kwargs.get('sm_hpa_proc_prompt_req', int())
        self.sm_hpa_quit_reason = kwargs.get('sm_hpa_quit_reason', int())
        self.valt_prkg_failr_notif = kwargs.get('valt_prkg_failr_notif', int())
        self.home_prkg_voice_prompt_req = kwargs.get('home_prkg_voice_prompt_req', int())
        self.sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req = kwargs.get('sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req', int())
        self.sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1 = kwargs.get('sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1', int())
        self.valt_prkg_reminder = kwargs.get('valt_prkg_reminder', int())
        self.veh_home_prkg_sys_sts = kwargs.get('veh_home_prkg_sys_sts', int())
        self.prkg_amb_li_req = kwargs.get('prkg_amb_li_req', int())
        self.veh_prkg_to_horn = kwargs.get('veh_prkg_to_horn', int())
        self.prkg_accr_ovrdn_ctrl_reqgrp = kwargs.get('prkg_accr_ovrdn_ctrl_reqgrp', int())
        self.hpa_st_code_to_sm = kwargs.get('hpa_st_code_to_sm', int())
        self.lo_spd_and_trk_bck_sys_sts = kwargs.get('lo_spd_and_trk_bck_sys_sts', int())
        self.sm_rem_ctrl_veh_sts = kwargs.get('sm_rem_ctrl_veh_sts', int())
        self.sm_rem_str_sts = kwargs.get('sm_rem_str_sts', int())
        self.sm_rcv_mod_incln = kwargs.get('sm_rcv_mod_incln', int())
        self.sm_mob_dev_rcv_req_resp = kwargs.get('sm_mob_dev_rcv_req_resp', int())
        self.sm_mob_dev_rcv_sts = kwargs.get('sm_mob_dev_rcv_sts', int())
        self.sm_rcv_version = kwargs.get('sm_rcv_version', int())
        self.lgt_control_request = kwargs.get('lgt_control_request', int())
        self.lat_control_request = kwargs.get('lat_control_request', int())
        self.mai_sts = kwargs.get('mai_sts', int())
        self.prkg_emgy_brk_sys_sts = kwargs.get('prkg_emgy_brk_sys_sts', int())
        self.prkg_btn_sts_disp_float = kwargs.get('prkg_btn_sts_disp_float', int())
        self.prkg_active_push = kwargs.get('prkg_active_push', int())
        self.prkg_fct_di_mod = kwargs.get('prkg_fct_di_mod', int())
        self.no_touching_for_avm_req = kwargs.get('no_touching_for_avm_req', int())
        self.aut_prkg_in_btn_sts_from_rpa = kwargs.get('aut_prkg_in_btn_sts_from_rpa', int())
        self.asy_a_lgt_sts_asy_a_lgt_sts = kwargs.get('asy_a_lgt_sts_asy_a_lgt_sts', int())
        self.asy_stand_still_req_for_cmft = kwargs.get('asy_stand_still_req_for_cmft', int())
        self.drv_off_req_for_lgt_ctrl = kwargs.get('drv_off_req_for_lgt_ctrl', int())
        self.stop_req_of_lgt_ctrl_for_prpsn = kwargs.get('stop_req_of_lgt_ctrl_for_prpsn', int())
        self.strt_req_of_lgt_ctrl_for_prpsn = kwargs.get('strt_req_of_lgt_ctrl_for_prpsn', int())
        self.avl_sts_for_long_aut_drv = kwargs.get('avl_sts_for_long_aut_drv', int())
        self.hwa_lat_ctrl_sts = kwargs.get('hwa_lat_ctrl_sts', int())
        self.ad_ctrl_mode = kwargs.get('ad_ctrl_mode', int())
        self.asy_lane_chg_assist_sts = kwargs.get('asy_lane_chg_assist_sts', int())
        self.asy_noa_sts = kwargs.get('asy_noa_sts', int())
        self.aut_lane_chg_sts = kwargs.get('aut_lane_chg_sts', int())
        self.asy_req_lane_chg = kwargs.get('asy_req_lane_chg', int())
        self.sm_state = kwargs.get('sm_state', int())
        if 'function_status' not in kwargs:
            self.function_status = numpy.zeros(32, dtype=numpy.uint8)
        else:
            self.function_status = kwargs.get('function_status')
        self.hwa_odd_off = kwargs.get('hwa_odd_off', int())
        if 'smfault_level' not in kwargs:
            self.smfault_level = numpy.zeros(32, dtype=numpy.uint8)
        else:
            self.smfault_level = kwargs.get('smfault_level')
        self.prkg_camera_store_resp = kwargs.get('prkg_camera_store_resp', int())
        if 'rev' not in kwargs:
            self.rev = numpy.zeros(8, dtype=numpy.uint8)
        else:
            self.rev = kwargs.get('rev')
        self.dpa_mode_broadcast = kwargs.get('dpa_mode_broadcast', int())
        self.dpa_btn_sts = kwargs.get('dpa_btn_sts', int())
        self.sm_fct_err_code2_hmi = kwargs.get('sm_fct_err_code2_hmi', int())
        self.view_layout_req = kwargs.get('view_layout_req', int())
        self.cust_btn_sts = kwargs.get('cust_btn_sts', int())
        self.exit_cust_btn_sts = kwargs.get('exit_cust_btn_sts', int())
        self.frnt_and_re_prkg_in_btn_sts = kwargs.get('frnt_and_re_prkg_in_btn_sts', int())
        self.mai_version = kwargs.get('mai_version', int())
        self.peb_version = kwargs.get('peb_version', int())
        self.lo_spd_and_trk_bck_sub_sts = kwargs.get('lo_spd_and_trk_bck_sub_sts', int())
        self.fill_light_req = kwargs.get('fill_light_req', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.three_d_angle_req != other.three_d_angle_req:
            return False
        if self.tsm_version != other.tsm_version:
            return False
        if self.apa_version != other.apa_version:
            return False
        if self.avm_version != other.avm_version:
            return False
        if self.hmi_version != other.hmi_version:
            return False
        if self.drvr_assc_sys_sts != other.drvr_assc_sys_sts:
            return False
        if self.apa_sub_sys_sts != other.apa_sub_sys_sts:
            return False
        if self.last_prk_type != other.last_prk_type:
            return False
        if self.monr_sys_sts != other.monr_sys_sts:
            return False
        if self.obstcl_trig_resp != other.obstcl_trig_resp:
            return False
        if self.pla_mod_sts_resp != other.pla_mod_sts_resp:
            return False
        if self.swt_disp_on_and_off_sts_resp != other.swt_disp_on_and_off_sts_resp:
            return False
        if self.thr_d_touring_view_resp != other.thr_d_touring_view_resp:
            return False
        if self.turn_entry_ag_wide_vis_resp != other.turn_entry_ag_wide_vis_resp:
            return False
        if self.veh_mdl_clr_resp != other.veh_mdl_clr_resp:
            return False
        if self.visn_ag_extn_resp != other.visn_ag_extn_resp:
            return False
        if self.visn_img_disp_mod_resp != other.visn_img_disp_mod_resp:
            return False
        if self.drvr_assc_sys_disp != other.drvr_assc_sys_disp:
            return False
        if self.prkg_aux_info_disp != other.prkg_aux_info_disp:
            return False
        if self.prkg_back_disp != other.prkg_back_disp:
            return False
        if self.prkg_btn_sts_disp_group_cancel != other.prkg_btn_sts_disp_group_cancel:
            return False
        if self.prkg_btn_sts_disp_group_prkg_in != other.prkg_btn_sts_disp_group_prkg_in:
            return False
        if self.prkg_btn_sts_disp_group_prkg_out != other.prkg_btn_sts_disp_group_prkg_out:
            return False
        if self.prkg_fct_di_disp != other.prkg_fct_di_disp:
            return False
        if self.prkg_fct_di_mod_resp != other.prkg_fct_di_mod_resp:
            return False
        if self.prkg_progs_disp != other.prkg_progs_disp:
            return False
        if self.prkg_stop_aud_warn_req != other.prkg_stop_aud_warn_req:
            return False
        if self.back_push_apa_info_req != other.back_push_apa_info_req:
            return False
        if self.voice_prompt_req != other.voice_prompt_req:
            return False
        if self.prkg_img_disp_req != other.prkg_img_disp_req:
            return False
        if self.park_in_or_out != other.park_in_or_out:
            return False
        if self.shakehand_rq != other.shakehand_rq:
            return False
        if self.park_enter_req != other.park_enter_req:
            return False
        if self.park_exit_req != other.park_exit_req:
            return False
        if self.park_function != other.park_function:
            return False
        if self.prkg_fct_vmm_mod_req != other.prkg_fct_vmm_mod_req:
            return False
        if self.eng_runng_req_by_park_assi1 != other.eng_runng_req_by_park_assi1:
            return False
        if self.apa_sts_flag != other.apa_sts_flag:
            return False
        if self.aut_actv_prkg_fct_swt_resp != other.aut_actv_prkg_fct_swt_resp:
            return False
        if self.aut_prkg_voice_swt_resp != other.aut_prkg_voice_swt_resp:
            return False
        if self.aut_prkg_voice_typ_resp != other.aut_prkg_voice_typ_resp:
            return False
        if self.img_sn_sr_cal_sts != other.img_sn_sr_cal_sts:
            return False
        if self.prkg_dock_dis_req != other.prkg_dock_dis_req:
            return False
        if self.pdc_ctrl_rsn != other.pdc_ctrl_rsn:
            return False
        if self.system_fault != other.system_fault:
            return False
        if self.prkg_lock_req != other.prkg_lock_req:
            return False
        if self.mirr_open_cls_req != other.mirr_open_cls_req:
            return False
        if self.mob_dev_rpa_req_resp != other.mob_dev_rpa_req_resp:
            return False
        if self.prkg_mod_incln != other.prkg_mod_incln:
            return False
        if self.prkg_assi_sys_rem_prkg_sts != other.prkg_assi_sys_rem_prkg_sts:
            return False
        if self.veh_win_sun_roof_cls_req != other.veh_win_sun_roof_cls_req:
            return False
        if self.veh_prkg_lock_theft_req != other.veh_prkg_lock_theft_req:
            return False
        if self.rpa_version != other.rpa_version:
            return False
        if self.prkg_usg_drv_mod_tran_req != other.prkg_usg_drv_mod_tran_req:
            return False
        if self.mob_dev_rpa_sts_uint8 != other.mob_dev_rpa_sts_uint8:
            return False
        if self.prkg_proc_dst_disp != other.prkg_proc_dst_disp:
            return False
        if self.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1 != other.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1:
            return False
        if self.mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts != other.mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts:
            return False
        if self.mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts != other.mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts:
            return False
        if self.rem_straight_prkg_assi_seln_req_resp != other.rem_straight_prkg_assi_seln_req_resp:
            return False
        if self.rem_str_sts != other.rem_str_sts:
            return False
        if self.tsm_req_rpa_on != other.tsm_req_rpa_on:
            return False
        if self.last_parkg_type_con_rq != other.last_parkg_type_con_rq:
            return False
        if self.forward_distance != other.forward_distance:
            return False
        if self.backward_distance != other.backward_distance:
            return False
        if self.total_distance != other.total_distance:
            return False
        if self.apa_self_park_or_out_version != other.apa_self_park_or_out_version:
            return False
        if self.plan_first_sucs != other.plan_first_sucs:
            return False
        if self.disp_interface_chg_req != other.disp_interface_chg_req:
            return False
        if self.prkg_fcts_swt_sts_disp != other.prkg_fcts_swt_sts_disp:
            return False
        if self.avm_drvr_assc_sys_disp != other.avm_drvr_assc_sys_disp:
            return False
        if self.avm_prkg_fct_di_disp != other.avm_prkg_fct_di_disp:
            return False
        if self.prkg_btn_sts_dispset != other.prkg_btn_sts_dispset:
            return False
        if self.drvr_assc_sys_disp_list != other.drvr_assc_sys_disp_list:
            return False
        if self.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5 != other.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5:
            return False
        if self.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6 != other.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6:
            return False
        if self.prkg_fct_test_pnd_req != other.prkg_fct_test_pnd_req:
            return False
        if self.sm_hpa_version != other.sm_hpa_version:
            return False
        if self.sm_hpa_state_ind != other.sm_hpa_state_ind:
            return False
        if self.sm_hpa_state != other.sm_hpa_state:
            return False
        if self.sm_hpa_req_apa != other.sm_hpa_req_apa:
            return False
        if self.sm_hpa_proc_prompt_req != other.sm_hpa_proc_prompt_req:
            return False
        if self.sm_hpa_quit_reason != other.sm_hpa_quit_reason:
            return False
        if self.valt_prkg_failr_notif != other.valt_prkg_failr_notif:
            return False
        if self.home_prkg_voice_prompt_req != other.home_prkg_voice_prompt_req:
            return False
        if self.sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req != other.sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req:
            return False
        if self.sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1 != other.sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1:
            return False
        if self.valt_prkg_reminder != other.valt_prkg_reminder:
            return False
        if self.veh_home_prkg_sys_sts != other.veh_home_prkg_sys_sts:
            return False
        if self.prkg_amb_li_req != other.prkg_amb_li_req:
            return False
        if self.veh_prkg_to_horn != other.veh_prkg_to_horn:
            return False
        if self.prkg_accr_ovrdn_ctrl_reqgrp != other.prkg_accr_ovrdn_ctrl_reqgrp:
            return False
        if self.hpa_st_code_to_sm != other.hpa_st_code_to_sm:
            return False
        if self.lo_spd_and_trk_bck_sys_sts != other.lo_spd_and_trk_bck_sys_sts:
            return False
        if self.sm_rem_ctrl_veh_sts != other.sm_rem_ctrl_veh_sts:
            return False
        if self.sm_rem_str_sts != other.sm_rem_str_sts:
            return False
        if self.sm_rcv_mod_incln != other.sm_rcv_mod_incln:
            return False
        if self.sm_mob_dev_rcv_req_resp != other.sm_mob_dev_rcv_req_resp:
            return False
        if self.sm_mob_dev_rcv_sts != other.sm_mob_dev_rcv_sts:
            return False
        if self.sm_rcv_version != other.sm_rcv_version:
            return False
        if self.lgt_control_request != other.lgt_control_request:
            return False
        if self.lat_control_request != other.lat_control_request:
            return False
        if self.mai_sts != other.mai_sts:
            return False
        if self.prkg_emgy_brk_sys_sts != other.prkg_emgy_brk_sys_sts:
            return False
        if self.prkg_btn_sts_disp_float != other.prkg_btn_sts_disp_float:
            return False
        if self.prkg_active_push != other.prkg_active_push:
            return False
        if self.prkg_fct_di_mod != other.prkg_fct_di_mod:
            return False
        if self.no_touching_for_avm_req != other.no_touching_for_avm_req:
            return False
        if self.aut_prkg_in_btn_sts_from_rpa != other.aut_prkg_in_btn_sts_from_rpa:
            return False
        if self.asy_a_lgt_sts_asy_a_lgt_sts != other.asy_a_lgt_sts_asy_a_lgt_sts:
            return False
        if self.asy_stand_still_req_for_cmft != other.asy_stand_still_req_for_cmft:
            return False
        if self.drv_off_req_for_lgt_ctrl != other.drv_off_req_for_lgt_ctrl:
            return False
        if self.stop_req_of_lgt_ctrl_for_prpsn != other.stop_req_of_lgt_ctrl_for_prpsn:
            return False
        if self.strt_req_of_lgt_ctrl_for_prpsn != other.strt_req_of_lgt_ctrl_for_prpsn:
            return False
        if self.avl_sts_for_long_aut_drv != other.avl_sts_for_long_aut_drv:
            return False
        if self.hwa_lat_ctrl_sts != other.hwa_lat_ctrl_sts:
            return False
        if self.ad_ctrl_mode != other.ad_ctrl_mode:
            return False
        if self.asy_lane_chg_assist_sts != other.asy_lane_chg_assist_sts:
            return False
        if self.asy_noa_sts != other.asy_noa_sts:
            return False
        if self.aut_lane_chg_sts != other.aut_lane_chg_sts:
            return False
        if self.asy_req_lane_chg != other.asy_req_lane_chg:
            return False
        if self.sm_state != other.sm_state:
            return False
        if any(self.function_status != other.function_status):
            return False
        if self.hwa_odd_off != other.hwa_odd_off:
            return False
        if any(self.smfault_level != other.smfault_level):
            return False
        if self.prkg_camera_store_resp != other.prkg_camera_store_resp:
            return False
        if any(self.rev != other.rev):
            return False
        if self.dpa_mode_broadcast != other.dpa_mode_broadcast:
            return False
        if self.dpa_btn_sts != other.dpa_btn_sts:
            return False
        if self.sm_fct_err_code2_hmi != other.sm_fct_err_code2_hmi:
            return False
        if self.view_layout_req != other.view_layout_req:
            return False
        if self.cust_btn_sts != other.cust_btn_sts:
            return False
        if self.exit_cust_btn_sts != other.exit_cust_btn_sts:
            return False
        if self.frnt_and_re_prkg_in_btn_sts != other.frnt_and_re_prkg_in_btn_sts:
            return False
        if self.mai_version != other.mai_version:
            return False
        if self.peb_version != other.peb_version:
            return False
        if self.lo_spd_and_trk_bck_sub_sts != other.lo_spd_and_trk_bck_sub_sts:
            return False
        if self.fill_light_req != other.fill_light_req:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def three_d_angle_req(self):
        """Message field 'three_d_angle_req'."""
        return self._three_d_angle_req

    @three_d_angle_req.setter
    def three_d_angle_req(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'three_d_angle_req' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'three_d_angle_req' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._three_d_angle_req = value

    @builtins.property
    def tsm_version(self):
        """Message field 'tsm_version'."""
        return self._tsm_version

    @tsm_version.setter
    def tsm_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tsm_version' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'tsm_version' field must be an unsigned integer in [0, 4294967295]"
        self._tsm_version = value

    @builtins.property
    def apa_version(self):
        """Message field 'apa_version'."""
        return self._apa_version

    @apa_version.setter
    def apa_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'apa_version' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'apa_version' field must be an unsigned integer in [0, 4294967295]"
        self._apa_version = value

    @builtins.property
    def avm_version(self):
        """Message field 'avm_version'."""
        return self._avm_version

    @avm_version.setter
    def avm_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'avm_version' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'avm_version' field must be an unsigned integer in [0, 4294967295]"
        self._avm_version = value

    @builtins.property
    def hmi_version(self):
        """Message field 'hmi_version'."""
        return self._hmi_version

    @hmi_version.setter
    def hmi_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_version' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'hmi_version' field must be an unsigned integer in [0, 4294967295]"
        self._hmi_version = value

    @builtins.property
    def drvr_assc_sys_sts(self):
        """Message field 'drvr_assc_sys_sts'."""
        return self._drvr_assc_sys_sts

    @drvr_assc_sys_sts.setter
    def drvr_assc_sys_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_assc_sys_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_assc_sys_sts' field must be an unsigned integer in [0, 255]"
        self._drvr_assc_sys_sts = value

    @builtins.property
    def apa_sub_sys_sts(self):
        """Message field 'apa_sub_sys_sts'."""
        return self._apa_sub_sys_sts

    @apa_sub_sys_sts.setter
    def apa_sub_sys_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'apa_sub_sys_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'apa_sub_sys_sts' field must be an unsigned integer in [0, 255]"
        self._apa_sub_sys_sts = value

    @builtins.property
    def last_prk_type(self):
        """Message field 'last_prk_type'."""
        return self._last_prk_type

    @last_prk_type.setter
    def last_prk_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_prk_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'last_prk_type' field must be an unsigned integer in [0, 255]"
        self._last_prk_type = value

    @builtins.property
    def monr_sys_sts(self):
        """Message field 'monr_sys_sts'."""
        return self._monr_sys_sts

    @monr_sys_sts.setter
    def monr_sys_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'monr_sys_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'monr_sys_sts' field must be an unsigned integer in [0, 255]"
        self._monr_sys_sts = value

    @builtins.property
    def obstcl_trig_resp(self):
        """Message field 'obstcl_trig_resp'."""
        return self._obstcl_trig_resp

    @obstcl_trig_resp.setter
    def obstcl_trig_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obstcl_trig_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'obstcl_trig_resp' field must be an unsigned integer in [0, 255]"
        self._obstcl_trig_resp = value

    @builtins.property
    def pla_mod_sts_resp(self):
        """Message field 'pla_mod_sts_resp'."""
        return self._pla_mod_sts_resp

    @pla_mod_sts_resp.setter
    def pla_mod_sts_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pla_mod_sts_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pla_mod_sts_resp' field must be an unsigned integer in [0, 255]"
        self._pla_mod_sts_resp = value

    @builtins.property
    def swt_disp_on_and_off_sts_resp(self):
        """Message field 'swt_disp_on_and_off_sts_resp'."""
        return self._swt_disp_on_and_off_sts_resp

    @swt_disp_on_and_off_sts_resp.setter
    def swt_disp_on_and_off_sts_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'swt_disp_on_and_off_sts_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'swt_disp_on_and_off_sts_resp' field must be an unsigned integer in [0, 255]"
        self._swt_disp_on_and_off_sts_resp = value

    @builtins.property
    def thr_d_touring_view_resp(self):
        """Message field 'thr_d_touring_view_resp'."""
        return self._thr_d_touring_view_resp

    @thr_d_touring_view_resp.setter
    def thr_d_touring_view_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'thr_d_touring_view_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'thr_d_touring_view_resp' field must be an unsigned integer in [0, 255]"
        self._thr_d_touring_view_resp = value

    @builtins.property
    def turn_entry_ag_wide_vis_resp(self):
        """Message field 'turn_entry_ag_wide_vis_resp'."""
        return self._turn_entry_ag_wide_vis_resp

    @turn_entry_ag_wide_vis_resp.setter
    def turn_entry_ag_wide_vis_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_entry_ag_wide_vis_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'turn_entry_ag_wide_vis_resp' field must be an unsigned integer in [0, 255]"
        self._turn_entry_ag_wide_vis_resp = value

    @builtins.property
    def veh_mdl_clr_resp(self):
        """Message field 'veh_mdl_clr_resp'."""
        return self._veh_mdl_clr_resp

    @veh_mdl_clr_resp.setter
    def veh_mdl_clr_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_mdl_clr_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_mdl_clr_resp' field must be an unsigned integer in [0, 255]"
        self._veh_mdl_clr_resp = value

    @builtins.property
    def visn_ag_extn_resp(self):
        """Message field 'visn_ag_extn_resp'."""
        return self._visn_ag_extn_resp

    @visn_ag_extn_resp.setter
    def visn_ag_extn_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'visn_ag_extn_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'visn_ag_extn_resp' field must be an unsigned integer in [0, 255]"
        self._visn_ag_extn_resp = value

    @builtins.property
    def visn_img_disp_mod_resp(self):
        """Message field 'visn_img_disp_mod_resp'."""
        return self._visn_img_disp_mod_resp

    @visn_img_disp_mod_resp.setter
    def visn_img_disp_mod_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'visn_img_disp_mod_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'visn_img_disp_mod_resp' field must be an unsigned integer in [0, 255]"
        self._visn_img_disp_mod_resp = value

    @builtins.property
    def drvr_assc_sys_disp(self):
        """Message field 'drvr_assc_sys_disp'."""
        return self._drvr_assc_sys_disp

    @drvr_assc_sys_disp.setter
    def drvr_assc_sys_disp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_assc_sys_disp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_assc_sys_disp' field must be an unsigned integer in [0, 255]"
        self._drvr_assc_sys_disp = value

    @builtins.property
    def prkg_aux_info_disp(self):
        """Message field 'prkg_aux_info_disp'."""
        return self._prkg_aux_info_disp

    @prkg_aux_info_disp.setter
    def prkg_aux_info_disp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_aux_info_disp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_aux_info_disp' field must be an unsigned integer in [0, 255]"
        self._prkg_aux_info_disp = value

    @builtins.property
    def prkg_back_disp(self):
        """Message field 'prkg_back_disp'."""
        return self._prkg_back_disp

    @prkg_back_disp.setter
    def prkg_back_disp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_back_disp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_back_disp' field must be an unsigned integer in [0, 255]"
        self._prkg_back_disp = value

    @builtins.property
    def prkg_btn_sts_disp_group_cancel(self):
        """Message field 'prkg_btn_sts_disp_group_cancel'."""
        return self._prkg_btn_sts_disp_group_cancel

    @prkg_btn_sts_disp_group_cancel.setter
    def prkg_btn_sts_disp_group_cancel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_btn_sts_disp_group_cancel' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_btn_sts_disp_group_cancel' field must be an unsigned integer in [0, 255]"
        self._prkg_btn_sts_disp_group_cancel = value

    @builtins.property
    def prkg_btn_sts_disp_group_prkg_in(self):
        """Message field 'prkg_btn_sts_disp_group_prkg_in'."""
        return self._prkg_btn_sts_disp_group_prkg_in

    @prkg_btn_sts_disp_group_prkg_in.setter
    def prkg_btn_sts_disp_group_prkg_in(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_btn_sts_disp_group_prkg_in' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_btn_sts_disp_group_prkg_in' field must be an unsigned integer in [0, 255]"
        self._prkg_btn_sts_disp_group_prkg_in = value

    @builtins.property
    def prkg_btn_sts_disp_group_prkg_out(self):
        """Message field 'prkg_btn_sts_disp_group_prkg_out'."""
        return self._prkg_btn_sts_disp_group_prkg_out

    @prkg_btn_sts_disp_group_prkg_out.setter
    def prkg_btn_sts_disp_group_prkg_out(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_btn_sts_disp_group_prkg_out' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_btn_sts_disp_group_prkg_out' field must be an unsigned integer in [0, 255]"
        self._prkg_btn_sts_disp_group_prkg_out = value

    @builtins.property
    def prkg_fct_di_disp(self):
        """Message field 'prkg_fct_di_disp'."""
        return self._prkg_fct_di_disp

    @prkg_fct_di_disp.setter
    def prkg_fct_di_disp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_fct_di_disp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_fct_di_disp' field must be an unsigned integer in [0, 255]"
        self._prkg_fct_di_disp = value

    @builtins.property
    def prkg_fct_di_mod_resp(self):
        """Message field 'prkg_fct_di_mod_resp'."""
        return self._prkg_fct_di_mod_resp

    @prkg_fct_di_mod_resp.setter
    def prkg_fct_di_mod_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_fct_di_mod_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_fct_di_mod_resp' field must be an unsigned integer in [0, 255]"
        self._prkg_fct_di_mod_resp = value

    @builtins.property
    def prkg_progs_disp(self):
        """Message field 'prkg_progs_disp'."""
        return self._prkg_progs_disp

    @prkg_progs_disp.setter
    def prkg_progs_disp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_progs_disp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_progs_disp' field must be an unsigned integer in [0, 255]"
        self._prkg_progs_disp = value

    @builtins.property
    def prkg_stop_aud_warn_req(self):
        """Message field 'prkg_stop_aud_warn_req'."""
        return self._prkg_stop_aud_warn_req

    @prkg_stop_aud_warn_req.setter
    def prkg_stop_aud_warn_req(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'prkg_stop_aud_warn_req' field must be of type 'bool'"
        self._prkg_stop_aud_warn_req = value

    @builtins.property
    def back_push_apa_info_req(self):
        """Message field 'back_push_apa_info_req'."""
        return self._back_push_apa_info_req

    @back_push_apa_info_req.setter
    def back_push_apa_info_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'back_push_apa_info_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'back_push_apa_info_req' field must be an unsigned integer in [0, 255]"
        self._back_push_apa_info_req = value

    @builtins.property
    def voice_prompt_req(self):
        """Message field 'voice_prompt_req'."""
        return self._voice_prompt_req

    @voice_prompt_req.setter
    def voice_prompt_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voice_prompt_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'voice_prompt_req' field must be an unsigned integer in [0, 255]"
        self._voice_prompt_req = value

    @builtins.property
    def prkg_img_disp_req(self):
        """Message field 'prkg_img_disp_req'."""
        return self._prkg_img_disp_req

    @prkg_img_disp_req.setter
    def prkg_img_disp_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_img_disp_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_img_disp_req' field must be an unsigned integer in [0, 255]"
        self._prkg_img_disp_req = value

    @builtins.property
    def park_in_or_out(self):
        """Message field 'park_in_or_out'."""
        return self._park_in_or_out

    @park_in_or_out.setter
    def park_in_or_out(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'park_in_or_out' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'park_in_or_out' field must be an unsigned integer in [0, 255]"
        self._park_in_or_out = value

    @builtins.property
    def shakehand_rq(self):
        """Message field 'shakehand_rq'."""
        return self._shakehand_rq

    @shakehand_rq.setter
    def shakehand_rq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shakehand_rq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'shakehand_rq' field must be an unsigned integer in [0, 255]"
        self._shakehand_rq = value

    @builtins.property
    def park_enter_req(self):
        """Message field 'park_enter_req'."""
        return self._park_enter_req

    @park_enter_req.setter
    def park_enter_req(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'park_enter_req' field must be of type 'bool'"
        self._park_enter_req = value

    @builtins.property
    def park_exit_req(self):
        """Message field 'park_exit_req'."""
        return self._park_exit_req

    @park_exit_req.setter
    def park_exit_req(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'park_exit_req' field must be of type 'bool'"
        self._park_exit_req = value

    @builtins.property
    def park_function(self):
        """Message field 'park_function'."""
        return self._park_function

    @park_function.setter
    def park_function(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'park_function' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'park_function' field must be an unsigned integer in [0, 255]"
        self._park_function = value

    @builtins.property
    def prkg_fct_vmm_mod_req(self):
        """Message field 'prkg_fct_vmm_mod_req'."""
        return self._prkg_fct_vmm_mod_req

    @prkg_fct_vmm_mod_req.setter
    def prkg_fct_vmm_mod_req(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'prkg_fct_vmm_mod_req' field must be of type 'bool'"
        self._prkg_fct_vmm_mod_req = value

    @builtins.property
    def eng_runng_req_by_park_assi1(self):
        """Message field 'eng_runng_req_by_park_assi1'."""
        return self._eng_runng_req_by_park_assi1

    @eng_runng_req_by_park_assi1.setter
    def eng_runng_req_by_park_assi1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eng_runng_req_by_park_assi1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'eng_runng_req_by_park_assi1' field must be an unsigned integer in [0, 255]"
        self._eng_runng_req_by_park_assi1 = value

    @builtins.property
    def apa_sts_flag(self):
        """Message field 'apa_sts_flag'."""
        return self._apa_sts_flag

    @apa_sts_flag.setter
    def apa_sts_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'apa_sts_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'apa_sts_flag' field must be an unsigned integer in [0, 255]"
        self._apa_sts_flag = value

    @builtins.property
    def aut_actv_prkg_fct_swt_resp(self):
        """Message field 'aut_actv_prkg_fct_swt_resp'."""
        return self._aut_actv_prkg_fct_swt_resp

    @aut_actv_prkg_fct_swt_resp.setter
    def aut_actv_prkg_fct_swt_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_actv_prkg_fct_swt_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_actv_prkg_fct_swt_resp' field must be an unsigned integer in [0, 255]"
        self._aut_actv_prkg_fct_swt_resp = value

    @builtins.property
    def aut_prkg_voice_swt_resp(self):
        """Message field 'aut_prkg_voice_swt_resp'."""
        return self._aut_prkg_voice_swt_resp

    @aut_prkg_voice_swt_resp.setter
    def aut_prkg_voice_swt_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_prkg_voice_swt_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_prkg_voice_swt_resp' field must be an unsigned integer in [0, 255]"
        self._aut_prkg_voice_swt_resp = value

    @builtins.property
    def aut_prkg_voice_typ_resp(self):
        """Message field 'aut_prkg_voice_typ_resp'."""
        return self._aut_prkg_voice_typ_resp

    @aut_prkg_voice_typ_resp.setter
    def aut_prkg_voice_typ_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_prkg_voice_typ_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_prkg_voice_typ_resp' field must be an unsigned integer in [0, 255]"
        self._aut_prkg_voice_typ_resp = value

    @builtins.property
    def img_sn_sr_cal_sts(self):
        """Message field 'img_sn_sr_cal_sts'."""
        return self._img_sn_sr_cal_sts

    @img_sn_sr_cal_sts.setter
    def img_sn_sr_cal_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'img_sn_sr_cal_sts' field must be of type 'bool'"
        self._img_sn_sr_cal_sts = value

    @builtins.property
    def prkg_dock_dis_req(self):
        """Message field 'prkg_dock_dis_req'."""
        return self._prkg_dock_dis_req

    @prkg_dock_dis_req.setter
    def prkg_dock_dis_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_dock_dis_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_dock_dis_req' field must be an unsigned integer in [0, 255]"
        self._prkg_dock_dis_req = value

    @builtins.property
    def pdc_ctrl_rsn(self):
        """Message field 'pdc_ctrl_rsn'."""
        return self._pdc_ctrl_rsn

    @pdc_ctrl_rsn.setter
    def pdc_ctrl_rsn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdc_ctrl_rsn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pdc_ctrl_rsn' field must be an unsigned integer in [0, 255]"
        self._pdc_ctrl_rsn = value

    @builtins.property
    def system_fault(self):
        """Message field 'system_fault'."""
        return self._system_fault

    @system_fault.setter
    def system_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'system_fault' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'system_fault' field must be an unsigned integer in [0, 4294967295]"
        self._system_fault = value

    @builtins.property
    def prkg_lock_req(self):
        """Message field 'prkg_lock_req'."""
        return self._prkg_lock_req

    @prkg_lock_req.setter
    def prkg_lock_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_lock_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_lock_req' field must be an unsigned integer in [0, 255]"
        self._prkg_lock_req = value

    @builtins.property
    def mirr_open_cls_req(self):
        """Message field 'mirr_open_cls_req'."""
        return self._mirr_open_cls_req

    @mirr_open_cls_req.setter
    def mirr_open_cls_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mirr_open_cls_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mirr_open_cls_req' field must be an unsigned integer in [0, 255]"
        self._mirr_open_cls_req = value

    @builtins.property
    def mob_dev_rpa_req_resp(self):
        """Message field 'mob_dev_rpa_req_resp'."""
        return self._mob_dev_rpa_req_resp

    @mob_dev_rpa_req_resp.setter
    def mob_dev_rpa_req_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mob_dev_rpa_req_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mob_dev_rpa_req_resp' field must be an unsigned integer in [0, 255]"
        self._mob_dev_rpa_req_resp = value

    @builtins.property
    def prkg_mod_incln(self):
        """Message field 'prkg_mod_incln'."""
        return self._prkg_mod_incln

    @prkg_mod_incln.setter
    def prkg_mod_incln(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_mod_incln' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_mod_incln' field must be an unsigned integer in [0, 255]"
        self._prkg_mod_incln = value

    @builtins.property
    def prkg_assi_sys_rem_prkg_sts(self):
        """Message field 'prkg_assi_sys_rem_prkg_sts'."""
        return self._prkg_assi_sys_rem_prkg_sts

    @prkg_assi_sys_rem_prkg_sts.setter
    def prkg_assi_sys_rem_prkg_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_assi_sys_rem_prkg_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_assi_sys_rem_prkg_sts' field must be an unsigned integer in [0, 255]"
        self._prkg_assi_sys_rem_prkg_sts = value

    @builtins.property
    def veh_win_sun_roof_cls_req(self):
        """Message field 'veh_win_sun_roof_cls_req'."""
        return self._veh_win_sun_roof_cls_req

    @veh_win_sun_roof_cls_req.setter
    def veh_win_sun_roof_cls_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_win_sun_roof_cls_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_win_sun_roof_cls_req' field must be an unsigned integer in [0, 255]"
        self._veh_win_sun_roof_cls_req = value

    @builtins.property
    def veh_prkg_lock_theft_req(self):
        """Message field 'veh_prkg_lock_theft_req'."""
        return self._veh_prkg_lock_theft_req

    @veh_prkg_lock_theft_req.setter
    def veh_prkg_lock_theft_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_prkg_lock_theft_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_prkg_lock_theft_req' field must be an unsigned integer in [0, 255]"
        self._veh_prkg_lock_theft_req = value

    @builtins.property
    def rpa_version(self):
        """Message field 'rpa_version'."""
        return self._rpa_version

    @rpa_version.setter
    def rpa_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rpa_version' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rpa_version' field must be an unsigned integer in [0, 4294967295]"
        self._rpa_version = value

    @builtins.property
    def prkg_usg_drv_mod_tran_req(self):
        """Message field 'prkg_usg_drv_mod_tran_req'."""
        return self._prkg_usg_drv_mod_tran_req

    @prkg_usg_drv_mod_tran_req.setter
    def prkg_usg_drv_mod_tran_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_usg_drv_mod_tran_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_usg_drv_mod_tran_req' field must be an unsigned integer in [0, 255]"
        self._prkg_usg_drv_mod_tran_req = value

    @builtins.property
    def mob_dev_rpa_sts_uint8(self):
        """Message field 'mob_dev_rpa_sts_uint8'."""
        return self._mob_dev_rpa_sts_uint8

    @mob_dev_rpa_sts_uint8.setter
    def mob_dev_rpa_sts_uint8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mob_dev_rpa_sts_uint8' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mob_dev_rpa_sts_uint8' field must be an unsigned integer in [0, 255]"
        self._mob_dev_rpa_sts_uint8 = value

    @builtins.property
    def prkg_proc_dst_disp(self):
        """Message field 'prkg_proc_dst_disp'."""
        return self._prkg_proc_dst_disp

    @prkg_proc_dst_disp.setter
    def prkg_proc_dst_disp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'prkg_proc_dst_disp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'prkg_proc_dst_disp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._prkg_proc_dst_disp = value

    @builtins.property
    def prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1(self):
        """Message field 'prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1'."""
        return self._prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1

    @prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1.setter
    def prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1' field must be an unsigned integer in [0, 255]"
        self._prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1 = value

    @builtins.property
    def mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts(self):
        """Message field 'mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts'."""
        return self._mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts

    @mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts.setter
    def mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts' field must be an unsigned integer in [0, 255]"
        self._mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts = value

    @builtins.property
    def mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts(self):
        """Message field 'mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts'."""
        return self._mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts

    @mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts.setter
    def mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts' field must be an unsigned integer in [0, 255]"
        self._mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts = value

    @builtins.property
    def rem_straight_prkg_assi_seln_req_resp(self):
        """Message field 'rem_straight_prkg_assi_seln_req_resp'."""
        return self._rem_straight_prkg_assi_seln_req_resp

    @rem_straight_prkg_assi_seln_req_resp.setter
    def rem_straight_prkg_assi_seln_req_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rem_straight_prkg_assi_seln_req_resp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rem_straight_prkg_assi_seln_req_resp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rem_straight_prkg_assi_seln_req_resp = value

    @builtins.property
    def rem_str_sts(self):
        """Message field 'rem_str_sts'."""
        return self._rem_str_sts

    @rem_str_sts.setter
    def rem_str_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rem_str_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rem_str_sts' field must be an unsigned integer in [0, 255]"
        self._rem_str_sts = value

    @builtins.property
    def tsm_req_rpa_on(self):
        """Message field 'tsm_req_rpa_on'."""
        return self._tsm_req_rpa_on

    @tsm_req_rpa_on.setter
    def tsm_req_rpa_on(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tsm_req_rpa_on' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tsm_req_rpa_on' field must be an unsigned integer in [0, 255]"
        self._tsm_req_rpa_on = value

    @builtins.property
    def last_parkg_type_con_rq(self):
        """Message field 'last_parkg_type_con_rq'."""
        return self._last_parkg_type_con_rq

    @last_parkg_type_con_rq.setter
    def last_parkg_type_con_rq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_parkg_type_con_rq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'last_parkg_type_con_rq' field must be an unsigned integer in [0, 255]"
        self._last_parkg_type_con_rq = value

    @builtins.property
    def forward_distance(self):
        """Message field 'forward_distance'."""
        return self._forward_distance

    @forward_distance.setter
    def forward_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'forward_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'forward_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._forward_distance = value

    @builtins.property
    def backward_distance(self):
        """Message field 'backward_distance'."""
        return self._backward_distance

    @backward_distance.setter
    def backward_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'backward_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'backward_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._backward_distance = value

    @builtins.property
    def total_distance(self):
        """Message field 'total_distance'."""
        return self._total_distance

    @total_distance.setter
    def total_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_distance = value

    @builtins.property
    def apa_self_park_or_out_version(self):
        """Message field 'apa_self_park_or_out_version'."""
        return self._apa_self_park_or_out_version

    @apa_self_park_or_out_version.setter
    def apa_self_park_or_out_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'apa_self_park_or_out_version' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'apa_self_park_or_out_version' field must be an unsigned integer in [0, 4294967295]"
        self._apa_self_park_or_out_version = value

    @builtins.property
    def plan_first_sucs(self):
        """Message field 'plan_first_sucs'."""
        return self._plan_first_sucs

    @plan_first_sucs.setter
    def plan_first_sucs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plan_first_sucs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'plan_first_sucs' field must be an unsigned integer in [0, 255]"
        self._plan_first_sucs = value

    @builtins.property
    def disp_interface_chg_req(self):
        """Message field 'disp_interface_chg_req'."""
        return self._disp_interface_chg_req

    @disp_interface_chg_req.setter
    def disp_interface_chg_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'disp_interface_chg_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'disp_interface_chg_req' field must be an unsigned integer in [0, 255]"
        self._disp_interface_chg_req = value

    @builtins.property
    def prkg_fcts_swt_sts_disp(self):
        """Message field 'prkg_fcts_swt_sts_disp'."""
        return self._prkg_fcts_swt_sts_disp

    @prkg_fcts_swt_sts_disp.setter
    def prkg_fcts_swt_sts_disp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_fcts_swt_sts_disp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_fcts_swt_sts_disp' field must be an unsigned integer in [0, 255]"
        self._prkg_fcts_swt_sts_disp = value

    @builtins.property
    def avm_drvr_assc_sys_disp(self):
        """Message field 'avm_drvr_assc_sys_disp'."""
        return self._avm_drvr_assc_sys_disp

    @avm_drvr_assc_sys_disp.setter
    def avm_drvr_assc_sys_disp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'avm_drvr_assc_sys_disp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'avm_drvr_assc_sys_disp' field must be an unsigned integer in [0, 255]"
        self._avm_drvr_assc_sys_disp = value

    @builtins.property
    def avm_prkg_fct_di_disp(self):
        """Message field 'avm_prkg_fct_di_disp'."""
        return self._avm_prkg_fct_di_disp

    @avm_prkg_fct_di_disp.setter
    def avm_prkg_fct_di_disp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'avm_prkg_fct_di_disp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'avm_prkg_fct_di_disp' field must be an unsigned integer in [0, 255]"
        self._avm_prkg_fct_di_disp = value

    @builtins.property
    def prkg_btn_sts_dispset(self):
        """Message field 'prkg_btn_sts_dispset'."""
        return self._prkg_btn_sts_dispset

    @prkg_btn_sts_dispset.setter
    def prkg_btn_sts_dispset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_btn_sts_dispset' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_btn_sts_dispset' field must be an unsigned integer in [0, 255]"
        self._prkg_btn_sts_dispset = value

    @builtins.property
    def drvr_assc_sys_disp_list(self):
        """Message field 'drvr_assc_sys_disp_list'."""
        return self._drvr_assc_sys_disp_list

    @drvr_assc_sys_disp_list.setter
    def drvr_assc_sys_disp_list(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_assc_sys_disp_list' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_assc_sys_disp_list' field must be an unsigned integer in [0, 255]"
        self._drvr_assc_sys_disp_list = value

    @builtins.property
    def prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5(self):
        """Message field 'prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5'."""
        return self._prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5

    @prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5.setter
    def prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5' field must be an unsigned integer in [0, 255]"
        self._prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5 = value

    @builtins.property
    def prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6(self):
        """Message field 'prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6'."""
        return self._prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6

    @prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6.setter
    def prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6' field must be an unsigned integer in [0, 255]"
        self._prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6 = value

    @builtins.property
    def prkg_fct_test_pnd_req(self):
        """Message field 'prkg_fct_test_pnd_req'."""
        return self._prkg_fct_test_pnd_req

    @prkg_fct_test_pnd_req.setter
    def prkg_fct_test_pnd_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_fct_test_pnd_req' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'prkg_fct_test_pnd_req' field must be an unsigned integer in [0, 4294967295]"
        self._prkg_fct_test_pnd_req = value

    @builtins.property
    def sm_hpa_version(self):
        """Message field 'sm_hpa_version'."""
        return self._sm_hpa_version

    @sm_hpa_version.setter
    def sm_hpa_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_hpa_version' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sm_hpa_version' field must be an unsigned integer in [0, 4294967295]"
        self._sm_hpa_version = value

    @builtins.property
    def sm_hpa_state_ind(self):
        """Message field 'sm_hpa_state_ind'."""
        return self._sm_hpa_state_ind

    @sm_hpa_state_ind.setter
    def sm_hpa_state_ind(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_hpa_state_ind' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_hpa_state_ind' field must be an unsigned integer in [0, 255]"
        self._sm_hpa_state_ind = value

    @builtins.property
    def sm_hpa_state(self):
        """Message field 'sm_hpa_state'."""
        return self._sm_hpa_state

    @sm_hpa_state.setter
    def sm_hpa_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_hpa_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_hpa_state' field must be an unsigned integer in [0, 255]"
        self._sm_hpa_state = value

    @builtins.property
    def sm_hpa_req_apa(self):
        """Message field 'sm_hpa_req_apa'."""
        return self._sm_hpa_req_apa

    @sm_hpa_req_apa.setter
    def sm_hpa_req_apa(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_hpa_req_apa' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_hpa_req_apa' field must be an unsigned integer in [0, 255]"
        self._sm_hpa_req_apa = value

    @builtins.property
    def sm_hpa_proc_prompt_req(self):
        """Message field 'sm_hpa_proc_prompt_req'."""
        return self._sm_hpa_proc_prompt_req

    @sm_hpa_proc_prompt_req.setter
    def sm_hpa_proc_prompt_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_hpa_proc_prompt_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_hpa_proc_prompt_req' field must be an unsigned integer in [0, 255]"
        self._sm_hpa_proc_prompt_req = value

    @builtins.property
    def sm_hpa_quit_reason(self):
        """Message field 'sm_hpa_quit_reason'."""
        return self._sm_hpa_quit_reason

    @sm_hpa_quit_reason.setter
    def sm_hpa_quit_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_hpa_quit_reason' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_hpa_quit_reason' field must be an unsigned integer in [0, 255]"
        self._sm_hpa_quit_reason = value

    @builtins.property
    def valt_prkg_failr_notif(self):
        """Message field 'valt_prkg_failr_notif'."""
        return self._valt_prkg_failr_notif

    @valt_prkg_failr_notif.setter
    def valt_prkg_failr_notif(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'valt_prkg_failr_notif' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'valt_prkg_failr_notif' field must be an unsigned integer in [0, 255]"
        self._valt_prkg_failr_notif = value

    @builtins.property
    def home_prkg_voice_prompt_req(self):
        """Message field 'home_prkg_voice_prompt_req'."""
        return self._home_prkg_voice_prompt_req

    @home_prkg_voice_prompt_req.setter
    def home_prkg_voice_prompt_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'home_prkg_voice_prompt_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'home_prkg_voice_prompt_req' field must be an unsigned integer in [0, 255]"
        self._home_prkg_voice_prompt_req = value

    @builtins.property
    def sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req(self):
        """Message field 'sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req'."""
        return self._sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req

    @sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req.setter
    def sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req' field must be an unsigned integer in [0, 255]"
        self._sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req = value

    @builtins.property
    def sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1(self):
        """Message field 'sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1'."""
        return self._sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1

    @sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1.setter
    def sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1' field must be an unsigned integer in [0, 255]"
        self._sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1 = value

    @builtins.property
    def valt_prkg_reminder(self):
        """Message field 'valt_prkg_reminder'."""
        return self._valt_prkg_reminder

    @valt_prkg_reminder.setter
    def valt_prkg_reminder(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'valt_prkg_reminder' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'valt_prkg_reminder' field must be an unsigned integer in [0, 255]"
        self._valt_prkg_reminder = value

    @builtins.property
    def veh_home_prkg_sys_sts(self):
        """Message field 'veh_home_prkg_sys_sts'."""
        return self._veh_home_prkg_sys_sts

    @veh_home_prkg_sys_sts.setter
    def veh_home_prkg_sys_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_home_prkg_sys_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_home_prkg_sys_sts' field must be an unsigned integer in [0, 255]"
        self._veh_home_prkg_sys_sts = value

    @builtins.property
    def prkg_amb_li_req(self):
        """Message field 'prkg_amb_li_req'."""
        return self._prkg_amb_li_req

    @prkg_amb_li_req.setter
    def prkg_amb_li_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_amb_li_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_amb_li_req' field must be an unsigned integer in [0, 255]"
        self._prkg_amb_li_req = value

    @builtins.property
    def veh_prkg_to_horn(self):
        """Message field 'veh_prkg_to_horn'."""
        return self._veh_prkg_to_horn

    @veh_prkg_to_horn.setter
    def veh_prkg_to_horn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_prkg_to_horn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_prkg_to_horn' field must be an unsigned integer in [0, 255]"
        self._veh_prkg_to_horn = value

    @builtins.property
    def prkg_accr_ovrdn_ctrl_reqgrp(self):
        """Message field 'prkg_accr_ovrdn_ctrl_reqgrp'."""
        return self._prkg_accr_ovrdn_ctrl_reqgrp

    @prkg_accr_ovrdn_ctrl_reqgrp.setter
    def prkg_accr_ovrdn_ctrl_reqgrp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_accr_ovrdn_ctrl_reqgrp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_accr_ovrdn_ctrl_reqgrp' field must be an unsigned integer in [0, 255]"
        self._prkg_accr_ovrdn_ctrl_reqgrp = value

    @builtins.property
    def hpa_st_code_to_sm(self):
        """Message field 'hpa_st_code_to_sm'."""
        return self._hpa_st_code_to_sm

    @hpa_st_code_to_sm.setter
    def hpa_st_code_to_sm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hpa_st_code_to_sm' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hpa_st_code_to_sm' field must be an unsigned integer in [0, 255]"
        self._hpa_st_code_to_sm = value

    @builtins.property
    def lo_spd_and_trk_bck_sys_sts(self):
        """Message field 'lo_spd_and_trk_bck_sys_sts'."""
        return self._lo_spd_and_trk_bck_sys_sts

    @lo_spd_and_trk_bck_sys_sts.setter
    def lo_spd_and_trk_bck_sys_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lo_spd_and_trk_bck_sys_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lo_spd_and_trk_bck_sys_sts' field must be an unsigned integer in [0, 255]"
        self._lo_spd_and_trk_bck_sys_sts = value

    @builtins.property
    def sm_rem_ctrl_veh_sts(self):
        """Message field 'sm_rem_ctrl_veh_sts'."""
        return self._sm_rem_ctrl_veh_sts

    @sm_rem_ctrl_veh_sts.setter
    def sm_rem_ctrl_veh_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_rem_ctrl_veh_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_rem_ctrl_veh_sts' field must be an unsigned integer in [0, 255]"
        self._sm_rem_ctrl_veh_sts = value

    @builtins.property
    def sm_rem_str_sts(self):
        """Message field 'sm_rem_str_sts'."""
        return self._sm_rem_str_sts

    @sm_rem_str_sts.setter
    def sm_rem_str_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_rem_str_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_rem_str_sts' field must be an unsigned integer in [0, 255]"
        self._sm_rem_str_sts = value

    @builtins.property
    def sm_rcv_mod_incln(self):
        """Message field 'sm_rcv_mod_incln'."""
        return self._sm_rcv_mod_incln

    @sm_rcv_mod_incln.setter
    def sm_rcv_mod_incln(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_rcv_mod_incln' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_rcv_mod_incln' field must be an unsigned integer in [0, 255]"
        self._sm_rcv_mod_incln = value

    @builtins.property
    def sm_mob_dev_rcv_req_resp(self):
        """Message field 'sm_mob_dev_rcv_req_resp'."""
        return self._sm_mob_dev_rcv_req_resp

    @sm_mob_dev_rcv_req_resp.setter
    def sm_mob_dev_rcv_req_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_mob_dev_rcv_req_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_mob_dev_rcv_req_resp' field must be an unsigned integer in [0, 255]"
        self._sm_mob_dev_rcv_req_resp = value

    @builtins.property
    def sm_mob_dev_rcv_sts(self):
        """Message field 'sm_mob_dev_rcv_sts'."""
        return self._sm_mob_dev_rcv_sts

    @sm_mob_dev_rcv_sts.setter
    def sm_mob_dev_rcv_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_mob_dev_rcv_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_mob_dev_rcv_sts' field must be an unsigned integer in [0, 255]"
        self._sm_mob_dev_rcv_sts = value

    @builtins.property
    def sm_rcv_version(self):
        """Message field 'sm_rcv_version'."""
        return self._sm_rcv_version

    @sm_rcv_version.setter
    def sm_rcv_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_rcv_version' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sm_rcv_version' field must be an unsigned integer in [0, 4294967295]"
        self._sm_rcv_version = value

    @builtins.property
    def lgt_control_request(self):
        """Message field 'lgt_control_request'."""
        return self._lgt_control_request

    @lgt_control_request.setter
    def lgt_control_request(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lgt_control_request' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lgt_control_request' field must be an unsigned integer in [0, 255]"
        self._lgt_control_request = value

    @builtins.property
    def lat_control_request(self):
        """Message field 'lat_control_request'."""
        return self._lat_control_request

    @lat_control_request.setter
    def lat_control_request(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lat_control_request' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lat_control_request' field must be an unsigned integer in [0, 255]"
        self._lat_control_request = value

    @builtins.property
    def mai_sts(self):
        """Message field 'mai_sts'."""
        return self._mai_sts

    @mai_sts.setter
    def mai_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mai_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mai_sts' field must be an unsigned integer in [0, 255]"
        self._mai_sts = value

    @builtins.property
    def prkg_emgy_brk_sys_sts(self):
        """Message field 'prkg_emgy_brk_sys_sts'."""
        return self._prkg_emgy_brk_sys_sts

    @prkg_emgy_brk_sys_sts.setter
    def prkg_emgy_brk_sys_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_emgy_brk_sys_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_emgy_brk_sys_sts' field must be an unsigned integer in [0, 255]"
        self._prkg_emgy_brk_sys_sts = value

    @builtins.property
    def prkg_btn_sts_disp_float(self):
        """Message field 'prkg_btn_sts_disp_float'."""
        return self._prkg_btn_sts_disp_float

    @prkg_btn_sts_disp_float.setter
    def prkg_btn_sts_disp_float(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_btn_sts_disp_float' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_btn_sts_disp_float' field must be an unsigned integer in [0, 255]"
        self._prkg_btn_sts_disp_float = value

    @builtins.property
    def prkg_active_push(self):
        """Message field 'prkg_active_push'."""
        return self._prkg_active_push

    @prkg_active_push.setter
    def prkg_active_push(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_active_push' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_active_push' field must be an unsigned integer in [0, 255]"
        self._prkg_active_push = value

    @builtins.property
    def prkg_fct_di_mod(self):
        """Message field 'prkg_fct_di_mod'."""
        return self._prkg_fct_di_mod

    @prkg_fct_di_mod.setter
    def prkg_fct_di_mod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_fct_di_mod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_fct_di_mod' field must be an unsigned integer in [0, 255]"
        self._prkg_fct_di_mod = value

    @builtins.property
    def no_touching_for_avm_req(self):
        """Message field 'no_touching_for_avm_req'."""
        return self._no_touching_for_avm_req

    @no_touching_for_avm_req.setter
    def no_touching_for_avm_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'no_touching_for_avm_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'no_touching_for_avm_req' field must be an unsigned integer in [0, 255]"
        self._no_touching_for_avm_req = value

    @builtins.property
    def aut_prkg_in_btn_sts_from_rpa(self):
        """Message field 'aut_prkg_in_btn_sts_from_rpa'."""
        return self._aut_prkg_in_btn_sts_from_rpa

    @aut_prkg_in_btn_sts_from_rpa.setter
    def aut_prkg_in_btn_sts_from_rpa(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_prkg_in_btn_sts_from_rpa' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_prkg_in_btn_sts_from_rpa' field must be an unsigned integer in [0, 255]"
        self._aut_prkg_in_btn_sts_from_rpa = value

    @builtins.property
    def asy_a_lgt_sts_asy_a_lgt_sts(self):
        """Message field 'asy_a_lgt_sts_asy_a_lgt_sts'."""
        return self._asy_a_lgt_sts_asy_a_lgt_sts

    @asy_a_lgt_sts_asy_a_lgt_sts.setter
    def asy_a_lgt_sts_asy_a_lgt_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_a_lgt_sts_asy_a_lgt_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_a_lgt_sts_asy_a_lgt_sts' field must be an unsigned integer in [0, 255]"
        self._asy_a_lgt_sts_asy_a_lgt_sts = value

    @builtins.property
    def asy_stand_still_req_for_cmft(self):
        """Message field 'asy_stand_still_req_for_cmft'."""
        return self._asy_stand_still_req_for_cmft

    @asy_stand_still_req_for_cmft.setter
    def asy_stand_still_req_for_cmft(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_stand_still_req_for_cmft' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_stand_still_req_for_cmft' field must be an unsigned integer in [0, 255]"
        self._asy_stand_still_req_for_cmft = value

    @builtins.property
    def drv_off_req_for_lgt_ctrl(self):
        """Message field 'drv_off_req_for_lgt_ctrl'."""
        return self._drv_off_req_for_lgt_ctrl

    @drv_off_req_for_lgt_ctrl.setter
    def drv_off_req_for_lgt_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drv_off_req_for_lgt_ctrl' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drv_off_req_for_lgt_ctrl' field must be an unsigned integer in [0, 255]"
        self._drv_off_req_for_lgt_ctrl = value

    @builtins.property
    def stop_req_of_lgt_ctrl_for_prpsn(self):
        """Message field 'stop_req_of_lgt_ctrl_for_prpsn'."""
        return self._stop_req_of_lgt_ctrl_for_prpsn

    @stop_req_of_lgt_ctrl_for_prpsn.setter
    def stop_req_of_lgt_ctrl_for_prpsn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stop_req_of_lgt_ctrl_for_prpsn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stop_req_of_lgt_ctrl_for_prpsn' field must be an unsigned integer in [0, 255]"
        self._stop_req_of_lgt_ctrl_for_prpsn = value

    @builtins.property
    def strt_req_of_lgt_ctrl_for_prpsn(self):
        """Message field 'strt_req_of_lgt_ctrl_for_prpsn'."""
        return self._strt_req_of_lgt_ctrl_for_prpsn

    @strt_req_of_lgt_ctrl_for_prpsn.setter
    def strt_req_of_lgt_ctrl_for_prpsn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'strt_req_of_lgt_ctrl_for_prpsn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'strt_req_of_lgt_ctrl_for_prpsn' field must be an unsigned integer in [0, 255]"
        self._strt_req_of_lgt_ctrl_for_prpsn = value

    @builtins.property
    def avl_sts_for_long_aut_drv(self):
        """Message field 'avl_sts_for_long_aut_drv'."""
        return self._avl_sts_for_long_aut_drv

    @avl_sts_for_long_aut_drv.setter
    def avl_sts_for_long_aut_drv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'avl_sts_for_long_aut_drv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'avl_sts_for_long_aut_drv' field must be an unsigned integer in [0, 255]"
        self._avl_sts_for_long_aut_drv = value

    @builtins.property
    def hwa_lat_ctrl_sts(self):
        """Message field 'hwa_lat_ctrl_sts'."""
        return self._hwa_lat_ctrl_sts

    @hwa_lat_ctrl_sts.setter
    def hwa_lat_ctrl_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hwa_lat_ctrl_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hwa_lat_ctrl_sts' field must be an unsigned integer in [0, 255]"
        self._hwa_lat_ctrl_sts = value

    @builtins.property
    def ad_ctrl_mode(self):
        """Message field 'ad_ctrl_mode'."""
        return self._ad_ctrl_mode

    @ad_ctrl_mode.setter
    def ad_ctrl_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad_ctrl_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad_ctrl_mode' field must be an unsigned integer in [0, 255]"
        self._ad_ctrl_mode = value

    @builtins.property
    def asy_lane_chg_assist_sts(self):
        """Message field 'asy_lane_chg_assist_sts'."""
        return self._asy_lane_chg_assist_sts

    @asy_lane_chg_assist_sts.setter
    def asy_lane_chg_assist_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_lane_chg_assist_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_lane_chg_assist_sts' field must be an unsigned integer in [0, 255]"
        self._asy_lane_chg_assist_sts = value

    @builtins.property
    def asy_noa_sts(self):
        """Message field 'asy_noa_sts'."""
        return self._asy_noa_sts

    @asy_noa_sts.setter
    def asy_noa_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_sts' field must be an unsigned integer in [0, 255]"
        self._asy_noa_sts = value

    @builtins.property
    def aut_lane_chg_sts(self):
        """Message field 'aut_lane_chg_sts'."""
        return self._aut_lane_chg_sts

    @aut_lane_chg_sts.setter
    def aut_lane_chg_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_lane_chg_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_lane_chg_sts' field must be an unsigned integer in [0, 255]"
        self._aut_lane_chg_sts = value

    @builtins.property
    def asy_req_lane_chg(self):
        """Message field 'asy_req_lane_chg'."""
        return self._asy_req_lane_chg

    @asy_req_lane_chg.setter
    def asy_req_lane_chg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_req_lane_chg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_req_lane_chg' field must be an unsigned integer in [0, 255]"
        self._asy_req_lane_chg = value

    @builtins.property
    def sm_state(self):
        """Message field 'sm_state'."""
        return self._sm_state

    @sm_state.setter
    def sm_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_state' field must be an unsigned integer in [0, 255]"
        self._sm_state = value

    @builtins.property
    def function_status(self):
        """Message field 'function_status'."""
        return self._function_status

    @function_status.setter
    def function_status(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'function_status' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 32, \
                "The 'function_status' numpy.ndarray() must have a size of 32"
            self._function_status = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'function_status' field must be a set or sequence with length 32 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._function_status = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def hwa_odd_off(self):
        """Message field 'hwa_odd_off'."""
        return self._hwa_odd_off

    @hwa_odd_off.setter
    def hwa_odd_off(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hwa_odd_off' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hwa_odd_off' field must be an unsigned integer in [0, 255]"
        self._hwa_odd_off = value

    @builtins.property
    def smfault_level(self):
        """Message field 'smfault_level'."""
        return self._smfault_level

    @smfault_level.setter
    def smfault_level(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'smfault_level' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 32, \
                "The 'smfault_level' numpy.ndarray() must have a size of 32"
            self._smfault_level = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'smfault_level' field must be a set or sequence with length 32 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._smfault_level = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def prkg_camera_store_resp(self):
        """Message field 'prkg_camera_store_resp'."""
        return self._prkg_camera_store_resp

    @prkg_camera_store_resp.setter
    def prkg_camera_store_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_camera_store_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_camera_store_resp' field must be an unsigned integer in [0, 255]"
        self._prkg_camera_store_resp = value

    @builtins.property
    def rev(self):
        """Message field 'rev'."""
        return self._rev

    @rev.setter
    def rev(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'rev' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 8, \
                "The 'rev' numpy.ndarray() must have a size of 8"
            self._rev = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 8 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'rev' field must be a set or sequence with length 8 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._rev = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def dpa_mode_broadcast(self):
        """Message field 'dpa_mode_broadcast'."""
        return self._dpa_mode_broadcast

    @dpa_mode_broadcast.setter
    def dpa_mode_broadcast(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dpa_mode_broadcast' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dpa_mode_broadcast' field must be an unsigned integer in [0, 255]"
        self._dpa_mode_broadcast = value

    @builtins.property
    def dpa_btn_sts(self):
        """Message field 'dpa_btn_sts'."""
        return self._dpa_btn_sts

    @dpa_btn_sts.setter
    def dpa_btn_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dpa_btn_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dpa_btn_sts' field must be an unsigned integer in [0, 255]"
        self._dpa_btn_sts = value

    @builtins.property
    def sm_fct_err_code2_hmi(self):
        """Message field 'sm_fct_err_code2_hmi'."""
        return self._sm_fct_err_code2_hmi

    @sm_fct_err_code2_hmi.setter
    def sm_fct_err_code2_hmi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_fct_err_code2_hmi' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sm_fct_err_code2_hmi' field must be an unsigned integer in [0, 65535]"
        self._sm_fct_err_code2_hmi = value

    @builtins.property
    def view_layout_req(self):
        """Message field 'view_layout_req'."""
        return self._view_layout_req

    @view_layout_req.setter
    def view_layout_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'view_layout_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'view_layout_req' field must be an unsigned integer in [0, 255]"
        self._view_layout_req = value

    @builtins.property
    def cust_btn_sts(self):
        """Message field 'cust_btn_sts'."""
        return self._cust_btn_sts

    @cust_btn_sts.setter
    def cust_btn_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cust_btn_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cust_btn_sts' field must be an unsigned integer in [0, 255]"
        self._cust_btn_sts = value

    @builtins.property
    def exit_cust_btn_sts(self):
        """Message field 'exit_cust_btn_sts'."""
        return self._exit_cust_btn_sts

    @exit_cust_btn_sts.setter
    def exit_cust_btn_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'exit_cust_btn_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'exit_cust_btn_sts' field must be an unsigned integer in [0, 255]"
        self._exit_cust_btn_sts = value

    @builtins.property
    def frnt_and_re_prkg_in_btn_sts(self):
        """Message field 'frnt_and_re_prkg_in_btn_sts'."""
        return self._frnt_and_re_prkg_in_btn_sts

    @frnt_and_re_prkg_in_btn_sts.setter
    def frnt_and_re_prkg_in_btn_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frnt_and_re_prkg_in_btn_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'frnt_and_re_prkg_in_btn_sts' field must be an unsigned integer in [0, 255]"
        self._frnt_and_re_prkg_in_btn_sts = value

    @builtins.property
    def mai_version(self):
        """Message field 'mai_version'."""
        return self._mai_version

    @mai_version.setter
    def mai_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mai_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mai_version' field must be an unsigned integer in [0, 255]"
        self._mai_version = value

    @builtins.property
    def peb_version(self):
        """Message field 'peb_version'."""
        return self._peb_version

    @peb_version.setter
    def peb_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'peb_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'peb_version' field must be an unsigned integer in [0, 255]"
        self._peb_version = value

    @builtins.property
    def lo_spd_and_trk_bck_sub_sts(self):
        """Message field 'lo_spd_and_trk_bck_sub_sts'."""
        return self._lo_spd_and_trk_bck_sub_sts

    @lo_spd_and_trk_bck_sub_sts.setter
    def lo_spd_and_trk_bck_sub_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lo_spd_and_trk_bck_sub_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lo_spd_and_trk_bck_sub_sts' field must be an unsigned integer in [0, 255]"
        self._lo_spd_and_trk_bck_sub_sts = value

    @builtins.property
    def fill_light_req(self):
        """Message field 'fill_light_req'."""
        return self._fill_light_req

    @fill_light_req.setter
    def fill_light_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fill_light_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fill_light_req' field must be an unsigned integer in [0, 255]"
        self._fill_light_req = value
