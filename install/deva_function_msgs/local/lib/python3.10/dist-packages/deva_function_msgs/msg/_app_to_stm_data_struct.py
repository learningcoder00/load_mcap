# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/APPToStmDataStruct.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'rev'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_APPToStmDataStruct(type):
    """Metaclass of message 'APPToStmDataStruct'."""

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
                'deva_function_msgs.msg.APPToStmDataStruct')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__app_to_stm_data_struct
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__app_to_stm_data_struct
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__app_to_stm_data_struct
            cls._TYPE_SUPPORT = module.type_support_msg__msg__app_to_stm_data_struct
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__app_to_stm_data_struct

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class APPToStmDataStruct(metaclass=Metaclass_APPToStmDataStruct):
    """Message class 'APPToStmDataStruct'."""

    __slots__ = [
        '_app_to_hpa_ctrl_cmd',
        '_mob_dev_avp_req',
        '_on_bd_chrgr_hndl_sts1',
        '_dc_chrgn_hndl_sts',
        '_occupy_mon_sts_drvr_sts',
        '_alrm_sts_alrm_failr',
        '_alrm_sts_alrm_st',
        '_alrm_sts_alrm_trg_src',
        '_alrm_sts_snsr_incln_failr',
        '_alrm_sts_snsr_intr_scanr_failr',
        '_telephone_sts',
        '_tr_lock_sts',
        '_trsm_park_lockd_trsm_park_lockd',
        '_twli_bri_raw_qf',
        '_twli_bri_raw_twli_bri_raw',
        '_rev',
    ]

    _fields_and_field_types = {
        'app_to_hpa_ctrl_cmd': 'uint8',
        'mob_dev_avp_req': 'uint8',
        'on_bd_chrgr_hndl_sts1': 'uint8',
        'dc_chrgn_hndl_sts': 'uint8',
        'occupy_mon_sts_drvr_sts': 'uint8',
        'alrm_sts_alrm_failr': 'uint8',
        'alrm_sts_alrm_st': 'uint8',
        'alrm_sts_alrm_trg_src': 'uint8',
        'alrm_sts_snsr_incln_failr': 'uint8',
        'alrm_sts_snsr_intr_scanr_failr': 'uint8',
        'telephone_sts': 'uint8',
        'tr_lock_sts': 'uint8',
        'trsm_park_lockd_trsm_park_lockd': 'uint8',
        'twli_bri_raw_qf': 'uint8',
        'twli_bri_raw_twli_bri_raw': 'uint16',
        'rev': 'uint8[8]',
    }

    SLOT_TYPES = (
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
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 8),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.app_to_hpa_ctrl_cmd = kwargs.get('app_to_hpa_ctrl_cmd', int())
        self.mob_dev_avp_req = kwargs.get('mob_dev_avp_req', int())
        self.on_bd_chrgr_hndl_sts1 = kwargs.get('on_bd_chrgr_hndl_sts1', int())
        self.dc_chrgn_hndl_sts = kwargs.get('dc_chrgn_hndl_sts', int())
        self.occupy_mon_sts_drvr_sts = kwargs.get('occupy_mon_sts_drvr_sts', int())
        self.alrm_sts_alrm_failr = kwargs.get('alrm_sts_alrm_failr', int())
        self.alrm_sts_alrm_st = kwargs.get('alrm_sts_alrm_st', int())
        self.alrm_sts_alrm_trg_src = kwargs.get('alrm_sts_alrm_trg_src', int())
        self.alrm_sts_snsr_incln_failr = kwargs.get('alrm_sts_snsr_incln_failr', int())
        self.alrm_sts_snsr_intr_scanr_failr = kwargs.get('alrm_sts_snsr_intr_scanr_failr', int())
        self.telephone_sts = kwargs.get('telephone_sts', int())
        self.tr_lock_sts = kwargs.get('tr_lock_sts', int())
        self.trsm_park_lockd_trsm_park_lockd = kwargs.get('trsm_park_lockd_trsm_park_lockd', int())
        self.twli_bri_raw_qf = kwargs.get('twli_bri_raw_qf', int())
        self.twli_bri_raw_twli_bri_raw = kwargs.get('twli_bri_raw_twli_bri_raw', int())
        if 'rev' not in kwargs:
            self.rev = numpy.zeros(8, dtype=numpy.uint8)
        else:
            self.rev = kwargs.get('rev')

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
        if self.app_to_hpa_ctrl_cmd != other.app_to_hpa_ctrl_cmd:
            return False
        if self.mob_dev_avp_req != other.mob_dev_avp_req:
            return False
        if self.on_bd_chrgr_hndl_sts1 != other.on_bd_chrgr_hndl_sts1:
            return False
        if self.dc_chrgn_hndl_sts != other.dc_chrgn_hndl_sts:
            return False
        if self.occupy_mon_sts_drvr_sts != other.occupy_mon_sts_drvr_sts:
            return False
        if self.alrm_sts_alrm_failr != other.alrm_sts_alrm_failr:
            return False
        if self.alrm_sts_alrm_st != other.alrm_sts_alrm_st:
            return False
        if self.alrm_sts_alrm_trg_src != other.alrm_sts_alrm_trg_src:
            return False
        if self.alrm_sts_snsr_incln_failr != other.alrm_sts_snsr_incln_failr:
            return False
        if self.alrm_sts_snsr_intr_scanr_failr != other.alrm_sts_snsr_intr_scanr_failr:
            return False
        if self.telephone_sts != other.telephone_sts:
            return False
        if self.tr_lock_sts != other.tr_lock_sts:
            return False
        if self.trsm_park_lockd_trsm_park_lockd != other.trsm_park_lockd_trsm_park_lockd:
            return False
        if self.twli_bri_raw_qf != other.twli_bri_raw_qf:
            return False
        if self.twli_bri_raw_twli_bri_raw != other.twli_bri_raw_twli_bri_raw:
            return False
        if any(self.rev != other.rev):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def app_to_hpa_ctrl_cmd(self):
        """Message field 'app_to_hpa_ctrl_cmd'."""
        return self._app_to_hpa_ctrl_cmd

    @app_to_hpa_ctrl_cmd.setter
    def app_to_hpa_ctrl_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'app_to_hpa_ctrl_cmd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'app_to_hpa_ctrl_cmd' field must be an unsigned integer in [0, 255]"
        self._app_to_hpa_ctrl_cmd = value

    @builtins.property
    def mob_dev_avp_req(self):
        """Message field 'mob_dev_avp_req'."""
        return self._mob_dev_avp_req

    @mob_dev_avp_req.setter
    def mob_dev_avp_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mob_dev_avp_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mob_dev_avp_req' field must be an unsigned integer in [0, 255]"
        self._mob_dev_avp_req = value

    @builtins.property
    def on_bd_chrgr_hndl_sts1(self):
        """Message field 'on_bd_chrgr_hndl_sts1'."""
        return self._on_bd_chrgr_hndl_sts1

    @on_bd_chrgr_hndl_sts1.setter
    def on_bd_chrgr_hndl_sts1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'on_bd_chrgr_hndl_sts1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'on_bd_chrgr_hndl_sts1' field must be an unsigned integer in [0, 255]"
        self._on_bd_chrgr_hndl_sts1 = value

    @builtins.property
    def dc_chrgn_hndl_sts(self):
        """Message field 'dc_chrgn_hndl_sts'."""
        return self._dc_chrgn_hndl_sts

    @dc_chrgn_hndl_sts.setter
    def dc_chrgn_hndl_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dc_chrgn_hndl_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dc_chrgn_hndl_sts' field must be an unsigned integer in [0, 255]"
        self._dc_chrgn_hndl_sts = value

    @builtins.property
    def occupy_mon_sts_drvr_sts(self):
        """Message field 'occupy_mon_sts_drvr_sts'."""
        return self._occupy_mon_sts_drvr_sts

    @occupy_mon_sts_drvr_sts.setter
    def occupy_mon_sts_drvr_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'occupy_mon_sts_drvr_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'occupy_mon_sts_drvr_sts' field must be an unsigned integer in [0, 255]"
        self._occupy_mon_sts_drvr_sts = value

    @builtins.property
    def alrm_sts_alrm_failr(self):
        """Message field 'alrm_sts_alrm_failr'."""
        return self._alrm_sts_alrm_failr

    @alrm_sts_alrm_failr.setter
    def alrm_sts_alrm_failr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alrm_sts_alrm_failr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alrm_sts_alrm_failr' field must be an unsigned integer in [0, 255]"
        self._alrm_sts_alrm_failr = value

    @builtins.property
    def alrm_sts_alrm_st(self):
        """Message field 'alrm_sts_alrm_st'."""
        return self._alrm_sts_alrm_st

    @alrm_sts_alrm_st.setter
    def alrm_sts_alrm_st(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alrm_sts_alrm_st' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alrm_sts_alrm_st' field must be an unsigned integer in [0, 255]"
        self._alrm_sts_alrm_st = value

    @builtins.property
    def alrm_sts_alrm_trg_src(self):
        """Message field 'alrm_sts_alrm_trg_src'."""
        return self._alrm_sts_alrm_trg_src

    @alrm_sts_alrm_trg_src.setter
    def alrm_sts_alrm_trg_src(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alrm_sts_alrm_trg_src' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alrm_sts_alrm_trg_src' field must be an unsigned integer in [0, 255]"
        self._alrm_sts_alrm_trg_src = value

    @builtins.property
    def alrm_sts_snsr_incln_failr(self):
        """Message field 'alrm_sts_snsr_incln_failr'."""
        return self._alrm_sts_snsr_incln_failr

    @alrm_sts_snsr_incln_failr.setter
    def alrm_sts_snsr_incln_failr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alrm_sts_snsr_incln_failr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alrm_sts_snsr_incln_failr' field must be an unsigned integer in [0, 255]"
        self._alrm_sts_snsr_incln_failr = value

    @builtins.property
    def alrm_sts_snsr_intr_scanr_failr(self):
        """Message field 'alrm_sts_snsr_intr_scanr_failr'."""
        return self._alrm_sts_snsr_intr_scanr_failr

    @alrm_sts_snsr_intr_scanr_failr.setter
    def alrm_sts_snsr_intr_scanr_failr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alrm_sts_snsr_intr_scanr_failr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alrm_sts_snsr_intr_scanr_failr' field must be an unsigned integer in [0, 255]"
        self._alrm_sts_snsr_intr_scanr_failr = value

    @builtins.property
    def telephone_sts(self):
        """Message field 'telephone_sts'."""
        return self._telephone_sts

    @telephone_sts.setter
    def telephone_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'telephone_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'telephone_sts' field must be an unsigned integer in [0, 255]"
        self._telephone_sts = value

    @builtins.property
    def tr_lock_sts(self):
        """Message field 'tr_lock_sts'."""
        return self._tr_lock_sts

    @tr_lock_sts.setter
    def tr_lock_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tr_lock_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tr_lock_sts' field must be an unsigned integer in [0, 255]"
        self._tr_lock_sts = value

    @builtins.property
    def trsm_park_lockd_trsm_park_lockd(self):
        """Message field 'trsm_park_lockd_trsm_park_lockd'."""
        return self._trsm_park_lockd_trsm_park_lockd

    @trsm_park_lockd_trsm_park_lockd.setter
    def trsm_park_lockd_trsm_park_lockd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trsm_park_lockd_trsm_park_lockd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'trsm_park_lockd_trsm_park_lockd' field must be an unsigned integer in [0, 255]"
        self._trsm_park_lockd_trsm_park_lockd = value

    @builtins.property
    def twli_bri_raw_qf(self):
        """Message field 'twli_bri_raw_qf'."""
        return self._twli_bri_raw_qf

    @twli_bri_raw_qf.setter
    def twli_bri_raw_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'twli_bri_raw_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'twli_bri_raw_qf' field must be an unsigned integer in [0, 255]"
        self._twli_bri_raw_qf = value

    @builtins.property
    def twli_bri_raw_twli_bri_raw(self):
        """Message field 'twli_bri_raw_twli_bri_raw'."""
        return self._twli_bri_raw_twli_bri_raw

    @twli_bri_raw_twli_bri_raw.setter
    def twli_bri_raw_twli_bri_raw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'twli_bri_raw_twli_bri_raw' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'twli_bri_raw_twli_bri_raw' field must be an unsigned integer in [0, 65535]"
        self._twli_bri_raw_twli_bri_raw = value

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
