# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/Lanev2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Lanev2(type):
    """Metaclass of message 'Lanev2'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'DOTTED_YELLOW': 1,
        'DOTTED_WHITE': 2,
        'SOLID_YELLOW': 3,
        'SOLID_WHITE': 4,
        'DOUBLE_YELLOW': 5,
        'CURB': 6,
        'GUARDRAIL': 7,
        'DOUBLE_DOTTED_SOLID_YELLOW': 8,
        'DOUBLE_SOLID_DOTTED_YELLOW': 9,
        'DOUBLE_DOTTED_SOLID_WHITE': 10,
        'DOUBLE_SOLID_DOTTED_WHITE': 11,
        'STOPLINE': 12,
        'ROADEDGELANE': 13,
        'DOUBLEROADEDGELANE': 14,
        'DIVERSIONLINE': 15,
        'JUNCTION_GUIDING_LINE': 16,
        'LEFT_TURN_WAITING_ZONE': 17,
        'HERRING_PATTERN': 18,
        'SERRATED_LINE': 19,
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
                'deva_perception_msgs.msg.Lanev2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lanev2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lanev2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lanev2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lanev2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lanev2

            from deva_common_msgs.msg import Line2d
            if Line2d.__class__._TYPE_SUPPORT is None:
                Line2d.__class__.__import_type_support__()

            from deva_common_msgs.msg import Point2d
            if Point2d.__class__._TYPE_SUPPORT is None:
                Point2d.__class__.__import_type_support__()

            from deva_perception_msgs.msg import LanePropertySegment
            if LanePropertySegment.__class__._TYPE_SUPPORT is None:
                LanePropertySegment.__class__.__import_type_support__()

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
            'DOTTED_YELLOW': cls.__constants['DOTTED_YELLOW'],
            'DOTTED_WHITE': cls.__constants['DOTTED_WHITE'],
            'SOLID_YELLOW': cls.__constants['SOLID_YELLOW'],
            'SOLID_WHITE': cls.__constants['SOLID_WHITE'],
            'DOUBLE_YELLOW': cls.__constants['DOUBLE_YELLOW'],
            'CURB': cls.__constants['CURB'],
            'GUARDRAIL': cls.__constants['GUARDRAIL'],
            'DOUBLE_DOTTED_SOLID_YELLOW': cls.__constants['DOUBLE_DOTTED_SOLID_YELLOW'],
            'DOUBLE_SOLID_DOTTED_YELLOW': cls.__constants['DOUBLE_SOLID_DOTTED_YELLOW'],
            'DOUBLE_DOTTED_SOLID_WHITE': cls.__constants['DOUBLE_DOTTED_SOLID_WHITE'],
            'DOUBLE_SOLID_DOTTED_WHITE': cls.__constants['DOUBLE_SOLID_DOTTED_WHITE'],
            'STOPLINE': cls.__constants['STOPLINE'],
            'ROADEDGELANE': cls.__constants['ROADEDGELANE'],
            'DOUBLEROADEDGELANE': cls.__constants['DOUBLEROADEDGELANE'],
            'DIVERSIONLINE': cls.__constants['DIVERSIONLINE'],
            'JUNCTION_GUIDING_LINE': cls.__constants['JUNCTION_GUIDING_LINE'],
            'LEFT_TURN_WAITING_ZONE': cls.__constants['LEFT_TURN_WAITING_ZONE'],
            'HERRING_PATTERN': cls.__constants['HERRING_PATTERN'],
            'SERRATED_LINE': cls.__constants['SERRATED_LINE'],
            'NORMAL': cls.__constants['NORMAL'],
            'SPLIT': cls.__constants['SPLIT'],
            'MERGE': cls.__constants['MERGE'],
            'SPLIT_DIVERSION': cls.__constants['SPLIT_DIVERSION'],
            'MERGE_DIVERSION': cls.__constants['MERGE_DIVERSION'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_Lanev2.__constants['UNKNOWN']

    @property
    def DOTTED_YELLOW(self):
        """Message constant 'DOTTED_YELLOW'."""
        return Metaclass_Lanev2.__constants['DOTTED_YELLOW']

    @property
    def DOTTED_WHITE(self):
        """Message constant 'DOTTED_WHITE'."""
        return Metaclass_Lanev2.__constants['DOTTED_WHITE']

    @property
    def SOLID_YELLOW(self):
        """Message constant 'SOLID_YELLOW'."""
        return Metaclass_Lanev2.__constants['SOLID_YELLOW']

    @property
    def SOLID_WHITE(self):
        """Message constant 'SOLID_WHITE'."""
        return Metaclass_Lanev2.__constants['SOLID_WHITE']

    @property
    def DOUBLE_YELLOW(self):
        """Message constant 'DOUBLE_YELLOW'."""
        return Metaclass_Lanev2.__constants['DOUBLE_YELLOW']

    @property
    def CURB(self):
        """Message constant 'CURB'."""
        return Metaclass_Lanev2.__constants['CURB']

    @property
    def GUARDRAIL(self):
        """Message constant 'GUARDRAIL'."""
        return Metaclass_Lanev2.__constants['GUARDRAIL']

    @property
    def DOUBLE_DOTTED_SOLID_YELLOW(self):
        """Message constant 'DOUBLE_DOTTED_SOLID_YELLOW'."""
        return Metaclass_Lanev2.__constants['DOUBLE_DOTTED_SOLID_YELLOW']

    @property
    def DOUBLE_SOLID_DOTTED_YELLOW(self):
        """Message constant 'DOUBLE_SOLID_DOTTED_YELLOW'."""
        return Metaclass_Lanev2.__constants['DOUBLE_SOLID_DOTTED_YELLOW']

    @property
    def DOUBLE_DOTTED_SOLID_WHITE(self):
        """Message constant 'DOUBLE_DOTTED_SOLID_WHITE'."""
        return Metaclass_Lanev2.__constants['DOUBLE_DOTTED_SOLID_WHITE']

    @property
    def DOUBLE_SOLID_DOTTED_WHITE(self):
        """Message constant 'DOUBLE_SOLID_DOTTED_WHITE'."""
        return Metaclass_Lanev2.__constants['DOUBLE_SOLID_DOTTED_WHITE']

    @property
    def STOPLINE(self):
        """Message constant 'STOPLINE'."""
        return Metaclass_Lanev2.__constants['STOPLINE']

    @property
    def ROADEDGELANE(self):
        """Message constant 'ROADEDGELANE'."""
        return Metaclass_Lanev2.__constants['ROADEDGELANE']

    @property
    def DOUBLEROADEDGELANE(self):
        """Message constant 'DOUBLEROADEDGELANE'."""
        return Metaclass_Lanev2.__constants['DOUBLEROADEDGELANE']

    @property
    def DIVERSIONLINE(self):
        """Message constant 'DIVERSIONLINE'."""
        return Metaclass_Lanev2.__constants['DIVERSIONLINE']

    @property
    def JUNCTION_GUIDING_LINE(self):
        """Message constant 'JUNCTION_GUIDING_LINE'."""
        return Metaclass_Lanev2.__constants['JUNCTION_GUIDING_LINE']

    @property
    def LEFT_TURN_WAITING_ZONE(self):
        """Message constant 'LEFT_TURN_WAITING_ZONE'."""
        return Metaclass_Lanev2.__constants['LEFT_TURN_WAITING_ZONE']

    @property
    def HERRING_PATTERN(self):
        """Message constant 'HERRING_PATTERN'."""
        return Metaclass_Lanev2.__constants['HERRING_PATTERN']

    @property
    def SERRATED_LINE(self):
        """Message constant 'SERRATED_LINE'."""
        return Metaclass_Lanev2.__constants['SERRATED_LINE']

    @property
    def NORMAL(self):
        """Message constant 'NORMAL'."""
        return Metaclass_Lanev2.__constants['NORMAL']

    @property
    def SPLIT(self):
        """Message constant 'SPLIT'."""
        return Metaclass_Lanev2.__constants['SPLIT']

    @property
    def MERGE(self):
        """Message constant 'MERGE'."""
        return Metaclass_Lanev2.__constants['MERGE']

    @property
    def SPLIT_DIVERSION(self):
        """Message constant 'SPLIT_DIVERSION'."""
        return Metaclass_Lanev2.__constants['SPLIT_DIVERSION']

    @property
    def MERGE_DIVERSION(self):
        """Message constant 'MERGE_DIVERSION'."""
        return Metaclass_Lanev2.__constants['MERGE_DIVERSION']


class Lanev2(metaclass=Metaclass_Lanev2):
    """
    Message class 'Lanev2'.

    Constants:
      UNKNOWN
      DOTTED_YELLOW
      DOTTED_WHITE
      SOLID_YELLOW
      SOLID_WHITE
      DOUBLE_YELLOW
      CURB
      GUARDRAIL
      DOUBLE_DOTTED_SOLID_YELLOW
      DOUBLE_SOLID_DOTTED_YELLOW
      DOUBLE_DOTTED_SOLID_WHITE
      DOUBLE_SOLID_DOTTED_WHITE
      STOPLINE
      ROADEDGELANE
      DOUBLEROADEDGELANE
      DIVERSIONLINE
      JUNCTION_GUIDING_LINE
      LEFT_TURN_WAITING_ZONE
      HERRING_PATTERN
      SERRATED_LINE
      NORMAL
      SPLIT
      MERGE
      SPLIT_DIVERSION
      MERGE_DIVERSION
    """

    __slots__ = [
        '_confidence',
        '_lane_id',
        '_left_lane_id',
        '_right_lane_id',
        '_fork_lane_id',
        '_imagepoints',
        '_v_min',
        '_v_max',
        '_waypoints',
        '_x_min',
        '_x_max',
        '_waypoints_extend',
        '_x_min_extend',
        '_x_max_extend',
        '_lane_property',
        '_lane_property_segment',
        '_fork_property',
        '_rv_fork_point',
        '_bev_fork_point',
        '_lane_xy',
        '_lane_xz',
    ]

    _fields_and_field_types = {
        'confidence': 'double',
        'lane_id': 'uint32',
        'left_lane_id': 'uint32',
        'right_lane_id': 'uint32',
        'fork_lane_id': 'uint32',
        'imagepoints': 'sequence<deva_common_msgs/Point2d>',
        'v_min': 'uint32',
        'v_max': 'uint32',
        'waypoints': 'sequence<geometry_msgs/Point>',
        'x_min': 'double',
        'x_max': 'double',
        'waypoints_extend': 'sequence<geometry_msgs/Point>',
        'x_min_extend': 'double',
        'x_max_extend': 'double',
        'lane_property': 'uint8',
        'lane_property_segment': 'deva_perception_msgs/LanePropertySegment',
        'fork_property': 'uint8',
        'rv_fork_point': 'deva_common_msgs/Point2d',
        'bev_fork_point': 'geometry_msgs/Point',
        'lane_xy': 'deva_common_msgs/Line2d',
        'lane_xz': 'deva_common_msgs/Line2d',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Point2d')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'LanePropertySegment'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Point2d'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Line2d'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Line2d'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.confidence = kwargs.get('confidence', float())
        self.lane_id = kwargs.get('lane_id', int())
        self.left_lane_id = kwargs.get('left_lane_id', int())
        self.right_lane_id = kwargs.get('right_lane_id', int())
        self.fork_lane_id = kwargs.get('fork_lane_id', int())
        self.imagepoints = kwargs.get('imagepoints', [])
        self.v_min = kwargs.get('v_min', int())
        self.v_max = kwargs.get('v_max', int())
        self.waypoints = kwargs.get('waypoints', [])
        self.x_min = kwargs.get('x_min', float())
        self.x_max = kwargs.get('x_max', float())
        self.waypoints_extend = kwargs.get('waypoints_extend', [])
        self.x_min_extend = kwargs.get('x_min_extend', float())
        self.x_max_extend = kwargs.get('x_max_extend', float())
        self.lane_property = kwargs.get('lane_property', int())
        from deva_perception_msgs.msg import LanePropertySegment
        self.lane_property_segment = kwargs.get('lane_property_segment', LanePropertySegment())
        self.fork_property = kwargs.get('fork_property', int())
        from deva_common_msgs.msg import Point2d
        self.rv_fork_point = kwargs.get('rv_fork_point', Point2d())
        from geometry_msgs.msg import Point
        self.bev_fork_point = kwargs.get('bev_fork_point', Point())
        from deva_common_msgs.msg import Line2d
        self.lane_xy = kwargs.get('lane_xy', Line2d())
        from deva_common_msgs.msg import Line2d
        self.lane_xz = kwargs.get('lane_xz', Line2d())

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
        if self.confidence != other.confidence:
            return False
        if self.lane_id != other.lane_id:
            return False
        if self.left_lane_id != other.left_lane_id:
            return False
        if self.right_lane_id != other.right_lane_id:
            return False
        if self.fork_lane_id != other.fork_lane_id:
            return False
        if self.imagepoints != other.imagepoints:
            return False
        if self.v_min != other.v_min:
            return False
        if self.v_max != other.v_max:
            return False
        if self.waypoints != other.waypoints:
            return False
        if self.x_min != other.x_min:
            return False
        if self.x_max != other.x_max:
            return False
        if self.waypoints_extend != other.waypoints_extend:
            return False
        if self.x_min_extend != other.x_min_extend:
            return False
        if self.x_max_extend != other.x_max_extend:
            return False
        if self.lane_property != other.lane_property:
            return False
        if self.lane_property_segment != other.lane_property_segment:
            return False
        if self.fork_property != other.fork_property:
            return False
        if self.rv_fork_point != other.rv_fork_point:
            return False
        if self.bev_fork_point != other.bev_fork_point:
            return False
        if self.lane_xy != other.lane_xy:
            return False
        if self.lane_xz != other.lane_xz:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'confidence' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._confidence = value

    @builtins.property
    def lane_id(self):
        """Message field 'lane_id'."""
        return self._lane_id

    @lane_id.setter
    def lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_id' field must be an unsigned integer in [0, 4294967295]"
        self._lane_id = value

    @builtins.property
    def left_lane_id(self):
        """Message field 'left_lane_id'."""
        return self._left_lane_id

    @left_lane_id.setter
    def left_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_lane_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'left_lane_id' field must be an unsigned integer in [0, 4294967295]"
        self._left_lane_id = value

    @builtins.property
    def right_lane_id(self):
        """Message field 'right_lane_id'."""
        return self._right_lane_id

    @right_lane_id.setter
    def right_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_lane_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'right_lane_id' field must be an unsigned integer in [0, 4294967295]"
        self._right_lane_id = value

    @builtins.property
    def fork_lane_id(self):
        """Message field 'fork_lane_id'."""
        return self._fork_lane_id

    @fork_lane_id.setter
    def fork_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fork_lane_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'fork_lane_id' field must be an unsigned integer in [0, 4294967295]"
        self._fork_lane_id = value

    @builtins.property
    def imagepoints(self):
        """Message field 'imagepoints'."""
        return self._imagepoints

    @imagepoints.setter
    def imagepoints(self, value):
        if __debug__:
            from deva_common_msgs.msg import Point2d
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
                 all(isinstance(v, Point2d) for v in value) and
                 True), \
                "The 'imagepoints' field must be a set or sequence and each value of type 'Point2d'"
        self._imagepoints = value

    @builtins.property
    def v_min(self):
        """Message field 'v_min'."""
        return self._v_min

    @v_min.setter
    def v_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'v_min' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'v_min' field must be an unsigned integer in [0, 4294967295]"
        self._v_min = value

    @builtins.property
    def v_max(self):
        """Message field 'v_max'."""
        return self._v_max

    @v_max.setter
    def v_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'v_max' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'v_max' field must be an unsigned integer in [0, 4294967295]"
        self._v_max = value

    @builtins.property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
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
                "The 'waypoints' field must be a set or sequence and each value of type 'Point'"
        self._waypoints = value

    @builtins.property
    def x_min(self):
        """Message field 'x_min'."""
        return self._x_min

    @x_min.setter
    def x_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_min = value

    @builtins.property
    def x_max(self):
        """Message field 'x_max'."""
        return self._x_max

    @x_max.setter
    def x_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_max = value

    @builtins.property
    def waypoints_extend(self):
        """Message field 'waypoints_extend'."""
        return self._waypoints_extend

    @waypoints_extend.setter
    def waypoints_extend(self, value):
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
                "The 'waypoints_extend' field must be a set or sequence and each value of type 'Point'"
        self._waypoints_extend = value

    @builtins.property
    def x_min_extend(self):
        """Message field 'x_min_extend'."""
        return self._x_min_extend

    @x_min_extend.setter
    def x_min_extend(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_min_extend' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_min_extend' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_min_extend = value

    @builtins.property
    def x_max_extend(self):
        """Message field 'x_max_extend'."""
        return self._x_max_extend

    @x_max_extend.setter
    def x_max_extend(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_max_extend' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_max_extend' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_max_extend = value

    @builtins.property
    def lane_property(self):
        """Message field 'lane_property'."""
        return self._lane_property

    @lane_property.setter
    def lane_property(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_property' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_property' field must be an unsigned integer in [0, 255]"
        self._lane_property = value

    @builtins.property
    def lane_property_segment(self):
        """Message field 'lane_property_segment'."""
        return self._lane_property_segment

    @lane_property_segment.setter
    def lane_property_segment(self, value):
        if __debug__:
            from deva_perception_msgs.msg import LanePropertySegment
            assert \
                isinstance(value, LanePropertySegment), \
                "The 'lane_property_segment' field must be a sub message of type 'LanePropertySegment'"
        self._lane_property_segment = value

    @builtins.property
    def fork_property(self):
        """Message field 'fork_property'."""
        return self._fork_property

    @fork_property.setter
    def fork_property(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fork_property' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fork_property' field must be an unsigned integer in [0, 255]"
        self._fork_property = value

    @builtins.property
    def rv_fork_point(self):
        """Message field 'rv_fork_point'."""
        return self._rv_fork_point

    @rv_fork_point.setter
    def rv_fork_point(self, value):
        if __debug__:
            from deva_common_msgs.msg import Point2d
            assert \
                isinstance(value, Point2d), \
                "The 'rv_fork_point' field must be a sub message of type 'Point2d'"
        self._rv_fork_point = value

    @builtins.property
    def bev_fork_point(self):
        """Message field 'bev_fork_point'."""
        return self._bev_fork_point

    @bev_fork_point.setter
    def bev_fork_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'bev_fork_point' field must be a sub message of type 'Point'"
        self._bev_fork_point = value

    @builtins.property
    def lane_xy(self):
        """Message field 'lane_xy'."""
        return self._lane_xy

    @lane_xy.setter
    def lane_xy(self, value):
        if __debug__:
            from deva_common_msgs.msg import Line2d
            assert \
                isinstance(value, Line2d), \
                "The 'lane_xy' field must be a sub message of type 'Line2d'"
        self._lane_xy = value

    @builtins.property
    def lane_xz(self):
        """Message field 'lane_xz'."""
        return self._lane_xz

    @lane_xz.setter
    def lane_xz(self, value):
        if __debug__:
            from deva_common_msgs.msg import Line2d
            assert \
                isinstance(value, Line2d), \
                "The 'lane_xz' field must be a sub message of type 'Line2d'"
        self._lane_xz = value
