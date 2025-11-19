# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/FsmInnerCommomMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FsmInnerCommomMsg(type):
    """Metaclass of message 'FsmInnerCommomMsg'."""

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
                'deva_function_msgs.msg.FsmInnerCommomMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fsm_inner_commom_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fsm_inner_commom_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fsm_inner_commom_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fsm_inner_commom_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fsm_inner_commom_msg

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


class FsmInnerCommomMsg(metaclass=Metaclass_FsmInnerCommomMsg):
    """Message class 'FsmInnerCommomMsg'."""

    __slots__ = [
        '_header',
        '_asy_cnoa_crs_lan_chg_msg',
        '_set_spd_for_crs_ctrl_fct_active',
        '_asy_lane_chg_assist_sts',
        '_indcr_sts',
        '_asy_noa_takeover_sod',
        '_hmi_drvr_sod_req_pilot',
        '_drvr_crs_ctrl_fct_actv_req',
        '_asy_algt_indcr',
        '_ti_gap_set_for_lgt_ctrl',
        '_drv_mod_req',
        '_drv_off_warn',
        '_asy_alat_indcr',
        '_asy_lgt_ctrl_take_over_req',
        '_ovrd_wrn_for_fst_actv',
        '_asy_inform_for_drvr',
        '_cncl_warn_lgt_for_aut_drv',
        '_avl_sts_for_long_aut_drv',
        '_asy_steer_apply_rqrd',
        '_asy_lan_chg_mesg',
        '_asy_safe_stop_sts',
        '_asy_eyes_off_warn_rqrd',
        '_asy_noa_remind_mesg',
        '_asy_noa_takeover_mesg',
        '_asy_aut_drvg_avl',
        '_asy_noa_actv_suggest',
        '_cncl_warn_for_aut_drv',
        '_asy_lat_deg_sts',
        '_asy_icc_max_warn_msg',
        '_asy_cnoa_takeover_warn_msg',
        '_asy_cnoa_crs_cross_intsec_msg',
        '_asy_d2d_avl_rmn',
        '_asy_d2d_distan_msg',
        '_asy_d2d_strt_to_end',
        '_asy_d2d_deactvd_reasn_mesg',
        '_asy_aut_emgy_steer_actv',
        '_asy_d2d_etc_distan_msg',
        '_asy_d2d_remind_msg',
        '_disp_tsi_info_for_lgt_ctrl',
        '_disp_spd_set_for_lgt_ctrl',
        '_ad_dim_light',
        '_asy_d2d_crs_dim_indcr',
        '_asy_aut_drv_ctrl_typ_dim_req',
        '_ihu_set_disp_ad',
        '_aut_lane_chg_sts',
        '_ad_ctrl_mode',
        '_hmi_drvr_sod_req_chg',
        '_cam_status0',
        '_frnt_side_cam_le_sts0',
        '_frnt_side_cam_ri_sts0',
        '_re_side_cam_le_sts0',
        '_re_side_cam_ri_sts0',
        '_hmi_re_cam_sts0',
        '_asy_algt_sts',
        '_hmi_auto_lane_chg_style',
        '_trfc_jam_warn',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'asy_cnoa_crs_lan_chg_msg': 'uint32',
        'set_spd_for_crs_ctrl_fct_active': 'float',
        'asy_lane_chg_assist_sts': 'uint32',
        'indcr_sts': 'uint32',
        'asy_noa_takeover_sod': 'uint32',
        'hmi_drvr_sod_req_pilot': 'uint8',
        'drvr_crs_ctrl_fct_actv_req': 'uint8',
        'asy_algt_indcr': 'uint8',
        'ti_gap_set_for_lgt_ctrl': 'uint8',
        'drv_mod_req': 'uint8',
        'drv_off_warn': 'uint8',
        'asy_alat_indcr': 'uint8',
        'asy_lgt_ctrl_take_over_req': 'uint8',
        'ovrd_wrn_for_fst_actv': 'uint8',
        'asy_inform_for_drvr': 'uint8',
        'cncl_warn_lgt_for_aut_drv': 'uint8',
        'avl_sts_for_long_aut_drv': 'uint8',
        'asy_steer_apply_rqrd': 'uint8',
        'asy_lan_chg_mesg': 'uint8',
        'asy_safe_stop_sts': 'uint32',
        'asy_eyes_off_warn_rqrd': 'uint8',
        'asy_noa_remind_mesg': 'uint8',
        'asy_noa_takeover_mesg': 'uint8',
        'asy_aut_drvg_avl': 'uint8',
        'asy_noa_actv_suggest': 'uint8',
        'cncl_warn_for_aut_drv': 'uint8',
        'asy_lat_deg_sts': 'uint8',
        'asy_icc_max_warn_msg': 'uint8',
        'asy_cnoa_takeover_warn_msg': 'uint8',
        'asy_cnoa_crs_cross_intsec_msg': 'uint8',
        'asy_d2d_avl_rmn': 'uint8',
        'asy_d2d_distan_msg': 'uint8',
        'asy_d2d_strt_to_end': 'uint8',
        'asy_d2d_deactvd_reasn_mesg': 'uint8',
        'asy_aut_emgy_steer_actv': 'uint8',
        'asy_d2d_etc_distan_msg': 'uint8',
        'asy_d2d_remind_msg': 'uint8',
        'disp_tsi_info_for_lgt_ctrl': 'uint8',
        'disp_spd_set_for_lgt_ctrl': 'float',
        'ad_dim_light': 'uint8',
        'asy_d2d_crs_dim_indcr': 'uint8',
        'asy_aut_drv_ctrl_typ_dim_req': 'uint8',
        'ihu_set_disp_ad': 'uint8',
        'aut_lane_chg_sts': 'uint8',
        'ad_ctrl_mode': 'uint8',
        'hmi_drvr_sod_req_chg': 'uint8',
        'cam_status0': 'uint8',
        'frnt_side_cam_le_sts0': 'uint8',
        'frnt_side_cam_ri_sts0': 'uint8',
        're_side_cam_le_sts0': 'uint8',
        're_side_cam_ri_sts0': 'uint8',
        'hmi_re_cam_sts0': 'uint8',
        'asy_algt_sts': 'uint8',
        'hmi_auto_lane_chg_style': 'uint8',
        'trfc_jam_warn': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.asy_cnoa_crs_lan_chg_msg = kwargs.get('asy_cnoa_crs_lan_chg_msg', int())
        self.set_spd_for_crs_ctrl_fct_active = kwargs.get('set_spd_for_crs_ctrl_fct_active', float())
        self.asy_lane_chg_assist_sts = kwargs.get('asy_lane_chg_assist_sts', int())
        self.indcr_sts = kwargs.get('indcr_sts', int())
        self.asy_noa_takeover_sod = kwargs.get('asy_noa_takeover_sod', int())
        self.hmi_drvr_sod_req_pilot = kwargs.get('hmi_drvr_sod_req_pilot', int())
        self.drvr_crs_ctrl_fct_actv_req = kwargs.get('drvr_crs_ctrl_fct_actv_req', int())
        self.asy_algt_indcr = kwargs.get('asy_algt_indcr', int())
        self.ti_gap_set_for_lgt_ctrl = kwargs.get('ti_gap_set_for_lgt_ctrl', int())
        self.drv_mod_req = kwargs.get('drv_mod_req', int())
        self.drv_off_warn = kwargs.get('drv_off_warn', int())
        self.asy_alat_indcr = kwargs.get('asy_alat_indcr', int())
        self.asy_lgt_ctrl_take_over_req = kwargs.get('asy_lgt_ctrl_take_over_req', int())
        self.ovrd_wrn_for_fst_actv = kwargs.get('ovrd_wrn_for_fst_actv', int())
        self.asy_inform_for_drvr = kwargs.get('asy_inform_for_drvr', int())
        self.cncl_warn_lgt_for_aut_drv = kwargs.get('cncl_warn_lgt_for_aut_drv', int())
        self.avl_sts_for_long_aut_drv = kwargs.get('avl_sts_for_long_aut_drv', int())
        self.asy_steer_apply_rqrd = kwargs.get('asy_steer_apply_rqrd', int())
        self.asy_lan_chg_mesg = kwargs.get('asy_lan_chg_mesg', int())
        self.asy_safe_stop_sts = kwargs.get('asy_safe_stop_sts', int())
        self.asy_eyes_off_warn_rqrd = kwargs.get('asy_eyes_off_warn_rqrd', int())
        self.asy_noa_remind_mesg = kwargs.get('asy_noa_remind_mesg', int())
        self.asy_noa_takeover_mesg = kwargs.get('asy_noa_takeover_mesg', int())
        self.asy_aut_drvg_avl = kwargs.get('asy_aut_drvg_avl', int())
        self.asy_noa_actv_suggest = kwargs.get('asy_noa_actv_suggest', int())
        self.cncl_warn_for_aut_drv = kwargs.get('cncl_warn_for_aut_drv', int())
        self.asy_lat_deg_sts = kwargs.get('asy_lat_deg_sts', int())
        self.asy_icc_max_warn_msg = kwargs.get('asy_icc_max_warn_msg', int())
        self.asy_cnoa_takeover_warn_msg = kwargs.get('asy_cnoa_takeover_warn_msg', int())
        self.asy_cnoa_crs_cross_intsec_msg = kwargs.get('asy_cnoa_crs_cross_intsec_msg', int())
        self.asy_d2d_avl_rmn = kwargs.get('asy_d2d_avl_rmn', int())
        self.asy_d2d_distan_msg = kwargs.get('asy_d2d_distan_msg', int())
        self.asy_d2d_strt_to_end = kwargs.get('asy_d2d_strt_to_end', int())
        self.asy_d2d_deactvd_reasn_mesg = kwargs.get('asy_d2d_deactvd_reasn_mesg', int())
        self.asy_aut_emgy_steer_actv = kwargs.get('asy_aut_emgy_steer_actv', int())
        self.asy_d2d_etc_distan_msg = kwargs.get('asy_d2d_etc_distan_msg', int())
        self.asy_d2d_remind_msg = kwargs.get('asy_d2d_remind_msg', int())
        self.disp_tsi_info_for_lgt_ctrl = kwargs.get('disp_tsi_info_for_lgt_ctrl', int())
        self.disp_spd_set_for_lgt_ctrl = kwargs.get('disp_spd_set_for_lgt_ctrl', float())
        self.ad_dim_light = kwargs.get('ad_dim_light', int())
        self.asy_d2d_crs_dim_indcr = kwargs.get('asy_d2d_crs_dim_indcr', int())
        self.asy_aut_drv_ctrl_typ_dim_req = kwargs.get('asy_aut_drv_ctrl_typ_dim_req', int())
        self.ihu_set_disp_ad = kwargs.get('ihu_set_disp_ad', int())
        self.aut_lane_chg_sts = kwargs.get('aut_lane_chg_sts', int())
        self.ad_ctrl_mode = kwargs.get('ad_ctrl_mode', int())
        self.hmi_drvr_sod_req_chg = kwargs.get('hmi_drvr_sod_req_chg', int())
        self.cam_status0 = kwargs.get('cam_status0', int())
        self.frnt_side_cam_le_sts0 = kwargs.get('frnt_side_cam_le_sts0', int())
        self.frnt_side_cam_ri_sts0 = kwargs.get('frnt_side_cam_ri_sts0', int())
        self.re_side_cam_le_sts0 = kwargs.get('re_side_cam_le_sts0', int())
        self.re_side_cam_ri_sts0 = kwargs.get('re_side_cam_ri_sts0', int())
        self.hmi_re_cam_sts0 = kwargs.get('hmi_re_cam_sts0', int())
        self.asy_algt_sts = kwargs.get('asy_algt_sts', int())
        self.hmi_auto_lane_chg_style = kwargs.get('hmi_auto_lane_chg_style', int())
        self.trfc_jam_warn = kwargs.get('trfc_jam_warn', int())

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
        if self.asy_cnoa_crs_lan_chg_msg != other.asy_cnoa_crs_lan_chg_msg:
            return False
        if self.set_spd_for_crs_ctrl_fct_active != other.set_spd_for_crs_ctrl_fct_active:
            return False
        if self.asy_lane_chg_assist_sts != other.asy_lane_chg_assist_sts:
            return False
        if self.indcr_sts != other.indcr_sts:
            return False
        if self.asy_noa_takeover_sod != other.asy_noa_takeover_sod:
            return False
        if self.hmi_drvr_sod_req_pilot != other.hmi_drvr_sod_req_pilot:
            return False
        if self.drvr_crs_ctrl_fct_actv_req != other.drvr_crs_ctrl_fct_actv_req:
            return False
        if self.asy_algt_indcr != other.asy_algt_indcr:
            return False
        if self.ti_gap_set_for_lgt_ctrl != other.ti_gap_set_for_lgt_ctrl:
            return False
        if self.drv_mod_req != other.drv_mod_req:
            return False
        if self.drv_off_warn != other.drv_off_warn:
            return False
        if self.asy_alat_indcr != other.asy_alat_indcr:
            return False
        if self.asy_lgt_ctrl_take_over_req != other.asy_lgt_ctrl_take_over_req:
            return False
        if self.ovrd_wrn_for_fst_actv != other.ovrd_wrn_for_fst_actv:
            return False
        if self.asy_inform_for_drvr != other.asy_inform_for_drvr:
            return False
        if self.cncl_warn_lgt_for_aut_drv != other.cncl_warn_lgt_for_aut_drv:
            return False
        if self.avl_sts_for_long_aut_drv != other.avl_sts_for_long_aut_drv:
            return False
        if self.asy_steer_apply_rqrd != other.asy_steer_apply_rqrd:
            return False
        if self.asy_lan_chg_mesg != other.asy_lan_chg_mesg:
            return False
        if self.asy_safe_stop_sts != other.asy_safe_stop_sts:
            return False
        if self.asy_eyes_off_warn_rqrd != other.asy_eyes_off_warn_rqrd:
            return False
        if self.asy_noa_remind_mesg != other.asy_noa_remind_mesg:
            return False
        if self.asy_noa_takeover_mesg != other.asy_noa_takeover_mesg:
            return False
        if self.asy_aut_drvg_avl != other.asy_aut_drvg_avl:
            return False
        if self.asy_noa_actv_suggest != other.asy_noa_actv_suggest:
            return False
        if self.cncl_warn_for_aut_drv != other.cncl_warn_for_aut_drv:
            return False
        if self.asy_lat_deg_sts != other.asy_lat_deg_sts:
            return False
        if self.asy_icc_max_warn_msg != other.asy_icc_max_warn_msg:
            return False
        if self.asy_cnoa_takeover_warn_msg != other.asy_cnoa_takeover_warn_msg:
            return False
        if self.asy_cnoa_crs_cross_intsec_msg != other.asy_cnoa_crs_cross_intsec_msg:
            return False
        if self.asy_d2d_avl_rmn != other.asy_d2d_avl_rmn:
            return False
        if self.asy_d2d_distan_msg != other.asy_d2d_distan_msg:
            return False
        if self.asy_d2d_strt_to_end != other.asy_d2d_strt_to_end:
            return False
        if self.asy_d2d_deactvd_reasn_mesg != other.asy_d2d_deactvd_reasn_mesg:
            return False
        if self.asy_aut_emgy_steer_actv != other.asy_aut_emgy_steer_actv:
            return False
        if self.asy_d2d_etc_distan_msg != other.asy_d2d_etc_distan_msg:
            return False
        if self.asy_d2d_remind_msg != other.asy_d2d_remind_msg:
            return False
        if self.disp_tsi_info_for_lgt_ctrl != other.disp_tsi_info_for_lgt_ctrl:
            return False
        if self.disp_spd_set_for_lgt_ctrl != other.disp_spd_set_for_lgt_ctrl:
            return False
        if self.ad_dim_light != other.ad_dim_light:
            return False
        if self.asy_d2d_crs_dim_indcr != other.asy_d2d_crs_dim_indcr:
            return False
        if self.asy_aut_drv_ctrl_typ_dim_req != other.asy_aut_drv_ctrl_typ_dim_req:
            return False
        if self.ihu_set_disp_ad != other.ihu_set_disp_ad:
            return False
        if self.aut_lane_chg_sts != other.aut_lane_chg_sts:
            return False
        if self.ad_ctrl_mode != other.ad_ctrl_mode:
            return False
        if self.hmi_drvr_sod_req_chg != other.hmi_drvr_sod_req_chg:
            return False
        if self.cam_status0 != other.cam_status0:
            return False
        if self.frnt_side_cam_le_sts0 != other.frnt_side_cam_le_sts0:
            return False
        if self.frnt_side_cam_ri_sts0 != other.frnt_side_cam_ri_sts0:
            return False
        if self.re_side_cam_le_sts0 != other.re_side_cam_le_sts0:
            return False
        if self.re_side_cam_ri_sts0 != other.re_side_cam_ri_sts0:
            return False
        if self.hmi_re_cam_sts0 != other.hmi_re_cam_sts0:
            return False
        if self.asy_algt_sts != other.asy_algt_sts:
            return False
        if self.hmi_auto_lane_chg_style != other.hmi_auto_lane_chg_style:
            return False
        if self.trfc_jam_warn != other.trfc_jam_warn:
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
    def asy_cnoa_crs_lan_chg_msg(self):
        """Message field 'asy_cnoa_crs_lan_chg_msg'."""
        return self._asy_cnoa_crs_lan_chg_msg

    @asy_cnoa_crs_lan_chg_msg.setter
    def asy_cnoa_crs_lan_chg_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_lan_chg_msg' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'asy_cnoa_crs_lan_chg_msg' field must be an unsigned integer in [0, 4294967295]"
        self._asy_cnoa_crs_lan_chg_msg = value

    @builtins.property
    def set_spd_for_crs_ctrl_fct_active(self):
        """Message field 'set_spd_for_crs_ctrl_fct_active'."""
        return self._set_spd_for_crs_ctrl_fct_active

    @set_spd_for_crs_ctrl_fct_active.setter
    def set_spd_for_crs_ctrl_fct_active(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'set_spd_for_crs_ctrl_fct_active' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'set_spd_for_crs_ctrl_fct_active' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._set_spd_for_crs_ctrl_fct_active = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'asy_lane_chg_assist_sts' field must be an unsigned integer in [0, 4294967295]"
        self._asy_lane_chg_assist_sts = value

    @builtins.property
    def indcr_sts(self):
        """Message field 'indcr_sts'."""
        return self._indcr_sts

    @indcr_sts.setter
    def indcr_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'indcr_sts' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'indcr_sts' field must be an unsigned integer in [0, 4294967295]"
        self._indcr_sts = value

    @builtins.property
    def asy_noa_takeover_sod(self):
        """Message field 'asy_noa_takeover_sod'."""
        return self._asy_noa_takeover_sod

    @asy_noa_takeover_sod.setter
    def asy_noa_takeover_sod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_takeover_sod' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'asy_noa_takeover_sod' field must be an unsigned integer in [0, 4294967295]"
        self._asy_noa_takeover_sod = value

    @builtins.property
    def hmi_drvr_sod_req_pilot(self):
        """Message field 'hmi_drvr_sod_req_pilot'."""
        return self._hmi_drvr_sod_req_pilot

    @hmi_drvr_sod_req_pilot.setter
    def hmi_drvr_sod_req_pilot(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_drvr_sod_req_pilot' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_drvr_sod_req_pilot' field must be an unsigned integer in [0, 255]"
        self._hmi_drvr_sod_req_pilot = value

    @builtins.property
    def drvr_crs_ctrl_fct_actv_req(self):
        """Message field 'drvr_crs_ctrl_fct_actv_req'."""
        return self._drvr_crs_ctrl_fct_actv_req

    @drvr_crs_ctrl_fct_actv_req.setter
    def drvr_crs_ctrl_fct_actv_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_crs_ctrl_fct_actv_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_crs_ctrl_fct_actv_req' field must be an unsigned integer in [0, 255]"
        self._drvr_crs_ctrl_fct_actv_req = value

    @builtins.property
    def asy_algt_indcr(self):
        """Message field 'asy_algt_indcr'."""
        return self._asy_algt_indcr

    @asy_algt_indcr.setter
    def asy_algt_indcr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_algt_indcr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_algt_indcr' field must be an unsigned integer in [0, 255]"
        self._asy_algt_indcr = value

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
    def drv_mod_req(self):
        """Message field 'drv_mod_req'."""
        return self._drv_mod_req

    @drv_mod_req.setter
    def drv_mod_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drv_mod_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drv_mod_req' field must be an unsigned integer in [0, 255]"
        self._drv_mod_req = value

    @builtins.property
    def drv_off_warn(self):
        """Message field 'drv_off_warn'."""
        return self._drv_off_warn

    @drv_off_warn.setter
    def drv_off_warn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drv_off_warn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drv_off_warn' field must be an unsigned integer in [0, 255]"
        self._drv_off_warn = value

    @builtins.property
    def asy_alat_indcr(self):
        """Message field 'asy_alat_indcr'."""
        return self._asy_alat_indcr

    @asy_alat_indcr.setter
    def asy_alat_indcr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_alat_indcr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_alat_indcr' field must be an unsigned integer in [0, 255]"
        self._asy_alat_indcr = value

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
    def asy_inform_for_drvr(self):
        """Message field 'asy_inform_for_drvr'."""
        return self._asy_inform_for_drvr

    @asy_inform_for_drvr.setter
    def asy_inform_for_drvr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_inform_for_drvr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_inform_for_drvr' field must be an unsigned integer in [0, 255]"
        self._asy_inform_for_drvr = value

    @builtins.property
    def cncl_warn_lgt_for_aut_drv(self):
        """Message field 'cncl_warn_lgt_for_aut_drv'."""
        return self._cncl_warn_lgt_for_aut_drv

    @cncl_warn_lgt_for_aut_drv.setter
    def cncl_warn_lgt_for_aut_drv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cncl_warn_lgt_for_aut_drv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cncl_warn_lgt_for_aut_drv' field must be an unsigned integer in [0, 255]"
        self._cncl_warn_lgt_for_aut_drv = value

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
    def asy_steer_apply_rqrd(self):
        """Message field 'asy_steer_apply_rqrd'."""
        return self._asy_steer_apply_rqrd

    @asy_steer_apply_rqrd.setter
    def asy_steer_apply_rqrd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_steer_apply_rqrd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_steer_apply_rqrd' field must be an unsigned integer in [0, 255]"
        self._asy_steer_apply_rqrd = value

    @builtins.property
    def asy_lan_chg_mesg(self):
        """Message field 'asy_lan_chg_mesg'."""
        return self._asy_lan_chg_mesg

    @asy_lan_chg_mesg.setter
    def asy_lan_chg_mesg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_lan_chg_mesg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_lan_chg_mesg' field must be an unsigned integer in [0, 255]"
        self._asy_lan_chg_mesg = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'asy_safe_stop_sts' field must be an unsigned integer in [0, 4294967295]"
        self._asy_safe_stop_sts = value

    @builtins.property
    def asy_eyes_off_warn_rqrd(self):
        """Message field 'asy_eyes_off_warn_rqrd'."""
        return self._asy_eyes_off_warn_rqrd

    @asy_eyes_off_warn_rqrd.setter
    def asy_eyes_off_warn_rqrd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_eyes_off_warn_rqrd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_eyes_off_warn_rqrd' field must be an unsigned integer in [0, 255]"
        self._asy_eyes_off_warn_rqrd = value

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
    def asy_noa_actv_suggest(self):
        """Message field 'asy_noa_actv_suggest'."""
        return self._asy_noa_actv_suggest

    @asy_noa_actv_suggest.setter
    def asy_noa_actv_suggest(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_actv_suggest' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_actv_suggest' field must be an unsigned integer in [0, 255]"
        self._asy_noa_actv_suggest = value

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
    def asy_lat_deg_sts(self):
        """Message field 'asy_lat_deg_sts'."""
        return self._asy_lat_deg_sts

    @asy_lat_deg_sts.setter
    def asy_lat_deg_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_lat_deg_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_lat_deg_sts' field must be an unsigned integer in [0, 255]"
        self._asy_lat_deg_sts = value

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
    def asy_aut_emgy_steer_actv(self):
        """Message field 'asy_aut_emgy_steer_actv'."""
        return self._asy_aut_emgy_steer_actv

    @asy_aut_emgy_steer_actv.setter
    def asy_aut_emgy_steer_actv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_aut_emgy_steer_actv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_aut_emgy_steer_actv' field must be an unsigned integer in [0, 255]"
        self._asy_aut_emgy_steer_actv = value

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
                isinstance(value, float), \
                "The 'disp_spd_set_for_lgt_ctrl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'disp_spd_set_for_lgt_ctrl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._disp_spd_set_for_lgt_ctrl = value

    @builtins.property
    def ad_dim_light(self):
        """Message field 'ad_dim_light'."""
        return self._ad_dim_light

    @ad_dim_light.setter
    def ad_dim_light(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad_dim_light' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad_dim_light' field must be an unsigned integer in [0, 255]"
        self._ad_dim_light = value

    @builtins.property
    def asy_d2d_crs_dim_indcr(self):
        """Message field 'asy_d2d_crs_dim_indcr'."""
        return self._asy_d2d_crs_dim_indcr

    @asy_d2d_crs_dim_indcr.setter
    def asy_d2d_crs_dim_indcr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_d2d_crs_dim_indcr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_d2d_crs_dim_indcr' field must be an unsigned integer in [0, 255]"
        self._asy_d2d_crs_dim_indcr = value

    @builtins.property
    def asy_aut_drv_ctrl_typ_dim_req(self):
        """Message field 'asy_aut_drv_ctrl_typ_dim_req'."""
        return self._asy_aut_drv_ctrl_typ_dim_req

    @asy_aut_drv_ctrl_typ_dim_req.setter
    def asy_aut_drv_ctrl_typ_dim_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_aut_drv_ctrl_typ_dim_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_aut_drv_ctrl_typ_dim_req' field must be an unsigned integer in [0, 255]"
        self._asy_aut_drv_ctrl_typ_dim_req = value

    @builtins.property
    def ihu_set_disp_ad(self):
        """Message field 'ihu_set_disp_ad'."""
        return self._ihu_set_disp_ad

    @ihu_set_disp_ad.setter
    def ihu_set_disp_ad(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ihu_set_disp_ad' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ihu_set_disp_ad' field must be an unsigned integer in [0, 255]"
        self._ihu_set_disp_ad = value

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
    def hmi_drvr_sod_req_chg(self):
        """Message field 'hmi_drvr_sod_req_chg'."""
        return self._hmi_drvr_sod_req_chg

    @hmi_drvr_sod_req_chg.setter
    def hmi_drvr_sod_req_chg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_drvr_sod_req_chg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_drvr_sod_req_chg' field must be an unsigned integer in [0, 255]"
        self._hmi_drvr_sod_req_chg = value

    @builtins.property
    def cam_status0(self):
        """Message field 'cam_status0'."""
        return self._cam_status0

    @cam_status0.setter
    def cam_status0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_status0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_status0' field must be an unsigned integer in [0, 255]"
        self._cam_status0 = value

    @builtins.property
    def frnt_side_cam_le_sts0(self):
        """Message field 'frnt_side_cam_le_sts0'."""
        return self._frnt_side_cam_le_sts0

    @frnt_side_cam_le_sts0.setter
    def frnt_side_cam_le_sts0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frnt_side_cam_le_sts0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'frnt_side_cam_le_sts0' field must be an unsigned integer in [0, 255]"
        self._frnt_side_cam_le_sts0 = value

    @builtins.property
    def frnt_side_cam_ri_sts0(self):
        """Message field 'frnt_side_cam_ri_sts0'."""
        return self._frnt_side_cam_ri_sts0

    @frnt_side_cam_ri_sts0.setter
    def frnt_side_cam_ri_sts0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frnt_side_cam_ri_sts0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'frnt_side_cam_ri_sts0' field must be an unsigned integer in [0, 255]"
        self._frnt_side_cam_ri_sts0 = value

    @builtins.property
    def re_side_cam_le_sts0(self):
        """Message field 're_side_cam_le_sts0'."""
        return self._re_side_cam_le_sts0

    @re_side_cam_le_sts0.setter
    def re_side_cam_le_sts0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 're_side_cam_le_sts0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 're_side_cam_le_sts0' field must be an unsigned integer in [0, 255]"
        self._re_side_cam_le_sts0 = value

    @builtins.property
    def re_side_cam_ri_sts0(self):
        """Message field 're_side_cam_ri_sts0'."""
        return self._re_side_cam_ri_sts0

    @re_side_cam_ri_sts0.setter
    def re_side_cam_ri_sts0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 're_side_cam_ri_sts0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 're_side_cam_ri_sts0' field must be an unsigned integer in [0, 255]"
        self._re_side_cam_ri_sts0 = value

    @builtins.property
    def hmi_re_cam_sts0(self):
        """Message field 'hmi_re_cam_sts0'."""
        return self._hmi_re_cam_sts0

    @hmi_re_cam_sts0.setter
    def hmi_re_cam_sts0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_re_cam_sts0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_re_cam_sts0' field must be an unsigned integer in [0, 255]"
        self._hmi_re_cam_sts0 = value

    @builtins.property
    def asy_algt_sts(self):
        """Message field 'asy_algt_sts'."""
        return self._asy_algt_sts

    @asy_algt_sts.setter
    def asy_algt_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_algt_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_algt_sts' field must be an unsigned integer in [0, 255]"
        self._asy_algt_sts = value

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
    def trfc_jam_warn(self):
        """Message field 'trfc_jam_warn'."""
        return self._trfc_jam_warn

    @trfc_jam_warn.setter
    def trfc_jam_warn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trfc_jam_warn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'trfc_jam_warn' field must be an unsigned integer in [0, 255]"
        self._trfc_jam_warn = value
