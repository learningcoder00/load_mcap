# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs2:msg/TreeTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TreeTrajectory(type):
    """Metaclass of message 'TreeTrajectory'."""

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
                'deva_planning_msgs2.msg.TreeTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tree_trajectory
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tree_trajectory
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tree_trajectory
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tree_trajectory
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tree_trajectory

            from deva_planning_msgs2.msg import String2Double
            if String2Double.__class__._TYPE_SUPPORT is None:
                String2Double.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import TrajectoryPoint
            if TrajectoryPoint.__class__._TYPE_SUPPORT is None:
                TrajectoryPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TreeTrajectory(metaclass=Metaclass_TreeTrajectory):
    """Message class 'TreeTrajectory'."""

    __slots__ = [
        '_obs_id',
        '_confidence',
        '_trajectory_points',
        '_traj_score',
    ]

    _fields_and_field_types = {
        'obs_id': 'string',
        'confidence': 'double',
        'trajectory_points': 'sequence<deva_planning_msgs2/TrajectoryPoint>',
        'traj_score': 'sequence<deva_planning_msgs2/String2Double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'TrajectoryPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'String2Double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.obs_id = kwargs.get('obs_id', str())
        self.confidence = kwargs.get('confidence', float())
        self.trajectory_points = kwargs.get('trajectory_points', [])
        self.traj_score = kwargs.get('traj_score', [])

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
        if self.obs_id != other.obs_id:
            return False
        if self.confidence != other.confidence:
            return False
        if self.trajectory_points != other.trajectory_points:
            return False
        if self.traj_score != other.traj_score:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def obs_id(self):
        """Message field 'obs_id'."""
        return self._obs_id

    @obs_id.setter
    def obs_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'obs_id' field must be of type 'str'"
        self._obs_id = value

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
    def trajectory_points(self):
        """Message field 'trajectory_points'."""
        return self._trajectory_points

    @trajectory_points.setter
    def trajectory_points(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import TrajectoryPoint
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
                "The 'trajectory_points' field must be a set or sequence and each value of type 'TrajectoryPoint'"
        self._trajectory_points = value

    @builtins.property
    def traj_score(self):
        """Message field 'traj_score'."""
        return self._traj_score

    @traj_score.setter
    def traj_score(self, value):
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
                "The 'traj_score' field must be a set or sequence and each value of type 'String2Double'"
        self._traj_score = value
