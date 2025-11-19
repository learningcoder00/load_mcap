# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/MachRemind.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MachRemind(type):
    """Metaclass of message 'MachRemind'."""

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
                'deva_function_msgs.msg.MachRemind')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mach_remind
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mach_remind
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mach_remind
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mach_remind
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mach_remind

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


class MachRemind(metaclass=Metaclass_MachRemind):
    """Message class 'MachRemind'."""

    __slots__ = [
        '_header',
        '_asy_cnoa_crs_actv_faild_voice',
        '_asy_cnoa_crs_cross_intsec_voice',
        '_asy_cnoa_crs_actv_voice',
        '_asy_cnoa_crs_deactvd_voice',
        '_asy_cnoa_crs_finshd_voice',
        '_asy_cnoa_crs_offs_voice',
        '_asy_cnoa_crs_rmn_voice',
        '_asy_cnoa_hands_off_voice',
        '_asy_cnoa_lrng_abort_voice',
        '_asy_noa_avl_rmn_sound',
        '_asy_cnoa_takeover_warn_voice',
        '_asy_dece_remind_sound',
        '_asy_drvr_sod_cfirm_cnoa_main_page',
        '_asy_undertak_rmind_sound',
        '_asy_warn_sod_for_aut_drv',
        '_avl_sts_for_long_aut_drv',
        '_too_many_cars',
        '_drv_off_warn',
        '_ad4_horn_warn',
        '_hmi_auto_lane_chg_sts_for_asy_ai_asist_audio',
        '_drv_off_mod',
        '_asy_horn_warn_rqrd',
        '_asy_cnoa_crs_avl_prompt',
        '_asy_crs_sts_swil_indcr',
        '_asy_d2d_avl_rmn_sod',
        '_asy_d2d_deactvd_reasn_sod',
        '_asy_d2d_etc_distan_sod',
        '_asy_d2d_distan_sod',
        '_asy_d2d_strt_to_end_sod',
        '_asy_d2d_remind_sod',
        '_asy_lane_chg_fail_type',
        '_asy_req_lane_chg',
        '_asy_noa_deactvd_reasn_sod',
        '_asy_noa_remind_sod',
        '_ad4_drvr_belt_warn',
        '_asy_noa_takeover_sod',
        '_ad4_drvr_belt_warn_for_bkp',
        '_asy_lan_chg_sod_sec',
        '_ad4_camera_heating_req',
        '_ad_takeover_req_group_ad_takeover_msg',
        '_ad_takeover_req_group_ad_takeover_audio',
        '_ad_wipr_ctrl_req',
        '_asy_noa_blt_fastn',
        '_turn_indic_req_by_alca',
        '_asy_lane_chg_assist_sts',
        '_ad4_camera_heating_req_zcu',
        '_asy_fct_lrng_mesg',
        '_trfc_jam_warn',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'asy_cnoa_crs_actv_faild_voice': 'uint8',
        'asy_cnoa_crs_cross_intsec_voice': 'uint8',
        'asy_cnoa_crs_actv_voice': 'uint8',
        'asy_cnoa_crs_deactvd_voice': 'uint8',
        'asy_cnoa_crs_finshd_voice': 'uint8',
        'asy_cnoa_crs_offs_voice': 'uint8',
        'asy_cnoa_crs_rmn_voice': 'uint8',
        'asy_cnoa_hands_off_voice': 'uint8',
        'asy_cnoa_lrng_abort_voice': 'uint8',
        'asy_noa_avl_rmn_sound': 'uint8',
        'asy_cnoa_takeover_warn_voice': 'uint8',
        'asy_dece_remind_sound': 'uint8',
        'asy_drvr_sod_cfirm_cnoa_main_page': 'uint8',
        'asy_undertak_rmind_sound': 'uint8',
        'asy_warn_sod_for_aut_drv': 'uint8',
        'avl_sts_for_long_aut_drv': 'uint8',
        'too_many_cars': 'uint8',
        'drv_off_warn': 'uint8',
        'ad4_horn_warn': 'uint8',
        'hmi_auto_lane_chg_sts_for_asy_ai_asist_audio': 'uint8',
        'drv_off_mod': 'uint8',
        'asy_horn_warn_rqrd': 'uint8',
        'asy_cnoa_crs_avl_prompt': 'uint8',
        'asy_crs_sts_swil_indcr': 'uint8',
        'asy_d2d_avl_rmn_sod': 'uint8',
        'asy_d2d_deactvd_reasn_sod': 'uint8',
        'asy_d2d_etc_distan_sod': 'uint8',
        'asy_d2d_distan_sod': 'uint8',
        'asy_d2d_strt_to_end_sod': 'uint8',
        'asy_d2d_remind_sod': 'uint8',
        'asy_lane_chg_fail_type': 'uint8',
        'asy_req_lane_chg': 'uint8',
        'asy_noa_deactvd_reasn_sod': 'uint8',
        'asy_noa_remind_sod': 'uint8',
        'ad4_drvr_belt_warn': 'uint8',
        'asy_noa_takeover_sod': 'uint8',
        'ad4_drvr_belt_warn_for_bkp': 'uint8',
        'asy_lan_chg_sod_sec': 'uint8',
        'ad4_camera_heating_req': 'uint8',
        'ad_takeover_req_group_ad_takeover_msg': 'uint8',
        'ad_takeover_req_group_ad_takeover_audio': 'uint8',
        'ad_wipr_ctrl_req': 'uint8',
        'asy_noa_blt_fastn': 'uint8',
        'turn_indic_req_by_alca': 'uint8',
        'asy_lane_chg_assist_sts': 'uint8',
        'ad4_camera_heating_req_zcu': 'uint8',
        'asy_fct_lrng_mesg': 'uint8',
        'trfc_jam_warn': 'uint8',
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
        self.asy_cnoa_crs_actv_faild_voice = kwargs.get('asy_cnoa_crs_actv_faild_voice', int())
        self.asy_cnoa_crs_cross_intsec_voice = kwargs.get('asy_cnoa_crs_cross_intsec_voice', int())
        self.asy_cnoa_crs_actv_voice = kwargs.get('asy_cnoa_crs_actv_voice', int())
        self.asy_cnoa_crs_deactvd_voice = kwargs.get('asy_cnoa_crs_deactvd_voice', int())
        self.asy_cnoa_crs_finshd_voice = kwargs.get('asy_cnoa_crs_finshd_voice', int())
        self.asy_cnoa_crs_offs_voice = kwargs.get('asy_cnoa_crs_offs_voice', int())
        self.asy_cnoa_crs_rmn_voice = kwargs.get('asy_cnoa_crs_rmn_voice', int())
        self.asy_cnoa_hands_off_voice = kwargs.get('asy_cnoa_hands_off_voice', int())
        self.asy_cnoa_lrng_abort_voice = kwargs.get('asy_cnoa_lrng_abort_voice', int())
        self.asy_noa_avl_rmn_sound = kwargs.get('asy_noa_avl_rmn_sound', int())
        self.asy_cnoa_takeover_warn_voice = kwargs.get('asy_cnoa_takeover_warn_voice', int())
        self.asy_dece_remind_sound = kwargs.get('asy_dece_remind_sound', int())
        self.asy_drvr_sod_cfirm_cnoa_main_page = kwargs.get('asy_drvr_sod_cfirm_cnoa_main_page', int())
        self.asy_undertak_rmind_sound = kwargs.get('asy_undertak_rmind_sound', int())
        self.asy_warn_sod_for_aut_drv = kwargs.get('asy_warn_sod_for_aut_drv', int())
        self.avl_sts_for_long_aut_drv = kwargs.get('avl_sts_for_long_aut_drv', int())
        self.too_many_cars = kwargs.get('too_many_cars', int())
        self.drv_off_warn = kwargs.get('drv_off_warn', int())
        self.ad4_horn_warn = kwargs.get('ad4_horn_warn', int())
        self.hmi_auto_lane_chg_sts_for_asy_ai_asist_audio = kwargs.get('hmi_auto_lane_chg_sts_for_asy_ai_asist_audio', int())
        self.drv_off_mod = kwargs.get('drv_off_mod', int())
        self.asy_horn_warn_rqrd = kwargs.get('asy_horn_warn_rqrd', int())
        self.asy_cnoa_crs_avl_prompt = kwargs.get('asy_cnoa_crs_avl_prompt', int())
        self.asy_crs_sts_swil_indcr = kwargs.get('asy_crs_sts_swil_indcr', int())
        self.asy_d2d_avl_rmn_sod = kwargs.get('asy_d2d_avl_rmn_sod', int())
        self.asy_d2d_deactvd_reasn_sod = kwargs.get('asy_d2d_deactvd_reasn_sod', int())
        self.asy_d2d_etc_distan_sod = kwargs.get('asy_d2d_etc_distan_sod', int())
        self.asy_d2d_distan_sod = kwargs.get('asy_d2d_distan_sod', int())
        self.asy_d2d_strt_to_end_sod = kwargs.get('asy_d2d_strt_to_end_sod', int())
        self.asy_d2d_remind_sod = kwargs.get('asy_d2d_remind_sod', int())
        self.asy_lane_chg_fail_type = kwargs.get('asy_lane_chg_fail_type', int())
        self.asy_req_lane_chg = kwargs.get('asy_req_lane_chg', int())
        self.asy_noa_deactvd_reasn_sod = kwargs.get('asy_noa_deactvd_reasn_sod', int())
        self.asy_noa_remind_sod = kwargs.get('asy_noa_remind_sod', int())
        self.ad4_drvr_belt_warn = kwargs.get('ad4_drvr_belt_warn', int())
        self.asy_noa_takeover_sod = kwargs.get('asy_noa_takeover_sod', int())
        self.ad4_drvr_belt_warn_for_bkp = kwargs.get('ad4_drvr_belt_warn_for_bkp', int())
        self.asy_lan_chg_sod_sec = kwargs.get('asy_lan_chg_sod_sec', int())
        self.ad4_camera_heating_req = kwargs.get('ad4_camera_heating_req', int())
        self.ad_takeover_req_group_ad_takeover_msg = kwargs.get('ad_takeover_req_group_ad_takeover_msg', int())
        self.ad_takeover_req_group_ad_takeover_audio = kwargs.get('ad_takeover_req_group_ad_takeover_audio', int())
        self.ad_wipr_ctrl_req = kwargs.get('ad_wipr_ctrl_req', int())
        self.asy_noa_blt_fastn = kwargs.get('asy_noa_blt_fastn', int())
        self.turn_indic_req_by_alca = kwargs.get('turn_indic_req_by_alca', int())
        self.asy_lane_chg_assist_sts = kwargs.get('asy_lane_chg_assist_sts', int())
        self.ad4_camera_heating_req_zcu = kwargs.get('ad4_camera_heating_req_zcu', int())
        self.asy_fct_lrng_mesg = kwargs.get('asy_fct_lrng_mesg', int())
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
        if self.asy_cnoa_crs_actv_faild_voice != other.asy_cnoa_crs_actv_faild_voice:
            return False
        if self.asy_cnoa_crs_cross_intsec_voice != other.asy_cnoa_crs_cross_intsec_voice:
            return False
        if self.asy_cnoa_crs_actv_voice != other.asy_cnoa_crs_actv_voice:
            return False
        if self.asy_cnoa_crs_deactvd_voice != other.asy_cnoa_crs_deactvd_voice:
            return False
        if self.asy_cnoa_crs_finshd_voice != other.asy_cnoa_crs_finshd_voice:
            return False
        if self.asy_cnoa_crs_offs_voice != other.asy_cnoa_crs_offs_voice:
            return False
        if self.asy_cnoa_crs_rmn_voice != other.asy_cnoa_crs_rmn_voice:
            return False
        if self.asy_cnoa_hands_off_voice != other.asy_cnoa_hands_off_voice:
            return False
        if self.asy_cnoa_lrng_abort_voice != other.asy_cnoa_lrng_abort_voice:
            return False
        if self.asy_noa_avl_rmn_sound != other.asy_noa_avl_rmn_sound:
            return False
        if self.asy_cnoa_takeover_warn_voice != other.asy_cnoa_takeover_warn_voice:
            return False
        if self.asy_dece_remind_sound != other.asy_dece_remind_sound:
            return False
        if self.asy_drvr_sod_cfirm_cnoa_main_page != other.asy_drvr_sod_cfirm_cnoa_main_page:
            return False
        if self.asy_undertak_rmind_sound != other.asy_undertak_rmind_sound:
            return False
        if self.asy_warn_sod_for_aut_drv != other.asy_warn_sod_for_aut_drv:
            return False
        if self.avl_sts_for_long_aut_drv != other.avl_sts_for_long_aut_drv:
            return False
        if self.too_many_cars != other.too_many_cars:
            return False
        if self.drv_off_warn != other.drv_off_warn:
            return False
        if self.ad4_horn_warn != other.ad4_horn_warn:
            return False
        if self.hmi_auto_lane_chg_sts_for_asy_ai_asist_audio != other.hmi_auto_lane_chg_sts_for_asy_ai_asist_audio:
            return False
        if self.drv_off_mod != other.drv_off_mod:
            return False
        if self.asy_horn_warn_rqrd != other.asy_horn_warn_rqrd:
            return False
        if self.asy_cnoa_crs_avl_prompt != other.asy_cnoa_crs_avl_prompt:
            return False
        if self.asy_crs_sts_swil_indcr != other.asy_crs_sts_swil_indcr:
            return False
        if self.asy_d2d_avl_rmn_sod != other.asy_d2d_avl_rmn_sod:
            return False
        if self.asy_d2d_deactvd_reasn_sod != other.asy_d2d_deactvd_reasn_sod:
            return False
        if self.asy_d2d_etc_distan_sod != other.asy_d2d_etc_distan_sod:
            return False
        if self.asy_d2d_distan_sod != other.asy_d2d_distan_sod:
            return False
        if self.asy_d2d_strt_to_end_sod != other.asy_d2d_strt_to_end_sod:
            return False
        if self.asy_d2d_remind_sod != other.asy_d2d_remind_sod:
            return False
        if self.asy_lane_chg_fail_type != other.asy_lane_chg_fail_type:
            return False
        if self.asy_req_lane_chg != other.asy_req_lane_chg:
            return False
        if self.asy_noa_deactvd_reasn_sod != other.asy_noa_deactvd_reasn_sod:
            return False
        if self.asy_noa_remind_sod != other.asy_noa_remind_sod:
            return False
        if self.ad4_drvr_belt_warn != other.ad4_drvr_belt_warn:
            return False
        if self.asy_noa_takeover_sod != other.asy_noa_takeover_sod:
            return False
        if self.ad4_drvr_belt_warn_for_bkp != other.ad4_drvr_belt_warn_for_bkp:
            return False
        if self.asy_lan_chg_sod_sec != other.asy_lan_chg_sod_sec:
            return False
        if self.ad4_camera_heating_req != other.ad4_camera_heating_req:
            return False
        if self.ad_takeover_req_group_ad_takeover_msg != other.ad_takeover_req_group_ad_takeover_msg:
            return False
        if self.ad_takeover_req_group_ad_takeover_audio != other.ad_takeover_req_group_ad_takeover_audio:
            return False
        if self.ad_wipr_ctrl_req != other.ad_wipr_ctrl_req:
            return False
        if self.asy_noa_blt_fastn != other.asy_noa_blt_fastn:
            return False
        if self.turn_indic_req_by_alca != other.turn_indic_req_by_alca:
            return False
        if self.asy_lane_chg_assist_sts != other.asy_lane_chg_assist_sts:
            return False
        if self.ad4_camera_heating_req_zcu != other.ad4_camera_heating_req_zcu:
            return False
        if self.asy_fct_lrng_mesg != other.asy_fct_lrng_mesg:
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
    def asy_cnoa_crs_actv_faild_voice(self):
        """Message field 'asy_cnoa_crs_actv_faild_voice'."""
        return self._asy_cnoa_crs_actv_faild_voice

    @asy_cnoa_crs_actv_faild_voice.setter
    def asy_cnoa_crs_actv_faild_voice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_actv_faild_voice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_actv_faild_voice' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_actv_faild_voice = value

    @builtins.property
    def asy_cnoa_crs_cross_intsec_voice(self):
        """Message field 'asy_cnoa_crs_cross_intsec_voice'."""
        return self._asy_cnoa_crs_cross_intsec_voice

    @asy_cnoa_crs_cross_intsec_voice.setter
    def asy_cnoa_crs_cross_intsec_voice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_cross_intsec_voice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_cross_intsec_voice' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_cross_intsec_voice = value

    @builtins.property
    def asy_cnoa_crs_actv_voice(self):
        """Message field 'asy_cnoa_crs_actv_voice'."""
        return self._asy_cnoa_crs_actv_voice

    @asy_cnoa_crs_actv_voice.setter
    def asy_cnoa_crs_actv_voice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_actv_voice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_actv_voice' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_actv_voice = value

    @builtins.property
    def asy_cnoa_crs_deactvd_voice(self):
        """Message field 'asy_cnoa_crs_deactvd_voice'."""
        return self._asy_cnoa_crs_deactvd_voice

    @asy_cnoa_crs_deactvd_voice.setter
    def asy_cnoa_crs_deactvd_voice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_deactvd_voice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_deactvd_voice' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_deactvd_voice = value

    @builtins.property
    def asy_cnoa_crs_finshd_voice(self):
        """Message field 'asy_cnoa_crs_finshd_voice'."""
        return self._asy_cnoa_crs_finshd_voice

    @asy_cnoa_crs_finshd_voice.setter
    def asy_cnoa_crs_finshd_voice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_finshd_voice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_finshd_voice' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_finshd_voice = value

    @builtins.property
    def asy_cnoa_crs_offs_voice(self):
        """Message field 'asy_cnoa_crs_offs_voice'."""
        return self._asy_cnoa_crs_offs_voice

    @asy_cnoa_crs_offs_voice.setter
    def asy_cnoa_crs_offs_voice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_offs_voice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_offs_voice' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_offs_voice = value

    @builtins.property
    def asy_cnoa_crs_rmn_voice(self):
        """Message field 'asy_cnoa_crs_rmn_voice'."""
        return self._asy_cnoa_crs_rmn_voice

    @asy_cnoa_crs_rmn_voice.setter
    def asy_cnoa_crs_rmn_voice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_rmn_voice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_rmn_voice' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_rmn_voice = value

    @builtins.property
    def asy_cnoa_hands_off_voice(self):
        """Message field 'asy_cnoa_hands_off_voice'."""
        return self._asy_cnoa_hands_off_voice

    @asy_cnoa_hands_off_voice.setter
    def asy_cnoa_hands_off_voice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_hands_off_voice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_hands_off_voice' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_hands_off_voice = value

    @builtins.property
    def asy_cnoa_lrng_abort_voice(self):
        """Message field 'asy_cnoa_lrng_abort_voice'."""
        return self._asy_cnoa_lrng_abort_voice

    @asy_cnoa_lrng_abort_voice.setter
    def asy_cnoa_lrng_abort_voice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_lrng_abort_voice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_lrng_abort_voice' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_lrng_abort_voice = value

    @builtins.property
    def asy_noa_avl_rmn_sound(self):
        """Message field 'asy_noa_avl_rmn_sound'."""
        return self._asy_noa_avl_rmn_sound

    @asy_noa_avl_rmn_sound.setter
    def asy_noa_avl_rmn_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_avl_rmn_sound' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_avl_rmn_sound' field must be an unsigned integer in [0, 255]"
        self._asy_noa_avl_rmn_sound = value

    @builtins.property
    def asy_cnoa_takeover_warn_voice(self):
        """Message field 'asy_cnoa_takeover_warn_voice'."""
        return self._asy_cnoa_takeover_warn_voice

    @asy_cnoa_takeover_warn_voice.setter
    def asy_cnoa_takeover_warn_voice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_takeover_warn_voice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_takeover_warn_voice' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_takeover_warn_voice = value

    @builtins.property
    def asy_dece_remind_sound(self):
        """Message field 'asy_dece_remind_sound'."""
        return self._asy_dece_remind_sound

    @asy_dece_remind_sound.setter
    def asy_dece_remind_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_dece_remind_sound' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_dece_remind_sound' field must be an unsigned integer in [0, 255]"
        self._asy_dece_remind_sound = value

    @builtins.property
    def asy_drvr_sod_cfirm_cnoa_main_page(self):
        """Message field 'asy_drvr_sod_cfirm_cnoa_main_page'."""
        return self._asy_drvr_sod_cfirm_cnoa_main_page

    @asy_drvr_sod_cfirm_cnoa_main_page.setter
    def asy_drvr_sod_cfirm_cnoa_main_page(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_drvr_sod_cfirm_cnoa_main_page' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_drvr_sod_cfirm_cnoa_main_page' field must be an unsigned integer in [0, 255]"
        self._asy_drvr_sod_cfirm_cnoa_main_page = value

    @builtins.property
    def asy_undertak_rmind_sound(self):
        """Message field 'asy_undertak_rmind_sound'."""
        return self._asy_undertak_rmind_sound

    @asy_undertak_rmind_sound.setter
    def asy_undertak_rmind_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_undertak_rmind_sound' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_undertak_rmind_sound' field must be an unsigned integer in [0, 255]"
        self._asy_undertak_rmind_sound = value

    @builtins.property
    def asy_warn_sod_for_aut_drv(self):
        """Message field 'asy_warn_sod_for_aut_drv'."""
        return self._asy_warn_sod_for_aut_drv

    @asy_warn_sod_for_aut_drv.setter
    def asy_warn_sod_for_aut_drv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_warn_sod_for_aut_drv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_warn_sod_for_aut_drv' field must be an unsigned integer in [0, 255]"
        self._asy_warn_sod_for_aut_drv = value

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
    def too_many_cars(self):
        """Message field 'too_many_cars'."""
        return self._too_many_cars

    @too_many_cars.setter
    def too_many_cars(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'too_many_cars' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'too_many_cars' field must be an unsigned integer in [0, 255]"
        self._too_many_cars = value

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
    def ad4_horn_warn(self):
        """Message field 'ad4_horn_warn'."""
        return self._ad4_horn_warn

    @ad4_horn_warn.setter
    def ad4_horn_warn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_horn_warn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_horn_warn' field must be an unsigned integer in [0, 255]"
        self._ad4_horn_warn = value

    @builtins.property
    def hmi_auto_lane_chg_sts_for_asy_ai_asist_audio(self):
        """Message field 'hmi_auto_lane_chg_sts_for_asy_ai_asist_audio'."""
        return self._hmi_auto_lane_chg_sts_for_asy_ai_asist_audio

    @hmi_auto_lane_chg_sts_for_asy_ai_asist_audio.setter
    def hmi_auto_lane_chg_sts_for_asy_ai_asist_audio(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_auto_lane_chg_sts_for_asy_ai_asist_audio' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_auto_lane_chg_sts_for_asy_ai_asist_audio' field must be an unsigned integer in [0, 255]"
        self._hmi_auto_lane_chg_sts_for_asy_ai_asist_audio = value

    @builtins.property
    def drv_off_mod(self):
        """Message field 'drv_off_mod'."""
        return self._drv_off_mod

    @drv_off_mod.setter
    def drv_off_mod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drv_off_mod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drv_off_mod' field must be an unsigned integer in [0, 255]"
        self._drv_off_mod = value

    @builtins.property
    def asy_horn_warn_rqrd(self):
        """Message field 'asy_horn_warn_rqrd'."""
        return self._asy_horn_warn_rqrd

    @asy_horn_warn_rqrd.setter
    def asy_horn_warn_rqrd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_horn_warn_rqrd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_horn_warn_rqrd' field must be an unsigned integer in [0, 255]"
        self._asy_horn_warn_rqrd = value

    @builtins.property
    def asy_cnoa_crs_avl_prompt(self):
        """Message field 'asy_cnoa_crs_avl_prompt'."""
        return self._asy_cnoa_crs_avl_prompt

    @asy_cnoa_crs_avl_prompt.setter
    def asy_cnoa_crs_avl_prompt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_avl_prompt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_avl_prompt' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_avl_prompt = value

    @builtins.property
    def asy_crs_sts_swil_indcr(self):
        """Message field 'asy_crs_sts_swil_indcr'."""
        return self._asy_crs_sts_swil_indcr

    @asy_crs_sts_swil_indcr.setter
    def asy_crs_sts_swil_indcr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_crs_sts_swil_indcr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_crs_sts_swil_indcr' field must be an unsigned integer in [0, 255]"
        self._asy_crs_sts_swil_indcr = value

    @builtins.property
    def asy_d2d_avl_rmn_sod(self):
        """Message field 'asy_d2d_avl_rmn_sod'."""
        return self._asy_d2d_avl_rmn_sod

    @asy_d2d_avl_rmn_sod.setter
    def asy_d2d_avl_rmn_sod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_d2d_avl_rmn_sod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_d2d_avl_rmn_sod' field must be an unsigned integer in [0, 255]"
        self._asy_d2d_avl_rmn_sod = value

    @builtins.property
    def asy_d2d_deactvd_reasn_sod(self):
        """Message field 'asy_d2d_deactvd_reasn_sod'."""
        return self._asy_d2d_deactvd_reasn_sod

    @asy_d2d_deactvd_reasn_sod.setter
    def asy_d2d_deactvd_reasn_sod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_d2d_deactvd_reasn_sod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_d2d_deactvd_reasn_sod' field must be an unsigned integer in [0, 255]"
        self._asy_d2d_deactvd_reasn_sod = value

    @builtins.property
    def asy_d2d_etc_distan_sod(self):
        """Message field 'asy_d2d_etc_distan_sod'."""
        return self._asy_d2d_etc_distan_sod

    @asy_d2d_etc_distan_sod.setter
    def asy_d2d_etc_distan_sod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_d2d_etc_distan_sod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_d2d_etc_distan_sod' field must be an unsigned integer in [0, 255]"
        self._asy_d2d_etc_distan_sod = value

    @builtins.property
    def asy_d2d_distan_sod(self):
        """Message field 'asy_d2d_distan_sod'."""
        return self._asy_d2d_distan_sod

    @asy_d2d_distan_sod.setter
    def asy_d2d_distan_sod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_d2d_distan_sod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_d2d_distan_sod' field must be an unsigned integer in [0, 255]"
        self._asy_d2d_distan_sod = value

    @builtins.property
    def asy_d2d_strt_to_end_sod(self):
        """Message field 'asy_d2d_strt_to_end_sod'."""
        return self._asy_d2d_strt_to_end_sod

    @asy_d2d_strt_to_end_sod.setter
    def asy_d2d_strt_to_end_sod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_d2d_strt_to_end_sod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_d2d_strt_to_end_sod' field must be an unsigned integer in [0, 255]"
        self._asy_d2d_strt_to_end_sod = value

    @builtins.property
    def asy_d2d_remind_sod(self):
        """Message field 'asy_d2d_remind_sod'."""
        return self._asy_d2d_remind_sod

    @asy_d2d_remind_sod.setter
    def asy_d2d_remind_sod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_d2d_remind_sod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_d2d_remind_sod' field must be an unsigned integer in [0, 255]"
        self._asy_d2d_remind_sod = value

    @builtins.property
    def asy_lane_chg_fail_type(self):
        """Message field 'asy_lane_chg_fail_type'."""
        return self._asy_lane_chg_fail_type

    @asy_lane_chg_fail_type.setter
    def asy_lane_chg_fail_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_lane_chg_fail_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_lane_chg_fail_type' field must be an unsigned integer in [0, 255]"
        self._asy_lane_chg_fail_type = value

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
    def asy_noa_deactvd_reasn_sod(self):
        """Message field 'asy_noa_deactvd_reasn_sod'."""
        return self._asy_noa_deactvd_reasn_sod

    @asy_noa_deactvd_reasn_sod.setter
    def asy_noa_deactvd_reasn_sod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_deactvd_reasn_sod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_deactvd_reasn_sod' field must be an unsigned integer in [0, 255]"
        self._asy_noa_deactvd_reasn_sod = value

    @builtins.property
    def asy_noa_remind_sod(self):
        """Message field 'asy_noa_remind_sod'."""
        return self._asy_noa_remind_sod

    @asy_noa_remind_sod.setter
    def asy_noa_remind_sod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_remind_sod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_remind_sod' field must be an unsigned integer in [0, 255]"
        self._asy_noa_remind_sod = value

    @builtins.property
    def ad4_drvr_belt_warn(self):
        """Message field 'ad4_drvr_belt_warn'."""
        return self._ad4_drvr_belt_warn

    @ad4_drvr_belt_warn.setter
    def ad4_drvr_belt_warn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_drvr_belt_warn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_drvr_belt_warn' field must be an unsigned integer in [0, 255]"
        self._ad4_drvr_belt_warn = value

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
            assert value >= 0 and value < 256, \
                "The 'asy_noa_takeover_sod' field must be an unsigned integer in [0, 255]"
        self._asy_noa_takeover_sod = value

    @builtins.property
    def ad4_drvr_belt_warn_for_bkp(self):
        """Message field 'ad4_drvr_belt_warn_for_bkp'."""
        return self._ad4_drvr_belt_warn_for_bkp

    @ad4_drvr_belt_warn_for_bkp.setter
    def ad4_drvr_belt_warn_for_bkp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_drvr_belt_warn_for_bkp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_drvr_belt_warn_for_bkp' field must be an unsigned integer in [0, 255]"
        self._ad4_drvr_belt_warn_for_bkp = value

    @builtins.property
    def asy_lan_chg_sod_sec(self):
        """Message field 'asy_lan_chg_sod_sec'."""
        return self._asy_lan_chg_sod_sec

    @asy_lan_chg_sod_sec.setter
    def asy_lan_chg_sod_sec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_lan_chg_sod_sec' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_lan_chg_sod_sec' field must be an unsigned integer in [0, 255]"
        self._asy_lan_chg_sod_sec = value

    @builtins.property
    def ad4_camera_heating_req(self):
        """Message field 'ad4_camera_heating_req'."""
        return self._ad4_camera_heating_req

    @ad4_camera_heating_req.setter
    def ad4_camera_heating_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_camera_heating_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_camera_heating_req' field must be an unsigned integer in [0, 255]"
        self._ad4_camera_heating_req = value

    @builtins.property
    def ad_takeover_req_group_ad_takeover_msg(self):
        """Message field 'ad_takeover_req_group_ad_takeover_msg'."""
        return self._ad_takeover_req_group_ad_takeover_msg

    @ad_takeover_req_group_ad_takeover_msg.setter
    def ad_takeover_req_group_ad_takeover_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad_takeover_req_group_ad_takeover_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad_takeover_req_group_ad_takeover_msg' field must be an unsigned integer in [0, 255]"
        self._ad_takeover_req_group_ad_takeover_msg = value

    @builtins.property
    def ad_takeover_req_group_ad_takeover_audio(self):
        """Message field 'ad_takeover_req_group_ad_takeover_audio'."""
        return self._ad_takeover_req_group_ad_takeover_audio

    @ad_takeover_req_group_ad_takeover_audio.setter
    def ad_takeover_req_group_ad_takeover_audio(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad_takeover_req_group_ad_takeover_audio' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad_takeover_req_group_ad_takeover_audio' field must be an unsigned integer in [0, 255]"
        self._ad_takeover_req_group_ad_takeover_audio = value

    @builtins.property
    def ad_wipr_ctrl_req(self):
        """Message field 'ad_wipr_ctrl_req'."""
        return self._ad_wipr_ctrl_req

    @ad_wipr_ctrl_req.setter
    def ad_wipr_ctrl_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad_wipr_ctrl_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad_wipr_ctrl_req' field must be an unsigned integer in [0, 255]"
        self._ad_wipr_ctrl_req = value

    @builtins.property
    def asy_noa_blt_fastn(self):
        """Message field 'asy_noa_blt_fastn'."""
        return self._asy_noa_blt_fastn

    @asy_noa_blt_fastn.setter
    def asy_noa_blt_fastn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_blt_fastn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_blt_fastn' field must be an unsigned integer in [0, 255]"
        self._asy_noa_blt_fastn = value

    @builtins.property
    def turn_indic_req_by_alca(self):
        """Message field 'turn_indic_req_by_alca'."""
        return self._turn_indic_req_by_alca

    @turn_indic_req_by_alca.setter
    def turn_indic_req_by_alca(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_indic_req_by_alca' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'turn_indic_req_by_alca' field must be an unsigned integer in [0, 255]"
        self._turn_indic_req_by_alca = value

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
    def ad4_camera_heating_req_zcu(self):
        """Message field 'ad4_camera_heating_req_zcu'."""
        return self._ad4_camera_heating_req_zcu

    @ad4_camera_heating_req_zcu.setter
    def ad4_camera_heating_req_zcu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad4_camera_heating_req_zcu' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad4_camera_heating_req_zcu' field must be an unsigned integer in [0, 255]"
        self._ad4_camera_heating_req_zcu = value

    @builtins.property
    def asy_fct_lrng_mesg(self):
        """Message field 'asy_fct_lrng_mesg'."""
        return self._asy_fct_lrng_mesg

    @asy_fct_lrng_mesg.setter
    def asy_fct_lrng_mesg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_fct_lrng_mesg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_fct_lrng_mesg' field must be an unsigned integer in [0, 255]"
        self._asy_fct_lrng_mesg = value

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
