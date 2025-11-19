# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs:msg/StateContext.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'cipv_obstacle_id'
# Member 'nudge_obstacle_id'
# Member 'cutin_follow_obstacle_id'
# Member 'cutin_overtake_obstacle_id'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

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
        'MAP_NULL': 0,
        'ACC': 1,
        'ICC': 2,
        'NOA': 3,
        'ROUTING_NULL': 0,
        'INCREASED_ROAD': 1,
        'LANE': 2,
        'OSM': 3,
        'ROAD': 4,
        'SDK_NAVI': 5,
        'SDK_CRUISE': 6,
        'WEB': 7,
        'NONE': 0,
        'TURN_LEVER': 1,
        'OVERTAKE': 2,
        'NAVIGATION': 3,
        'OBSTACLE': 4,
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
                'deva_planning_msgs.msg.StateContext')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state_context
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state_context
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state_context
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state_context
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state_context

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
            'MAP_NULL': cls.__constants['MAP_NULL'],
            'ACC': cls.__constants['ACC'],
            'ICC': cls.__constants['ICC'],
            'NOA': cls.__constants['NOA'],
            'ROUTING_NULL': cls.__constants['ROUTING_NULL'],
            'INCREASED_ROAD': cls.__constants['INCREASED_ROAD'],
            'LANE': cls.__constants['LANE'],
            'OSM': cls.__constants['OSM'],
            'ROAD': cls.__constants['ROAD'],
            'SDK_NAVI': cls.__constants['SDK_NAVI'],
            'SDK_CRUISE': cls.__constants['SDK_CRUISE'],
            'WEB': cls.__constants['WEB'],
            'NONE': cls.__constants['NONE'],
            'TURN_LEVER': cls.__constants['TURN_LEVER'],
            'OVERTAKE': cls.__constants['OVERTAKE'],
            'NAVIGATION': cls.__constants['NAVIGATION'],
            'OBSTACLE': cls.__constants['OBSTACLE'],
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
    def MAP_NULL(self):
        """Message constant 'MAP_NULL'."""
        return Metaclass_StateContext.__constants['MAP_NULL']

    @property
    def ACC(self):
        """Message constant 'ACC'."""
        return Metaclass_StateContext.__constants['ACC']

    @property
    def ICC(self):
        """Message constant 'ICC'."""
        return Metaclass_StateContext.__constants['ICC']

    @property
    def NOA(self):
        """Message constant 'NOA'."""
        return Metaclass_StateContext.__constants['NOA']

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
      MAP_NULL
      ACC
      ICC
      NOA
      ROUTING_NULL
      INCREASED_ROAD
      LANE
      OSM
      ROAD
      SDK_NAVI
      SDK_CRUISE
      WEB
      NONE
      TURN_LEVER
      OVERTAKE
      NAVIGATION
      OBSTACLE
    """

    __slots__ = [
        '_header',
        '_behavior_type',
        '_navi_map_mode',
        '_routing_mode',
        '_target_lane_seq_score',
        '_state_score',
        '_score',
        '_use_mdriver_ego',
        '_target_line_id',
        '_current_line_id',
        '_gap_id',
        '_gap_line_id',
        '_start_s',
        '_end_s',
        '_length',
        '_future_length',
        '_front_obstacle_id',
        '_rear_obstacle_id',
        '_cipv_obstacle_id',
        '_nudge_obstacle_id',
        '_cutin_follow_obstacle_id',
        '_cutin_overtake_obstacle_id',
        '_lane_change_task',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'behavior_type': 'uint8',
        'navi_map_mode': 'uint8',
        'routing_mode': 'uint8',
        'target_lane_seq_score': 'double',
        'state_score': 'double',
        'score': 'double',
        'use_mdriver_ego': 'int32',
        'target_line_id': 'int32',
        'current_line_id': 'int32',
        'gap_id': 'int32',
        'gap_line_id': 'int32',
        'start_s': 'double',
        'end_s': 'double',
        'length': 'double',
        'future_length': 'double',
        'front_obstacle_id': 'string',
        'rear_obstacle_id': 'string',
        'cipv_obstacle_id': 'sequence<uint32>',
        'nudge_obstacle_id': 'sequence<uint32>',
        'cutin_follow_obstacle_id': 'sequence<uint32>',
        'cutin_overtake_obstacle_id': 'sequence<uint32>',
        'lane_change_task': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.behavior_type = kwargs.get('behavior_type', int())
        self.navi_map_mode = kwargs.get('navi_map_mode', int())
        self.routing_mode = kwargs.get('routing_mode', int())
        self.target_lane_seq_score = kwargs.get('target_lane_seq_score', float())
        self.state_score = kwargs.get('state_score', float())
        self.score = kwargs.get('score', float())
        self.use_mdriver_ego = kwargs.get('use_mdriver_ego', int())
        self.target_line_id = kwargs.get('target_line_id', int())
        self.current_line_id = kwargs.get('current_line_id', int())
        self.gap_id = kwargs.get('gap_id', int())
        self.gap_line_id = kwargs.get('gap_line_id', int())
        self.start_s = kwargs.get('start_s', float())
        self.end_s = kwargs.get('end_s', float())
        self.length = kwargs.get('length', float())
        self.future_length = kwargs.get('future_length', float())
        self.front_obstacle_id = kwargs.get('front_obstacle_id', str())
        self.rear_obstacle_id = kwargs.get('rear_obstacle_id', str())
        self.cipv_obstacle_id = array.array('I', kwargs.get('cipv_obstacle_id', []))
        self.nudge_obstacle_id = array.array('I', kwargs.get('nudge_obstacle_id', []))
        self.cutin_follow_obstacle_id = array.array('I', kwargs.get('cutin_follow_obstacle_id', []))
        self.cutin_overtake_obstacle_id = array.array('I', kwargs.get('cutin_overtake_obstacle_id', []))
        self.lane_change_task = kwargs.get('lane_change_task', int())

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
        if self.navi_map_mode != other.navi_map_mode:
            return False
        if self.routing_mode != other.routing_mode:
            return False
        if self.target_lane_seq_score != other.target_lane_seq_score:
            return False
        if self.state_score != other.state_score:
            return False
        if self.score != other.score:
            return False
        if self.use_mdriver_ego != other.use_mdriver_ego:
            return False
        if self.target_line_id != other.target_line_id:
            return False
        if self.current_line_id != other.current_line_id:
            return False
        if self.gap_id != other.gap_id:
            return False
        if self.gap_line_id != other.gap_line_id:
            return False
        if self.start_s != other.start_s:
            return False
        if self.end_s != other.end_s:
            return False
        if self.length != other.length:
            return False
        if self.future_length != other.future_length:
            return False
        if self.front_obstacle_id != other.front_obstacle_id:
            return False
        if self.rear_obstacle_id != other.rear_obstacle_id:
            return False
        if self.cipv_obstacle_id != other.cipv_obstacle_id:
            return False
        if self.nudge_obstacle_id != other.nudge_obstacle_id:
            return False
        if self.cutin_follow_obstacle_id != other.cutin_follow_obstacle_id:
            return False
        if self.cutin_overtake_obstacle_id != other.cutin_overtake_obstacle_id:
            return False
        if self.lane_change_task != other.lane_change_task:
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
    def navi_map_mode(self):
        """Message field 'navi_map_mode'."""
        return self._navi_map_mode

    @navi_map_mode.setter
    def navi_map_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'navi_map_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'navi_map_mode' field must be an unsigned integer in [0, 255]"
        self._navi_map_mode = value

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
    def target_lane_seq_score(self):
        """Message field 'target_lane_seq_score'."""
        return self._target_lane_seq_score

    @target_lane_seq_score.setter
    def target_lane_seq_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_lane_seq_score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_lane_seq_score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_lane_seq_score = value

    @builtins.property
    def state_score(self):
        """Message field 'state_score'."""
        return self._state_score

    @state_score.setter
    def state_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'state_score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'state_score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._state_score = value

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
    def gap_id(self):
        """Message field 'gap_id'."""
        return self._gap_id

    @gap_id.setter
    def gap_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gap_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gap_id' field must be an integer in [-2147483648, 2147483647]"
        self._gap_id = value

    @builtins.property
    def gap_line_id(self):
        """Message field 'gap_line_id'."""
        return self._gap_line_id

    @gap_line_id.setter
    def gap_line_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gap_line_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gap_line_id' field must be an integer in [-2147483648, 2147483647]"
        self._gap_line_id = value

    @builtins.property
    def start_s(self):
        """Message field 'start_s'."""
        return self._start_s

    @start_s.setter
    def start_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'start_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'start_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._start_s = value

    @builtins.property
    def end_s(self):
        """Message field 'end_s'."""
        return self._end_s

    @end_s.setter
    def end_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'end_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._end_s = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._length = value

    @builtins.property
    def future_length(self):
        """Message field 'future_length'."""
        return self._future_length

    @future_length.setter
    def future_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'future_length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'future_length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._future_length = value

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
    def cipv_obstacle_id(self):
        """Message field 'cipv_obstacle_id'."""
        return self._cipv_obstacle_id

    @cipv_obstacle_id.setter
    def cipv_obstacle_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'cipv_obstacle_id' array.array() must have the type code of 'I'"
            self._cipv_obstacle_id = value
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
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'cipv_obstacle_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._cipv_obstacle_id = array.array('I', value)

    @builtins.property
    def nudge_obstacle_id(self):
        """Message field 'nudge_obstacle_id'."""
        return self._nudge_obstacle_id

    @nudge_obstacle_id.setter
    def nudge_obstacle_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'nudge_obstacle_id' array.array() must have the type code of 'I'"
            self._nudge_obstacle_id = value
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
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'nudge_obstacle_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._nudge_obstacle_id = array.array('I', value)

    @builtins.property
    def cutin_follow_obstacle_id(self):
        """Message field 'cutin_follow_obstacle_id'."""
        return self._cutin_follow_obstacle_id

    @cutin_follow_obstacle_id.setter
    def cutin_follow_obstacle_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'cutin_follow_obstacle_id' array.array() must have the type code of 'I'"
            self._cutin_follow_obstacle_id = value
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
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'cutin_follow_obstacle_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._cutin_follow_obstacle_id = array.array('I', value)

    @builtins.property
    def cutin_overtake_obstacle_id(self):
        """Message field 'cutin_overtake_obstacle_id'."""
        return self._cutin_overtake_obstacle_id

    @cutin_overtake_obstacle_id.setter
    def cutin_overtake_obstacle_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'cutin_overtake_obstacle_id' array.array() must have the type code of 'I'"
            self._cutin_overtake_obstacle_id = value
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
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'cutin_overtake_obstacle_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._cutin_overtake_obstacle_id = array.array('I', value)

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
