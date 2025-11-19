# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs2:msg/PlanningObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'current_line_id'
# Member 'target_line_id'
# Member 'decision_tag'
# Member 'scene_understanding'
# Member 'scalable_flags'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningObstacle(type):
    """Metaclass of message 'PlanningObstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TAG_UNKNOWN': 0,
        'TAG_FOLLOW': 1,
        'TAG_OVERTAKE': 2,
        'TAG_LEFT_PASS': 3,
        'TAG_RIGHT_PASS': 4,
        'TAG_PRE_DECELERATE': 5,
        'TAG_PRE_OVERTAKE_LEFT': 6,
        'TAG_PRE_OVERTAKE_RIGHT': 7,
        'SCENE_CUTIN': 1,
        'SCENE_CUTOUT': 2,
        'SCENE_CROSS': 3,
        'SCENE_ONCOMING': 4,
        'SCENE_DEAD_CAR': 5,
        'SCENE_BLOCK': 6,
        'PRIORITY_LOW': 1,
        'PRIORITY_EQUAL': 2,
        'PRIORITY_HIGH': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_planning_msgs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_planning_msgs2.msg.PlanningObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_obstacle

            from deva_planning_msgs2.msg import String2String
            if String2String.__class__._TYPE_SUPPORT is None:
                String2String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TAG_UNKNOWN': cls.__constants['TAG_UNKNOWN'],
            'TAG_FOLLOW': cls.__constants['TAG_FOLLOW'],
            'TAG_OVERTAKE': cls.__constants['TAG_OVERTAKE'],
            'TAG_LEFT_PASS': cls.__constants['TAG_LEFT_PASS'],
            'TAG_RIGHT_PASS': cls.__constants['TAG_RIGHT_PASS'],
            'TAG_PRE_DECELERATE': cls.__constants['TAG_PRE_DECELERATE'],
            'TAG_PRE_OVERTAKE_LEFT': cls.__constants['TAG_PRE_OVERTAKE_LEFT'],
            'TAG_PRE_OVERTAKE_RIGHT': cls.__constants['TAG_PRE_OVERTAKE_RIGHT'],
            'SCENE_CUTIN': cls.__constants['SCENE_CUTIN'],
            'SCENE_CUTOUT': cls.__constants['SCENE_CUTOUT'],
            'SCENE_CROSS': cls.__constants['SCENE_CROSS'],
            'SCENE_ONCOMING': cls.__constants['SCENE_ONCOMING'],
            'SCENE_DEAD_CAR': cls.__constants['SCENE_DEAD_CAR'],
            'SCENE_BLOCK': cls.__constants['SCENE_BLOCK'],
            'PRIORITY_LOW': cls.__constants['PRIORITY_LOW'],
            'PRIORITY_EQUAL': cls.__constants['PRIORITY_EQUAL'],
            'PRIORITY_HIGH': cls.__constants['PRIORITY_HIGH'],
        }

    @property
    def TAG_UNKNOWN(self):
        """Message constant 'TAG_UNKNOWN'."""
        return Metaclass_PlanningObstacle.__constants['TAG_UNKNOWN']

    @property
    def TAG_FOLLOW(self):
        """Message constant 'TAG_FOLLOW'."""
        return Metaclass_PlanningObstacle.__constants['TAG_FOLLOW']

    @property
    def TAG_OVERTAKE(self):
        """Message constant 'TAG_OVERTAKE'."""
        return Metaclass_PlanningObstacle.__constants['TAG_OVERTAKE']

    @property
    def TAG_LEFT_PASS(self):
        """Message constant 'TAG_LEFT_PASS'."""
        return Metaclass_PlanningObstacle.__constants['TAG_LEFT_PASS']

    @property
    def TAG_RIGHT_PASS(self):
        """Message constant 'TAG_RIGHT_PASS'."""
        return Metaclass_PlanningObstacle.__constants['TAG_RIGHT_PASS']

    @property
    def TAG_PRE_DECELERATE(self):
        """Message constant 'TAG_PRE_DECELERATE'."""
        return Metaclass_PlanningObstacle.__constants['TAG_PRE_DECELERATE']

    @property
    def TAG_PRE_OVERTAKE_LEFT(self):
        """Message constant 'TAG_PRE_OVERTAKE_LEFT'."""
        return Metaclass_PlanningObstacle.__constants['TAG_PRE_OVERTAKE_LEFT']

    @property
    def TAG_PRE_OVERTAKE_RIGHT(self):
        """Message constant 'TAG_PRE_OVERTAKE_RIGHT'."""
        return Metaclass_PlanningObstacle.__constants['TAG_PRE_OVERTAKE_RIGHT']

    @property
    def SCENE_CUTIN(self):
        """Message constant 'SCENE_CUTIN'."""
        return Metaclass_PlanningObstacle.__constants['SCENE_CUTIN']

    @property
    def SCENE_CUTOUT(self):
        """Message constant 'SCENE_CUTOUT'."""
        return Metaclass_PlanningObstacle.__constants['SCENE_CUTOUT']

    @property
    def SCENE_CROSS(self):
        """Message constant 'SCENE_CROSS'."""
        return Metaclass_PlanningObstacle.__constants['SCENE_CROSS']

    @property
    def SCENE_ONCOMING(self):
        """Message constant 'SCENE_ONCOMING'."""
        return Metaclass_PlanningObstacle.__constants['SCENE_ONCOMING']

    @property
    def SCENE_DEAD_CAR(self):
        """Message constant 'SCENE_DEAD_CAR'."""
        return Metaclass_PlanningObstacle.__constants['SCENE_DEAD_CAR']

    @property
    def SCENE_BLOCK(self):
        """Message constant 'SCENE_BLOCK'."""
        return Metaclass_PlanningObstacle.__constants['SCENE_BLOCK']

    @property
    def PRIORITY_LOW(self):
        """Message constant 'PRIORITY_LOW'."""
        return Metaclass_PlanningObstacle.__constants['PRIORITY_LOW']

    @property
    def PRIORITY_EQUAL(self):
        """Message constant 'PRIORITY_EQUAL'."""
        return Metaclass_PlanningObstacle.__constants['PRIORITY_EQUAL']

    @property
    def PRIORITY_HIGH(self):
        """Message constant 'PRIORITY_HIGH'."""
        return Metaclass_PlanningObstacle.__constants['PRIORITY_HIGH']


class PlanningObstacle(metaclass=Metaclass_PlanningObstacle):
    """
    Message class 'PlanningObstacle'.

    Constants:
      TAG_UNKNOWN
      TAG_FOLLOW
      TAG_OVERTAKE
      TAG_LEFT_PASS
      TAG_RIGHT_PASS
      TAG_PRE_DECELERATE
      TAG_PRE_OVERTAKE_LEFT
      TAG_PRE_OVERTAKE_RIGHT
      SCENE_CUTIN
      SCENE_CUTOUT
      SCENE_CROSS
      SCENE_ONCOMING
      SCENE_DEAD_CAR
      SCENE_BLOCK
      PRIORITY_LOW
      PRIORITY_EQUAL
      PRIORITY_HIGH
    """

    __slots__ = [
        '_id',
        '_current_line_id',
        '_target_line_id',
        '_decision_tag',
        '_scene_understanding',
        '_cutin_time',
        '_cutout_time',
        '_distance',
        '_ttc',
        '_priority',
        '_scalable_flags',
        '_scalable_multimap',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'current_line_id': 'sequence<int32>',
        'target_line_id': 'sequence<int32>',
        'decision_tag': 'sequence<uint8>',
        'scene_understanding': 'sequence<uint8>',
        'cutin_time': 'double',
        'cutout_time': 'double',
        'distance': 'double',
        'ttc': 'double',
        'priority': 'uint8',
        'scalable_flags': 'sequence<uint8>',
        'scalable_multimap': 'sequence<deva_planning_msgs2/String2String>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'String2String')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        self.current_line_id = array.array('i', kwargs.get('current_line_id', []))
        self.target_line_id = array.array('i', kwargs.get('target_line_id', []))
        self.decision_tag = array.array('B', kwargs.get('decision_tag', []))
        self.scene_understanding = array.array('B', kwargs.get('scene_understanding', []))
        self.cutin_time = kwargs.get('cutin_time', float())
        self.cutout_time = kwargs.get('cutout_time', float())
        self.distance = kwargs.get('distance', float())
        self.ttc = kwargs.get('ttc', float())
        self.priority = kwargs.get('priority', int())
        self.scalable_flags = array.array('B', kwargs.get('scalable_flags', []))
        self.scalable_multimap = kwargs.get('scalable_multimap', [])

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
        if self.id != other.id:
            return False
        if self.current_line_id != other.current_line_id:
            return False
        if self.target_line_id != other.target_line_id:
            return False
        if self.decision_tag != other.decision_tag:
            return False
        if self.scene_understanding != other.scene_understanding:
            return False
        if self.cutin_time != other.cutin_time:
            return False
        if self.cutout_time != other.cutout_time:
            return False
        if self.distance != other.distance:
            return False
        if self.ttc != other.ttc:
            return False
        if self.priority != other.priority:
            return False
        if self.scalable_flags != other.scalable_flags:
            return False
        if self.scalable_multimap != other.scalable_multimap:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def current_line_id(self):
        """Message field 'current_line_id'."""
        return self._current_line_id

    @current_line_id.setter
    def current_line_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'current_line_id' array.array() must have the type code of 'i'"
            self._current_line_id = value
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
                "The 'current_line_id' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._current_line_id = array.array('i', value)

    @builtins.property
    def target_line_id(self):
        """Message field 'target_line_id'."""
        return self._target_line_id

    @target_line_id.setter
    def target_line_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'target_line_id' array.array() must have the type code of 'i'"
            self._target_line_id = value
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
                "The 'target_line_id' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._target_line_id = array.array('i', value)

    @builtins.property
    def decision_tag(self):
        """Message field 'decision_tag'."""
        return self._decision_tag

    @decision_tag.setter
    def decision_tag(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'decision_tag' array.array() must have the type code of 'B'"
            self._decision_tag = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'decision_tag' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._decision_tag = array.array('B', value)

    @builtins.property
    def scene_understanding(self):
        """Message field 'scene_understanding'."""
        return self._scene_understanding

    @scene_understanding.setter
    def scene_understanding(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'scene_understanding' array.array() must have the type code of 'B'"
            self._scene_understanding = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'scene_understanding' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._scene_understanding = array.array('B', value)

    @builtins.property
    def cutin_time(self):
        """Message field 'cutin_time'."""
        return self._cutin_time

    @cutin_time.setter
    def cutin_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cutin_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cutin_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cutin_time = value

    @builtins.property
    def cutout_time(self):
        """Message field 'cutout_time'."""
        return self._cutout_time

    @cutout_time.setter
    def cutout_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cutout_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cutout_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cutout_time = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance = value

    @builtins.property
    def ttc(self):
        """Message field 'ttc'."""
        return self._ttc

    @ttc.setter
    def ttc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ttc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ttc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ttc = value

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
            assert value >= 0 and value < 256, \
                "The 'priority' field must be an unsigned integer in [0, 255]"
        self._priority = value

    @builtins.property
    def scalable_flags(self):
        """Message field 'scalable_flags'."""
        return self._scalable_flags

    @scalable_flags.setter
    def scalable_flags(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'scalable_flags' array.array() must have the type code of 'B'"
            self._scalable_flags = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'scalable_flags' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._scalable_flags = array.array('B', value)

    @builtins.property
    def scalable_multimap(self):
        """Message field 'scalable_multimap'."""
        return self._scalable_multimap

    @scalable_multimap.setter
    def scalable_multimap(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import String2String
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
                 all(isinstance(v, String2String) for v in value) and
                 True), \
                "The 'scalable_multimap' field must be a set or sequence and each value of type 'String2String'"
        self._scalable_multimap = value
