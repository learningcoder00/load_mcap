# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/NaviSubCameraProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'speed'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NaviSubCameraProto(type):
    """Metaclass of message 'NaviSubCameraProto'."""

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
            module = import_type_support('deva_navi_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_navi_msgs.msg.NaviSubCameraProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__navi_sub_camera_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__navi_sub_camera_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__navi_sub_camera_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__navi_sub_camera_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__navi_sub_camera_proto

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NaviSubCameraProto(metaclass=Metaclass_NaviSubCameraProto):
    """Message class 'NaviSubCameraProto'."""

    __slots__ = [
        '_sub_type',
        '_make_sound',
        '_camera_id',
        '_busway_time_enable',
        '_penalty',
        '_priority',
        '_is_new',
        '_is_variable_speed',
        '_is_match',
        '_is_special',
        '_speed',
    ]

    _fields_and_field_types = {
        'sub_type': 'int32',
        'make_sound': 'int32',
        'camera_id': 'int64',
        'busway_time_enable': 'int32',
        'penalty': 'int32',
        'priority': 'int32',
        'is_new': 'boolean',
        'is_variable_speed': 'boolean',
        'is_match': 'boolean',
        'is_special': 'boolean',
        'speed': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sub_type = kwargs.get('sub_type', int())
        self.make_sound = kwargs.get('make_sound', int())
        self.camera_id = kwargs.get('camera_id', int())
        self.busway_time_enable = kwargs.get('busway_time_enable', int())
        self.penalty = kwargs.get('penalty', int())
        self.priority = kwargs.get('priority', int())
        self.is_new = kwargs.get('is_new', bool())
        self.is_variable_speed = kwargs.get('is_variable_speed', bool())
        self.is_match = kwargs.get('is_match', bool())
        self.is_special = kwargs.get('is_special', bool())
        self.speed = array.array('i', kwargs.get('speed', []))

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
        if self.sub_type != other.sub_type:
            return False
        if self.make_sound != other.make_sound:
            return False
        if self.camera_id != other.camera_id:
            return False
        if self.busway_time_enable != other.busway_time_enable:
            return False
        if self.penalty != other.penalty:
            return False
        if self.priority != other.priority:
            return False
        if self.is_new != other.is_new:
            return False
        if self.is_variable_speed != other.is_variable_speed:
            return False
        if self.is_match != other.is_match:
            return False
        if self.is_special != other.is_special:
            return False
        if self.speed != other.speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sub_type(self):
        """Message field 'sub_type'."""
        return self._sub_type

    @sub_type.setter
    def sub_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sub_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sub_type' field must be an integer in [-2147483648, 2147483647]"
        self._sub_type = value

    @builtins.property
    def make_sound(self):
        """Message field 'make_sound'."""
        return self._make_sound

    @make_sound.setter
    def make_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'make_sound' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'make_sound' field must be an integer in [-2147483648, 2147483647]"
        self._make_sound = value

    @builtins.property
    def camera_id(self):
        """Message field 'camera_id'."""
        return self._camera_id

    @camera_id.setter
    def camera_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'camera_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'camera_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._camera_id = value

    @builtins.property
    def busway_time_enable(self):
        """Message field 'busway_time_enable'."""
        return self._busway_time_enable

    @busway_time_enable.setter
    def busway_time_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'busway_time_enable' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'busway_time_enable' field must be an integer in [-2147483648, 2147483647]"
        self._busway_time_enable = value

    @builtins.property
    def penalty(self):
        """Message field 'penalty'."""
        return self._penalty

    @penalty.setter
    def penalty(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'penalty' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'penalty' field must be an integer in [-2147483648, 2147483647]"
        self._penalty = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'priority' field must be an integer in [-2147483648, 2147483647]"
        self._priority = value

    @builtins.property
    def is_new(self):
        """Message field 'is_new'."""
        return self._is_new

    @is_new.setter
    def is_new(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_new' field must be of type 'bool'"
        self._is_new = value

    @builtins.property
    def is_variable_speed(self):
        """Message field 'is_variable_speed'."""
        return self._is_variable_speed

    @is_variable_speed.setter
    def is_variable_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_variable_speed' field must be of type 'bool'"
        self._is_variable_speed = value

    @builtins.property
    def is_match(self):
        """Message field 'is_match'."""
        return self._is_match

    @is_match.setter
    def is_match(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_match' field must be of type 'bool'"
        self._is_match = value

    @builtins.property
    def is_special(self):
        """Message field 'is_special'."""
        return self._is_special

    @is_special.setter
    def is_special(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_special' field must be of type 'bool'"
        self._is_special = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'speed' array.array() must have the type code of 'i'"
            self._speed = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'speed' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._speed = array.array('i', value)
