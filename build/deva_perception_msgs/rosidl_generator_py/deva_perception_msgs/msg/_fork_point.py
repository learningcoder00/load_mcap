# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/ForkPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'lane_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ForkPoint(type):
    """Metaclass of message 'ForkPoint'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NORMAL': 0,
        'SPLIT': 1,
        'MERGE': 2,
        'SPLIT_DIVERSION': 3,
        'MERGE_DIVERSION': 4,
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
                'deva_perception_msgs.msg.ForkPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fork_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fork_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fork_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fork_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fork_point

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NORMAL': cls.__constants['NORMAL'],
            'SPLIT': cls.__constants['SPLIT'],
            'MERGE': cls.__constants['MERGE'],
            'SPLIT_DIVERSION': cls.__constants['SPLIT_DIVERSION'],
            'MERGE_DIVERSION': cls.__constants['MERGE_DIVERSION'],
        }

    @property
    def NORMAL(self):
        """Message constant 'NORMAL'."""
        return Metaclass_ForkPoint.__constants['NORMAL']

    @property
    def SPLIT(self):
        """Message constant 'SPLIT'."""
        return Metaclass_ForkPoint.__constants['SPLIT']

    @property
    def MERGE(self):
        """Message constant 'MERGE'."""
        return Metaclass_ForkPoint.__constants['MERGE']

    @property
    def SPLIT_DIVERSION(self):
        """Message constant 'SPLIT_DIVERSION'."""
        return Metaclass_ForkPoint.__constants['SPLIT_DIVERSION']

    @property
    def MERGE_DIVERSION(self):
        """Message constant 'MERGE_DIVERSION'."""
        return Metaclass_ForkPoint.__constants['MERGE_DIVERSION']


class ForkPoint(metaclass=Metaclass_ForkPoint):
    """
    Message class 'ForkPoint'.

    Constants:
      NORMAL
      SPLIT
      MERGE
      SPLIT_DIVERSION
      MERGE_DIVERSION
    """

    __slots__ = [
        '_fork_property_type',
        '_fork_id',
        '_lane_ids',
        '_fork_point',
    ]

    _fields_and_field_types = {
        'fork_property_type': 'uint8',
        'fork_id': 'int32',
        'lane_ids': 'sequence<int16>',
        'fork_point': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fork_property_type = kwargs.get('fork_property_type', int())
        self.fork_id = kwargs.get('fork_id', int())
        self.lane_ids = array.array('h', kwargs.get('lane_ids', []))
        from geometry_msgs.msg import Point
        self.fork_point = kwargs.get('fork_point', Point())

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
        if self.fork_property_type != other.fork_property_type:
            return False
        if self.fork_id != other.fork_id:
            return False
        if self.lane_ids != other.lane_ids:
            return False
        if self.fork_point != other.fork_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fork_property_type(self):
        """Message field 'fork_property_type'."""
        return self._fork_property_type

    @fork_property_type.setter
    def fork_property_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fork_property_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fork_property_type' field must be an unsigned integer in [0, 255]"
        self._fork_property_type = value

    @builtins.property
    def fork_id(self):
        """Message field 'fork_id'."""
        return self._fork_id

    @fork_id.setter
    def fork_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fork_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fork_id' field must be an integer in [-2147483648, 2147483647]"
        self._fork_id = value

    @builtins.property
    def lane_ids(self):
        """Message field 'lane_ids'."""
        return self._lane_ids

    @lane_ids.setter
    def lane_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'lane_ids' array.array() must have the type code of 'h'"
            self._lane_ids = value
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
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'lane_ids' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._lane_ids = array.array('h', value)

    @builtins.property
    def fork_point(self):
        """Message field 'fork_point'."""
        return self._fork_point

    @fork_point.setter
    def fork_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'fork_point' field must be a sub message of type 'Point'"
        self._fork_point = value
