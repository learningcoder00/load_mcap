# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_mdriver_msgs:msg/MdriverMetaAction.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'logits'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MdriverMetaAction(type):
    """Metaclass of message 'MdriverMetaAction'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'KEEP_LANE': 1,
        'LANE_LEFT': 2,
        'LANE_RIGHT': 3,
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
                'deva_mdriver_msgs.msg.MdriverMetaAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mdriver_meta_action
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mdriver_meta_action
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mdriver_meta_action
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mdriver_meta_action
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mdriver_meta_action

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'KEEP_LANE': cls.__constants['KEEP_LANE'],
            'LANE_LEFT': cls.__constants['LANE_LEFT'],
            'LANE_RIGHT': cls.__constants['LANE_RIGHT'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_MdriverMetaAction.__constants['UNKNOWN']

    @property
    def KEEP_LANE(self):
        """Message constant 'KEEP_LANE'."""
        return Metaclass_MdriverMetaAction.__constants['KEEP_LANE']

    @property
    def LANE_LEFT(self):
        """Message constant 'LANE_LEFT'."""
        return Metaclass_MdriverMetaAction.__constants['LANE_LEFT']

    @property
    def LANE_RIGHT(self):
        """Message constant 'LANE_RIGHT'."""
        return Metaclass_MdriverMetaAction.__constants['LANE_RIGHT']


class MdriverMetaAction(metaclass=Metaclass_MdriverMetaAction):
    """
    Message class 'MdriverMetaAction'.

    Constants:
      UNKNOWN
      KEEP_LANE
      LANE_LEFT
      LANE_RIGHT
    """

    __slots__ = [
        '_best_mdriver_meta_action',
        '_score',
        '_logits',
    ]

    _fields_and_field_types = {
        'best_mdriver_meta_action': 'uint8',
        'score': 'double',
        'logits': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.best_mdriver_meta_action = kwargs.get('best_mdriver_meta_action', int())
        self.score = kwargs.get('score', float())
        self.logits = array.array('d', kwargs.get('logits', []))

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
        if self.best_mdriver_meta_action != other.best_mdriver_meta_action:
            return False
        if self.score != other.score:
            return False
        if self.logits != other.logits:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def best_mdriver_meta_action(self):
        """Message field 'best_mdriver_meta_action'."""
        return self._best_mdriver_meta_action

    @best_mdriver_meta_action.setter
    def best_mdriver_meta_action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'best_mdriver_meta_action' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'best_mdriver_meta_action' field must be an unsigned integer in [0, 255]"
        self._best_mdriver_meta_action = value

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

    @builtins.property
    def logits(self):
        """Message field 'logits'."""
        return self._logits

    @logits.setter
    def logits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'logits' array.array() must have the type code of 'd'"
            self._logits = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'logits' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._logits = array.array('d', value)
