# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs2:msg/PolicyScenario.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'scalable_flags'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PolicyScenario(type):
    """Metaclass of message 'PolicyScenario'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LANE_KEEPING': 0,
        'RIGHT_CHANGE': 1,
        'LEFT_CHANGE': 2,
        'HOLD': 3,
        'CANCEL': 4,
        'LANE_CHANGE': 5,
        'RIGHT_CHANGE_PREPARE': 6,
        'LEFT_CHANGE_PREPARE': 7,
        'UNKNOWN': 8,
        'TREE_NON_GAMING': 1,
        'TREE_GAMED': 2,
        'TREE_CANDIDATE': 3,
        'TREE_LATERAL': 4,
        'TREE_PRE_DECELERATE': 5,
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
                'deva_planning_msgs2.msg.PolicyScenario')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__policy_scenario
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__policy_scenario
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__policy_scenario
            cls._TYPE_SUPPORT = module.type_support_msg__msg__policy_scenario
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__policy_scenario

            from deva_planning_msgs2.msg import PlanningObstacle
            if PlanningObstacle.__class__._TYPE_SUPPORT is None:
                PlanningObstacle.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import SemanticTreeNode
            if SemanticTreeNode.__class__._TYPE_SUPPORT is None:
                SemanticTreeNode.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import String2Double
            if String2Double.__class__._TYPE_SUPPORT is None:
                String2Double.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import String2String
            if String2String.__class__._TYPE_SUPPORT is None:
                String2String.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import TreeTrajectory
            if TreeTrajectory.__class__._TYPE_SUPPORT is None:
                TreeTrajectory.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import UInt2String
            if UInt2String.__class__._TYPE_SUPPORT is None:
                UInt2String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LANE_KEEPING': cls.__constants['LANE_KEEPING'],
            'RIGHT_CHANGE': cls.__constants['RIGHT_CHANGE'],
            'LEFT_CHANGE': cls.__constants['LEFT_CHANGE'],
            'HOLD': cls.__constants['HOLD'],
            'CANCEL': cls.__constants['CANCEL'],
            'LANE_CHANGE': cls.__constants['LANE_CHANGE'],
            'RIGHT_CHANGE_PREPARE': cls.__constants['RIGHT_CHANGE_PREPARE'],
            'LEFT_CHANGE_PREPARE': cls.__constants['LEFT_CHANGE_PREPARE'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'TREE_NON_GAMING': cls.__constants['TREE_NON_GAMING'],
            'TREE_GAMED': cls.__constants['TREE_GAMED'],
            'TREE_CANDIDATE': cls.__constants['TREE_CANDIDATE'],
            'TREE_LATERAL': cls.__constants['TREE_LATERAL'],
            'TREE_PRE_DECELERATE': cls.__constants['TREE_PRE_DECELERATE'],
        }

    @property
    def LANE_KEEPING(self):
        """Message constant 'LANE_KEEPING'."""
        return Metaclass_PolicyScenario.__constants['LANE_KEEPING']

    @property
    def RIGHT_CHANGE(self):
        """Message constant 'RIGHT_CHANGE'."""
        return Metaclass_PolicyScenario.__constants['RIGHT_CHANGE']

    @property
    def LEFT_CHANGE(self):
        """Message constant 'LEFT_CHANGE'."""
        return Metaclass_PolicyScenario.__constants['LEFT_CHANGE']

    @property
    def HOLD(self):
        """Message constant 'HOLD'."""
        return Metaclass_PolicyScenario.__constants['HOLD']

    @property
    def CANCEL(self):
        """Message constant 'CANCEL'."""
        return Metaclass_PolicyScenario.__constants['CANCEL']

    @property
    def LANE_CHANGE(self):
        """Message constant 'LANE_CHANGE'."""
        return Metaclass_PolicyScenario.__constants['LANE_CHANGE']

    @property
    def RIGHT_CHANGE_PREPARE(self):
        """Message constant 'RIGHT_CHANGE_PREPARE'."""
        return Metaclass_PolicyScenario.__constants['RIGHT_CHANGE_PREPARE']

    @property
    def LEFT_CHANGE_PREPARE(self):
        """Message constant 'LEFT_CHANGE_PREPARE'."""
        return Metaclass_PolicyScenario.__constants['LEFT_CHANGE_PREPARE']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_PolicyScenario.__constants['UNKNOWN']

    @property
    def TREE_NON_GAMING(self):
        """Message constant 'TREE_NON_GAMING'."""
        return Metaclass_PolicyScenario.__constants['TREE_NON_GAMING']

    @property
    def TREE_GAMED(self):
        """Message constant 'TREE_GAMED'."""
        return Metaclass_PolicyScenario.__constants['TREE_GAMED']

    @property
    def TREE_CANDIDATE(self):
        """Message constant 'TREE_CANDIDATE'."""
        return Metaclass_PolicyScenario.__constants['TREE_CANDIDATE']

    @property
    def TREE_LATERAL(self):
        """Message constant 'TREE_LATERAL'."""
        return Metaclass_PolicyScenario.__constants['TREE_LATERAL']

    @property
    def TREE_PRE_DECELERATE(self):
        """Message constant 'TREE_PRE_DECELERATE'."""
        return Metaclass_PolicyScenario.__constants['TREE_PRE_DECELERATE']


class PolicyScenario(metaclass=Metaclass_PolicyScenario):
    """
    Message class 'PolicyScenario'.

    Constants:
      LANE_KEEPING
      RIGHT_CHANGE
      LEFT_CHANGE
      HOLD
      CANCEL
      LANE_CHANGE
      RIGHT_CHANGE_PREPARE
      LEFT_CHANGE_PREPARE
      UNKNOWN
      TREE_NON_GAMING
      TREE_GAMED
      TREE_CANDIDATE
      TREE_LATERAL
      TREE_PRE_DECELERATE
    """

    __slots__ = [
        '_tree_id',
        '_behavior_type',
        '_target_line_id',
        '_current_line_id',
        '_is_from_mdriver',
        '_front_obstacle_id',
        '_rear_obstacle_id',
        '_game_obstacles',
        '_critical_obstacles',
        '_tree_score',
        '_rollout_start_time',
        '_tree_nodes',
        '_tree_output_trajs',
        '_scalable_flags',
        '_scalable_multimap',
    ]

    _fields_and_field_types = {
        'tree_id': 'int32',
        'behavior_type': 'uint8',
        'target_line_id': 'int32',
        'current_line_id': 'int32',
        'is_from_mdriver': 'boolean',
        'front_obstacle_id': 'string',
        'rear_obstacle_id': 'string',
        'game_obstacles': 'sequence<deva_planning_msgs2/UInt2String>',
        'critical_obstacles': 'sequence<deva_planning_msgs2/PlanningObstacle>',
        'tree_score': 'sequence<deva_planning_msgs2/String2Double>',
        'rollout_start_time': 'double',
        'tree_nodes': 'sequence<deva_planning_msgs2/SemanticTreeNode>',
        'tree_output_trajs': 'sequence<deva_planning_msgs2/TreeTrajectory>',
        'scalable_flags': 'sequence<uint8>',
        'scalable_multimap': 'sequence<deva_planning_msgs2/String2String>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'UInt2String')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'PlanningObstacle')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'String2Double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'SemanticTreeNode')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'TreeTrajectory')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'String2String')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tree_id = kwargs.get('tree_id', int())
        self.behavior_type = kwargs.get('behavior_type', int())
        self.target_line_id = kwargs.get('target_line_id', int())
        self.current_line_id = kwargs.get('current_line_id', int())
        self.is_from_mdriver = kwargs.get('is_from_mdriver', bool())
        self.front_obstacle_id = kwargs.get('front_obstacle_id', str())
        self.rear_obstacle_id = kwargs.get('rear_obstacle_id', str())
        self.game_obstacles = kwargs.get('game_obstacles', [])
        self.critical_obstacles = kwargs.get('critical_obstacles', [])
        self.tree_score = kwargs.get('tree_score', [])
        self.rollout_start_time = kwargs.get('rollout_start_time', float())
        self.tree_nodes = kwargs.get('tree_nodes', [])
        self.tree_output_trajs = kwargs.get('tree_output_trajs', [])
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
        if self.tree_id != other.tree_id:
            return False
        if self.behavior_type != other.behavior_type:
            return False
        if self.target_line_id != other.target_line_id:
            return False
        if self.current_line_id != other.current_line_id:
            return False
        if self.is_from_mdriver != other.is_from_mdriver:
            return False
        if self.front_obstacle_id != other.front_obstacle_id:
            return False
        if self.rear_obstacle_id != other.rear_obstacle_id:
            return False
        if self.game_obstacles != other.game_obstacles:
            return False
        if self.critical_obstacles != other.critical_obstacles:
            return False
        if self.tree_score != other.tree_score:
            return False
        if self.rollout_start_time != other.rollout_start_time:
            return False
        if self.tree_nodes != other.tree_nodes:
            return False
        if self.tree_output_trajs != other.tree_output_trajs:
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

    @builtins.property
    def tree_id(self):
        """Message field 'tree_id'."""
        return self._tree_id

    @tree_id.setter
    def tree_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tree_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tree_id' field must be an integer in [-2147483648, 2147483647]"
        self._tree_id = value

    @builtins.property
    def behavior_type(self):
        """Message field 'behavior_type'."""
        return self._behavior_type

    @behavior_type.setter
    def behavior_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'behavior_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'behavior_type' field must be an unsigned integer in [0, 255]"
        self._behavior_type = value

    @builtins.property
    def target_line_id(self):
        """Message field 'target_line_id'."""
        return self._target_line_id

    @target_line_id.setter
    def target_line_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_line_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'target_line_id' field must be an integer in [-2147483648, 2147483647]"
        self._target_line_id = value

    @builtins.property
    def current_line_id(self):
        """Message field 'current_line_id'."""
        return self._current_line_id

    @current_line_id.setter
    def current_line_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_line_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_line_id' field must be an integer in [-2147483648, 2147483647]"
        self._current_line_id = value

    @builtins.property
    def is_from_mdriver(self):
        """Message field 'is_from_mdriver'."""
        return self._is_from_mdriver

    @is_from_mdriver.setter
    def is_from_mdriver(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_from_mdriver' field must be of type 'bool'"
        self._is_from_mdriver = value

    @builtins.property
    def front_obstacle_id(self):
        """Message field 'front_obstacle_id'."""
        return self._front_obstacle_id

    @front_obstacle_id.setter
    def front_obstacle_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'front_obstacle_id' field must be of type 'str'"
        self._front_obstacle_id = value

    @builtins.property
    def rear_obstacle_id(self):
        """Message field 'rear_obstacle_id'."""
        return self._rear_obstacle_id

    @rear_obstacle_id.setter
    def rear_obstacle_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rear_obstacle_id' field must be of type 'str'"
        self._rear_obstacle_id = value

    @builtins.property
    def game_obstacles(self):
        """Message field 'game_obstacles'."""
        return self._game_obstacles

    @game_obstacles.setter
    def game_obstacles(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import UInt2String
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
                 all(isinstance(v, UInt2String) for v in value) and
                 True), \
                "The 'game_obstacles' field must be a set or sequence and each value of type 'UInt2String'"
        self._game_obstacles = value

    @builtins.property
    def critical_obstacles(self):
        """Message field 'critical_obstacles'."""
        return self._critical_obstacles

    @critical_obstacles.setter
    def critical_obstacles(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import PlanningObstacle
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
                 all(isinstance(v, PlanningObstacle) for v in value) and
                 True), \
                "The 'critical_obstacles' field must be a set or sequence and each value of type 'PlanningObstacle'"
        self._critical_obstacles = value

    @builtins.property
    def tree_score(self):
        """Message field 'tree_score'."""
        return self._tree_score

    @tree_score.setter
    def tree_score(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import String2Double
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
                 all(isinstance(v, String2Double) for v in value) and
                 True), \
                "The 'tree_score' field must be a set or sequence and each value of type 'String2Double'"
        self._tree_score = value

    @builtins.property
    def rollout_start_time(self):
        """Message field 'rollout_start_time'."""
        return self._rollout_start_time

    @rollout_start_time.setter
    def rollout_start_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rollout_start_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rollout_start_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rollout_start_time = value

    @builtins.property
    def tree_nodes(self):
        """Message field 'tree_nodes'."""
        return self._tree_nodes

    @tree_nodes.setter
    def tree_nodes(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import SemanticTreeNode
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
                 all(isinstance(v, SemanticTreeNode) for v in value) and
                 True), \
                "The 'tree_nodes' field must be a set or sequence and each value of type 'SemanticTreeNode'"
        self._tree_nodes = value

    @builtins.property
    def tree_output_trajs(self):
        """Message field 'tree_output_trajs'."""
        return self._tree_output_trajs

    @tree_output_trajs.setter
    def tree_output_trajs(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import TreeTrajectory
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
                 all(isinstance(v, TreeTrajectory) for v in value) and
                 True), \
                "The 'tree_output_trajs' field must be a set or sequence and each value of type 'TreeTrajectory'"
        self._tree_output_trajs = value

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
