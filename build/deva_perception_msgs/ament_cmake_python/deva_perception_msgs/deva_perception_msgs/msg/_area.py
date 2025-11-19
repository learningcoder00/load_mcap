# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/Area.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Area(type):
    """Metaclass of message 'Area'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'CROSSWALK': 1,
        'JUNCTION': 2,
        'VERTICAL_SLOT': 3,
        'SIDE_SLOT': 4,
        'SLANTED_SLOT': 5,
        'ULTRASONIC_VERTICAL_SLOT': 6,
        'ULTRASONIC_SIDE_SLOT': 7,
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
                'deva_perception_msgs.msg.Area')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__area
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__area
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__area
            cls._TYPE_SUPPORT = module.type_support_msg__msg__area
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__area

            from deva_common_msgs.msg import Point2d
            if Point2d.__class__._TYPE_SUPPORT is None:
                Point2d.__class__.__import_type_support__()

            from deva_localization_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from deva_perception_msgs.msg import EdgeDisperseCurve
            if EdgeDisperseCurve.__class__._TYPE_SUPPORT is None:
                EdgeDisperseCurve.__class__.__import_type_support__()

            from deva_perception_msgs.msg import EdgeEquationCurve
            if EdgeEquationCurve.__class__._TYPE_SUPPORT is None:
                EdgeEquationCurve.__class__.__import_type_support__()

            from deva_perception_msgs.msg import EdgeLineSegment
            if EdgeLineSegment.__class__._TYPE_SUPPORT is None:
                EdgeLineSegment.__class__.__import_type_support__()

            from deva_perception_msgs.msg import StaticObstacle
            if StaticObstacle.__class__._TYPE_SUPPORT is None:
                StaticObstacle.__class__.__import_type_support__()

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
            'CROSSWALK': cls.__constants['CROSSWALK'],
            'JUNCTION': cls.__constants['JUNCTION'],
            'VERTICAL_SLOT': cls.__constants['VERTICAL_SLOT'],
            'SIDE_SLOT': cls.__constants['SIDE_SLOT'],
            'SLANTED_SLOT': cls.__constants['SLANTED_SLOT'],
            'ULTRASONIC_VERTICAL_SLOT': cls.__constants['ULTRASONIC_VERTICAL_SLOT'],
            'ULTRASONIC_SIDE_SLOT': cls.__constants['ULTRASONIC_SIDE_SLOT'],
            'LINE_SEGMENT': cls.__constants['LINE_SEGMENT'],
            'EQUATION_CURVE': cls.__constants['EQUATION_CURVE'],
            'DISPERSE_CURVE': cls.__constants['DISPERSE_CURVE'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_Area.__constants['UNKNOWN']

    @property
    def CROSSWALK(self):
        """Message constant 'CROSSWALK'."""
        return Metaclass_Area.__constants['CROSSWALK']

    @property
    def JUNCTION(self):
        """Message constant 'JUNCTION'."""
        return Metaclass_Area.__constants['JUNCTION']

    @property
    def VERTICAL_SLOT(self):
        """Message constant 'VERTICAL_SLOT'."""
        return Metaclass_Area.__constants['VERTICAL_SLOT']

    @property
    def SIDE_SLOT(self):
        """Message constant 'SIDE_SLOT'."""
        return Metaclass_Area.__constants['SIDE_SLOT']

    @property
    def SLANTED_SLOT(self):
        """Message constant 'SLANTED_SLOT'."""
        return Metaclass_Area.__constants['SLANTED_SLOT']

    @property
    def ULTRASONIC_VERTICAL_SLOT(self):
        """Message constant 'ULTRASONIC_VERTICAL_SLOT'."""
        return Metaclass_Area.__constants['ULTRASONIC_VERTICAL_SLOT']

    @property
    def ULTRASONIC_SIDE_SLOT(self):
        """Message constant 'ULTRASONIC_SIDE_SLOT'."""
        return Metaclass_Area.__constants['ULTRASONIC_SIDE_SLOT']

    @property
    def LINE_SEGMENT(self):
        """Message constant 'LINE_SEGMENT'."""
        return Metaclass_Area.__constants['LINE_SEGMENT']

    @property
    def EQUATION_CURVE(self):
        """Message constant 'EQUATION_CURVE'."""
        return Metaclass_Area.__constants['EQUATION_CURVE']

    @property
    def DISPERSE_CURVE(self):
        """Message constant 'DISPERSE_CURVE'."""
        return Metaclass_Area.__constants['DISPERSE_CURVE']


class Area(metaclass=Metaclass_Area):
    """
    Message class 'Area'.

    Constants:
      UNKNOWN
      CROSSWALK
      JUNCTION
      VERTICAL_SLOT
      SIDE_SLOT
      SLANTED_SLOT
      ULTRASONIC_VERTICAL_SLOT
      ULTRASONIC_SIDE_SLOT
      LINE_SEGMENT
      EQUATION_CURVE
      DISPERSE_CURVE
    """

    __slots__ = [
        '_id',
        '_type',
        '_dims',
        '_pose',
        '_segment_type',
        '_line_segments',
        '_equation_curves',
        '_disperse_curves',
        '_corner_points',
        '_direction_pixcoord',
        '_confidence',
        '_depth_carcoord',
        '_is_occupied',
        '_is_stable_tracked',
        '_occupied_confidence',
        '_static_obstacles',
        '_pixel_points',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'type': 'uint8',
        'dims': 'geometry_msgs/Point',
        'pose': 'deva_localization_msgs/Pose',
        'segment_type': 'uint8',
        'line_segments': 'sequence<deva_perception_msgs/EdgeLineSegment>',
        'equation_curves': 'sequence<deva_perception_msgs/EdgeEquationCurve>',
        'disperse_curves': 'sequence<deva_perception_msgs/EdgeDisperseCurve>',
        'corner_points': 'sequence<geometry_msgs/Point>',
        'direction_pixcoord': 'deva_common_msgs/Point2d',
        'confidence': 'float',
        'depth_carcoord': 'float',
        'is_occupied': 'boolean',
        'is_stable_tracked': 'boolean',
        'occupied_confidence': 'float',
        'static_obstacles': 'sequence<deva_perception_msgs/StaticObstacle>',
        'pixel_points': 'sequence<deva_common_msgs/Point2d>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_localization_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'EdgeLineSegment')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'EdgeEquationCurve')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'EdgeDisperseCurve')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Point2d'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'StaticObstacle')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Point2d')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.type = kwargs.get('type', int())
        from geometry_msgs.msg import Point
        self.dims = kwargs.get('dims', Point())
        from deva_localization_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.segment_type = kwargs.get('segment_type', int())
        self.line_segments = kwargs.get('line_segments', [])
        self.equation_curves = kwargs.get('equation_curves', [])
        self.disperse_curves = kwargs.get('disperse_curves', [])
        self.corner_points = kwargs.get('corner_points', [])
        from deva_common_msgs.msg import Point2d
        self.direction_pixcoord = kwargs.get('direction_pixcoord', Point2d())
        self.confidence = kwargs.get('confidence', float())
        self.depth_carcoord = kwargs.get('depth_carcoord', float())
        self.is_occupied = kwargs.get('is_occupied', bool())
        self.is_stable_tracked = kwargs.get('is_stable_tracked', bool())
        self.occupied_confidence = kwargs.get('occupied_confidence', float())
        self.static_obstacles = kwargs.get('static_obstacles', [])
        self.pixel_points = kwargs.get('pixel_points', [])

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
        if self.dims != other.dims:
            return False
        if self.pose != other.pose:
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
        if self.direction_pixcoord != other.direction_pixcoord:
            return False
        if self.confidence != other.confidence:
            return False
        if self.depth_carcoord != other.depth_carcoord:
            return False
        if self.is_occupied != other.is_occupied:
            return False
        if self.is_stable_tracked != other.is_stable_tracked:
            return False
        if self.occupied_confidence != other.occupied_confidence:
            return False
        if self.static_obstacles != other.static_obstacles:
            return False
        if self.pixel_points != other.pixel_points:
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
    def dims(self):
        """Message field 'dims'."""
        return self._dims

    @dims.setter
    def dims(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'dims' field must be a sub message of type 'Point'"
        self._dims = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from deva_localization_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

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
    def direction_pixcoord(self):
        """Message field 'direction_pixcoord'."""
        return self._direction_pixcoord

    @direction_pixcoord.setter
    def direction_pixcoord(self, value):
        if __debug__:
            from deva_common_msgs.msg import Point2d
            assert \
                isinstance(value, Point2d), \
                "The 'direction_pixcoord' field must be a sub message of type 'Point2d'"
        self._direction_pixcoord = value

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
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value

    @builtins.property
    def depth_carcoord(self):
        """Message field 'depth_carcoord'."""
        return self._depth_carcoord

    @depth_carcoord.setter
    def depth_carcoord(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'depth_carcoord' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'depth_carcoord' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._depth_carcoord = value

    @builtins.property
    def is_occupied(self):
        """Message field 'is_occupied'."""
        return self._is_occupied

    @is_occupied.setter
    def is_occupied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_occupied' field must be of type 'bool'"
        self._is_occupied = value

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

    @builtins.property
    def occupied_confidence(self):
        """Message field 'occupied_confidence'."""
        return self._occupied_confidence

    @occupied_confidence.setter
    def occupied_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'occupied_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'occupied_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._occupied_confidence = value

    @builtins.property
    def static_obstacles(self):
        """Message field 'static_obstacles'."""
        return self._static_obstacles

    @static_obstacles.setter
    def static_obstacles(self, value):
        if __debug__:
            from deva_perception_msgs.msg import StaticObstacle
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
                 all(isinstance(v, StaticObstacle) for v in value) and
                 True), \
                "The 'static_obstacles' field must be a set or sequence and each value of type 'StaticObstacle'"
        self._static_obstacles = value

    @builtins.property
    def pixel_points(self):
        """Message field 'pixel_points'."""
        return self._pixel_points

    @pixel_points.setter
    def pixel_points(self, value):
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
                "The 'pixel_points' field must be a set or sequence and each value of type 'Point2d'"
        self._pixel_points = value
