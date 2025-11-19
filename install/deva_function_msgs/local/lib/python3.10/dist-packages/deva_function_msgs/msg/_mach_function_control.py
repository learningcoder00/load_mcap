# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/MachFunctionControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MachFunctionControl(type):
    """Metaclass of message 'MachFunctionControl'."""

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
                'deva_function_msgs.msg.MachFunctionControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mach_function_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mach_function_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mach_function_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mach_function_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mach_function_control

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


class MachFunctionControl(metaclass=Metaclass_MachFunctionControl):
    """Message class 'MachFunctionControl'."""

    __slots__ = [
        '_header',
        '_asy_aut_drvg_avl',
        '_asy_lat_offst_sts',
        '_asy_noa_degrade_msg',
        '_lane_chg_aut_info_for_asy_hi_way',
        '_lane_chg_aut_sts_for_asy_hi_way',
        '_ti_gap_set_for_lgt_ctrl',
        '_asy_lgt_ctrl_take_over_req',
        '_steer_tq_addl_for_ema_steer_tq_addl_for_ema',
        '_strt_req_of_lgt_ctrl_for_prpsn',
        '_asy_noa_deactvd_reasn_mesg',
        '_asy_noa_remind_mesg',
        '_asy_high_beam_flash_warn_rqrd',
        '_asy_noa_takeover_mesg',
        '_asy_fast_lane_swt_sts',
        '_asy_cnoa_auto_lane_chg_style',
        '_asy_cnoa_crs_actv_faild_msg',
        '_asy_cnoa_crs_cross_intsec_msg',
        '_asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg',
        '_asy_cnoa_crs_finshd_msg',
        '_asy_cnoa_crs_ind_ti_gap_msg',
        '_asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg',
        '_asy_cnoa_crs_actv_msg',
        '_asy_cnoa_crs_off_odddistan',
        '_asy_cnoa_crs_sts',
        '_asy_cnoa_game_fail_type',
        '_asy_cnoa_game_reason',
        '_asy_cnoa_crs_sts_csd_msg',
        '_asy_cnoa_crs_swt_on_off',
        '_asy_cnoa_crs_swt_sts',
        '_asy_cnoa_data_download_faild_msg',
        '_asy_cnoa_crs_offs_msg',
        '_asy_cnoa_crs_rmn_msg',
        '_asy_cnoa_sod_lane_chg_swt',
        '_asy_cnoa_lrng_prmpt_msg',
        '_asy_cnoa_lrng_swt_on_off',
        '_asy_cnoa_lrng_swt_sts',
        '_asy_cnoa_takeover_warn_msg',
        '_asy_cnoa_turn_fail_type',
        '_asy_cnoa_turn_sts',
        '_asy_noa_tar_spd_offs',
        '_asy_noa_avl_rmn',
        '_asy_aut_lane_chg_swt_sts',
        '_stop_req_of_lgt_ctrl_for_prpsn',
        '_ad_theme_disp',
        '_cncl_warn_for_aut_drv',
        '_disp_tsi_info_for_lgt_ctrl',
        '_disp_spd_set_for_lgt_ctrl',
        '_hmi_nop_cofm_of_lan_chag',
        '_ad4_lane_chg_for_e2e',
        '_hwa_leading_point_valid',
        '_hwa_leading_point_center_y',
        '_hwa_leading_point_center_x',
        '_ad4_turn_indic_req_req',
        '_ad4_unavl_sts_for_e2e',
        '_ad4_warn_sts_for_e2e',
        '_ad4_win_open_req',
        '_ad_ctrl_mode_ad_ctrl_mode',
        '_ad4_drv_off_req_for_lgt_ctrl_drv_off_req',
        '_asy_dece_remind',
        '_asy_lat_offs_swt_sts',
        '_asy_undertak_on_off_sts',
        '_asy_undertak_rmind',
        '_asy_warn_mesg_for_aut_drv',
        '_lgt_fusn_trfc_sgn',
        '_drvg_ast_on_sys_sts',
        '_asy_d2d_avl_rmn',
        '_asy_d2d_deactvd_reasn_mesg',
        '_asy_d2d_distan_msg',
        '_asy_d2d_etc_distan_msg',
        '_asy_d2d_remind_msg',
        '_asy_etc_traffic_sw_sts',
        '_asy_d2d_strt_to_end',
        '_asy_safe_stop_sts',
        '_asy_sod_lane_chg_switch',
        '_avl_sts_for_long_aut_drv_sound',
        '_asy_sod_pilot_cfirm',
        '_cncl_warn_for_aut_drv_sound',
        '_cncl_warn_lgt_for_aut_drv_sound',
        '_hmi_auto_lane_chg_style',
        '_hmi_lane_chg_info',
        '_ovrd_wrn_for_fst_actv',
        '_ad4_frt_lamp_req',
        '_ad4_rear_fog_lamp_req',
        '_ad4_res_req_for_e2e',
        '_ad4_trunk_ctrl_req',
        '_acc_fusn_trfc_sgn',
        '_asy_sfty_fct_sts_to_edraccfct_sts',
        '_asy_sfty_fct_sts_to_edracsfb1_fct_sts',
        '_asy_sfty_fct_sts_to_edracsfb2_fct_sts',
        '_asy_sfty_fct_sts_to_edracsfc_fct_sts',
        '_asy_sfty_fct_sts_to_edracsfd_fct_sts',
        '_asy_sfty_fct_sts_to_edracsfe_fct_sts',
        '_asy_cnoa_crs_csd_indcr',
        '_asy_cnoa_crs_hud_indcr',
        '_asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr',
        '_asy_emgy_manoeuvre_aid_sts',
        '_asy_fctn_ihbt_by_trlr',
        '_asy_icc_max_warn_msg',
        '_asy_sfty_hwl_req',
        '_aut_lane_chg_sts',
        '_cllsn_aid_post_ema',
        '_lane_chg_aut_actv_sts',
        '_cam_sts_cam_cam_frnt_cal_not_cmpl',
        '_asy_cnoa_lane_chg_assist_sts',
        '_asy_cnoa_lane_chg_fail_type',
        '_aut_cnoa_lane_chg_sts',
        '_asy_cnoa_req_lane_chg',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'asy_aut_drvg_avl': 'uint8',
        'asy_lat_offst_sts': 'uint8',
        'asy_noa_degrade_msg': 'uint8',
        'lane_chg_aut_info_for_asy_hi_way': 'uint8',
        'lane_chg_aut_sts_for_asy_hi_way': 'uint8',
        'ti_gap_set_for_lgt_ctrl': 'uint8',
        'asy_lgt_ctrl_take_over_req': 'uint8',
        'steer_tq_addl_for_ema_steer_tq_addl_for_ema': 'float',
        'strt_req_of_lgt_ctrl_for_prpsn': 'uint8',
        'asy_noa_deactvd_reasn_mesg': 'uint8',
        'asy_noa_remind_mesg': 'uint8',
        'asy_high_beam_flash_warn_rqrd': 'uint8',
        'asy_noa_takeover_mesg': 'uint8',
        'asy_fast_lane_swt_sts': 'uint8',
        'asy_cnoa_auto_lane_chg_style': 'uint8',
        'asy_cnoa_crs_actv_faild_msg': 'uint8',
        'asy_cnoa_crs_cross_intsec_msg': 'uint8',
        'asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg': 'uint8',
        'asy_cnoa_crs_finshd_msg': 'uint8',
        'asy_cnoa_crs_ind_ti_gap_msg': 'uint8',
        'asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg': 'uint8',
        'asy_cnoa_crs_actv_msg': 'uint8',
        'asy_cnoa_crs_off_odddistan': 'uint32',
        'asy_cnoa_crs_sts': 'uint8',
        'asy_cnoa_game_fail_type': 'uint8',
        'asy_cnoa_game_reason': 'uint8',
        'asy_cnoa_crs_sts_csd_msg': 'uint8',
        'asy_cnoa_crs_swt_on_off': 'uint8',
        'asy_cnoa_crs_swt_sts': 'uint8',
        'asy_cnoa_data_download_faild_msg': 'uint8',
        'asy_cnoa_crs_offs_msg': 'uint8',
        'asy_cnoa_crs_rmn_msg': 'uint8',
        'asy_cnoa_sod_lane_chg_swt': 'uint8',
        'asy_cnoa_lrng_prmpt_msg': 'uint8',
        'asy_cnoa_lrng_swt_on_off': 'uint8',
        'asy_cnoa_lrng_swt_sts': 'uint8',
        'asy_cnoa_takeover_warn_msg': 'uint8',
        'asy_cnoa_turn_fail_type': 'uint8',
        'asy_cnoa_turn_sts': 'uint8',
        'asy_noa_tar_spd_offs': 'uint8',
        'asy_noa_avl_rmn': 'uint8',
        'asy_aut_lane_chg_swt_sts': 'uint8',
        'stop_req_of_lgt_ctrl_for_prpsn': 'uint8',
        'ad_theme_disp': 'uint8',
        'cncl_warn_for_aut_drv': 'uint8',
        'disp_tsi_info_for_lgt_ctrl': 'uint8',
        'disp_spd_set_for_lgt_ctrl': 'uint16',
        'hmi_nop_cofm_of_lan_chag': 'uint8',
        'ad4_lane_chg_for_e2e': 'uint8',
        'hwa_leading_point_valid': 'uint8',
        'hwa_leading_point_center_y': 'float',
        'hwa_leading_point_center_x': 'float',
        'ad4_turn_indic_req_req': 'uint8',
        'ad4_unavl_sts_for_e2e': 'uint8',
        'ad4_warn_sts_for_e2e': 'uint8',
        'ad4_win_open_req': 'uint8',
        'ad_ctrl_mode_ad_ctrl_mode': 'uint8',
        'ad4_drv_off_req_for_lgt_ctrl_drv_off_req': 'uint8',
        'asy_dece_remind': 'uint8',
        'asy_lat_offs_swt_sts': 'uint8',
        'asy_undertak_on_off_sts': 'uint8',
        'asy_undertak_rmind': 'uint8',
        'asy_warn_mesg_for_aut_drv': 'uint8',
        'lgt_fusn_trfc_sgn': 'uint8',
        'drvg_ast_on_sys_sts': 'uint8',
        'asy_d2d_avl_rmn': 'uint8',
        'asy_d2d_deactvd_reasn_mesg': 'uint8',
        'asy_d2d_distan_msg': 'uint8',
        'asy_d2d_etc_distan_msg': 'uint8',
        'asy_d2d_remind_msg': 'uint8',
        'asy_etc_traffic_sw_sts': 'uint8',
        'asy_d2d_strt_to_end': 'uint8',
        'asy_safe_stop_sts': 'uint8',
        'asy_sod_lane_chg_switch': 'uint8',
        'avl_sts_for_long_aut_drv_sound': 'uint8',
        'asy_sod_pilot_cfirm': 'uint8',
        'cncl_warn_for_aut_drv_sound': 'uint8',
        'cncl_warn_lgt_for_aut_drv_sound': 'uint8',
        'hmi_auto_lane_chg_style': 'uint8',
        'hmi_lane_chg_info': 'uint8',
        'ovrd_wrn_for_fst_actv': 'uint8',
        'ad4_frt_lamp_req': 'uint8',
        'ad4_rear_fog_lamp_req': 'uint8',
        'ad4_res_req_for_e2e': 'uint8',
        'ad4_trunk_ctrl_req': 'uint8',
        'acc_fusn_trfc_sgn': 'uint8',
        'asy_sfty_fct_sts_to_edraccfct_sts': 'uint8',
        'asy_sfty_fct_sts_to_edracsfb1_fct_sts': 'uint8',
        'asy_sfty_fct_sts_to_edracsfb2_fct_sts': 'uint8',
        'asy_sfty_fct_sts_to_edracsfc_fct_sts': 'uint8',
        'asy_sfty_fct_sts_to_edracsfd_fct_sts': 'uint8',
        'asy_sfty_fct_sts_to_edracsfe_fct_sts': 'uint8',
        'asy_cnoa_crs_csd_indcr': 'uint8',
        'asy_cnoa_crs_hud_indcr': 'uint8',
        'asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr': 'uint8',
        'asy_emgy_manoeuvre_aid_sts': 'uint8',
        'asy_fctn_ihbt_by_trlr': 'uint8',
        'asy_icc_max_warn_msg': 'uint8',
        'asy_sfty_hwl_req': 'uint8',
        'aut_lane_chg_sts': 'uint8',
        'cllsn_aid_post_ema': 'uint8',
        'lane_chg_aut_actv_sts': 'uint8',
        'cam_sts_cam_cam_frnt_cal_not_cmpl': 'uint8',
        'asy_cnoa_lane_chg_assist_sts': 'uint8',
        'asy_cnoa_lane_chg_fail_type': 'uint8',
        'aut_cnoa_lane_chg_sts': 'uint8',
        'asy_cnoa_req_lane_chg': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.asy_aut_drvg_avl = kwargs.get('asy_aut_drvg_avl', int())
        self.asy_lat_offst_sts = kwargs.get('asy_lat_offst_sts', int())
        self.asy_noa_degrade_msg = kwargs.get('asy_noa_degrade_msg', int())
        self.lane_chg_aut_info_for_asy_hi_way = kwargs.get('lane_chg_aut_info_for_asy_hi_way', int())
        self.lane_chg_aut_sts_for_asy_hi_way = kwargs.get('lane_chg_aut_sts_for_asy_hi_way', int())
        self.ti_gap_set_for_lgt_ctrl = kwargs.get('ti_gap_set_for_lgt_ctrl', int())
        self.asy_lgt_ctrl_take_over_req = kwargs.get('asy_lgt_ctrl_take_over_req', int())
        self.steer_tq_addl_for_ema_steer_tq_addl_for_ema = kwargs.get('steer_tq_addl_for_ema_steer_tq_addl_for_ema', float())
        self.strt_req_of_lgt_ctrl_for_prpsn = kwargs.get('strt_req_of_lgt_ctrl_for_prpsn', int())
        self.asy_noa_deactvd_reasn_mesg = kwargs.get('asy_noa_deactvd_reasn_mesg', int())
        self.asy_noa_remind_mesg = kwargs.get('asy_noa_remind_mesg', int())
        self.asy_high_beam_flash_warn_rqrd = kwargs.get('asy_high_beam_flash_warn_rqrd', int())
        self.asy_noa_takeover_mesg = kwargs.get('asy_noa_takeover_mesg', int())
        self.asy_fast_lane_swt_sts = kwargs.get('asy_fast_lane_swt_sts', int())
        self.asy_cnoa_auto_lane_chg_style = kwargs.get('asy_cnoa_auto_lane_chg_style', int())
        self.asy_cnoa_crs_actv_faild_msg = kwargs.get('asy_cnoa_crs_actv_faild_msg', int())
        self.asy_cnoa_crs_cross_intsec_msg = kwargs.get('asy_cnoa_crs_cross_intsec_msg', int())
        self.asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg = kwargs.get('asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg', int())
        self.asy_cnoa_crs_finshd_msg = kwargs.get('asy_cnoa_crs_finshd_msg', int())
        self.asy_cnoa_crs_ind_ti_gap_msg = kwargs.get('asy_cnoa_crs_ind_ti_gap_msg', int())
        self.asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg = kwargs.get('asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg', int())
        self.asy_cnoa_crs_actv_msg = kwargs.get('asy_cnoa_crs_actv_msg', int())
        self.asy_cnoa_crs_off_odddistan = kwargs.get('asy_cnoa_crs_off_odddistan', int())
        self.asy_cnoa_crs_sts = kwargs.get('asy_cnoa_crs_sts', int())
        self.asy_cnoa_game_fail_type = kwargs.get('asy_cnoa_game_fail_type', int())
        self.asy_cnoa_game_reason = kwargs.get('asy_cnoa_game_reason', int())
        self.asy_cnoa_crs_sts_csd_msg = kwargs.get('asy_cnoa_crs_sts_csd_msg', int())
        self.asy_cnoa_crs_swt_on_off = kwargs.get('asy_cnoa_crs_swt_on_off', int())
        self.asy_cnoa_crs_swt_sts = kwargs.get('asy_cnoa_crs_swt_sts', int())
        self.asy_cnoa_data_download_faild_msg = kwargs.get('asy_cnoa_data_download_faild_msg', int())
        self.asy_cnoa_crs_offs_msg = kwargs.get('asy_cnoa_crs_offs_msg', int())
        self.asy_cnoa_crs_rmn_msg = kwargs.get('asy_cnoa_crs_rmn_msg', int())
        self.asy_cnoa_sod_lane_chg_swt = kwargs.get('asy_cnoa_sod_lane_chg_swt', int())
        self.asy_cnoa_lrng_prmpt_msg = kwargs.get('asy_cnoa_lrng_prmpt_msg', int())
        self.asy_cnoa_lrng_swt_on_off = kwargs.get('asy_cnoa_lrng_swt_on_off', int())
        self.asy_cnoa_lrng_swt_sts = kwargs.get('asy_cnoa_lrng_swt_sts', int())
        self.asy_cnoa_takeover_warn_msg = kwargs.get('asy_cnoa_takeover_warn_msg', int())
        self.asy_cnoa_turn_fail_type = kwargs.get('asy_cnoa_turn_fail_type', int())
        self.asy_cnoa_turn_sts = kwargs.get('asy_cnoa_turn_sts', int())
        self.asy_noa_tar_spd_offs = kwargs.get('asy_noa_tar_spd_offs', int())
        self.asy_noa_avl_rmn = kwargs.get('asy_noa_avl_rmn', int())
        self.asy_aut_lane_chg_swt_sts = kwargs.get('asy_aut_lane_chg_swt_sts', int())
        self.stop_req_of_lgt_ctrl_for_prpsn = kwargs.get('stop_req_of_lgt_ctrl_for_prpsn', int())
        self.ad_theme_disp = kwargs.get('ad_theme_disp', int())
        self.cncl_warn_for_aut_drv = kwargs.get('cncl_warn_for_aut_drv', int())
        self.disp_tsi_info_for_lgt_ctrl = kwargs.get('disp_tsi_info_for_lgt_ctrl', int())
        self.disp_spd_set_for_lgt_ctrl = kwargs.get('disp_spd_set_for_lgt_ctrl', int())
        self.hmi_nop_cofm_of_lan_chag = kwargs.get('hmi_nop_cofm_of_lan_chag', int())
        self.ad4_lane_chg_for_e2e = kwargs.get('ad4_lane_chg_for_e2e', int())
        self.hwa_leading_point_valid = kwargs.get('hwa_leading_point_valid', int())
        self.hwa_leading_point_center_y = kwargs.get('hwa_leading_point_center_y', float())
        self.hwa_leading_point_center_x = kwargs.get('hwa_leading_point_center_x', float())
        self.ad4_turn_indic_req_req = kwargs.get('ad4_turn_indic_req_req', int())
        self.ad4_unavl_sts_for_e2e = kwargs.get('ad4_unavl_sts_for_e2e', int())
        self.ad4_warn_sts_for_e2e = kwargs.get('ad4_warn_sts_for_e2e', int())
        self.ad4_win_open_req = kwargs.get('ad4_win_open_req', int())
        self.ad_ctrl_mode_ad_ctrl_mode = kwargs.get('ad_ctrl_mode_ad_ctrl_mode', int())
        self.ad4_drv_off_req_for_lgt_ctrl_drv_off_req = kwargs.get('ad4_drv_off_req_for_lgt_ctrl_drv_off_req', int())
        self.asy_dece_remind = kwargs.get('asy_dece_remind', int())
        self.asy_lat_offs_swt_sts = kwargs.get('asy_lat_offs_swt_sts', int())
        self.asy_undertak_on_off_sts = kwargs.get('asy_undertak_on_off_sts', int())
        self.asy_undertak_rmind = kwargs.get('asy_undertak_rmind', int())
        self.asy_warn_mesg_for_aut_drv = kwargs.get('asy_warn_mesg_for_aut_drv', int())
        self.lgt_fusn_trfc_sgn = kwargs.get('lgt_fusn_trfc_sgn', int())
        self.drvg_ast_on_sys_sts = kwargs.get('drvg_ast_on_sys_sts', int())
        self.asy_d2d_avl_rmn = kwargs.get('asy_d2d_avl_rmn', int())
        self.asy_d2d_deactvd_reasn_mesg = kwargs.get('asy_d2d_deactvd_reasn_mesg', int())
        self.asy_d2d_distan_msg = kwargs.get('asy_d2d_distan_msg', int())
        self.asy_d2d_etc_distan_msg = kwargs.get('asy_d2d_etc_distan_msg', int())
        self.asy_d2d_remind_msg = kwargs.get('asy_d2d_remind_msg', int())
        self.asy_etc_traffic_sw_sts = kwargs.get('asy_etc_traffic_sw_sts', int())
        self.asy_d2d_strt_to_end = kwargs.get('asy_d2d_strt_to_end', int())
        self.asy_safe_stop_sts = kwargs.get('asy_safe_stop_sts', int())
        self.asy_sod_lane_chg_switch = kwargs.get('asy_sod_lane_chg_switch', int())
        self.avl_sts_for_long_aut_drv_sound = kwargs.get('avl_sts_for_long_aut_drv_sound', int())
        self.asy_sod_pilot_cfirm = kwargs.get('asy_sod_pilot_cfirm', int())
        self.cncl_warn_for_aut_drv_sound = kwargs.get('cncl_warn_for_aut_drv_sound', int())
        self.cncl_warn_lgt_for_aut_drv_sound = kwargs.get('cncl_warn_lgt_for_aut_drv_sound', int())
        self.hmi_auto_lane_chg_style = kwargs.get('hmi_auto_lane_chg_style', int())
        self.hmi_lane_chg_info = kwargs.get('hmi_lane_chg_info', int())
        self.ovrd_wrn_for_fst_actv = kwargs.get('ovrd_wrn_for_fst_actv', int())
        self.ad4_frt_lamp_req = kwargs.get('ad4_frt_lamp_req', int())
        self.ad4_rear_fog_lamp_req = kwargs.get('ad4_rear_fog_lamp_req', int())
        self.ad4_res_req_for_e2e = kwargs.get('ad4_res_req_for_e2e', int())
        self.ad4_trunk_ctrl_req = kwargs.get('ad4_trunk_ctrl_req', int())
        self.acc_fusn_trfc_sgn = kwargs.get('acc_fusn_trfc_sgn', int())
        self.asy_sfty_fct_sts_to_edraccfct_sts = kwargs.get('asy_sfty_fct_sts_to_edraccfct_sts', int())
        self.asy_sfty_fct_sts_to_edracsfb1_fct_sts = kwargs.get('asy_sfty_fct_sts_to_edracsfb1_fct_sts', int())
        self.asy_sfty_fct_sts_to_edracsfb2_fct_sts = kwargs.get('asy_sfty_fct_sts_to_edracsfb2_fct_sts', int())
        self.asy_sfty_fct_sts_to_edracsfc_fct_sts = kwargs.get('asy_sfty_fct_sts_to_edracsfc_fct_sts', int())
        self.asy_sfty_fct_sts_to_edracsfd_fct_sts = kwargs.get('asy_sfty_fct_sts_to_edracsfd_fct_sts', int())
        self.asy_sfty_fct_sts_to_edracsfe_fct_sts = kwargs.get('asy_sfty_fct_sts_to_edracsfe_fct_sts', int())
        self.asy_cnoa_crs_csd_indcr = kwargs.get('asy_cnoa_crs_csd_indcr', int())
        self.asy_cnoa_crs_hud_indcr = kwargs.get('asy_cnoa_crs_hud_indcr', int())
        self.asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr = kwargs.get('asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr', int())
        self.asy_emgy_manoeuvre_aid_sts = kwargs.get('asy_emgy_manoeuvre_aid_sts', int())
        self.asy_fctn_ihbt_by_trlr = kwargs.get('asy_fctn_ihbt_by_trlr', int())
        self.asy_icc_max_warn_msg = kwargs.get('asy_icc_max_warn_msg', int())
        self.asy_sfty_hwl_req = kwargs.get('asy_sfty_hwl_req', int())
        self.aut_lane_chg_sts = kwargs.get('aut_lane_chg_sts', int())
        self.cllsn_aid_post_ema = kwargs.get('cllsn_aid_post_ema', int())
        self.lane_chg_aut_actv_sts = kwargs.get('lane_chg_aut_actv_sts', int())
        self.cam_sts_cam_cam_frnt_cal_not_cmpl = kwargs.get('cam_sts_cam_cam_frnt_cal_not_cmpl', int())
        self.asy_cnoa_lane_chg_assist_sts = kwargs.get('asy_cnoa_lane_chg_assist_sts', int())
        self.asy_cnoa_lane_chg_fail_type = kwargs.get('asy_cnoa_lane_chg_fail_type', int())
        self.aut_cnoa_lane_chg_sts = kwargs.get('aut_cnoa_lane_chg_sts', int())
        self.asy_cnoa_req_lane_chg = kwargs.get('asy_cnoa_req_lane_chg', int())

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
        if self.asy_aut_drvg_avl != other.asy_aut_drvg_avl:
            return False
        if self.asy_lat_offst_sts != other.asy_lat_offst_sts:
            return False
        if self.asy_noa_degrade_msg != other.asy_noa_degrade_msg:
            return False
        if self.lane_chg_aut_info_for_asy_hi_way != other.lane_chg_aut_info_for_asy_hi_way:
            return False
        if self.lane_chg_aut_sts_for_asy_hi_way != other.lane_chg_aut_sts_for_asy_hi_way:
            return False
        if self.ti_gap_set_for_lgt_ctrl != other.ti_gap_set_for_lgt_ctrl:
            return False
        if self.asy_lgt_ctrl_take_over_req != other.asy_lgt_ctrl_take_over_req:
            return False
        if self.steer_tq_addl_for_ema_steer_tq_addl_for_ema != other.steer_tq_addl_for_ema_steer_tq_addl_for_ema:
            return False
        if self.strt_req_of_lgt_ctrl_for_prpsn != other.strt_req_of_lgt_ctrl_for_prpsn:
            return False
        if self.asy_noa_deactvd_reasn_mesg != other.asy_noa_deactvd_reasn_mesg:
            return False
        if self.asy_noa_remind_mesg != other.asy_noa_remind_mesg:
            return False
        if self.asy_high_beam_flash_warn_rqrd != other.asy_high_beam_flash_warn_rqrd:
            return False
        if self.asy_noa_takeover_mesg != other.asy_noa_takeover_mesg:
            return False
        if self.asy_fast_lane_swt_sts != other.asy_fast_lane_swt_sts:
            return False
        if self.asy_cnoa_auto_lane_chg_style != other.asy_cnoa_auto_lane_chg_style:
            return False
        if self.asy_cnoa_crs_actv_faild_msg != other.asy_cnoa_crs_actv_faild_msg:
            return False
        if self.asy_cnoa_crs_cross_intsec_msg != other.asy_cnoa_crs_cross_intsec_msg:
            return False
        if self.asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg != other.asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg:
            return False
        if self.asy_cnoa_crs_finshd_msg != other.asy_cnoa_crs_finshd_msg:
            return False
        if self.asy_cnoa_crs_ind_ti_gap_msg != other.asy_cnoa_crs_ind_ti_gap_msg:
            return False
        if self.asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg != other.asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg:
            return False
        if self.asy_cnoa_crs_actv_msg != other.asy_cnoa_crs_actv_msg:
            return False
        if self.asy_cnoa_crs_off_odddistan != other.asy_cnoa_crs_off_odddistan:
            return False
        if self.asy_cnoa_crs_sts != other.asy_cnoa_crs_sts:
            return False
        if self.asy_cnoa_game_fail_type != other.asy_cnoa_game_fail_type:
            return False
        if self.asy_cnoa_game_reason != other.asy_cnoa_game_reason:
            return False
        if self.asy_cnoa_crs_sts_csd_msg != other.asy_cnoa_crs_sts_csd_msg:
            return False
        if self.asy_cnoa_crs_swt_on_off != other.asy_cnoa_crs_swt_on_off:
            return False
        if self.asy_cnoa_crs_swt_sts != other.asy_cnoa_crs_swt_sts:
            return False
        if self.asy_cnoa_data_download_faild_msg != other.asy_cnoa_data_download_faild_msg:
            return False
        if self.asy_cnoa_crs_offs_msg != other.asy_cnoa_crs_offs_msg:
            return False
        if self.asy_cnoa_crs_rmn_msg != other.asy_cnoa_crs_rmn_msg:
            return False
        if self.asy_cnoa_sod_lane_chg_swt != other.asy_cnoa_sod_lane_chg_swt:
            return False
        if self.asy_cnoa_lrng_prmpt_msg != other.asy_cnoa_lrng_prmpt_msg:
            return False
        if self.asy_cnoa_lrng_swt_on_off != other.asy_cnoa_lrng_swt_on_off:
            return False
        if self.asy_cnoa_lrng_swt_sts != other.asy_cnoa_lrng_swt_sts:
            return False
        if self.asy_cnoa_takeover_warn_msg != other.asy_cnoa_takeover_warn_msg:
            return False
        if self.asy_cnoa_turn_fail_type != other.asy_cnoa_turn_fail_type:
            return False
        if self.asy_cnoa_turn_sts != other.asy_cnoa_turn_sts:
            return False
        if self.asy_noa_tar_spd_offs != other.asy_noa_tar_spd_offs:
            return False
        if self.asy_noa_avl_rmn != other.asy_noa_avl_rmn:
            return False
        if self.asy_aut_lane_chg_swt_sts != other.asy_aut_lane_chg_swt_sts:
            return False
        if self.stop_req_of_lgt_ctrl_for_prpsn != other.stop_req_of_lgt_ctrl_for_prpsn:
            return False
        if self.ad_theme_disp != other.ad_theme_disp:
            return False
        if self.cncl_warn_for_aut_drv != other.cncl_warn_for_aut_drv:
            return False
        if self.disp_tsi_info_for_lgt_ctrl != other.disp_tsi_info_for_lgt_ctrl:
            return False
        if self.disp_spd_set_for_lgt_ctrl != other.disp_spd_set_for_lgt_ctrl:
            return False
        if self.hmi_nop_cofm_of_lan_chag != other.hmi_nop_cofm_of_lan_chag:
            return False
        if self.ad4_lane_chg_for_e2e != other.ad4_lane_chg_for_e2e:
            return False
        if self.hwa_leading_point_valid != other.hwa_leading_point_valid:
            return False
        if self.hwa_leading_point_center_y != other.hwa_leading_point_center_y:
            return False
        if self.hwa_leading_point_center_x != other.hwa_leading_point_center_x:
            return False
        if self.ad4_turn_indic_req_req != other.ad4_turn_indic_req_req:
            return False
        if self.ad4_unavl_sts_for_e2e != other.ad4_unavl_sts_for_e2e:
            return False
        if self.ad4_warn_sts_for_e2e != other.ad4_warn_sts_for_e2e:
            return False
        if self.ad4_win_open_req != other.ad4_win_open_req:
            return False
        if self.ad_ctrl_mode_ad_ctrl_mode != other.ad_ctrl_mode_ad_ctrl_mode:
            return False
        if self.ad4_drv_off_req_for_lgt_ctrl_drv_off_req != other.ad4_drv_off_req_for_lgt_ctrl_drv_off_req:
            return False
        if self.asy_dece_remind != other.asy_dece_remind:
            return False
        if self.asy_lat_offs_swt_sts != other.asy_lat_offs_swt_sts:
            return False
        if self.asy_undertak_on_off_sts != other.asy_undertak_on_off_sts:
            return False
        if self.asy_undertak_rmind != other.asy_undertak_rmind:
            return False
        if self.asy_warn_mesg_for_aut_drv != other.asy_warn_mesg_for_aut_drv:
            return False
        if self.lgt_fusn_trfc_sgn != other.lgt_fusn_trfc_sgn:
            return False
        if self.drvg_ast_on_sys_sts != other.drvg_ast_on_sys_sts:
            return False
        if self.asy_d2d_avl_rmn != other.asy_d2d_avl_rmn:
            return False
        if self.asy_d2d_deactvd_reasn_mesg != other.asy_d2d_deactvd_reasn_mesg:
            return False
        if self.asy_d2d_distan_msg != other.asy_d2d_distan_msg:
            return False
        if self.asy_d2d_etc_distan_msg != other.asy_d2d_etc_distan_msg:
            return False
        if self.asy_d2d_remind_msg != other.asy_d2d_remind_msg:
            return False
        if self.asy_etc_traffic_sw_sts != other.asy_etc_traffic_sw_sts:
            return False
        if self.asy_d2d_strt_to_end != other.asy_d2d_strt_to_end:
            return False
        if self.asy_safe_stop_sts != other.asy_safe_stop_sts:
            return False
        if self.asy_sod_lane_chg_switch != other.asy_sod_lane_chg_switch:
            return False
        if self.avl_sts_for_long_aut_drv_sound != other.avl_sts_for_long_aut_drv_sound:
            return False
        if self.asy_sod_pilot_cfirm != other.asy_sod_pilot_cfirm:
            return False
        if self.cncl_warn_for_aut_drv_sound != other.cncl_warn_for_aut_drv_sound:
            return False
        if self.cncl_warn_lgt_for_aut_drv_sound != other.cncl_warn_lgt_for_aut_drv_sound:
            return False
        if self.hmi_auto_lane_chg_style != other.hmi_auto_lane_chg_style:
            return False
        if self.hmi_lane_chg_info != other.hmi_lane_chg_info:
            return False
        if self.ovrd_wrn_for_fst_actv != other.ovrd_wrn_for_fst_actv:
            return False
        if self.ad4_frt_lamp_req != other.ad4_frt_lamp_req:
            return False
        if self.ad4_rear_fog_lamp_req != other.ad4_rear_fog_lamp_req:
            return False
        if self.ad4_res_req_for_e2e != other.ad4_res_req_for_e2e:
            return False
        if self.ad4_trunk_ctrl_req != other.ad4_trunk_ctrl_req:
            return False
        if self.acc_fusn_trfc_sgn != other.acc_fusn_trfc_sgn:
            return False
        if self.asy_sfty_fct_sts_to_edraccfct_sts != other.asy_sfty_fct_sts_to_edraccfct_sts:
            return False
        if self.asy_sfty_fct_sts_to_edracsfb1_fct_sts != other.asy_sfty_fct_sts_to_edracsfb1_fct_sts:
            return False
        if self.asy_sfty_fct_sts_to_edracsfb2_fct_sts != other.asy_sfty_fct_sts_to_edracsfb2_fct_sts:
            return False
        if self.asy_sfty_fct_sts_to_edracsfc_fct_sts != other.asy_sfty_fct_sts_to_edracsfc_fct_sts:
            return False
        if self.asy_sfty_fct_sts_to_edracsfd_fct_sts != other.asy_sfty_fct_sts_to_edracsfd_fct_sts:
            return False
        if self.asy_sfty_fct_sts_to_edracsfe_fct_sts != other.asy_sfty_fct_sts_to_edracsfe_fct_sts:
            return False
        if self.asy_cnoa_crs_csd_indcr != other.asy_cnoa_crs_csd_indcr:
            return False
        if self.asy_cnoa_crs_hud_indcr != other.asy_cnoa_crs_hud_indcr:
            return False
        if self.asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr != other.asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr:
            return False
        if self.asy_emgy_manoeuvre_aid_sts != other.asy_emgy_manoeuvre_aid_sts:
            return False
        if self.asy_fctn_ihbt_by_trlr != other.asy_fctn_ihbt_by_trlr:
            return False
        if self.asy_icc_max_warn_msg != other.asy_icc_max_warn_msg:
            return False
        if self.asy_sfty_hwl_req != other.asy_sfty_hwl_req:
            return False
        if self.aut_lane_chg_sts != other.aut_lane_chg_sts:
            return False
        if self.cllsn_aid_post_ema != other.cllsn_aid_post_ema:
            return False
        if self.lane_chg_aut_actv_sts != other.lane_chg_aut_actv_sts:
            return False
        if self.cam_sts_cam_cam_frnt_cal_not_cmpl != other.cam_sts_cam_cam_frnt_cal_not_cmpl:
            return False
        if self.asy_cnoa_lane_chg_assist_sts != other.asy_cnoa_lane_chg_assist_sts:
            return False
        if self.asy_cnoa_lane_chg_fail_type != other.asy_cnoa_lane_chg_fail_type:
            return False
        if self.aut_cnoa_lane_chg_sts != other.aut_cnoa_lane_chg_sts:
            return False
        if self.asy_cnoa_req_lane_chg != other.asy_cnoa_req_lane_chg:
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
    def asy_aut_drvg_avl(self):
        """Message field 'asy_aut_drvg_avl'."""
        return self._asy_aut_drvg_avl

    @asy_aut_drvg_avl.setter
    def asy_aut_drvg_avl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_aut_drvg_avl' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_aut_drvg_avl' field must be an unsigned integer in [0, 255]"
        self._asy_aut_drvg_avl = value

    @builtins.property
    def asy_lat_offst_sts(self):
        """Message field 'asy_lat_offst_sts'."""
        return self._asy_lat_offst_sts

    @asy_lat_offst_sts.setter
    def asy_lat_offst_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_lat_offst_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_lat_offst_sts' field must be an unsigned integer in [0, 255]"
        self._asy_lat_offst_sts = value

    @builtins.property
    def asy_noa_degrade_msg(self):
        """Message field 'asy_noa_degrade_msg'."""
        return self._asy_noa_degrade_msg

    @asy_noa_degrade_msg.setter
    def asy_noa_degrade_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_degrade_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_degrade_msg' field must be an unsigned integer in [0, 255]"
        self._asy_noa_degrade_msg = value

    @builtins.property
    def lane_chg_aut_info_for_asy_hi_way(self):
        """Message field 'lane_chg_aut_info_for_asy_hi_way'."""
        return self._lane_chg_aut_info_for_asy_hi_way

    @lane_chg_aut_info_for_asy_hi_way.setter
    def lane_chg_aut_info_for_asy_hi_way(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_chg_aut_info_for_asy_hi_way' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_chg_aut_info_for_asy_hi_way' field must be an unsigned integer in [0, 255]"
        self._lane_chg_aut_info_for_asy_hi_way = value

    @builtins.property
    def lane_chg_aut_sts_for_asy_hi_way(self):
        """Message field 'lane_chg_aut_sts_for_asy_hi_way'."""
        return self._lane_chg_aut_sts_for_asy_hi_way

    @lane_chg_aut_sts_for_asy_hi_way.setter
    def lane_chg_aut_sts_for_asy_hi_way(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_chg_aut_sts_for_asy_hi_way' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_chg_aut_sts_for_asy_hi_way' field must be an unsigned integer in [0, 255]"
        self._lane_chg_aut_sts_for_asy_hi_way = value

    @builtins.property
    def ti_gap_set_for_lgt_ctrl(self):
        """Message field 'ti_gap_set_for_lgt_ctrl'."""
        return self._ti_gap_set_for_lgt_ctrl

    @ti_gap_set_for_lgt_ctrl.setter
    def ti_gap_set_for_lgt_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ti_gap_set_for_lgt_ctrl' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ti_gap_set_for_lgt_ctrl' field must be an unsigned integer in [0, 255]"
        self._ti_gap_set_for_lgt_ctrl = value

    @builtins.property
    def asy_lgt_ctrl_take_over_req(self):
        """Message field 'asy_lgt_ctrl_take_over_req'."""
        return self._asy_lgt_ctrl_take_over_req

    @asy_lgt_ctrl_take_over_req.setter
    def asy_lgt_ctrl_take_over_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_lgt_ctrl_take_over_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_lgt_ctrl_take_over_req' field must be an unsigned integer in [0, 255]"
        self._asy_lgt_ctrl_take_over_req = value

    @builtins.property
    def steer_tq_addl_for_ema_steer_tq_addl_for_ema(self):
        """Message field 'steer_tq_addl_for_ema_steer_tq_addl_for_ema'."""
        return self._steer_tq_addl_for_ema_steer_tq_addl_for_ema

    @steer_tq_addl_for_ema_steer_tq_addl_for_ema.setter
    def steer_tq_addl_for_ema_steer_tq_addl_for_ema(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_tq_addl_for_ema_steer_tq_addl_for_ema' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steer_tq_addl_for_ema_steer_tq_addl_for_ema' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steer_tq_addl_for_ema_steer_tq_addl_for_ema = value

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
    def asy_noa_deactvd_reasn_mesg(self):
        """Message field 'asy_noa_deactvd_reasn_mesg'."""
        return self._asy_noa_deactvd_reasn_mesg

    @asy_noa_deactvd_reasn_mesg.setter
    def asy_noa_deactvd_reasn_mesg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_deactvd_reasn_mesg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_deactvd_reasn_mesg' field must be an unsigned integer in [0, 255]"
        self._asy_noa_deactvd_reasn_mesg = value

    @builtins.property
    def asy_noa_remind_mesg(self):
        """Message field 'asy_noa_remind_mesg'."""
        return self._asy_noa_remind_mesg

    @asy_noa_remind_mesg.setter
    def asy_noa_remind_mesg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_remind_mesg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_remind_mesg' field must be an unsigned integer in [0, 255]"
        self._asy_noa_remind_mesg = value

    @builtins.property
    def asy_high_beam_flash_warn_rqrd(self):
        """Message field 'asy_high_beam_flash_warn_rqrd'."""
        return self._asy_high_beam_flash_warn_rqrd

    @asy_high_beam_flash_warn_rqrd.setter
    def asy_high_beam_flash_warn_rqrd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_high_beam_flash_warn_rqrd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_high_beam_flash_warn_rqrd' field must be an unsigned integer in [0, 255]"
        self._asy_high_beam_flash_warn_rqrd = value

    @builtins.property
    def asy_noa_takeover_mesg(self):
        """Message field 'asy_noa_takeover_mesg'."""
        return self._asy_noa_takeover_mesg

    @asy_noa_takeover_mesg.setter
    def asy_noa_takeover_mesg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_takeover_mesg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_takeover_mesg' field must be an unsigned integer in [0, 255]"
        self._asy_noa_takeover_mesg = value

    @builtins.property
    def asy_fast_lane_swt_sts(self):
        """Message field 'asy_fast_lane_swt_sts'."""
        return self._asy_fast_lane_swt_sts

    @asy_fast_lane_swt_sts.setter
    def asy_fast_lane_swt_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_fast_lane_swt_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_fast_lane_swt_sts' field must be an unsigned integer in [0, 255]"
        self._asy_fast_lane_swt_sts = value

    @builtins.property
    def asy_cnoa_auto_lane_chg_style(self):
        """Message field 'asy_cnoa_auto_lane_chg_style'."""
        return self._asy_cnoa_auto_lane_chg_style

    @asy_cnoa_auto_lane_chg_style.setter
    def asy_cnoa_auto_lane_chg_style(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_auto_lane_chg_style' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_auto_lane_chg_style' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_auto_lane_chg_style = value

    @builtins.property
    def asy_cnoa_crs_actv_faild_msg(self):
        """Message field 'asy_cnoa_crs_actv_faild_msg'."""
        return self._asy_cnoa_crs_actv_faild_msg

    @asy_cnoa_crs_actv_faild_msg.setter
    def asy_cnoa_crs_actv_faild_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_actv_faild_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_actv_faild_msg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_actv_faild_msg = value

    @builtins.property
    def asy_cnoa_crs_cross_intsec_msg(self):
        """Message field 'asy_cnoa_crs_cross_intsec_msg'."""
        return self._asy_cnoa_crs_cross_intsec_msg

    @asy_cnoa_crs_cross_intsec_msg.setter
    def asy_cnoa_crs_cross_intsec_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_cross_intsec_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_cross_intsec_msg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_cross_intsec_msg = value

    @builtins.property
    def asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg(self):
        """Message field 'asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg'."""
        return self._asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg

    @asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg.setter
    def asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg = value

    @builtins.property
    def asy_cnoa_crs_finshd_msg(self):
        """Message field 'asy_cnoa_crs_finshd_msg'."""
        return self._asy_cnoa_crs_finshd_msg

    @asy_cnoa_crs_finshd_msg.setter
    def asy_cnoa_crs_finshd_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_finshd_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_finshd_msg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_finshd_msg = value

    @builtins.property
    def asy_cnoa_crs_ind_ti_gap_msg(self):
        """Message field 'asy_cnoa_crs_ind_ti_gap_msg'."""
        return self._asy_cnoa_crs_ind_ti_gap_msg

    @asy_cnoa_crs_ind_ti_gap_msg.setter
    def asy_cnoa_crs_ind_ti_gap_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_ind_ti_gap_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_ind_ti_gap_msg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_ind_ti_gap_msg = value

    @builtins.property
    def asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg(self):
        """Message field 'asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg'."""
        return self._asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg

    @asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg.setter
    def asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg = value

    @builtins.property
    def asy_cnoa_crs_actv_msg(self):
        """Message field 'asy_cnoa_crs_actv_msg'."""
        return self._asy_cnoa_crs_actv_msg

    @asy_cnoa_crs_actv_msg.setter
    def asy_cnoa_crs_actv_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_actv_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_actv_msg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_actv_msg = value

    @builtins.property
    def asy_cnoa_crs_off_odddistan(self):
        """Message field 'asy_cnoa_crs_off_odddistan'."""
        return self._asy_cnoa_crs_off_odddistan

    @asy_cnoa_crs_off_odddistan.setter
    def asy_cnoa_crs_off_odddistan(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_off_odddistan' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'asy_cnoa_crs_off_odddistan' field must be an unsigned integer in [0, 4294967295]"
        self._asy_cnoa_crs_off_odddistan = value

    @builtins.property
    def asy_cnoa_crs_sts(self):
        """Message field 'asy_cnoa_crs_sts'."""
        return self._asy_cnoa_crs_sts

    @asy_cnoa_crs_sts.setter
    def asy_cnoa_crs_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_sts' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_sts = value

    @builtins.property
    def asy_cnoa_game_fail_type(self):
        """Message field 'asy_cnoa_game_fail_type'."""
        return self._asy_cnoa_game_fail_type

    @asy_cnoa_game_fail_type.setter
    def asy_cnoa_game_fail_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_game_fail_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_game_fail_type' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_game_fail_type = value

    @builtins.property
    def asy_cnoa_game_reason(self):
        """Message field 'asy_cnoa_game_reason'."""
        return self._asy_cnoa_game_reason

    @asy_cnoa_game_reason.setter
    def asy_cnoa_game_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_game_reason' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_game_reason' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_game_reason = value

    @builtins.property
    def asy_cnoa_crs_sts_csd_msg(self):
        """Message field 'asy_cnoa_crs_sts_csd_msg'."""
        return self._asy_cnoa_crs_sts_csd_msg

    @asy_cnoa_crs_sts_csd_msg.setter
    def asy_cnoa_crs_sts_csd_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_sts_csd_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_sts_csd_msg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_sts_csd_msg = value

    @builtins.property
    def asy_cnoa_crs_swt_on_off(self):
        """Message field 'asy_cnoa_crs_swt_on_off'."""
        return self._asy_cnoa_crs_swt_on_off

    @asy_cnoa_crs_swt_on_off.setter
    def asy_cnoa_crs_swt_on_off(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_swt_on_off' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_swt_on_off' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_swt_on_off = value

    @builtins.property
    def asy_cnoa_crs_swt_sts(self):
        """Message field 'asy_cnoa_crs_swt_sts'."""
        return self._asy_cnoa_crs_swt_sts

    @asy_cnoa_crs_swt_sts.setter
    def asy_cnoa_crs_swt_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_swt_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_swt_sts' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_swt_sts = value

    @builtins.property
    def asy_cnoa_data_download_faild_msg(self):
        """Message field 'asy_cnoa_data_download_faild_msg'."""
        return self._asy_cnoa_data_download_faild_msg

    @asy_cnoa_data_download_faild_msg.setter
    def asy_cnoa_data_download_faild_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_data_download_faild_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_data_download_faild_msg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_data_download_faild_msg = value

    @builtins.property
    def asy_cnoa_crs_offs_msg(self):
        """Message field 'asy_cnoa_crs_offs_msg'."""
        return self._asy_cnoa_crs_offs_msg

    @asy_cnoa_crs_offs_msg.setter
    def asy_cnoa_crs_offs_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_offs_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_offs_msg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_offs_msg = value

    @builtins.property
    def asy_cnoa_crs_rmn_msg(self):
        """Message field 'asy_cnoa_crs_rmn_msg'."""
        return self._asy_cnoa_crs_rmn_msg

    @asy_cnoa_crs_rmn_msg.setter
    def asy_cnoa_crs_rmn_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_rmn_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_rmn_msg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_rmn_msg = value

    @builtins.property
    def asy_cnoa_sod_lane_chg_swt(self):
        """Message field 'asy_cnoa_sod_lane_chg_swt'."""
        return self._asy_cnoa_sod_lane_chg_swt

    @asy_cnoa_sod_lane_chg_swt.setter
    def asy_cnoa_sod_lane_chg_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_sod_lane_chg_swt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_sod_lane_chg_swt' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_sod_lane_chg_swt = value

    @builtins.property
    def asy_cnoa_lrng_prmpt_msg(self):
        """Message field 'asy_cnoa_lrng_prmpt_msg'."""
        return self._asy_cnoa_lrng_prmpt_msg

    @asy_cnoa_lrng_prmpt_msg.setter
    def asy_cnoa_lrng_prmpt_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_lrng_prmpt_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_lrng_prmpt_msg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_lrng_prmpt_msg = value

    @builtins.property
    def asy_cnoa_lrng_swt_on_off(self):
        """Message field 'asy_cnoa_lrng_swt_on_off'."""
        return self._asy_cnoa_lrng_swt_on_off

    @asy_cnoa_lrng_swt_on_off.setter
    def asy_cnoa_lrng_swt_on_off(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_lrng_swt_on_off' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_lrng_swt_on_off' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_lrng_swt_on_off = value

    @builtins.property
    def asy_cnoa_lrng_swt_sts(self):
        """Message field 'asy_cnoa_lrng_swt_sts'."""
        return self._asy_cnoa_lrng_swt_sts

    @asy_cnoa_lrng_swt_sts.setter
    def asy_cnoa_lrng_swt_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_lrng_swt_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_lrng_swt_sts' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_lrng_swt_sts = value

    @builtins.property
    def asy_cnoa_takeover_warn_msg(self):
        """Message field 'asy_cnoa_takeover_warn_msg'."""
        return self._asy_cnoa_takeover_warn_msg

    @asy_cnoa_takeover_warn_msg.setter
    def asy_cnoa_takeover_warn_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_takeover_warn_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_takeover_warn_msg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_takeover_warn_msg = value

    @builtins.property
    def asy_cnoa_turn_fail_type(self):
        """Message field 'asy_cnoa_turn_fail_type'."""
        return self._asy_cnoa_turn_fail_type

    @asy_cnoa_turn_fail_type.setter
    def asy_cnoa_turn_fail_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_turn_fail_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_turn_fail_type' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_turn_fail_type = value

    @builtins.property
    def asy_cnoa_turn_sts(self):
        """Message field 'asy_cnoa_turn_sts'."""
        return self._asy_cnoa_turn_sts

    @asy_cnoa_turn_sts.setter
    def asy_cnoa_turn_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_turn_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_turn_sts' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_turn_sts = value

    @builtins.property
    def asy_noa_tar_spd_offs(self):
        """Message field 'asy_noa_tar_spd_offs'."""
        return self._asy_noa_tar_spd_offs

    @asy_noa_tar_spd_offs.setter
    def asy_noa_tar_spd_offs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_tar_spd_offs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_tar_spd_offs' field must be an unsigned integer in [0, 255]"
        self._asy_noa_tar_spd_offs = value

    @builtins.property
    def asy_noa_avl_rmn(self):
        """Message field 'asy_noa_avl_rmn'."""
        return self._asy_noa_avl_rmn

    @asy_noa_avl_rmn.setter
    def asy_noa_avl_rmn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_avl_rmn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_avl_rmn' field must be an unsigned integer in [0, 255]"
        self._asy_noa_avl_rmn = value

    @builtins.property
    def asy_aut_lane_chg_swt_sts(self):
        """Message field 'asy_aut_lane_chg_swt_sts'."""
        return self._asy_aut_lane_chg_swt_sts

    @asy_aut_lane_chg_swt_sts.setter
    def asy_aut_lane_chg_swt_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_aut_lane_chg_swt_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_aut_lane_chg_swt_sts' field must be an unsigned integer in [0, 255]"
        self._asy_aut_lane_chg_swt_sts = value

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
    def ad_theme_disp(self):
        """Message field 'ad_theme_disp'."""
        return self._ad_theme_disp

    @ad_theme_disp.setter
    def ad_theme_disp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad_theme_disp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad_theme_disp' field must be an unsigned integer in [0, 255]"
        self._ad_theme_disp = value

    @builtins.property
    def cncl_warn_for_aut_drv(self):
        """Message field 'cncl_warn_for_aut_drv'."""
        return self._cncl_warn_for_aut_drv

    @cncl_warn_for_aut_drv.setter
    def cncl_warn_for_aut_drv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cncl_warn_for_aut_drv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cncl_warn_for_aut_drv' field must be an unsigned integer in [0, 255]"
        self._cncl_warn_for_aut_drv = value

    @builtins.property
    def disp_tsi_info_for_lgt_ctrl(self):
        """Message field 'disp_tsi_info_for_lgt_ctrl'."""
        return self._disp_tsi_info_for_lgt_ctrl

    @disp_tsi_info_for_lgt_ctrl.setter
    def disp_tsi_info_for_lgt_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'disp_tsi_info_for_lgt_ctrl' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'disp_tsi_info_for_lgt_ctrl' field must be an unsigned integer in [0, 255]"
        self._disp_tsi_info_for_lgt_ctrl = value

    @builtins.property
    def disp_spd_set_for_lgt_ctrl(self):
        """Message field 'disp_spd_set_for_lgt_ctrl'."""
        return self._disp_spd_set_for_lgt_ctrl

    @disp_spd_set_for_lgt_ctrl.setter
    def disp_spd_set_for_lgt_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'disp_spd_set_for_lgt_ctrl' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'disp_spd_set_for_lgt_ctrl' field must be an unsigned integer in [0, 65535]"
        self._disp_spd_set_for_lgt_ctrl = value

    @builtins.property
    def hmi_nop_cofm_of_lan_chag(self):
        """Message field 'hmi_nop_cofm_of_lan_chag'."""
        return self._hmi_nop_cofm_of_lan_chag

    @hmi_nop_cofm_of_lan_chag.setter
    def hmi_nop_cofm_of_lan_chag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_nop_cofm_of_lan_chag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_nop_cofm_of_lan_chag' field must be an unsigned integer in [0, 255]"
        self._hmi_nop_cofm_of_lan_chag = value

    @builtins.property
    def ad4_lane_chg_for_e2e(self):
        """Message field 'ad4_lane_chg_for_e2e'."""
        return self._ad4_lane_chg_for_e2e

    @ad4_lane_chg_for_e2e.setter
    def ad4_lane_chg_for_e2e(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_lane_chg_for_e2e' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_lane_chg_for_e2e' field must be an unsigned integer in [0, 255]"
        self._ad4_lane_chg_for_e2e = value

    @builtins.property
    def hwa_leading_point_valid(self):
        """Message field 'hwa_leading_point_valid'."""
        return self._hwa_leading_point_valid

    @hwa_leading_point_valid.setter
    def hwa_leading_point_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hwa_leading_point_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hwa_leading_point_valid' field must be an unsigned integer in [0, 255]"
        self._hwa_leading_point_valid = value

    @builtins.property
    def hwa_leading_point_center_y(self):
        """Message field 'hwa_leading_point_center_y'."""
        return self._hwa_leading_point_center_y

    @hwa_leading_point_center_y.setter
    def hwa_leading_point_center_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hwa_leading_point_center_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hwa_leading_point_center_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hwa_leading_point_center_y = value

    @builtins.property
    def hwa_leading_point_center_x(self):
        """Message field 'hwa_leading_point_center_x'."""
        return self._hwa_leading_point_center_x

    @hwa_leading_point_center_x.setter
    def hwa_leading_point_center_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hwa_leading_point_center_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hwa_leading_point_center_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hwa_leading_point_center_x = value

    @builtins.property
    def ad4_turn_indic_req_req(self):
        """Message field 'ad4_turn_indic_req_req'."""
        return self._ad4_turn_indic_req_req

    @ad4_turn_indic_req_req.setter
    def ad4_turn_indic_req_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_turn_indic_req_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_turn_indic_req_req' field must be an unsigned integer in [0, 255]"
        self._ad4_turn_indic_req_req = value

    @builtins.property
    def ad4_unavl_sts_for_e2e(self):
        """Message field 'ad4_unavl_sts_for_e2e'."""
        return self._ad4_unavl_sts_for_e2e

    @ad4_unavl_sts_for_e2e.setter
    def ad4_unavl_sts_for_e2e(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_unavl_sts_for_e2e' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_unavl_sts_for_e2e' field must be an unsigned integer in [0, 255]"
        self._ad4_unavl_sts_for_e2e = value

    @builtins.property
    def ad4_warn_sts_for_e2e(self):
        """Message field 'ad4_warn_sts_for_e2e'."""
        return self._ad4_warn_sts_for_e2e

    @ad4_warn_sts_for_e2e.setter
    def ad4_warn_sts_for_e2e(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_warn_sts_for_e2e' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_warn_sts_for_e2e' field must be an unsigned integer in [0, 255]"
        self._ad4_warn_sts_for_e2e = value

    @builtins.property
    def ad4_win_open_req(self):
        """Message field 'ad4_win_open_req'."""
        return self._ad4_win_open_req

    @ad4_win_open_req.setter
    def ad4_win_open_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_win_open_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_win_open_req' field must be an unsigned integer in [0, 255]"
        self._ad4_win_open_req = value

    @builtins.property
    def ad_ctrl_mode_ad_ctrl_mode(self):
        """Message field 'ad_ctrl_mode_ad_ctrl_mode'."""
        return self._ad_ctrl_mode_ad_ctrl_mode

    @ad_ctrl_mode_ad_ctrl_mode.setter
    def ad_ctrl_mode_ad_ctrl_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad_ctrl_mode_ad_ctrl_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad_ctrl_mode_ad_ctrl_mode' field must be an unsigned integer in [0, 255]"
        self._ad_ctrl_mode_ad_ctrl_mode = value

    @builtins.property
    def ad4_drv_off_req_for_lgt_ctrl_drv_off_req(self):
        """Message field 'ad4_drv_off_req_for_lgt_ctrl_drv_off_req'."""
        return self._ad4_drv_off_req_for_lgt_ctrl_drv_off_req

    @ad4_drv_off_req_for_lgt_ctrl_drv_off_req.setter
    def ad4_drv_off_req_for_lgt_ctrl_drv_off_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_drv_off_req_for_lgt_ctrl_drv_off_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_drv_off_req_for_lgt_ctrl_drv_off_req' field must be an unsigned integer in [0, 255]"
        self._ad4_drv_off_req_for_lgt_ctrl_drv_off_req = value

    @builtins.property
    def asy_dece_remind(self):
        """Message field 'asy_dece_remind'."""
        return self._asy_dece_remind

    @asy_dece_remind.setter
    def asy_dece_remind(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_dece_remind' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_dece_remind' field must be an unsigned integer in [0, 255]"
        self._asy_dece_remind = value

    @builtins.property
    def asy_lat_offs_swt_sts(self):
        """Message field 'asy_lat_offs_swt_sts'."""
        return self._asy_lat_offs_swt_sts

    @asy_lat_offs_swt_sts.setter
    def asy_lat_offs_swt_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_lat_offs_swt_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_lat_offs_swt_sts' field must be an unsigned integer in [0, 255]"
        self._asy_lat_offs_swt_sts = value

    @builtins.property
    def asy_undertak_on_off_sts(self):
        """Message field 'asy_undertak_on_off_sts'."""
        return self._asy_undertak_on_off_sts

    @asy_undertak_on_off_sts.setter
    def asy_undertak_on_off_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_undertak_on_off_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_undertak_on_off_sts' field must be an unsigned integer in [0, 255]"
        self._asy_undertak_on_off_sts = value

    @builtins.property
    def asy_undertak_rmind(self):
        """Message field 'asy_undertak_rmind'."""
        return self._asy_undertak_rmind

    @asy_undertak_rmind.setter
    def asy_undertak_rmind(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_undertak_rmind' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_undertak_rmind' field must be an unsigned integer in [0, 255]"
        self._asy_undertak_rmind = value

    @builtins.property
    def asy_warn_mesg_for_aut_drv(self):
        """Message field 'asy_warn_mesg_for_aut_drv'."""
        return self._asy_warn_mesg_for_aut_drv

    @asy_warn_mesg_for_aut_drv.setter
    def asy_warn_mesg_for_aut_drv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_warn_mesg_for_aut_drv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_warn_mesg_for_aut_drv' field must be an unsigned integer in [0, 255]"
        self._asy_warn_mesg_for_aut_drv = value

    @builtins.property
    def lgt_fusn_trfc_sgn(self):
        """Message field 'lgt_fusn_trfc_sgn'."""
        return self._lgt_fusn_trfc_sgn

    @lgt_fusn_trfc_sgn.setter
    def lgt_fusn_trfc_sgn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lgt_fusn_trfc_sgn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lgt_fusn_trfc_sgn' field must be an unsigned integer in [0, 255]"
        self._lgt_fusn_trfc_sgn = value

    @builtins.property
    def drvg_ast_on_sys_sts(self):
        """Message field 'drvg_ast_on_sys_sts'."""
        return self._drvg_ast_on_sys_sts

    @drvg_ast_on_sys_sts.setter
    def drvg_ast_on_sys_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvg_ast_on_sys_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvg_ast_on_sys_sts' field must be an unsigned integer in [0, 255]"
        self._drvg_ast_on_sys_sts = value

    @builtins.property
    def asy_d2d_avl_rmn(self):
        """Message field 'asy_d2d_avl_rmn'."""
        return self._asy_d2d_avl_rmn

    @asy_d2d_avl_rmn.setter
    def asy_d2d_avl_rmn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_d2d_avl_rmn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_d2d_avl_rmn' field must be an unsigned integer in [0, 255]"
        self._asy_d2d_avl_rmn = value

    @builtins.property
    def asy_d2d_deactvd_reasn_mesg(self):
        """Message field 'asy_d2d_deactvd_reasn_mesg'."""
        return self._asy_d2d_deactvd_reasn_mesg

    @asy_d2d_deactvd_reasn_mesg.setter
    def asy_d2d_deactvd_reasn_mesg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_d2d_deactvd_reasn_mesg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_d2d_deactvd_reasn_mesg' field must be an unsigned integer in [0, 255]"
        self._asy_d2d_deactvd_reasn_mesg = value

    @builtins.property
    def asy_d2d_distan_msg(self):
        """Message field 'asy_d2d_distan_msg'."""
        return self._asy_d2d_distan_msg

    @asy_d2d_distan_msg.setter
    def asy_d2d_distan_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_d2d_distan_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_d2d_distan_msg' field must be an unsigned integer in [0, 255]"
        self._asy_d2d_distan_msg = value

    @builtins.property
    def asy_d2d_etc_distan_msg(self):
        """Message field 'asy_d2d_etc_distan_msg'."""
        return self._asy_d2d_etc_distan_msg

    @asy_d2d_etc_distan_msg.setter
    def asy_d2d_etc_distan_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_d2d_etc_distan_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_d2d_etc_distan_msg' field must be an unsigned integer in [0, 255]"
        self._asy_d2d_etc_distan_msg = value

    @builtins.property
    def asy_d2d_remind_msg(self):
        """Message field 'asy_d2d_remind_msg'."""
        return self._asy_d2d_remind_msg

    @asy_d2d_remind_msg.setter
    def asy_d2d_remind_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_d2d_remind_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_d2d_remind_msg' field must be an unsigned integer in [0, 255]"
        self._asy_d2d_remind_msg = value

    @builtins.property
    def asy_etc_traffic_sw_sts(self):
        """Message field 'asy_etc_traffic_sw_sts'."""
        return self._asy_etc_traffic_sw_sts

    @asy_etc_traffic_sw_sts.setter
    def asy_etc_traffic_sw_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_etc_traffic_sw_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_etc_traffic_sw_sts' field must be an unsigned integer in [0, 255]"
        self._asy_etc_traffic_sw_sts = value

    @builtins.property
    def asy_d2d_strt_to_end(self):
        """Message field 'asy_d2d_strt_to_end'."""
        return self._asy_d2d_strt_to_end

    @asy_d2d_strt_to_end.setter
    def asy_d2d_strt_to_end(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_d2d_strt_to_end' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_d2d_strt_to_end' field must be an unsigned integer in [0, 255]"
        self._asy_d2d_strt_to_end = value

    @builtins.property
    def asy_safe_stop_sts(self):
        """Message field 'asy_safe_stop_sts'."""
        return self._asy_safe_stop_sts

    @asy_safe_stop_sts.setter
    def asy_safe_stop_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_safe_stop_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_safe_stop_sts' field must be an unsigned integer in [0, 255]"
        self._asy_safe_stop_sts = value

    @builtins.property
    def asy_sod_lane_chg_switch(self):
        """Message field 'asy_sod_lane_chg_switch'."""
        return self._asy_sod_lane_chg_switch

    @asy_sod_lane_chg_switch.setter
    def asy_sod_lane_chg_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_sod_lane_chg_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_sod_lane_chg_switch' field must be an unsigned integer in [0, 255]"
        self._asy_sod_lane_chg_switch = value

    @builtins.property
    def avl_sts_for_long_aut_drv_sound(self):
        """Message field 'avl_sts_for_long_aut_drv_sound'."""
        return self._avl_sts_for_long_aut_drv_sound

    @avl_sts_for_long_aut_drv_sound.setter
    def avl_sts_for_long_aut_drv_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'avl_sts_for_long_aut_drv_sound' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'avl_sts_for_long_aut_drv_sound' field must be an unsigned integer in [0, 255]"
        self._avl_sts_for_long_aut_drv_sound = value

    @builtins.property
    def asy_sod_pilot_cfirm(self):
        """Message field 'asy_sod_pilot_cfirm'."""
        return self._asy_sod_pilot_cfirm

    @asy_sod_pilot_cfirm.setter
    def asy_sod_pilot_cfirm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_sod_pilot_cfirm' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_sod_pilot_cfirm' field must be an unsigned integer in [0, 255]"
        self._asy_sod_pilot_cfirm = value

    @builtins.property
    def cncl_warn_for_aut_drv_sound(self):
        """Message field 'cncl_warn_for_aut_drv_sound'."""
        return self._cncl_warn_for_aut_drv_sound

    @cncl_warn_for_aut_drv_sound.setter
    def cncl_warn_for_aut_drv_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cncl_warn_for_aut_drv_sound' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cncl_warn_for_aut_drv_sound' field must be an unsigned integer in [0, 255]"
        self._cncl_warn_for_aut_drv_sound = value

    @builtins.property
    def cncl_warn_lgt_for_aut_drv_sound(self):
        """Message field 'cncl_warn_lgt_for_aut_drv_sound'."""
        return self._cncl_warn_lgt_for_aut_drv_sound

    @cncl_warn_lgt_for_aut_drv_sound.setter
    def cncl_warn_lgt_for_aut_drv_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cncl_warn_lgt_for_aut_drv_sound' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cncl_warn_lgt_for_aut_drv_sound' field must be an unsigned integer in [0, 255]"
        self._cncl_warn_lgt_for_aut_drv_sound = value

    @builtins.property
    def hmi_auto_lane_chg_style(self):
        """Message field 'hmi_auto_lane_chg_style'."""
        return self._hmi_auto_lane_chg_style

    @hmi_auto_lane_chg_style.setter
    def hmi_auto_lane_chg_style(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_auto_lane_chg_style' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_auto_lane_chg_style' field must be an unsigned integer in [0, 255]"
        self._hmi_auto_lane_chg_style = value

    @builtins.property
    def hmi_lane_chg_info(self):
        """Message field 'hmi_lane_chg_info'."""
        return self._hmi_lane_chg_info

    @hmi_lane_chg_info.setter
    def hmi_lane_chg_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_lane_chg_info' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_lane_chg_info' field must be an unsigned integer in [0, 255]"
        self._hmi_lane_chg_info = value

    @builtins.property
    def ovrd_wrn_for_fst_actv(self):
        """Message field 'ovrd_wrn_for_fst_actv'."""
        return self._ovrd_wrn_for_fst_actv

    @ovrd_wrn_for_fst_actv.setter
    def ovrd_wrn_for_fst_actv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ovrd_wrn_for_fst_actv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ovrd_wrn_for_fst_actv' field must be an unsigned integer in [0, 255]"
        self._ovrd_wrn_for_fst_actv = value

    @builtins.property
    def ad4_frt_lamp_req(self):
        """Message field 'ad4_frt_lamp_req'."""
        return self._ad4_frt_lamp_req

    @ad4_frt_lamp_req.setter
    def ad4_frt_lamp_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_frt_lamp_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_frt_lamp_req' field must be an unsigned integer in [0, 255]"
        self._ad4_frt_lamp_req = value

    @builtins.property
    def ad4_rear_fog_lamp_req(self):
        """Message field 'ad4_rear_fog_lamp_req'."""
        return self._ad4_rear_fog_lamp_req

    @ad4_rear_fog_lamp_req.setter
    def ad4_rear_fog_lamp_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_rear_fog_lamp_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_rear_fog_lamp_req' field must be an unsigned integer in [0, 255]"
        self._ad4_rear_fog_lamp_req = value

    @builtins.property
    def ad4_res_req_for_e2e(self):
        """Message field 'ad4_res_req_for_e2e'."""
        return self._ad4_res_req_for_e2e

    @ad4_res_req_for_e2e.setter
    def ad4_res_req_for_e2e(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_res_req_for_e2e' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_res_req_for_e2e' field must be an unsigned integer in [0, 255]"
        self._ad4_res_req_for_e2e = value

    @builtins.property
    def ad4_trunk_ctrl_req(self):
        """Message field 'ad4_trunk_ctrl_req'."""
        return self._ad4_trunk_ctrl_req

    @ad4_trunk_ctrl_req.setter
    def ad4_trunk_ctrl_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_trunk_ctrl_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_trunk_ctrl_req' field must be an unsigned integer in [0, 255]"
        self._ad4_trunk_ctrl_req = value

    @builtins.property
    def acc_fusn_trfc_sgn(self):
        """Message field 'acc_fusn_trfc_sgn'."""
        return self._acc_fusn_trfc_sgn

    @acc_fusn_trfc_sgn.setter
    def acc_fusn_trfc_sgn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acc_fusn_trfc_sgn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acc_fusn_trfc_sgn' field must be an unsigned integer in [0, 255]"
        self._acc_fusn_trfc_sgn = value

    @builtins.property
    def asy_sfty_fct_sts_to_edraccfct_sts(self):
        """Message field 'asy_sfty_fct_sts_to_edraccfct_sts'."""
        return self._asy_sfty_fct_sts_to_edraccfct_sts

    @asy_sfty_fct_sts_to_edraccfct_sts.setter
    def asy_sfty_fct_sts_to_edraccfct_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_sfty_fct_sts_to_edraccfct_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_sfty_fct_sts_to_edraccfct_sts' field must be an unsigned integer in [0, 255]"
        self._asy_sfty_fct_sts_to_edraccfct_sts = value

    @builtins.property
    def asy_sfty_fct_sts_to_edracsfb1_fct_sts(self):
        """Message field 'asy_sfty_fct_sts_to_edracsfb1_fct_sts'."""
        return self._asy_sfty_fct_sts_to_edracsfb1_fct_sts

    @asy_sfty_fct_sts_to_edracsfb1_fct_sts.setter
    def asy_sfty_fct_sts_to_edracsfb1_fct_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_sfty_fct_sts_to_edracsfb1_fct_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_sfty_fct_sts_to_edracsfb1_fct_sts' field must be an unsigned integer in [0, 255]"
        self._asy_sfty_fct_sts_to_edracsfb1_fct_sts = value

    @builtins.property
    def asy_sfty_fct_sts_to_edracsfb2_fct_sts(self):
        """Message field 'asy_sfty_fct_sts_to_edracsfb2_fct_sts'."""
        return self._asy_sfty_fct_sts_to_edracsfb2_fct_sts

    @asy_sfty_fct_sts_to_edracsfb2_fct_sts.setter
    def asy_sfty_fct_sts_to_edracsfb2_fct_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_sfty_fct_sts_to_edracsfb2_fct_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_sfty_fct_sts_to_edracsfb2_fct_sts' field must be an unsigned integer in [0, 255]"
        self._asy_sfty_fct_sts_to_edracsfb2_fct_sts = value

    @builtins.property
    def asy_sfty_fct_sts_to_edracsfc_fct_sts(self):
        """Message field 'asy_sfty_fct_sts_to_edracsfc_fct_sts'."""
        return self._asy_sfty_fct_sts_to_edracsfc_fct_sts

    @asy_sfty_fct_sts_to_edracsfc_fct_sts.setter
    def asy_sfty_fct_sts_to_edracsfc_fct_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_sfty_fct_sts_to_edracsfc_fct_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_sfty_fct_sts_to_edracsfc_fct_sts' field must be an unsigned integer in [0, 255]"
        self._asy_sfty_fct_sts_to_edracsfc_fct_sts = value

    @builtins.property
    def asy_sfty_fct_sts_to_edracsfd_fct_sts(self):
        """Message field 'asy_sfty_fct_sts_to_edracsfd_fct_sts'."""
        return self._asy_sfty_fct_sts_to_edracsfd_fct_sts

    @asy_sfty_fct_sts_to_edracsfd_fct_sts.setter
    def asy_sfty_fct_sts_to_edracsfd_fct_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_sfty_fct_sts_to_edracsfd_fct_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_sfty_fct_sts_to_edracsfd_fct_sts' field must be an unsigned integer in [0, 255]"
        self._asy_sfty_fct_sts_to_edracsfd_fct_sts = value

    @builtins.property
    def asy_sfty_fct_sts_to_edracsfe_fct_sts(self):
        """Message field 'asy_sfty_fct_sts_to_edracsfe_fct_sts'."""
        return self._asy_sfty_fct_sts_to_edracsfe_fct_sts

    @asy_sfty_fct_sts_to_edracsfe_fct_sts.setter
    def asy_sfty_fct_sts_to_edracsfe_fct_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_sfty_fct_sts_to_edracsfe_fct_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_sfty_fct_sts_to_edracsfe_fct_sts' field must be an unsigned integer in [0, 255]"
        self._asy_sfty_fct_sts_to_edracsfe_fct_sts = value

    @builtins.property
    def asy_cnoa_crs_csd_indcr(self):
        """Message field 'asy_cnoa_crs_csd_indcr'."""
        return self._asy_cnoa_crs_csd_indcr

    @asy_cnoa_crs_csd_indcr.setter
    def asy_cnoa_crs_csd_indcr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_csd_indcr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_csd_indcr' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_csd_indcr = value

    @builtins.property
    def asy_cnoa_crs_hud_indcr(self):
        """Message field 'asy_cnoa_crs_hud_indcr'."""
        return self._asy_cnoa_crs_hud_indcr

    @asy_cnoa_crs_hud_indcr.setter
    def asy_cnoa_crs_hud_indcr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_hud_indcr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_hud_indcr' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_hud_indcr = value

    @builtins.property
    def asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr(self):
        """Message field 'asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr'."""
        return self._asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr

    @asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr.setter
    def asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr = value

    @builtins.property
    def asy_emgy_manoeuvre_aid_sts(self):
        """Message field 'asy_emgy_manoeuvre_aid_sts'."""
        return self._asy_emgy_manoeuvre_aid_sts

    @asy_emgy_manoeuvre_aid_sts.setter
    def asy_emgy_manoeuvre_aid_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_emgy_manoeuvre_aid_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_emgy_manoeuvre_aid_sts' field must be an unsigned integer in [0, 255]"
        self._asy_emgy_manoeuvre_aid_sts = value

    @builtins.property
    def asy_fctn_ihbt_by_trlr(self):
        """Message field 'asy_fctn_ihbt_by_trlr'."""
        return self._asy_fctn_ihbt_by_trlr

    @asy_fctn_ihbt_by_trlr.setter
    def asy_fctn_ihbt_by_trlr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_fctn_ihbt_by_trlr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_fctn_ihbt_by_trlr' field must be an unsigned integer in [0, 255]"
        self._asy_fctn_ihbt_by_trlr = value

    @builtins.property
    def asy_icc_max_warn_msg(self):
        """Message field 'asy_icc_max_warn_msg'."""
        return self._asy_icc_max_warn_msg

    @asy_icc_max_warn_msg.setter
    def asy_icc_max_warn_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_icc_max_warn_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_icc_max_warn_msg' field must be an unsigned integer in [0, 255]"
        self._asy_icc_max_warn_msg = value

    @builtins.property
    def asy_sfty_hwl_req(self):
        """Message field 'asy_sfty_hwl_req'."""
        return self._asy_sfty_hwl_req

    @asy_sfty_hwl_req.setter
    def asy_sfty_hwl_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_sfty_hwl_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_sfty_hwl_req' field must be an unsigned integer in [0, 255]"
        self._asy_sfty_hwl_req = value

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
    def cllsn_aid_post_ema(self):
        """Message field 'cllsn_aid_post_ema'."""
        return self._cllsn_aid_post_ema

    @cllsn_aid_post_ema.setter
    def cllsn_aid_post_ema(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cllsn_aid_post_ema' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cllsn_aid_post_ema' field must be an unsigned integer in [0, 255]"
        self._cllsn_aid_post_ema = value

    @builtins.property
    def lane_chg_aut_actv_sts(self):
        """Message field 'lane_chg_aut_actv_sts'."""
        return self._lane_chg_aut_actv_sts

    @lane_chg_aut_actv_sts.setter
    def lane_chg_aut_actv_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_chg_aut_actv_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_chg_aut_actv_sts' field must be an unsigned integer in [0, 255]"
        self._lane_chg_aut_actv_sts = value

    @builtins.property
    def cam_sts_cam_cam_frnt_cal_not_cmpl(self):
        """Message field 'cam_sts_cam_cam_frnt_cal_not_cmpl'."""
        return self._cam_sts_cam_cam_frnt_cal_not_cmpl

    @cam_sts_cam_cam_frnt_cal_not_cmpl.setter
    def cam_sts_cam_cam_frnt_cal_not_cmpl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_sts_cam_cam_frnt_cal_not_cmpl' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_sts_cam_cam_frnt_cal_not_cmpl' field must be an unsigned integer in [0, 255]"
        self._cam_sts_cam_cam_frnt_cal_not_cmpl = value

    @builtins.property
    def asy_cnoa_lane_chg_assist_sts(self):
        """Message field 'asy_cnoa_lane_chg_assist_sts'."""
        return self._asy_cnoa_lane_chg_assist_sts

    @asy_cnoa_lane_chg_assist_sts.setter
    def asy_cnoa_lane_chg_assist_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_lane_chg_assist_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_lane_chg_assist_sts' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_lane_chg_assist_sts = value

    @builtins.property
    def asy_cnoa_lane_chg_fail_type(self):
        """Message field 'asy_cnoa_lane_chg_fail_type'."""
        return self._asy_cnoa_lane_chg_fail_type

    @asy_cnoa_lane_chg_fail_type.setter
    def asy_cnoa_lane_chg_fail_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_lane_chg_fail_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_lane_chg_fail_type' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_lane_chg_fail_type = value

    @builtins.property
    def aut_cnoa_lane_chg_sts(self):
        """Message field 'aut_cnoa_lane_chg_sts'."""
        return self._aut_cnoa_lane_chg_sts

    @aut_cnoa_lane_chg_sts.setter
    def aut_cnoa_lane_chg_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_cnoa_lane_chg_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_cnoa_lane_chg_sts' field must be an unsigned integer in [0, 255]"
        self._aut_cnoa_lane_chg_sts = value

    @builtins.property
    def asy_cnoa_req_lane_chg(self):
        """Message field 'asy_cnoa_req_lane_chg'."""
        return self._asy_cnoa_req_lane_chg

    @asy_cnoa_req_lane_chg.setter
    def asy_cnoa_req_lane_chg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_req_lane_chg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_req_lane_chg' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_req_lane_chg = value
