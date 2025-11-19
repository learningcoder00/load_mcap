# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/MachCamSts.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MachCamSts(type):
    """Metaclass of message 'MachCamSts'."""

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
                'deva_function_msgs.msg.MachCamSts')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mach_cam_sts
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mach_cam_sts
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mach_cam_sts
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mach_cam_sts
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mach_cam_sts

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


class MachCamSts(metaclass=Metaclass_MachCamSts):
    """Message class 'MachCamSts'."""

    __slots__ = [
        '_header',
        '_trip_reset_sync_req_msg_asdm',
        '_cam_sts_cam_cam_heatr_actv',
        '_cam_sts_cam_frnt_blkd1',
        '_cam_sts_cam_frnt_blkd2',
        '_cam_sts_cam_frnt_blkd3',
        '_cam_sts_cam_frnt_blkd4',
        '_cam_sts_cam_frnt_blkd5',
        '_cam_sts_cam_frnt_blkd6',
        '_cam_sts_cam_frnt_blkd7',
        '_cam_sts_cam_frnt_blkd8',
        '_cam_sts_cam_frnt_cal_not_strtd',
        '_cam_sts_cam_miss_com',
        '_cam_status0',
        '_hmi_re_cam_sts0',
        '_frnt_side_cam_le_sts0',
        '_frnt_side_cam_ri_sts0',
        '_re_side_cam_le_sts0',
        '_re_side_cam_ri_sts0',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'trip_reset_sync_req_msg_asdm': 'uint16',
        'cam_sts_cam_cam_heatr_actv': 'uint8',
        'cam_sts_cam_frnt_blkd1': 'uint8',
        'cam_sts_cam_frnt_blkd2': 'uint8',
        'cam_sts_cam_frnt_blkd3': 'uint8',
        'cam_sts_cam_frnt_blkd4': 'uint8',
        'cam_sts_cam_frnt_blkd5': 'uint8',
        'cam_sts_cam_frnt_blkd6': 'uint8',
        'cam_sts_cam_frnt_blkd7': 'uint8',
        'cam_sts_cam_frnt_blkd8': 'uint8',
        'cam_sts_cam_frnt_cal_not_strtd': 'uint8',
        'cam_sts_cam_miss_com': 'uint8',
        'cam_status0': 'uint8',
        'hmi_re_cam_sts0': 'uint8',
        'frnt_side_cam_le_sts0': 'uint8',
        'frnt_side_cam_ri_sts0': 'uint8',
        're_side_cam_le_sts0': 'uint8',
        're_side_cam_ri_sts0': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.trip_reset_sync_req_msg_asdm = kwargs.get('trip_reset_sync_req_msg_asdm', int())
        self.cam_sts_cam_cam_heatr_actv = kwargs.get('cam_sts_cam_cam_heatr_actv', int())
        self.cam_sts_cam_frnt_blkd1 = kwargs.get('cam_sts_cam_frnt_blkd1', int())
        self.cam_sts_cam_frnt_blkd2 = kwargs.get('cam_sts_cam_frnt_blkd2', int())
        self.cam_sts_cam_frnt_blkd3 = kwargs.get('cam_sts_cam_frnt_blkd3', int())
        self.cam_sts_cam_frnt_blkd4 = kwargs.get('cam_sts_cam_frnt_blkd4', int())
        self.cam_sts_cam_frnt_blkd5 = kwargs.get('cam_sts_cam_frnt_blkd5', int())
        self.cam_sts_cam_frnt_blkd6 = kwargs.get('cam_sts_cam_frnt_blkd6', int())
        self.cam_sts_cam_frnt_blkd7 = kwargs.get('cam_sts_cam_frnt_blkd7', int())
        self.cam_sts_cam_frnt_blkd8 = kwargs.get('cam_sts_cam_frnt_blkd8', int())
        self.cam_sts_cam_frnt_cal_not_strtd = kwargs.get('cam_sts_cam_frnt_cal_not_strtd', int())
        self.cam_sts_cam_miss_com = kwargs.get('cam_sts_cam_miss_com', int())
        self.cam_status0 = kwargs.get('cam_status0', int())
        self.hmi_re_cam_sts0 = kwargs.get('hmi_re_cam_sts0', int())
        self.frnt_side_cam_le_sts0 = kwargs.get('frnt_side_cam_le_sts0', int())
        self.frnt_side_cam_ri_sts0 = kwargs.get('frnt_side_cam_ri_sts0', int())
        self.re_side_cam_le_sts0 = kwargs.get('re_side_cam_le_sts0', int())
        self.re_side_cam_ri_sts0 = kwargs.get('re_side_cam_ri_sts0', int())

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
        if self.trip_reset_sync_req_msg_asdm != other.trip_reset_sync_req_msg_asdm:
            return False
        if self.cam_sts_cam_cam_heatr_actv != other.cam_sts_cam_cam_heatr_actv:
            return False
        if self.cam_sts_cam_frnt_blkd1 != other.cam_sts_cam_frnt_blkd1:
            return False
        if self.cam_sts_cam_frnt_blkd2 != other.cam_sts_cam_frnt_blkd2:
            return False
        if self.cam_sts_cam_frnt_blkd3 != other.cam_sts_cam_frnt_blkd3:
            return False
        if self.cam_sts_cam_frnt_blkd4 != other.cam_sts_cam_frnt_blkd4:
            return False
        if self.cam_sts_cam_frnt_blkd5 != other.cam_sts_cam_frnt_blkd5:
            return False
        if self.cam_sts_cam_frnt_blkd6 != other.cam_sts_cam_frnt_blkd6:
            return False
        if self.cam_sts_cam_frnt_blkd7 != other.cam_sts_cam_frnt_blkd7:
            return False
        if self.cam_sts_cam_frnt_blkd8 != other.cam_sts_cam_frnt_blkd8:
            return False
        if self.cam_sts_cam_frnt_cal_not_strtd != other.cam_sts_cam_frnt_cal_not_strtd:
            return False
        if self.cam_sts_cam_miss_com != other.cam_sts_cam_miss_com:
            return False
        if self.cam_status0 != other.cam_status0:
            return False
        if self.hmi_re_cam_sts0 != other.hmi_re_cam_sts0:
            return False
        if self.frnt_side_cam_le_sts0 != other.frnt_side_cam_le_sts0:
            return False
        if self.frnt_side_cam_ri_sts0 != other.frnt_side_cam_ri_sts0:
            return False
        if self.re_side_cam_le_sts0 != other.re_side_cam_le_sts0:
            return False
        if self.re_side_cam_ri_sts0 != other.re_side_cam_ri_sts0:
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
    def trip_reset_sync_req_msg_asdm(self):
        """Message field 'trip_reset_sync_req_msg_asdm'."""
        return self._trip_reset_sync_req_msg_asdm

    @trip_reset_sync_req_msg_asdm.setter
    def trip_reset_sync_req_msg_asdm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trip_reset_sync_req_msg_asdm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'trip_reset_sync_req_msg_asdm' field must be an unsigned integer in [0, 65535]"
        self._trip_reset_sync_req_msg_asdm = value

    @builtins.property
    def cam_sts_cam_cam_heatr_actv(self):
        """Message field 'cam_sts_cam_cam_heatr_actv'."""
        return self._cam_sts_cam_cam_heatr_actv

    @cam_sts_cam_cam_heatr_actv.setter
    def cam_sts_cam_cam_heatr_actv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_sts_cam_cam_heatr_actv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_sts_cam_cam_heatr_actv' field must be an unsigned integer in [0, 255]"
        self._cam_sts_cam_cam_heatr_actv = value

    @builtins.property
    def cam_sts_cam_frnt_blkd1(self):
        """Message field 'cam_sts_cam_frnt_blkd1'."""
        return self._cam_sts_cam_frnt_blkd1

    @cam_sts_cam_frnt_blkd1.setter
    def cam_sts_cam_frnt_blkd1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_sts_cam_frnt_blkd1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_sts_cam_frnt_blkd1' field must be an unsigned integer in [0, 255]"
        self._cam_sts_cam_frnt_blkd1 = value

    @builtins.property
    def cam_sts_cam_frnt_blkd2(self):
        """Message field 'cam_sts_cam_frnt_blkd2'."""
        return self._cam_sts_cam_frnt_blkd2

    @cam_sts_cam_frnt_blkd2.setter
    def cam_sts_cam_frnt_blkd2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_sts_cam_frnt_blkd2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_sts_cam_frnt_blkd2' field must be an unsigned integer in [0, 255]"
        self._cam_sts_cam_frnt_blkd2 = value

    @builtins.property
    def cam_sts_cam_frnt_blkd3(self):
        """Message field 'cam_sts_cam_frnt_blkd3'."""
        return self._cam_sts_cam_frnt_blkd3

    @cam_sts_cam_frnt_blkd3.setter
    def cam_sts_cam_frnt_blkd3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_sts_cam_frnt_blkd3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_sts_cam_frnt_blkd3' field must be an unsigned integer in [0, 255]"
        self._cam_sts_cam_frnt_blkd3 = value

    @builtins.property
    def cam_sts_cam_frnt_blkd4(self):
        """Message field 'cam_sts_cam_frnt_blkd4'."""
        return self._cam_sts_cam_frnt_blkd4

    @cam_sts_cam_frnt_blkd4.setter
    def cam_sts_cam_frnt_blkd4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_sts_cam_frnt_blkd4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_sts_cam_frnt_blkd4' field must be an unsigned integer in [0, 255]"
        self._cam_sts_cam_frnt_blkd4 = value

    @builtins.property
    def cam_sts_cam_frnt_blkd5(self):
        """Message field 'cam_sts_cam_frnt_blkd5'."""
        return self._cam_sts_cam_frnt_blkd5

    @cam_sts_cam_frnt_blkd5.setter
    def cam_sts_cam_frnt_blkd5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_sts_cam_frnt_blkd5' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_sts_cam_frnt_blkd5' field must be an unsigned integer in [0, 255]"
        self._cam_sts_cam_frnt_blkd5 = value

    @builtins.property
    def cam_sts_cam_frnt_blkd6(self):
        """Message field 'cam_sts_cam_frnt_blkd6'."""
        return self._cam_sts_cam_frnt_blkd6

    @cam_sts_cam_frnt_blkd6.setter
    def cam_sts_cam_frnt_blkd6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_sts_cam_frnt_blkd6' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_sts_cam_frnt_blkd6' field must be an unsigned integer in [0, 255]"
        self._cam_sts_cam_frnt_blkd6 = value

    @builtins.property
    def cam_sts_cam_frnt_blkd7(self):
        """Message field 'cam_sts_cam_frnt_blkd7'."""
        return self._cam_sts_cam_frnt_blkd7

    @cam_sts_cam_frnt_blkd7.setter
    def cam_sts_cam_frnt_blkd7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_sts_cam_frnt_blkd7' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_sts_cam_frnt_blkd7' field must be an unsigned integer in [0, 255]"
        self._cam_sts_cam_frnt_blkd7 = value

    @builtins.property
    def cam_sts_cam_frnt_blkd8(self):
        """Message field 'cam_sts_cam_frnt_blkd8'."""
        return self._cam_sts_cam_frnt_blkd8

    @cam_sts_cam_frnt_blkd8.setter
    def cam_sts_cam_frnt_blkd8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_sts_cam_frnt_blkd8' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_sts_cam_frnt_blkd8' field must be an unsigned integer in [0, 255]"
        self._cam_sts_cam_frnt_blkd8 = value

    @builtins.property
    def cam_sts_cam_frnt_cal_not_strtd(self):
        """Message field 'cam_sts_cam_frnt_cal_not_strtd'."""
        return self._cam_sts_cam_frnt_cal_not_strtd

    @cam_sts_cam_frnt_cal_not_strtd.setter
    def cam_sts_cam_frnt_cal_not_strtd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_sts_cam_frnt_cal_not_strtd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_sts_cam_frnt_cal_not_strtd' field must be an unsigned integer in [0, 255]"
        self._cam_sts_cam_frnt_cal_not_strtd = value

    @builtins.property
    def cam_sts_cam_miss_com(self):
        """Message field 'cam_sts_cam_miss_com'."""
        return self._cam_sts_cam_miss_com

    @cam_sts_cam_miss_com.setter
    def cam_sts_cam_miss_com(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_sts_cam_miss_com' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_sts_cam_miss_com' field must be an unsigned integer in [0, 255]"
        self._cam_sts_cam_miss_com = value

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
