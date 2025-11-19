# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/PerceptionResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PerceptionResult(type):
    """Metaclass of message 'PerceptionResult'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'deva_perception_msgs.msg.PerceptionResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__perception_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__perception_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__perception_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__perception_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__perception_result

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_perception_msgs.msg import Area
            if Area.__class__._TYPE_SUPPORT is None:
                Area.__class__.__import_type_support__()

            from deva_perception_msgs.msg import CenterLine
            if CenterLine.__class__._TYPE_SUPPORT is None:
                CenterLine.__class__.__import_type_support__()

            from deva_perception_msgs.msg import Crosswalk
            if Crosswalk.__class__._TYPE_SUPPORT is None:
                Crosswalk.__class__.__import_type_support__()

            from deva_perception_msgs.msg import ForkPoint
            if ForkPoint.__class__._TYPE_SUPPORT is None:
                ForkPoint.__class__.__import_type_support__()

            from deva_perception_msgs.msg import MovingObstacle
            if MovingObstacle.__class__._TYPE_SUPPORT is None:
                MovingObstacle.__class__.__import_type_support__()

            from deva_perception_msgs.msg import MutableObstacle
            if MutableObstacle.__class__._TYPE_SUPPORT is None:
                MutableObstacle.__class__.__import_type_support__()

            from deva_perception_msgs.msg import NoparkingZone
            if NoparkingZone.__class__._TYPE_SUPPORT is None:
                NoparkingZone.__class__.__import_type_support__()

            from deva_perception_msgs.msg import STBoundary
            if STBoundary.__class__._TYPE_SUPPORT is None:
                STBoundary.__class__.__import_type_support__()

            from deva_perception_msgs.msg import StaticObstacle
            if StaticObstacle.__class__._TYPE_SUPPORT is None:
                StaticObstacle.__class__.__import_type_support__()

            from deva_perception_msgs.msg import SteeringArrow
            if SteeringArrow.__class__._TYPE_SUPPORT is None:
                SteeringArrow.__class__.__import_type_support__()

            from deva_perception_msgs.msg import TrafficLight
            if TrafficLight.__class__._TYPE_SUPPORT is None:
                TrafficLight.__class__.__import_type_support__()

            from deva_perception_msgs.msg import USTBoundary
            if USTBoundary.__class__._TYPE_SUPPORT is None:
                USTBoundary.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PerceptionResult(metaclass=Metaclass_PerceptionResult):
    """Message class 'PerceptionResult'."""

    __slots__ = [
        '_header',
        '_translation',
        '_orientation',
        '_st_boundaries',
        '_ust_boundaries',
        '_crosswalks',
        '_steering_arrows',
        '_noparking_zones',
        '_areas',
        '_moving_obstacles',
        '_general_static_obstacles',
        '_traffic_light_obstacles',
        '_mutable_obstacles',
        '_center_lines',
        '_fork_points',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'translation': 'geometry_msgs/Vector3',
        'orientation': 'geometry_msgs/Quaternion',
        'st_boundaries': 'sequence<deva_perception_msgs/STBoundary>',
        'ust_boundaries': 'sequence<deva_perception_msgs/USTBoundary>',
        'crosswalks': 'sequence<deva_perception_msgs/Crosswalk>',
        'steering_arrows': 'sequence<deva_perception_msgs/SteeringArrow>',
        'noparking_zones': 'sequence<deva_perception_msgs/NoparkingZone>',
        'areas': 'sequence<deva_perception_msgs/Area>',
        'moving_obstacles': 'sequence<deva_perception_msgs/MovingObstacle>',
        'general_static_obstacles': 'sequence<deva_perception_msgs/StaticObstacle>',
        'traffic_light_obstacles': 'sequence<deva_perception_msgs/TrafficLight>',
        'mutable_obstacles': 'sequence<deva_perception_msgs/MutableObstacle>',
        'center_lines': 'sequence<deva_perception_msgs/CenterLine>',
        'fork_points': 'sequence<deva_perception_msgs/ForkPoint>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'STBoundary')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'USTBoundary')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'Crosswalk')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'SteeringArrow')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'NoparkingZone')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'Area')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'MovingObstacle')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'StaticObstacle')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'TrafficLight')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'MutableObstacle')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'CenterLine')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ForkPoint')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Vector3
        self.translation = kwargs.get('translation', Vector3())
        from geometry_msgs.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        self.st_boundaries = kwargs.get('st_boundaries', [])
        self.ust_boundaries = kwargs.get('ust_boundaries', [])
        self.crosswalks = kwargs.get('crosswalks', [])
        self.steering_arrows = kwargs.get('steering_arrows', [])
        self.noparking_zones = kwargs.get('noparking_zones', [])
        self.areas = kwargs.get('areas', [])
        self.moving_obstacles = kwargs.get('moving_obstacles', [])
        self.general_static_obstacles = kwargs.get('general_static_obstacles', [])
        self.traffic_light_obstacles = kwargs.get('traffic_light_obstacles', [])
        self.mutable_obstacles = kwargs.get('mutable_obstacles', [])
        self.center_lines = kwargs.get('center_lines', [])
        self.fork_points = kwargs.get('fork_points', [])

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
        if self.translation != other.translation:
            return False
        if self.orientation != other.orientation:
            return False
        if self.st_boundaries != other.st_boundaries:
            return False
        if self.ust_boundaries != other.ust_boundaries:
            return False
        if self.crosswalks != other.crosswalks:
            return False
        if self.steering_arrows != other.steering_arrows:
            return False
        if self.noparking_zones != other.noparking_zones:
            return False
        if self.areas != other.areas:
            return False
        if self.moving_obstacles != other.moving_obstacles:
            return False
        if self.general_static_obstacles != other.general_static_obstacles:
            return False
        if self.traffic_light_obstacles != other.traffic_light_obstacles:
            return False
        if self.mutable_obstacles != other.mutable_obstacles:
            return False
        if self.center_lines != other.center_lines:
            return False
        if self.fork_points != other.fork_points:
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
    def translation(self):
        """Message field 'translation'."""
        return self._translation

    @translation.setter
    def translation(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'translation' field must be a sub message of type 'Vector3'"
        self._translation = value

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'orientation' field must be a sub message of type 'Quaternion'"
        self._orientation = value

    @builtins.property
    def st_boundaries(self):
        """Message field 'st_boundaries'."""
        return self._st_boundaries

    @st_boundaries.setter
    def st_boundaries(self, value):
        if __debug__:
            from deva_perception_msgs.msg import STBoundary
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
                 all(isinstance(v, STBoundary) for v in value) and
                 True), \
                "The 'st_boundaries' field must be a set or sequence and each value of type 'STBoundary'"
        self._st_boundaries = value

    @builtins.property
    def ust_boundaries(self):
        """Message field 'ust_boundaries'."""
        return self._ust_boundaries

    @ust_boundaries.setter
    def ust_boundaries(self, value):
        if __debug__:
            from deva_perception_msgs.msg import USTBoundary
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
                 all(isinstance(v, USTBoundary) for v in value) and
                 True), \
                "The 'ust_boundaries' field must be a set or sequence and each value of type 'USTBoundary'"
        self._ust_boundaries = value

    @builtins.property
    def crosswalks(self):
        """Message field 'crosswalks'."""
        return self._crosswalks

    @crosswalks.setter
    def crosswalks(self, value):
        if __debug__:
            from deva_perception_msgs.msg import Crosswalk
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
                 all(isinstance(v, Crosswalk) for v in value) and
                 True), \
                "The 'crosswalks' field must be a set or sequence and each value of type 'Crosswalk'"
        self._crosswalks = value

    @builtins.property
    def steering_arrows(self):
        """Message field 'steering_arrows'."""
        return self._steering_arrows

    @steering_arrows.setter
    def steering_arrows(self, value):
        if __debug__:
            from deva_perception_msgs.msg import SteeringArrow
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
                 all(isinstance(v, SteeringArrow) for v in value) and
                 True), \
                "The 'steering_arrows' field must be a set or sequence and each value of type 'SteeringArrow'"
        self._steering_arrows = value

    @builtins.property
    def noparking_zones(self):
        """Message field 'noparking_zones'."""
        return self._noparking_zones

    @noparking_zones.setter
    def noparking_zones(self, value):
        if __debug__:
            from deva_perception_msgs.msg import NoparkingZone
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
                 all(isinstance(v, NoparkingZone) for v in value) and
                 True), \
                "The 'noparking_zones' field must be a set or sequence and each value of type 'NoparkingZone'"
        self._noparking_zones = value

    @builtins.property
    def areas(self):
        """Message field 'areas'."""
        return self._areas

    @areas.setter
    def areas(self, value):
        if __debug__:
            from deva_perception_msgs.msg import Area
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
                 all(isinstance(v, Area) for v in value) and
                 True), \
                "The 'areas' field must be a set or sequence and each value of type 'Area'"
        self._areas = value

    @builtins.property
    def moving_obstacles(self):
        """Message field 'moving_obstacles'."""
        return self._moving_obstacles

    @moving_obstacles.setter
    def moving_obstacles(self, value):
        if __debug__:
            from deva_perception_msgs.msg import MovingObstacle
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
                 all(isinstance(v, MovingObstacle) for v in value) and
                 True), \
                "The 'moving_obstacles' field must be a set or sequence and each value of type 'MovingObstacle'"
        self._moving_obstacles = value

    @builtins.property
    def general_static_obstacles(self):
        """Message field 'general_static_obstacles'."""
        return self._general_static_obstacles

    @general_static_obstacles.setter
    def general_static_obstacles(self, value):
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
                "The 'general_static_obstacles' field must be a set or sequence and each value of type 'StaticObstacle'"
        self._general_static_obstacles = value

    @builtins.property
    def traffic_light_obstacles(self):
        """Message field 'traffic_light_obstacles'."""
        return self._traffic_light_obstacles

    @traffic_light_obstacles.setter
    def traffic_light_obstacles(self, value):
        if __debug__:
            from deva_perception_msgs.msg import TrafficLight
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
                 all(isinstance(v, TrafficLight) for v in value) and
                 True), \
                "The 'traffic_light_obstacles' field must be a set or sequence and each value of type 'TrafficLight'"
        self._traffic_light_obstacles = value

    @builtins.property
    def mutable_obstacles(self):
        """Message field 'mutable_obstacles'."""
        return self._mutable_obstacles

    @mutable_obstacles.setter
    def mutable_obstacles(self, value):
        if __debug__:
            from deva_perception_msgs.msg import MutableObstacle
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
                 all(isinstance(v, MutableObstacle) for v in value) and
                 True), \
                "The 'mutable_obstacles' field must be a set or sequence and each value of type 'MutableObstacle'"
        self._mutable_obstacles = value

    @builtins.property
    def center_lines(self):
        """Message field 'center_lines'."""
        return self._center_lines

    @center_lines.setter
    def center_lines(self, value):
        if __debug__:
            from deva_perception_msgs.msg import CenterLine
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
                 all(isinstance(v, CenterLine) for v in value) and
                 True), \
                "The 'center_lines' field must be a set or sequence and each value of type 'CenterLine'"
        self._center_lines = value

    @builtins.property
    def fork_points(self):
        """Message field 'fork_points'."""
        return self._fork_points

    @fork_points.setter
    def fork_points(self, value):
        if __debug__:
            from deva_perception_msgs.msg import ForkPoint
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
                 all(isinstance(v, ForkPoint) for v in value) and
                 True), \
                "The 'fork_points' field must be a set or sequence and each value of type 'ForkPoint'"
        self._fork_points = value
