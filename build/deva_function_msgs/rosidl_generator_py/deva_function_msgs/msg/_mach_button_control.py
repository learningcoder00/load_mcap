# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/MachButtonControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MachButtonControl(type):
    """Metaclass of message 'MachButtonControl'."""

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
                'deva_function_msgs.msg.MachButtonControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mach_button_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mach_button_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mach_button_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mach_button_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mach_button_control

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


class MachButtonControl(metaclass=Metaclass_MachButtonControl):
    """Message class 'MachButtonControl'."""

    __slots__ = [
        '_header',
        '_asy_a_lgt_sts_asy_a_lgt_sts',
        '_asy_cnoa_crs_lat_offs_anima_sts',
        '_drv_off_req_for_lgt_ctrl',
        '_asy_eyes_off_warn_rqrd',
        '_asy_eyes_off_warn_rqrd_sound',
        '_asy_first_ti_actvn',
        '_asy_noa_actv_suggest_sound',
        '_asy_inform_for_drvr',
        '_asy_lat_deg_sts',
        '_asy_inform_for_drvr_sound',
        '_asy_noa_actv_suggest',
        '_asy_noa_distan_msg',
        '_asy_noa_distan_msg_sound',
        '_asy_noa_sts',
        '_asy_steer_apply_rqrd_sound',
        '_asy_aut_drvg_avl_sound',
        '_asy_lan_chg_color_dsp',
        '_asy_lan_chg_mesg',
        '_asy_lan_chg_sod',
        '_asy_aut_emgy_steer_actv',
        '_brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv',
        '_cllsn_threat',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'asy_a_lgt_sts_asy_a_lgt_sts': 'uint8',
        'asy_cnoa_crs_lat_offs_anima_sts': 'uint8',
        'drv_off_req_for_lgt_ctrl': 'uint8',
        'asy_eyes_off_warn_rqrd': 'uint8',
        'asy_eyes_off_warn_rqrd_sound': 'uint8',
        'asy_first_ti_actvn': 'uint8',
        'asy_noa_actv_suggest_sound': 'uint8',
        'asy_inform_for_drvr': 'uint8',
        'asy_lat_deg_sts': 'uint8',
        'asy_inform_for_drvr_sound': 'uint8',
        'asy_noa_actv_suggest': 'uint8',
        'asy_noa_distan_msg': 'uint8',
        'asy_noa_distan_msg_sound': 'uint8',
        'asy_noa_sts': 'uint8',
        'asy_steer_apply_rqrd_sound': 'uint8',
        'asy_aut_drvg_avl_sound': 'uint8',
        'asy_lan_chg_color_dsp': 'uint8',
        'asy_lan_chg_mesg': 'uint8',
        'asy_lan_chg_sod': 'uint8',
        'asy_aut_emgy_steer_actv': 'uint8',
        'brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv': 'uint8',
        'cllsn_threat': 'uint8',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.asy_a_lgt_sts_asy_a_lgt_sts = kwargs.get('asy_a_lgt_sts_asy_a_lgt_sts', int())
        self.asy_cnoa_crs_lat_offs_anima_sts = kwargs.get('asy_cnoa_crs_lat_offs_anima_sts', int())
        self.drv_off_req_for_lgt_ctrl = kwargs.get('drv_off_req_for_lgt_ctrl', int())
        self.asy_eyes_off_warn_rqrd = kwargs.get('asy_eyes_off_warn_rqrd', int())
        self.asy_eyes_off_warn_rqrd_sound = kwargs.get('asy_eyes_off_warn_rqrd_sound', int())
        self.asy_first_ti_actvn = kwargs.get('asy_first_ti_actvn', int())
        self.asy_noa_actv_suggest_sound = kwargs.get('asy_noa_actv_suggest_sound', int())
        self.asy_inform_for_drvr = kwargs.get('asy_inform_for_drvr', int())
        self.asy_lat_deg_sts = kwargs.get('asy_lat_deg_sts', int())
        self.asy_inform_for_drvr_sound = kwargs.get('asy_inform_for_drvr_sound', int())
        self.asy_noa_actv_suggest = kwargs.get('asy_noa_actv_suggest', int())
        self.asy_noa_distan_msg = kwargs.get('asy_noa_distan_msg', int())
        self.asy_noa_distan_msg_sound = kwargs.get('asy_noa_distan_msg_sound', int())
        self.asy_noa_sts = kwargs.get('asy_noa_sts', int())
        self.asy_steer_apply_rqrd_sound = kwargs.get('asy_steer_apply_rqrd_sound', int())
        self.asy_aut_drvg_avl_sound = kwargs.get('asy_aut_drvg_avl_sound', int())
        self.asy_lan_chg_color_dsp = kwargs.get('asy_lan_chg_color_dsp', int())
        self.asy_lan_chg_mesg = kwargs.get('asy_lan_chg_mesg', int())
        self.asy_lan_chg_sod = kwargs.get('asy_lan_chg_sod', int())
        self.asy_aut_emgy_steer_actv = kwargs.get('asy_aut_emgy_steer_actv', int())
        self.brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv = kwargs.get('brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv', int())
        self.cllsn_threat = kwargs.get('cllsn_threat', int())

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
        if self.asy_a_lgt_sts_asy_a_lgt_sts != other.asy_a_lgt_sts_asy_a_lgt_sts:
            return False
        if self.asy_cnoa_crs_lat_offs_anima_sts != other.asy_cnoa_crs_lat_offs_anima_sts:
            return False
        if self.drv_off_req_for_lgt_ctrl != other.drv_off_req_for_lgt_ctrl:
            return False
        if self.asy_eyes_off_warn_rqrd != other.asy_eyes_off_warn_rqrd:
            return False
        if self.asy_eyes_off_warn_rqrd_sound != other.asy_eyes_off_warn_rqrd_sound:
            return False
        if self.asy_first_ti_actvn != other.asy_first_ti_actvn:
            return False
        if self.asy_noa_actv_suggest_sound != other.asy_noa_actv_suggest_sound:
            return False
        if self.asy_inform_for_drvr != other.asy_inform_for_drvr:
            return False
        if self.asy_lat_deg_sts != other.asy_lat_deg_sts:
            return False
        if self.asy_inform_for_drvr_sound != other.asy_inform_for_drvr_sound:
            return False
        if self.asy_noa_actv_suggest != other.asy_noa_actv_suggest:
            return False
        if self.asy_noa_distan_msg != other.asy_noa_distan_msg:
            return False
        if self.asy_noa_distan_msg_sound != other.asy_noa_distan_msg_sound:
            return False
        if self.asy_noa_sts != other.asy_noa_sts:
            return False
        if self.asy_steer_apply_rqrd_sound != other.asy_steer_apply_rqrd_sound:
            return False
        if self.asy_aut_drvg_avl_sound != other.asy_aut_drvg_avl_sound:
            return False
        if self.asy_lan_chg_color_dsp != other.asy_lan_chg_color_dsp:
            return False
        if self.asy_lan_chg_mesg != other.asy_lan_chg_mesg:
            return False
        if self.asy_lan_chg_sod != other.asy_lan_chg_sod:
            return False
        if self.asy_aut_emgy_steer_actv != other.asy_aut_emgy_steer_actv:
            return False
        if self.brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv != other.brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv:
            return False
        if self.cllsn_threat != other.cllsn_threat:
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
    def asy_cnoa_crs_lat_offs_anima_sts(self):
        """Message field 'asy_cnoa_crs_lat_offs_anima_sts'."""
        return self._asy_cnoa_crs_lat_offs_anima_sts

    @asy_cnoa_crs_lat_offs_anima_sts.setter
    def asy_cnoa_crs_lat_offs_anima_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_lat_offs_anima_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_lat_offs_anima_sts' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_lat_offs_anima_sts = value

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
    def asy_eyes_off_warn_rqrd_sound(self):
        """Message field 'asy_eyes_off_warn_rqrd_sound'."""
        return self._asy_eyes_off_warn_rqrd_sound

    @asy_eyes_off_warn_rqrd_sound.setter
    def asy_eyes_off_warn_rqrd_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_eyes_off_warn_rqrd_sound' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_eyes_off_warn_rqrd_sound' field must be an unsigned integer in [0, 255]"
        self._asy_eyes_off_warn_rqrd_sound = value

    @builtins.property
    def asy_first_ti_actvn(self):
        """Message field 'asy_first_ti_actvn'."""
        return self._asy_first_ti_actvn

    @asy_first_ti_actvn.setter
    def asy_first_ti_actvn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_first_ti_actvn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_first_ti_actvn' field must be an unsigned integer in [0, 255]"
        self._asy_first_ti_actvn = value

    @builtins.property
    def asy_noa_actv_suggest_sound(self):
        """Message field 'asy_noa_actv_suggest_sound'."""
        return self._asy_noa_actv_suggest_sound

    @asy_noa_actv_suggest_sound.setter
    def asy_noa_actv_suggest_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_actv_suggest_sound' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_actv_suggest_sound' field must be an unsigned integer in [0, 255]"
        self._asy_noa_actv_suggest_sound = value

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
    def asy_inform_for_drvr_sound(self):
        """Message field 'asy_inform_for_drvr_sound'."""
        return self._asy_inform_for_drvr_sound

    @asy_inform_for_drvr_sound.setter
    def asy_inform_for_drvr_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_inform_for_drvr_sound' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_inform_for_drvr_sound' field must be an unsigned integer in [0, 255]"
        self._asy_inform_for_drvr_sound = value

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
    def asy_noa_distan_msg(self):
        """Message field 'asy_noa_distan_msg'."""
        return self._asy_noa_distan_msg

    @asy_noa_distan_msg.setter
    def asy_noa_distan_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_distan_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_distan_msg' field must be an unsigned integer in [0, 255]"
        self._asy_noa_distan_msg = value

    @builtins.property
    def asy_noa_distan_msg_sound(self):
        """Message field 'asy_noa_distan_msg_sound'."""
        return self._asy_noa_distan_msg_sound

    @asy_noa_distan_msg_sound.setter
    def asy_noa_distan_msg_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_distan_msg_sound' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_distan_msg_sound' field must be an unsigned integer in [0, 255]"
        self._asy_noa_distan_msg_sound = value

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
    def asy_steer_apply_rqrd_sound(self):
        """Message field 'asy_steer_apply_rqrd_sound'."""
        return self._asy_steer_apply_rqrd_sound

    @asy_steer_apply_rqrd_sound.setter
    def asy_steer_apply_rqrd_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_steer_apply_rqrd_sound' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_steer_apply_rqrd_sound' field must be an unsigned integer in [0, 255]"
        self._asy_steer_apply_rqrd_sound = value

    @builtins.property
    def asy_aut_drvg_avl_sound(self):
        """Message field 'asy_aut_drvg_avl_sound'."""
        return self._asy_aut_drvg_avl_sound

    @asy_aut_drvg_avl_sound.setter
    def asy_aut_drvg_avl_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_aut_drvg_avl_sound' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_aut_drvg_avl_sound' field must be an unsigned integer in [0, 255]"
        self._asy_aut_drvg_avl_sound = value

    @builtins.property
    def asy_lan_chg_color_dsp(self):
        """Message field 'asy_lan_chg_color_dsp'."""
        return self._asy_lan_chg_color_dsp

    @asy_lan_chg_color_dsp.setter
    def asy_lan_chg_color_dsp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_lan_chg_color_dsp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_lan_chg_color_dsp' field must be an unsigned integer in [0, 255]"
        self._asy_lan_chg_color_dsp = value

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
    def asy_lan_chg_sod(self):
        """Message field 'asy_lan_chg_sod'."""
        return self._asy_lan_chg_sod

    @asy_lan_chg_sod.setter
    def asy_lan_chg_sod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_lan_chg_sod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_lan_chg_sod' field must be an unsigned integer in [0, 255]"
        self._asy_lan_chg_sod = value

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
    def brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv(self):
        """Message field 'brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv'."""
        return self._brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv

    @brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv.setter
    def brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv' field must be an unsigned integer in [0, 255]"
        self._brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv = value

    @builtins.property
    def cllsn_threat(self):
        """Message field 'cllsn_threat'."""
        return self._cllsn_threat

    @cllsn_threat.setter
    def cllsn_threat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cllsn_threat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cllsn_threat' field must be an unsigned integer in [0, 255]"
        self._cllsn_threat = value
