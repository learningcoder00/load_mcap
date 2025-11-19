# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs2:msg/NavOpenspaceDebugInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'xy_bounds'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavOpenspaceDebugInfo(type):
    """Metaclass of message 'NavOpenspaceDebugInfo'."""

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
            module = import_type_support('deva_planning_msgs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_planning_msgs2.msg.NavOpenspaceDebugInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__nav_openspace_debug_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__nav_openspace_debug_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__nav_openspace_debug_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__nav_openspace_debug_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__nav_openspace_debug_info

            from deva_planning_msgs2.msg import NavOpenspaceObstacle
            if NavOpenspaceObstacle.__class__._TYPE_SUPPORT is None:
                NavOpenspaceObstacle.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import NavOpenspaceParkingSlot
            if NavOpenspaceParkingSlot.__class__._TYPE_SUPPORT is None:
                NavOpenspaceParkingSlot.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import PathData
            if PathData.__class__._TYPE_SUPPORT is None:
                PathData.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import TargetTrajectory
            if TargetTrajectory.__class__._TYPE_SUPPORT is None:
                TargetTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavOpenspaceDebugInfo(metaclass=Metaclass_NavOpenspaceDebugInfo):
    """Message class 'NavOpenspaceDebugInfo'."""

    __slots__ = [
        '_x_s',
        '_y_s',
        '_theta_s',
        '_x_e',
        '_y_e',
        '_theta_e',
        '_xy_bounds',
        '_obstacles_info',
        '_parking_slots',
        '_start_gear',
        '_speed',
        '_keep_start_gear_distance',
        '_kappa',
        '_timestamp',
        '_ref_points',
        '_openspace_planning_status',
        '_last_trajectory',
        '_last_trajectory_timestamp',
        '_last_internal_trajectory_paths',
        '_current_path_index',
        '_is_arrived_path_end',
        '_last_ref_points',
        '_hybrid_astar_search_results',
        '_optimization_results',
    ]

    _fields_and_field_types = {
        'x_s': 'double',
        'y_s': 'double',
        'theta_s': 'double',
        'x_e': 'double',
        'y_e': 'double',
        'theta_e': 'double',
        'xy_bounds': 'sequence<double>',
        'obstacles_info': 'sequence<deva_planning_msgs2/NavOpenspaceObstacle>',
        'parking_slots': 'sequence<deva_planning_msgs2/NavOpenspaceParkingSlot>',
        'start_gear': 'uint32',
        'speed': 'double',
        'keep_start_gear_distance': 'double',
        'kappa': 'double',
        'timestamp': 'double',
        'ref_points': 'sequence<deva_planning_msgs2/PathData>',
        'openspace_planning_status': 'uint32',
        'last_trajectory': 'deva_planning_msgs2/TargetTrajectory',
        'last_trajectory_timestamp': 'double',
        'last_internal_trajectory_paths': 'sequence<deva_planning_msgs2/TargetTrajectory>',
        'current_path_index': 'uint32',
        'is_arrived_path_end': 'boolean',
        'last_ref_points': 'sequence<deva_planning_msgs2/PathData>',
        'hybrid_astar_search_results': 'sequence<deva_planning_msgs2/TargetTrajectory>',
        'optimization_results': 'sequence<deva_planning_msgs2/TargetTrajectory>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'NavOpenspaceObstacle')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'NavOpenspaceParkingSlot')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'PathData')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'TargetTrajectory'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'TargetTrajectory')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'PathData')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'TargetTrajectory')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'TargetTrajectory')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_s = kwargs.get('x_s', float())
        self.y_s = kwargs.get('y_s', float())
        self.theta_s = kwargs.get('theta_s', float())
        self.x_e = kwargs.get('x_e', float())
        self.y_e = kwargs.get('y_e', float())
        self.theta_e = kwargs.get('theta_e', float())
        self.xy_bounds = array.array('d', kwargs.get('xy_bounds', []))
        self.obstacles_info = kwargs.get('obstacles_info', [])
        self.parking_slots = kwargs.get('parking_slots', [])
        self.start_gear = kwargs.get('start_gear', int())
        self.speed = kwargs.get('speed', float())
        self.keep_start_gear_distance = kwargs.get('keep_start_gear_distance', float())
        self.kappa = kwargs.get('kappa', float())
        self.timestamp = kwargs.get('timestamp', float())
        self.ref_points = kwargs.get('ref_points', [])
        self.openspace_planning_status = kwargs.get('openspace_planning_status', int())
        from deva_planning_msgs2.msg import TargetTrajectory
        self.last_trajectory = kwargs.get('last_trajectory', TargetTrajectory())
        self.last_trajectory_timestamp = kwargs.get('last_trajectory_timestamp', float())
        self.last_internal_trajectory_paths = kwargs.get('last_internal_trajectory_paths', [])
        self.current_path_index = kwargs.get('current_path_index', int())
        self.is_arrived_path_end = kwargs.get('is_arrived_path_end', bool())
        self.last_ref_points = kwargs.get('last_ref_points', [])
        self.hybrid_astar_search_results = kwargs.get('hybrid_astar_search_results', [])
        self.optimization_results = kwargs.get('optimization_results', [])

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
        if self.x_s != other.x_s:
            return False
        if self.y_s != other.y_s:
            return False
        if self.theta_s != other.theta_s:
            return False
        if self.x_e != other.x_e:
            return False
        if self.y_e != other.y_e:
            return False
        if self.theta_e != other.theta_e:
            return False
        if self.xy_bounds != other.xy_bounds:
            return False
        if self.obstacles_info != other.obstacles_info:
            return False
        if self.parking_slots != other.parking_slots:
            return False
        if self.start_gear != other.start_gear:
            return False
        if self.speed != other.speed:
            return False
        if self.keep_start_gear_distance != other.keep_start_gear_distance:
            return False
        if self.kappa != other.kappa:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.ref_points != other.ref_points:
            return False
        if self.openspace_planning_status != other.openspace_planning_status:
            return False
        if self.last_trajectory != other.last_trajectory:
            return False
        if self.last_trajectory_timestamp != other.last_trajectory_timestamp:
            return False
        if self.last_internal_trajectory_paths != other.last_internal_trajectory_paths:
            return False
        if self.current_path_index != other.current_path_index:
            return False
        if self.is_arrived_path_end != other.is_arrived_path_end:
            return False
        if self.last_ref_points != other.last_ref_points:
            return False
        if self.hybrid_astar_search_results != other.hybrid_astar_search_results:
            return False
        if self.optimization_results != other.optimization_results:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x_s(self):
        """Message field 'x_s'."""
        return self._x_s

    @x_s.setter
    def x_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_s = value

    @builtins.property
    def y_s(self):
        """Message field 'y_s'."""
        return self._y_s

    @y_s.setter
    def y_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_s = value

    @builtins.property
    def theta_s(self):
        """Message field 'theta_s'."""
        return self._theta_s

    @theta_s.setter
    def theta_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_s = value

    @builtins.property
    def x_e(self):
        """Message field 'x_e'."""
        return self._x_e

    @x_e.setter
    def x_e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_e' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_e' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_e = value

    @builtins.property
    def y_e(self):
        """Message field 'y_e'."""
        return self._y_e

    @y_e.setter
    def y_e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_e' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_e' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_e = value

    @builtins.property
    def theta_e(self):
        """Message field 'theta_e'."""
        return self._theta_e

    @theta_e.setter
    def theta_e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_e' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_e' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_e = value

    @builtins.property
    def xy_bounds(self):
        """Message field 'xy_bounds'."""
        return self._xy_bounds

    @xy_bounds.setter
    def xy_bounds(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'xy_bounds' array.array() must have the type code of 'd'"
            self._xy_bounds = value
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
                "The 'xy_bounds' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._xy_bounds = array.array('d', value)

    @builtins.property
    def obstacles_info(self):
        """Message field 'obstacles_info'."""
        return self._obstacles_info

    @obstacles_info.setter
    def obstacles_info(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import NavOpenspaceObstacle
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
                 all(isinstance(v, NavOpenspaceObstacle) for v in value) and
                 True), \
                "The 'obstacles_info' field must be a set or sequence and each value of type 'NavOpenspaceObstacle'"
        self._obstacles_info = value

    @builtins.property
    def parking_slots(self):
        """Message field 'parking_slots'."""
        return self._parking_slots

    @parking_slots.setter
    def parking_slots(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import NavOpenspaceParkingSlot
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
                 all(isinstance(v, NavOpenspaceParkingSlot) for v in value) and
                 True), \
                "The 'parking_slots' field must be a set or sequence and each value of type 'NavOpenspaceParkingSlot'"
        self._parking_slots = value

    @builtins.property
    def start_gear(self):
        """Message field 'start_gear'."""
        return self._start_gear

    @start_gear.setter
    def start_gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_gear' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'start_gear' field must be an unsigned integer in [0, 4294967295]"
        self._start_gear = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed = value

    @builtins.property
    def keep_start_gear_distance(self):
        """Message field 'keep_start_gear_distance'."""
        return self._keep_start_gear_distance

    @keep_start_gear_distance.setter
    def keep_start_gear_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'keep_start_gear_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'keep_start_gear_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._keep_start_gear_distance = value

    @builtins.property
    def kappa(self):
        """Message field 'kappa'."""
        return self._kappa

    @kappa.setter
    def kappa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kappa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kappa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kappa = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp = value

    @builtins.property
    def ref_points(self):
        """Message field 'ref_points'."""
        return self._ref_points

    @ref_points.setter
    def ref_points(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import PathData
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
                 all(isinstance(v, PathData) for v in value) and
                 True), \
                "The 'ref_points' field must be a set or sequence and each value of type 'PathData'"
        self._ref_points = value

    @builtins.property
    def openspace_planning_status(self):
        """Message field 'openspace_planning_status'."""
        return self._openspace_planning_status

    @openspace_planning_status.setter
    def openspace_planning_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'openspace_planning_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'openspace_planning_status' field must be an unsigned integer in [0, 4294967295]"
        self._openspace_planning_status = value

    @builtins.property
    def last_trajectory(self):
        """Message field 'last_trajectory'."""
        return self._last_trajectory

    @last_trajectory.setter
    def last_trajectory(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import TargetTrajectory
            assert \
                isinstance(value, TargetTrajectory), \
                "The 'last_trajectory' field must be a sub message of type 'TargetTrajectory'"
        self._last_trajectory = value

    @builtins.property
    def last_trajectory_timestamp(self):
        """Message field 'last_trajectory_timestamp'."""
        return self._last_trajectory_timestamp

    @last_trajectory_timestamp.setter
    def last_trajectory_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'last_trajectory_timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'last_trajectory_timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._last_trajectory_timestamp = value

    @builtins.property
    def last_internal_trajectory_paths(self):
        """Message field 'last_internal_trajectory_paths'."""
        return self._last_internal_trajectory_paths

    @last_internal_trajectory_paths.setter
    def last_internal_trajectory_paths(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import TargetTrajectory
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
                 all(isinstance(v, TargetTrajectory) for v in value) and
                 True), \
                "The 'last_internal_trajectory_paths' field must be a set or sequence and each value of type 'TargetTrajectory'"
        self._last_internal_trajectory_paths = value

    @builtins.property
    def current_path_index(self):
        """Message field 'current_path_index'."""
        return self._current_path_index

    @current_path_index.setter
    def current_path_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_path_index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'current_path_index' field must be an unsigned integer in [0, 4294967295]"
        self._current_path_index = value

    @builtins.property
    def is_arrived_path_end(self):
        """Message field 'is_arrived_path_end'."""
        return self._is_arrived_path_end

    @is_arrived_path_end.setter
    def is_arrived_path_end(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_arrived_path_end' field must be of type 'bool'"
        self._is_arrived_path_end = value

    @builtins.property
    def last_ref_points(self):
        """Message field 'last_ref_points'."""
        return self._last_ref_points

    @last_ref_points.setter
    def last_ref_points(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import PathData
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
                 all(isinstance(v, PathData) for v in value) and
                 True), \
                "The 'last_ref_points' field must be a set or sequence and each value of type 'PathData'"
        self._last_ref_points = value

    @builtins.property
    def hybrid_astar_search_results(self):
        """Message field 'hybrid_astar_search_results'."""
        return self._hybrid_astar_search_results

    @hybrid_astar_search_results.setter
    def hybrid_astar_search_results(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import TargetTrajectory
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
                 all(isinstance(v, TargetTrajectory) for v in value) and
                 True), \
                "The 'hybrid_astar_search_results' field must be a set or sequence and each value of type 'TargetTrajectory'"
        self._hybrid_astar_search_results = value

    @builtins.property
    def optimization_results(self):
        """Message field 'optimization_results'."""
        return self._optimization_results

    @optimization_results.setter
    def optimization_results(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import TargetTrajectory
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
                 all(isinstance(v, TargetTrajectory) for v in value) and
                 True), \
                "The 'optimization_results' field must be a set or sequence and each value of type 'TargetTrajectory'"
        self._optimization_results = value
