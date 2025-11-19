# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/USTBoundary.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_USTBoundary(type):
    """Metaclass of message 'USTBoundary'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'STATIC_BOUNDARY': 1,
        'CURB': 2,
        'GUARDRAIL': 3,
        'WALLEDGE': 4,
        'CONE_LINE': 5,
        'STOP_LINE': 6,
        'LINE_SEGMENT': 0,
        'EQUATION_CURVE': 1,
        'DISPERSE_CURVE': 2,
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
                'deva_perception_msgs.msg.USTBoundary')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ust_boundary
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ust_boundary
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ust_boundary
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ust_boundary
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ust_boundary

            from deva_perception_msgs.msg import EdgeDisperseCurve
            if EdgeDisperseCurve.__class__._TYPE_SUPPORT is None:
                EdgeDisperseCurve.__class__.__import_type_support__()

            from deva_perception_msgs.msg import EdgeEquationCurve
            if EdgeEquationCurve.__class__._TYPE_SUPPORT is None:
                EdgeEquationCurve.__class__.__import_type_support__()

            from deva_perception_msgs.msg import EdgeLineSegment
            if EdgeLineSegment.__class__._TYPE_SUPPORT is None:
                EdgeLineSegment.__class__.__import_type_support__()

            from deva_perception_msgs.msg import WayLink
            if WayLink.__class__._TYPE_SUPPORT is None:
                WayLink.__class__.__import_type_support__()

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
            'STATIC_BOUNDARY': cls.__constants['STATIC_BOUNDARY'],
            'CURB': cls.__constants['CURB'],
            'GUARDRAIL': cls.__constants['GUARDRAIL'],
            'WALLEDGE': cls.__constants['WALLEDGE'],
            'CONE_LINE': cls.__constants['CONE_LINE'],
            'STOP_LINE': cls.__constants['STOP_LINE'],
            'LINE_SEGMENT': cls.__constants['LINE_SEGMENT'],
            'EQUATION_CURVE': cls.__constants['EQUATION_CURVE'],
            'DISPERSE_CURVE': cls.__constants['DISPERSE_CURVE'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_USTBoundary.__constants['UNKNOWN']

    @property
    def STATIC_BOUNDARY(self):
        """Message constant 'STATIC_BOUNDARY'."""
        return Metaclass_USTBoundary.__constants['STATIC_BOUNDARY']

    @property
    def CURB(self):
        """Message constant 'CURB'."""
        return Metaclass_USTBoundary.__constants['CURB']

    @property
    def GUARDRAIL(self):
        """Message constant 'GUARDRAIL'."""
        return Metaclass_USTBoundary.__constants['GUARDRAIL']

    @property
    def WALLEDGE(self):
        """Message constant 'WALLEDGE'."""
        return Metaclass_USTBoundary.__constants['WALLEDGE']

    @property
    def CONE_LINE(self):
        """Message constant 'CONE_LINE'."""
        return Metaclass_USTBoundary.__constants['CONE_LINE']

    @property
    def STOP_LINE(self):
        """Message constant 'STOP_LINE'."""
        return Metaclass_USTBoundary.__constants['STOP_LINE']

    @property
    def LINE_SEGMENT(self):
        """Message constant 'LINE_SEGMENT'."""
        return Metaclass_USTBoundary.__constants['LINE_SEGMENT']

    @property
    def EQUATION_CURVE(self):
        """Message constant 'EQUATION_CURVE'."""
        return Metaclass_USTBoundary.__constants['EQUATION_CURVE']

    @property
    def DISPERSE_CURVE(self):
        """Message constant 'DISPERSE_CURVE'."""
        return Metaclass_USTBoundary.__constants['DISPERSE_CURVE']


class USTBoundary(metaclass=Metaclass_USTBoundary):
    """
    Message class 'USTBoundary'.

    Constants:
      UNKNOWN
      STATIC_BOUNDARY
      CURB
      GUARDRAIL
      WALLEDGE
      CONE_LINE
      STOP_LINE
      LINE_SEGMENT
      EQUATION_CURVE
      DISPERSE_CURVE
    """

    __slots__ = [
        '_id',
        '_type',
        '_segment_type',
        '_line_segments',
        '_equation_curves',
        '_disperse_curves',
        '_corner_points',
        '_waylink',
        '_is_stable_tracked',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'type': 'uint8',
        'segment_type': 'uint8',
        'line_segments': 'sequence<deva_perception_msgs/EdgeLineSegment>',
        'equation_curves': 'sequence<deva_perception_msgs/EdgeEquationCurve>',
        'disperse_curves': 'sequence<deva_perception_msgs/EdgeDisperseCurve>',
        'corner_points': 'sequence<geometry_msgs/Point>',
        'waylink': 'deva_perception_msgs/WayLink',
        'is_stable_tracked': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'EdgeLineSegment')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'EdgeEquationCurve')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'EdgeDisperseCurve')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'WayLink'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.type = kwargs.get('type', int())
        self.segment_type = kwargs.get('segment_type', int())
        self.line_segments = kwargs.get('line_segments', [])
        self.equation_curves = kwargs.get('equation_curves', [])
        self.disperse_curves = kwargs.get('disperse_curves', [])
        self.corner_points = kwargs.get('corner_points', [])
        from deva_perception_msgs.msg import WayLink
        self.waylink = kwargs.get('waylink', WayLink())
        self.is_stable_tracked = kwargs.get('is_stable_tracked', bool())

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
        if self.type != other.type:
            return False
        if self.segment_type != other.segment_type:
            return False
        if self.line_segments != other.line_segments:
            return False
        if self.equation_curves != other.equation_curves:
            return False
        if self.disperse_curves != other.disperse_curves:
            return False
        if self.corner_points != other.corner_points:
            return False
        if self.waylink != other.waylink:
            return False
        if self.is_stable_tracked != other.is_stable_tracked:
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
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def segment_type(self):
        """Message field 'segment_type'."""
        return self._segment_type

    @segment_type.setter
    def segment_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'segment_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'segment_type' field must be an unsigned integer in [0, 255]"
        self._segment_type = value

    @builtins.property
    def line_segments(self):
        """Message field 'line_segments'."""
        return self._line_segments

    @line_segments.setter
    def line_segments(self, value):
        if __debug__:
            from deva_perception_msgs.msg import EdgeLineSegment
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
                 all(isinstance(v, EdgeLineSegment) for v in value) and
                 True), \
                "The 'line_segments' field must be a set or sequence and each value of type 'EdgeLineSegment'"
        self._line_segments = value

    @builtins.property
    def equation_curves(self):
        """Message field 'equation_curves'."""
        return self._equation_curves

    @equation_curves.setter
    def equation_curves(self, value):
        if __debug__:
            from deva_perception_msgs.msg import EdgeEquationCurve
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
                 all(isinstance(v, EdgeEquationCurve) for v in value) and
                 True), \
                "The 'equation_curves' field must be a set or sequence and each value of type 'EdgeEquationCurve'"
        self._equation_curves = value

    @builtins.property
    def disperse_curves(self):
        """Message field 'disperse_curves'."""
        return self._disperse_curves

    @disperse_curves.setter
    def disperse_curves(self, value):
        if __debug__:
            from deva_perception_msgs.msg import EdgeDisperseCurve
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
                 all(isinstance(v, EdgeDisperseCurve) for v in value) and
                 True), \
                "The 'disperse_curves' field must be a set or sequence and each value of type 'EdgeDisperseCurve'"
        self._disperse_curves = value

    @builtins.property
    def corner_points(self):
        """Message field 'corner_points'."""
        return self._corner_points

    @corner_points.setter
    def corner_points(self, value):
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
                "The 'corner_points' field must be a set or sequence and each value of type 'Point'"
        self._corner_points = value

    @builtins.property
    def waylink(self):
        """Message field 'waylink'."""
        return self._waylink

    @waylink.setter
    def waylink(self, value):
        if __debug__:
            from deva_perception_msgs.msg import WayLink
            assert \
                isinstance(value, WayLink), \
                "The 'waylink' field must be a sub message of type 'WayLink'"
        self._waylink = value

    @builtins.property
    def is_stable_tracked(self):
        """Message field 'is_stable_tracked'."""
        return self._is_stable_tracked

    @is_stable_tracked.setter
    def is_stable_tracked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_stable_tracked' field must be of type 'bool'"
        self._is_stable_tracked = value
