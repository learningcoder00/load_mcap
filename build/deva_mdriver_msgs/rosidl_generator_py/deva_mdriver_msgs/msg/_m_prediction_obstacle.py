# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_mdriver_msgs:msg/MPredictionObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'decision'
# Member 'cov'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MPredictionObstacle(type):
    """Metaclass of message 'MPredictionObstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NOT_STATIC': 0,
        'WAIT_TO_MOVE': 1,
        'DEAD_CAR': 2,
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
                'deva_mdriver_msgs.msg.MPredictionObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__m_prediction_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__m_prediction_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__m_prediction_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__m_prediction_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__m_prediction_obstacle

            from deva_mdriver_msgs.msg import AccHeadingSteeringStats
            if AccHeadingSteeringStats.__class__._TYPE_SUPPORT is None:
                AccHeadingSteeringStats.__class__.__import_type_support__()

            from deva_mdriver_msgs.msg import DebugInfo
            if DebugInfo.__class__._TYPE_SUPPORT is None:
                DebugInfo.__class__.__import_type_support__()

            from deva_perception_msgs.msg import MovingObstacle
            if MovingObstacle.__class__._TYPE_SUPPORT is None:
                MovingObstacle.__class__.__import_type_support__()

            from deva_planning_msgs.msg import TrajectoryPoint
            if TrajectoryPoint.__class__._TYPE_SUPPORT is None:
                TrajectoryPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NOT_STATIC': cls.__constants['NOT_STATIC'],
            'WAIT_TO_MOVE': cls.__constants['WAIT_TO_MOVE'],
            'DEAD_CAR': cls.__constants['DEAD_CAR'],
        }

    @property
    def NOT_STATIC(self):
        """Message constant 'NOT_STATIC'."""
        return Metaclass_MPredictionObstacle.__constants['NOT_STATIC']

    @property
    def WAIT_TO_MOVE(self):
        """Message constant 'WAIT_TO_MOVE'."""
        return Metaclass_MPredictionObstacle.__constants['WAIT_TO_MOVE']

    @property
    def DEAD_CAR(self):
        """Message constant 'DEAD_CAR'."""
        return Metaclass_MPredictionObstacle.__constants['DEAD_CAR']


class MPredictionObstacle(metaclass=Metaclass_MPredictionObstacle):
    """
    Message class 'MPredictionObstacle'.

    Constants:
      NOT_STATIC
      WAIT_TO_MOVE
      DEAD_CAR
    """

    __slots__ = [
        '_perception_obstacle',
        '_trajectory',
        '_decision',
        '_obs_id',
        '_score',
        '_cov',
        '_is_static',
        '_acc_heading_steering_stats',
        '_prediction_debug_info',
    ]

    _fields_and_field_types = {
        'perception_obstacle': 'deva_perception_msgs/MovingObstacle',
        'trajectory': 'sequence<deva_planning_msgs/TrajectoryPoint>',
        'decision': 'sequence<uint8>',
        'obs_id': 'int32',
        'score': 'double',
        'cov': 'sequence<double>',
        'is_static': 'uint8',
        'acc_heading_steering_stats': 'sequence<deva_mdriver_msgs/AccHeadingSteeringStats>',
        'prediction_debug_info': 'sequence<deva_mdriver_msgs/DebugInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'MovingObstacle'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'TrajectoryPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_mdriver_msgs', 'msg'], 'AccHeadingSteeringStats')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_mdriver_msgs', 'msg'], 'DebugInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_perception_msgs.msg import MovingObstacle
        self.perception_obstacle = kwargs.get('perception_obstacle', MovingObstacle())
        self.trajectory = kwargs.get('trajectory', [])
        self.decision = array.array('B', kwargs.get('decision', []))
        self.obs_id = kwargs.get('obs_id', int())
        self.score = kwargs.get('score', float())
        self.cov = array.array('d', kwargs.get('cov', []))
        self.is_static = kwargs.get('is_static', int())
        self.acc_heading_steering_stats = kwargs.get('acc_heading_steering_stats', [])
        self.prediction_debug_info = kwargs.get('prediction_debug_info', [])

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
        if self.perception_obstacle != other.perception_obstacle:
            return False
        if self.trajectory != other.trajectory:
            return False
        if self.decision != other.decision:
            return False
        if self.obs_id != other.obs_id:
            return False
        if self.score != other.score:
            return False
        if self.cov != other.cov:
            return False
        if self.is_static != other.is_static:
            return False
        if self.acc_heading_steering_stats != other.acc_heading_steering_stats:
            return False
        if self.prediction_debug_info != other.prediction_debug_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def perception_obstacle(self):
        """Message field 'perception_obstacle'."""
        return self._perception_obstacle

    @perception_obstacle.setter
    def perception_obstacle(self, value):
        if __debug__:
            from deva_perception_msgs.msg import MovingObstacle
            assert \
                isinstance(value, MovingObstacle), \
                "The 'perception_obstacle' field must be a sub message of type 'MovingObstacle'"
        self._perception_obstacle = value

    @builtins.property
    def trajectory(self):
        """Message field 'trajectory'."""
        return self._trajectory

    @trajectory.setter
    def trajectory(self, value):
        if __debug__:
            from deva_planning_msgs.msg import TrajectoryPoint
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
                 all(isinstance(v, TrajectoryPoint) for v in value) and
                 True), \
                "The 'trajectory' field must be a set or sequence and each value of type 'TrajectoryPoint'"
        self._trajectory = value

    @builtins.property
    def decision(self):
        """Message field 'decision'."""
        return self._decision

    @decision.setter
    def decision(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'decision' array.array() must have the type code of 'B'"
            self._decision = value
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
                "The 'decision' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._decision = array.array('B', value)

    @builtins.property
    def obs_id(self):
        """Message field 'obs_id'."""
        return self._obs_id

    @obs_id.setter
    def obs_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obs_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'obs_id' field must be an integer in [-2147483648, 2147483647]"
        self._obs_id = value

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
    def cov(self):
        """Message field 'cov'."""
        return self._cov

    @cov.setter
    def cov(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'cov' array.array() must have the type code of 'd'"
            self._cov = value
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
                "The 'cov' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cov = array.array('d', value)

    @builtins.property
    def is_static(self):
        """Message field 'is_static'."""
        return self._is_static

    @is_static.setter
    def is_static(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_static' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_static' field must be an unsigned integer in [0, 255]"
        self._is_static = value

    @builtins.property
    def acc_heading_steering_stats(self):
        """Message field 'acc_heading_steering_stats'."""
        return self._acc_heading_steering_stats

    @acc_heading_steering_stats.setter
    def acc_heading_steering_stats(self, value):
        if __debug__:
            from deva_mdriver_msgs.msg import AccHeadingSteeringStats
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
                 all(isinstance(v, AccHeadingSteeringStats) for v in value) and
                 True), \
                "The 'acc_heading_steering_stats' field must be a set or sequence and each value of type 'AccHeadingSteeringStats'"
        self._acc_heading_steering_stats = value

    @builtins.property
    def prediction_debug_info(self):
        """Message field 'prediction_debug_info'."""
        return self._prediction_debug_info

    @prediction_debug_info.setter
    def prediction_debug_info(self, value):
        if __debug__:
            from deva_mdriver_msgs.msg import DebugInfo
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
                 all(isinstance(v, DebugInfo) for v in value) and
                 True), \
                "The 'prediction_debug_info' field must be a set or sequence and each value of type 'DebugInfo'"
        self._prediction_debug_info = value
