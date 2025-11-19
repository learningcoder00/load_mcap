# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/E2eAdb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_E2eAdb(type):
    """Metaclass of message 'E2eAdb'."""

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
            module = import_type_support('deva_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_perception_msgs.msg.E2eAdb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__e2e_adb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__e2e_adb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__e2e_adb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__e2e_adb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__e2e_adb

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class E2eAdb(metaclass=Metaclass_E2eAdb):
    """Message class 'E2eAdb'."""

    __slots__ = [
        '_header',
        '_eh_obj_for_adb_abs_dist',
        '_veh_obj_for_adb_classn',
        '_veh_obj_for_adb_hozl_ag_le',
        '_veh_obj_for_adb_hozl_ag_ri',
        '_veh_obj_for_adb_obj_dir',
        '_veh_obj_for_adb_obj_hozl_ag_spd_le',
        '_veh_obj_for_adb_obj_hozl_ag_spd_ri',
        '_veh_obj_for_adb_trk_info',
        '_veh_obj_for_adb_vert_ag',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'eh_obj_for_adb_abs_dist': 'double',
        'veh_obj_for_adb_classn': 'uint8',
        'veh_obj_for_adb_hozl_ag_le': 'double',
        'veh_obj_for_adb_hozl_ag_ri': 'double',
        'veh_obj_for_adb_obj_dir': 'uint8',
        'veh_obj_for_adb_obj_hozl_ag_spd_le': 'double',
        'veh_obj_for_adb_obj_hozl_ag_spd_ri': 'double',
        'veh_obj_for_adb_trk_info': 'uint8',
        'veh_obj_for_adb_vert_ag': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.eh_obj_for_adb_abs_dist = kwargs.get('eh_obj_for_adb_abs_dist', float())
        self.veh_obj_for_adb_classn = kwargs.get('veh_obj_for_adb_classn', int())
        self.veh_obj_for_adb_hozl_ag_le = kwargs.get('veh_obj_for_adb_hozl_ag_le', float())
        self.veh_obj_for_adb_hozl_ag_ri = kwargs.get('veh_obj_for_adb_hozl_ag_ri', float())
        self.veh_obj_for_adb_obj_dir = kwargs.get('veh_obj_for_adb_obj_dir', int())
        self.veh_obj_for_adb_obj_hozl_ag_spd_le = kwargs.get('veh_obj_for_adb_obj_hozl_ag_spd_le', float())
        self.veh_obj_for_adb_obj_hozl_ag_spd_ri = kwargs.get('veh_obj_for_adb_obj_hozl_ag_spd_ri', float())
        self.veh_obj_for_adb_trk_info = kwargs.get('veh_obj_for_adb_trk_info', int())
        self.veh_obj_for_adb_vert_ag = kwargs.get('veh_obj_for_adb_vert_ag', float())

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
        if self.eh_obj_for_adb_abs_dist != other.eh_obj_for_adb_abs_dist:
            return False
        if self.veh_obj_for_adb_classn != other.veh_obj_for_adb_classn:
            return False
        if self.veh_obj_for_adb_hozl_ag_le != other.veh_obj_for_adb_hozl_ag_le:
            return False
        if self.veh_obj_for_adb_hozl_ag_ri != other.veh_obj_for_adb_hozl_ag_ri:
            return False
        if self.veh_obj_for_adb_obj_dir != other.veh_obj_for_adb_obj_dir:
            return False
        if self.veh_obj_for_adb_obj_hozl_ag_spd_le != other.veh_obj_for_adb_obj_hozl_ag_spd_le:
            return False
        if self.veh_obj_for_adb_obj_hozl_ag_spd_ri != other.veh_obj_for_adb_obj_hozl_ag_spd_ri:
            return False
        if self.veh_obj_for_adb_trk_info != other.veh_obj_for_adb_trk_info:
            return False
        if self.veh_obj_for_adb_vert_ag != other.veh_obj_for_adb_vert_ag:
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
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def eh_obj_for_adb_abs_dist(self):
        """Message field 'eh_obj_for_adb_abs_dist'."""
        return self._eh_obj_for_adb_abs_dist

    @eh_obj_for_adb_abs_dist.setter
    def eh_obj_for_adb_abs_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eh_obj_for_adb_abs_dist' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'eh_obj_for_adb_abs_dist' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._eh_obj_for_adb_abs_dist = value

    @builtins.property
    def veh_obj_for_adb_classn(self):
        """Message field 'veh_obj_for_adb_classn'."""
        return self._veh_obj_for_adb_classn

    @veh_obj_for_adb_classn.setter
    def veh_obj_for_adb_classn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_obj_for_adb_classn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_obj_for_adb_classn' field must be an unsigned integer in [0, 255]"
        self._veh_obj_for_adb_classn = value

    @builtins.property
    def veh_obj_for_adb_hozl_ag_le(self):
        """Message field 'veh_obj_for_adb_hozl_ag_le'."""
        return self._veh_obj_for_adb_hozl_ag_le

    @veh_obj_for_adb_hozl_ag_le.setter
    def veh_obj_for_adb_hozl_ag_le(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_obj_for_adb_hozl_ag_le' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'veh_obj_for_adb_hozl_ag_le' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._veh_obj_for_adb_hozl_ag_le = value

    @builtins.property
    def veh_obj_for_adb_hozl_ag_ri(self):
        """Message field 'veh_obj_for_adb_hozl_ag_ri'."""
        return self._veh_obj_for_adb_hozl_ag_ri

    @veh_obj_for_adb_hozl_ag_ri.setter
    def veh_obj_for_adb_hozl_ag_ri(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_obj_for_adb_hozl_ag_ri' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'veh_obj_for_adb_hozl_ag_ri' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._veh_obj_for_adb_hozl_ag_ri = value

    @builtins.property
    def veh_obj_for_adb_obj_dir(self):
        """Message field 'veh_obj_for_adb_obj_dir'."""
        return self._veh_obj_for_adb_obj_dir

    @veh_obj_for_adb_obj_dir.setter
    def veh_obj_for_adb_obj_dir(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_obj_for_adb_obj_dir' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_obj_for_adb_obj_dir' field must be an unsigned integer in [0, 255]"
        self._veh_obj_for_adb_obj_dir = value

    @builtins.property
    def veh_obj_for_adb_obj_hozl_ag_spd_le(self):
        """Message field 'veh_obj_for_adb_obj_hozl_ag_spd_le'."""
        return self._veh_obj_for_adb_obj_hozl_ag_spd_le

    @veh_obj_for_adb_obj_hozl_ag_spd_le.setter
    def veh_obj_for_adb_obj_hozl_ag_spd_le(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_obj_for_adb_obj_hozl_ag_spd_le' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'veh_obj_for_adb_obj_hozl_ag_spd_le' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._veh_obj_for_adb_obj_hozl_ag_spd_le = value

    @builtins.property
    def veh_obj_for_adb_obj_hozl_ag_spd_ri(self):
        """Message field 'veh_obj_for_adb_obj_hozl_ag_spd_ri'."""
        return self._veh_obj_for_adb_obj_hozl_ag_spd_ri

    @veh_obj_for_adb_obj_hozl_ag_spd_ri.setter
    def veh_obj_for_adb_obj_hozl_ag_spd_ri(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_obj_for_adb_obj_hozl_ag_spd_ri' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'veh_obj_for_adb_obj_hozl_ag_spd_ri' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._veh_obj_for_adb_obj_hozl_ag_spd_ri = value

    @builtins.property
    def veh_obj_for_adb_trk_info(self):
        """Message field 'veh_obj_for_adb_trk_info'."""
        return self._veh_obj_for_adb_trk_info

    @veh_obj_for_adb_trk_info.setter
    def veh_obj_for_adb_trk_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_obj_for_adb_trk_info' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_obj_for_adb_trk_info' field must be an unsigned integer in [0, 255]"
        self._veh_obj_for_adb_trk_info = value

    @builtins.property
    def veh_obj_for_adb_vert_ag(self):
        """Message field 'veh_obj_for_adb_vert_ag'."""
        return self._veh_obj_for_adb_vert_ag

    @veh_obj_for_adb_vert_ag.setter
    def veh_obj_for_adb_vert_ag(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_obj_for_adb_vert_ag' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'veh_obj_for_adb_vert_ag' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._veh_obj_for_adb_vert_ag = value
