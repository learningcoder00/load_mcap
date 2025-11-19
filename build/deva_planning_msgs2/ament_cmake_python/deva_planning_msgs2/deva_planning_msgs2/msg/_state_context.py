# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs2:msg/StateContext.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'scalable_flags'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StateContext(type):
    """Metaclass of message 'StateContext'."""

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
        'TAKE_OVER': 9,
        'ROUTING_NULL': 0,
        'INCREASED_ROAD': 1,
        'LANE': 2,
        'OSM': 3,
        'ROAD': 4,
        'SDK_NAVI': 5,
        'SDK_CRUISE': 6,
        'WEB': 7,
        'U_TURN': 0,
        'TURN_LEFT': 1,
        'TURN_RIGHT': 2,
        'LEFT_TURN_WAITING_AREA': 3,
        'RIGHT_TURN_WAITING_AREA': 4,
        'STRAIGHT_AHEAD_WAITING_AREA': 5,
        'GO_STRAIGHT': 6,
        'NONE': 0,
        'TURN_LEVER': 1,
        'OVERTAKE': 2,
        'NAVIGATION': 3,
        'OBSTACLE': 4,
        'TAG_UNKNOWN': 0,
        'TAG_FOLLOW': 1,
        'TAG_OVERTAKE': 2,
        'TAG_LEFT_PASS': 3,
        'TAG_RIGHT_PASS': 4,
        'TAG_PRE_DECELERATE': 5,
        'TAG_PRE_OVERTAKE_LEFT': 6,
        'TAG_PRE_OVERTAKE_RIGHT': 7,
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
                'deva_planning_msgs2.msg.StateContext')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state_context
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state_context
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state_context
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state_context
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state_context

            from deva_planning_msgs2.msg import LaneBindInfo
            if LaneBindInfo.__class__._TYPE_SUPPORT is None:
                LaneBindInfo.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import PolicyScenario
            if PolicyScenario.__class__._TYPE_SUPPORT is None:
                PolicyScenario.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import Ref2SLBoundary
            if Ref2SLBoundary.__class__._TYPE_SUPPORT is None:
                Ref2SLBoundary.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import String2String
            if String2String.__class__._TYPE_SUPPORT is None:
                String2String.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import String2UInt
            if String2UInt.__class__._TYPE_SUPPORT is None:
                String2UInt.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import UInt2String
            if UInt2String.__class__._TYPE_SUPPORT is None:
                UInt2String.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

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
            'TAKE_OVER': cls.__constants['TAKE_OVER'],
            'ROUTING_NULL': cls.__constants['ROUTING_NULL'],
            'INCREASED_ROAD': cls.__constants['INCREASED_ROAD'],
            'LANE': cls.__constants['LANE'],
            'OSM': cls.__constants['OSM'],
            'ROAD': cls.__constants['ROAD'],
            'SDK_NAVI': cls.__constants['SDK_NAVI'],
            'SDK_CRUISE': cls.__constants['SDK_CRUISE'],
            'WEB': cls.__constants['WEB'],
            'U_TURN': cls.__constants['U_TURN'],
            'TURN_LEFT': cls.__constants['TURN_LEFT'],
            'TURN_RIGHT': cls.__constants['TURN_RIGHT'],
            'LEFT_TURN_WAITING_AREA': cls.__constants['LEFT_TURN_WAITING_AREA'],
            'RIGHT_TURN_WAITING_AREA': cls.__constants['RIGHT_TURN_WAITING_AREA'],
            'STRAIGHT_AHEAD_WAITING_AREA': cls.__constants['STRAIGHT_AHEAD_WAITING_AREA'],
            'GO_STRAIGHT': cls.__constants['GO_STRAIGHT'],
            'NONE': cls.__constants['NONE'],
            'TURN_LEVER': cls.__constants['TURN_LEVER'],
            'OVERTAKE': cls.__constants['OVERTAKE'],
            'NAVIGATION': cls.__constants['NAVIGATION'],
            'OBSTACLE': cls.__constants['OBSTACLE'],
            'TAG_UNKNOWN': cls.__constants['TAG_UNKNOWN'],
            'TAG_FOLLOW': cls.__constants['TAG_FOLLOW'],
            'TAG_OVERTAKE': cls.__constants['TAG_OVERTAKE'],
            'TAG_LEFT_PASS': cls.__constants['TAG_LEFT_PASS'],
            'TAG_RIGHT_PASS': cls.__constants['TAG_RIGHT_PASS'],
            'TAG_PRE_DECELERATE': cls.__constants['TAG_PRE_DECELERATE'],
            'TAG_PRE_OVERTAKE_LEFT': cls.__constants['TAG_PRE_OVERTAKE_LEFT'],
            'TAG_PRE_OVERTAKE_RIGHT': cls.__constants['TAG_PRE_OVERTAKE_RIGHT'],
        }

    @property
    def LANE_KEEPING(self):
        """Message constant 'LANE_KEEPING'."""
        return Metaclass_StateContext.__constants['LANE_KEEPING']

    @property
    def RIGHT_CHANGE(self):
        """Message constant 'RIGHT_CHANGE'."""
        return Metaclass_StateContext.__constants['RIGHT_CHANGE']

    @property
    def LEFT_CHANGE(self):
        """Message constant 'LEFT_CHANGE'."""
        return Metaclass_StateContext.__constants['LEFT_CHANGE']

    @property
    def HOLD(self):
        """Message constant 'HOLD'."""
        return Metaclass_StateContext.__constants['HOLD']

    @property
    def CANCEL(self):
        """Message constant 'CANCEL'."""
        return Metaclass_StateContext.__constants['CANCEL']

    @property
    def LANE_CHANGE(self):
        """Message constant 'LANE_CHANGE'."""
        return Metaclass_StateContext.__constants['LANE_CHANGE']

    @property
    def RIGHT_CHANGE_PREPARE(self):
        """Message constant 'RIGHT_CHANGE_PREPARE'."""
        return Metaclass_StateContext.__constants['RIGHT_CHANGE_PREPARE']

    @property
    def LEFT_CHANGE_PREPARE(self):
        """Message constant 'LEFT_CHANGE_PREPARE'."""
        return Metaclass_StateContext.__constants['LEFT_CHANGE_PREPARE']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_StateContext.__constants['UNKNOWN']

    @property
    def TAKE_OVER(self):
        """Message constant 'TAKE_OVER'."""
        return Metaclass_StateContext.__constants['TAKE_OVER']

    @property
    def ROUTING_NULL(self):
        """Message constant 'ROUTING_NULL'."""
        return Metaclass_StateContext.__constants['ROUTING_NULL']

    @property
    def INCREASED_ROAD(self):
        """Message constant 'INCREASED_ROAD'."""
        return Metaclass_StateContext.__constants['INCREASED_ROAD']

    @property
    def LANE(self):
        """Message constant 'LANE'."""
        return Metaclass_StateContext.__constants['LANE']

    @property
    def OSM(self):
        """Message constant 'OSM'."""
        return Metaclass_StateContext.__constants['OSM']

    @property
    def ROAD(self):
        """Message constant 'ROAD'."""
        return Metaclass_StateContext.__constants['ROAD']

    @property
    def SDK_NAVI(self):
        """Message constant 'SDK_NAVI'."""
        return Metaclass_StateContext.__constants['SDK_NAVI']

    @property
    def SDK_CRUISE(self):
        """Message constant 'SDK_CRUISE'."""
        return Metaclass_StateContext.__constants['SDK_CRUISE']

    @property
    def WEB(self):
        """Message constant 'WEB'."""
        return Metaclass_StateContext.__constants['WEB']

    @property
    def U_TURN(self):
        """Message constant 'U_TURN'."""
        return Metaclass_StateContext.__constants['U_TURN']

    @property
    def TURN_LEFT(self):
        """Message constant 'TURN_LEFT'."""
        return Metaclass_StateContext.__constants['TURN_LEFT']

    @property
    def TURN_RIGHT(self):
        """Message constant 'TURN_RIGHT'."""
        return Metaclass_StateContext.__constants['TURN_RIGHT']

    @property
    def LEFT_TURN_WAITING_AREA(self):
        """Message constant 'LEFT_TURN_WAITING_AREA'."""
        return Metaclass_StateContext.__constants['LEFT_TURN_WAITING_AREA']

    @property
    def RIGHT_TURN_WAITING_AREA(self):
        """Message constant 'RIGHT_TURN_WAITING_AREA'."""
        return Metaclass_StateContext.__constants['RIGHT_TURN_WAITING_AREA']

    @property
    def STRAIGHT_AHEAD_WAITING_AREA(self):
        """Message constant 'STRAIGHT_AHEAD_WAITING_AREA'."""
        return Metaclass_StateContext.__constants['STRAIGHT_AHEAD_WAITING_AREA']

    @property
    def GO_STRAIGHT(self):
        """Message constant 'GO_STRAIGHT'."""
        return Metaclass_StateContext.__constants['GO_STRAIGHT']

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_StateContext.__constants['NONE']

    @property
    def TURN_LEVER(self):
        """Message constant 'TURN_LEVER'."""
        return Metaclass_StateContext.__constants['TURN_LEVER']

    @property
    def OVERTAKE(self):
        """Message constant 'OVERTAKE'."""
        return Metaclass_StateContext.__constants['OVERTAKE']

    @property
    def NAVIGATION(self):
        """Message constant 'NAVIGATION'."""
        return Metaclass_StateContext.__constants['NAVIGATION']

    @property
    def OBSTACLE(self):
        """Message constant 'OBSTACLE'."""
        return Metaclass_StateContext.__constants['OBSTACLE']

    @property
    def TAG_UNKNOWN(self):
        """Message constant 'TAG_UNKNOWN'."""
        return Metaclass_StateContext.__constants['TAG_UNKNOWN']

    @property
    def TAG_FOLLOW(self):
        """Message constant 'TAG_FOLLOW'."""
        return Metaclass_StateContext.__constants['TAG_FOLLOW']

    @property
    def TAG_OVERTAKE(self):
        """Message constant 'TAG_OVERTAKE'."""
        return Metaclass_StateContext.__constants['TAG_OVERTAKE']

    @property
    def TAG_LEFT_PASS(self):
        """Message constant 'TAG_LEFT_PASS'."""
        return Metaclass_StateContext.__constants['TAG_LEFT_PASS']

    @property
    def TAG_RIGHT_PASS(self):
        """Message constant 'TAG_RIGHT_PASS'."""
        return Metaclass_StateContext.__constants['TAG_RIGHT_PASS']

    @property
    def TAG_PRE_DECELERATE(self):
        """Message constant 'TAG_PRE_DECELERATE'."""
        return Metaclass_StateContext.__constants['TAG_PRE_DECELERATE']

    @property
    def TAG_PRE_OVERTAKE_LEFT(self):
        """Message constant 'TAG_PRE_OVERTAKE_LEFT'."""
        return Metaclass_StateContext.__constants['TAG_PRE_OVERTAKE_LEFT']

    @property
    def TAG_PRE_OVERTAKE_RIGHT(self):
        """Message constant 'TAG_PRE_OVERTAKE_RIGHT'."""
        return Metaclass_StateContext.__constants['TAG_PRE_OVERTAKE_RIGHT']


class StateContext(metaclass=Metaclass_StateContext):
    """
    Message class 'StateContext'.

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
      TAKE_OVER
      ROUTING_NULL
      INCREASED_ROAD
      LANE
      OSM
      ROAD
      SDK_NAVI
      SDK_CRUISE
      WEB
      U_TURN
      TURN_LEFT
      TURN_RIGHT
      LEFT_TURN_WAITING_AREA
      RIGHT_TURN_WAITING_AREA
      STRAIGHT_AHEAD_WAITING_AREA
      GO_STRAIGHT
      NONE
      TURN_LEVER
      OVERTAKE
      NAVIGATION
      OBSTACLE
      TAG_UNKNOWN
      TAG_FOLLOW
      TAG_OVERTAKE
      TAG_LEFT_PASS
      TAG_RIGHT_PASS
      TAG_PRE_DECELERATE
      TAG_PRE_OVERTAKE_LEFT
      TAG_PRE_OVERTAKE_RIGHT
    """

    __slots__ = [
        '_header',
        '_behavior_type',
        '_routing_mode',
        '_current_turn_type',
        '_use_mdriver_ego',
        '_target_line_id',
        '_current_line_id',
        '_front_obstacle_id',
        '_rear_obstacle_id',
        '_lane_change_task',
        '_best_tree_id',
        '_mcts_trees',
        '_tagged_obstacle',
        '_lane_bind_infos',
        '_ego_sl_on_ref_lines',
        '_lane_change_cancel_reason',
        '_scalable_flags',
        '_scalable_multimap',
        '_scalable_stream',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'behavior_type': 'uint8',
        'routing_mode': 'uint8',
        'current_turn_type': 'uint8',
        'use_mdriver_ego': 'int32',
        'target_line_id': 'int32',
        'current_line_id': 'int32',
        'front_obstacle_id': 'string',
        'rear_obstacle_id': 'string',
        'lane_change_task': 'uint8',
        'best_tree_id': 'int32',
        'mcts_trees': 'sequence<deva_planning_msgs2/PolicyScenario>',
        'tagged_obstacle': 'sequence<deva_planning_msgs2/UInt2String>',
        'lane_bind_infos': 'sequence<deva_planning_msgs2/LaneBindInfo>',
        'ego_sl_on_ref_lines': 'sequence<deva_planning_msgs2/Ref2SLBoundary>',
        'lane_change_cancel_reason': 'uint8',
        'scalable_flags': 'sequence<uint8>',
        'scalable_multimap': 'sequence<deva_planning_msgs2/String2String>',
        'scalable_stream': 'sequence<deva_planning_msgs2/String2UInt>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'PolicyScenario')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'UInt2String')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'LaneBindInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'Ref2SLBoundary')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'String2String')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'String2UInt')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.behavior_type = kwargs.get('behavior_type', int())
        self.routing_mode = kwargs.get('routing_mode', int())
        self.current_turn_type = kwargs.get('current_turn_type', int())
        self.use_mdriver_ego = kwargs.get('use_mdriver_ego', int())
        self.target_line_id = kwargs.get('target_line_id', int())
        self.current_line_id = kwargs.get('current_line_id', int())
        self.front_obstacle_id = kwargs.get('front_obstacle_id', str())
        self.rear_obstacle_id = kwargs.get('rear_obstacle_id', str())
        self.lane_change_task = kwargs.get('lane_change_task', int())
        self.best_tree_id = kwargs.get('best_tree_id', int())
        self.mcts_trees = kwargs.get('mcts_trees', [])
        self.tagged_obstacle = kwargs.get('tagged_obstacle', [])
        self.lane_bind_infos = kwargs.get('lane_bind_infos', [])
        self.ego_sl_on_ref_lines = kwargs.get('ego_sl_on_ref_lines', [])
        self.lane_change_cancel_reason = kwargs.get('lane_change_cancel_reason', int())
        self.scalable_flags = array.array('B', kwargs.get('scalable_flags', []))
        self.scalable_multimap = kwargs.get('scalable_multimap', [])
        self.scalable_stream = kwargs.get('scalable_stream', [])

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
        if self.behavior_type != other.behavior_type:
            return False
        if self.routing_mode != other.routing_mode:
            return False
        if self.current_turn_type != other.current_turn_type:
            return False
        if self.use_mdriver_ego != other.use_mdriver_ego:
            return False
        if self.target_line_id != other.target_line_id:
            return False
        if self.current_line_id != other.current_line_id:
            return False
        if self.front_obstacle_id != other.front_obstacle_id:
            return False
        if self.rear_obstacle_id != other.rear_obstacle_id:
            return False
        if self.lane_change_task != other.lane_change_task:
            return False
        if self.best_tree_id != other.best_tree_id:
            return False
        if self.mcts_trees != other.mcts_trees:
            return False
        if self.tagged_obstacle != other.tagged_obstacle:
            return False
        if self.lane_bind_infos != other.lane_bind_infos:
            return False
        if self.ego_sl_on_ref_lines != other.ego_sl_on_ref_lines:
            return False
        if self.lane_change_cancel_reason != other.lane_change_cancel_reason:
            return False
        if self.scalable_flags != other.scalable_flags:
            return False
        if self.scalable_multimap != other.scalable_multimap:
            return False
        if self.scalable_stream != other.scalable_stream:
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
    def routing_mode(self):
        """Message field 'routing_mode'."""
        return self._routing_mode

    @routing_mode.setter
    def routing_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'routing_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'routing_mode' field must be an unsigned integer in [0, 255]"
        self._routing_mode = value

    @builtins.property
    def current_turn_type(self):
        """Message field 'current_turn_type'."""
        return self._current_turn_type

    @current_turn_type.setter
    def current_turn_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_turn_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_turn_type' field must be an unsigned integer in [0, 255]"
        self._current_turn_type = value

    @builtins.property
    def use_mdriver_ego(self):
        """Message field 'use_mdriver_ego'."""
        return self._use_mdriver_ego

    @use_mdriver_ego.setter
    def use_mdriver_ego(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'use_mdriver_ego' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'use_mdriver_ego' field must be an integer in [-2147483648, 2147483647]"
        self._use_mdriver_ego = value

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
    def lane_change_task(self):
        """Message field 'lane_change_task'."""
        return self._lane_change_task

    @lane_change_task.setter
    def lane_change_task(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_change_task' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_change_task' field must be an unsigned integer in [0, 255]"
        self._lane_change_task = value

    @builtins.property
    def best_tree_id(self):
        """Message field 'best_tree_id'."""
        return self._best_tree_id

    @best_tree_id.setter
    def best_tree_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'best_tree_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'best_tree_id' field must be an integer in [-2147483648, 2147483647]"
        self._best_tree_id = value

    @builtins.property
    def mcts_trees(self):
        """Message field 'mcts_trees'."""
        return self._mcts_trees

    @mcts_trees.setter
    def mcts_trees(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import PolicyScenario
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
                 all(isinstance(v, PolicyScenario) for v in value) and
                 True), \
                "The 'mcts_trees' field must be a set or sequence and each value of type 'PolicyScenario'"
        self._mcts_trees = value

    @builtins.property
    def tagged_obstacle(self):
        """Message field 'tagged_obstacle'."""
        return self._tagged_obstacle

    @tagged_obstacle.setter
    def tagged_obstacle(self, value):
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
                "The 'tagged_obstacle' field must be a set or sequence and each value of type 'UInt2String'"
        self._tagged_obstacle = value

    @builtins.property
    def lane_bind_infos(self):
        """Message field 'lane_bind_infos'."""
        return self._lane_bind_infos

    @lane_bind_infos.setter
    def lane_bind_infos(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import LaneBindInfo
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
                 all(isinstance(v, LaneBindInfo) for v in value) and
                 True), \
                "The 'lane_bind_infos' field must be a set or sequence and each value of type 'LaneBindInfo'"
        self._lane_bind_infos = value

    @builtins.property
    def ego_sl_on_ref_lines(self):
        """Message field 'ego_sl_on_ref_lines'."""
        return self._ego_sl_on_ref_lines

    @ego_sl_on_ref_lines.setter
    def ego_sl_on_ref_lines(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import Ref2SLBoundary
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
                 all(isinstance(v, Ref2SLBoundary) for v in value) and
                 True), \
                "The 'ego_sl_on_ref_lines' field must be a set or sequence and each value of type 'Ref2SLBoundary'"
        self._ego_sl_on_ref_lines = value

    @builtins.property
    def lane_change_cancel_reason(self):
        """Message field 'lane_change_cancel_reason'."""
        return self._lane_change_cancel_reason

    @lane_change_cancel_reason.setter
    def lane_change_cancel_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_change_cancel_reason' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_change_cancel_reason' field must be an unsigned integer in [0, 255]"
        self._lane_change_cancel_reason = value

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

    @builtins.property
    def scalable_stream(self):
        """Message field 'scalable_stream'."""
        return self._scalable_stream

    @scalable_stream.setter
    def scalable_stream(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import String2UInt
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
                 all(isinstance(v, String2UInt) for v in value) and
                 True), \
                "The 'scalable_stream' field must be a set or sequence and each value of type 'String2UInt'"
        self._scalable_stream = value
