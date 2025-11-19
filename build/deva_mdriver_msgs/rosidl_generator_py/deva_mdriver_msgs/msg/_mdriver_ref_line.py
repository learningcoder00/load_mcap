# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_mdriver_msgs:msg/MdriverRefLine.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MdriverRefLine(type):
    """Metaclass of message 'MdriverRefLine'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'WAIT': 1,
        'SPEED_UP': 2,
        'SLOW_DOWN': 3,
        'SLOW_DOWN_RAPIDLY': 4,
        'GO_STRAIGHT_SLOWLY': 5,
        'GO_STRAIGHT_AT_A_CONSTANT_SPEED': 6,
        'REVERSE': 7,
        'TURN_LEFT': 8,
        'TURN_RIGHT': 9,
        'STOP': 10,
        'CHANGE_LANE_TO_THE_LEFT': 11,
        'CHANGE_LANE_TO_THE_RIGHT': 12,
        'SHIFT_SLIGHTLY_TO_THE_LEFT': 13,
        'SHIFT_SLIGHTLY_TO_THE_RIGHT': 14,
        'AROUND_LEFT': 15,
        'AROUND_RIGHT': 16,
        'SPLIT_LEFT': 17,
        'SPLIT_RIGHT': 18,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_mdriver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_mdriver_msgs.msg.MdriverRefLine')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mdriver_ref_line
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mdriver_ref_line
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mdriver_ref_line
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mdriver_ref_line
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mdriver_ref_line

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'WAIT': cls.__constants['WAIT'],
            'SPEED_UP': cls.__constants['SPEED_UP'],
            'SLOW_DOWN': cls.__constants['SLOW_DOWN'],
            'SLOW_DOWN_RAPIDLY': cls.__constants['SLOW_DOWN_RAPIDLY'],
            'GO_STRAIGHT_SLOWLY': cls.__constants['GO_STRAIGHT_SLOWLY'],
            'GO_STRAIGHT_AT_A_CONSTANT_SPEED': cls.__constants['GO_STRAIGHT_AT_A_CONSTANT_SPEED'],
            'REVERSE': cls.__constants['REVERSE'],
            'TURN_LEFT': cls.__constants['TURN_LEFT'],
            'TURN_RIGHT': cls.__constants['TURN_RIGHT'],
            'STOP': cls.__constants['STOP'],
            'CHANGE_LANE_TO_THE_LEFT': cls.__constants['CHANGE_LANE_TO_THE_LEFT'],
            'CHANGE_LANE_TO_THE_RIGHT': cls.__constants['CHANGE_LANE_TO_THE_RIGHT'],
            'SHIFT_SLIGHTLY_TO_THE_LEFT': cls.__constants['SHIFT_SLIGHTLY_TO_THE_LEFT'],
            'SHIFT_SLIGHTLY_TO_THE_RIGHT': cls.__constants['SHIFT_SLIGHTLY_TO_THE_RIGHT'],
            'AROUND_LEFT': cls.__constants['AROUND_LEFT'],
            'AROUND_RIGHT': cls.__constants['AROUND_RIGHT'],
            'SPLIT_LEFT': cls.__constants['SPLIT_LEFT'],
            'SPLIT_RIGHT': cls.__constants['SPLIT_RIGHT'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_MdriverRefLine.__constants['UNKNOWN']

    @property
    def WAIT(self):
        """Message constant 'WAIT'."""
        return Metaclass_MdriverRefLine.__constants['WAIT']

    @property
    def SPEED_UP(self):
        """Message constant 'SPEED_UP'."""
        return Metaclass_MdriverRefLine.__constants['SPEED_UP']

    @property
    def SLOW_DOWN(self):
        """Message constant 'SLOW_DOWN'."""
        return Metaclass_MdriverRefLine.__constants['SLOW_DOWN']

    @property
    def SLOW_DOWN_RAPIDLY(self):
        """Message constant 'SLOW_DOWN_RAPIDLY'."""
        return Metaclass_MdriverRefLine.__constants['SLOW_DOWN_RAPIDLY']

    @property
    def GO_STRAIGHT_SLOWLY(self):
        """Message constant 'GO_STRAIGHT_SLOWLY'."""
        return Metaclass_MdriverRefLine.__constants['GO_STRAIGHT_SLOWLY']

    @property
    def GO_STRAIGHT_AT_A_CONSTANT_SPEED(self):
        """Message constant 'GO_STRAIGHT_AT_A_CONSTANT_SPEED'."""
        return Metaclass_MdriverRefLine.__constants['GO_STRAIGHT_AT_A_CONSTANT_SPEED']

    @property
    def REVERSE(self):
        """Message constant 'REVERSE'."""
        return Metaclass_MdriverRefLine.__constants['REVERSE']

    @property
    def TURN_LEFT(self):
        """Message constant 'TURN_LEFT'."""
        return Metaclass_MdriverRefLine.__constants['TURN_LEFT']

    @property
    def TURN_RIGHT(self):
        """Message constant 'TURN_RIGHT'."""
        return Metaclass_MdriverRefLine.__constants['TURN_RIGHT']

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_MdriverRefLine.__constants['STOP']

    @property
    def CHANGE_LANE_TO_THE_LEFT(self):
        """Message constant 'CHANGE_LANE_TO_THE_LEFT'."""
        return Metaclass_MdriverRefLine.__constants['CHANGE_LANE_TO_THE_LEFT']

    @property
    def CHANGE_LANE_TO_THE_RIGHT(self):
        """Message constant 'CHANGE_LANE_TO_THE_RIGHT'."""
        return Metaclass_MdriverRefLine.__constants['CHANGE_LANE_TO_THE_RIGHT']

    @property
    def SHIFT_SLIGHTLY_TO_THE_LEFT(self):
        """Message constant 'SHIFT_SLIGHTLY_TO_THE_LEFT'."""
        return Metaclass_MdriverRefLine.__constants['SHIFT_SLIGHTLY_TO_THE_LEFT']

    @property
    def SHIFT_SLIGHTLY_TO_THE_RIGHT(self):
        """Message constant 'SHIFT_SLIGHTLY_TO_THE_RIGHT'."""
        return Metaclass_MdriverRefLine.__constants['SHIFT_SLIGHTLY_TO_THE_RIGHT']

    @property
    def AROUND_LEFT(self):
        """Message constant 'AROUND_LEFT'."""
        return Metaclass_MdriverRefLine.__constants['AROUND_LEFT']

    @property
    def AROUND_RIGHT(self):
        """Message constant 'AROUND_RIGHT'."""
        return Metaclass_MdriverRefLine.__constants['AROUND_RIGHT']

    @property
    def SPLIT_LEFT(self):
        """Message constant 'SPLIT_LEFT'."""
        return Metaclass_MdriverRefLine.__constants['SPLIT_LEFT']

    @property
    def SPLIT_RIGHT(self):
        """Message constant 'SPLIT_RIGHT'."""
        return Metaclass_MdriverRefLine.__constants['SPLIT_RIGHT']


class MdriverRefLine(metaclass=Metaclass_MdriverRefLine):
    """
    Message class 'MdriverRefLine'.

    Constants:
      UNKNOWN
      WAIT
      SPEED_UP
      SLOW_DOWN
      SLOW_DOWN_RAPIDLY
      GO_STRAIGHT_SLOWLY
      GO_STRAIGHT_AT_A_CONSTANT_SPEED
      REVERSE
      TURN_LEFT
      TURN_RIGHT
      STOP
      CHANGE_LANE_TO_THE_LEFT
      CHANGE_LANE_TO_THE_RIGHT
      SHIFT_SLIGHTLY_TO_THE_LEFT
      SHIFT_SLIGHTLY_TO_THE_RIGHT
      AROUND_LEFT
      AROUND_RIGHT
      SPLIT_LEFT
      SPLIT_RIGHT
    """

    __slots__ = [
        '_points',
        '_meta_action',
        '_score',
    ]

    _fields_and_field_types = {
        'points': 'sequence<geometry_msgs/Point>',
        'meta_action': 'uint8',
        'score': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.points = kwargs.get('points', [])
        self.meta_action = kwargs.get('meta_action', int())
        self.score = kwargs.get('score', float())

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
        if self.points != other.points:
            return False
        if self.meta_action != other.meta_action:
            return False
        if self.score != other.score:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Point'"
        self._points = value

    @builtins.property
    def meta_action(self):
        """Message field 'meta_action'."""
        return self._meta_action

    @meta_action.setter
    def meta_action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_action' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meta_action' field must be an unsigned integer in [0, 255]"
        self._meta_action = value

    @builtins.property
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._score = value
