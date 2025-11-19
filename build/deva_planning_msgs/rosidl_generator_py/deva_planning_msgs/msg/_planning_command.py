# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs:msg/PlanningCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'lane_width'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningCommand(type):
    """Metaclass of message 'PlanningCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACTION_NONE': 100,
        'FOLLOW': 0,
        'CHANGE_LEFT': 1,
        'CHANGE_RIGHT': 2,
        'PULL_OVER': 3,
        'STOP': 4,
        'RESUME_CRUISE': 5,
        'FOLLOW_CIPV': 6,
        'MAP_MODE': 7,
        'LIGHT_RED': 8,
        'LIGHT_GREEN': 9,
        'SEARCHING_SLOT': 10,
        'PARK_IN': 11,
        'PARK_OUT': 12,
        'LIGHT_YELLOW': 13,
        'LIGHT_RESET': 14,
        'AUTODRIVE': 15,
        'MANUALDRIVE': 16,
        'PARKOUT_DIRECTION_NONE': 0,
        'LEFT': 1,
        'LEFTFRONT': 2,
        'FRONT': 3,
        'RIGHTFRONT': 4,
        'RIGHT': 5,
        'RIGHT_LEFT': 6,
        'LEFT_RIGHT': 7,
        'MANUAL': 0,
        'ACC': 1,
        'ICC': 2,
        'NOA': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_planning_msgs.msg.PlanningCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_command

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACTION_NONE': cls.__constants['ACTION_NONE'],
            'FOLLOW': cls.__constants['FOLLOW'],
            'CHANGE_LEFT': cls.__constants['CHANGE_LEFT'],
            'CHANGE_RIGHT': cls.__constants['CHANGE_RIGHT'],
            'PULL_OVER': cls.__constants['PULL_OVER'],
            'STOP': cls.__constants['STOP'],
            'RESUME_CRUISE': cls.__constants['RESUME_CRUISE'],
            'FOLLOW_CIPV': cls.__constants['FOLLOW_CIPV'],
            'MAP_MODE': cls.__constants['MAP_MODE'],
            'LIGHT_RED': cls.__constants['LIGHT_RED'],
            'LIGHT_GREEN': cls.__constants['LIGHT_GREEN'],
            'SEARCHING_SLOT': cls.__constants['SEARCHING_SLOT'],
            'PARK_IN': cls.__constants['PARK_IN'],
            'PARK_OUT': cls.__constants['PARK_OUT'],
            'LIGHT_YELLOW': cls.__constants['LIGHT_YELLOW'],
            'LIGHT_RESET': cls.__constants['LIGHT_RESET'],
            'AUTODRIVE': cls.__constants['AUTODRIVE'],
            'MANUALDRIVE': cls.__constants['MANUALDRIVE'],
            'PARKOUT_DIRECTION_NONE': cls.__constants['PARKOUT_DIRECTION_NONE'],
            'LEFT': cls.__constants['LEFT'],
            'LEFTFRONT': cls.__constants['LEFTFRONT'],
            'FRONT': cls.__constants['FRONT'],
            'RIGHTFRONT': cls.__constants['RIGHTFRONT'],
            'RIGHT': cls.__constants['RIGHT'],
            'RIGHT_LEFT': cls.__constants['RIGHT_LEFT'],
            'LEFT_RIGHT': cls.__constants['LEFT_RIGHT'],
            'MANUAL': cls.__constants['MANUAL'],
            'ACC': cls.__constants['ACC'],
            'ICC': cls.__constants['ICC'],
            'NOA': cls.__constants['NOA'],
        }

    @property
    def ACTION_NONE(self):
        """Message constant 'ACTION_NONE'."""
        return Metaclass_PlanningCommand.__constants['ACTION_NONE']

    @property
    def FOLLOW(self):
        """Message constant 'FOLLOW'."""
        return Metaclass_PlanningCommand.__constants['FOLLOW']

    @property
    def CHANGE_LEFT(self):
        """Message constant 'CHANGE_LEFT'."""
        return Metaclass_PlanningCommand.__constants['CHANGE_LEFT']

    @property
    def CHANGE_RIGHT(self):
        """Message constant 'CHANGE_RIGHT'."""
        return Metaclass_PlanningCommand.__constants['CHANGE_RIGHT']

    @property
    def PULL_OVER(self):
        """Message constant 'PULL_OVER'."""
        return Metaclass_PlanningCommand.__constants['PULL_OVER']

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_PlanningCommand.__constants['STOP']

    @property
    def RESUME_CRUISE(self):
        """Message constant 'RESUME_CRUISE'."""
        return Metaclass_PlanningCommand.__constants['RESUME_CRUISE']

    @property
    def FOLLOW_CIPV(self):
        """Message constant 'FOLLOW_CIPV'."""
        return Metaclass_PlanningCommand.__constants['FOLLOW_CIPV']

    @property
    def MAP_MODE(self):
        """Message constant 'MAP_MODE'."""
        return Metaclass_PlanningCommand.__constants['MAP_MODE']

    @property
    def LIGHT_RED(self):
        """Message constant 'LIGHT_RED'."""
        return Metaclass_PlanningCommand.__constants['LIGHT_RED']

    @property
    def LIGHT_GREEN(self):
        """Message constant 'LIGHT_GREEN'."""
        return Metaclass_PlanningCommand.__constants['LIGHT_GREEN']

    @property
    def SEARCHING_SLOT(self):
        """Message constant 'SEARCHING_SLOT'."""
        return Metaclass_PlanningCommand.__constants['SEARCHING_SLOT']

    @property
    def PARK_IN(self):
        """Message constant 'PARK_IN'."""
        return Metaclass_PlanningCommand.__constants['PARK_IN']

    @property
    def PARK_OUT(self):
        """Message constant 'PARK_OUT'."""
        return Metaclass_PlanningCommand.__constants['PARK_OUT']

    @property
    def LIGHT_YELLOW(self):
        """Message constant 'LIGHT_YELLOW'."""
        return Metaclass_PlanningCommand.__constants['LIGHT_YELLOW']

    @property
    def LIGHT_RESET(self):
        """Message constant 'LIGHT_RESET'."""
        return Metaclass_PlanningCommand.__constants['LIGHT_RESET']

    @property
    def AUTODRIVE(self):
        """Message constant 'AUTODRIVE'."""
        return Metaclass_PlanningCommand.__constants['AUTODRIVE']

    @property
    def MANUALDRIVE(self):
        """Message constant 'MANUALDRIVE'."""
        return Metaclass_PlanningCommand.__constants['MANUALDRIVE']

    @property
    def PARKOUT_DIRECTION_NONE(self):
        """Message constant 'PARKOUT_DIRECTION_NONE'."""
        return Metaclass_PlanningCommand.__constants['PARKOUT_DIRECTION_NONE']

    @property
    def LEFT(self):
        """Message constant 'LEFT'."""
        return Metaclass_PlanningCommand.__constants['LEFT']

    @property
    def LEFTFRONT(self):
        """Message constant 'LEFTFRONT'."""
        return Metaclass_PlanningCommand.__constants['LEFTFRONT']

    @property
    def FRONT(self):
        """Message constant 'FRONT'."""
        return Metaclass_PlanningCommand.__constants['FRONT']

    @property
    def RIGHTFRONT(self):
        """Message constant 'RIGHTFRONT'."""
        return Metaclass_PlanningCommand.__constants['RIGHTFRONT']

    @property
    def RIGHT(self):
        """Message constant 'RIGHT'."""
        return Metaclass_PlanningCommand.__constants['RIGHT']

    @property
    def RIGHT_LEFT(self):
        """Message constant 'RIGHT_LEFT'."""
        return Metaclass_PlanningCommand.__constants['RIGHT_LEFT']

    @property
    def LEFT_RIGHT(self):
        """Message constant 'LEFT_RIGHT'."""
        return Metaclass_PlanningCommand.__constants['LEFT_RIGHT']

    @property
    def MANUAL(self):
        """Message constant 'MANUAL'."""
        return Metaclass_PlanningCommand.__constants['MANUAL']

    @property
    def ACC(self):
        """Message constant 'ACC'."""
        return Metaclass_PlanningCommand.__constants['ACC']

    @property
    def ICC(self):
        """Message constant 'ICC'."""
        return Metaclass_PlanningCommand.__constants['ICC']

    @property
    def NOA(self):
        """Message constant 'NOA'."""
        return Metaclass_PlanningCommand.__constants['NOA']


class PlanningCommand(metaclass=Metaclass_PlanningCommand):
    """
    Message class 'PlanningCommand'.

    Constants:
      ACTION_NONE
      FOLLOW
      CHANGE_LEFT
      CHANGE_RIGHT
      PULL_OVER
      STOP
      RESUME_CRUISE
      FOLLOW_CIPV
      MAP_MODE
      LIGHT_RED
      LIGHT_GREEN
      SEARCHING_SLOT
      PARK_IN
      PARK_OUT
      LIGHT_YELLOW
      LIGHT_RESET
      AUTODRIVE
      MANUALDRIVE
      PARKOUT_DIRECTION_NONE
      LEFT
      LEFTFRONT
      FRONT
      RIGHTFRONT
      RIGHT
      RIGHT_LEFT
      LEFT_RIGHT
      MANUAL
      ACC
      ICC
      NOA
    """

    __slots__ = [
        '_header',
        '_action',
        '_cruise_speed',
        '_park_slot_id',
        '_park_out_direction',
        '_lane_width',
        '_function',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'action': 'uint8',
        'cruise_speed': 'double',
        'park_slot_id': 'int32',
        'park_out_direction': 'uint8',
        'lane_width': 'sequence<double>',
        'function': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.action = kwargs.get('action', int())
        self.cruise_speed = kwargs.get('cruise_speed', float())
        self.park_slot_id = kwargs.get('park_slot_id', int())
        self.park_out_direction = kwargs.get('park_out_direction', int())
        self.lane_width = array.array('d', kwargs.get('lane_width', []))
        self.function = kwargs.get('function', int())

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
        if self.action != other.action:
            return False
        if self.cruise_speed != other.cruise_speed:
            return False
        if self.park_slot_id != other.park_slot_id:
            return False
        if self.park_out_direction != other.park_out_direction:
            return False
        if self.lane_width != other.lane_width:
            return False
        if self.function != other.function:
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
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'action' field must be an unsigned integer in [0, 255]"
        self._action = value

    @builtins.property
    def cruise_speed(self):
        """Message field 'cruise_speed'."""
        return self._cruise_speed

    @cruise_speed.setter
    def cruise_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cruise_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cruise_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cruise_speed = value

    @builtins.property
    def park_slot_id(self):
        """Message field 'park_slot_id'."""
        return self._park_slot_id

    @park_slot_id.setter
    def park_slot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'park_slot_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'park_slot_id' field must be an integer in [-2147483648, 2147483647]"
        self._park_slot_id = value

    @builtins.property
    def park_out_direction(self):
        """Message field 'park_out_direction'."""
        return self._park_out_direction

    @park_out_direction.setter
    def park_out_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'park_out_direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'park_out_direction' field must be an unsigned integer in [0, 255]"
        self._park_out_direction = value

    @builtins.property
    def lane_width(self):
        """Message field 'lane_width'."""
        return self._lane_width

    @lane_width.setter
    def lane_width(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'lane_width' array.array() must have the type code of 'd'"
            self._lane_width = value
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
                "The 'lane_width' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._lane_width = array.array('d', value)

    @builtins.property
    def function(self):
        """Message field 'function'."""
        return self._function

    @function.setter
    def function(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'function' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'function' field must be an unsigned integer in [0, 255]"
        self._function = value
