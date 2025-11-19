# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/E2eAdbTrafficSign.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_E2eAdbTrafficSign(type):
    """Metaclass of message 'E2eAdbTrafficSign'."""

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
                'deva_perception_msgs.msg.E2eAdbTrafficSign')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__e2e_adb_traffic_sign
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__e2e_adb_traffic_sign
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__e2e_adb_traffic_sign
            cls._TYPE_SUPPORT = module.type_support_msg__msg__e2e_adb_traffic_sign
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__e2e_adb_traffic_sign

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


class E2eAdbTrafficSign(metaclass=Metaclass_E2eAdbTrafficSign):
    """Message class 'E2eAdbTrafficSign'."""

    __slots__ = [
        '_header',
        '_traffic_sign_for_adb_adb_trk_info',
        '_traffic_sign_for_adb_adb_abs_dist',
        '_traffic_sign_for_adb_adb_vert_ag_bot',
        '_traffic_sign_for_adb_adb_vert_ag_top',
        '_traffic_sign_for_adb_adb_hozl_ag_le',
        '_traffic_sign_for_adb_adb_hozl_ag_ri',
        '_traffic_sign_for_adb_adb_detd_qly',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'traffic_sign_for_adb_adb_trk_info': 'uint8',
        'traffic_sign_for_adb_adb_abs_dist': 'float',
        'traffic_sign_for_adb_adb_vert_ag_bot': 'float',
        'traffic_sign_for_adb_adb_vert_ag_top': 'float',
        'traffic_sign_for_adb_adb_hozl_ag_le': 'float',
        'traffic_sign_for_adb_adb_hozl_ag_ri': 'float',
        'traffic_sign_for_adb_adb_detd_qly': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.traffic_sign_for_adb_adb_trk_info = kwargs.get('traffic_sign_for_adb_adb_trk_info', int())
        self.traffic_sign_for_adb_adb_abs_dist = kwargs.get('traffic_sign_for_adb_adb_abs_dist', float())
        self.traffic_sign_for_adb_adb_vert_ag_bot = kwargs.get('traffic_sign_for_adb_adb_vert_ag_bot', float())
        self.traffic_sign_for_adb_adb_vert_ag_top = kwargs.get('traffic_sign_for_adb_adb_vert_ag_top', float())
        self.traffic_sign_for_adb_adb_hozl_ag_le = kwargs.get('traffic_sign_for_adb_adb_hozl_ag_le', float())
        self.traffic_sign_for_adb_adb_hozl_ag_ri = kwargs.get('traffic_sign_for_adb_adb_hozl_ag_ri', float())
        self.traffic_sign_for_adb_adb_detd_qly = kwargs.get('traffic_sign_for_adb_adb_detd_qly', float())

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
        if self.traffic_sign_for_adb_adb_trk_info != other.traffic_sign_for_adb_adb_trk_info:
            return False
        if self.traffic_sign_for_adb_adb_abs_dist != other.traffic_sign_for_adb_adb_abs_dist:
            return False
        if self.traffic_sign_for_adb_adb_vert_ag_bot != other.traffic_sign_for_adb_adb_vert_ag_bot:
            return False
        if self.traffic_sign_for_adb_adb_vert_ag_top != other.traffic_sign_for_adb_adb_vert_ag_top:
            return False
        if self.traffic_sign_for_adb_adb_hozl_ag_le != other.traffic_sign_for_adb_adb_hozl_ag_le:
            return False
        if self.traffic_sign_for_adb_adb_hozl_ag_ri != other.traffic_sign_for_adb_adb_hozl_ag_ri:
            return False
        if self.traffic_sign_for_adb_adb_detd_qly != other.traffic_sign_for_adb_adb_detd_qly:
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
    def traffic_sign_for_adb_adb_trk_info(self):
        """Message field 'traffic_sign_for_adb_adb_trk_info'."""
        return self._traffic_sign_for_adb_adb_trk_info

    @traffic_sign_for_adb_adb_trk_info.setter
    def traffic_sign_for_adb_adb_trk_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'traffic_sign_for_adb_adb_trk_info' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'traffic_sign_for_adb_adb_trk_info' field must be an unsigned integer in [0, 255]"
        self._traffic_sign_for_adb_adb_trk_info = value

    @builtins.property
    def traffic_sign_for_adb_adb_abs_dist(self):
        """Message field 'traffic_sign_for_adb_adb_abs_dist'."""
        return self._traffic_sign_for_adb_adb_abs_dist

    @traffic_sign_for_adb_adb_abs_dist.setter
    def traffic_sign_for_adb_adb_abs_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'traffic_sign_for_adb_adb_abs_dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'traffic_sign_for_adb_adb_abs_dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._traffic_sign_for_adb_adb_abs_dist = value

    @builtins.property
    def traffic_sign_for_adb_adb_vert_ag_bot(self):
        """Message field 'traffic_sign_for_adb_adb_vert_ag_bot'."""
        return self._traffic_sign_for_adb_adb_vert_ag_bot

    @traffic_sign_for_adb_adb_vert_ag_bot.setter
    def traffic_sign_for_adb_adb_vert_ag_bot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'traffic_sign_for_adb_adb_vert_ag_bot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'traffic_sign_for_adb_adb_vert_ag_bot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._traffic_sign_for_adb_adb_vert_ag_bot = value

    @builtins.property
    def traffic_sign_for_adb_adb_vert_ag_top(self):
        """Message field 'traffic_sign_for_adb_adb_vert_ag_top'."""
        return self._traffic_sign_for_adb_adb_vert_ag_top

    @traffic_sign_for_adb_adb_vert_ag_top.setter
    def traffic_sign_for_adb_adb_vert_ag_top(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'traffic_sign_for_adb_adb_vert_ag_top' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'traffic_sign_for_adb_adb_vert_ag_top' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._traffic_sign_for_adb_adb_vert_ag_top = value

    @builtins.property
    def traffic_sign_for_adb_adb_hozl_ag_le(self):
        """Message field 'traffic_sign_for_adb_adb_hozl_ag_le'."""
        return self._traffic_sign_for_adb_adb_hozl_ag_le

    @traffic_sign_for_adb_adb_hozl_ag_le.setter
    def traffic_sign_for_adb_adb_hozl_ag_le(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'traffic_sign_for_adb_adb_hozl_ag_le' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'traffic_sign_for_adb_adb_hozl_ag_le' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._traffic_sign_for_adb_adb_hozl_ag_le = value

    @builtins.property
    def traffic_sign_for_adb_adb_hozl_ag_ri(self):
        """Message field 'traffic_sign_for_adb_adb_hozl_ag_ri'."""
        return self._traffic_sign_for_adb_adb_hozl_ag_ri

    @traffic_sign_for_adb_adb_hozl_ag_ri.setter
    def traffic_sign_for_adb_adb_hozl_ag_ri(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'traffic_sign_for_adb_adb_hozl_ag_ri' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'traffic_sign_for_adb_adb_hozl_ag_ri' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._traffic_sign_for_adb_adb_hozl_ag_ri = value

    @builtins.property
    def traffic_sign_for_adb_adb_detd_qly(self):
        """Message field 'traffic_sign_for_adb_adb_detd_qly'."""
        return self._traffic_sign_for_adb_adb_detd_qly

    @traffic_sign_for_adb_adb_detd_qly.setter
    def traffic_sign_for_adb_adb_detd_qly(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'traffic_sign_for_adb_adb_detd_qly' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'traffic_sign_for_adb_adb_detd_qly' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._traffic_sign_for_adb_adb_detd_qly = value
