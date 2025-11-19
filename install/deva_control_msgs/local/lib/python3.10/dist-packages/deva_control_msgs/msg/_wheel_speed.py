# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_control_msgs:msg/WheelSpeed.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'wheelspeed_rc'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WheelSpeed(type):
    """Metaclass of message 'WheelSpeed'."""

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
            module = import_type_support('deva_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_control_msgs.msg.WheelSpeed')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wheel_speed
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wheel_speed
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wheel_speed
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wheel_speed
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wheel_speed

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LOOP_COUNT_START__DEFAULT': 0,
        }

    @property
    def LOOP_COUNT_START__DEFAULT(cls):
        """Return default value for message field 'loop_count_start'."""
        return 0


class WheelSpeed(metaclass=Metaclass_WheelSpeed):
    """Message class 'WheelSpeed'."""

    __slots__ = [
        '_header',
        '_loop_count_start',
        '_loop_count_end',
        '_wheelspeed_rc_valid',
        '_wheelspeed_rc',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'loop_count_start': 'uint32',
        'loop_count_end': 'uint32',
        'wheelspeed_rc_valid': 'boolean[4]',
        'wheelspeed_rc': 'uint32[4]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 4),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.loop_count_start = kwargs.get(
            'loop_count_start', WheelSpeed.LOOP_COUNT_START__DEFAULT)
        self.loop_count_end = kwargs.get('loop_count_end', int())
        self.wheelspeed_rc_valid = kwargs.get(
            'wheelspeed_rc_valid',
            [bool() for x in range(4)]
        )
        if 'wheelspeed_rc' not in kwargs:
            self.wheelspeed_rc = numpy.zeros(4, dtype=numpy.uint32)
        else:
            self.wheelspeed_rc = kwargs.get('wheelspeed_rc')

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
        if self.loop_count_start != other.loop_count_start:
            return False
        if self.loop_count_end != other.loop_count_end:
            return False
        if self.wheelspeed_rc_valid != other.wheelspeed_rc_valid:
            return False
        if any(self.wheelspeed_rc != other.wheelspeed_rc):
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
    def loop_count_start(self):
        """Message field 'loop_count_start'."""
        return self._loop_count_start

    @loop_count_start.setter
    def loop_count_start(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loop_count_start' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'loop_count_start' field must be an unsigned integer in [0, 4294967295]"
        self._loop_count_start = value

    @builtins.property
    def loop_count_end(self):
        """Message field 'loop_count_end'."""
        return self._loop_count_end

    @loop_count_end.setter
    def loop_count_end(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loop_count_end' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'loop_count_end' field must be an unsigned integer in [0, 4294967295]"
        self._loop_count_end = value

    @builtins.property
    def wheelspeed_rc_valid(self):
        """Message field 'wheelspeed_rc_valid'."""
        return self._wheelspeed_rc_valid

    @wheelspeed_rc_valid.setter
    def wheelspeed_rc_valid(self, value):
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
                 len(value) == 4 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'wheelspeed_rc_valid' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._wheelspeed_rc_valid = value

    @builtins.property
    def wheelspeed_rc(self):
        """Message field 'wheelspeed_rc'."""
        return self._wheelspeed_rc

    @wheelspeed_rc.setter
    def wheelspeed_rc(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'wheelspeed_rc' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 4, \
                "The 'wheelspeed_rc' numpy.ndarray() must have a size of 4"
            self._wheelspeed_rc = value
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'wheelspeed_rc' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._wheelspeed_rc = numpy.array(value, dtype=numpy.uint32)
